#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_832B2720"))) PPC_WEAK_FUNC(sub_832B2720);
PPC_FUNC_IMPL(__imp__sub_832B2720) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832B2728;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31748
	ctx.r29.s64 = -2080636928;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r11,r29,32504
	ctx.r11.s64 = ctx.r29.s64 + 32504;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x832b1a90
	ctx.lr = 0x832B2748;
	sub_832B1A90(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,32504(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32504);
	// bl 0x832bf170
	ctx.lr = 0x832B2758;
	sub_832BF170(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B2760"))) PPC_WEAK_FUNC(sub_832B2760);
PPC_FUNC_IMPL(__imp__sub_832B2760) {
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
	// bl 0x832bf3c0
	ctx.lr = 0x832B2778;
	sub_832BF3C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832b2798
	if (!cr6.eq) goto loc_832B2798;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r4,r11,-25636
	ctx.r4.s64 = ctx.r11.s64 + -25636;
	// addi r3,r10,-30944
	ctx.r3.s64 = ctx.r10.s64 + -30944;
	// bl 0x83298338
	ctx.lr = 0x832B2798;
	sub_83298338(ctx, base);
loc_832B2798:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832bf350
	ctx.lr = 0x832B27A0;
	sub_832BF350(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832bf318
	ctx.lr = 0x832B27A8;
	sub_832BF318(ctx, base);
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,32504
	ctx.r11.s64 = ctx.r11.s64 + 32504;
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// bl 0x832b1a40
	ctx.lr = 0x832B27BC;
	sub_832B1A40(ctx, base);
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

__attribute__((alias("__imp__sub_832B27D4"))) PPC_WEAK_FUNC(sub_832B27D4);
PPC_FUNC_IMPL(__imp__sub_832B27D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B27D8"))) PPC_WEAK_FUNC(sub_832B27D8);
PPC_FUNC_IMPL(__imp__sub_832B27D8) {
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
	// cmplwi cr6,r3,4
	cr6.compare<uint32_t>(ctx.r3.u32, 4, xer);
	// ble cr6,0x832b2810
	if (!cr6.gt) goto loc_832B2810;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r4,r11,-25556
	ctx.r4.s64 = ctx.r11.s64 + -25556;
	// addi r3,r10,-30944
	ctx.r3.s64 = ctx.r10.s64 + -30944;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x832982e8
	ctx.lr = 0x832B2810;
	sub_832982E8(ctx, base);
loc_832B2810:
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r31,r11,32504
	ctx.r31.s64 = ctx.r11.s64 + 32504;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x832bf2c8
	ctx.lr = 0x832B2820;
	sub_832BF2C8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832b28b8
	if (cr6.lt) goto loc_832B28B8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// bl 0x832bf5d0
	ctx.lr = 0x832B2834;
	sub_832BF5D0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832b28b8
	if (cr6.lt) goto loc_832B28B8;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// bl 0x832bf720
	ctx.lr = 0x832B2850;
	sub_832BF720(ctx, base);
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x832a6b28
	ctx.lr = 0x832B2858;
	sub_832A6B28(ctx, base);
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// bl 0x832a6c08
	ctx.lr = 0x832B2860;
	sub_832A6C08(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r11,10080
	ctx.r4.s64 = ctx.r11.s64 + 10080;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x832a1350
	ctx.lr = 0x832B2874;
	sub_832A1350(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832b28b8
	if (!cr6.gt) goto loc_832B28B8;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x832bf320
	ctx.lr = 0x832B2894;
	sub_832BF320(ctx, base);
	// lbz r11,190(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 190);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// beq cr6,0x832b28cc
	if (cr6.eq) goto loc_832B28CC;
	// stb r30,190(r31)
	PPC_STORE_U8(ctx.r31.u32 + 190, ctx.r30.u8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x832a6c30
	ctx.lr = 0x832B28B0;
	sub_832A6C30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x832b28cc
	if (!cr6.lt) goto loc_832B28CC;
loc_832B28B8:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r4,r11,-25592
	ctx.r4.s64 = ctx.r11.s64 + -25592;
	// addi r3,r10,-30944
	ctx.r3.s64 = ctx.r10.s64 + -30944;
	// bl 0x832982e8
	ctx.lr = 0x832B28CC;
	sub_832982E8(ctx, base);
loc_832B28CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B28E4"))) PPC_WEAK_FUNC(sub_832B28E4);
PPC_FUNC_IMPL(__imp__sub_832B28E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B28E8"))) PPC_WEAK_FUNC(sub_832B28E8);
PPC_FUNC_IMPL(__imp__sub_832B28E8) {
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
	// bl 0x832a6bf8
	ctx.lr = 0x832B28F8;
	sub_832A6BF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832b2944
	if (!cr6.eq) goto loc_832B2944;
	// bl 0x832b16c0
	ctx.lr = 0x832B2904;
	sub_832B16C0(ctx, base);
	// bl 0x83254150
	ctx.lr = 0x832B2908;
	sub_83254150(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// addi r8,r11,-30944
	ctx.r8.s64 = ctx.r11.s64 + -30944;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r10,-25532
	ctx.r5.s64 = ctx.r10.s64 + -25532;
	// addi r4,r9,-31128
	ctx.r4.s64 = ctx.r9.s64 + -31128;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x83298338
	ctx.lr = 0x832B292C;
	sub_83298338(ctx, base);
loc_832B292C:
	// lis r3,-32767
	ctx.r3.s64 = -2147418112;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_832B2944:
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832b292c
	if (cr6.eq) goto loc_832B292C;
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B2964"))) PPC_WEAK_FUNC(sub_832B2964);
PPC_FUNC_IMPL(__imp__sub_832B2964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B2968"))) PPC_WEAK_FUNC(sub_832B2968);
PPC_FUNC_IMPL(__imp__sub_832B2968) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x832B2970;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832b29ac
	if (!cr6.eq) goto loc_832B29AC;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r4,r11,-25436
	ctx.r4.s64 = ctx.r11.s64 + -25436;
	// addi r3,r10,-30944
	ctx.r3.s64 = ctx.r10.s64 + -30944;
	// bl 0x83298338
	ctx.lr = 0x832B299C;
	sub_83298338(ctx, base);
	// lis r3,-32767
	ctx.r3.s64 = -2147418112;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_832B29AC:
	// clrlwi r11,r5,20
	ctx.r11.u64 = ctx.r5.u32 & 0xFFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832b2ac8
	if (!cr6.eq) goto loc_832B2AC8;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x832b2ac8
	if (cr6.eq) goto loc_832B2AC8;
	// cmplwi cr6,r28,4
	cr6.compare<uint32_t>(ctx.r28.u32, 4, xer);
	// ble cr6,0x832b29d8
	if (!cr6.gt) goto loc_832B29D8;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,-25460
	ctx.r4.s64 = ctx.r11.s64 + -25460;
	// b 0x832b2ad0
	goto loc_832B2AD0;
loc_832B29D8:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r11,-25468
	ctx.r3.s64 = ctx.r11.s64 + -25468;
	// bl 0x832b2398
	ctx.lr = 0x832B29E8;
	sub_832B2398(ctx, base);
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,32504
	ctx.r31.s64 = ctx.r11.s64 + 32504;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x832b19f0
	ctx.lr = 0x832B29FC;
	sub_832B19F0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832b2a74
	if (cr6.eq) goto loc_832B2A74;
	// bl 0x832bf2c8
	ctx.lr = 0x832B2A0C;
	sub_832BF2C8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832b2a68
	if (cr6.lt) goto loc_832B2A68;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x832beee0
	ctx.lr = 0x832B2A28;
	sub_832BEEE0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832b2a60
	if (cr6.eq) goto loc_832B2A60;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,10080
	ctx.r4.s64 = ctx.r11.s64 + 10080;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x832a1350
	ctx.lr = 0x832B2A48;
	sub_832A1350(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt cr6,0x832b2a98
	if (cr6.gt) goto loc_832B2A98;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x832bf0d8
	ctx.lr = 0x832B2A60;
	sub_832BF0D8(ctx, base);
loc_832B2A60:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832bf318
	ctx.lr = 0x832B2A68;
	sub_832BF318(ctx, base);
loc_832B2A68:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x832b1a40
	ctx.lr = 0x832B2A74;
	sub_832B1A40(ctx, base);
loc_832B2A74:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r4,r11,-25500
	ctx.r4.s64 = ctx.r11.s64 + -25500;
	// addi r3,r10,-30944
	ctx.r3.s64 = ctx.r10.s64 + -30944;
	// bl 0x83298338
	ctx.lr = 0x832B2A88;
	sub_83298338(ctx, base);
	// lis r3,-32767
	ctx.r3.s64 = -2147418112;
	// ori r3,r3,12
	ctx.r3.u64 = ctx.r3.u64 | 12;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_832B2A98:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r7,r31,4
	ctx.r7.s64 = ctx.r31.s64 + 4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832bf320
	ctx.lr = 0x832B2AB0;
	sub_832BF320(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832bf6d8
	ctx.lr = 0x832B2ABC;
	sub_832BF6D8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_832B2AC8:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r4,r11,-25524
	ctx.r4.s64 = ctx.r11.s64 + -25524;
loc_832B2AD0:
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r3,r10,-30944
	ctx.r3.s64 = ctx.r10.s64 + -30944;
	// bl 0x83298338
	ctx.lr = 0x832B2ADC;
	sub_83298338(ctx, base);
	// lis r3,-32767
	ctx.r3.s64 = -2147418112;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B2AEC"))) PPC_WEAK_FUNC(sub_832B2AEC);
PPC_FUNC_IMPL(__imp__sub_832B2AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B2AF0"))) PPC_WEAK_FUNC(sub_832B2AF0);
PPC_FUNC_IMPL(__imp__sub_832B2AF0) {
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
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,25584
	ctx.r3.s64 = ctx.r11.s64 + 25584;
	// bl 0x832b2438
	ctx.lr = 0x832B2B14;
	sub_832B2438(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832b2b24
	if (cr6.eq) goto loc_832B2B24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a13d8
	ctx.lr = 0x832B2B24;
	sub_832A13D8(ctx, base);
loc_832B2B24:
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

__attribute__((alias("__imp__sub_832B2B38"))) PPC_WEAK_FUNC(sub_832B2B38);
PPC_FUNC_IMPL(__imp__sub_832B2B38) {
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
	// std r4,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,8
	cr6.compare<uint32_t>(ctx.r3.u32, 8, xer);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bgt cr6,0x832b2dd0
	if (cr6.gt) goto loc_832B2DD0;
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bdzf 4*cr6+eq,0x832b2bbc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_832B2BBC;
	// bdzf 4*cr6+eq,0x832b2bf0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_832B2BF0;
	// bdzf 4*cr6+eq,0x832b2c48
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_832B2C48;
	// bdzf 4*cr6+eq,0x832b2ca8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_832B2CA8;
	// bdzf 4*cr6+eq,0x832b2ce0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_832B2CE0;
	// bdzf 4*cr6+eq,0x832b2d1c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_832B2D1C;
	// bdzf 4*cr6+eq,0x832b2d58
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_832B2D58;
	// bne cr6,0x832b2d90
	if (!cr6.eq) goto loc_832B2D90;
	// bl 0x82aabcb0
	ctx.lr = 0x832B2BB4;
	sub_82AABCB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x832b2dec
	goto loc_832B2DEC;
loc_832B2BBC:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r4,r11,25548
	ctx.r4.s64 = ctx.r11.s64 + 25548;
	// addi r3,r10,-30944
	ctx.r3.s64 = ctx.r10.s64 + -30944;
	// bl 0x832b2330
	ctx.lr = 0x832B2BD0;
	sub_832B2330(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832b2be4
	if (!cr6.eq) goto loc_832B2BE4;
loc_832B2BD8:
	// lis r30,-32767
	ctx.r30.s64 = -2147418112;
	// ori r30,r30,1
	ctx.r30.u64 = ctx.r30.u64 | 1;
	// b 0x832b2dec
	goto loc_832B2DEC;
loc_832B2BE4:
	// lbz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 68);
	// extsb r30,r11
	ctx.r30.s64 = ctx.r11.s8;
	// b 0x832b2dec
	goto loc_832B2DEC;
loc_832B2BF0:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r9,r11,7
	ctx.r9.s64 = ctx.r11.s64 + 7;
	// addi r3,r10,25548
	ctx.r3.s64 = ctx.r10.s64 + 25548;
	// rlwinm r11,r9,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r8,r11,7
	ctx.r8.s64 = ctx.r11.s64 + 7;
	// lwz r4,-4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// rlwinm r11,r8,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x832b2438
	ctx.lr = 0x832B2C1C;
	sub_832B2438(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832b2c30
	if (cr6.eq) goto loc_832B2C30;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832b2c3c
	if (!cr6.eq) goto loc_832B2C3C;
loc_832B2C30:
	// lis r30,-32767
	ctx.r30.s64 = -2147418112;
	// ori r30,r30,9
	ctx.r30.u64 = ctx.r30.u64 | 9;
	// b 0x832b2dec
	goto loc_832B2DEC;
loc_832B2C3C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x832bf880
	ctx.lr = 0x832B2C44;
	sub_832BF880(ctx, base);
	// b 0x832b2dec
	goto loc_832B2DEC;
loc_832B2C48:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r9,r11,7
	ctx.r9.s64 = ctx.r11.s64 + 7;
	// addi r3,r10,25548
	ctx.r3.s64 = ctx.r10.s64 + 25548;
	// rlwinm r11,r9,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r8,r11,7
	ctx.r8.s64 = ctx.r11.s64 + 7;
	// lwz r4,-4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// rlwinm r11,r8,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x832b2438
	ctx.lr = 0x832B2C74;
	sub_832B2438(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832b2c30
	if (cr6.eq) goto loc_832B2C30;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832b2c30
	if (cr6.eq) goto loc_832B2C30;
	// lbz r10,70(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 70);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// beq cr6,0x832b2dec
	if (cr6.eq) goto loc_832B2DEC;
	// stb r31,70(r11)
	PPC_STORE_U8(ctx.r11.u32 + 70, ctx.r31.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,40
	ctx.r3.s64 = ctx.r11.s64 + 40;
	// bl 0x832a6c30
	ctx.lr = 0x832B2CA4;
	sub_832A6C30(ctx, base);
	// b 0x832b2dec
	goto loc_832B2DEC;
loc_832B2CA8:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r9,r11,7
	ctx.r9.s64 = ctx.r11.s64 + 7;
	// addi r3,r10,25548
	ctx.r3.s64 = ctx.r10.s64 + 25548;
	// rlwinm r11,r9,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x832b2438
	ctx.lr = 0x832B2CC4;
	sub_832B2438(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832b2c30
	if (cr6.eq) goto loc_832B2C30;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832b2c30
	if (cr6.eq) goto loc_832B2C30;
	// lbz r30,70(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 70);
	// b 0x832b2dec
	goto loc_832B2DEC;
loc_832B2CE0:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-31748
	ctx.r10.s64 = -2080636928;
	// addi r9,r11,7
	ctx.r9.s64 = ctx.r11.s64 + 7;
	// addi r31,r10,32504
	ctx.r31.s64 = ctx.r10.s64 + 32504;
	// rlwinm r11,r9,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x832a6ee8
	ctx.lr = 0x832B2D00;
	sub_832A6EE8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x832bf1e0
	ctx.lr = 0x832B2D0C;
	sub_832BF1E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x832a6ef0
	ctx.lr = 0x832B2D18;
	sub_832A6EF0(ctx, base);
	// b 0x832b2dec
	goto loc_832B2DEC;
loc_832B2D1C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-31748
	ctx.r10.s64 = -2080636928;
	// addi r9,r11,7
	ctx.r9.s64 = ctx.r11.s64 + 7;
	// addi r31,r10,32504
	ctx.r31.s64 = ctx.r10.s64 + 32504;
	// rlwinm r11,r9,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x832a6ee8
	ctx.lr = 0x832B2D3C;
	sub_832A6EE8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x832bf238
	ctx.lr = 0x832B2D48;
	sub_832BF238(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x832a6ef0
	ctx.lr = 0x832B2D54;
	sub_832A6EF0(ctx, base);
	// b 0x832b2dec
	goto loc_832B2DEC;
loc_832B2D58:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-31748
	ctx.r10.s64 = -2080636928;
	// addi r9,r11,7
	ctx.r9.s64 = ctx.r11.s64 + 7;
	// addi r31,r10,32504
	ctx.r31.s64 = ctx.r10.s64 + 32504;
	// rlwinm r11,r9,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x832a6ee8
	ctx.lr = 0x832B2D78;
	sub_832A6EE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83102db0
	ctx.lr = 0x832B2D80;
	sub_83102DB0(ctx, base);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x832a6ef0
	ctx.lr = 0x832B2D88;
	sub_832A6EF0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x832b2dec
	goto loc_832B2DEC;
loc_832B2D90:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// addi r8,r11,7
	ctx.r8.s64 = ctx.r11.s64 + 7;
	// addi r4,r10,25548
	ctx.r4.s64 = ctx.r10.s64 + 25548;
	// rlwinm r11,r8,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r3,r9,-30944
	ctx.r3.s64 = ctx.r9.s64 + -30944;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x832b2330
	ctx.lr = 0x832B2DB4;
	sub_832B2330(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832b2bd8
	if (cr6.eq) goto loc_832B2BD8;
	// addi r3,r3,40
	ctx.r3.s64 = ctx.r3.s64 + 40;
	// bl 0x825832e0
	ctx.lr = 0x832B2DC4;
	sub_825832E0(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x832b2dec
	goto loc_832B2DEC;
loc_832B2DD0:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r4,r11,-25416
	ctx.r4.s64 = ctx.r11.s64 + -25416;
	// addi r3,r10,-30944
	ctx.r3.s64 = ctx.r10.s64 + -30944;
	// bl 0x83298338
	ctx.lr = 0x832B2DE4;
	sub_83298338(ctx, base);
	// lis r30,-32767
	ctx.r30.s64 = -2147418112;
	// ori r30,r30,22
	ctx.r30.u64 = ctx.r30.u64 | 22;
loc_832B2DEC:
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

__attribute__((alias("__imp__sub_832B2E08"))) PPC_WEAK_FUNC(sub_832B2E08);
PPC_FUNC_IMPL(__imp__sub_832B2E08) {
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
	// bl 0x832a6bf8
	ctx.lr = 0x832B2E20;
	sub_832A6BF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832b2e68
	if (!cr6.eq) goto loc_832B2E68;
	// bl 0x832b16c0
	ctx.lr = 0x832B2E2C;
	sub_832B16C0(ctx, base);
	// bl 0x83254150
	ctx.lr = 0x832B2E30;
	sub_83254150(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// addi r8,r11,-30944
	ctx.r8.s64 = ctx.r11.s64 + -30944;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r10,-25388
	ctx.r5.s64 = ctx.r10.s64 + -25388;
	// addi r4,r9,-31128
	ctx.r4.s64 = ctx.r9.s64 + -31128;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x83298338
	ctx.lr = 0x832B2E54;
	sub_83298338(ctx, base);
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
loc_832B2E68:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a6c18
	ctx.lr = 0x832B2E70;
	sub_832A6C18(ctx, base);
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

__attribute__((alias("__imp__sub_832B2E84"))) PPC_WEAK_FUNC(sub_832B2E84);
PPC_FUNC_IMPL(__imp__sub_832B2E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B2E88"))) PPC_WEAK_FUNC(sub_832B2E88);
PPC_FUNC_IMPL(__imp__sub_832B2E88) {
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
	// bl 0x832a6bf8
	ctx.lr = 0x832B2E98;
	sub_832A6BF8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832b2ee4
	if (!cr6.eq) goto loc_832B2EE4;
	// bl 0x832b16c0
	ctx.lr = 0x832B2EA4;
	sub_832B16C0(ctx, base);
	// bl 0x83254150
	ctx.lr = 0x832B2EA8;
	sub_83254150(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// addi r8,r11,-30944
	ctx.r8.s64 = ctx.r11.s64 + -30944;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r10,-25380
	ctx.r5.s64 = ctx.r10.s64 + -25380;
	// addi r4,r9,-31128
	ctx.r4.s64 = ctx.r9.s64 + -31128;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x83298338
	ctx.lr = 0x832B2ECC;
	sub_83298338(ctx, base);
	// lis r3,-32767
	ctx.r3.s64 = -2147418112;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_832B2EE4:
	// bl 0x832bf810
	ctx.lr = 0x832B2EE8;
	sub_832BF810(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B2EF8"))) PPC_WEAK_FUNC(sub_832B2EF8);
PPC_FUNC_IMPL(__imp__sub_832B2EF8) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-25364
	ctx.r3.s64 = ctx.r11.s64 + -25364;
	// bl 0x832b2438
	ctx.lr = 0x832B2F1C;
	sub_832B2438(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832b2f40
	if (!cr6.eq) goto loc_832B2F40;
	// lis r3,-32767
	ctx.r3.s64 = -2147418112;
	// ori r3,r3,9
	ctx.r3.u64 = ctx.r3.u64 | 9;
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
loc_832B2F40:
	// bl 0x832bf350
	ctx.lr = 0x832B2F44;
	sub_832BF350(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x832b2f50
	if (cr6.eq) goto loc_832B2F50;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_832B2F50:
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

__attribute__((alias("__imp__sub_832B2F68"))) PPC_WEAK_FUNC(sub_832B2F68);
PPC_FUNC_IMPL(__imp__sub_832B2F68) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832b2fb4
	if (!cr6.eq) goto loc_832B2FB4;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,-25068
	ctx.r4.s64 = ctx.r11.s64 + -25068;
	// addi r3,r10,27400
	ctx.r3.s64 = ctx.r10.s64 + 27400;
	// bl 0x83298338
	ctx.lr = 0x832B2F98;
	sub_83298338(ctx, base);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
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
loc_832B2FB4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832b2ff0
	if (!cr6.eq) goto loc_832B2FF0;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,-25096
	ctx.r4.s64 = ctx.r11.s64 + -25096;
	// addi r3,r10,27400
	ctx.r3.s64 = ctx.r10.s64 + 27400;
	// bl 0x83298338
	ctx.lr = 0x832B2FD4;
	sub_83298338(ctx, base);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
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
loc_832B2FF0:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832b302c
	if (!cr6.eq) goto loc_832B302C;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,-25124
	ctx.r4.s64 = ctx.r11.s64 + -25124;
	// addi r3,r10,27400
	ctx.r3.s64 = ctx.r10.s64 + 27400;
	// bl 0x83298338
	ctx.lr = 0x832B3010;
	sub_83298338(ctx, base);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
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
loc_832B302C:
	// lis r11,-22197
	ctx.r11.s64 = -1454702592;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ori r9,r11,61052
	ctx.r9.u64 = ctx.r11.u64 | 61052;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x832b3070
	if (cr6.eq) goto loc_832B3070;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,-25148
	ctx.r4.s64 = ctx.r11.s64 + -25148;
	// addi r3,r10,27400
	ctx.r3.s64 = ctx.r10.s64 + 27400;
	// bl 0x83298338
	ctx.lr = 0x832B3054;
	sub_83298338(ctx, base);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
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
loc_832B3070:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832b30ac
	if (!cr6.eq) goto loc_832B30AC;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,-25176
	ctx.r4.s64 = ctx.r11.s64 + -25176;
	// addi r3,r10,27400
	ctx.r3.s64 = ctx.r10.s64 + 27400;
	// bl 0x83298338
	ctx.lr = 0x832B3090;
	sub_83298338(ctx, base);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
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
loc_832B30AC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x832b30e8
	if (!cr6.lt) goto loc_832B30E8;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,-25216
	ctx.r4.s64 = ctx.r11.s64 + -25216;
	// addi r3,r10,27400
	ctx.r3.s64 = ctx.r10.s64 + 27400;
	// bl 0x83298338
	ctx.lr = 0x832B30CC;
	sub_83298338(ctx, base);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
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
loc_832B30E8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x832b3124
	if (!cr6.lt) goto loc_832B3124;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,-25256
	ctx.r4.s64 = ctx.r11.s64 + -25256;
	// addi r3,r10,27400
	ctx.r3.s64 = ctx.r10.s64 + 27400;
	// bl 0x83298338
	ctx.lr = 0x832B3108;
	sub_83298338(ctx, base);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
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
loc_832B3124:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x832b3160
	if (!cr6.lt) goto loc_832B3160;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,-25296
	ctx.r4.s64 = ctx.r11.s64 + -25296;
	// addi r3,r10,27400
	ctx.r3.s64 = ctx.r10.s64 + 27400;
	// bl 0x83298338
	ctx.lr = 0x832B3144;
	sub_83298338(ctx, base);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
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
loc_832B3160:
	// bl 0x83296ba8
	ctx.lr = 0x832B3164;
	sub_83296BA8(ctx, base);
	// cmpwi cr6,r3,16
	cr6.compare<int32_t>(ctx.r3.s32, 16, xer);
	// blt cr6,0x832b319c
	if (cr6.lt) goto loc_832B319C;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,-25328
	ctx.r4.s64 = ctx.r11.s64 + -25328;
	// addi r3,r10,27400
	ctx.r3.s64 = ctx.r10.s64 + 27400;
	// bl 0x83298338
	ctx.lr = 0x832B3180;
	sub_83298338(ctx, base);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
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
loc_832B319C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_832B31A8:
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832b31dc
	if (cr6.eq) goto loc_832B31DC;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r9,27
	cr6.compare<int32_t>(ctx.r9.s32, 27, xer);
	// blt cr6,0x832b31a8
	if (cr6.lt) goto loc_832B31A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832ba350
	ctx.lr = 0x832B31C8;
	sub_832BA350(ctx, base);
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
loc_832B31DC:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,19576
	ctx.r9.s64 = ctx.r11.s64 + 19576;
	// lis r8,-32220
	ctx.r8.s64 = -2111569920;
	// lis r7,-32221
	ctx.r7.s64 = -2111635456;
	// addi r4,r8,-25356
	ctx.r4.s64 = ctx.r8.s64 + -25356;
	// addi r3,r7,27400
	ctx.r3.s64 = ctx.r7.s64 + 27400;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwzx r5,r10,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x83298338
	ctx.lr = 0x832B3204;
	sub_83298338(ctx, base);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
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

__attribute__((alias("__imp__sub_832B3220"))) PPC_WEAK_FUNC(sub_832B3220);
PPC_FUNC_IMPL(__imp__sub_832B3220) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832b3260
	if (!cr6.eq) goto loc_832B3260;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,-24912
	ctx.r4.s64 = ctx.r11.s64 + -24912;
	// addi r3,r10,27400
	ctx.r3.s64 = ctx.r10.s64 + 27400;
	// bl 0x83298338
	ctx.lr = 0x832B3248;
	sub_83298338(ctx, base);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_832B3260:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832b3298
	if (!cr6.eq) goto loc_832B3298;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,-24928
	ctx.r4.s64 = ctx.r11.s64 + -24928;
	// addi r3,r10,27400
	ctx.r3.s64 = ctx.r10.s64 + 27400;
	// bl 0x83298338
	ctx.lr = 0x832B3280;
	sub_83298338(ctx, base);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_832B3298:
	// bl 0x832ba4a0
	ctx.lr = 0x832B329C;
	sub_832BA4A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B32AC"))) PPC_WEAK_FUNC(sub_832B32AC);
PPC_FUNC_IMPL(__imp__sub_832B32AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B32B0"))) PPC_WEAK_FUNC(sub_832B32B0);
PPC_FUNC_IMPL(__imp__sub_832B32B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x832B32B8;
	__savegprlr_21(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x832b3820
	if (cr6.eq) goto loc_832B3820;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x832b3820
	if (cr6.eq) goto loc_832B3820;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832b330c
	if (!cr6.eq) goto loc_832B330C;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x832b330c
	if (!cr6.eq) goto loc_832B330C;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r4,r11,-24652
	ctx.r4.s64 = ctx.r11.s64 + -24652;
	// addi r3,r10,-24660
	ctx.r3.s64 = ctx.r10.s64 + -24660;
	// bl 0x83298338
	ctx.lr = 0x832B3300;
	sub_83298338(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_832B330C:
	// lbz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r5,255
	cr6.compare<uint32_t>(ctx.r5.u32, 255, xer);
	// beq cr6,0x832b36e0
	if (cr6.eq) goto loc_832B36E0;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// lis r8,-32221
	ctx.r8.s64 = -2111635456;
	// lis r7,-32238
	ctx.r7.s64 = -2112749568;
	// addi r25,r11,-24888
	ctx.r25.s64 = ctx.r11.s64 + -24888;
	// addi r24,r10,-27264
	ctx.r24.s64 = ctx.r10.s64 + -27264;
	// addi r23,r9,-28912
	ctx.r23.s64 = ctx.r9.s64 + -28912;
	// addi r26,r8,-28908
	ctx.r26.s64 = ctx.r8.s64 + -28908;
	// addi r22,r7,23360
	ctx.r22.s64 = ctx.r7.s64 + 23360;
loc_832B3340:
	// lhz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// cmplwi cr6,r5,1
	cr6.compare<uint32_t>(ctx.r5.u32, 1, xer);
	// add r31,r11,r21
	ctx.r31.u64 = ctx.r11.u64 + ctx.r21.u64;
	// bne cr6,0x832b3390
	if (!cr6.eq) goto loc_832B3390;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83294c00
	ctx.lr = 0x832B3364;
	sub_83294C00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832b3808
	if (cr6.eq) goto loc_832B3808;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r6,12(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832b32b0
	ctx.lr = 0x832B3380;
	sub_832B32B0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832b3820
	if (cr6.eq) goto loc_832B3820;
	// b 0x832b36d4
	goto loc_832B36D4;
loc_832B3390:
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,53
	cr6.compare<uint32_t>(ctx.r11.u32, 53, xer);
	// bgt cr6,0x832b37c4
	if (cr6.gt) goto loc_832B37C4;
	// lis r12,-31957
	ctx.r12.s64 = -2094333952;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,13240
	ctx.r12.s64 = ctx.r12.s64 + 13240;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_832B382C;
	case 1:
		goto loc_832B3490;
	case 2:
		goto loc_832B34C0;
	case 3:
		goto loc_832B34EC;
	case 4:
		goto loc_832B351C;
	case 5:
		goto loc_832B3548;
	case 6:
		goto loc_832B3578;
	case 7:
		goto loc_832B35A8;
	case 8:
		goto loc_832B35D8;
	case 9:
		goto loc_832B37C4;
	case 10:
		goto loc_832B37C4;
	case 11:
		goto loc_832B3608;
	case 12:
		goto loc_832B37C4;
	case 13:
		goto loc_832B37C4;
	case 14:
		goto loc_832B37C4;
	case 15:
		goto loc_832B37C4;
	case 16:
		goto loc_832B37C4;
	case 17:
		goto loc_832B37C4;
	case 18:
		goto loc_832B37C4;
	case 19:
		goto loc_832B37C4;
	case 20:
		goto loc_832B37C4;
	case 21:
		goto loc_832B37C4;
	case 22:
		goto loc_832B37C4;
	case 23:
		goto loc_832B37C4;
	case 24:
		goto loc_832B37C4;
	case 25:
		goto loc_832B37C4;
	case 26:
		goto loc_832B37C4;
	case 27:
		goto loc_832B37C4;
	case 28:
		goto loc_832B37C4;
	case 29:
		goto loc_832B37C4;
	case 30:
		goto loc_832B37C4;
	case 31:
		goto loc_832B37C4;
	case 32:
		goto loc_832B37C4;
	case 33:
		goto loc_832B37C4;
	case 34:
		goto loc_832B37C4;
	case 35:
		goto loc_832B37C4;
	case 36:
		goto loc_832B37C4;
	case 37:
		goto loc_832B37C4;
	case 38:
		goto loc_832B37C4;
	case 39:
		goto loc_832B37C4;
	case 40:
		goto loc_832B37C4;
	case 41:
		goto loc_832B37C4;
	case 42:
		goto loc_832B37C4;
	case 43:
		goto loc_832B37C4;
	case 44:
		goto loc_832B37C4;
	case 45:
		goto loc_832B36EC;
	case 46:
		goto loc_832B3664;
	case 47:
		goto loc_832B3754;
	case 48:
		goto loc_832B3720;
	case 49:
		goto loc_832B3638;
	case 50:
		goto loc_832B37C4;
	case 51:
		goto loc_832B37C4;
	case 52:
		goto loc_832B37C4;
	case 53:
		goto loc_832B3788;
	default:
		return;
	}
	// lwz r25,14380(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14380);
	// lwz r25,13456(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13456);
	// lwz r25,13504(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13504);
	// lwz r25,13548(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13548);
	// lwz r25,13596(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13596);
	// lwz r25,13640(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13640);
	// lwz r25,13688(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13688);
	// lwz r25,13736(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13736);
	// lwz r25,13784(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13784);
	// lwz r25,14276(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14276);
	// lwz r25,14276(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14276);
	// lwz r25,13832(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13832);
	// lwz r25,14276(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14276);
	// lwz r25,14276(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14276);
	// lwz r25,14276(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14276);
	// lwz r25,14276(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14276);
	// lwz r25,14276(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14276);
	// lwz r25,14276(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14276);
	// lwz r25,14276(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14276);
	// lwz r25,14276(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14276);
	// lwz r25,14276(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14276);
	// lwz r25,14276(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14276);
	// lwz r25,14276(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14276);
	// lwz r25,14276(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14276);
	// lwz r25,14276(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14276);
	// lwz r25,14276(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14276);
	// lwz r25,14276(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14276);
	// lwz r25,14276(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14276);
	// lwz r25,14276(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14276);
	// lwz r25,14276(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14276);
	// lwz r25,14276(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14276);
	// lwz r25,14276(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14276);
	// lwz r25,14276(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14276);
	// lwz r25,14276(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14276);
	// lwz r25,14276(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14276);
	// lwz r25,14276(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14276);
	// lwz r25,14276(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14276);
	// lwz r25,14276(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14276);
	// lwz r25,14276(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14276);
	// lwz r25,14276(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14276);
	// lwz r25,14276(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14276);
	// lwz r25,14276(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14276);
	// lwz r25,14276(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14276);
	// lwz r25,14276(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14276);
	// lwz r25,14276(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14276);
	// lwz r25,14060(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14060);
	// lwz r25,13924(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13924);
	// lwz r25,14164(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14164);
	// lwz r25,14112(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14112);
	// lwz r25,13880(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13880);
	// lwz r25,14276(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14276);
	// lwz r25,14276(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14276);
	// lwz r25,14276(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14276);
	// lwz r25,14216(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14216);
loc_832B3490:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// extsb r7,r11
	ctx.r7.s64 = ctx.r11.s8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83294c00
	ctx.lr = 0x832B34AC;
	sub_83294C00(ctx, base);
	// subfic r10,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r3.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r9,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// b 0x832b36b0
	goto loc_832B36B0;
loc_832B34C0:
	// li r5,3
	ctx.r5.s64 = 3;
	// lbz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83294c00
	ctx.lr = 0x832B34D8;
	sub_83294C00(ctx, base);
	// subfic r10,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r3.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r9,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// b 0x832b36b0
	goto loc_832B36B0;
loc_832B34EC:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83294c00
	ctx.lr = 0x832B3508;
	sub_83294C00(ctx, base);
	// subfic r10,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r3.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r9,30
	ctx.r11.u64 = ctx.r9.u32 & 0x3;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// b 0x832b36b0
	goto loc_832B36B0;
loc_832B351C:
	// li r5,5
	ctx.r5.s64 = 5;
	// lhz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83294c00
	ctx.lr = 0x832B3534;
	sub_83294C00(ctx, base);
	// subfic r10,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r3.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r9,30
	ctx.r11.u64 = ctx.r9.u32 & 0x3;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// b 0x832b36b0
	goto loc_832B36B0;
loc_832B3548:
	// li r5,6
	ctx.r5.s64 = 6;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83294c00
	ctx.lr = 0x832B3560;
	sub_83294C00(ctx, base);
	// subfic r11,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r10,29
	ctx.r11.u64 = ctx.r10.u32 & 0x7;
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// b 0x832b36b0
	goto loc_832B36B0;
loc_832B3578:
	// li r5,7
	ctx.r5.s64 = 7;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83294c00
	ctx.lr = 0x832B3590;
	sub_83294C00(ctx, base);
	// subfic r11,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r10,29
	ctx.r11.u64 = ctx.r10.u32 & 0x7;
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// b 0x832b36b0
	goto loc_832B36B0;
loc_832B35A8:
	// li r5,8
	ctx.r5.s64 = 8;
	// ld r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83294c00
	ctx.lr = 0x832B35C0;
	sub_83294C00(ctx, base);
	// subfic r11,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r10,28
	ctx.r11.u64 = ctx.r10.u32 & 0xF;
	// rlwinm r11,r11,0,31,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF9;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// b 0x832b36b0
	goto loc_832B36B0;
loc_832B35D8:
	// li r5,9
	ctx.r5.s64 = 9;
	// ld r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83294c00
	ctx.lr = 0x832B35F0;
	sub_83294C00(ctx, base);
	// subfic r11,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r10,28
	ctx.r11.u64 = ctx.r10.u32 & 0xF;
	// rlwinm r11,r11,0,31,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF9;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// b 0x832b36b0
	goto loc_832B36B0;
loc_832B3608:
	// li r5,13
	ctx.r5.s64 = 13;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83294c00
	ctx.lr = 0x832B3620;
	sub_83294C00(ctx, base);
	// subfic r11,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r10,29
	ctx.r11.u64 = ctx.r10.u32 & 0x7;
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// b 0x832b36b0
	goto loc_832B36B0;
loc_832B3638:
	// li r5,52
	ctx.r5.s64 = 52;
	// lbz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83294c00
	ctx.lr = 0x832B3650;
	sub_83294C00(ctx, base);
	// subfic r10,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r3.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r9,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// b 0x832b36b0
	goto loc_832B36B0;
loc_832B3664:
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83297a40
	ctx.lr = 0x832B3678;
	sub_83297A40(ctx, base);
	// cmpwi cr6,r3,32
	cr6.compare<int32_t>(ctx.r3.s32, 32, xer);
	// bge cr6,0x832b3844
	if (!cr6.lt) goto loc_832B3844;
loc_832B3680:
	// li r27,46
	ctx.r27.s64 = 46;
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
loc_832B3688:
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83294c00
	ctx.lr = 0x832B36A4;
	sub_83294C00(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832b3808
	if (cr6.eq) goto loc_832B3808;
	// bl 0x83295dc8
	ctx.lr = 0x832B36B0;
	sub_83295DC8(ctx, base);
loc_832B36B0:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x832b36d4
	if (cr6.eq) goto loc_832B36D4;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, xer);
	// beq cr6,0x832b36d4
	if (cr6.eq) goto loc_832B36D4;
	// cmpwi cr6,r27,11
	cr6.compare<int32_t>(ctx.r27.s32, 11, xer);
	// beq cr6,0x832b36d4
	if (cr6.eq) goto loc_832B36D4;
	// cmpwi cr6,r27,46
	cr6.compare<int32_t>(ctx.r27.s32, 46, xer);
	// bne cr6,0x832b385c
	if (!cr6.eq) goto loc_832B385C;
loc_832B36D4:
	// lbzu r5,16(r30)
	ea = 16 + ctx.r30.u32;
	ctx.r5.u64 = PPC_LOAD_U8(ea);
	ctx.r30.u32 = ea;
	// cmplwi cr6,r5,255
	cr6.compare<uint32_t>(ctx.r5.u32, 255, xer);
	// bne cr6,0x832b3340
	if (!cr6.eq) goto loc_832B3340;
loc_832B36E0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_832B36EC:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83297a40
	ctx.lr = 0x832B3700;
	sub_83297A40(ctx, base);
	// cmpwi cr6,r3,32
	cr6.compare<int32_t>(ctx.r3.s32, 32, xer);
	// blt cr6,0x832b3680
	if (cr6.lt) goto loc_832B3680;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r5,r11,-24676
	ctx.r5.s64 = ctx.r11.s64 + -24676;
	// addi r3,r10,-24696
	ctx.r3.s64 = ctx.r10.s64 + -24696;
	// li r4,213
	ctx.r4.s64 = 213;
	// bl 0x83298458
	ctx.lr = 0x832B3720;
	sub_83298458(ctx, base);
loc_832B3720:
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// ld r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83297a40
	ctx.lr = 0x832B3734;
	sub_83297A40(ctx, base);
	// cmpwi cr6,r3,32
	cr6.compare<int32_t>(ctx.r3.s32, 32, xer);
	// blt cr6,0x832b3680
	if (cr6.lt) goto loc_832B3680;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r5,r11,-24676
	ctx.r5.s64 = ctx.r11.s64 + -24676;
	// addi r3,r10,-24696
	ctx.r3.s64 = ctx.r10.s64 + -24696;
	// li r4,219
	ctx.r4.s64 = 219;
	// bl 0x83298458
	ctx.lr = 0x832B3754;
	sub_83298458(ctx, base);
loc_832B3754:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// ld r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83297a40
	ctx.lr = 0x832B3768;
	sub_83297A40(ctx, base);
	// cmpwi cr6,r3,32
	cr6.compare<int32_t>(ctx.r3.s32, 32, xer);
	// blt cr6,0x832b3680
	if (cr6.lt) goto loc_832B3680;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r5,r11,-24676
	ctx.r5.s64 = ctx.r11.s64 + -24676;
	// addi r3,r10,-24696
	ctx.r3.s64 = ctx.r10.s64 + -24696;
	// li r4,225
	ctx.r4.s64 = 225;
	// bl 0x83298458
	ctx.lr = 0x832B3788;
	sub_83298458(ctx, base);
loc_832B3788:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// subfe r6,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x83297a40
	ctx.lr = 0x832B37A4;
	sub_83297A40(ctx, base);
	// cmpwi cr6,r3,32
	cr6.compare<int32_t>(ctx.r3.s32, 32, xer);
	// blt cr6,0x832b3680
	if (cr6.lt) goto loc_832B3680;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r5,r11,-24676
	ctx.r5.s64 = ctx.r11.s64 + -24676;
	// addi r3,r10,-24696
	ctx.r3.s64 = ctx.r10.s64 + -24696;
	// li r4,231
	ctx.r4.s64 = 231;
	// bl 0x83298458
	ctx.lr = 0x832B37C4;
	sub_83298458(ctx, base);
loc_832B37C4:
	// lbzx r27,r5,r25
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r25.u32);
	// cmplwi cr6,r5,124
	cr6.compare<uint32_t>(ctx.r5.u32, 124, xer);
	// bge cr6,0x832b3880
	if (!cr6.lt) goto loc_832B3880;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// beq cr6,0x832b3880
	if (cr6.eq) goto loc_832B3880;
	// cmplwi cr6,r5,66
	cr6.compare<uint32_t>(ctx.r5.u32, 66, xer);
	// ble cr6,0x832b3688
	if (!cr6.gt) goto loc_832B3688;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r5,47
	ctx.r5.s64 = 47;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83294c00
	ctx.lr = 0x832B3800;
	sub_83294C00(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832b36d4
	if (!cr6.eq) goto loc_832B36D4;
loc_832B3808:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r4,r11,-24716
	ctx.r4.s64 = ctx.r11.s64 + -24716;
	// addi r3,r10,-24660
	ctx.r3.s64 = ctx.r10.s64 + -24660;
	// bl 0x83298338
	ctx.lr = 0x832B3820;
	sub_83298338(ctx, base);
loc_832B3820:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_832B382C:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r5,r11,-24676
	ctx.r5.s64 = ctx.r11.s64 + -24676;
	// addi r3,r10,-24696
	ctx.r3.s64 = ctx.r10.s64 + -24696;
	// li r4,172
	ctx.r4.s64 = 172;
	// bl 0x83298458
	ctx.lr = 0x832B3844;
	sub_83298458(ctx, base);
loc_832B3844:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r5,r11,-24676
	ctx.r5.s64 = ctx.r11.s64 + -24676;
	// addi r3,r10,-24696
	ctx.r3.s64 = ctx.r10.s64 + -24696;
	// li r4,207
	ctx.r4.s64 = 207;
	// bl 0x83298458
	ctx.lr = 0x832B385C;
	sub_83298458(ctx, base);
loc_832B385C:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r4,r11,-24740
	ctx.r4.s64 = ctx.r11.s64 + -24740;
	// addi r3,r10,-24660
	ctx.r3.s64 = ctx.r10.s64 + -24660;
	// bl 0x83298338
	ctx.lr = 0x832B3874;
	sub_83298338(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_832B3880:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r4,r11,-24764
	ctx.r4.s64 = ctx.r11.s64 + -24764;
	// addi r3,r10,-24660
	ctx.r3.s64 = ctx.r10.s64 + -24660;
	// bl 0x83298338
	ctx.lr = 0x832B3898;
	sub_83298338(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B38A4"))) PPC_WEAK_FUNC(sub_832B38A4);
PPC_FUNC_IMPL(__imp__sub_832B38A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B38A8"))) PPC_WEAK_FUNC(sub_832B38A8);
PPC_FUNC_IMPL(__imp__sub_832B38A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832B38B0;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lbz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r10,r11,-24888
	ctx.r10.s64 = ctx.r11.s64 + -24888;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,124
	cr6.compare<uint32_t>(ctx.r5.u32, 124, xer);
	// lbzx r30,r5,r10
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r10.u32);
	// bge cr6,0x832b3a68
	if (!cr6.lt) goto loc_832B3A68;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq cr6,0x832b3a68
	if (cr6.eq) goto loc_832B3A68;
	// cmpwi cr6,r30,255
	cr6.compare<int32_t>(ctx.r30.s32, 255, xer);
	// bne cr6,0x832b39e8
	if (!cr6.eq) goto loc_832B39E8;
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,46
	ctx.r4.s64 = 46;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83294f00
	ctx.lr = 0x832B38FC;
	sub_83294F00(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832b39d8
	if (!cr6.gt) goto loc_832B39D8;
	// cmpwi cr6,r3,32
	cr6.compare<int32_t>(ctx.r3.s32, 32, xer);
	// bge cr6,0x832b39d8
	if (!cr6.lt) goto loc_832B39D8;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r11,r11,-46
	ctx.r11.s64 = ctx.r11.s64 + -46;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bgt cr6,0x832b3990
	if (cr6.gt) goto loc_832B3990;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x832b3948
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_832B3948;
	// bdzf 4*cr6+eq,0x832b3990
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_832B3990;
	// bdzf 4*cr6+eq,0x832b3990
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_832B3990;
	// bdzf 4*cr6+eq,0x832b3990
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_832B3990;
	// bdzf 4*cr6+eq,0x832b3990
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_832B3990;
	// bdzf 4*cr6+eq,0x832b3990
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_832B3990;
	// bdzf 4*cr6+eq,0x832b3990
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_832B3990;
	// bne cr6,0x832b3964
	if (!cr6.eq) goto loc_832B3964;
loc_832B3948:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832984d0
	ctx.lr = 0x832B3958;
	sub_832984D0(ctx, base);
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// b 0x832b39a8
	goto loc_832B39A8;
loc_832B3964:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832986f8
	ctx.lr = 0x832B3974;
	sub_832986F8(ctx, base);
	// cmpdi cr6,r3,0
	cr6.compare<int64_t>(ctx.r3.s64, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x832b3984
	if (!cr6.eq) goto loc_832B3984;
	// li r11,0
	ctx.r11.s64 = 0;
loc_832B3984:
	// li r6,1
	ctx.r6.s64 = 1;
	// stb r11,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r11.u8);
	// b 0x832b39a8
	goto loc_832B39A8;
loc_832B3990:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832986f8
	ctx.lr = 0x832B39A0;
	sub_832986F8(ctx, base);
	// li r6,8
	ctx.r6.s64 = 8;
	// std r3,0(r27)
	PPC_STORE_U64(ctx.r27.u32 + 0, ctx.r3.u64);
loc_832B39A8:
	// lwz r7,4(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpw cr6,r6,r7
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, xer);
	// beq cr6,0x832b3a5c
	if (cr6.eq) goto loc_832B3A5C;
loc_832B39B4:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lwz r5,8(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r4,r11,-24600
	ctx.r4.s64 = ctx.r11.s64 + -24600;
	// addi r3,r10,-24660
	ctx.r3.s64 = ctx.r10.s64 + -24660;
	// bl 0x83298338
	ctx.lr = 0x832B39CC;
	sub_83298338(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_832B39D8:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lwz r5,8(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r4,r11,-24628
	ctx.r4.s64 = ctx.r11.s64 + -24628;
	// b 0x832b3a74
	goto loc_832B3A74;
loc_832B39E8:
	// lwz r31,4(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r5,66
	cr6.compare<uint32_t>(ctx.r5.u32, 66, xer);
	// ble cr6,0x832b3a14
	if (!cr6.gt) goto loc_832B3A14;
	// rlwinm r11,r30,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832b3a08
	if (cr6.eq) goto loc_832B3A08;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x832b3a10
	goto loc_832B3A10;
loc_832B3A08:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832996e8
	ctx.lr = 0x832B3A10;
	sub_832996E8(ctx, base);
loc_832B3A10:
	// mullw r31,r3,r31
	ctx.r31.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r31.s32);
loc_832B3A14:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83294f00
	ctx.lr = 0x832B3A28;
	sub_83294F00(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832b39d8
	if (cr6.lt) goto loc_832B39D8;
	// lwz r7,4(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpw cr6,r3,r7
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r7.s32, xer);
	// beq cr6,0x832b3a5c
	if (cr6.eq) goto loc_832B3A5C;
	// cmpwi cr6,r30,11
	cr6.compare<int32_t>(ctx.r30.s32, 11, xer);
	// beq cr6,0x832b3a5c
	if (cr6.eq) goto loc_832B3A5C;
	// cmpwi cr6,r30,46
	cr6.compare<int32_t>(ctx.r30.s32, 46, xer);
	// beq cr6,0x832b3a5c
	if (cr6.eq) goto loc_832B3A5C;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,66
	cr6.compare<uint32_t>(ctx.r11.u32, 66, xer);
	// ble cr6,0x832b39b4
	if (!cr6.gt) goto loc_832B39B4;
loc_832B3A5C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_832B3A68:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lwz r6,8(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r4,r11,-24764
	ctx.r4.s64 = ctx.r11.s64 + -24764;
loc_832B3A74:
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r3,r10,-24660
	ctx.r3.s64 = ctx.r10.s64 + -24660;
	// bl 0x83298338
	ctx.lr = 0x832B3A80;
	sub_83298338(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B3A8C"))) PPC_WEAK_FUNC(sub_832B3A8C);
PPC_FUNC_IMPL(__imp__sub_832B3A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B3A90"))) PPC_WEAK_FUNC(sub_832B3A90);
PPC_FUNC_IMPL(__imp__sub_832B3A90) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmplwi cr6,r9,122
	cr6.compare<uint32_t>(ctx.r9.u32, 122, xer);
	// bgt cr6,0x832b3f98
	if (cr6.gt) goto loc_832B3F98;
	// lis r12,-31957
	ctx.r12.s64 = -2094333952;
	// rlwinm r0,r9,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,15064
	ctx.r12.s64 = ctx.r12.s64 + 15064;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r9.u32) {
	case 0:
		goto loc_832B3CC4;
	case 1:
		goto loc_832B3CDC;
	case 2:
		goto loc_832B3CDC;
	case 3:
		goto loc_832B3CFC;
	case 4:
		goto loc_832B3CFC;
	case 5:
		goto loc_832B3D1C;
	case 6:
		goto loc_832B3D1C;
	case 7:
		goto loc_832B3D3C;
	case 8:
		goto loc_832B3D3C;
	case 9:
		goto loc_832B3D60;
	case 10:
		goto loc_832B3D90;
	case 11:
		goto loc_832B3D1C;
	case 12:
		goto loc_832B3DB4;
	case 13:
		goto loc_832B3DD8;
	case 14:
		goto loc_832B3E54;
	case 15:
		goto loc_832B3E54;
	case 16:
		goto loc_832B3E3C;
	case 17:
		goto loc_832B3E3C;
	case 18:
		goto loc_832B3E44;
	case 19:
		goto loc_832B3E44;
	case 20:
		goto loc_832B3E64;
	case 21:
		goto loc_832B3E64;
	case 22:
		goto loc_832B3E44;
	case 23:
		goto loc_832B3E64;
	case 24:
		goto loc_832B3E5C;
	case 25:
		goto loc_832B3E5C;
	case 26:
		goto loc_832B3E24;
	case 27:
		goto loc_832B3E24;
	case 28:
		goto loc_832B3E2C;
	case 29:
		goto loc_832B3E2C;
	case 30:
		goto loc_832B3E34;
	case 31:
		goto loc_832B3E34;
	case 32:
		goto loc_832B3E2C;
	case 33:
		goto loc_832B3E34;
	case 34:
		goto loc_832B3E3C;
	case 35:
		goto loc_832B3E3C;
	case 36:
		goto loc_832B3E44;
	case 37:
		goto loc_832B3E44;
	case 38:
		goto loc_832B3E64;
	case 39:
		goto loc_832B3E64;
	case 40:
		goto loc_832B3E4C;
	case 41:
		goto loc_832B3E4C;
	case 42:
		goto loc_832B3E64;
	case 43:
		goto loc_832B3E4C;
	case 44:
		goto loc_832B3D60;
	case 45:
		goto loc_832B3D1C;
	case 46:
		goto loc_832B3D1C;
	case 47:
		goto loc_832B3D3C;
	case 48:
		goto loc_832B3D3C;
	case 49:
		goto loc_832B3DFC;
	case 50:
		goto loc_832B3E54;
	case 51:
		goto loc_832B3E5C;
	case 52:
		goto loc_832B3E3C;
	case 53:
		goto loc_832B3DFC;
	case 54:
		goto loc_832B3E64;
	case 55:
		goto loc_832B3E64;
	case 56:
		goto loc_832B3E64;
	case 57:
		goto loc_832B3E64;
	case 58:
		goto loc_832B3E64;
	case 59:
		goto loc_832B3E64;
	case 60:
		goto loc_832B3E64;
	case 61:
		goto loc_832B3E64;
	case 62:
		goto loc_832B3E64;
	case 63:
		goto loc_832B3E64;
	case 64:
		goto loc_832B3E64;
	case 65:
		goto loc_832B3F98;
	case 66:
		goto loc_832B3F74;
	case 67:
		goto loc_832B3F74;
	case 68:
		goto loc_832B3E94;
	case 69:
		goto loc_832B3E94;
	case 70:
		goto loc_832B3EC4;
	case 71:
		goto loc_832B3EC4;
	case 72:
		goto loc_832B3EF4;
	case 73:
		goto loc_832B3EF4;
	case 74:
		goto loc_832B3EC4;
	case 75:
		goto loc_832B3EC4;
	case 76:
		goto loc_832B3EC4;
	case 77:
		goto loc_832B3EF4;
	case 78:
		goto loc_832B3E94;
	case 79:
		goto loc_832B3E94;
	case 80:
		goto loc_832B3EC4;
	case 81:
		goto loc_832B3EC4;
	case 82:
		goto loc_832B3EF4;
	case 83:
		goto loc_832B3EF4;
	case 84:
		goto loc_832B3F70;
	case 85:
		goto loc_832B3F70;
	case 86:
		goto loc_832B3EF4;
	case 87:
		goto loc_832B3F70;
	case 88:
		goto loc_832B3F44;
	case 89:
		goto loc_832B3F44;
	case 90:
		goto loc_832B3E8C;
	case 91:
		goto loc_832B3E8C;
	case 92:
		goto loc_832B3EBC;
	case 93:
		goto loc_832B3EBC;
	case 94:
		goto loc_832B3EEC;
	case 95:
		goto loc_832B3EEC;
	case 96:
		goto loc_832B3EBC;
	case 97:
		goto loc_832B3EEC;
	case 98:
		goto loc_832B3EC4;
	case 99:
		goto loc_832B3EC4;
	case 100:
		goto loc_832B3EF4;
	case 101:
		goto loc_832B3EF4;
	case 102:
		goto loc_832B3F70;
	case 103:
		goto loc_832B3F70;
	case 104:
		goto loc_832B3F1C;
	case 105:
		goto loc_832B3F1C;
	case 106:
		goto loc_832B3F70;
	case 107:
		goto loc_832B3F1C;
	case 108:
		goto loc_832B3F74;
	case 109:
		goto loc_832B3E94;
	case 110:
		goto loc_832B3F44;
	case 111:
		goto loc_832B3EC4;
	case 112:
		goto loc_832B3F70;
	case 113:
		goto loc_832B3F70;
	case 114:
		goto loc_832B3F70;
	case 115:
		goto loc_832B3F70;
	case 116:
		goto loc_832B3F70;
	case 117:
		goto loc_832B3F70;
	case 118:
		goto loc_832B3F70;
	case 119:
		goto loc_832B3F70;
	case 120:
		goto loc_832B3F70;
	case 121:
		goto loc_832B3F70;
	case 122:
		goto loc_832B3F70;
	default:
		return;
	}
	// lwz r25,15556(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15556);
	// lwz r25,15580(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15580);
	// lwz r25,15580(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15580);
	// lwz r25,15612(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15612);
	// lwz r25,15612(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15612);
	// lwz r25,15644(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15644);
	// lwz r25,15644(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15644);
	// lwz r25,15676(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15676);
	// lwz r25,15676(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15676);
	// lwz r25,15712(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15712);
	// lwz r25,15760(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15760);
	// lwz r25,15644(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15644);
	// lwz r25,15796(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15796);
	// lwz r25,15832(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15832);
	// lwz r25,15956(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15956);
	// lwz r25,15956(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15956);
	// lwz r25,15932(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15932);
	// lwz r25,15932(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15932);
	// lwz r25,15940(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15940);
	// lwz r25,15940(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15940);
	// lwz r25,15972(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15972);
	// lwz r25,15972(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15972);
	// lwz r25,15940(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15940);
	// lwz r25,15972(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15972);
	// lwz r25,15964(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15964);
	// lwz r25,15964(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15964);
	// lwz r25,15908(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15908);
	// lwz r25,15908(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15908);
	// lwz r25,15916(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15916);
	// lwz r25,15916(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15916);
	// lwz r25,15924(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15924);
	// lwz r25,15924(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15924);
	// lwz r25,15916(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15916);
	// lwz r25,15924(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15924);
	// lwz r25,15932(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15932);
	// lwz r25,15932(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15932);
	// lwz r25,15940(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15940);
	// lwz r25,15940(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15940);
	// lwz r25,15972(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15972);
	// lwz r25,15972(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15972);
	// lwz r25,15948(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15948);
	// lwz r25,15948(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15948);
	// lwz r25,15972(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15972);
	// lwz r25,15948(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15948);
	// lwz r25,15712(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15712);
	// lwz r25,15644(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15644);
	// lwz r25,15644(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15644);
	// lwz r25,15676(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15676);
	// lwz r25,15676(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15676);
	// lwz r25,15868(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15868);
	// lwz r25,15956(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15956);
	// lwz r25,15964(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15964);
	// lwz r25,15932(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15932);
	// lwz r25,15868(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15868);
	// lwz r25,15972(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15972);
	// lwz r25,15972(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15972);
	// lwz r25,15972(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15972);
	// lwz r25,15972(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15972);
	// lwz r25,15972(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15972);
	// lwz r25,15972(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15972);
	// lwz r25,15972(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15972);
	// lwz r25,15972(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15972);
	// lwz r25,15972(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15972);
	// lwz r25,15972(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15972);
	// lwz r25,15972(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15972);
	// lwz r25,16280(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16280);
	// lwz r25,16244(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16244);
	// lwz r25,16244(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16244);
	// lwz r25,16020(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16020);
	// lwz r25,16020(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16020);
	// lwz r25,16068(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16068);
	// lwz r25,16068(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16068);
	// lwz r25,16116(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16116);
	// lwz r25,16116(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16116);
	// lwz r25,16068(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16068);
	// lwz r25,16068(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16068);
	// lwz r25,16068(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16068);
	// lwz r25,16116(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16116);
	// lwz r25,16020(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16020);
	// lwz r25,16020(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16020);
	// lwz r25,16068(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16068);
	// lwz r25,16068(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16068);
	// lwz r25,16116(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16116);
	// lwz r25,16116(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16116);
	// lwz r25,16240(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16240);
	// lwz r25,16240(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16240);
	// lwz r25,16116(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16116);
	// lwz r25,16240(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16240);
	// lwz r25,16196(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16196);
	// lwz r25,16196(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16196);
	// lwz r25,16012(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16012);
	// lwz r25,16012(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16012);
	// lwz r25,16060(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16060);
	// lwz r25,16060(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16060);
	// lwz r25,16108(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16108);
	// lwz r25,16108(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16108);
	// lwz r25,16060(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16060);
	// lwz r25,16108(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16108);
	// lwz r25,16068(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16068);
	// lwz r25,16068(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16068);
	// lwz r25,16116(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16116);
	// lwz r25,16116(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16116);
	// lwz r25,16240(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16240);
	// lwz r25,16240(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16240);
	// lwz r25,16156(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16156);
	// lwz r25,16156(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16156);
	// lwz r25,16240(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16240);
	// lwz r25,16156(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16156);
	// lwz r25,16244(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16244);
	// lwz r25,16020(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16020);
	// lwz r25,16196(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16196);
	// lwz r25,16068(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16068);
	// lwz r25,16240(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16240);
	// lwz r25,16240(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16240);
	// lwz r25,16240(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16240);
	// lwz r25,16240(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16240);
	// lwz r25,16240(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16240);
	// lwz r25,16240(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16240);
	// lwz r25,16240(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16240);
	// lwz r25,16240(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16240);
	// lwz r25,16240(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16240);
	// lwz r25,16240(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16240);
	// lwz r25,16240(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16240);
loc_832B3CC4:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r5,r11,-24536
	ctx.r5.s64 = ctx.r11.s64 + -24536;
	// addi r3,r10,-24696
	ctx.r3.s64 = ctx.r10.s64 + -24696;
	// li r4,373
	ctx.r4.s64 = 373;
	// bl 0x83298458
	ctx.lr = 0x832B3CDC;
	sub_83298458(ctx, base);
loc_832B3CDC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
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
loc_832B3CFC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
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
loc_832B3D1C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
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
loc_832B3D3C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r10,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r10.u64);
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
loc_832B3D60:
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83296be0
	ctx.lr = 0x832B3D68;
	sub_83296BE0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, xer);
	// blt cr6,0x832b3f80
	if (cr6.lt) goto loc_832B3F80;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r4,r11,-24568
	ctx.r4.s64 = ctx.r11.s64 + -24568;
	// addi r3,r10,-24660
	ctx.r3.s64 = ctx.r10.s64 + -24660;
	// bl 0x83298338
	ctx.lr = 0x832B3D8C;
	sub_83298338(ctx, base);
	// b 0x832b3fb4
	goto loc_832B3FB4;
loc_832B3D90:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
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
loc_832B3DB4:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
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
loc_832B3DD8:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lfd f0,0(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// stfd f0,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.f0.u64);
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
loc_832B3DFC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r9,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// stb r9,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r9.u8);
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
loc_832B3E24:
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x832b3e68
	goto loc_832B3E68;
loc_832B3E2C:
	// li r11,12
	ctx.r11.s64 = 12;
	// b 0x832b3e68
	goto loc_832B3E68;
loc_832B3E34:
	// li r11,24
	ctx.r11.s64 = 24;
	// b 0x832b3e68
	goto loc_832B3E68;
loc_832B3E3C:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x832b3e68
	goto loc_832B3E68;
loc_832B3E44:
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x832b3e68
	goto loc_832B3E68;
loc_832B3E4C:
	// li r11,32
	ctx.r11.s64 = 32;
	// b 0x832b3e68
	goto loc_832B3E68;
loc_832B3E54:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x832b3e68
	goto loc_832B3E68;
loc_832B3E5C:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x832b3e68
	goto loc_832B3E68;
loc_832B3E64:
	// li r11,16
	ctx.r11.s64 = 16;
loc_832B3E68:
	// cmpw cr6,r5,r11
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, xer);
	// beq cr6,0x832b3f74
	if (cr6.eq) goto loc_832B3F74;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r4,r11,-24568
	ctx.r4.s64 = ctx.r11.s64 + -24568;
	// addi r3,r10,-24660
	ctx.r3.s64 = ctx.r10.s64 + -24660;
	// bl 0x83298338
	ctx.lr = 0x832B3E88;
	sub_83298338(ctx, base);
	// b 0x832b3fb4
	goto loc_832B3FB4;
loc_832B3E8C:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_832B3E94:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x83293ec8
	ctx.lr = 0x832B3EA4;
	sub_83293EC8(ctx, base);
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
loc_832B3EBC:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_832B3EC4:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x83293ec8
	ctx.lr = 0x832B3ED4;
	sub_83293EC8(ctx, base);
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
loc_832B3EEC:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_832B3EF4:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x83293ec8
	ctx.lr = 0x832B3F04;
	sub_83293EC8(ctx, base);
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
loc_832B3F1C:
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x83293ec8
	ctx.lr = 0x832B3F2C;
	sub_83293EC8(ctx, base);
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
loc_832B3F44:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x83293ec8
	ctx.lr = 0x832B3F58;
	sub_83293EC8(ctx, base);
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
loc_832B3F70:
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
loc_832B3F74:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83293ec8
	ctx.lr = 0x832B3F80;
	sub_83293EC8(ctx, base);
loc_832B3F80:
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
loc_832B3F98:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// addi r4,r11,-24764
	ctx.r4.s64 = ctx.r11.s64 + -24764;
	// addi r3,r9,-24660
	ctx.r3.s64 = ctx.r9.s64 + -24660;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// bl 0x83298338
	ctx.lr = 0x832B3FB4;
	sub_83298338(ctx, base);
loc_832B3FB4:
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

__attribute__((alias("__imp__sub_832B3FCC"))) PPC_WEAK_FUNC(sub_832B3FCC);
PPC_FUNC_IMPL(__imp__sub_832B3FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B3FD0"))) PPC_WEAK_FUNC(sub_832B3FD0);
PPC_FUNC_IMPL(__imp__sub_832B3FD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x832B3FD8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x832b40e4
	if (cr6.eq) goto loc_832B40E4;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x832b40e4
	if (cr6.eq) goto loc_832B40E4;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832b4010
	if (!cr6.eq) goto loc_832B4010;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x832b4014
	if (cr6.eq) goto loc_832B4014;
loc_832B4010:
	// li r11,0
	ctx.r11.s64 = 0;
loc_832B4014:
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,255
	cr6.compare<uint32_t>(ctx.r10.u32, 255, xer);
	// beq cr6,0x832b40c0
	if (cr6.eq) goto loc_832B40C0;
	// clrlwi r28,r11,24
	ctx.r28.u64 = ctx.r11.u32 & 0xFF;
loc_832B4028:
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// add r30,r11,r27
	ctx.r30.u64 = ctx.r11.u64 + ctx.r27.u64;
	// beq cr6,0x832b4040
	if (cr6.eq) goto loc_832B4040;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x832b4054
	goto loc_832B4054;
loc_832B4040:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83295250
	ctx.lr = 0x832B4050;
	sub_83295250(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_832B4054:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x832b4074
	if (!cr6.eq) goto loc_832B4074;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832b3fd0
	ctx.lr = 0x832B4070;
	sub_832B3FD0(ctx, base);
	// b 0x832b40a8
	goto loc_832B40A8;
loc_832B4074:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x832b4090
	if (cr6.eq) goto loc_832B4090;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b38a8
	ctx.lr = 0x832B408C;
	sub_832B38A8(ctx, base);
	// b 0x832b40a8
	goto loc_832B40A8;
loc_832B4090:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832b40cc
	if (cr6.eq) goto loc_832B40CC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b3a90
	ctx.lr = 0x832B40A8;
	sub_832B3A90(ctx, base);
loc_832B40A8:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832b40e4
	if (cr6.eq) goto loc_832B40E4;
	// lbzu r11,16(r31)
	ea = 16 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// bne cr6,0x832b4028
	if (!cr6.eq) goto loc_832B4028;
loc_832B40C0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_832B40CC:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r4,r11,-24508
	ctx.r4.s64 = ctx.r11.s64 + -24508;
	// addi r3,r10,-24660
	ctx.r3.s64 = ctx.r10.s64 + -24660;
	// bl 0x83298338
	ctx.lr = 0x832B40E4;
	sub_83298338(ctx, base);
loc_832B40E4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B40F0"))) PPC_WEAK_FUNC(sub_832B40F0);
PPC_FUNC_IMPL(__imp__sub_832B40F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x832B40F8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// beq cr6,0x832b41bc
	if (cr6.eq) goto loc_832B41BC;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r30,r4,8
	ctx.r30.s64 = ctx.r4.s64 + 8;
	// addi r25,r11,-24888
	ctx.r25.s64 = ctx.r11.s64 + -24888;
loc_832B4124:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83296ba8
	ctx.lr = 0x832B412C;
	sub_83296BA8(ctx, base);
	// lbz r11,-8(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + -8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x832b4154
	if (!cr6.eq) goto loc_832B4154;
	// add r11,r3,r28
	ctx.r11.u64 = ctx.r3.u64 + ctx.r28.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x832b40f0
	ctx.lr = 0x832B4150;
	sub_832B40F0(ctx, base);
	// b 0x832b419c
	goto loc_832B419C;
loc_832B4154:
	// lbzx r11,r11,r25
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r25.u32);
	// cmpwi cr6,r11,46
	cr6.compare<int32_t>(ctx.r11.s32, 46, xer);
	// beq cr6,0x832b4168
	if (cr6.eq) goto loc_832B4168;
	// cmpwi cr6,r11,255
	cr6.compare<int32_t>(ctx.r11.s32, 255, xer);
	// bne cr6,0x832b4198
	if (!cr6.eq) goto loc_832B4198;
loc_832B4168:
	// li r4,64
	ctx.r4.s64 = 64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83296d08
	ctx.lr = 0x832B4174;
	sub_83296D08(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832b4198
	if (cr6.eq) goto loc_832B4198;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// subf r10,r11,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r11.s64;
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, xer);
	// addi r31,r10,1
	ctx.r31.s64 = ctx.r10.s64 + 1;
	// ble cr6,0x832b4198
	if (!cr6.gt) goto loc_832B4198;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_832B4198:
	// add r3,r31,r28
	ctx.r3.u64 = ctx.r31.u64 + ctx.r28.u64;
loc_832B419C:
	// cmpw cr6,r3,r26
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r26.s32, xer);
	// ble cr6,0x832b41a8
	if (!cr6.gt) goto loc_832B41A8;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_832B41A8:
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// lbz r11,-8(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + -8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// bne cr6,0x832b4124
	if (!cr6.eq) goto loc_832B4124;
loc_832B41BC:
	// lbz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 8);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, xer);
	// ble cr6,0x832b41d0
	if (!cr6.gt) goto loc_832B41D0;
	// stb r29,8(r27)
	PPC_STORE_U8(ctx.r27.u32 + 8, ctx.r29.u8);
loc_832B41D0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B41D8"))) PPC_WEAK_FUNC(sub_832B41D8);
PPC_FUNC_IMPL(__imp__sub_832B41D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x832B41E0;
	__savegprlr_20(ctx, base);
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// li r5,50
	ctx.r5.s64 = 50;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x83296be0
	ctx.lr = 0x832B4208;
	sub_83296BE0(ctx, base);
	// lbz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// addi r29,r1,384
	ctx.r29.s64 = ctx.r1.s64 + 384;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832b4280
	if (cr6.eq) goto loc_832B4280;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x83296d40
	ctx.lr = 0x832B4224;
	sub_83296D40(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832b423c
	if (cr6.eq) goto loc_832B423C;
	// addi r7,r1,384
	ctx.r7.s64 = ctx.r1.s64 + 384;
	// stb r31,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r31.u8);
	// addi r29,r3,1
	ctx.r29.s64 = ctx.r3.s64 + 1;
	// b 0x832b4248
	goto loc_832B4248;
loc_832B423C:
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// addi r29,r1,384
	ctx.r29.s64 = ctx.r1.s64 + 384;
	// addi r7,r11,-22544
	ctx.r7.s64 = ctx.r11.s64 + -22544;
loc_832B4248:
	// lbz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// li r4,200
	ctx.r4.s64 = 200;
	// lbz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// subfic r9,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// addi r5,r10,-23792
	ctx.r5.s64 = ctx.r10.s64 + -23792;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// rlwinm r11,r8,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x20;
	// addi r8,r11,32
	ctx.r8.s64 = ctx.r11.s64 + 32;
	// bl 0x83297a40
	ctx.lr = 0x832B4274;
	sub_83297A40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,200
	cr6.compare<uint32_t>(ctx.r3.u32, 200, xer);
	// bge cr6,0x832b53b4
	if (!cr6.lt) goto loc_832B53B4;
loc_832B4280:
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r5,r10,-28864
	ctx.r5.s64 = ctx.r10.s64 + -28864;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// subfic r4,r31,200
	xer.ca = ctx.r31.u32 <= 200;
	ctx.r4.s64 = 200 - ctx.r31.s64;
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x83297a40
	ctx.lr = 0x832B42A0;
	sub_83297A40(ctx, base);
	// add r31,r3,r31
	ctx.r31.u64 = ctx.r3.u64 + ctx.r31.u64;
	// cmplwi cr6,r31,200
	cr6.compare<uint32_t>(ctx.r31.u32, 200, xer);
	// bge cr6,0x832b53b4
	if (!cr6.lt) goto loc_832B53B4;
	// lbz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// lbz r10,9(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 9);
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subfe r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r11,199
	cr6.compare<uint32_t>(ctx.r11.u32, 199, xer);
	// blt cr6,0x832b42d0
	if (cr6.lt) goto loc_832B42D0;
	// li r11,199
	ctx.r11.s64 = 199;
loc_832B42D0:
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bge cr6,0x832b4304
	if (!cr6.lt) goto loc_832B4304;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// subf r9,r31,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r31.s64;
	// add r11,r31,r10
	ctx.r11.u64 = ctx.r31.u64 + ctx.r10.u64;
	// li r10,32
	ctx.r10.s64 = 32;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x832b4300
	if (cr6.eq) goto loc_832B4300;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_832B42F8:
	// stbu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x832b42f8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832B42F8;
loc_832B4300:
	// add r31,r9,r31
	ctx.r31.u64 = ctx.r9.u64 + ctx.r31.u64;
loc_832B4304:
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// subfic r5,r31,199
	xer.ca = ctx.r31.u32 <= 199;
	ctx.r5.s64 = 199 - ctx.r31.s64;
	// addi r4,r10,-23796
	ctx.r4.s64 = ctx.r10.s64 + -23796;
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x83296be0
	ctx.lr = 0x832B431C;
	sub_83296BE0(ctx, base);
	// add r31,r3,r31
	ctx.r31.u64 = ctx.r3.u64 + ctx.r31.u64;
	// cmplwi cr6,r31,200
	cr6.compare<uint32_t>(ctx.r31.u32, 200, xer);
	// bge cr6,0x832b53b4
	if (!cr6.lt) goto loc_832B53B4;
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// lhz r9,2(r27)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r27.u32 + 2);
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
	// add r11,r9,r26
	ctx.r11.u64 = ctx.r9.u64 + ctx.r26.u64;
	// cmplwi cr6,r10,63
	cr6.compare<uint32_t>(ctx.r10.u32, 63, xer);
	// bgt cr6,0x832b5380
	if (cr6.gt) goto loc_832B5380;
	// lis r12,-31957
	ctx.r12.s64 = -2094333952;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,17240
	ctx.r12.s64 = ctx.r12.s64 + 17240;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_832B4B50;
	case 1:
		goto loc_832B4A58;
	case 2:
		goto loc_832B4D64;
	case 3:
		goto loc_832B4C6C;
	case 4:
		goto loc_832B44B8;
	case 5:
		goto loc_832B44EC;
	case 6:
		goto loc_832B5034;
	case 7:
		goto loc_832B4F78;
	case 8:
		goto loc_832B4498;
	case 9:
		goto loc_832B4478;
	case 10:
		goto loc_832B4458;
	case 11:
		goto loc_832B50F0;
	case 12:
		goto loc_832B5238;
	case 13:
		goto loc_832B4B88;
	case 14:
		goto loc_832B4A90;
	case 15:
		goto loc_832B4D9C;
	case 16:
		goto loc_832B4CA4;
	case 17:
		goto loc_832B4EFC;
	case 18:
		goto loc_832B4E80;
	case 19:
		goto loc_832B4878;
	case 20:
		goto loc_832B48B4;
	case 21:
		goto loc_832B5130;
	case 22:
		goto loc_832B5278;
	case 23:
		goto loc_832B4BCC;
	case 24:
		goto loc_832B4ACC;
	case 25:
		goto loc_832B4DE0;
	case 26:
		goto loc_832B4CE0;
	case 27:
		goto loc_832B4F38;
	case 28:
		goto loc_832B4EBC;
	case 29:
		goto loc_832B506C;
	case 30:
		goto loc_832B4FB0;
	case 31:
		goto loc_832B517C;
	case 32:
		goto loc_832B52C4;
	case 33:
		goto loc_832B4C18;
	case 34:
		goto loc_832B4B0C;
	case 35:
		goto loc_832B4E2C;
	case 36:
		goto loc_832B4D20;
	case 37:
		goto loc_832B47F0;
	case 38:
		goto loc_832B4834;
	case 39:
		goto loc_832B50AC;
	case 40:
		goto loc_832B4FF0;
	case 41:
		goto loc_832B51D4;
	case 42:
		goto loc_832B531C;
	case 43:
		goto loc_832B4498;
	case 44:
		goto loc_832B44EC;
	case 45:
		goto loc_832B44B8;
	case 46:
		goto loc_832B4558;
	case 47:
		goto loc_832B4524;
	case 48:
		goto loc_832B4A58;
	case 49:
		goto loc_832B4A90;
	case 50:
		goto loc_832B4ACC;
	case 51:
		goto loc_832B4B0C;
	case 52:
		goto loc_832B5380;
	case 53:
		goto loc_832B4590;
	case 54:
		goto loc_832B4670;
	case 55:
		goto loc_832B4710;
	case 56:
		goto loc_832B4790;
	case 57:
		goto loc_832B47F0;
	case 58:
		goto loc_832B4834;
	case 59:
		goto loc_832B4878;
	case 60:
		goto loc_832B48B4;
	case 61:
		goto loc_832B48F0;
	case 62:
		goto loc_832B4954;
	case 63:
		goto loc_832B49B8;
	default:
		return;
	}
	// lwz r25,19280(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19280);
	// lwz r25,19032(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19032);
	// lwz r25,19812(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19812);
	// lwz r25,19564(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19564);
	// lwz r25,17592(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17592);
	// lwz r25,17644(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17644);
	// lwz r25,20532(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20532);
	// lwz r25,20344(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20344);
	// lwz r25,17560(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17560);
	// lwz r25,17528(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17528);
	// lwz r25,17496(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17496);
	// lwz r25,20720(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20720);
	// lwz r25,21048(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21048);
	// lwz r25,19336(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19336);
	// lwz r25,19088(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19088);
	// lwz r25,19868(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19868);
	// lwz r25,19620(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19620);
	// lwz r25,20220(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20220);
	// lwz r25,20096(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20096);
	// lwz r25,18552(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18552);
	// lwz r25,18612(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18612);
	// lwz r25,20784(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20784);
	// lwz r25,21112(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21112);
	// lwz r25,19404(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19404);
	// lwz r25,19148(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19148);
	// lwz r25,19936(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19936);
	// lwz r25,19680(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19680);
	// lwz r25,20280(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20280);
	// lwz r25,20156(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20156);
	// lwz r25,20588(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20588);
	// lwz r25,20400(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20400);
	// lwz r25,20860(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20860);
	// lwz r25,21188(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21188);
	// lwz r25,19480(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19480);
	// lwz r25,19212(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19212);
	// lwz r25,20012(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20012);
	// lwz r25,19744(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19744);
	// lwz r25,18416(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18416);
	// lwz r25,18484(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18484);
	// lwz r25,20652(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20652);
	// lwz r25,20464(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20464);
	// lwz r25,20948(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20948);
	// lwz r25,21276(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21276);
	// lwz r25,17560(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17560);
	// lwz r25,17644(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17644);
	// lwz r25,17592(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17592);
	// lwz r25,17752(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17752);
	// lwz r25,17700(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17700);
	// lwz r25,19032(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19032);
	// lwz r25,19088(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19088);
	// lwz r25,19148(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19148);
	// lwz r25,19212(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 19212);
	// lwz r25,21376(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21376);
	// lwz r25,17808(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 17808);
	// lwz r25,18032(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18032);
	// lwz r25,18192(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18192);
	// lwz r25,18320(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18320);
	// lwz r25,18416(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18416);
	// lwz r25,18484(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18484);
	// lwz r25,18552(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18552);
	// lwz r25,18612(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18612);
	// lwz r25,18672(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18672);
	// lwz r25,18772(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18772);
	// lwz r25,18872(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18872);
loc_832B4458:
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// subfic r4,r31,200
	xer.ca = ctx.r31.u32 <= 200;
	ctx.r4.s64 = 200 - ctx.r31.s64;
	// addi r5,r10,-23812
	ctx.r5.s64 = ctx.r10.s64 + -23812;
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x83297a40
	ctx.lr = 0x832B4474;
	sub_83297A40(ctx, base);
	// b 0x832b5398
	goto loc_832B5398;
loc_832B4478:
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// subfic r4,r31,200
	xer.ca = ctx.r31.u32 <= 200;
	ctx.r4.s64 = 200 - ctx.r31.s64;
	// addi r5,r10,26384
	ctx.r5.s64 = ctx.r10.s64 + 26384;
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x83297a40
	ctx.lr = 0x832B4494;
	sub_83297A40(ctx, base);
	// b 0x832b5398
	goto loc_832B5398;
loc_832B4498:
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// addi r5,r9,-23820
	ctx.r5.s64 = ctx.r9.s64 + -23820;
	// subfic r4,r31,200
	xer.ca = ctx.r31.u32 <= 200;
	ctx.r4.s64 = 200 - ctx.r31.s64;
	// add r3,r31,r10
	ctx.r3.u64 = ctx.r31.u64 + ctx.r10.u64;
	// bl 0x83297a40
	ctx.lr = 0x832B44B4;
	sub_83297A40(ctx, base);
	// b 0x832b5398
	goto loc_832B5398;
loc_832B44B8:
	// lbz r9,10(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// lis r8,-31772
	ctx.r8.s64 = -2082209792;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// addic r7,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// addi r5,r8,19688
	ctx.r5.s64 = ctx.r8.s64 + 19688;
	// subfe r3,r7,r9
	temp.u8 = (~ctx.r7.u32 + ctx.r9.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r7.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// subfic r4,r31,200
	xer.ca = ctx.r31.u32 <= 200;
	ctx.r4.s64 = 200 - ctx.r31.s64;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r31,r10
	ctx.r3.u64 = ctx.r31.u64 + ctx.r10.u64;
	// lwzx r5,r11,r5
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// bl 0x83297a40
	ctx.lr = 0x832B44E8;
	sub_83297A40(ctx, base);
	// b 0x832b5398
	goto loc_832B5398;
loc_832B44EC:
	// lbz r9,10(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// lis r8,-31772
	ctx.r8.s64 = -2082209792;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// addic r7,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// addi r11,r8,19688
	ctx.r11.s64 = ctx.r8.s64 + 19688;
	// subfe r5,r7,r9
	temp.u8 = (~ctx.r7.u32 + ctx.r9.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r7.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r4,r31,200
	xer.ca = ctx.r31.u32 <= 200;
	ctx.r4.s64 = 200 - ctx.r31.s64;
	// add r3,r31,r10
	ctx.r3.u64 = ctx.r31.u64 + ctx.r10.u64;
	// lwzx r5,r9,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// bl 0x83297a40
	ctx.lr = 0x832B4520;
	sub_83297A40(ctx, base);
	// b 0x832b5398
	goto loc_832B5398;
loc_832B4524:
	// lbz r9,10(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// lis r8,-31772
	ctx.r8.s64 = -2082209792;
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// addic r7,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// addi r5,r8,19688
	ctx.r5.s64 = ctx.r8.s64 + 19688;
	// subfe r3,r7,r9
	temp.u8 = (~ctx.r7.u32 + ctx.r9.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r7.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// subfic r4,r31,200
	xer.ca = ctx.r31.u32 <= 200;
	ctx.r4.s64 = 200 - ctx.r31.s64;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r31,r10
	ctx.r3.u64 = ctx.r31.u64 + ctx.r10.u64;
	// lwzx r5,r11,r5
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// bl 0x83297a40
	ctx.lr = 0x832B4554;
	sub_83297A40(ctx, base);
	// b 0x832b5398
	goto loc_832B5398;
loc_832B4558:
	// lbz r9,10(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// lis r8,-31772
	ctx.r8.s64 = -2082209792;
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// addic r7,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// addi r11,r8,19688
	ctx.r11.s64 = ctx.r8.s64 + 19688;
	// subfe r5,r7,r9
	temp.u8 = (~ctx.r7.u32 + ctx.r9.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r7.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r4,r31,200
	xer.ca = ctx.r31.u32 <= 200;
	ctx.r4.s64 = 200 - ctx.r31.s64;
	// add r3,r31,r10
	ctx.r3.u64 = ctx.r31.u64 + ctx.r10.u64;
	// lwzx r5,r9,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// bl 0x83297a40
	ctx.lr = 0x832B458C;
	sub_83297A40(ctx, base);
	// b 0x832b5398
	goto loc_832B5398;
loc_832B4590:
	// lbz r10,15(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 15);
	// lis r8,-31772
	ctx.r8.s64 = -2082209792;
	// lbz r7,14(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 14);
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// lbz r6,13(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 13);
	// extsb r5,r10
	ctx.r5.s64 = ctx.r10.s8;
	// lbz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// extsb r3,r7
	ctx.r3.s64 = ctx.r7.s8;
	// extsb r10,r6
	ctx.r10.s64 = ctx.r6.s8;
	// stw r5,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// extsb r7,r4
	ctx.r7.s64 = ctx.r4.s8;
	// stw r3,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r3.u32);
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// addi r10,r8,19688
	ctx.r10.s64 = ctx.r8.s64 + 19688;
	// stw r7,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r7.u32);
	// add r3,r31,r9
	ctx.r3.u64 = ctx.r31.u64 + ctx.r9.u64;
	// lbz r6,10(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// addi r5,r10,40
	ctx.r5.s64 = ctx.r10.s64 + 40;
	// lbz r4,11(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11);
	// addic r10,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r10.s64 = ctx.r6.s64 + -1;
	// lbz r9,10(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// extsb r7,r4
	ctx.r7.s64 = ctx.r4.s8;
	// lbz r8,9(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// subfe r6,r10,r6
	temp.u8 = (~ctx.r10.u32 + ctx.r6.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r10.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// lbz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// extsb r29,r9
	ctx.r29.s64 = ctx.r9.s8;
	// lbz r10,7(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r9,6(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// extsb r27,r8
	ctx.r27.s64 = ctx.r8.s8;
	// lbz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// extsb r26,r4
	ctx.r26.s64 = ctx.r4.s8;
	// lbz r4,3(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r28,5(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// extsb r25,r10
	ctx.r25.s64 = ctx.r10.s8;
	// lbz r24,2(r11)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// extsb r23,r9
	ctx.r23.s64 = ctx.r9.s8;
	// lbz r22,1(r11)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r9,r4
	ctx.r9.s64 = ctx.r4.s8;
	// lwzx r5,r6,r5
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// extsb r28,r28
	ctx.r28.s64 = ctx.r28.s8;
	// stw r7,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r7.u32);
	// extsb r8,r24
	ctx.r8.s64 = ctx.r24.s8;
	// extsb r7,r22
	ctx.r7.s64 = ctx.r22.s8;
	// stw r29,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r29.u32);
	// extsb r6,r11
	ctx.r6.s64 = ctx.r11.s8;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// subfic r4,r31,200
	xer.ca = ctx.r31.u32 <= 200;
	ctx.r4.s64 = 200 - ctx.r31.s64;
	// stw r26,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// stw r23,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r23.u32);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x83297a40
	ctx.lr = 0x832B466C;
	sub_83297A40(ctx, base);
	// b 0x832b5398
	goto loc_832B5398;
loc_832B4670:
	// lbz r8,10(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// lis r7,-31772
	ctx.r7.s64 = -2082209792;
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// lbz r29,15(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 15);
	// addic r6,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r6.s64 = ctx.r8.s64 + -1;
	// lbz r28,14(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 14);
	// addi r10,r7,19688
	ctx.r10.s64 = ctx.r7.s64 + 19688;
	// lbz r27,13(r11)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r11.u32 + 13);
	// subfe r5,r6,r8
	temp.u8 = (~ctx.r6.u32 + ctx.r8.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// lbz r26,12(r11)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// addi r10,r10,136
	ctx.r10.s64 = ctx.r10.s64 + 136;
	// lbz r25,11(r11)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11);
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r24,10(r11)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// add r3,r31,r9
	ctx.r3.u64 = ctx.r31.u64 + ctx.r9.u64;
	// lbz r23,9(r11)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// subfic r4,r31,200
	xer.ca = ctx.r31.u32 <= 200;
	ctx.r4.s64 = 200 - ctx.r31.s64;
	// lbz r22,8(r11)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// lbz r31,7(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r21,6(r11)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r20,5(r11)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// lwzx r5,r8,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// stw r28,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r28.u32);
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r27.u32);
	// stw r26,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r26.u32);
	// stw r25,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r25.u32);
	// stw r24,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r24.u32);
	// stw r23,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r23.u32);
	// stw r22,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r22.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r21,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r21.u32);
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// bl 0x83297a40
	ctx.lr = 0x832B470C;
	sub_83297A40(ctx, base);
	// b 0x832b5398
	goto loc_832B5398;
loc_832B4710:
	// lbz r9,10(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// lis r8,-31772
	ctx.r8.s64 = -2082209792;
	// lhz r7,14(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 14);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addic r6,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r6.s64 = ctx.r9.s64 + -1;
	// lhz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// addi r10,r8,19688
	ctx.r10.s64 = ctx.r8.s64 + 19688;
	// lhz r4,10(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// subfe r9,r6,r9
	temp.u8 = (~ctx.r6.u32 + ctx.r9.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r6.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// lhz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// addi r6,r10,32
	ctx.r6.s64 = ctx.r10.s64 + 32;
	// lhz r29,6(r11)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// lhz r27,4(r11)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// rlwinm r28,r9,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r26,2(r11)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r9,r5
	ctx.r9.s64 = ctx.r5.s16;
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r7,r4
	ctx.r7.s64 = ctx.r4.s16;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// extsh r9,r29
	ctx.r9.s64 = ctx.r29.s16;
	// lwzx r5,r28,r6
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r6.u32);
	// extsh r8,r27
	ctx.r8.s64 = ctx.r27.s16;
	// extsh r7,r26
	ctx.r7.s64 = ctx.r26.s16;
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// subfic r4,r31,200
	xer.ca = ctx.r31.u32 <= 200;
	ctx.r4.s64 = 200 - ctx.r31.s64;
	// add r3,r31,r3
	ctx.r3.u64 = ctx.r31.u64 + ctx.r3.u64;
	// bl 0x83297a40
	ctx.lr = 0x832B478C;
	sub_83297A40(ctx, base);
	// b 0x832b5398
	goto loc_832B5398;
loc_832B4790:
	// lbz r10,10(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// lis r9,-31772
	ctx.r9.s64 = -2082209792;
	// lhz r5,14(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 14);
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addic r4,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// lhz r29,12(r11)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// addi r9,r9,19688
	ctx.r9.s64 = ctx.r9.s64 + 19688;
	// lhz r28,10(r11)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// subfe r3,r4,r10
	temp.u8 = (~ctx.r4.u32 + ctx.r10.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// lhz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// addi r27,r9,128
	ctx.r27.s64 = ctx.r9.s64 + 128;
	// lhz r9,6(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// rlwinm r26,r3,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// add r3,r31,r6
	ctx.r3.u64 = ctx.r31.u64 + ctx.r6.u64;
	// lhz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// subfic r4,r31,200
	xer.ca = ctx.r31.u32 <= 200;
	ctx.r4.s64 = 200 - ctx.r31.s64;
	// lhz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// lwzx r5,r26,r27
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r27.u32);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x83297a40
	ctx.lr = 0x832B47EC;
	sub_83297A40(ctx, base);
	// b 0x832b5398
	goto loc_832B5398;
loc_832B47F0:
	// lbz r6,10(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// lis r4,-31772
	ctx.r4.s64 = -2082209792;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addic r3,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r3.s64 = ctx.r6.s64 + -1;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r4,19688
	ctx.r10.s64 = ctx.r4.s64 + 19688;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subfe r4,r3,r6
	temp.u8 = (~ctx.r3.u32 + ctx.r6.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r3.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r10,24
	ctx.r11.s64 = ctx.r10.s64 + 24;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r31,r5
	ctx.r3.u64 = ctx.r31.u64 + ctx.r5.u64;
	// subfic r4,r31,200
	xer.ca = ctx.r31.u32 <= 200;
	ctx.r4.s64 = 200 - ctx.r31.s64;
	// lwzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x83297a40
	ctx.lr = 0x832B4830;
	sub_83297A40(ctx, base);
	// b 0x832b5398
	goto loc_832B5398;
loc_832B4834:
	// lbz r6,10(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// lis r4,-31772
	ctx.r4.s64 = -2082209792;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addic r3,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r3.s64 = ctx.r6.s64 + -1;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r4,19688
	ctx.r10.s64 = ctx.r4.s64 + 19688;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subfe r4,r3,r6
	temp.u8 = (~ctx.r3.u32 + ctx.r6.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r3.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r10,120
	ctx.r11.s64 = ctx.r10.s64 + 120;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r31,r5
	ctx.r3.u64 = ctx.r31.u64 + ctx.r5.u64;
	// subfic r4,r31,200
	xer.ca = ctx.r31.u32 <= 200;
	ctx.r4.s64 = 200 - ctx.r31.s64;
	// lwzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x83297a40
	ctx.lr = 0x832B4874;
	sub_83297A40(ctx, base);
	// b 0x832b5398
	goto loc_832B5398;
loc_832B4878:
	// lbz r9,10(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// lis r8,-31772
	ctx.r8.s64 = -2082209792;
	// ld r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// addic r5,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r5.s64 = ctx.r9.s64 + -1;
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r8,19688
	ctx.r11.s64 = ctx.r8.s64 + 19688;
	// subfe r4,r5,r9
	temp.u8 = (~ctx.r5.u32 + ctx.r9.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r11,56
	ctx.r11.s64 = ctx.r11.s64 + 56;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r4,r31,200
	xer.ca = ctx.r31.u32 <= 200;
	ctx.r4.s64 = 200 - ctx.r31.s64;
	// add r3,r31,r10
	ctx.r3.u64 = ctx.r31.u64 + ctx.r10.u64;
	// lwzx r5,r9,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// bl 0x83297a40
	ctx.lr = 0x832B48B0;
	sub_83297A40(ctx, base);
	// b 0x832b5398
	goto loc_832B5398;
loc_832B48B4:
	// lbz r9,10(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// lis r8,-31772
	ctx.r8.s64 = -2082209792;
	// ld r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// addic r5,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r5.s64 = ctx.r9.s64 + -1;
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r8,19688
	ctx.r11.s64 = ctx.r8.s64 + 19688;
	// subfe r4,r5,r9
	temp.u8 = (~ctx.r5.u32 + ctx.r9.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r11,152
	ctx.r11.s64 = ctx.r11.s64 + 152;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r4,r31,200
	xer.ca = ctx.r31.u32 <= 200;
	ctx.r4.s64 = 200 - ctx.r31.s64;
	// add r3,r31,r10
	ctx.r3.u64 = ctx.r31.u64 + ctx.r10.u64;
	// lwzx r5,r9,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// bl 0x83297a40
	ctx.lr = 0x832B48EC;
	sub_83297A40(ctx, base);
	// b 0x832b5398
	goto loc_832B5398;
loc_832B48F0:
	// lis r9,-31772
	ctx.r9.s64 = -2082209792;
	// lfs f4,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lbz r10,10(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// lfs f2,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// addi r11,r9,19688
	ctx.r11.s64 = ctx.r9.s64 + 19688;
	// stfd f4,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.f4.u64);
	// ld r9,64(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 64);
	// stfd f3,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.f3.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 56);
	// stfd f2,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f2.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// addic r5,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// subfe r4,r5,r10
	temp.u8 = (~ctx.r5.u32 + ctx.r10.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r10,r11,216
	ctx.r10.s64 = ctx.r11.s64 + 216;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// subfic r4,r31,200
	xer.ca = ctx.r31.u32 <= 200;
	ctx.r4.s64 = 200 - ctx.r31.s64;
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwzx r5,r5,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// bl 0x83297a40
	ctx.lr = 0x832B4950;
	sub_83297A40(ctx, base);
	// b 0x832b5398
	goto loc_832B5398;
loc_832B4954:
	// lbz r10,10(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// lis r9,-31772
	ctx.r9.s64 = -2082209792;
	// lfd f4,24(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// addic r8,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// lfd f3,16(r11)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// lfd f2,8(r11)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lfd f1,0(r11)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// subfe r7,r8,r10
	temp.u8 = (~ctx.r8.u32 + ctx.r10.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r9,19688
	ctx.r11.s64 = ctx.r9.s64 + 19688;
	// stfd f4,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.f4.u64);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stfd f3,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.f3.u64);
	// addi r6,r11,216
	ctx.r6.s64 = ctx.r11.s64 + 216;
	// stfd f2,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f2.u64);
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r9,64(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 64);
	// ld r8,56(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 56);
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// subfic r4,r31,200
	xer.ca = ctx.r31.u32 <= 200;
	ctx.r4.s64 = 200 - ctx.r31.s64;
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwzx r5,r5,r6
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x83297a40
	ctx.lr = 0x832B49B4;
	sub_83297A40(ctx, base);
	// b 0x832b5398
	goto loc_832B5398;
loc_832B49B8:
	// lbz r8,15(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 15);
	// lis r7,-31772
	ctx.r7.s64 = -2082209792;
	// lbz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// addi r9,r7,19688
	ctx.r9.s64 = ctx.r7.s64 + 19688;
	// lbz r6,14(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 14);
	// add r3,r31,r10
	ctx.r3.u64 = ctx.r31.u64 + ctx.r10.u64;
	// lbz r10,10(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// addi r29,r9,136
	ctx.r29.s64 = ctx.r9.s64 + 136;
	// lbz r5,13(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 13);
	// stw r8,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r8.u32);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// subfe r8,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r6,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r6.u32);
	// subfic r4,r31,200
	xer.ca = ctx.r31.u32 <= 200;
	ctx.r4.s64 = 200 - ctx.r31.s64;
	// lbz r28,11(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r31,10(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// lbz r27,9(r11)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// lbz r26,8(r11)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// lbz r25,7(r11)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r24,6(r11)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r23,5(r11)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// stw r5,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// lwzx r5,r6,r29
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r29.u32);
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// stw r26,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// bl 0x83297a40
	ctx.lr = 0x832B4A54;
	sub_83297A40(ctx, base);
	// b 0x832b5398
	goto loc_832B5398;
loc_832B4A58:
	// lbz r9,10(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// lis r8,-31772
	ctx.r8.s64 = -2082209792;
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// addic r7,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// addi r11,r8,19688
	ctx.r11.s64 = ctx.r8.s64 + 19688;
	// subfe r5,r7,r9
	temp.u8 = (~ctx.r7.u32 + ctx.r9.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r7.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r4,r31,200
	xer.ca = ctx.r31.u32 <= 200;
	ctx.r4.s64 = 200 - ctx.r31.s64;
	// add r3,r31,r10
	ctx.r3.u64 = ctx.r31.u64 + ctx.r10.u64;
	// lwzx r5,r9,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// bl 0x83297a40
	ctx.lr = 0x832B4A8C;
	sub_83297A40(ctx, base);
	// b 0x832b5398
	goto loc_832B5398;
loc_832B4A90:
	// lbz r9,10(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// lis r8,-31772
	ctx.r8.s64 = -2082209792;
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// addic r5,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r5.s64 = ctx.r9.s64 + -1;
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r8,19688
	ctx.r11.s64 = ctx.r8.s64 + 19688;
	// subfe r4,r5,r9
	temp.u8 = (~ctx.r5.u32 + ctx.r9.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r11,104
	ctx.r11.s64 = ctx.r11.s64 + 104;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r4,r31,200
	xer.ca = ctx.r31.u32 <= 200;
	ctx.r4.s64 = 200 - ctx.r31.s64;
	// add r3,r31,r10
	ctx.r3.u64 = ctx.r31.u64 + ctx.r10.u64;
	// lwzx r5,r9,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// bl 0x83297a40
	ctx.lr = 0x832B4AC8;
	sub_83297A40(ctx, base);
	// b 0x832b5398
	goto loc_832B5398;
loc_832B4ACC:
	// lbz r5,10(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// lis r4,-31772
	ctx.r4.s64 = -2082209792;
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// addic r3,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	ctx.r3.s64 = ctx.r5.s64 + -1;
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r10,r4,19688
	ctx.r10.s64 = ctx.r4.s64 + 19688;
	// subfe r11,r3,r5
	temp.u8 = (~ctx.r3.u32 + ctx.r5.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r3.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r10,r10,112
	ctx.r10.s64 = ctx.r10.s64 + 112;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r4,r31,200
	xer.ca = ctx.r31.u32 <= 200;
	ctx.r4.s64 = 200 - ctx.r31.s64;
	// add r3,r31,r9
	ctx.r3.u64 = ctx.r31.u64 + ctx.r9.u64;
	// lwzx r5,r5,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// bl 0x83297a40
	ctx.lr = 0x832B4B08;
	sub_83297A40(ctx, base);
	// b 0x832b5398
	goto loc_832B5398;
loc_832B4B0C:
	// lbz r6,10(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// lis r4,-31772
	ctx.r4.s64 = -2082209792;
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addic r3,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r3.s64 = ctx.r6.s64 + -1;
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// addi r10,r4,19688
	ctx.r10.s64 = ctx.r4.s64 + 19688;
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// subfe r4,r3,r6
	temp.u8 = (~ctx.r3.u32 + ctx.r6.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r3.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r10,120
	ctx.r11.s64 = ctx.r10.s64 + 120;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r31,r5
	ctx.r3.u64 = ctx.r31.u64 + ctx.r5.u64;
	// subfic r4,r31,200
	xer.ca = ctx.r31.u32 <= 200;
	ctx.r4.s64 = 200 - ctx.r31.s64;
	// lwzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x83297a40
	ctx.lr = 0x832B4B4C;
	sub_83297A40(ctx, base);
	// b 0x832b5398
	goto loc_832B5398;
loc_832B4B50:
	// lbz r10,10(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// lis r9,-31772
	ctx.r9.s64 = -2082209792;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// addic r7,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// addi r5,r9,19688
	ctx.r5.s64 = ctx.r9.s64 + 19688;
	// subfe r4,r7,r10
	temp.u8 = (~ctx.r7.u32 + ctx.r10.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r7.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// extsb r6,r8
	ctx.r6.s64 = ctx.r8.s8;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r4,r31,200
	xer.ca = ctx.r31.u32 <= 200;
	ctx.r4.s64 = 200 - ctx.r31.s64;
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwzx r5,r10,r5
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// bl 0x83297a40
	ctx.lr = 0x832B4B84;
	sub_83297A40(ctx, base);
	// b 0x832b5398
	goto loc_832B5398;
loc_832B4B88:
	// lbz r9,10(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// lis r8,-31772
	ctx.r8.s64 = -2082209792;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// addic r6,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r6.s64 = ctx.r9.s64 + -1;
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r11,r8,19688
	ctx.r11.s64 = ctx.r8.s64 + 19688;
	// subfe r4,r6,r9
	temp.u8 = (~ctx.r6.u32 + ctx.r9.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// extsb r6,r5
	ctx.r6.s64 = ctx.r5.s8;
	// extsb r7,r7
	ctx.r7.s64 = ctx.r7.s8;
	// subfic r4,r31,200
	xer.ca = ctx.r31.u32 <= 200;
	ctx.r4.s64 = 200 - ctx.r31.s64;
	// add r3,r31,r10
	ctx.r3.u64 = ctx.r31.u64 + ctx.r10.u64;
	// lwzx r5,r9,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// bl 0x83297a40
	ctx.lr = 0x832B4BC8;
	sub_83297A40(ctx, base);
	// b 0x832b5398
	goto loc_832B5398;
loc_832B4BCC:
	// lbz r8,10(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// lis r7,-31772
	ctx.r7.s64 = -2082209792;
	// lbz r6,2(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// addic r5,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r5.s64 = ctx.r8.s64 + -1;
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r10,r7,19688
	ctx.r10.s64 = ctx.r7.s64 + 19688;
	// subfe r11,r5,r8
	temp.u8 = (~ctx.r5.u32 + ctx.r8.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r5.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// extsb r8,r6
	ctx.r8.s64 = ctx.r6.s8;
	// extsb r7,r4
	ctx.r7.s64 = ctx.r4.s8;
	// extsb r6,r3
	ctx.r6.s64 = ctx.r3.s8;
	// subfic r4,r31,200
	xer.ca = ctx.r31.u32 <= 200;
	ctx.r4.s64 = 200 - ctx.r31.s64;
	// add r3,r31,r9
	ctx.r3.u64 = ctx.r31.u64 + ctx.r9.u64;
	// lwzx r5,r5,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// bl 0x83297a40
	ctx.lr = 0x832B4C14;
	sub_83297A40(ctx, base);
	// b 0x832b5398
	goto loc_832B5398;
loc_832B4C18:
	// lbz r9,10(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// lis r8,-31772
	ctx.r8.s64 = -2082209792;
	// lbz r7,3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addic r6,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r6.s64 = ctx.r9.s64 + -1;
	// lbz r5,2(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// addi r10,r8,19688
	ctx.r10.s64 = ctx.r8.s64 + 19688;
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// subfe r9,r6,r9
	temp.u8 = (~ctx.r6.u32 + ctx.r9.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r6.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r10,24
	ctx.r11.s64 = ctx.r10.s64 + 24;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// extsb r9,r7
	ctx.r9.s64 = ctx.r7.s8;
	// extsb r7,r4
	ctx.r7.s64 = ctx.r4.s8;
	// extsb r8,r5
	ctx.r8.s64 = ctx.r5.s8;
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// subfic r4,r31,200
	xer.ca = ctx.r31.u32 <= 200;
	ctx.r4.s64 = 200 - ctx.r31.s64;
	// lwzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r3,r31,r3
	ctx.r3.u64 = ctx.r31.u64 + ctx.r3.u64;
	// bl 0x83297a40
	ctx.lr = 0x832B4C68;
	sub_83297A40(ctx, base);
	// b 0x832b5398
	goto loc_832B5398;
loc_832B4C6C:
	// lbz r9,10(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// lis r8,-31772
	ctx.r8.s64 = -2082209792;
	// lhz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// addic r7,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// addi r11,r8,19688
	ctx.r11.s64 = ctx.r8.s64 + 19688;
	// subfe r5,r7,r9
	temp.u8 = (~ctx.r7.u32 + ctx.r9.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r7.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r4,r31,200
	xer.ca = ctx.r31.u32 <= 200;
	ctx.r4.s64 = 200 - ctx.r31.s64;
	// add r3,r31,r10
	ctx.r3.u64 = ctx.r31.u64 + ctx.r10.u64;
	// lwzx r5,r9,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// bl 0x83297a40
	ctx.lr = 0x832B4CA0;
	sub_83297A40(ctx, base);
	// b 0x832b5398
	goto loc_832B5398;
loc_832B4CA4:
	// lbz r9,10(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// lis r8,-31772
	ctx.r8.s64 = -2082209792;
	// lhz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// addic r5,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r5.s64 = ctx.r9.s64 + -1;
	// lhz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r8,19688
	ctx.r11.s64 = ctx.r8.s64 + 19688;
	// subfe r4,r5,r9
	temp.u8 = (~ctx.r5.u32 + ctx.r9.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r11,104
	ctx.r11.s64 = ctx.r11.s64 + 104;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r4,r31,200
	xer.ca = ctx.r31.u32 <= 200;
	ctx.r4.s64 = 200 - ctx.r31.s64;
	// add r3,r31,r10
	ctx.r3.u64 = ctx.r31.u64 + ctx.r10.u64;
	// lwzx r5,r9,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// bl 0x83297a40
	ctx.lr = 0x832B4CDC;
	sub_83297A40(ctx, base);
	// b 0x832b5398
	goto loc_832B5398;
loc_832B4CE0:
	// lbz r5,10(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// lis r4,-31772
	ctx.r4.s64 = -2082209792;
	// lhz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// addic r3,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	ctx.r3.s64 = ctx.r5.s64 + -1;
	// lhz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r10,r4,19688
	ctx.r10.s64 = ctx.r4.s64 + 19688;
	// subfe r11,r3,r5
	temp.u8 = (~ctx.r3.u32 + ctx.r5.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r3.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r10,r10,112
	ctx.r10.s64 = ctx.r10.s64 + 112;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r4,r31,200
	xer.ca = ctx.r31.u32 <= 200;
	ctx.r4.s64 = 200 - ctx.r31.s64;
	// add r3,r31,r9
	ctx.r3.u64 = ctx.r31.u64 + ctx.r9.u64;
	// lwzx r5,r5,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// bl 0x83297a40
	ctx.lr = 0x832B4D1C;
	sub_83297A40(ctx, base);
	// b 0x832b5398
	goto loc_832B5398;
loc_832B4D20:
	// lbz r6,10(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// lis r4,-31772
	ctx.r4.s64 = -2082209792;
	// lhz r9,6(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addic r3,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r3.s64 = ctx.r6.s64 + -1;
	// lhz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// addi r10,r4,19688
	ctx.r10.s64 = ctx.r4.s64 + 19688;
	// lhz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// subfe r4,r3,r6
	temp.u8 = (~ctx.r3.u32 + ctx.r6.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r3.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// lhz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r10,120
	ctx.r11.s64 = ctx.r10.s64 + 120;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r31,r5
	ctx.r3.u64 = ctx.r31.u64 + ctx.r5.u64;
	// subfic r4,r31,200
	xer.ca = ctx.r31.u32 <= 200;
	ctx.r4.s64 = 200 - ctx.r31.s64;
	// lwzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x83297a40
	ctx.lr = 0x832B4D60;
	sub_83297A40(ctx, base);
	// b 0x832b5398
	goto loc_832B5398;
loc_832B4D64:
	// lbz r10,10(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// lis r9,-31772
	ctx.r9.s64 = -2082209792;
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// addic r7,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// addi r5,r9,19688
	ctx.r5.s64 = ctx.r9.s64 + 19688;
	// subfe r4,r7,r10
	temp.u8 = (~ctx.r7.u32 + ctx.r10.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r7.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r4,r31,200
	xer.ca = ctx.r31.u32 <= 200;
	ctx.r4.s64 = 200 - ctx.r31.s64;
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwzx r5,r10,r5
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// bl 0x83297a40
	ctx.lr = 0x832B4D98;
	sub_83297A40(ctx, base);
	// b 0x832b5398
	goto loc_832B5398;
loc_832B4D9C:
	// lbz r9,10(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// lis r8,-31772
	ctx.r8.s64 = -2082209792;
	// lhz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// addic r6,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r6.s64 = ctx.r9.s64 + -1;
	// lhz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// addi r11,r8,19688
	ctx.r11.s64 = ctx.r8.s64 + 19688;
	// subfe r4,r6,r9
	temp.u8 = (~ctx.r6.u32 + ctx.r9.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// extsh r6,r5
	ctx.r6.s64 = ctx.r5.s16;
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// subfic r4,r31,200
	xer.ca = ctx.r31.u32 <= 200;
	ctx.r4.s64 = 200 - ctx.r31.s64;
	// add r3,r31,r10
	ctx.r3.u64 = ctx.r31.u64 + ctx.r10.u64;
	// lwzx r5,r9,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// bl 0x83297a40
	ctx.lr = 0x832B4DDC;
	sub_83297A40(ctx, base);
	// b 0x832b5398
	goto loc_832B5398;
loc_832B4DE0:
	// lbz r8,10(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// lis r7,-31772
	ctx.r7.s64 = -2082209792;
	// lhz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// addic r5,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r5.s64 = ctx.r8.s64 + -1;
	// lhz r4,2(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r10,r7,19688
	ctx.r10.s64 = ctx.r7.s64 + 19688;
	// subfe r11,r5,r8
	temp.u8 = (~ctx.r5.u32 + ctx.r8.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r5.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// extsh r8,r6
	ctx.r8.s64 = ctx.r6.s16;
	// extsh r7,r4
	ctx.r7.s64 = ctx.r4.s16;
	// extsh r6,r3
	ctx.r6.s64 = ctx.r3.s16;
	// subfic r4,r31,200
	xer.ca = ctx.r31.u32 <= 200;
	ctx.r4.s64 = 200 - ctx.r31.s64;
	// add r3,r31,r9
	ctx.r3.u64 = ctx.r31.u64 + ctx.r9.u64;
	// lwzx r5,r5,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// bl 0x83297a40
	ctx.lr = 0x832B4E28;
	sub_83297A40(ctx, base);
	// b 0x832b5398
	goto loc_832B5398;
loc_832B4E2C:
	// lbz r9,10(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// lis r8,-31772
	ctx.r8.s64 = -2082209792;
	// lhz r7,6(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addic r6,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r6.s64 = ctx.r9.s64 + -1;
	// lhz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// addi r10,r8,19688
	ctx.r10.s64 = ctx.r8.s64 + 19688;
	// lhz r4,2(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// subfe r9,r6,r9
	temp.u8 = (~ctx.r6.u32 + ctx.r9.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r6.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// lhz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r10,24
	ctx.r11.s64 = ctx.r10.s64 + 24;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// extsh r7,r4
	ctx.r7.s64 = ctx.r4.s16;
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// subfic r4,r31,200
	xer.ca = ctx.r31.u32 <= 200;
	ctx.r4.s64 = 200 - ctx.r31.s64;
	// lwzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r3,r31,r3
	ctx.r3.u64 = ctx.r31.u64 + ctx.r3.u64;
	// bl 0x83297a40
	ctx.lr = 0x832B4E7C;
	sub_83297A40(ctx, base);
	// b 0x832b5398
	goto loc_832B5398;
loc_832B4E80:
	// lbz r9,10(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// lis r8,-31772
	ctx.r8.s64 = -2082209792;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// addic r5,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r5.s64 = ctx.r9.s64 + -1;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r8,19688
	ctx.r11.s64 = ctx.r8.s64 + 19688;
	// subfe r4,r5,r9
	temp.u8 = (~ctx.r5.u32 + ctx.r9.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r11,104
	ctx.r11.s64 = ctx.r11.s64 + 104;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r4,r31,200
	xer.ca = ctx.r31.u32 <= 200;
	ctx.r4.s64 = 200 - ctx.r31.s64;
	// add r3,r31,r10
	ctx.r3.u64 = ctx.r31.u64 + ctx.r10.u64;
	// lwzx r5,r9,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// bl 0x83297a40
	ctx.lr = 0x832B4EB8;
	sub_83297A40(ctx, base);
	// b 0x832b5398
	goto loc_832B5398;
loc_832B4EBC:
	// lbz r5,10(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// lis r4,-31772
	ctx.r4.s64 = -2082209792;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// addic r3,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	ctx.r3.s64 = ctx.r5.s64 + -1;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r4,19688
	ctx.r10.s64 = ctx.r4.s64 + 19688;
	// subfe r11,r3,r5
	temp.u8 = (~ctx.r3.u32 + ctx.r5.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r3.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r10,r10,112
	ctx.r10.s64 = ctx.r10.s64 + 112;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r4,r31,200
	xer.ca = ctx.r31.u32 <= 200;
	ctx.r4.s64 = 200 - ctx.r31.s64;
	// add r3,r31,r9
	ctx.r3.u64 = ctx.r31.u64 + ctx.r9.u64;
	// lwzx r5,r5,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// bl 0x83297a40
	ctx.lr = 0x832B4EF8;
	sub_83297A40(ctx, base);
	// b 0x832b5398
	goto loc_832B5398;
loc_832B4EFC:
	// lbz r9,10(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// lis r8,-31772
	ctx.r8.s64 = -2082209792;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// addic r5,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r5.s64 = ctx.r9.s64 + -1;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r8,19688
	ctx.r11.s64 = ctx.r8.s64 + 19688;
	// subfe r4,r5,r9
	temp.u8 = (~ctx.r5.u32 + ctx.r9.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r4,r31,200
	xer.ca = ctx.r31.u32 <= 200;
	ctx.r4.s64 = 200 - ctx.r31.s64;
	// add r3,r31,r10
	ctx.r3.u64 = ctx.r31.u64 + ctx.r10.u64;
	// lwzx r5,r9,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// bl 0x83297a40
	ctx.lr = 0x832B4F34;
	sub_83297A40(ctx, base);
	// b 0x832b5398
	goto loc_832B5398;
loc_832B4F38:
	// lbz r5,10(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// lis r4,-31772
	ctx.r4.s64 = -2082209792;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// addic r3,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	ctx.r3.s64 = ctx.r5.s64 + -1;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r4,19688
	ctx.r10.s64 = ctx.r4.s64 + 19688;
	// subfe r11,r3,r5
	temp.u8 = (~ctx.r3.u32 + ctx.r5.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r3.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r4,r31,200
	xer.ca = ctx.r31.u32 <= 200;
	ctx.r4.s64 = 200 - ctx.r31.s64;
	// add r3,r31,r9
	ctx.r3.u64 = ctx.r31.u64 + ctx.r9.u64;
	// lwzx r5,r5,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// bl 0x83297a40
	ctx.lr = 0x832B4F74;
	sub_83297A40(ctx, base);
	// b 0x832b5398
	goto loc_832B5398;
loc_832B4F78:
	// lbz r9,10(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// lis r8,-31772
	ctx.r8.s64 = -2082209792;
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// addic r7,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// addi r11,r8,19688
	ctx.r11.s64 = ctx.r8.s64 + 19688;
	// subfe r5,r7,r9
	temp.u8 = (~ctx.r7.u32 + ctx.r9.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r7.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r11,144
	ctx.r11.s64 = ctx.r11.s64 + 144;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r4,r31,200
	xer.ca = ctx.r31.u32 <= 200;
	ctx.r4.s64 = 200 - ctx.r31.s64;
	// add r3,r31,r10
	ctx.r3.u64 = ctx.r31.u64 + ctx.r10.u64;
	// lwzx r5,r9,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// bl 0x83297a40
	ctx.lr = 0x832B4FAC;
	sub_83297A40(ctx, base);
	// b 0x832b5398
	goto loc_832B5398;
loc_832B4FB0:
	// lbz r5,10(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// lis r4,-31772
	ctx.r4.s64 = -2082209792;
	// ld r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// addic r3,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	ctx.r3.s64 = ctx.r5.s64 + -1;
	// ld r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r10,r4,19688
	ctx.r10.s64 = ctx.r4.s64 + 19688;
	// subfe r11,r3,r5
	temp.u8 = (~ctx.r3.u32 + ctx.r5.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r3.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r10,r10,160
	ctx.r10.s64 = ctx.r10.s64 + 160;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r4,r31,200
	xer.ca = ctx.r31.u32 <= 200;
	ctx.r4.s64 = 200 - ctx.r31.s64;
	// add r3,r31,r9
	ctx.r3.u64 = ctx.r31.u64 + ctx.r9.u64;
	// lwzx r5,r5,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// bl 0x83297a40
	ctx.lr = 0x832B4FEC;
	sub_83297A40(ctx, base);
	// b 0x832b5398
	goto loc_832B5398;
loc_832B4FF0:
	// lbz r6,10(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// lis r4,-31772
	ctx.r4.s64 = -2082209792;
	// ld r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addic r3,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r3.s64 = ctx.r6.s64 + -1;
	// ld r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// addi r10,r4,19688
	ctx.r10.s64 = ctx.r4.s64 + 19688;
	// ld r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// subfe r4,r3,r6
	temp.u8 = (~ctx.r3.u32 + ctx.r6.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r3.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r10,168
	ctx.r11.s64 = ctx.r10.s64 + 168;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r31,r5
	ctx.r3.u64 = ctx.r31.u64 + ctx.r5.u64;
	// subfic r4,r31,200
	xer.ca = ctx.r31.u32 <= 200;
	ctx.r4.s64 = 200 - ctx.r31.s64;
	// lwzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x83297a40
	ctx.lr = 0x832B5030;
	sub_83297A40(ctx, base);
	// b 0x832b5398
	goto loc_832B5398;
loc_832B5034:
	// lbz r9,10(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// lis r8,-31772
	ctx.r8.s64 = -2082209792;
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// addic r7,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// addi r11,r8,19688
	ctx.r11.s64 = ctx.r8.s64 + 19688;
	// subfe r5,r7,r9
	temp.u8 = (~ctx.r7.u32 + ctx.r9.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r7.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r4,r31,200
	xer.ca = ctx.r31.u32 <= 200;
	ctx.r4.s64 = 200 - ctx.r31.s64;
	// add r3,r31,r10
	ctx.r3.u64 = ctx.r31.u64 + ctx.r10.u64;
	// lwzx r5,r9,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// bl 0x83297a40
	ctx.lr = 0x832B5068;
	sub_83297A40(ctx, base);
	// b 0x832b5398
	goto loc_832B5398;
loc_832B506C:
	// lbz r5,10(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// lis r4,-31772
	ctx.r4.s64 = -2082209792;
	// ld r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// addic r3,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	ctx.r3.s64 = ctx.r5.s64 + -1;
	// ld r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r10,r4,19688
	ctx.r10.s64 = ctx.r4.s64 + 19688;
	// subfe r11,r3,r5
	temp.u8 = (~ctx.r3.u32 + ctx.r5.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r3.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r4,r31,200
	xer.ca = ctx.r31.u32 <= 200;
	ctx.r4.s64 = 200 - ctx.r31.s64;
	// add r3,r31,r9
	ctx.r3.u64 = ctx.r31.u64 + ctx.r9.u64;
	// lwzx r5,r5,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// bl 0x83297a40
	ctx.lr = 0x832B50A8;
	sub_83297A40(ctx, base);
	// b 0x832b5398
	goto loc_832B5398;
loc_832B50AC:
	// lbz r6,10(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// lis r4,-31772
	ctx.r4.s64 = -2082209792;
	// ld r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addic r3,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r3.s64 = ctx.r6.s64 + -1;
	// ld r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// addi r10,r4,19688
	ctx.r10.s64 = ctx.r4.s64 + 19688;
	// ld r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// subfe r4,r3,r6
	temp.u8 = (~ctx.r3.u32 + ctx.r6.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r3.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r10,72
	ctx.r11.s64 = ctx.r10.s64 + 72;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r31,r5
	ctx.r3.u64 = ctx.r31.u64 + ctx.r5.u64;
	// subfic r4,r31,200
	xer.ca = ctx.r31.u32 <= 200;
	ctx.r4.s64 = 200 - ctx.r31.s64;
	// lwzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x83297a40
	ctx.lr = 0x832B50EC;
	sub_83297A40(ctx, base);
	// b 0x832b5398
	goto loc_832B5398;
loc_832B50F0:
	// lfs f1,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lbz r11,10(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// lis r9,-31772
	ctx.r9.s64 = -2082209792;
	// subfe r8,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r9,19688
	ctx.r11.s64 = ctx.r9.s64 + 19688;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r11,192
	ctx.r5.s64 = ctx.r11.s64 + 192;
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// subfic r4,r31,200
	xer.ca = ctx.r31.u32 <= 200;
	ctx.r4.s64 = 200 - ctx.r31.s64;
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwzx r5,r7,r5
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r5.u32);
	// bl 0x83297a40
	ctx.lr = 0x832B512C;
	sub_83297A40(ctx, base);
	// b 0x832b5398
	goto loc_832B5398;
loc_832B5130:
	// lfs f2,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lbz r10,10(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// stfd f2,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f2.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// lfs f1,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// addic r8,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// lis r9,-31772
	ctx.r9.s64 = -2082209792;
	// subfe r5,r8,r10
	temp.u8 = (~ctx.r8.u32 + ctx.r10.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r8.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r9,19688
	ctx.r11.s64 = ctx.r9.s64 + 19688;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r11,200
	ctx.r10.s64 = ctx.r11.s64 + 200;
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// subfic r4,r31,200
	xer.ca = ctx.r31.u32 <= 200;
	ctx.r4.s64 = 200 - ctx.r31.s64;
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwzx r5,r9,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x83297a40
	ctx.lr = 0x832B5178;
	sub_83297A40(ctx, base);
	// b 0x832b5398
	goto loc_832B5398;
loc_832B517C:
	// lfs f3,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lbz r10,10(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// lfs f2,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lis r9,-31772
	ctx.r9.s64 = -2082209792;
	// lfs f1,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// addic r6,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// stfd f3,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.f3.u64);
	// addi r11,r9,19688
	ctx.r11.s64 = ctx.r9.s64 + 19688;
	// stfd f2,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f2.u64);
	// subfe r5,r6,r10
	temp.u8 = (~ctx.r6.u32 + ctx.r10.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// addi r10,r11,208
	ctx.r10.s64 = ctx.r11.s64 + 208;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// subfic r4,r31,200
	xer.ca = ctx.r31.u32 <= 200;
	ctx.r4.s64 = 200 - ctx.r31.s64;
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwzx r5,r9,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// ld r8,56(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 56);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x83297a40
	ctx.lr = 0x832B51D0;
	sub_83297A40(ctx, base);
	// b 0x832b5398
	goto loc_832B5398;
loc_832B51D4:
	// lis r9,-31772
	ctx.r9.s64 = -2082209792;
	// lfs f1,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f3,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lbz r10,10(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// lfs f4,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// addi r11,r9,19688
	ctx.r11.s64 = ctx.r9.s64 + 19688;
	// stfd f3,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.f3.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 56);
	// stfd f4,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.f4.u64);
	// ld r9,64(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 64);
	// stfd f2,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f2.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// addic r5,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// subfe r4,r5,r10
	temp.u8 = (~ctx.r5.u32 + ctx.r10.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r10,r11,216
	ctx.r10.s64 = ctx.r11.s64 + 216;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// subfic r4,r31,200
	xer.ca = ctx.r31.u32 <= 200;
	ctx.r4.s64 = 200 - ctx.r31.s64;
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwzx r5,r5,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x83297a40
	ctx.lr = 0x832B5234;
	sub_83297A40(ctx, base);
	// b 0x832b5398
	goto loc_832B5398;
loc_832B5238:
	// lfd f1,0(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lbz r10,10(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// lis r9,-31772
	ctx.r9.s64 = -2082209792;
	// addic r8,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// addi r11,r9,19688
	ctx.r11.s64 = ctx.r9.s64 + 19688;
	// subfe r7,r8,r10
	temp.u8 = (~ctx.r8.u32 + ctx.r10.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r6,r11,192
	ctx.r6.s64 = ctx.r11.s64 + 192;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// subfic r4,r31,200
	xer.ca = ctx.r31.u32 <= 200;
	ctx.r4.s64 = 200 - ctx.r31.s64;
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwzx r5,r5,r6
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x83297a40
	ctx.lr = 0x832B5274;
	sub_83297A40(ctx, base);
	// b 0x832b5398
	goto loc_832B5398;
loc_832B5278:
	// lfd f1,0(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lbz r10,10(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// lfd f2,8(r11)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lis r8,-31772
	ctx.r8.s64 = -2082209792;
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// stfd f2,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f2.u64);
	// addi r11,r8,19688
	ctx.r11.s64 = ctx.r8.s64 + 19688;
	// subfe r7,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r10,r11,200
	ctx.r10.s64 = ctx.r11.s64 + 200;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// subfic r4,r31,200
	xer.ca = ctx.r31.u32 <= 200;
	ctx.r4.s64 = 200 - ctx.r31.s64;
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwzx r5,r5,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// bl 0x83297a40
	ctx.lr = 0x832B52C0;
	sub_83297A40(ctx, base);
	// b 0x832b5398
	goto loc_832B5398;
loc_832B52C4:
	// lbz r10,10(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// lfd f2,8(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lfd f3,16(r11)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// lis r9,-31772
	ctx.r9.s64 = -2082209792;
	// addic r8,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// stfd f2,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f2.u64);
	// stfd f3,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.f3.u64);
	// subfe r7,r8,r10
	temp.u8 = (~ctx.r8.u32 + ctx.r10.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// ld r8,56(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 56);
	// lfd f1,0(r11)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r11,r9,19688
	ctx.r11.s64 = ctx.r9.s64 + 19688;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// addi r6,r11,208
	ctx.r6.s64 = ctx.r11.s64 + 208;
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// subfic r4,r31,200
	xer.ca = ctx.r31.u32 <= 200;
	ctx.r4.s64 = 200 - ctx.r31.s64;
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwzx r5,r5,r6
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x83297a40
	ctx.lr = 0x832B5318;
	sub_83297A40(ctx, base);
	// b 0x832b5398
	goto loc_832B5398;
loc_832B531C:
	// lbz r10,10(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10);
	// lis r8,-31772
	ctx.r8.s64 = -2082209792;
	// lfd f4,24(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// addic r7,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// lfd f1,0(r11)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lfd f3,16(r11)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// lfd f2,8(r11)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// subfe r5,r7,r10
	temp.u8 = (~ctx.r7.u32 + ctx.r10.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r7.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r8,19688
	ctx.r11.s64 = ctx.r8.s64 + 19688;
	// stfd f4,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.f4.u64);
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// addi r10,r11,216
	ctx.r10.s64 = ctx.r11.s64 + 216;
	// stfd f3,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.f3.u64);
	// ld r9,64(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 64);
	// stfd f2,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f2.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// subfic r4,r31,200
	xer.ca = ctx.r31.u32 <= 200;
	ctx.r4.s64 = 200 - ctx.r31.s64;
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwzx r5,r8,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// ld r8,56(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 56);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// bl 0x83297a40
	ctx.lr = 0x832B537C;
	sub_83297A40(ctx, base);
	// b 0x832b5398
	goto loc_832B5398;
loc_832B5380:
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// subfic r4,r31,200
	xer.ca = ctx.r31.u32 <= 200;
	ctx.r4.s64 = 200 - ctx.r31.s64;
	// addi r5,r10,-23836
	ctx.r5.s64 = ctx.r10.s64 + -23836;
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x83297a40
	ctx.lr = 0x832B5398;
	sub_83297A40(ctx, base);
loc_832B5398:
	// cmplwi cr6,r3,200
	cr6.compare<uint32_t>(ctx.r3.u32, 200, xer);
	// bge cr6,0x832b53b4
	if (!cr6.lt) goto loc_832B53B4;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83298488
	ctx.lr = 0x832B53B4;
	sub_83298488(ctx, base);
loc_832B53B4:
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B53BC"))) PPC_WEAK_FUNC(sub_832B53BC);
PPC_FUNC_IMPL(__imp__sub_832B53BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B53C0"))) PPC_WEAK_FUNC(sub_832B53C0);
PPC_FUNC_IMPL(__imp__sub_832B53C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832B53C8;
	__savegprlr_27(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// beq cr6,0x832b5464
	if (cr6.eq) goto loc_832B5464;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r27,r10,-23784
	ctx.r27.s64 = ctx.r10.s64 + -23784;
loc_832B53F0:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bne cr6,0x832b5448
	if (!cr6.eq) goto loc_832B5448;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,200
	ctx.r4.s64 = 200;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83297a40
	ctx.lr = 0x832B5410;
	sub_83297A40(ctx, base);
	// cmplwi cr6,r3,200
	cr6.compare<uint32_t>(ctx.r3.u32, 200, xer);
	// beq cr6,0x832b543c
	if (cr6.eq) goto loc_832B543C;
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x832b53c0
	ctx.lr = 0x832B5430;
	sub_832B53C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832b5458
	if (!cr6.eq) goto loc_832B5458;
loc_832B543C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_832B5448:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832b41d8
	ctx.lr = 0x832B5458;
	sub_832B41D8(ctx, base);
loc_832B5458:
	// lbzu r11,16(r31)
	ea = 16 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// bne cr6,0x832b53f0
	if (!cr6.eq) goto loc_832B53F0;
loc_832B5464:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B5470"))) PPC_WEAK_FUNC(sub_832B5470);
PPC_FUNC_IMPL(__imp__sub_832B5470) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832B5478;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832b5514
	if (cr6.eq) goto loc_832B5514;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x832b5514
	if (cr6.eq) goto loc_832B5514;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83294018
	ctx.lr = 0x832B54B0;
	sub_83294018(ctx, base);
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r9,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// stb r9,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r9.u8);
	// beq cr6,0x832b54d4
	if (cr6.eq) goto loc_832B54D4;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// b 0x832b54e0
	goto loc_832B54E0;
loc_832B54D4:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r10,r11,-23776
	ctx.r10.s64 = ctx.r11.s64 + -23776;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_832B54E0:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832b40f0
	ctx.lr = 0x832B54F0;
	sub_832B40F0(ctx, base);
	// stb r3,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r3.u8);
	// lis r10,-32203
	ctx.r10.s64 = -2110455808;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r6,r10,-22544
	ctx.r6.s64 = ctx.r10.s64 + -22544;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832b53c0
	ctx.lr = 0x832B550C;
	sub_832B53C0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_832B5514:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B5520"))) PPC_WEAK_FUNC(sub_832B5520);
PPC_FUNC_IMPL(__imp__sub_832B5520) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832b555c
	if (!cr6.eq) goto loc_832B555C;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r5,r11,-23748
	ctx.r5.s64 = ctx.r11.s64 + -23748;
	// addi r3,r10,-23764
	ctx.r3.s64 = ctx.r10.s64 + -23764;
	// li r4,18
	ctx.r4.s64 = 18;
	// bl 0x83298458
	ctx.lr = 0x832B555C;
	sub_83298458(ctx, base);
loc_832B555C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x832b557c
	if (!cr6.eq) goto loc_832B557C;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r5,r11,-23748
	ctx.r5.s64 = ctx.r11.s64 + -23748;
	// addi r3,r10,-23764
	ctx.r3.s64 = ctx.r10.s64 + -23764;
	// li r4,19
	ctx.r4.s64 = 19;
	// bl 0x83298458
	ctx.lr = 0x832B557C;
	sub_83298458(ctx, base);
loc_832B557C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832bfc10
	ctx.lr = 0x832B5584;
	sub_832BFC10(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832bfb90
	ctx.lr = 0x832B5590;
	sub_832BFB90(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832b55a0
	if (cr6.eq) goto loc_832B55A0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x832bfa78
	ctx.lr = 0x832B55A0;
	sub_832BFA78(ctx, base);
loc_832B55A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B55B8"))) PPC_WEAK_FUNC(sub_832B55B8);
PPC_FUNC_IMPL(__imp__sub_832B55B8) {
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
	// bl 0x832bfb48
	ctx.lr = 0x832B55C8;
	sub_832BFB48(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x832B55CC;
	sub_83102DB0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B55DC"))) PPC_WEAK_FUNC(sub_832B55DC);
PPC_FUNC_IMPL(__imp__sub_832B55DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B55E0"))) PPC_WEAK_FUNC(sub_832B55E0);
PPC_FUNC_IMPL(__imp__sub_832B55E0) {
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
	// bl 0x832b9ef8
	ctx.lr = 0x832B5600;
	sub_832B9EF8(ctx, base);
	// bl 0x832aa0a0
	ctx.lr = 0x832B5604;
	sub_832AA0A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// bl 0x832ba2c8
	ctx.lr = 0x832B5610;
	sub_832BA2C8(ctx, base);
	// lhz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// lhz r4,2(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// bl 0x832a8960
	ctx.lr = 0x832B561C;
	sub_832A8960(ctx, base);
	// lhz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// bl 0x832b21b0
	ctx.lr = 0x832B5624;
	sub_832B21B0(ctx, base);
	// lhz r4,6(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 6);
	// bl 0x832a9b70
	ctx.lr = 0x832B562C;
	sub_832A9B70(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lhz r8,6(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 6);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// lhz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// addi r9,r11,-29356
	ctx.r9.s64 = ctx.r11.s64 + -29356;
	// lhz r6,2(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lhz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// addi r4,r10,-23720
	ctx.r4.s64 = ctx.r10.s64 + -23720;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x83298398
	ctx.lr = 0x832B5658;
	sub_83298398(ctx, base);
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

__attribute__((alias("__imp__sub_832B5674"))) PPC_WEAK_FUNC(sub_832B5674);
PPC_FUNC_IMPL(__imp__sub_832B5674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B5678"))) PPC_WEAK_FUNC(sub_832B5678);
PPC_FUNC_IMPL(__imp__sub_832B5678) {
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
	// bl 0x832a9bf0
	ctx.lr = 0x832B5688;
	sub_832A9BF0(ctx, base);
	// bl 0x832b2228
	ctx.lr = 0x832B568C;
	sub_832B2228(ctx, base);
	// bl 0x832a89e0
	ctx.lr = 0x832B5690;
	sub_832A89E0(ctx, base);
	// bl 0x832ba340
	ctx.lr = 0x832B5694;
	sub_832BA340(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x832B5698;
	sub_83102DB0(ctx, base);
	// bl 0x832b9f40
	ctx.lr = 0x832B569C;
	sub_832B9F40(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B56AC"))) PPC_WEAK_FUNC(sub_832B56AC);
PPC_FUNC_IMPL(__imp__sub_832B56AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B56B0"))) PPC_WEAK_FUNC(sub_832B56B0);
PPC_FUNC_IMPL(__imp__sub_832B56B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x832bfc70
	sub_832BFC70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B56B4"))) PPC_WEAK_FUNC(sub_832B56B4);
PPC_FUNC_IMPL(__imp__sub_832B56B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B56B8"))) PPC_WEAK_FUNC(sub_832B56B8);
PPC_FUNC_IMPL(__imp__sub_832B56B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x832bfd58
	sub_832BFD58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B56BC"))) PPC_WEAK_FUNC(sub_832B56BC);
PPC_FUNC_IMPL(__imp__sub_832B56BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B56C0"))) PPC_WEAK_FUNC(sub_832B56C0);
PPC_FUNC_IMPL(__imp__sub_832B56C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble cr6,0x832b571c
	if (!cr6.gt) goto loc_832B571C;
	// addi r6,r4,-1
	ctx.r6.s64 = ctx.r4.s64 + -1;
loc_832B56D4:
	// lbzu r11,1(r6)
	ea = 1 + ctx.r6.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r6.u32 = ea;
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(ctx.r11.u32, 47, xer);
	// bne cr6,0x832b56e4
	if (!cr6.eq) goto loc_832B56E4;
	// li r11,92
	ctx.r11.s64 = 92;
loc_832B56E4:
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// extsb r9,r7
	ctx.r9.s64 = ctx.r7.s8;
	// addi r4,r10,-92
	ctx.r4.s64 = ctx.r10.s64 + -92;
	// addi r9,r9,-92
	ctx.r9.s64 = ctx.r9.s64 + -92;
	// or r4,r9,r4
	ctx.r4.u64 = ctx.r9.u64 | ctx.r4.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x832b5714
	if (cr6.eq) goto loc_832B5714;
	// stbx r11,r8,r3
	PPC_STORE_U8(ctx.r8.u32 + ctx.r3.u32, ctx.r11.u8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x832b5730
	if (cr6.eq) goto loc_832B5730;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_832B5714:
	// cmpw cr6,r8,r5
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, xer);
	// blt cr6,0x832b56d4
	if (cr6.lt) goto loc_832B56D4;
loc_832B571C:
	// add r11,r3,r5
	ctx.r11.u64 = ctx.r3.u64 + ctx.r5.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stb r10,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r10.u8);
	// blr 
	return;
loc_832B5730:
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B5738"))) PPC_WEAK_FUNC(sub_832B5738);
PPC_FUNC_IMPL(__imp__sub_832B5738) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x832b56c0
	ctx.lr = 0x832B5760;
	sub_832B56C0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x832b5774
	if (!cr6.lt) goto loc_832B5774;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,36
	ctx.r3.u64 = ctx.r3.u64 | 36;
	// b 0x832b5794
	goto loc_832B5794;
loc_832B5774:
	// subf r5,r3,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r3.s64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + ctx.r31.u64;
	// bl 0x832b56c0
	ctx.lr = 0x832B5784;
	sub_832B56C0(ctx, base);
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// srawi r10,r3,31
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 31;
	// ori r9,r11,36
	ctx.r9.u64 = ctx.r11.u64 | 36;
	// and r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 & ctx.r9.u64;
loc_832B5794:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B57AC"))) PPC_WEAK_FUNC(sub_832B57AC);
PPC_FUNC_IMPL(__imp__sub_832B57AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B57B0"))) PPC_WEAK_FUNC(sub_832B57B0);
PPC_FUNC_IMPL(__imp__sub_832B57B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832B57B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r5,30
	ctx.r11.u64 = ctx.r5.u32 & 0x3;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x832b5804
	if (cr6.eq) goto loc_832B5804;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// beq cr6,0x832b57fc
	if (cr6.eq) goto loc_832B57FC;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// beq cr6,0x832b57f4
	if (cr6.eq) goto loc_832B57F4;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_832B57F4:
	// lis r4,-16384
	ctx.r4.s64 = -1073741824;
	// b 0x832b5808
	goto loc_832B5808;
loc_832B57FC:
	// lis r4,16384
	ctx.r4.s64 = 1073741824;
	// b 0x832b5808
	goto loc_832B5808;
loc_832B5804:
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
loc_832B5808:
	// li r12,292
	ctx.r12.s64 = 292;
	// li r5,4
	ctx.r5.s64 = 4;
	// and r10,r6,r12
	ctx.r10.u64 = ctx.r6.u64 & ctx.r12.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832b5820
	if (cr6.eq) goto loc_832B5820;
	// li r5,5
	ctx.r5.s64 = 5;
loc_832B5820:
	// li r12,146
	ctx.r12.s64 = 146;
	// and r10,r6,r12
	ctx.r10.u64 = ctx.r6.u64 & ctx.r12.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832b5834
	if (cr6.eq) goto loc_832B5834;
	// ori r5,r5,2
	ctx.r5.u64 = ctx.r5.u64 | 2;
loc_832B5834:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x832b5844
	if (!cr6.eq) goto loc_832B5844;
	// li r7,3
	ctx.r7.s64 = 3;
	// b 0x832b5890
	goto loc_832B5890;
loc_832B5844:
	// rlwinm r11,r30,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832b587c
	if (cr6.eq) goto loc_832B587C;
	// rlwinm r11,r30,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832b5864
	if (cr6.eq) goto loc_832B5864;
	// li r7,1
	ctx.r7.s64 = 1;
	// b 0x832b5890
	goto loc_832B5890;
loc_832B5864:
	// rlwinm r11,r30,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x20;
	// subfic r9,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r8,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// b 0x832b5890
	goto loc_832B5890;
loc_832B587C:
	// rlwinm r11,r30,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x20;
	// subfic r9,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r8,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	// addi r7,r11,3
	ctx.r7.s64 = ctx.r11.s64 + 3;
loc_832B5890:
	// subfic r11,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r10.s64;
	// li r9,0
	ctx.r9.s64 = 0;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// li r6,0
	ctx.r6.s64 = 0;
	// clrlwi r11,r10,25
	ctx.r11.u64 = ctx.r10.u32 & 0x7F;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// bl 0x832d1bd8
	ctx.lr = 0x832B58AC;
	sub_832D1BD8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x832b58d8
	if (!cr6.eq) goto loc_832B58D8;
	// bl 0x82417100
	ctx.lr = 0x832B58BC;
	sub_82417100(ctx, base);
	// neg. r3,r3
	ctx.r3.s64 = -ctx.r3.s64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x832b5900
	if (cr0.eq) goto loc_832B5900;
	// bl 0x832b88f0
	ctx.lr = 0x832B58C8;
	sub_832B88F0(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r3,r11,32775
	ctx.r3.u64 = ctx.r11.u64 | 2147942400;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_832B58D8:
	// rlwinm r11,r30,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832b58f8
	if (cr6.eq) goto loc_832B58F8;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832d4860
	ctx.lr = 0x832B58F8;
	sub_832D4860(ctx, base);
loc_832B58F8:
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
loc_832B5900:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B590C"))) PPC_WEAK_FUNC(sub_832B590C);
PPC_FUNC_IMPL(__imp__sub_832B590C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B5910"))) PPC_WEAK_FUNC(sub_832B5910);
PPC_FUNC_IMPL(__imp__sub_832B5910) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x832b593c
	if (cr6.eq) goto loc_832B593C;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x832d4820
	ctx.lr = 0x832B593C;
	sub_832D4820(ctx, base);
loc_832B593C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x832d1a68
	ctx.lr = 0x832B5944;
	sub_832D1A68(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x832b5978
	if (!cr6.eq) goto loc_832B5978;
	// bl 0x82417100
	ctx.lr = 0x832B5950;
	sub_82417100(ctx, base);
	// neg. r3,r3
	ctx.r3.s64 = -ctx.r3.s64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x832b5978
	if (cr0.eq) goto loc_832B5978;
	// bl 0x832b88f0
	ctx.lr = 0x832B595C;
	sub_832B88F0(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r3,r11,32775
	ctx.r3.u64 = ctx.r11.u64 | 2147942400;
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
loc_832B5978:
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

__attribute__((alias("__imp__sub_832B5990"))) PPC_WEAK_FUNC(sub_832B5990);
PPC_FUNC_IMPL(__imp__sub_832B5990) {
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
	// cmplwi cr6,r5,1
	cr6.compare<uint32_t>(ctx.r5.u32, 1, xer);
	// blt cr6,0x832b59e0
	if (cr6.lt) goto loc_832B59E0;
	// beq cr6,0x832b59d8
	if (cr6.eq) goto loc_832B59D8;
	// cmplwi cr6,r5,3
	cr6.compare<uint32_t>(ctx.r5.u32, 3, xer);
	// blt cr6,0x832b59d0
	if (cr6.lt) goto loc_832B59D0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
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
loc_832B59D0:
	// li r6,2
	ctx.r6.s64 = 2;
	// b 0x832b59e4
	goto loc_832B59E4;
loc_832B59D8:
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x832b59e4
	goto loc_832B59E4;
loc_832B59E0:
	// li r6,0
	ctx.r6.s64 = 0;
loc_832B59E4:
	// rldicl r11,r4,32,32
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// extsw r4,r4
	ctx.r4.s64 = ctx.r4.s32;
	// bl 0x832d4860
	ctx.lr = 0x832B59FC;
	sub_832D4860(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x832b5a5c
	if (!cr6.eq) goto loc_832B5A5C;
	// bl 0x82417100
	ctx.lr = 0x832B5A0C;
	sub_82417100(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832b5a5c
	if (cr6.eq) goto loc_832B5A5C;
	// neg. r3,r3
	ctx.r3.s64 = -ctx.r3.s64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x832b5a38
	if (!cr0.eq) goto loc_832B5A38;
	// li r11,0
	ctx.r11.s64 = 0;
	// extsw r3,r11
	ctx.r3.s64 = ctx.r11.s32;
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
loc_832B5A38:
	// bl 0x832b88f0
	ctx.lr = 0x832B5A3C;
	sub_832B88F0(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r11,r11,32775
	ctx.r11.u64 = ctx.r11.u64 | 2147942400;
	// extsw r3,r11
	ctx.r3.s64 = ctx.r11.s32;
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
loc_832B5A5C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrldi r3,r31,32
	ctx.r3.u64 = ctx.r31.u64 & 0xFFFFFFFF;
	// rldimi r3,r11,32,0
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r3.u64 & 0xFFFFFFFF);
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

__attribute__((alias("__imp__sub_832B5A7C"))) PPC_WEAK_FUNC(sub_832B5A7C);
PPC_FUNC_IMPL(__imp__sub_832B5A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B5A80"))) PPC_WEAK_FUNC(sub_832B5A80);
PPC_FUNC_IMPL(__imp__sub_832B5A80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// bl 0x832d1dd0
	ctx.lr = 0x832B5A9C;
	sub_832D1DD0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x832b5ae0
	if (!cr6.eq) goto loc_832B5AE0;
	// bl 0x82417100
	ctx.lr = 0x832B5AA8;
	sub_82417100(ctx, base);
	// neg. r3,r3
	ctx.r3.s64 = -ctx.r3.s64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x832b5ac4
	if (!cr0.eq) goto loc_832B5AC4;
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
loc_832B5AC4:
	// bl 0x832b88f0
	ctx.lr = 0x832B5AC8;
	sub_832B88F0(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r3,r11,32775
	ctx.r3.u64 = ctx.r11.u64 | 2147942400;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_832B5AE0:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B5AF4"))) PPC_WEAK_FUNC(sub_832B5AF4);
PPC_FUNC_IMPL(__imp__sub_832B5AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B5AF8"))) PPC_WEAK_FUNC(sub_832B5AF8);
PPC_FUNC_IMPL(__imp__sub_832B5AF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832B5B00;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble cr6,0x832b5b60
	if (!cr6.gt) goto loc_832B5B60;
loc_832B5B1C:
	// lwz r29,4(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// bl 0x832d1dd0
	ctx.lr = 0x832B5B3C;
	sub_832D1DD0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x832b5b6c
	if (cr6.eq) goto loc_832B5B6C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// blt cr6,0x832b5b60
	if (cr6.lt) goto loc_832B5B60;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bgt cr6,0x832b5b1c
	if (cr6.gt) goto loc_832B5B1C;
loc_832B5B60:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_832B5B6C:
	// bl 0x82417100
	ctx.lr = 0x832B5B70;
	sub_82417100(ctx, base);
	// neg. r3,r3
	ctx.r3.s64 = -ctx.r3.s64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x832b5b84
	if (!cr0.eq) goto loc_832B5B84;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_832B5B84:
	// bl 0x832b88f0
	ctx.lr = 0x832B5B88;
	sub_832B88F0(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r3,r11,32775
	ctx.r3.u64 = ctx.r11.u64 | 2147942400;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B5B98"))) PPC_WEAK_FUNC(sub_832B5B98);
PPC_FUNC_IMPL(__imp__sub_832B5B98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// bl 0x832d1ab0
	ctx.lr = 0x832B5BB4;
	sub_832D1AB0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x832b5bf8
	if (!cr6.eq) goto loc_832B5BF8;
	// bl 0x82417100
	ctx.lr = 0x832B5BC0;
	sub_82417100(ctx, base);
	// neg. r3,r3
	ctx.r3.s64 = -ctx.r3.s64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x832b5bdc
	if (!cr0.eq) goto loc_832B5BDC;
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
loc_832B5BDC:
	// bl 0x832b88f0
	ctx.lr = 0x832B5BE0;
	sub_832B88F0(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r3,r11,32775
	ctx.r3.u64 = ctx.r11.u64 | 2147942400;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_832B5BF8:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B5C0C"))) PPC_WEAK_FUNC(sub_832B5C0C);
PPC_FUNC_IMPL(__imp__sub_832B5C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B5C10"))) PPC_WEAK_FUNC(sub_832B5C10);
PPC_FUNC_IMPL(__imp__sub_832B5C10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832B5C18;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble cr6,0x832b5c78
	if (!cr6.gt) goto loc_832B5C78;
loc_832B5C34:
	// lwz r29,4(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// bl 0x832d1ab0
	ctx.lr = 0x832B5C54;
	sub_832D1AB0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x832b5c84
	if (cr6.eq) goto loc_832B5C84;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// blt cr6,0x832b5c78
	if (cr6.lt) goto loc_832B5C78;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bgt cr6,0x832b5c34
	if (cr6.gt) goto loc_832B5C34;
loc_832B5C78:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_832B5C84:
	// bl 0x82417100
	ctx.lr = 0x832B5C88;
	sub_82417100(ctx, base);
	// neg. r3,r3
	ctx.r3.s64 = -ctx.r3.s64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x832b5c9c
	if (!cr0.eq) goto loc_832B5C9C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_832B5C9C:
	// bl 0x832b88f0
	ctx.lr = 0x832B5CA0;
	sub_832B88F0(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r3,r11,32775
	ctx.r3.u64 = ctx.r11.u64 | 2147942400;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B5CB0"))) PPC_WEAK_FUNC(sub_832B5CB0);
PPC_FUNC_IMPL(__imp__sub_832B5CB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x832d4820
	ctx.lr = 0x832B5CC4;
	sub_832D4820(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x832b5cf4
	if (!cr6.eq) goto loc_832B5CF4;
	// bl 0x82417100
	ctx.lr = 0x832B5CD0;
	sub_82417100(ctx, base);
	// neg. r3,r3
	ctx.r3.s64 = -ctx.r3.s64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x832b5cf4
	if (cr0.eq) goto loc_832B5CF4;
	// bl 0x832b88f0
	ctx.lr = 0x832B5CDC;
	sub_832B88F0(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r3,r11,32775
	ctx.r3.u64 = ctx.r11.u64 | 2147942400;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_832B5CF4:
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

__attribute__((alias("__imp__sub_832B5D08"))) PPC_WEAK_FUNC(sub_832B5D08);
PPC_FUNC_IMPL(__imp__sub_832B5D08) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x832d5028
	ctx.lr = 0x832B5D28;
	sub_832D5028(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x832b5d3c
	if (!cr6.eq) goto loc_832B5D3C;
	// bl 0x82417100
	ctx.lr = 0x832B5D34;
	sub_82417100(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832b5ddc
	goto loc_832B5DDC;
loc_832B5D3C:
	// lis r10,-12471
	ctx.r10.s64 = -817299456;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r8,-2712
	ctx.r8.s64 = -2712;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// ori r6,r10,38912
	ctx.r6.u64 = ctx.r10.u64 | 38912;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r10,10000
	ctx.r10.s64 = 10000;
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rldimi r6,r8,32,0
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r6.u64 & 0xFFFFFFFF);
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rldimi r4,r5,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// rldimi r9,r3,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// rldimi r7,r11,32,0
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r7.u64 & 0xFFFFFFFF);
	// lwz r30,116(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// divdu r6,r4,r10
	ctx.r6.u64 = PPCDivide(ctx.r4.u64, ctx.r10.u64);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// divdu r4,r9,r10
	ctx.r4.u64 = PPCDivide(ctx.r9.u64, ctx.r10.u64);
	// divdu r10,r7,r10
	ctx.r10.u64 = PPCDivide(ctx.r7.u64, ctx.r10.u64);
	// stw r8,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
	// add r9,r6,r11
	ctx.r9.u64 = ctx.r6.u64 + ctx.r11.u64;
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// add r8,r4,r11
	ctx.r8.u64 = ctx.r4.u64 + ctx.r11.u64;
	// stw r5,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r9,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r9.u64);
	// rlwinm r6,r3,0,27,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x10;
	// std r8,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r8.u64);
	// std r7,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r7.u64);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x832b5dcc
	if (!cr6.eq) goto loc_832B5DCC;
	// li r11,2
	ctx.r11.s64 = 2;
loc_832B5DCC:
	// sth r11,36(r31)
	PPC_STORE_U16(ctx.r31.u32 + 36, ctx.r11.u16);
	// li r11,420
	ctx.r11.s64 = 420;
	// li r3,1
	ctx.r3.s64 = 1;
	// sth r11,38(r31)
	PPC_STORE_U16(ctx.r31.u32 + 38, ctx.r11.u16);
loc_832B5DDC:
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

__attribute__((alias("__imp__sub_832B5DF4"))) PPC_WEAK_FUNC(sub_832B5DF4);
PPC_FUNC_IMPL(__imp__sub_832B5DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B5DF8"))) PPC_WEAK_FUNC(sub_832B5DF8);
PPC_FUNC_IMPL(__imp__sub_832B5DF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x832b5d08
	sub_832B5D08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B5E00"))) PPC_WEAK_FUNC(sub_832B5E00);
PPC_FUNC_IMPL(__imp__sub_832B5E00) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r8,512
	ctx.r8.s64 = 33554432;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x832d1bd8
	ctx.lr = 0x832B5E38;
	sub_832D1BD8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x832b5e50
	if (!cr6.eq) goto loc_832B5E50;
	// bl 0x82417100
	ctx.lr = 0x832B5E48;
	sub_82417100(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832b5e78
	goto loc_832B5E78;
loc_832B5E50:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b5d08
	ctx.lr = 0x832B5E5C;
	sub_832B5D08(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832d1a68
	ctx.lr = 0x832B5E68;
	sub_832D1A68(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x832b5e74
	if (!cr6.eq) goto loc_832B5E74;
	// bl 0x82417100
	ctx.lr = 0x832B5E74;
	sub_82417100(ctx, base);
loc_832B5E74:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_832B5E78:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B5E90"))) PPC_WEAK_FUNC(sub_832B5E90);
PPC_FUNC_IMPL(__imp__sub_832B5E90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x832d3920
	ctx.lr = 0x832B5EA4;
	sub_832D3920(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x832b5ed4
	if (!cr6.eq) goto loc_832B5ED4;
	// bl 0x82417100
	ctx.lr = 0x832B5EB0;
	sub_82417100(ctx, base);
	// neg. r3,r3
	ctx.r3.s64 = -ctx.r3.s64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x832b5ed4
	if (cr0.eq) goto loc_832B5ED4;
	// bl 0x832b88f0
	ctx.lr = 0x832B5EBC;
	sub_832B88F0(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r3,r11,32775
	ctx.r3.u64 = ctx.r11.u64 | 2147942400;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_832B5ED4:
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

__attribute__((alias("__imp__sub_832B5EE8"))) PPC_WEAK_FUNC(sub_832B5EE8);
PPC_FUNC_IMPL(__imp__sub_832B5EE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x832d39d8
	ctx.lr = 0x832B5F00;
	sub_832D39D8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x832b5f30
	if (!cr6.eq) goto loc_832B5F30;
	// bl 0x82417100
	ctx.lr = 0x832B5F0C;
	sub_82417100(ctx, base);
	// neg. r3,r3
	ctx.r3.s64 = -ctx.r3.s64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x832b5f30
	if (cr0.eq) goto loc_832B5F30;
	// bl 0x832b88f0
	ctx.lr = 0x832B5F18;
	sub_832B88F0(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r3,r11,32775
	ctx.r3.u64 = ctx.r11.u64 | 2147942400;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_832B5F30:
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

__attribute__((alias("__imp__sub_832B5F44"))) PPC_WEAK_FUNC(sub_832B5F44);
PPC_FUNC_IMPL(__imp__sub_832B5F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B5F48"))) PPC_WEAK_FUNC(sub_832B5F48);
PPC_FUNC_IMPL(__imp__sub_832B5F48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x832d4ea8
	ctx.lr = 0x832B5F60;
	sub_832D4EA8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x832b5f90
	if (!cr6.eq) goto loc_832B5F90;
	// bl 0x82417100
	ctx.lr = 0x832B5F6C;
	sub_82417100(ctx, base);
	// neg. r3,r3
	ctx.r3.s64 = -ctx.r3.s64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x832b5f90
	if (cr0.eq) goto loc_832B5F90;
	// bl 0x832b88f0
	ctx.lr = 0x832B5F78;
	sub_832B88F0(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r3,r11,32775
	ctx.r3.u64 = ctx.r11.u64 | 2147942400;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_832B5F90:
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

__attribute__((alias("__imp__sub_832B5FA4"))) PPC_WEAK_FUNC(sub_832B5FA4);
PPC_FUNC_IMPL(__imp__sub_832B5FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B5FA8"))) PPC_WEAK_FUNC(sub_832B5FA8);
PPC_FUNC_IMPL(__imp__sub_832B5FA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x832d5148
	ctx.lr = 0x832B5FBC;
	sub_832D5148(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x832b5fec
	if (!cr6.eq) goto loc_832B5FEC;
	// bl 0x82417100
	ctx.lr = 0x832B5FC8;
	sub_82417100(ctx, base);
	// neg. r3,r3
	ctx.r3.s64 = -ctx.r3.s64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x832b5fec
	if (cr0.eq) goto loc_832B5FEC;
	// bl 0x832b88f0
	ctx.lr = 0x832B5FD4;
	sub_832B88F0(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r3,r11,32775
	ctx.r3.u64 = ctx.r11.u64 | 2147942400;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_832B5FEC:
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

__attribute__((alias("__imp__sub_832B6000"))) PPC_WEAK_FUNC(sub_832B6000);
PPC_FUNC_IMPL(__imp__sub_832B6000) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x832B6008;
	__savegprlr_28(ctx, base);
	// stwu r1,-720(r1)
	ea = -720 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x83296ba8
	ctx.lr = 0x832B601C;
	sub_83296BA8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83293ec8
	ctx.lr = 0x832B6030;
	sub_83293EC8(ctx, base);
	// add r11,r31,r29
	ctx.r11.u64 = ctx.r31.u64 + ctx.r29.u64;
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi cr6,r10,92
	cr6.compare<uint32_t>(ctx.r10.u32, 92, xer);
	// beq cr6,0x832b6050
	if (cr6.eq) goto loc_832B6050;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r10,92
	ctx.r10.s64 = 92;
	// stbx r10,r31,r11
	PPC_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_832B6050:
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// li r8,42
	ctx.r8.s64 = 42;
	// li r29,0
	ctx.r29.s64 = 0;
	// stbx r8,r31,r9
	PPC_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r8.u8);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stbx r29,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r29.u8);
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x832d3c50
	ctx.lr = 0x832B607C;
	sub_832D3C50(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82417100
	ctx.lr = 0x832B6084;
	sub_82417100(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// cmpwi cr6,r28,-1
	cr6.compare<int32_t>(ctx.r28.s32, -1, xer);
	// stb r7,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r7.u8);
	// beq cr6,0x832b60b4
	if (cr6.eq) goto loc_832B60B4;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,396
	ctx.r4.s64 = ctx.r1.s64 + 396;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x83296be0
	ctx.lr = 0x832B60A8;
	sub_83296BE0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832B60B4:
	// cmplwi cr6,r3,2
	cr6.compare<uint32_t>(ctx.r3.u32, 2, xer);
	// beq cr6,0x832b60c8
	if (cr6.eq) goto loc_832B60C8;
	// cmplwi cr6,r3,18
	cr6.compare<uint32_t>(ctx.r3.u32, 18, xer);
	// beq cr6,0x832b6124
	if (cr6.eq) goto loc_832B6124;
	// b 0x832b60e8
	goto loc_832B60E8;
loc_832B60C8:
	// stb r29,-2(r31)
	PPC_STORE_U8(ctx.r31.u32 + -2, ctx.r29.u8);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832d3c50
	ctx.lr = 0x832B60D8;
	sub_832D3C50(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82417100
	ctx.lr = 0x832B60E0;
	sub_82417100(ctx, base);
	// cmpwi cr6,r31,-1
	cr6.compare<int32_t>(ctx.r31.s32, -1, xer);
	// bne cr6,0x832b6110
	if (!cr6.eq) goto loc_832B6110;
loc_832B60E8:
	// neg. r3,r3
	ctx.r3.s64 = -ctx.r3.s64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x832b60fc
	if (!cr0.eq) goto loc_832B60FC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832B60FC:
	// bl 0x832b88f0
	ctx.lr = 0x832B6100;
	sub_832B88F0(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r3,r11,32775
	ctx.r3.u64 = ctx.r11.u64 | 2147942400;
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832B6110:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832d1a68
	ctx.lr = 0x832B6118;
	sub_832D1A68(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x832b6124
	if (!cr6.eq) goto loc_832B6124;
	// bl 0x82417100
	ctx.lr = 0x832B6124;
	sub_82417100(ctx, base);
loc_832B6124:
	// stb r29,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r29.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B6134"))) PPC_WEAK_FUNC(sub_832B6134);
PPC_FUNC_IMPL(__imp__sub_832B6134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B6138"))) PPC_WEAK_FUNC(sub_832B6138);
PPC_FUNC_IMPL(__imp__sub_832B6138) {
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
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// addi r31,r3,8
	ctx.r31.s64 = ctx.r3.s64 + 8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832b6170
	if (cr6.eq) goto loc_832B6170;
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832b6190
	if (cr6.eq) goto loc_832B6190;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// b 0x832b61b8
	goto loc_832B61B8;
loc_832B6170:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// bl 0x832d3bf8
	ctx.lr = 0x832B6184;
	sub_832D3BF8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x832b61a8
	if (!cr6.eq) goto loc_832B61A8;
	// bl 0x82417100
	ctx.lr = 0x832B6190;
	sub_82417100(ctx, base);
loc_832B6190:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_832B61A8:
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83296be0
	ctx.lr = 0x832B61B8;
	sub_83296BE0(ctx, base);
loc_832B61B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B61D0"))) PPC_WEAK_FUNC(sub_832B61D0);
PPC_FUNC_IMPL(__imp__sub_832B61D0) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x832b6214
	if (!cr6.eq) goto loc_832B6214;
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lis r10,-32761
	ctx.r10.s64 = -2147024896;
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// ori r7,r10,9
	ctx.r7.u64 = ctx.r10.u64 | 9;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r6,r7
	ctx.r3.u64 = ctx.r6.u64 & ctx.r7.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_832B6214:
	// bl 0x832d1a68
	ctx.lr = 0x832B6218;
	sub_832D1A68(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x832b6248
	if (!cr6.eq) goto loc_832B6248;
	// bl 0x82417100
	ctx.lr = 0x832B6224;
	sub_82417100(ctx, base);
	// neg. r3,r3
	ctx.r3.s64 = -ctx.r3.s64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x832b6248
	if (cr0.eq) goto loc_832B6248;
	// bl 0x832b88f0
	ctx.lr = 0x832B6230;
	sub_832B88F0(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r3,r11,32775
	ctx.r3.u64 = ctx.r11.u64 | 2147942400;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_832B6248:
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

__attribute__((alias("__imp__sub_832B625C"))) PPC_WEAK_FUNC(sub_832B625C);
PPC_FUNC_IMPL(__imp__sub_832B625C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B6260"))) PPC_WEAK_FUNC(sub_832B6260);
PPC_FUNC_IMPL(__imp__sub_832B6260) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x832b6274
	if (cr6.eq) goto loc_832B6274;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// blr 
	return;
loc_832B6274:
	// addi r11,r5,7
	ctx.r11.s64 = ctx.r5.s64 + 7;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r9,r11,0,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B6290"))) PPC_WEAK_FUNC(sub_832B6290);
PPC_FUNC_IMPL(__imp__sub_832B6290) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r3,r11,19928
	ctx.r3.s64 = ctx.r11.s64 + 19928;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B629C"))) PPC_WEAK_FUNC(sub_832B629C);
PPC_FUNC_IMPL(__imp__sub_832B629C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B62A0"))) PPC_WEAK_FUNC(sub_832B62A0);
PPC_FUNC_IMPL(__imp__sub_832B62A0) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r5,420
	ctx.r5.s64 = 420;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83299248
	ctx.lr = 0x832B62C8;
	sub_83299248(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r3,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r3.u32);
	// bgt cr6,0x832b62ec
	if (cr6.gt) goto loc_832B62EC;
	// bge cr6,0x832b62e0
	if (!cr6.lt) goto loc_832B62E0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x832b6418
	goto loc_832B6418;
loc_832B62E0:
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,12
	ctx.r31.u64 = ctx.r31.u64 | 12;
	// b 0x832b6418
	goto loc_832B6418;
loc_832B62EC:
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x832993e8
	ctx.lr = 0x832B62F8;
	sub_832993E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,20
	cr6.compare<int32_t>(ctx.r3.s32, 20, xer);
	// bge cr6,0x832b6330
	if (!cr6.lt) goto loc_832B6330;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r4,r11,-23576
	ctx.r4.s64 = ctx.r11.s64 + -23576;
	// addi r3,r10,-29556
	ctx.r3.s64 = ctx.r10.s64 + -29556;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x83298338
	ctx.lr = 0x832B631C;
	sub_83298338(ctx, base);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x832b6418
	if (cr6.lt) goto loc_832B6418;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,5
	ctx.r31.u64 = ctx.r31.u64 | 5;
	// b 0x832b6418
	goto loc_832B6418;
loc_832B6330:
	// lis r11,27821
	ctx.r11.s64 = 1823277056;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// ori r6,r11,36745
	ctx.r6.u64 = ctx.r11.u64 | 36745;
	// cmplw cr6,r5,r6
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, xer);
	// beq cr6,0x832b6364
	if (cr6.eq) goto loc_832B6364;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r4,r11,-23600
	ctx.r4.s64 = ctx.r11.s64 + -23600;
	// addi r3,r10,-29556
	ctx.r3.s64 = ctx.r10.s64 + -29556;
	// bl 0x83298338
	ctx.lr = 0x832B6358;
	sub_83298338(ctx, base);
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,5
	ctx.r31.u64 = ctx.r31.u64 | 5;
	// b 0x832b6418
	goto loc_832B6418;
loc_832B6364:
	// lhz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// lhz r6,6(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 6);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// xor r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r6.u64;
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r9,65535
	cr6.compare<uint32_t>(ctx.r9.u32, 65535, xer);
	// beq cr6,0x832b63a0
	if (cr6.eq) goto loc_832B63A0;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r4,r11,-23620
	ctx.r4.s64 = ctx.r11.s64 + -23620;
	// addi r3,r10,-29556
	ctx.r3.s64 = ctx.r10.s64 + -29556;
	// bl 0x83298338
	ctx.lr = 0x832B6394;
	sub_83298338(ctx, base);
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,5
	ctx.r31.u64 = ctx.r31.u64 | 5;
	// b 0x832b6418
	goto loc_832B6418;
loc_832B63A0:
	// rlwinm r11,r11,31,17,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFF;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832b63f8
	if (cr6.eq) goto loc_832B63F8;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// bl 0x832993e8
	ctx.lr = 0x832B63C0;
	sub_832993E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,16
	cr6.compare<int32_t>(ctx.r3.s32, 16, xer);
	// bge cr6,0x832b63f8
	if (!cr6.lt) goto loc_832B63F8;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r4,r11,-23648
	ctx.r4.s64 = ctx.r11.s64 + -23648;
	// addi r3,r10,-29556
	ctx.r3.s64 = ctx.r10.s64 + -29556;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x83298338
	ctx.lr = 0x832B63E4;
	sub_83298338(ctx, base);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x832b6418
	if (cr6.lt) goto loc_832B6418;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,5
	ctx.r31.u64 = ctx.r31.u64 | 5;
	// b 0x832b6418
	goto loc_832B6418;
loc_832B63F8:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// bl 0x832995d8
	ctx.lr = 0x832B6408;
	sub_832995D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bge cr6,0x832b641c
	if (!cr6.lt) goto loc_832B641C;
loc_832B6418:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_832B641C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B6434"))) PPC_WEAK_FUNC(sub_832B6434);
PPC_FUNC_IMPL(__imp__sub_832B6434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B6438"))) PPC_WEAK_FUNC(sub_832B6438);
PPC_FUNC_IMPL(__imp__sub_832B6438) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x832B6440;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// subf r11,r6,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r6.s64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble cr6,0x832b648c
	if (!cr6.gt) goto loc_832B648C;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
loc_832B6464:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, xer);
	// bgt cr6,0x832b648c
	if (cr6.gt) goto loc_832B648C;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// subf. r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// beq 0x832b648c
	if (cr0.eq) goto loc_832B648C;
	// cmpw cr6,r31,r5
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r5.s32, xer);
	// blt cr6,0x832b6464
	if (cr6.lt) goto loc_832B6464;
loc_832B648C:
	// subf r9,r31,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r31.s64;
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,36(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// subfic r8,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r9.s64;
	// add r4,r10,r6
	ctx.r4.u64 = ctx.r10.u64 + ctx.r6.u64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// li r30,0
	ctx.r30.s64 = 0;
	// and r28,r6,r11
	ctx.r28.u64 = ctx.r6.u64 & ctx.r11.u64;
	// bl 0x832995d8
	ctx.lr = 0x832B64B4;
	sub_832995D8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832b6508
	if (cr6.lt) goto loc_832B6508;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// ble cr6,0x832b64e0
	if (!cr6.gt) goto loc_832B64E0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,36(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x83299480
	ctx.lr = 0x832B64D4;
	sub_83299480(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832b6508
	if (cr6.lt) goto loc_832B6508;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_832B64E0:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// ble cr6,0x832b6504
	if (!cr6.gt) goto loc_832B6504;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r3,36(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// bl 0x832993e8
	ctx.lr = 0x832B64F8;
	sub_832993E8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832b6508
	if (cr6.lt) goto loc_832B6508;
	// add r30,r30,r3
	ctx.r30.u64 = ctx.r30.u64 + ctx.r3.u64;
loc_832B6504:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_832B6508:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B6510"))) PPC_WEAK_FUNC(sub_832B6510);
PPC_FUNC_IMPL(__imp__sub_832B6510) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832b6534
	if (cr6.eq) goto loc_832B6534;
	// bl 0x832aa8b8
	ctx.lr = 0x832B6534;
	sub_832AA8B8(ctx, base);
loc_832B6534:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a1d18
	ctx.lr = 0x832B653C;
	sub_832A1D18(ctx, base);
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

__attribute__((alias("__imp__sub_832B6554"))) PPC_WEAK_FUNC(sub_832B6554);
PPC_FUNC_IMPL(__imp__sub_832B6554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B6558"))) PPC_WEAK_FUNC(sub_832B6558);
PPC_FUNC_IMPL(__imp__sub_832B6558) {
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
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpw cr6,r5,r11
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, xer);
	// ble cr6,0x832b657c
	if (!cr6.gt) goto loc_832B657C;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
loc_832B657C:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x832993e8
	ctx.lr = 0x832B6584;
	sub_832993E8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832b6598
	if (cr6.lt) goto loc_832B6598;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
loc_832B6598:
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

__attribute__((alias("__imp__sub_832B65AC"))) PPC_WEAK_FUNC(sub_832B65AC);
PPC_FUNC_IMPL(__imp__sub_832B65AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B65B0"))) PPC_WEAK_FUNC(sub_832B65B0);
PPC_FUNC_IMPL(__imp__sub_832B65B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832B65B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpw cr6,r5,r11
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, xer);
	// ble cr6,0x832b65d4
	if (!cr6.gt) goto loc_832B65D4;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
loc_832B65D4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x832993e8
	ctx.lr = 0x832B65E0;
	sub_832993E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832b660c
	if (cr6.lt) goto loc_832B660C;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// ble cr6,0x832b660c
	if (!cr6.gt) goto loc_832B660C;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x832aa6e0
	ctx.lr = 0x832B660C;
	sub_832AA6E0(ctx, base);
loc_832B660C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B6618"))) PPC_WEAK_FUNC(sub_832B6618);
PPC_FUNC_IMPL(__imp__sub_832B6618) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832B6620;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble cr6,0x832b66a0
	if (!cr6.gt) goto loc_832B66A0;
	// addi r28,r3,24
	ctx.r28.s64 = ctx.r3.s64 + 24;
loc_832B663C:
	// cmpwi cr6,r29,4096
	cr6.compare<int32_t>(ctx.r29.s32, 4096, xer);
	// li r31,4096
	ctx.r31.s64 = 4096;
	// bgt cr6,0x832b664c
	if (cr6.gt) goto loc_832B664C;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_832B664C:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// ble cr6,0x832b6660
	if (!cr6.gt) goto loc_832B6660;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
loc_832B6660:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x832993e8
	ctx.lr = 0x832B666C;
	sub_832993E8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832b66b8
	if (cr6.lt) goto loc_832B66B8;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// ble cr6,0x832b66ac
	if (!cr6.gt) goto loc_832B66AC;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x832aa6e0
	ctx.lr = 0x832B6694;
	sub_832AA6E0(ctx, base);
	// subf. r29,r31,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r31.s64;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// add r27,r31,r27
	ctx.r27.u64 = ctx.r31.u64 + ctx.r27.u64;
	// bgt 0x832b663c
	if (cr0.gt) goto loc_832B663C;
loc_832B66A0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_832B66AC:
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x832b66b8
	if (!cr6.eq) goto loc_832B66B8;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
loc_832B66B8:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B66C4"))) PPC_WEAK_FUNC(sub_832B66C4);
PPC_FUNC_IMPL(__imp__sub_832B66C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B66C8"))) PPC_WEAK_FUNC(sub_832B66C8);
PPC_FUNC_IMPL(__imp__sub_832B66C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832B66D0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r8,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x10;
	// addi r27,r11,20
	ctx.r27.s64 = ctx.r11.s64 + 20;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x832995d8
	ctx.lr = 0x832B6704;
	sub_832995D8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832b6804
	if (cr6.lt) goto loc_832B6804;
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// blt cr6,0x832b676c
	if (cr6.lt) goto loc_832B676C;
	// beq cr6,0x832b675c
	if (cr6.eq) goto loc_832B675C;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// blt cr6,0x832b6738
	if (cr6.lt) goto loc_832B6738;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r5,r11,-23532
	ctx.r5.s64 = ctx.r11.s64 + -23532;
	// addi r3,r10,-23556
	ctx.r3.s64 = ctx.r10.s64 + -23556;
	// li r4,455
	ctx.r4.s64 = 455;
	// bl 0x83298458
	ctx.lr = 0x832B6738;
	sub_83298458(ctx, base);
loc_832B6738:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x832aa638
	ctx.lr = 0x832B6740;
	sub_832AA638(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832b67fc
	if (cr6.eq) goto loc_832B67FC;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r4,4120
	ctx.r4.s64 = 4120;
	// addi r30,r11,26136
	ctx.r30.s64 = ctx.r11.s64 + 26136;
	// b 0x832b678c
	goto loc_832B678C;
loc_832B675C:
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r30,r11,25944
	ctx.r30.s64 = ctx.r11.s64 + 25944;
	// b 0x832b6788
	goto loc_832B6788;
loc_832B676C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x832aa638
	ctx.lr = 0x832B6774;
	sub_832AA638(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832b67fc
	if (cr6.eq) goto loc_832B67FC;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r30,r11,26032
	ctx.r30.s64 = ctx.r11.s64 + 26032;
loc_832B6788:
	// li r4,24
	ctx.r4.s64 = 24;
loc_832B678C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x832a1cb0
	ctx.lr = 0x832B6798;
	sub_832A1CB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832b67fc
	if (cr6.eq) goto loc_832B67FC;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r28.u32);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lwz r10,36(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// addi r4,r11,25872
	ctx.r4.s64 = ctx.r11.s64 + 25872;
	// stw r27,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r27.u32);
	// li r3,21
	ctx.r3.s64 = 21;
	// lwz r9,16(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// subf r8,r27,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r27.s64;
	// stw r8,20(r5)
	PPC_STORE_U32(ctx.r5.u32 + 20, ctx.r8.u32);
	// stw r9,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r9.u32);
	// bl 0x832a1350
	ctx.lr = 0x832B67DC;
	sub_832A1350(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt cr6,0x832b6804
	if (cr6.gt) goto loc_832B6804;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832b67f4
	if (cr6.eq) goto loc_832B67F4;
	// bl 0x832aa8b8
	ctx.lr = 0x832B67F4;
	sub_832AA8B8(ctx, base);
loc_832B67F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a1d18
	ctx.lr = 0x832B67FC;
	sub_832A1D18(ctx, base);
loc_832B67FC:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,12
	ctx.r3.u64 = ctx.r3.u64 | 12;
loc_832B6804:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B680C"))) PPC_WEAK_FUNC(sub_832B680C);
PPC_FUNC_IMPL(__imp__sub_832B680C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B6810"))) PPC_WEAK_FUNC(sub_832B6810);
PPC_FUNC_IMPL(__imp__sub_832B6810) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x832a1510
	ctx.lr = 0x832B6834;
	sub_832A1510(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832B684C;
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

__attribute__((alias("__imp__sub_832B6864"))) PPC_WEAK_FUNC(sub_832B6864);
PPC_FUNC_IMPL(__imp__sub_832B6864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B6868"))) PPC_WEAK_FUNC(sub_832B6868);
PPC_FUNC_IMPL(__imp__sub_832B6868) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832B6870;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x832a1510
	ctx.lr = 0x832B6880;
	sub_832A1510(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832b68e0
	if (cr6.eq) goto loc_832B68E0;
	// lwz r31,20(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// ble cr6,0x832b68d0
	if (!cr6.gt) goto loc_832B68D0;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r28,r11,32704
	ctx.r28.s64 = ctx.r11.s64 + 32704;
loc_832B68A8:
	// cmpwi cr6,r31,256
	cr6.compare<int32_t>(ctx.r31.s32, 256, xer);
	// li r30,256
	ctx.r30.s64 = 256;
	// bgt cr6,0x832b68b8
	if (cr6.gt) goto loc_832B68B8;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_832B68B8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x832aa6e0
	ctx.lr = 0x832B68C8;
	sub_832AA6E0(ctx, base);
	// subf. r31,r30,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r30.s64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bgt 0x832b68a8
	if (cr0.gt) goto loc_832B68A8;
loc_832B68D0:
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x832aa810
	ctx.lr = 0x832B68E0;
	sub_832AA810(ctx, base);
loc_832B68E0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B68E8"))) PPC_WEAK_FUNC(sub_832B68E8);
PPC_FUNC_IMPL(__imp__sub_832B68E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832B68F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// rlwinm r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// rlwinm r4,r10,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x832b66c8
	ctx.lr = 0x832B6918;
	sub_832B66C8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x832b692c
	if (!cr6.lt) goto loc_832B692C;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_832B692C:
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,26640
	ctx.r5.s64 = ctx.r11.s64 + 26640;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83296938
	ctx.lr = 0x832B6944;
	sub_83296938(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832b6868
	ctx.lr = 0x832B6954;
	sub_832B6868(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832a13d8
	ctx.lr = 0x832B695C;
	sub_832A13D8(ctx, base);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bge cr6,0x832b6988
	if (!cr6.lt) goto loc_832B6988;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r4,r11,-23348
	ctx.r4.s64 = ctx.r11.s64 + -23348;
	// addi r3,r10,-29556
	ctx.r3.s64 = ctx.r10.s64 + -29556;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x83298338
	ctx.lr = 0x832B697C;
	sub_83298338(ctx, base);
loc_832B697C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_832B6988:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r30,r11,-23356
	ctx.r30.s64 = ctx.r11.s64 + -23356;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x83295250
	ctx.lr = 0x832B69A0;
	sub_83295250(ctx, base);
	// stw r3,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832b69d4
	if (!cr6.eq) goto loc_832B69D4;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-23380
	ctx.r4.s64 = ctx.r11.s64 + -23380;
	// addi r3,r10,-29556
	ctx.r3.s64 = ctx.r10.s64 + -29556;
	// bl 0x83298338
	ctx.lr = 0x832B69C4;
	sub_83298338(ctx, base);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_832B69D4:
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r8,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x10;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// add r6,r11,r28
	ctx.r6.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmplw cr6,r5,r6
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, xer);
	// bge cr6,0x832b6a20
	if (!cr6.lt) goto loc_832B6A20;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r4,r11,-23420
	ctx.r4.s64 = ctx.r11.s64 + -23420;
	// addi r3,r10,-29556
	ctx.r3.s64 = ctx.r10.s64 + -29556;
	// bl 0x83298338
	ctx.lr = 0x832B6A10;
	sub_83298338(ctx, base);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_832B6A20:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x832b697c
	if (cr6.eq) goto loc_832B697C;
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83293fb0
	ctx.lr = 0x832B6A3C;
	sub_83293FB0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x832b697c
	if (cr6.eq) goto loc_832B697C;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r30,r11,-29556
	ctx.r30.s64 = ctx.r11.s64 + -29556;
	// addi r4,r10,-23444
	ctx.r4.s64 = ctx.r10.s64 + -23444;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x83298338
	ctx.lr = 0x832B6A60;
	sub_83298338(ctx, base);
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r9,-23468
	ctx.r4.s64 = ctx.r9.s64 + -23468;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x83298338
	ctx.lr = 0x832B6A74;
	sub_83298338(ctx, base);
	// lis r8,-32220
	ctx.r8.s64 = -2111569920;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r8,-23508
	ctx.r4.s64 = ctx.r8.s64 + -23508;
	// bl 0x83298338
	ctx.lr = 0x832B6A84;
	sub_83298338(ctx, base);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B6A94"))) PPC_WEAK_FUNC(sub_832B6A94);
PPC_FUNC_IMPL(__imp__sub_832B6A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B6A98"))) PPC_WEAK_FUNC(sub_832B6A98);
PPC_FUNC_IMPL(__imp__sub_832B6A98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832B6AA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x832b6ae4
	if (cr6.eq) goto loc_832B6AE4;
	// addi r30,r3,20
	ctx.r30.s64 = ctx.r3.s64 + 20;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83293fb0
	ctx.lr = 0x832B6AD4;
	sub_83293FB0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x832b6ae4
	if (cr6.eq) goto loc_832B6AE4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// b 0x832b6b70
	goto loc_832B6B70;
loc_832B6AE4:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b66c8
	ctx.lr = 0x832B6AF0;
	sub_832B66C8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832b6ba4
	if (cr6.lt) goto loc_832B6BA4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x832a1510
	ctx.lr = 0x832B6B04;
	sub_832A1510(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832B6B20;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b6868
	ctx.lr = 0x832B6B30;
	sub_832B6868(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a13d8
	ctx.lr = 0x832B6B38;
	sub_832A13D8(ctx, base);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge cr6,0x832b6b4c
	if (!cr6.lt) goto loc_832B6B4C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_832B6B4C:
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83293fb0
	ctx.lr = 0x832B6B5C;
	sub_83293FB0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x832b6b6c
	if (!cr6.eq) goto loc_832B6B6C;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_832B6B6C:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
loc_832B6B70:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r31,r11,-29556
	ctx.r31.s64 = ctx.r11.s64 + -29556;
	// addi r4,r10,-23444
	ctx.r4.s64 = ctx.r10.s64 + -23444;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83298338
	ctx.lr = 0x832B6B88;
	sub_83298338(ctx, base);
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r9,-23468
	ctx.r4.s64 = ctx.r9.s64 + -23468;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83298338
	ctx.lr = 0x832B6B9C;
	sub_83298338(ctx, base);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
loc_832B6BA4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B6BAC"))) PPC_WEAK_FUNC(sub_832B6BAC);
PPC_FUNC_IMPL(__imp__sub_832B6BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B6BB0"))) PPC_WEAK_FUNC(sub_832B6BB0);
PPC_FUNC_IMPL(__imp__sub_832B6BB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832B6BB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x83295c40
	ctx.lr = 0x832B6BD0;
	sub_83295C40(ctx, base);
	// clrlwi r11,r3,26
	ctx.r11.u64 = ctx.r3.u32 & 0x3F;
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(ctx.r11.u32, 20, xer);
	// bgt cr6,0x832b6d34
	if (cr6.gt) goto loc_832B6D34;
	// beq cr6,0x832b6c80
	if (cr6.eq) goto loc_832B6C80;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x832b6c54
	if (cr6.eq) goto loc_832B6C54;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bne cr6,0x832b6d3c
	if (!cr6.eq) goto loc_832B6D3C;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r31,8
	ctx.r5.s64 = ctx.r31.s64 + 8;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83294f00
	ctx.lr = 0x832B6C04;
	sub_83294F00(ctx, base);
	// cmplwi cr6,r3,4
	cr6.compare<uint32_t>(ctx.r3.u32, 4, xer);
	// beq cr6,0x832b6c30
	if (cr6.eq) goto loc_832B6C30;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r4,r11,-23096
	ctx.r4.s64 = ctx.r11.s64 + -23096;
	// addi r3,r10,-29556
	ctx.r3.s64 = ctx.r10.s64 + -29556;
	// bl 0x83298338
	ctx.lr = 0x832B6C20;
	sub_83298338(ctx, base);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_832B6C30:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stb r11,13(r31)
	PPC_STORE_U8(ctx.r31.u32 + 13, ctx.r11.u8);
loc_832B6C44:
	// stb r30,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r30.u8);
loc_832B6C48:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_832B6C54:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stb r10,13(r31)
	PPC_STORE_U8(ctx.r31.u32 + 13, ctx.r10.u8);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stb r30,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r30.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_832B6C80:
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83294f00
	ctx.lr = 0x832B6C94;
	sub_83294F00(ctx, base);
	// cmplwi cr6,r3,8
	cr6.compare<uint32_t>(ctx.r3.u32, 8, xer);
	// beq cr6,0x832b6cc0
	if (cr6.eq) goto loc_832B6CC0;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r4,r11,-23144
	ctx.r4.s64 = ctx.r11.s64 + -23144;
	// addi r3,r10,-29556
	ctx.r3.s64 = ctx.r10.s64 + -29556;
	// bl 0x83298338
	ctx.lr = 0x832B6CB0;
	sub_83298338(ctx, base);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_832B6CC0:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_832B6CC8:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// stb r30,13(r31)
	PPC_STORE_U8(ctx.r31.u32 + 13, ctx.r30.u8);
	// beq cr6,0x832b6c44
	if (cr6.eq) goto loc_832B6C44;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r11,10248
	ctx.r5.s64 = ctx.r11.s64 + 10248;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83295250
	ctx.lr = 0x832B6CEC;
	sub_83295250(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832b6c44
	if (cr6.eq) goto loc_832B6C44;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x83294f00
	ctx.lr = 0x832B6D08;
	sub_83294F00(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// beq cr6,0x832b6db0
	if (cr6.eq) goto loc_832B6DB0;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r4,r11,-23184
	ctx.r4.s64 = ctx.r11.s64 + -23184;
	// addi r3,r10,-29556
	ctx.r3.s64 = ctx.r10.s64 + -29556;
	// bl 0x83298338
	ctx.lr = 0x832B6D24;
	sub_83298338(ctx, base);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_832B6D34:
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(ctx.r11.u32, 30, xer);
	// beq cr6,0x832b6d70
	if (cr6.eq) goto loc_832B6D70;
loc_832B6D3C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83295c40
	ctx.lr = 0x832B6D44;
	sub_83295C40(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r9,r11,-29556
	ctx.r9.s64 = ctx.r11.s64 + -29556;
	// clrlwi r5,r3,26
	ctx.r5.u64 = ctx.r3.u32 & 0x3F;
	// addi r4,r10,-23224
	ctx.r4.s64 = ctx.r10.s64 + -23224;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x83298338
	ctx.lr = 0x832B6D60;
	sub_83298338(ctx, base);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_832B6D70:
	// li r6,12
	ctx.r6.s64 = 12;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83294f00
	ctx.lr = 0x832B6D84;
	sub_83294F00(ctx, base);
	// cmplwi cr6,r3,12
	cr6.compare<uint32_t>(ctx.r3.u32, 12, xer);
	// beq cr6,0x832b6cc8
	if (cr6.eq) goto loc_832B6CC8;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r4,r11,-23280
	ctx.r4.s64 = ctx.r11.s64 + -23280;
	// addi r3,r10,-29556
	ctx.r3.s64 = ctx.r10.s64 + -29556;
	// bl 0x83298338
	ctx.lr = 0x832B6DA0;
	sub_83298338(ctx, base);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_832B6DB0:
	// lbz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r5,8
	cr6.compare<uint32_t>(ctx.r5.u32, 8, xer);
	// blt cr6,0x832b6c48
	if (cr6.lt) goto loc_832B6C48;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r4,r11,-23320
	ctx.r4.s64 = ctx.r11.s64 + -23320;
	// addi r3,r10,-29556
	ctx.r3.s64 = ctx.r10.s64 + -29556;
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x83298338
	ctx.lr = 0x832B6DD4;
	sub_83298338(ctx, base);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B6DE4"))) PPC_WEAK_FUNC(sub_832B6DE4);
PPC_FUNC_IMPL(__imp__sub_832B6DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B6DE8"))) PPC_WEAK_FUNC(sub_832B6DE8);
PPC_FUNC_IMPL(__imp__sub_832B6DE8) {
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
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x83295250
	ctx.lr = 0x832B6E18;
	sub_83295250(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832b6e34
	if (cr6.eq) goto loc_832B6E34;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b6bb0
	ctx.lr = 0x832B6E30;
	sub_832B6BB0(ctx, base);
	// b 0x832b6e3c
	goto loc_832B6E3C;
loc_832B6E34:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
loc_832B6E3C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B6E54"))) PPC_WEAK_FUNC(sub_832B6E54);
PPC_FUNC_IMPL(__imp__sub_832B6E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B6E58"))) PPC_WEAK_FUNC(sub_832B6E58);
PPC_FUNC_IMPL(__imp__sub_832B6E58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832B6E60;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r3,36
	ctx.r31.s64 = ctx.r3.s64 + 36;
	// li r30,9
	ctx.r30.s64 = 9;
loc_832B6E70:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832b6e80
	if (!cr6.gt) goto loc_832B6E80;
	// bl 0x83299380
	ctx.lr = 0x832B6E80;
	sub_83299380(ctx, base);
loc_832B6E80:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,40
	ctx.r31.s64 = ctx.r31.s64 + 40;
	// bne 0x832b6e70
	if (!cr0.eq) goto loc_832B6E70;
	// lwz r3,360(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 360);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832b6e9c
	if (cr6.eq) goto loc_832B6E9C;
	// bl 0x832a1d18
	ctx.lr = 0x832B6E9C;
	sub_832A1D18(ctx, base);
loc_832B6E9C:
	// lwz r3,372(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 372);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832b6eac
	if (!cr6.gt) goto loc_832B6EAC;
	// bl 0x832a59f0
	ctx.lr = 0x832B6EAC;
	sub_832A59F0(ctx, base);
loc_832B6EAC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B6EB4"))) PPC_WEAK_FUNC(sub_832B6EB4);
PPC_FUNC_IMPL(__imp__sub_832B6EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B6EB8"))) PPC_WEAK_FUNC(sub_832B6EB8);
PPC_FUNC_IMPL(__imp__sub_832B6EB8) {
	PPC_FUNC_PROLOGUE();
	// b 0x832b6e58
	sub_832B6E58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B6EBC"))) PPC_WEAK_FUNC(sub_832B6EBC);
PPC_FUNC_IMPL(__imp__sub_832B6EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B6EC0"))) PPC_WEAK_FUNC(sub_832B6EC0);
PPC_FUNC_IMPL(__imp__sub_832B6EC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lbz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// addi r11,r5,1
	ctx.r11.s64 = ctx.r5.s64 + 1;
	// extsb r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x832b6f78
	if (cr6.eq) goto loc_832B6F78;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// li r3,95
	ctx.r3.s64 = 95;
	// addi r4,r11,20072
	ctx.r4.s64 = ctx.r11.s64 + 20072;
loc_832B6EE4:
	// cmpwi cr6,r10,47
	cr6.compare<int32_t>(ctx.r10.s32, 47, xer);
	// bne cr6,0x832b6f90
	if (!cr6.eq) goto loc_832B6F90;
	// addic. r7,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// ble 0x832b6f9c
	if (!cr0.gt) goto loc_832B6F9C;
	// stb r9,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r9.u8);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// lbz r9,1(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 1);
	// extsb r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmpwi cr6,r10,48
	cr6.compare<int32_t>(ctx.r10.s32, 48, xer);
	// blt cr6,0x832b6f20
	if (cr6.lt) goto loc_832B6F20;
	// cmpwi cr6,r10,57
	cr6.compare<int32_t>(ctx.r10.s32, 57, xer);
	// bgt cr6,0x832b6f20
	if (cr6.gt) goto loc_832B6F20;
	// ori r11,r10,128
	ctx.r11.u64 = ctx.r10.u64 | 128;
	// b 0x832b6f28
	goto loc_832B6F28;
loc_832B6F20:
	// lbzx r11,r10,r4
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
loc_832B6F28:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
loc_832B6F2C:
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bgt cr6,0x832b6f50
	if (cr6.gt) goto loc_832B6F50;
	// beq cr6,0x832b6f70
	if (cr6.eq) goto loc_832B6F70;
	// addic. r7,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// ble 0x832b6f9c
	if (!cr0.gt) goto loc_832B6F9C;
	// stb r3,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r3.u8);
	// clrlwi r11,r8,25
	ctx.r11.u64 = ctx.r8.u32 & 0x7F;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
loc_832B6F50:
	// addic. r7,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// ble 0x832b6f9c
	if (!cr0.gt) goto loc_832B6F9C;
	// stb r11,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r11.u8);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// lbzu r9,1(r5)
	ea = 1 + ctx.r5.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r5.u32 = ea;
	// extsb r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	// lbzx r11,r10,r4
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// b 0x832b6f2c
	goto loc_832B6F2C;
loc_832B6F70:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x832b6ee4
	if (!cr6.eq) goto loc_832B6EE4;
loc_832B6F78:
	// addic. r11,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r11.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt 0x832b6f9c
	if (cr0.lt) goto loc_832B6F9C;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r11.u8);
	// blr 
	return;
loc_832B6F90:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// blr 
	return;
loc_832B6F9C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,36
	ctx.r3.u64 = ctx.r3.u64 | 36;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B6FA8"))) PPC_WEAK_FUNC(sub_832B6FA8);
PPC_FUNC_IMPL(__imp__sub_832B6FA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x832B6FB0;
	__savegprlr_28(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,376(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 376);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// addi r29,r3,376
	ctx.r29.s64 = ctx.r3.s64 + 376;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832b6fe0
	if (!cr6.eq) goto loc_832B6FE0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,6
	ctx.r3.u64 = ctx.r3.u64 | 6;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832B6FE0:
	// li r7,256
	ctx.r7.s64 = 256;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b6ec0
	ctx.lr = 0x832B6FF0;
	sub_832B6EC0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832b7040
	if (cr6.lt) goto loc_832B7040;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r31,360
	ctx.r5.s64 = ctx.r31.s64 + 360;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832b6de8
	ctx.lr = 0x832B700C;
	sub_832B6DE8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832b7040
	if (cr6.lt) goto loc_832B7040;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83296be0
	ctx.lr = 0x832B7024;
	sub_83296BE0(ctx, base);
	// subf r11,r30,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r30.s64;
	// xoris r10,r30,32768
	ctx.r10.u64 = ctx.r30.u64 ^ 2147483648;
	// lis r9,-32761
	ctx.r9.s64 = -2147024896;
	// addc r8,r11,r10
	temp.u8 = ctx.r11.u32 + ctx.r10.u32 < ctx.r11.u32;
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	xer.ca = temp.u8;
	// ori r6,r9,36
	ctx.r6.u64 = ctx.r9.u64 | 36;
	// subfe r5,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r5,r6
	ctx.r3.u64 = ctx.r5.u64 & ctx.r6.u64;
loc_832B7040:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B7048"))) PPC_WEAK_FUNC(sub_832B7048);
PPC_FUNC_IMPL(__imp__sub_832B7048) {
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
	// lwz r31,-12(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,368(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// lwz r3,364(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// bl 0x83295250
	ctx.lr = 0x832B7074;
	sub_83295250(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832b70ac
	if (cr6.eq) goto loc_832B70AC;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x832b6bb0
	ctx.lr = 0x832B708C;
	sub_832B6BB0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832b7108
	if (cr6.lt) goto loc_832B7108;
	// lbz r11,17(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 17);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832b70b8
	if (cr6.eq) goto loc_832B70B8;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// b 0x832b7108
	goto loc_832B7108;
loc_832B70AC:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// b 0x832b7108
	goto loc_832B7108;
loc_832B70B8:
	// lbz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// li r9,40
	ctx.r9.s64 = 40;
	// rotlwi r10,r11,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// subf r7,r31,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r31.s64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// divw r6,r7,r9
	ctx.r6.s32 = PPCDivide(ctx.r7.s32, ctx.r9.s32);
	// cmpwi cr6,r6,9
	cr6.compare<int32_t>(ctx.r6.s32, 9, xer);
	// blt cr6,0x832b70f0
	if (cr6.lt) goto loc_832B70F0;
loc_832B70E4:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// b 0x832b7108
	goto loc_832B7108;
loc_832B70F0:
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x832b70e4
	if (!cr6.gt) goto loc_832B70E4;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
loc_832B7108:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B7120"))) PPC_WEAK_FUNC(sub_832B7120);
PPC_FUNC_IMPL(__imp__sub_832B7120) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x832B7128;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,-12(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r3,372(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 372);
	// bl 0x832a5a38
	ctx.lr = 0x832B7144;
	sub_832A5A38(ctx, base);
	// cmplwi cr6,r29,1
	cr6.compare<uint32_t>(ctx.r29.u32, 1, xer);
	// blt cr6,0x832b7190
	if (cr6.lt) goto loc_832B7190;
	// beq cr6,0x832b7180
	if (cr6.eq) goto loc_832B7180;
	// cmplwi cr6,r29,3
	cr6.compare<uint32_t>(ctx.r29.u32, 3, xer);
	// blt cr6,0x832b7170
	if (cr6.lt) goto loc_832B7170;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r5,r11,-23056
	ctx.r5.s64 = ctx.r11.s64 + -23056;
	// addi r3,r10,-23556
	ctx.r3.s64 = ctx.r10.s64 + -23556;
	// li r4,1128
	ctx.r4.s64 = 1128;
	// bl 0x83298458
	ctx.lr = 0x832B7170;
	sub_83298458(ctx, base);
loc_832B7170:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x832b7194
	goto loc_832B7194;
loc_832B7180:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// extsw r10,r31
	ctx.r10.s64 = ctx.r31.s32;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x832b7194
	goto loc_832B7194;
loc_832B7190:
	// extsw r31,r31
	ctx.r31.s64 = ctx.r31.s32;
loc_832B7194:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// blt cr6,0x832b71b4
	if (cr6.lt) goto loc_832B71B4;
	// stw r31,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r31.u32);
	// lwz r3,372(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 372);
	// bl 0x832a5ae8
	ctx.lr = 0x832B71A8;
	sub_832A5AE8(ctx, base);
	// extsw r3,r31
	ctx.r3.s64 = ctx.r31.s32;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832B71B4:
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// lwz r3,372(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 372);
	// ori r31,r31,22
	ctx.r31.u64 = ctx.r31.u64 | 22;
	// bl 0x832a5ae8
	ctx.lr = 0x832B71C4;
	sub_832A5AE8(ctx, base);
	// extsw r3,r31
	ctx.r3.s64 = ctx.r31.s32;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B71D0"))) PPC_WEAK_FUNC(sub_832B71D0);
PPC_FUNC_IMPL(__imp__sub_832B71D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x832B71D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,-12(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r3,372(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 372);
	// bl 0x832a5a38
	ctx.lr = 0x832B71F4;
	sub_832A5A38(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r29,20(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// add r6,r11,r29
	ctx.r6.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x832b6438
	ctx.lr = 0x832B7218;
	sub_832B6438(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832b722c
	if (!cr6.gt) goto loc_832B722C;
	// add r11,r29,r3
	ctx.r11.u64 = ctx.r29.u64 + ctx.r3.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_832B722C:
	// lwz r3,372(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 372);
	// bl 0x832a5ae8
	ctx.lr = 0x832B7234;
	sub_832A5AE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B7240"))) PPC_WEAK_FUNC(sub_832B7240);
PPC_FUNC_IMPL(__imp__sub_832B7240) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x832B7248;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lwz r24,-12(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// lwz r3,372(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 372);
	// bl 0x832a5a38
	ctx.lr = 0x832B7264;
	sub_832A5A38(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r25,20(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r31,0
	ctx.r31.s64 = 0;
	// add r8,r11,r25
	ctx.r8.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_832B728C:
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, xer);
	// bgt cr6,0x832b72b4
	if (cr6.gt) goto loc_832B72B4;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// subf. r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// beq 0x832b72b4
	if (cr0.eq) goto loc_832B72B4;
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(ctx.r31.s32, 1, xer);
	// blt cr6,0x832b728c
	if (cr6.lt) goto loc_832B728C;
loc_832B72B4:
	// addi r10,r31,-1
	ctx.r10.s64 = ctx.r31.s64 + -1;
	// lwz r9,16(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,36(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// subfic r10,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// li r27,0
	ctx.r27.s64 = 0;
	// and r26,r6,r11
	ctx.r26.u64 = ctx.r6.u64 & ctx.r11.u64;
	// bl 0x832995d8
	ctx.lr = 0x832B72DC;
	sub_832995D8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x832b72ec
	if (!cr6.lt) goto loc_832B72EC;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x832b7348
	goto loc_832B7348;
loc_832B72EC:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// ble cr6,0x832b7318
	if (!cr6.gt) goto loc_832B7318;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,36(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83299480
	ctx.lr = 0x832B7304;
	sub_83299480(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x832b7314
	if (!cr6.lt) goto loc_832B7314;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x832b7348
	goto loc_832B7348;
loc_832B7314:
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_832B7318:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// ble cr6,0x832b7344
	if (!cr6.gt) goto loc_832B7344;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r3,36(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// bl 0x832993e8
	ctx.lr = 0x832B7330;
	sub_832993E8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x832b7340
	if (!cr6.lt) goto loc_832B7340;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x832b7348
	goto loc_832B7348;
loc_832B7340:
	// add r27,r27,r3
	ctx.r27.u64 = ctx.r27.u64 + ctx.r3.u64;
loc_832B7344:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_832B7348:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// ble cr6,0x832b7358
	if (!cr6.gt) goto loc_832B7358;
	// add r11,r25,r31
	ctx.r11.u64 = ctx.r25.u64 + ctx.r31.u64;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
loc_832B7358:
	// lwz r3,372(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 372);
	// bl 0x832a5ae8
	ctx.lr = 0x832B7360;
	sub_832A5AE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B736C"))) PPC_WEAK_FUNC(sub_832B736C);
PPC_FUNC_IMPL(__imp__sub_832B736C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B7370"))) PPC_WEAK_FUNC(sub_832B7370);
PPC_FUNC_IMPL(__imp__sub_832B7370) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// stw r9,32(r4)
	PPC_STORE_U32(ctx.r4.u32 + 32, ctx.r9.u32);
	// stw r10,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// std r7,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r7.u64);
	// std r7,8(r4)
	PPC_STORE_U64(ctx.r4.u32 + 8, ctx.r7.u64);
	// std r7,16(r4)
	PPC_STORE_U64(ctx.r4.u32 + 16, ctx.r7.u64);
	// lbz r6,17(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 17);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x832b73bc
	if (cr6.eq) goto loc_832B73BC;
	// li r11,365
	ctx.r11.s64 = 365;
	// sth r10,36(r4)
	PPC_STORE_U16(ctx.r4.u32 + 36, ctx.r10.u16);
	// stw r9,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, ctx.r9.u32);
	// sth r11,38(r4)
	PPC_STORE_U16(ctx.r4.u32 + 38, ctx.r11.u16);
	// blr 
	return;
loc_832B73BC:
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,292
	ctx.r9.s64 = 292;
	// sth r10,36(r4)
	PPC_STORE_U16(ctx.r4.u32 + 36, ctx.r10.u16);
	// sth r9,38(r4)
	PPC_STORE_U16(ctx.r4.u32 + 38, ctx.r9.u16);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B73D8"))) PPC_WEAK_FUNC(sub_832B73D8);
PPC_FUNC_IMPL(__imp__sub_832B73D8) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r4,368(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 368);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,364(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 364);
	// bl 0x83295250
	ctx.lr = 0x832B7404;
	sub_83295250(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832b7424
	if (cr6.eq) goto loc_832B7424;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832b6bb0
	ctx.lr = 0x832B741C;
	sub_832B6BB0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x832b742c
	if (!cr6.lt) goto loc_832B742C;
loc_832B7424:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832b7488
	goto loc_832B7488;
loc_832B742C:
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r6,93(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 93);
	// li r11,1
	ctx.r11.s64 = 1;
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// std r7,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
	// std r7,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r7.u64);
	// std r7,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r7.u64);
	// beq cr6,0x832b746c
	if (cr6.eq) goto loc_832B746C;
	// li r9,365
	ctx.r9.s64 = 365;
	// sth r11,36(r31)
	PPC_STORE_U16(ctx.r31.u32 + 36, ctx.r11.u16);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// b 0x832b7480
	goto loc_832B7480;
loc_832B746C:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,292
	ctx.r9.s64 = 292;
	// sth r10,36(r31)
	PPC_STORE_U16(ctx.r31.u32 + 36, ctx.r10.u16);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_832B7480:
	// sth r9,38(r31)
	PPC_STORE_U16(ctx.r31.u32 + 38, ctx.r9.u16);
	// li r3,1
	ctx.r3.s64 = 1;
loc_832B7488:
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

__attribute__((alias("__imp__sub_832B74A0"))) PPC_WEAK_FUNC(sub_832B74A0);
PPC_FUNC_IMPL(__imp__sub_832B74A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832B74A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,-12(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + -12);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r4,368(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// lwz r3,364(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// bl 0x83295250
	ctx.lr = 0x832B74C4;
	sub_83295250(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832b74e0
	if (!cr6.eq) goto loc_832B74E0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_832B74E0:
	// lwz r11,368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// beq cr6,0x832b7520
	if (cr6.eq) goto loc_832B7520;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832b6bb0
	ctx.lr = 0x832B74FC;
	sub_832B6BB0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832b7534
	if (cr6.lt) goto loc_832B7534;
	// lbz r10,93(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 93);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x832b7520
	if (!cr6.eq) goto loc_832B7520;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,20
	ctx.r3.u64 = ctx.r3.u64 | 20;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_832B7520:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83295570
	ctx.lr = 0x832B752C;
	sub_83295570(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_832B7534:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B753C"))) PPC_WEAK_FUNC(sub_832B753C);
PPC_FUNC_IMPL(__imp__sub_832B753C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B7540"))) PPC_WEAK_FUNC(sub_832B7540);
PPC_FUNC_IMPL(__imp__sub_832B7540) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x832B7548;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x832b75f4
	if (cr6.eq) goto loc_832B75F4;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r29,r11,20328
	ctx.r29.s64 = ctx.r11.s64 + 20328;
loc_832B7568:
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83295b88
	ctx.lr = 0x832B7578;
	sub_83295B88(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832b75f4
	if (cr6.lt) goto loc_832B75F4;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83295570
	ctx.lr = 0x832B758C;
	sub_83295570(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// addi r9,r31,-1
	ctx.r9.s64 = ctx.r31.s64 + -1;
loc_832B7598:
	// lbz r11,1(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,95
	cr6.compare<int32_t>(ctx.r10.s32, 95, xer);
	// bne cr6,0x832b75c4
	if (!cr6.eq) goto loc_832B75C4;
	// lbzu r11,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lbzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x832b75e4
	if (cr6.eq) goto loc_832B75E4;
loc_832B75C4:
	// stb r11,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r11.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x832b7598
	if (!cr6.eq) goto loc_832B7598;
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832B75E4:
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, xer);
	// bne cr6,0x832b75f4
	if (!cr6.eq) goto loc_832B75F4;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x832b7568
	if (!cr6.eq) goto loc_832B7568;
loc_832B75F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B7600"))) PPC_WEAK_FUNC(sub_832B7600);
PPC_FUNC_IMPL(__imp__sub_832B7600) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832B7608;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// bl 0x83295c40
	ctx.lr = 0x832B7628;
	sub_83295C40(ctx, base);
	// clrlwi r11,r3,26
	ctx.r11.u64 = ctx.r3.u32 & 0x3F;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// beq cr6,0x832b7668
	if (cr6.eq) goto loc_832B7668;
	// bl 0x83295c40
	ctx.lr = 0x832B763C;
	sub_83295C40(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r9,r11,-29556
	ctx.r9.s64 = ctx.r11.s64 + -29556;
	// clrlwi r5,r3,26
	ctx.r5.u64 = ctx.r3.u32 & 0x3F;
	// addi r4,r10,-22840
	ctx.r4.s64 = ctx.r10.s64 + -22840;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x83298338
	ctx.lr = 0x832B7658;
	sub_83298338(ctx, base);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_832B7668:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x83294f00
	ctx.lr = 0x832B7678;
	sub_83294F00(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt cr6,0x832b76a4
	if (cr6.gt) goto loc_832B76A4;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r4,r11,-22872
	ctx.r4.s64 = ctx.r11.s64 + -22872;
	// addi r3,r10,-29556
	ctx.r3.s64 = ctx.r10.s64 + -29556;
	// bl 0x83298338
	ctx.lr = 0x832B7694;
	sub_83298338(ctx, base);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_832B76A4:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x832b76f0
	if (!cr6.eq) goto loc_832B76F0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_832B76B0:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b62a0
	ctx.lr = 0x832B76BC;
	sub_832B62A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x832b7798
	if (!cr6.lt) goto loc_832B7798;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r4,r11,-22912
	ctx.r4.s64 = ctx.r11.s64 + -22912;
	// addi r3,r10,-29556
	ctx.r3.s64 = ctx.r10.s64 + -29556;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x83298338
	ctx.lr = 0x832B76E4;
	sub_83298338(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_832B76F0:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r11,26596
	ctx.r5.s64 = ctx.r11.s64 + 26596;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83295250
	ctx.lr = 0x832B7704;
	sub_83295250(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832b76b0
	if (cr6.eq) goto loc_832B76B0;
	// bl 0x83295c40
	ctx.lr = 0x832B7714;
	sub_83295C40(ctx, base);
	// clrlwi r11,r3,26
	ctx.r11.u64 = ctx.r3.u32 & 0x3F;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// beq cr6,0x832b7758
	if (cr6.eq) goto loc_832B7758;
	// bl 0x83295c40
	ctx.lr = 0x832B7728;
	sub_83295C40(ctx, base);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r9,r11,-29556
	ctx.r9.s64 = ctx.r11.s64 + -29556;
	// clrlwi r6,r3,26
	ctx.r6.u64 = ctx.r3.u32 & 0x3F;
	// addi r4,r10,-22956
	ctx.r4.s64 = ctx.r10.s64 + -22956;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x83298338
	ctx.lr = 0x832B7748;
	sub_83298338(ctx, base);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_832B7758:
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x83294f00
	ctx.lr = 0x832B7768;
	sub_83294F00(ctx, base);
	// cmplwi cr6,r3,16
	cr6.compare<uint32_t>(ctx.r3.u32, 16, xer);
	// beq cr6,0x832b76b0
	if (cr6.eq) goto loc_832B76B0;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r4,r11,-22992
	ctx.r4.s64 = ctx.r11.s64 + -22992;
	// addi r3,r10,-29556
	ctx.r3.s64 = ctx.r10.s64 + -29556;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x83298338
	ctx.lr = 0x832B7788;
	sub_83298338(ctx, base);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_832B7798:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x832b77e0
	if (cr6.eq) goto loc_832B77E0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832b6a98
	ctx.lr = 0x832B77AC;
	sub_832B6A98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x832b77e0
	if (!cr6.lt) goto loc_832B77E0;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r4,r11,-23040
	ctx.r4.s64 = ctx.r11.s64 + -23040;
	// addi r3,r10,-29556
	ctx.r3.s64 = ctx.r10.s64 + -29556;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x83298338
	ctx.lr = 0x832B77D4;
	sub_83298338(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_832B77E0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B77EC"))) PPC_WEAK_FUNC(sub_832B77EC);
PPC_FUNC_IMPL(__imp__sub_832B77EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B77F0"))) PPC_WEAK_FUNC(sub_832B77F0);
PPC_FUNC_IMPL(__imp__sub_832B77F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x832B77F8;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// li r5,632
	ctx.r5.s64 = 632;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// bl 0x83294018
	ctx.lr = 0x832B7810;
	sub_83294018(ctx, base);
	// bl 0x832a5950
	ctx.lr = 0x832B7814;
	sub_832A5950(ctx, base);
	// stw r3,372(r24)
	PPC_STORE_U32(ctx.r24.u32 + 372, ctx.r3.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt cr6,0x832b783c
	if (cr6.gt) goto loc_832B783C;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// ori r31,r31,12
	ctx.r31.u64 = ctx.r31.u64 | 12;
	// bl 0x832b6e58
	ctx.lr = 0x832B7830;
	sub_832B6E58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_832B783C:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x832b62a0
	ctx.lr = 0x832B7848;
	sub_832B62A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x832b7884
	if (!cr6.lt) goto loc_832B7884;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r4,r11,-22724
	ctx.r4.s64 = ctx.r11.s64 + -22724;
	// addi r3,r10,-29556
	ctx.r3.s64 = ctx.r10.s64 + -29556;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// bl 0x83298338
	ctx.lr = 0x832B7870;
	sub_83298338(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x832b6e58
	ctx.lr = 0x832B7878;
	sub_832B6E58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_832B7884:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,12(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r30,r24,360
	ctx.r30.s64 = ctx.r24.s64 + 360;
	// bl 0x832a1cb0
	ctx.lr = 0x832B7898;
	sub_832A1CB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,360(r24)
	PPC_STORE_U32(ctx.r24.u32 + 360, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832b78b4
	if (!cr6.eq) goto loc_832B78B4;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,12
	ctx.r31.u64 = ctx.r31.u64 | 12;
	// b 0x832b78f4
	goto loc_832B78F4;
loc_832B78B4:
	// lhz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r24.u32 + 4);
	// lwz r5,12(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	// rlwinm r10,r11,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r8,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	// addi r3,r11,17
	ctx.r3.s64 = ctx.r11.s64 + 17;
	// bl 0x832948b0
	ctx.lr = 0x832B78D4;
	sub_832948B0(ctx, base);
	// lis r7,-32761
	ctx.r7.s64 = -2147024896;
	// addic r6,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r6.s64 = ctx.r3.s64 + -1;
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// ori r4,r7,12
	ctx.r4.u64 = ctx.r7.u64 | 12;
	// subfe r3,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r31,r3,r4
	ctx.r31.u64 = ctx.r3.u64 & ctx.r4.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bge cr6,0x832b7920
	if (!cr6.lt) goto loc_832B7920;
loc_832B78F4:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r4,r11,-22752
	ctx.r4.s64 = ctx.r11.s64 + -22752;
	// addi r3,r10,-29556
	ctx.r3.s64 = ctx.r10.s64 + -29556;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x83298338
	ctx.lr = 0x832B790C;
	sub_83298338(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x832b6e58
	ctx.lr = 0x832B7914;
	sub_832B6E58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_832B7920:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832b68e8
	ctx.lr = 0x832B792C;
	sub_832B68E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x832b7964
	if (!cr6.lt) goto loc_832B7964;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r4,r11,-22776
	ctx.r4.s64 = ctx.r11.s64 + -22776;
	// addi r3,r10,-29556
	ctx.r3.s64 = ctx.r10.s64 + -29556;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x83298338
	ctx.lr = 0x832B7950;
	sub_83298338(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x832b6e58
	ctx.lr = 0x832B7958;
	sub_832B6E58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_832B7964:
	// addi r29,r24,376
	ctx.r29.s64 = ctx.r24.s64 + 376;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,255
	ctx.r5.s64 = 255;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x832b7bd0
	ctx.lr = 0x832B797C;
	sub_832B7BD0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x832b79a0
	if (!cr6.lt) goto loc_832B79A0;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// ori r31,r31,36
	ctx.r31.u64 = ctx.r31.u64 | 36;
	// bl 0x832b6e58
	ctx.lr = 0x832B7994;
	sub_832B6E58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_832B79A0:
	// li r22,0
	ctx.r22.s64 = 0;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x832b79bc
	if (cr6.eq) goto loc_832B79BC;
	// add r27,r29,r3
	ctx.r27.u64 = ctx.r29.u64 + ctx.r3.u64;
	// lbz r11,-1(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + -1);
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(ctx.r11.u32, 47, xer);
	// beq cr6,0x832b79d0
	if (cr6.eq) goto loc_832B79D0;
loc_832B79BC:
	// li r11,47
	ctx.r11.s64 = 47;
	// stbx r11,r29,r3
	PPC_STORE_U8(ctx.r29.u32 + ctx.r3.u32, ctx.r11.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// add r27,r29,r3
	ctx.r27.u64 = ctx.r29.u64 + ctx.r3.u64;
	// stbx r22,r29,r3
	PPC_STORE_U8(ctx.r29.u32 + ctx.r3.u32, ctx.r22.u8);
loc_832B79D0:
	// lwz r4,368(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 368);
	// subfic r25,r3,256
	xer.ca = ctx.r3.u32 <= 256;
	ctx.r25.s64 = 256 - ctx.r3.s64;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x832b7a58
	if (cr6.eq) goto loc_832B7A58;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,-22784
	ctx.r5.s64 = ctx.r11.s64 + -22784;
	// bl 0x83295250
	ctx.lr = 0x832B79F4;
	sub_83295250(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832b7a58
	if (cr6.eq) goto loc_832B7A58;
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
	// li r23,40
	ctx.r23.s64 = 40;
loc_832B7A08:
	// addi r26,r26,40
	ctx.r26.s64 = ctx.r26.s64 + 40;
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// divw r11,r26,r23
	ctx.r11.s32 = PPCDivide(ctx.r26.s32, ctx.r23.s32);
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// bge cr6,0x832b7a80
	if (!cr6.lt) goto loc_832B7A80;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832b7600
	ctx.lr = 0x832B7A34;
	sub_832B7600(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832b7a9c
	if (cr6.lt) goto loc_832B7A9C;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83295570
	ctx.lr = 0x832B7A4C;
	sub_83295570(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832b7a08
	if (!cr6.eq) goto loc_832B7A08;
loc_832B7A58:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832b7ac0
	ctx.lr = 0x832B7A64;
	sub_832B7AC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832b7a74
	if (!cr6.eq) goto loc_832B7A74;
	// stb r22,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r22.u8);
loc_832B7A74:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
loc_832B7A80:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r4,r11,-22800
	ctx.r4.s64 = ctx.r11.s64 + -22800;
	// addi r3,r10,-29556
	ctx.r3.s64 = ctx.r10.s64 + -29556;
	// bl 0x83298338
	ctx.lr = 0x832B7A94;
	sub_83298338(ctx, base);
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,5
	ctx.r31.u64 = ctx.r31.u64 | 5;
loc_832B7A9C:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x832b6e58
	ctx.lr = 0x832B7AA4;
	sub_832B6E58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B7AB0"))) PPC_WEAK_FUNC(sub_832B7AB0);
PPC_FUNC_IMPL(__imp__sub_832B7AB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r3,r11,20584
	ctx.r3.s64 = ctx.r11.s64 + 20584;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B7ABC"))) PPC_WEAK_FUNC(sub_832B7ABC);
PPC_FUNC_IMPL(__imp__sub_832B7ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B7AC0"))) PPC_WEAK_FUNC(sub_832B7AC0);
PPC_FUNC_IMPL(__imp__sub_832B7AC0) {
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
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832b7b00
	if (!cr6.eq) goto loc_832B7B00;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,-22672
	ctx.r4.s64 = ctx.r11.s64 + -22672;
	// addi r3,r10,27400
	ctx.r3.s64 = ctx.r10.s64 + 27400;
	// bl 0x83298338
	ctx.lr = 0x832B7AF8;
	sub_83298338(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832b7bb8
	goto loc_832B7BB8;
loc_832B7B00:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x832b7b24
	if (!cr6.eq) goto loc_832B7B24;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,-22700
	ctx.r4.s64 = ctx.r11.s64 + -22700;
	// addi r3,r10,27400
	ctx.r3.s64 = ctx.r10.s64 + 27400;
	// bl 0x83298338
	ctx.lr = 0x832B7B1C;
	sub_83298338(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832b7bb8
	goto loc_832B7BB8;
loc_832B7B24:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x832aa0c0
	ctx.lr = 0x832B7B38;
	sub_832AA0C0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832b7bb0
	if (cr6.lt) goto loc_832B7BB0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x832a8d78
	ctx.lr = 0x832B7B54;
	sub_832A8D78(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x832b7b9c
	if (cr6.lt) goto loc_832B7B9C;
	// addi r4,r3,540
	ctx.r4.s64 = ctx.r3.s64 + 540;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x832aa3e8
	ctx.lr = 0x832B7B70;
	sub_832AA3E8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r7,256
	ctx.r7.s64 = 256;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832B7B94;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
loc_832B7B9C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x832b7bb0
	if (cr6.eq) goto loc_832B7BB0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a8e48
	ctx.lr = 0x832B7BAC;
	sub_832A8E48(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_832B7BB0:
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
loc_832B7BB8:
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B7BD0"))) PPC_WEAK_FUNC(sub_832B7BD0);
PPC_FUNC_IMPL(__imp__sub_832B7BD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x832B7BD8;
	__savegprlr_28(ctx, base);
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832b7c14
	if (!cr6.eq) goto loc_832B7C14;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,-22592
	ctx.r4.s64 = ctx.r11.s64 + -22592;
	// addi r3,r10,27400
	ctx.r3.s64 = ctx.r10.s64 + 27400;
	// bl 0x83298338
	ctx.lr = 0x832B7C04;
	sub_83298338(ctx, base);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832B7C14:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x832b7c40
	if (!cr6.eq) goto loc_832B7C40;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,-22620
	ctx.r4.s64 = ctx.r11.s64 + -22620;
	// addi r3,r10,27400
	ctx.r3.s64 = ctx.r10.s64 + 27400;
	// bl 0x83298338
	ctx.lr = 0x832B7C30;
	sub_83298338(ctx, base);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832B7C40:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832aa0c0
	ctx.lr = 0x832B7C50;
	sub_832AA0C0(ctx, base);
	// subf r11,r3,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r3.s64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// or r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 | ctx.r3.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bge cr6,0x832b7c80
	if (!cr6.lt) goto loc_832B7C80;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832b7cd8
	if (cr6.lt) goto loc_832B7CD8;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,36
	ctx.r3.u64 = ctx.r3.u64 | 36;
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832B7C80:
	// cmplwi cr6,r29,1
	cr6.compare<uint32_t>(ctx.r29.u32, 1, xer);
	// blt cr6,0x832b7cc8
	if (cr6.lt) goto loc_832B7CC8;
	// beq cr6,0x832b7ce4
	if (cr6.eq) goto loc_832B7CE4;
	// cmplwi cr6,r29,3
	cr6.compare<uint32_t>(ctx.r29.u32, 3, xer);
	// blt cr6,0x832b7cbc
	if (cr6.lt) goto loc_832B7CBC;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,-22644
	ctx.r4.s64 = ctx.r11.s64 + -22644;
	// addi r3,r10,27400
	ctx.r3.s64 = ctx.r10.s64 + 27400;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x83298338
	ctx.lr = 0x832B7CAC;
	sub_83298338(ctx, base);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832B7CBC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832aa358
	ctx.lr = 0x832B7CC4;
	sub_832AA358(ctx, base);
	// lhz r31,340(r1)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r1.u32 + 340);
loc_832B7CC8:
	// addi r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 1;
	// addi r4,r1,344
	ctx.r4.s64 = ctx.r1.s64 + 344;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83293ec8
	ctx.lr = 0x832B7CD8;
	sub_83293EC8(ctx, base);
loc_832B7CD8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832B7CE4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832aa358
	ctx.lr = 0x832B7CEC;
	sub_832AA358(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x83296be0
	ctx.lr = 0x832B7CFC;
	sub_83296BE0(ctx, base);
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B7D04"))) PPC_WEAK_FUNC(sub_832B7D04);
PPC_FUNC_IMPL(__imp__sub_832B7D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B7D08"))) PPC_WEAK_FUNC(sub_832B7D08);
PPC_FUNC_IMPL(__imp__sub_832B7D08) {
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
	// stwu r1,-896(r1)
	ea = -896 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832b7d48
	if (!cr6.eq) goto loc_832B7D48;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,-22548
	ctx.r4.s64 = ctx.r11.s64 + -22548;
	// addi r3,r10,27400
	ctx.r3.s64 = ctx.r10.s64 + 27400;
	// bl 0x83298338
	ctx.lr = 0x832B7D40;
	sub_83298338(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832b7e40
	goto loc_832B7E40;
loc_832B7D48:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x832b7d6c
	if (!cr6.eq) goto loc_832B7D6C;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,-22564
	ctx.r4.s64 = ctx.r11.s64 + -22564;
	// addi r3,r10,27400
	ctx.r3.s64 = ctx.r10.s64 + 27400;
	// bl 0x83298338
	ctx.lr = 0x832B7D64;
	sub_83298338(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832b7e40
	goto loc_832B7E40;
loc_832B7D6C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x832aa0c0
	ctx.lr = 0x832B7D80;
	sub_832AA0C0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832b7e34
	if (cr6.lt) goto loc_832B7E34;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x832a8d78
	ctx.lr = 0x832B7D9C;
	sub_832A8D78(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x832b7e20
	if (cr6.lt) goto loc_832B7E20;
	// addi r4,r3,540
	ctx.r4.s64 = ctx.r3.s64 + 540;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x832aa3e8
	ctx.lr = 0x832B7DB8;
	sub_832AA3E8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r7,256
	ctx.r7.s64 = 256;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832B7DDC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832b7e20
	if (cr6.lt) goto loc_832B7E20;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83294018
	ctx.lr = 0x832B7DFC;
	sub_83294018(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832B7E18;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_832B7E20:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x832b7e34
	if (cr6.eq) goto loc_832B7E34;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a8e48
	ctx.lr = 0x832B7E30;
	sub_832A8E48(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_832B7E34:
	// neg r10,r11
	ctx.r10.s64 = -ctx.r11.s64;
	// andc r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// rlwinm r3,r9,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
loc_832B7E40:
	// addi r1,r1,896
	ctx.r1.s64 = ctx.r1.s64 + 896;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B7E58"))) PPC_WEAK_FUNC(sub_832B7E58);
PPC_FUNC_IMPL(__imp__sub_832B7E58) {
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
	// stwu r1,-896(r1)
	ea = -896 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832b7ea4
	if (!cr6.eq) goto loc_832B7EA4;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,-22528
	ctx.r4.s64 = ctx.r11.s64 + -22528;
	// addi r3,r10,27400
	ctx.r3.s64 = ctx.r10.s64 + 27400;
	// bl 0x83298338
	ctx.lr = 0x832B7E88;
	sub_83298338(ctx, base);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// addi r1,r1,896
	ctx.r1.s64 = ctx.r1.s64 + 896;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_832B7EA4:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x832aa0c0
	ctx.lr = 0x832B7EB8;
	sub_832AA0C0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832b7f58
	if (cr6.lt) goto loc_832B7F58;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x832a8d78
	ctx.lr = 0x832B7ED4;
	sub_832A8D78(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x832b7f44
	if (cr6.lt) goto loc_832B7F44;
	// addi r4,r3,540
	ctx.r4.s64 = ctx.r3.s64 + 540;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x832aa3e8
	ctx.lr = 0x832B7EF0;
	sub_832AA3E8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r7,256
	ctx.r7.s64 = 256;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832B7F14;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832b7f44
	if (cr6.lt) goto loc_832B7F44;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832B7F3C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
loc_832B7F44:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x832b7f58
	if (cr6.eq) goto loc_832B7F58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a8e48
	ctx.lr = 0x832B7F54;
	sub_832A8E48(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_832B7F58:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,896
	ctx.r1.s64 = ctx.r1.s64 + 896;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B7F70"))) PPC_WEAK_FUNC(sub_832B7F70);
PPC_FUNC_IMPL(__imp__sub_832B7F70) {
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
	// stwu r1,-1424(r1)
	ea = -1424 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832b7fb4
	if (!cr6.eq) goto loc_832B7FB4;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,-22488
	ctx.r4.s64 = ctx.r11.s64 + -22488;
	// addi r3,r10,27400
	ctx.r3.s64 = ctx.r10.s64 + 27400;
	// bl 0x83298338
	ctx.lr = 0x832B7FA8;
	sub_83298338(ctx, base);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// b 0x832b812c
	goto loc_832B812C;
loc_832B7FB4:
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x832b7fdc
	if (!cr6.eq) goto loc_832B7FDC;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,-22508
	ctx.r4.s64 = ctx.r11.s64 + -22508;
	// addi r3,r10,27400
	ctx.r3.s64 = ctx.r10.s64 + 27400;
	// bl 0x83298338
	ctx.lr = 0x832B7FD0;
	sub_83298338(ctx, base);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// b 0x832b812c
	goto loc_832B812C;
loc_832B7FDC:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r6,r1,880
	ctx.r6.s64 = ctx.r1.s64 + 880;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x832aa160
	ctx.lr = 0x832B8000;
	sub_832AA160(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832b80fc
	if (cr6.lt) goto loc_832B80FC;
	// addi r6,r1,880
	ctx.r6.s64 = ctx.r1.s64 + 880;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832a8dc0
	ctx.lr = 0x832B8020;
	sub_832A8DC0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832b80fc
	if (cr6.lt) goto loc_832B80FC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// beq cr6,0x832b8050
	if (cr6.eq) goto loc_832B8050;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,18
	ctx.r31.u64 = ctx.r31.u64 | 18;
	// b 0x832b8104
	goto loc_832B8104;
loc_832B8050:
	// addi r4,r11,540
	ctx.r4.s64 = ctx.r11.s64 + 540;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x832aa3e8
	ctx.lr = 0x832B805C;
	sub_832AA3E8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r7,256
	ctx.r7.s64 = 256;
	// addi r6,r1,624
	ctx.r6.s64 = ctx.r1.s64 + 624;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x832B8084;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832b80fc
	if (cr6.lt) goto loc_832B80FC;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r3,r1,880
	ctx.r3.s64 = ctx.r1.s64 + 880;
	// addi r4,r11,540
	ctx.r4.s64 = ctx.r11.s64 + 540;
	// bl 0x832aa3e8
	ctx.lr = 0x832B80A0;
	sub_832AA3E8(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r7,256
	ctx.r7.s64 = 256;
	// addi r6,r1,360
	ctx.r6.s64 = ctx.r1.s64 + 360;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x832B80C8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832b80fc
	if (cr6.lt) goto loc_832B80FC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,360
	ctx.r5.s64 = ctx.r1.s64 + 360;
	// addi r4,r1,624
	ctx.r4.s64 = ctx.r1.s64 + 624;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,76(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x832B80F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_832B80FC:
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_832B8104:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832b8118
	if (cr6.eq) goto loc_832B8118;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x832a8e48
	ctx.lr = 0x832B8114;
	sub_832A8E48(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_832B8118:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832b8128
	if (cr6.eq) goto loc_832B8128;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x832a8e48
	ctx.lr = 0x832B8128;
	sub_832A8E48(ctx, base);
loc_832B8128:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_832B812C:
	// addi r1,r1,1424
	ctx.r1.s64 = ctx.r1.s64 + 1424;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B8144"))) PPC_WEAK_FUNC(sub_832B8144);
PPC_FUNC_IMPL(__imp__sub_832B8144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B8148"))) PPC_WEAK_FUNC(sub_832B8148);
PPC_FUNC_IMPL(__imp__sub_832B8148) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832B8150;
	__savegprlr_29(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r5)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r7,256
	ctx.r7.s64 = 256;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832B8184;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832b81a8
	if (cr6.lt) goto loc_832B81A8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832B81A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_832B81A8:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 & ctx.r3.u64;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B81C0"))) PPC_WEAK_FUNC(sub_832B81C0);
PPC_FUNC_IMPL(__imp__sub_832B81C0) {
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
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832b8204
	if (!cr6.eq) goto loc_832B8204;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,-22468
	ctx.r4.s64 = ctx.r11.s64 + -22468;
	// addi r3,r10,27400
	ctx.r3.s64 = ctx.r10.s64 + 27400;
	// bl 0x83298338
	ctx.lr = 0x832B81F8;
	sub_83298338(ctx, base);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// b 0x832b8284
	goto loc_832B8284;
loc_832B8204:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x832aa0c0
	ctx.lr = 0x832B8218;
	sub_832AA0C0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832b8280
	if (cr6.lt) goto loc_832B8280;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x832a8d78
	ctx.lr = 0x832B8234;
	sub_832A8D78(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x832b826c
	if (cr6.lt) goto loc_832B826C;
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// addi r4,r3,540
	ctx.r4.s64 = ctx.r3.s64 + 540;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r11,-32440
	ctx.r5.s64 = ctx.r11.s64 + -32440;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x832aa588
	ctx.lr = 0x832B8264;
	sub_832AA588(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
loc_832B826C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x832b8280
	if (cr6.eq) goto loc_832B8280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a8e48
	ctx.lr = 0x832B827C;
	sub_832A8E48(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_832B8280:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_832B8284:
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B829C"))) PPC_WEAK_FUNC(sub_832B829C);
PPC_FUNC_IMPL(__imp__sub_832B829C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B82A0"))) PPC_WEAK_FUNC(sub_832B82A0);
PPC_FUNC_IMPL(__imp__sub_832B82A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832B82A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r29,r3,4,0,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r29,20
	ctx.r4.s64 = ctx.r29.s64 + 20;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x832a1cb0
	ctx.lr = 0x832B82C8;
	sub_832A1CB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832b82d8
	if (!cr6.eq) goto loc_832B82D8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_832B82D8:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// beq cr6,0x832b8324
	if (cr6.eq) goto loc_832B8324;
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
	// mtctr r31
	ctr.u64 = ctx.r31.u64;
loc_832B8300:
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x832b8300
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832B8300;
	// add r11,r29,r3
	ctx.r11.u64 = ctx.r29.u64 + ctx.r3.u64;
	// addi r9,r3,20
	ctx.r9.s64 = ctx.r3.s64 + 20;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
loc_832B8324:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B832C"))) PPC_WEAK_FUNC(sub_832B832C);
PPC_FUNC_IMPL(__imp__sub_832B832C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B8330"))) PPC_WEAK_FUNC(sub_832B8330);
PPC_FUNC_IMPL(__imp__sub_832B8330) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x832a1d18
	sub_832A1D18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B833C"))) PPC_WEAK_FUNC(sub_832B833C);
PPC_FUNC_IMPL(__imp__sub_832B833C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B8340"))) PPC_WEAK_FUNC(sub_832B8340);
PPC_FUNC_IMPL(__imp__sub_832B8340) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x832B8348;
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832b837c
	if (cr6.eq) goto loc_832B837C;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x832a5a38
	ctx.lr = 0x832B8368;
	sub_832A5A38(ctx, base);
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x832b8388
	if (!cr6.eq) goto loc_832B8388;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x832a5ae8
	ctx.lr = 0x832B837C;
	sub_832A5AE8(ctx, base);
loc_832B837C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832B8388:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// bne cr6,0x832b83b8
	if (!cr6.eq) goto loc_832B83B8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// b 0x832b83cc
	goto loc_832B83CC;
loc_832B83B8:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r31,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r31.u32);
loc_832B83CC:
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x832a5ae8
	ctx.lr = 0x832B83D8;
	sub_832A5AE8(ctx, base);
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// addi r11,r11,-20
	ctx.r11.s64 = ctx.r11.s64 + -20;
	// srawi r3,r11,4
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 4;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B83EC"))) PPC_WEAK_FUNC(sub_832B83EC);
PPC_FUNC_IMPL(__imp__sub_832B83EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B83F0"))) PPC_WEAK_FUNC(sub_832B83F0);
PPC_FUNC_IMPL(__imp__sub_832B83F0) {
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
	// beq cr6,0x832b8448
	if (cr6.eq) goto loc_832B8448;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// bge cr6,0x832b8448
	if (!cr6.lt) goto loc_832B8448;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x832a5a38
	ctx.lr = 0x832B8428;
	sub_832A5A38(ctx, base);
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x832b8450
	if (!cr6.eq) goto loc_832B8450;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x832a5ae8
	ctx.lr = 0x832B8448;
	sub_832A5AE8(ctx, base);
loc_832B8448:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x832b84a0
	goto loc_832B84A0;
loc_832B8450:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// bne cr6,0x832b8470
	if (!cr6.eq) goto loc_832B8470;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// b 0x832b8474
	goto loc_832B8474;
loc_832B8470:
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
loc_832B8474:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x832b8484
	if (!cr6.eq) goto loc_832B8484;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// b 0x832b8488
	goto loc_832B8488;
loc_832B8484:
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_832B8488:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x832a5ae8
	ctx.lr = 0x832B849C;
	sub_832A5AE8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_832B84A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B84B8"))) PPC_WEAK_FUNC(sub_832B84B8);
PPC_FUNC_IMPL(__imp__sub_832B84B8) {
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
	// beq cr6,0x832b8520
	if (cr6.eq) goto loc_832B8520;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x832a5a38
	ctx.lr = 0x832B84E0;
	sub_832A5A38(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x832a5ae8
	ctx.lr = 0x832B84FC;
	sub_832A5AE8(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x832b8520
	if (cr6.eq) goto loc_832B8520;
loc_832B8504:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832B8514;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x832b8504
	if (!cr6.eq) goto loc_832B8504;
loc_832B8520:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B8538"))) PPC_WEAK_FUNC(sub_832B8538);
PPC_FUNC_IMPL(__imp__sub_832B8538) {
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
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// cmpwi cr6,r4,64
	cr6.compare<int32_t>(ctx.r4.s32, 64, xer);
	// ble cr6,0x832b8564
	if (!cr6.gt) goto loc_832B8564;
	// li r31,64
	ctx.r31.s64 = 64;
loc_832B8564:
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x832b8574
	if (!cr6.eq) goto loc_832B8574;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r8,r11,9844
	ctx.r8.s64 = ctx.r11.s64 + 9844;
loc_832B8574:
	// cmplwi cr6,r5,5
	cr6.compare<uint32_t>(ctx.r5.u32, 5, xer);
	// bgt cr6,0x832b858c
	if (cr6.gt) goto loc_832B858C;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r10,r11,-22448
	ctx.r10.s64 = ctx.r11.s64 + -22448;
	// lbzx r10,r5,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r10.u32);
	// b 0x832b8590
	goto loc_832B8590;
loc_832B858C:
	// li r10,63
	ctx.r10.s64 = 63;
loc_832B8590:
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// addi r11,r11,-32576
	ctx.r11.s64 = ctx.r11.s64 + -32576;
	// addi r5,r9,-22384
	ctx.r5.s64 = ctx.r9.s64 + -22384;
	// extsb r7,r10
	ctx.r7.s64 = ctx.r10.s8;
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83297a40
	ctx.lr = 0x832B85B4;
	sub_83297A40(ctx, base);
	// cmpw cr6,r3,r31
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r31.s32, xer);
	// blt cr6,0x832b85cc
	if (cr6.lt) goto loc_832B85CC;
	// add r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 + ctx.r30.u64;
	// li r10,32
	ctx.r10.s64 = 32;
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// stb r10,-2(r11)
	PPC_STORE_U8(ctx.r11.u32 + -2, ctx.r10.u8);
loc_832B85CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B85E4"))) PPC_WEAK_FUNC(sub_832B85E4);
PPC_FUNC_IMPL(__imp__sub_832B85E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B85E8"))) PPC_WEAK_FUNC(sub_832B85E8);
PPC_FUNC_IMPL(__imp__sub_832B85E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r11,r11,-32576
	ctx.r11.s64 = ctx.r11.s64 + -32576;
	// addi r5,r10,-22440
	ctx.r5.s64 = ctx.r10.s64 + -22440;
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// b 0x83297a40
	sub_83297A40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B8604"))) PPC_WEAK_FUNC(sub_832B8604);
PPC_FUNC_IMPL(__imp__sub_832B8604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B8608"))) PPC_WEAK_FUNC(sub_832B8608);
PPC_FUNC_IMPL(__imp__sub_832B8608) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31747
	ctx.r10.s64 = -2080571392;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-32576(r10)
	PPC_STORE_U32(ctx.r10.u32 + -32576, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B8618"))) PPC_WEAK_FUNC(sub_832B8618);
PPC_FUNC_IMPL(__imp__sub_832B8618) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// b 0x832b8538
	sub_832B8538(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B8624"))) PPC_WEAK_FUNC(sub_832B8624);
PPC_FUNC_IMPL(__imp__sub_832B8624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B8628"))) PPC_WEAK_FUNC(sub_832B8628);
PPC_FUNC_IMPL(__imp__sub_832B8628) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x832B8630;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,-32576
	ctx.r31.s64 = ctx.r11.s64 + -32576;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,-32576(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32576);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// subf r10,r11,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r11.s64;
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// and r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 & ctx.r9.u64;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// blt cr6,0x832b86ec
	if (cr6.lt) goto loc_832B86EC;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83298e68
	ctx.lr = 0x832B867C;
	sub_83298E68(ctx, base);
	// lbz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 104);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lbz r7,108(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 108);
	// li r4,24
	ctx.r4.s64 = 24;
	// lbz r10,105(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 105);
	// addi r5,r11,-22416
	ctx.r5.s64 = ctx.r11.s64 + -22416;
	// lbz r9,106(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 106);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// lhz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 100);
	// lbz r25,107(r1)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r1.u32 + 107);
	// addi r6,r11,1900
	ctx.r6.s64 = ctx.r11.s64 + 1900;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// bl 0x83297a40
	ctx.lr = 0x832B86B8;
	sub_83297A40(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r8,124(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r7,128(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r6,132(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// stw r7,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r7.u32);
	// stw r6,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r6.u32);
loc_832B86EC:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832b8538
	ctx.lr = 0x832B8700;
	sub_832B8538(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B8708"))) PPC_WEAK_FUNC(sub_832B8708);
PPC_FUNC_IMPL(__imp__sub_832B8708) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_832B8730"))) PPC_WEAK_FUNC(sub_832B8730);
PPC_FUNC_IMPL(__imp__sub_832B8730) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B8734"))) PPC_WEAK_FUNC(sub_832B8734);
PPC_FUNC_IMPL(__imp__sub_832B8734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B8738"))) PPC_WEAK_FUNC(sub_832B8738);
PPC_FUNC_IMPL(__imp__sub_832B8738) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// blt cr6,0x832b8760
	if (cr6.lt) goto loc_832B8760;
	// beq cr6,0x832b8750
	if (cr6.eq) goto loc_832B8750;
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_832B8750:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_832B8760:
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B8768"))) PPC_WEAK_FUNC(sub_832B8768);
PPC_FUNC_IMPL(__imp__sub_832B8768) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// stw r5,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// lis r9,-31956
	ctx.r9.s64 = -2094268416;
	// addi r8,r11,11696
	ctx.r8.s64 = ctx.r11.s64 + 11696;
	// addi r7,r10,-30968
	ctx.r7.s64 = ctx.r10.s64 + -30968;
	// addi r6,r9,-30920
	ctx.r6.s64 = ctx.r9.s64 + -30920;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// stw r5,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B87A0"))) PPC_WEAK_FUNC(sub_832B87A0);
PPC_FUNC_IMPL(__imp__sub_832B87A0) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,24
	ctx.r4.s64 = 24;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x832a1cb0
	ctx.lr = 0x832B87CC;
	sub_832A1CB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832b8808
	if (cr6.eq) goto loc_832B8808;
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// lis r9,-31956
	ctx.r9.s64 = -2094268416;
	// addi r8,r11,11696
	ctx.r8.s64 = ctx.r11.s64 + 11696;
	// addi r7,r10,-30968
	ctx.r7.s64 = ctx.r10.s64 + -30968;
	// addi r6,r9,-30920
	ctx.r6.s64 = ctx.r9.s64 + -30920;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// stw r5,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
loc_832B8808:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B8820"))) PPC_WEAK_FUNC(sub_832B8820);
PPC_FUNC_IMPL(__imp__sub_832B8820) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832B8828;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x832a79e0
	ctx.lr = 0x832B883C;
	sub_832A79E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832b8858
	if (!cr6.eq) goto loc_832B8858;
loc_832B8844:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_832B8858:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x832b886c
	if (!cr6.eq) goto loc_832B886C;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r6,r11,20756
	ctx.r6.s64 = ctx.r11.s64 + 20756;
	// b 0x832b8874
	goto loc_832B8874;
loc_832B886C:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r6,r11,20724
	ctx.r6.s64 = ctx.r11.s64 + 20724;
loc_832B8874:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x832b3fd0
	ctx.lr = 0x832B8884;
	sub_832B3FD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832b88a8
	if (!cr6.eq) goto loc_832B88A8;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r10,r11,22
	ctx.r10.u64 = ctx.r11.u64 | 22;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_832B88A8:
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832b8844
	if (cr6.eq) goto loc_832B8844;
	// bl 0x832a79f0
	ctx.lr = 0x832B88B8;
	sub_832A79F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x832a79e0
	ctx.lr = 0x832B88C0;
	sub_832A79E0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x832b87a0
	ctx.lr = 0x832B88C8;
	sub_832B87A0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832b88dc
	if (!cr6.eq) goto loc_832B88DC;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,12
	ctx.r10.u64 = ctx.r11.u64 | 12;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
loc_832B88DC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B88E4"))) PPC_WEAK_FUNC(sub_832B88E4);
PPC_FUNC_IMPL(__imp__sub_832B88E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B88E8"))) PPC_WEAK_FUNC(sub_832B88E8);
PPC_FUNC_IMPL(__imp__sub_832B88E8) {
	PPC_FUNC_PROLOGUE();
	// twi 31,r0,22
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B88F0"))) PPC_WEAK_FUNC(sub_832B88F0);
PPC_FUNC_IMPL(__imp__sub_832B88F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x832b898c
	if (!cr6.lt) goto loc_832B898C;
	// cmpwi cr6,r3,-10000
	cr6.compare<int32_t>(ctx.r3.s32, -10000, xer);
	// bgt cr6,0x832b8930
	if (cr6.gt) goto loc_832B8930;
	// subfic r11,r3,-10000
	xer.ca = ctx.r3.u32 <= 4294957296;
	ctx.r11.s64 = -10000 - ctx.r3.s64;
	// cmpwi cr6,r11,72
	cr6.compare<int32_t>(ctx.r11.s32, 72, xer);
	// bge cr6,0x832b8920
	if (!cr6.lt) goto loc_832B8920;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r9,r10,-22368
	ctx.r9.s64 = ctx.r10.s64 + -22368;
	// lbzx r3,r9,r11
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x832b8924
	if (!cr6.eq) goto loc_832B8924;
loc_832B8920:
	// li r3,4095
	ctx.r3.s64 = 4095;
loc_832B8924:
	// li r11,4097
	ctx.r11.s64 = 4097;
	// rlwimi r3,r11,19,0,15
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r11.u32, 19) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// blr 
	return;
loc_832B8930:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// neg r7,r3
	ctx.r7.s64 = -ctx.r3.s64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,99
	ctx.r9.s64 = 99;
	// addi r8,r11,20792
	ctx.r8.s64 = ctx.r11.s64 + 20792;
loc_832B8944:
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r6,r11,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r5,r6,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// cmpw cr6,r7,r5
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r5.s32, xer);
	// ble cr6,0x832b8964
	if (!cr6.gt) goto loc_832B8964;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// b 0x832b8968
	goto loc_832B8968;
loc_832B8964:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_832B8968:
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x832b8944
	if (!cr6.eq) goto loc_832B8944;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r10,r11,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmpw cr6,r7,r10
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, xer);
	// bne cr6,0x832b898c
	if (!cr6.eq) goto loc_832B898C;
	// addi r10,r8,4
	ctx.r10.s64 = ctx.r8.s64 + 4;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
loc_832B898C:
	// li r3,4095
	ctx.r3.s64 = 4095;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B8994"))) PPC_WEAK_FUNC(sub_832B8994);
PPC_FUNC_IMPL(__imp__sub_832B8994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B8998"))) PPC_WEAK_FUNC(sub_832B8998);
PPC_FUNC_IMPL(__imp__sub_832B8998) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x832B89A0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,5
	ctx.r28.s64 = 5;
	// addi r27,r11,21592
	ctx.r27.s64 = ctx.r11.s64 + 21592;
loc_832B89B8:
	// add r11,r28,r29
	ctx.r11.u64 = ctx.r28.u64 + ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// srawi r31,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 1;
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r27
	ctx.r30.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwzx r4,r11,r27
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// bl 0x83296e58
	ctx.lr = 0x832B89D4;
	sub_83296E58(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x832b8a00
	if (cr6.eq) goto loc_832B8A00;
	// bge cr6,0x832b89e8
	if (!cr6.lt) goto loc_832B89E8;
	// addi r28,r31,-1
	ctx.r28.s64 = ctx.r31.s64 + -1;
	// b 0x832b89ec
	goto loc_832B89EC;
loc_832B89E8:
	// addi r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 1;
loc_832B89EC:
	// cmpw cr6,r29,r28
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, xer);
	// ble cr6,0x832b89b8
	if (!cr6.gt) goto loc_832B89B8;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_832B8A00:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B8A0C"))) PPC_WEAK_FUNC(sub_832B8A0C);
PPC_FUNC_IMPL(__imp__sub_832B8A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B8A10"))) PPC_WEAK_FUNC(sub_832B8A10);
PPC_FUNC_IMPL(__imp__sub_832B8A10) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r11,-22256
	ctx.r5.s64 = ctx.r11.s64 + -22256;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83295250
	ctx.lr = 0x832B8A30;
	sub_83295250(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832b8a4c
	if (!cr6.eq) goto loc_832B8A4C;
	// li r3,5
	ctx.r3.s64 = 5;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_832B8A4C:
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x83294f00
	ctx.lr = 0x832B8A5C;
	sub_83294F00(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x832b8a78
	if (!cr6.lt) goto loc_832B8A78;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_832B8A78:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832b8998
	ctx.lr = 0x832B8A80;
	sub_832B8998(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B8A90"))) PPC_WEAK_FUNC(sub_832B8A90);
PPC_FUNC_IMPL(__imp__sub_832B8A90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832B8A98;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// addi r31,r3,12
	ctx.r31.s64 = ctx.r3.s64 + 12;
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, xer);
	// bgt cr6,0x832b8aec
	if (cr6.gt) goto loc_832B8AEC;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r29,16(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// cmplw cr6,r7,r11
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, xer);
	// ble cr6,0x832b8ac8
	if (!cr6.gt) goto loc_832B8AC8;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_832B8AC8:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x832b8aec
	if (cr6.eq) goto loc_832B8AEC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x83293ec8
	ctx.lr = 0x832B8AE4;
	sub_83293EC8(ctx, base);
	// add r11,r29,r30
	ctx.r11.u64 = ctx.r29.u64 + ctx.r30.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_832B8AEC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B8AF4"))) PPC_WEAK_FUNC(sub_832B8AF4);
PPC_FUNC_IMPL(__imp__sub_832B8AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B8AF8"))) PPC_WEAK_FUNC(sub_832B8AF8);
PPC_FUNC_IMPL(__imp__sub_832B8AF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_832B8B28"))) PPC_WEAK_FUNC(sub_832B8B28);
PPC_FUNC_IMPL(__imp__sub_832B8B28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B8B2C"))) PPC_WEAK_FUNC(sub_832B8B2C);
PPC_FUNC_IMPL(__imp__sub_832B8B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B8B30"))) PPC_WEAK_FUNC(sub_832B8B30);
PPC_FUNC_IMPL(__imp__sub_832B8B30) {
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
	// cmplwi cr6,r4,2
	cr6.compare<uint32_t>(ctx.r4.u32, 2, xer);
	// bgt cr6,0x832b8b84
	if (cr6.gt) goto loc_832B8B84;
	// beq cr6,0x832b8bb8
	if (cr6.eq) goto loc_832B8BB8;
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// blt cr6,0x832b8b70
	if (cr6.lt) goto loc_832B8B70;
	// bne cr6,0x832b8bb8
	if (!cr6.eq) goto loc_832B8BB8;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_832B8B70:
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_832B8B84:
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// bne cr6,0x832b8bb8
	if (!cr6.eq) goto loc_832B8BB8;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x832b8bb8
	if (cr6.lt) goto loc_832B8BB8;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832b8bb8
	if (cr6.eq) goto loc_832B8BB8;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// lwz r4,28(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// bctrl 
	ctx.lr = 0x832B8BB8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_832B8BB8:
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

__attribute__((alias("__imp__sub_832B8BCC"))) PPC_WEAK_FUNC(sub_832B8BCC);
PPC_FUNC_IMPL(__imp__sub_832B8BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B8BD0"))) PPC_WEAK_FUNC(sub_832B8BD0);
PPC_FUNC_IMPL(__imp__sub_832B8BD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31984
	ctx.r11.s64 = -2096103424;
	// lis r10,-31956
	ctx.r10.s64 = -2094268416;
	// addi r8,r11,11696
	ctx.r8.s64 = ctx.r11.s64 + 11696;
	// lis r9,-31956
	ctx.r9.s64 = -2094268416;
	// addi r11,r10,-30064
	ctx.r11.s64 = ctx.r10.s64 + -30064;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// addi r10,r9,-29904
	ctx.r10.s64 = ctx.r9.s64 + -29904;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// li r8,5
	ctx.r8.s64 = 5;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// stw r5,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// stw r6,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// stw r7,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r7.u32);
	// stw r9,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r9.u32);
	// stw r8,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B8C18"))) PPC_WEAK_FUNC(sub_832B8C18);
PPC_FUNC_IMPL(__imp__sub_832B8C18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r10,r11,-29960
	ctx.r10.s64 = ctx.r11.s64 + -29960;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B8C28"))) PPC_WEAK_FUNC(sub_832B8C28);
PPC_FUNC_IMPL(__imp__sub_832B8C28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x832B8C30;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,0
	ctx.r24.s64 = 0;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
	// addi r26,r11,-4
	ctx.r26.s64 = ctx.r11.s64 + -4;
loc_832B8C58:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832b8ca8
	if (cr6.eq) goto loc_832B8CA8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x832B8C78;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832b8c8c
	if (cr6.eq) goto loc_832B8C8C;
	// stwu r3,4(r26)
	ea = 4 + ctx.r26.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r26.u32 = ea;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x832b8c98
	goto loc_832B8C98;
loc_832B8C8C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x832b8cec
	if (cr6.lt) goto loc_832B8CEC;
loc_832B8C98:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r25,4
	cr6.compare<uint32_t>(ctx.r25.u32, 4, xer);
	// blt cr6,0x832b8c58
	if (cr6.lt) goto loc_832B8C58;
loc_832B8CA8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x832b8cc0
	if (!cr6.eq) goto loc_832B8CC0;
	// stw r24,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r24.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_832B8CC0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832bff90
	ctx.lr = 0x832B8CCC;
	sub_832BFF90(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832b8ce0
	if (cr6.eq) goto loc_832B8CE0;
	// stw r24,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r24.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_832B8CE0:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,12
	ctx.r10.u64 = ctx.r11.u64 | 12;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
loc_832B8CEC:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x832b8d30
	if (cr6.eq) goto loc_832B8D30;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_832B8D00:
	// lwzu r30,-4(r29)
	ea = -4 + ctx.r29.u32;
	ctx.r30.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x832b8d28
	if (cr6.eq) goto loc_832B8D28;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832B8D20;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832a1d18
	ctx.lr = 0x832B8D28;
	sub_832A1D18(ctx, base);
loc_832B8D28:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x832b8d00
	if (!cr6.eq) goto loc_832B8D00;
loc_832B8D30:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B8D3C"))) PPC_WEAK_FUNC(sub_832B8D3C);
PPC_FUNC_IMPL(__imp__sub_832B8D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B8D40"))) PPC_WEAK_FUNC(sub_832B8D40);
PPC_FUNC_IMPL(__imp__sub_832B8D40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832B8D48;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,21656
	ctx.r6.s64 = ctx.r11.s64 + 21656;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x832b3fd0
	ctx.lr = 0x832B8D70;
	sub_832B3FD0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x832b8d94
	if (!cr6.eq) goto loc_832B8D94;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r10,r11,22
	ctx.r10.u64 = ctx.r11.u64 | 22;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_832B8D94:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r3,r11,21640
	ctx.r3.s64 = ctx.r11.s64 + 21640;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x832b8c28
	ctx.lr = 0x832B8DAC;
	sub_832B8C28(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832b8e1c
	if (cr6.eq) goto loc_832B8E1C;
	// lhz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,1000
	cr6.compare<uint32_t>(ctx.r11.u32, 1000, xer);
	// ble cr6,0x832b8dcc
	if (!cr6.gt) goto loc_832B8DCC;
	// li r11,1000
	ctx.r11.s64 = 1000;
	// sth r11,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r11.u16);
loc_832B8DCC:
	// clrlwi r6,r11,16
	ctx.r6.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832b9360
	ctx.lr = 0x832B8DE0;
	sub_832B9360(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832b8df8
	if (cr6.eq) goto loc_832B8DF8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_832B8DF8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832B8E08;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a1d18
	ctx.lr = 0x832B8E10;
	sub_832A1D18(ctx, base);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// ori r9,r10,12
	ctx.r9.u64 = ctx.r10.u64 | 12;
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
loc_832B8E1C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B8E28"))) PPC_WEAK_FUNC(sub_832B8E28);
PPC_FUNC_IMPL(__imp__sub_832B8E28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832B8E30;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,21744
	ctx.r6.s64 = ctx.r11.s64 + 21744;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x832b3fd0
	ctx.lr = 0x832B8E58;
	sub_832B3FD0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x832b8e7c
	if (!cr6.eq) goto loc_832B8E7C;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r10,r11,22
	ctx.r10.u64 = ctx.r11.u64 | 22;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_832B8E7C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addic r8,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r9,r10,21704
	ctx.r9.s64 = ctx.r10.s64 + 21704;
	// subfe r11,r8,r11
	temp.u8 = (~ctx.r8.u32 + ctx.r11.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x832b8c28
	ctx.lr = 0x832B8EB0;
	sub_832B8C28(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832b8ed8
	if (!cr6.eq) goto loc_832B8ED8;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x832b8ed0
	if (cr6.eq) goto loc_832B8ED0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_832B8ED0:
	// bl 0x832c0ef0
	ctx.lr = 0x832B8ED4;
	sub_832C0EF0(ctx, base);
	// b 0x832b8ef4
	goto loc_832B8EF4;
loc_832B8ED8:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832b8ef0
	if (!cr6.eq) goto loc_832B8EF0;
	// bl 0x832c0e38
	ctx.lr = 0x832B8EEC;
	sub_832C0E38(ctx, base);
	// b 0x832b8ef4
	goto loc_832B8EF4;
loc_832B8EF0:
	// bl 0x832c0bc0
	ctx.lr = 0x832B8EF4;
	sub_832C0BC0(ctx, base);
loc_832B8EF4:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832b8f1c
	if (!cr6.eq) goto loc_832B8F1C;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x832b8f10
	if (cr6.eq) goto loc_832B8F10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a1d18
	ctx.lr = 0x832B8F10;
	sub_832A1D18(ctx, base);
loc_832B8F10:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r10,r11,12
	ctx.r10.u64 = ctx.r11.u64 | 12;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
loc_832B8F1C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B8F28"))) PPC_WEAK_FUNC(sub_832B8F28);
PPC_FUNC_IMPL(__imp__sub_832B8F28) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x832c18c0
	ctx.lr = 0x832B8F3C;
	sub_832C18C0(ctx, base);
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

__attribute__((alias("__imp__sub_832B8F50"))) PPC_WEAK_FUNC(sub_832B8F50);
PPC_FUNC_IMPL(__imp__sub_832B8F50) {
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
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832B8F74;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a1d18
	ctx.lr = 0x832B8F7C;
	sub_832A1D18(ctx, base);
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

__attribute__((alias("__imp__sub_832B8F90"))) PPC_WEAK_FUNC(sub_832B8F90);
PPC_FUNC_IMPL(__imp__sub_832B8F90) {
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
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// bl 0x832c1ae8
	ctx.lr = 0x832B8FAC;
	sub_832C1AE8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x832c1918
	ctx.lr = 0x832B8FB4;
	sub_832C1918(ctx, base);
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

__attribute__((alias("__imp__sub_832B8FC8"))) PPC_WEAK_FUNC(sub_832B8FC8);
PPC_FUNC_IMPL(__imp__sub_832B8FC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832B8FD0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, xer);
	// bgt cr6,0x832b9034
	if (cr6.gt) goto loc_832B9034;
	// lwz r28,24(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
loc_832B8FF0:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, xer);
	// ble cr6,0x832b9000
	if (!cr6.gt) goto loc_832B9000;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_832B9000:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,12(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// bl 0x832c1858
	ctx.lr = 0x832B901C;
	sub_832C1858(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832b9034
	if (cr6.lt) goto loc_832B9034;
	// subf. r30,r31,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r31.s64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq 0x832b9034
	if (cr0.eq) goto loc_832B9034;
	// add r29,r31,r29
	ctx.r29.u64 = ctx.r31.u64 + ctx.r29.u64;
	// b 0x832b8ff0
	goto loc_832B8FF0;
loc_832B9034:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B903C"))) PPC_WEAK_FUNC(sub_832B903C);
PPC_FUNC_IMPL(__imp__sub_832B903C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B9040"))) PPC_WEAK_FUNC(sub_832B9040);
PPC_FUNC_IMPL(__imp__sub_832B9040) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832B9048;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, xer);
	// bgt cr6,0x832b90d8
	if (cr6.gt) goto loc_832B90D8;
	// lwz r31,24(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r27,28(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplw cr6,r7,r31
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, xer);
	// ble cr6,0x832b90a8
	if (!cr6.gt) goto loc_832B90A8;
loc_832B9074:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// bl 0x832c1858
	ctx.lr = 0x832B9090;
	sub_832C1858(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832b90d8
	if (cr6.lt) goto loc_832B90D8;
	// subf r29,r31,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r31.s64;
	// add r30,r30,r31
	ctx.r30.u64 = ctx.r30.u64 + ctx.r31.u64;
	// cmplw cr6,r29,r31
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, xer);
	// bgt cr6,0x832b9074
	if (cr6.gt) goto loc_832B9074;
loc_832B90A8:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// bl 0x832c1858
	ctx.lr = 0x832B90C4;
	sub_832C1858(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832b90d8
	if (cr6.lt) goto loc_832B90D8;
	// clrldi r4,r27,32
	ctx.r4.u64 = ctx.r27.u64 & 0xFFFFFFFF;
	// lwz r3,20(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// bl 0x832c1bb8
	ctx.lr = 0x832B90D8;
	sub_832C1BB8(ctx, base);
loc_832B90D8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B90E0"))) PPC_WEAK_FUNC(sub_832B90E0);
PPC_FUNC_IMPL(__imp__sub_832B90E0) {
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
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// bgt cr6,0x832b917c
	if (cr6.gt) goto loc_832B917C;
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bdzf 4*cr6+eq,0x832b911c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_832B911C;
	// bdzf 4*cr6+eq,0x832b9150
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_832B9150;
	// bne cr6,0x832b9198
	if (!cr6.eq) goto loc_832B9198;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// b 0x832b9180
	goto loc_832B9180;
loc_832B911C:
	// lwz r30,0(r5)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r11,5
	ctx.r11.s64 = 5;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x832B9148;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x832b9180
	goto loc_832B9180;
loc_832B9150:
	// lwz r30,28(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x832b917c
	if (cr6.eq) goto loc_832B917C;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x832c1b30
	ctx.lr = 0x832B9168;
	sub_832C1B30(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x832c18c0
	ctx.lr = 0x832B9170;
	sub_832C18C0(ctx, base);
	// clrldi r4,r30,32
	ctx.r4.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x832c1b30
	ctx.lr = 0x832B917C;
	sub_832C1B30(ctx, base);
loc_832B917C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832B9180:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_832B9198:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x832B91B0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x832b9180
	goto loc_832B9180;
}

__attribute__((alias("__imp__sub_832B91B4"))) PPC_WEAK_FUNC(sub_832B91B4);
PPC_FUNC_IMPL(__imp__sub_832B91B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B91B8"))) PPC_WEAK_FUNC(sub_832B91B8);
PPC_FUNC_IMPL(__imp__sub_832B91B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x832B91C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r28,r11,-32548
	ctx.r28.s64 = ctx.r11.s64 + -32548;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832c1630
	ctx.lr = 0x832B91D4;
	sub_832C1630(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832b9260
	if (cr6.lt) goto loc_832B9260;
loc_832B91DC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x832c1758
	ctx.lr = 0x832B91EC;
	sub_832C1758(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832b9240
	if (!cr6.gt) goto loc_832B9240;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r31,r10,-4
	ctx.r31.s64 = ctx.r10.s64 + -4;
	// lwz r29,4(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_832B9208:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzu r7,8(r31)
	ea = 8 + ctx.r31.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832B922C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne cr6,0x832b9208
	if (!cr6.eq) goto loc_832B9208;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832c1790
	ctx.lr = 0x832B923C;
	sub_832C1790(ctx, base);
	// b 0x832b91dc
	goto loc_832B91DC;
loc_832B9240:
	// blt cr6,0x832b9250
	if (cr6.lt) goto loc_832B9250;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832c1790
	ctx.lr = 0x832B924C;
	sub_832C1790(ctx, base);
	// b 0x832b91dc
	goto loc_832B91DC;
loc_832B9250:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832c1630
	ctx.lr = 0x832B9258;
	sub_832C1630(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x832b91dc
	if (!cr6.lt) goto loc_832B91DC;
loc_832B9260:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B926C"))) PPC_WEAK_FUNC(sub_832B926C);
PPC_FUNC_IMPL(__imp__sub_832B926C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B9270"))) PPC_WEAK_FUNC(sub_832B9270);
PPC_FUNC_IMPL(__imp__sub_832B9270) {
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
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// addi r31,r11,-32548
	ctx.r31.s64 = ctx.r11.s64 + -32548;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832c1488
	ctx.lr = 0x832B9290;
	sub_832C1488(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832b92e0
	if (cr6.lt) goto loc_832B92E0;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,4096
	ctx.r5.s64 = 4096;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-28232
	ctx.r3.s64 = ctx.r11.s64 + -28232;
	// bl 0x832b2968
	ctx.lr = 0x832B92B0;
	sub_832B2968(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x832b92dc
	if (!cr6.lt) goto loc_832B92DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832c14f0
	ctx.lr = 0x832B92C4;
	sub_832C14F0(ctx, base);
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
loc_832B92DC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_832B92E0:
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

__attribute__((alias("__imp__sub_832B92F4"))) PPC_WEAK_FUNC(sub_832B92F4);
PPC_FUNC_IMPL(__imp__sub_832B92F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B92F8"))) PPC_WEAK_FUNC(sub_832B92F8);
PPC_FUNC_IMPL(__imp__sub_832B92F8) {
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
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-32548
	ctx.r31.s64 = ctx.r11.s64 + -32548;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832c17e0
	ctx.lr = 0x832B9320;
	sub_832C17E0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x832b2ef8
	ctx.lr = 0x832B932C;
	sub_832B2EF8(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x832b2af0
	ctx.lr = 0x832B9334;
	sub_832B2AF0(ctx, base);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832b9348
	if (!cr6.eq) goto loc_832B9348;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832c14f0
	ctx.lr = 0x832B9348;
	sub_832C14F0(ctx, base);
loc_832B9348:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B9360"))) PPC_WEAK_FUNC(sub_832B9360);
PPC_FUNC_IMPL(__imp__sub_832B9360) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832B9368;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,36
	ctx.r4.s64 = 36;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x832a1cb0
	ctx.lr = 0x832B938C;
	sub_832A1CB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832b9474
	if (cr6.eq) goto loc_832B9474;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// bne cr6,0x832b93ac
	if (!cr6.eq) goto loc_832B93AC;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r10,r11,-28728
	ctx.r10.s64 = ctx.r11.s64 + -28728;
	// b 0x832b93b4
	goto loc_832B93B4;
loc_832B93AC:
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// addi r10,r11,-28608
	ctx.r10.s64 = ctx.r11.s64 + -28608;
loc_832B93B4:
	// divwu r11,r31,r29
	ctx.r11.u32 = PPCDivide(ctx.r31.u32, ctx.r29.u32);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lis r8,-31956
	ctx.r8.s64 = -2094268416;
	// subfic r4,r9,31
	xer.ca = ctx.r9.u32 <= 31;
	ctx.r4.s64 = 31 - ctx.r9.s64;
	// lis r7,-31956
	ctx.r7.s64 = -2094268416;
	// slw r6,r10,r4
	ctx.r6.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r4.u8 & 0x3F));
	// addi r5,r8,-28784
	ctx.r5.s64 = ctx.r8.s64 + -28784;
	// addi r3,r7,-28448
	ctx.r3.s64 = ctx.r7.s64 + -28448;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r5.u32);
	// mullw r10,r6,r29
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r29.s32);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// stw r28,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r28.u32);
	// stw r10,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r10.u32);
	// stw r27,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r27.u32);
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// lis r9,-31956
	ctx.r9.s64 = -2094268416;
	// lis r8,-31747
	ctx.r8.s64 = -2080571392;
	// addi r31,r30,12
	ctx.r31.s64 = ctx.r30.s64 + 12;
	// addi r7,r9,-28848
	ctx.r7.s64 = ctx.r9.s64 + -28848;
	// addi r3,r8,-32548
	ctx.r3.s64 = ctx.r8.s64 + -32548;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// twllei r29,0
	// bl 0x832c1570
	ctx.lr = 0x832B9424;
	sub_832C1570(ctx, base);
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832b944c
	if (cr6.eq) goto loc_832B944C;
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,-28888
	ctx.r3.s64 = ctx.r11.s64 + -28888;
	// bl 0x832c1a38
	ctx.lr = 0x832B9440;
	sub_832C1A38(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt cr6,0x832b9480
	if (cr6.gt) goto loc_832B9480;
loc_832B944C:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x832b945c
	if (!cr6.gt) goto loc_832B945C;
	// bl 0x832b2af0
	ctx.lr = 0x832B945C;
	sub_832B2AF0(ctx, base);
loc_832B945C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832b946c
	if (cr6.eq) goto loc_832B946C;
	// bl 0x832c1918
	ctx.lr = 0x832B946C;
	sub_832C1918(ctx, base);
loc_832B946C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832a1d18
	ctx.lr = 0x832B9474;
	sub_832A1D18(ctx, base);
loc_832B9474:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_832B9480:
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832B94A4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B94B0"))) PPC_WEAK_FUNC(sub_832B94B0);
PPC_FUNC_IMPL(__imp__sub_832B94B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// subf r10,r3,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r3.s64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r10,r10,-32
	ctx.r10.s64 = ctx.r10.s64 + -32;
	// twllei r11,0
	// divwu r3,r10,r11
	ctx.r3.u32 = PPCDivide(ctx.r10.u32, ctx.r11.u32);
	// cmplw cr6,r3,r9
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, xer);
	// bge cr6,0x832b94dc
	if (!cr6.lt) goto loc_832B94DC;
	// mullw r11,r3,r11
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_832B94DC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B94E4"))) PPC_WEAK_FUNC(sub_832B94E4);
PPC_FUNC_IMPL(__imp__sub_832B94E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B94E8"))) PPC_WEAK_FUNC(sub_832B94E8);
PPC_FUNC_IMPL(__imp__sub_832B94E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addic. r7,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	ctx.r7.s64 = ctx.r5.s64 + -1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// li r8,-2
	ctx.r8.s64 = -2;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r4,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r5,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r5.u32);
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// beq 0x832b953c
	if (cr0.eq) goto loc_832B953C;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
loc_832B9528:
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// bdnz 0x832b9528
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832B9528;
loc_832B953C:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B9548"))) PPC_WEAK_FUNC(sub_832B9548);
PPC_FUNC_IMPL(__imp__sub_832B9548) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x832B9550;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x832b958c
	if (!cr6.eq) goto loc_832B958C;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,-22112
	ctx.r4.s64 = ctx.r11.s64 + -22112;
	// addi r3,r10,27668
	ctx.r3.s64 = ctx.r10.s64 + 27668;
	// bl 0x83298338
	ctx.lr = 0x832B9580;
	sub_83298338(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_832B958C:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x832b95b4
	if (!cr6.eq) goto loc_832B95B4;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,-22136
	ctx.r4.s64 = ctx.r11.s64 + -22136;
	// addi r3,r10,27668
	ctx.r3.s64 = ctx.r10.s64 + 27668;
	// bl 0x83298338
	ctx.lr = 0x832B95A8;
	sub_83298338(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_832B95B4:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x832b9694
	if (cr6.eq) goto loc_832B9694;
	// clrlwi r11,r31,30
	ctx.r11.u64 = ctx.r31.u32 & 0x3;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832b9694
	if (!cr6.eq) goto loc_832B9694;
	// cmplwi cr6,r29,8
	cr6.compare<uint32_t>(ctx.r29.u32, 8, xer);
	// blt cr6,0x832b9684
	if (cr6.lt) goto loc_832B9684;
	// addi r27,r29,-1
	ctx.r27.s64 = ctx.r29.s64 + -1;
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// or r11,r27,r29
	ctx.r11.u64 = ctx.r27.u64 | ctx.r29.u64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bne cr6,0x832b9684
	if (!cr6.eq) goto loc_832B9684;
	// li r11,-2
	ctx.r11.s64 = -2;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// blt cr6,0x832b960c
	if (cr6.lt) goto loc_832B960C;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,-22176
	ctx.r4.s64 = ctx.r11.s64 + -22176;
	// addi r3,r10,27668
	ctx.r3.s64 = ctx.r10.s64 + 27668;
	// bl 0x83298338
	ctx.lr = 0x832B9608;
	sub_83298338(ctx, base);
	// li r28,-3
	ctx.r28.s64 = -3;
loc_832B960C:
	// addi r31,r31,40
	ctx.r31.s64 = ctx.r31.s64 + 40;
	// and r11,r27,r31
	ctx.r11.u64 = ctx.r27.u64 & ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832b9624
	if (cr6.eq) goto loc_832B9624;
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_832B9624:
	// addi r30,r31,-40
	ctx.r30.s64 = ctx.r31.s64 + -40;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83294018
	ctx.lr = 0x832B9638;
	sub_83294018(ctx, base);
	// add r11,r26,r29
	ctx.r11.u64 = ctx.r26.u64 + ctx.r29.u64;
	// stw r28,-36(r31)
	PPC_STORE_U32(ctx.r31.u32 + -36, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// stw r28,-32(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32, ctx.r28.u32);
	// stw r28,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r28.u32);
	// andc r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 & ~ctx.r27.u64;
	// stw r10,-40(r31)
	PPC_STORE_U32(ctx.r31.u32 + -40, ctx.r10.u32);
	// bl 0x832b94e8
	ctx.lr = 0x832B965C;
	sub_832B94E8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x832a1350
	ctx.lr = 0x832B966C;
	sub_832A1350(ctx, base);
	// subfic r9,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r3.s64;
	// rlwinm r8,r3,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// addme r7,r8
	temp.u8 = (ctx.r8.u32 != 0) | (xer.ca != 0);
	ctx.r7.s64 = ctx.r8.s64 + xer.ca - 1;
	xer.ca = temp.u8;
	// and r3,r7,r3
	ctx.r3.u64 = ctx.r7.u64 & ctx.r3.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_832B9684:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-22204
	ctx.r4.s64 = ctx.r11.s64 + -22204;
	// b 0x832b96a0
	goto loc_832B96A0;
loc_832B9694:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,-22224
	ctx.r4.s64 = ctx.r11.s64 + -22224;
loc_832B96A0:
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r3,r10,27668
	ctx.r3.s64 = ctx.r10.s64 + 27668;
	// bl 0x83298338
	ctx.lr = 0x832B96AC;
	sub_83298338(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B96B8"))) PPC_WEAK_FUNC(sub_832B96B8);
PPC_FUNC_IMPL(__imp__sub_832B96B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x832a13d8
	sub_832A13D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B96BC"))) PPC_WEAK_FUNC(sub_832B96BC);
PPC_FUNC_IMPL(__imp__sub_832B96BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B96C0"))) PPC_WEAK_FUNC(sub_832B96C0);
PPC_FUNC_IMPL(__imp__sub_832B96C0) {
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
	// rlwinm r11,r3,0,9,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x7E0000;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x832b9710
	if (cr6.eq) goto loc_832B9710;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,-22088
	ctx.r4.s64 = ctx.r11.s64 + -22088;
	// addi r3,r10,27668
	ctx.r3.s64 = ctx.r10.s64 + 27668;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x83298338
	ctx.lr = 0x832B9708;
	sub_83298338(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832b9750
	goto loc_832B9750;
loc_832B9710:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a1510
	ctx.lr = 0x832B971C;
	sub_832A1510(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832b974c
	if (!cr6.eq) goto loc_832B974C;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,26060
	ctx.r4.s64 = ctx.r11.s64 + 26060;
	// addi r3,r10,27668
	ctx.r3.s64 = ctx.r10.s64 + 27668;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x83298338
	ctx.lr = 0x832B9744;
	sub_83298338(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x832b9750
	goto loc_832B9750;
loc_832B974C:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_832B9750:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B9768"))) PPC_WEAK_FUNC(sub_832B9768);
PPC_FUNC_IMPL(__imp__sub_832B9768) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r4,r11,-22056
	ctx.r4.s64 = ctx.r11.s64 + -22056;
	// bl 0x832b96c0
	ctx.lr = 0x832B9784;
	sub_832B96C0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832b97a4
	if (!cr6.eq) goto loc_832B97A4;
loc_832B978C:
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
loc_832B97A4:
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r8,-1
	cr6.compare<int32_t>(ctx.r8.s32, -1, xer);
	// beq cr6,0x832b978c
	if (cr6.eq) goto loc_832B978C;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// blt cr6,0x832b97c4
	if (cr6.lt) goto loc_832B97C4;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x832b97d4
	goto loc_832B97D4;
loc_832B97C4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r9,r11,32
	ctx.r9.s64 = ctx.r11.s64 + 32;
loc_832B97D4:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r7,12(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r7,-1
	cr6.compare<int32_t>(ctx.r7.s32, -1, xer);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// bne cr6,0x832b97ec
	if (!cr6.eq) goto loc_832B97EC;
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
loc_832B97EC:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x832b981c
	if (cr6.eq) goto loc_832B981C;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x832b9808
	if (cr6.lt) goto loc_832B9808;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x832b9818
	goto loc_832B9818;
loc_832B9808:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mullw r10,r10,r11
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
loc_832B9818:
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
loc_832B981C:
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// lwz r7,28(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge cr6,0x832b9848
	if (!cr6.lt) goto loc_832B9848;
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
loc_832B9848:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r31,r9,8
	ctx.r31.s64 = ctx.r9.s64 + 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-8
	ctx.r5.s64 = ctx.r11.s64 + -8;
	// bl 0x83294018
	ctx.lr = 0x832B9860;
	sub_83294018(ctx, base);
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

__attribute__((alias("__imp__sub_832B9878"))) PPC_WEAK_FUNC(sub_832B9878);
PPC_FUNC_IMPL(__imp__sub_832B9878) {
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
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r30,r11,-22028
	ctx.r30.s64 = ctx.r11.s64 + -22028;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x832b96c0
	ctx.lr = 0x832B98A0;
	sub_832B96C0(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832b99b4
	if (cr6.eq) goto loc_832B99B4;
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// bl 0x832b94b0
	ctx.lr = 0x832B98B4;
	sub_832B94B0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x832b98d0
	if (!cr6.lt) goto loc_832B98D0;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r11,-22040
	ctx.r3.s64 = ctx.r11.s64 + -22040;
	// li r4,297
	ctx.r4.s64 = 297;
	// bl 0x83298458
	ctx.lr = 0x832B98D0;
	sub_83298458(ctx, base);
loc_832B98D0:
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r9,-2
	cr6.compare<int32_t>(ctx.r9.s32, -2, xer);
	// bne cr6,0x832b98f0
	if (!cr6.eq) goto loc_832B98F0;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r11,-22040
	ctx.r3.s64 = ctx.r11.s64 + -22040;
	// li r4,298
	ctx.r4.s64 = 298;
	// bl 0x83298458
	ctx.lr = 0x832B98F0;
	sub_83298458(ctx, base);
loc_832B98F0:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r9,-1
	cr6.compare<int32_t>(ctx.r9.s32, -1, xer);
	// bne cr6,0x832b9904
	if (!cr6.eq) goto loc_832B9904;
	// stw r10,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r10.u32);
	// b 0x832b992c
	goto loc_832B992C;
loc_832B9904:
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// blt cr6,0x832b9918
	if (cr6.lt) goto loc_832B9918;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x832b9928
	goto loc_832B9928;
loc_832B9918:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
loc_832B9928:
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_832B992C:
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x832b993c
	if (!cr6.eq) goto loc_832B993C;
	// stw r9,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r9.u32);
	// b 0x832b9964
	goto loc_832B9964;
loc_832B993C:
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// blt cr6,0x832b9950
	if (cr6.lt) goto loc_832B9950;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x832b9960
	goto loc_832B9960;
loc_832B9950:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
loc_832B9960:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_832B9964:
	// li r10,-2
	ctx.r10.s64 = -2;
	// subf r11,r8,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r8.s64;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r9,20(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// addi r10,r11,-32
	ctx.r10.s64 = ctx.r11.s64 + -32;
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// divwu r11,r10,r9
	ctx.r11.u32 = PPCDivide(ctx.r10.u32, ctx.r9.u32);
	// twllei r9,0
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// bge cr6,0x832b99a0
	if (!cr6.lt) goto loc_832B99A0;
	// mullw r9,r11,r9
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x832b99a4
	if (cr6.eq) goto loc_832B99A4;
loc_832B99A0:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_832B99A4:
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r11,20(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20, ctx.r11.u32);
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stw r11,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r11.u32);
loc_832B99B4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B99CC"))) PPC_WEAK_FUNC(sub_832B99CC);
PPC_FUNC_IMPL(__imp__sub_832B99CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B99D0"))) PPC_WEAK_FUNC(sub_832B99D0);
PPC_FUNC_IMPL(__imp__sub_832B99D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// addi r4,r11,-21988
	ctx.r4.s64 = ctx.r11.s64 + -21988;
	// bl 0x832b96c0
	ctx.lr = 0x832B9A04;
	sub_832B96C0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832b9ee4
	if (cr6.eq) goto loc_832B9EE4;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r5,124(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// cmplwi cr6,r5,12
	cr6.compare<uint32_t>(ctx.r5.u32, 12, xer);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bgt cr6,0x832b9ed0
	if (cr6.gt) goto loc_832B9ED0;
	// lis r12,-31956
	ctx.r12.s64 = -2094268416;
	// rlwinm r0,r5,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-26052
	ctx.r12.s64 = ctx.r12.s64 + -26052;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r5.u32) {
	case 0:
		goto loc_832B9A70;
	case 1:
		goto loc_832B9AA0;
	case 2:
		goto loc_832B9AC8;
	case 3:
		goto loc_832B9B10;
	case 4:
		goto loc_832B9BA8;
	case 5:
		goto loc_832B9C28;
	case 6:
		goto loc_832B9C3C;
	case 7:
		goto loc_832B9CA0;
	case 8:
		goto loc_832B9D10;
	case 9:
		goto loc_832B9D60;
	case 10:
		goto loc_832B9DCC;
	case 11:
		goto loc_832B9E38;
	case 12:
		goto loc_832B9E84;
	default:
		return;
	}
	// lwz r25,-26000(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26000);
	// lwz r25,-25952(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -25952);
	// lwz r25,-25912(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -25912);
	// lwz r25,-25840(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -25840);
	// lwz r25,-25688(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -25688);
	// lwz r25,-25560(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -25560);
	// lwz r25,-25540(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -25540);
	// lwz r25,-25440(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -25440);
	// lwz r25,-25328(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -25328);
	// lwz r25,-25248(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -25248);
	// lwz r25,-25140(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -25140);
	// lwz r25,-25032(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -25032);
	// lwz r25,-24956(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24956);
loc_832B9A70:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r9,r11,7
	ctx.r9.s64 = ctx.r11.s64 + 7;
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r9,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// subf r7,r8,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r8.s64;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_832B9AA0:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r9,r11,7
	ctx.r9.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r9,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_832B9AC8:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r9,r11,7
	ctx.r9.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r9,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r6,28(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// subf r5,r6,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r6.s64;
	// stw r5,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r5.u32);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// stw r11,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_832B9B10:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r9,r11,7
	ctx.r9.s64 = ctx.r11.s64 + 7;
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// twllei r10,0
	// rlwinm r11,r9,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r5,r11,7
	ctx.r5.s64 = ctx.r11.s64 + 7;
	// lwz r7,-4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// rlwinm r11,r5,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r8,r11,-8
	ctx.r8.s64 = ctx.r11.s64 + -8;
	// subf r11,r3,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r3.s64;
	// addi r9,r11,-32
	ctx.r9.s64 = ctx.r11.s64 + -32;
	// divwu r11,r9,r10
	ctx.r11.u32 = PPCDivide(ctx.r9.u32, ctx.r10.u32);
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, xer);
	// bge cr6,0x832b9b68
	if (!cr6.lt) goto loc_832B9B68;
	// mullw r10,r11,r10
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x832b9b68
	if (!cr6.eq) goto loc_832B9B68;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x832b9b80
	if (!cr6.lt) goto loc_832B9B80;
loc_832B9B68:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_832B9B80:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// li r10,-2
	ctx.r10.s64 = -2;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r11,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// stb r11,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_832B9BA8:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r8,r11,7
	ctx.r8.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r8,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r7,r11,7
	ctx.r7.s64 = ctx.r11.s64 + 7;
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// rlwinm r11,r7,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x832b9be8
	if (!cr6.lt) goto loc_832B9BE8;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// add r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addic. r11,r8,32
	xer.ca = ctx.r8.u32 > 4294967263;
	ctx.r11.s64 = ctx.r8.s64 + 32;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x832b9c00
	if (!cr0.eq) goto loc_832B9C00;
loc_832B9BE8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_832B9C00:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r9,-2
	ctx.r9.s64 = -2;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// addic r7,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// subfe r11,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r7.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_832B9C28:
	// bl 0x832b94e8
	ctx.lr = 0x832B9C2C;
	sub_832B94E8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_832B9C3C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r9,r11,7
	ctx.r9.s64 = ctx.r11.s64 + 7;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// twllei r10,0
	// rlwinm r11,r9,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r6,r11,7
	ctx.r6.s64 = ctx.r11.s64 + 7;
	// lwz r8,-4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// rlwinm r11,r6,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r11,r3,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r3.s64;
	// addi r9,r11,-40
	ctx.r9.s64 = ctx.r11.s64 + -40;
	// divwu r11,r9,r10
	ctx.r11.u32 = PPCDivide(ctx.r9.u32, ctx.r10.u32);
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// bge cr6,0x832b9c88
	if (!cr6.lt) goto loc_832B9C88;
	// mullw r10,r11,r10
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x832b9c8c
	if (cr6.eq) goto loc_832B9C8C;
loc_832B9C88:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_832B9C8C:
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_832B9CA0:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r8,r11,7
	ctx.r8.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r8,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r7,r11,7
	ctx.r7.s64 = ctx.r11.s64 + 7;
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// rlwinm r11,r7,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x832b9ce0
	if (!cr6.lt) goto loc_832B9CE0;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// add r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addic. r11,r8,32
	xer.ca = ctx.r8.u32 > 4294967263;
	ctx.r11.s64 = ctx.r8.s64 + 32;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x832b9cf8
	if (!cr0.eq) goto loc_832B9CF8;
loc_832B9CE0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_832B9CF8:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_832B9D10:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r8,r11,7
	ctx.r8.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r8,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r7,r11,7
	ctx.r7.s64 = ctx.r11.s64 + 7;
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// rlwinm r11,r7,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x832b9ce0
	if (!cr6.lt) goto loc_832B9CE0;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// add r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addic. r11,r8,32
	xer.ca = ctx.r8.u32 > 4294967263;
	ctx.r11.s64 = ctx.r8.s64 + 32;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x832b9ce0
	if (cr0.eq) goto loc_832B9CE0;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,-2
	cr6.compare<int32_t>(ctx.r9.s32, -2, xer);
	// bne cr6,0x832b9cf8
	if (!cr6.eq) goto loc_832B9CF8;
	// b 0x832b9ce0
	goto loc_832B9CE0;
loc_832B9D60:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r9,r10,7
	ctx.r9.s64 = ctx.r10.s64 + 7;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r9,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bge cr6,0x832b9d94
	if (!cr6.lt) goto loc_832B9D94;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// add r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addic. r11,r8,32
	xer.ca = ctx.r8.u32 > 4294967263;
	ctx.r11.s64 = ctx.r8.s64 + 32;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x832b9dac
	if (!cr0.eq) goto loc_832B9DAC;
loc_832B9D94:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_832B9DAC:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_832B9DCC:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r9,r10,7
	ctx.r9.s64 = ctx.r10.s64 + 7;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r9,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bge cr6,0x832b9e00
	if (!cr6.lt) goto loc_832B9E00;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// add r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addic. r11,r8,32
	xer.ca = ctx.r8.u32 > 4294967263;
	ctx.r11.s64 = ctx.r8.s64 + 32;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x832b9e18
	if (!cr0.eq) goto loc_832B9E18;
loc_832B9E00:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_832B9E18:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_832B9E38:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r8,r11,7
	ctx.r8.s64 = ctx.r11.s64 + 7;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm r10,r8,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF8;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bge cr6,0x832b9d94
	if (!cr6.lt) goto loc_832B9D94;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// add r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addic. r11,r8,32
	xer.ca = ctx.r8.u32 > 4294967263;
	ctx.r11.s64 = ctx.r8.s64 + 32;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x832b9dac
	if (!cr0.eq) goto loc_832B9DAC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_832B9E84:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r8,r11,7
	ctx.r8.s64 = ctx.r11.s64 + 7;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm r10,r8,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF8;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bge cr6,0x832b9e00
	if (!cr6.lt) goto loc_832B9E00;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// add r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addic. r11,r8,32
	xer.ca = ctx.r8.u32 > 4294967263;
	ctx.r11.s64 = ctx.r8.s64 + 32;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne 0x832b9e18
	if (!cr0.eq) goto loc_832B9E18;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_832B9ED0:
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,-22012
	ctx.r4.s64 = ctx.r11.s64 + -22012;
	// addi r3,r10,27668
	ctx.r3.s64 = ctx.r10.s64 + 27668;
	// bl 0x83298338
	ctx.lr = 0x832B9EE4;
	sub_83298338(ctx, base);
loc_832B9EE4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B9EF4"))) PPC_WEAK_FUNC(sub_832B9EF4);
PPC_FUNC_IMPL(__imp__sub_832B9EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B9EF8"))) PPC_WEAK_FUNC(sub_832B9EF8);
PPC_FUNC_IMPL(__imp__sub_832B9EF8) {
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
	// bl 0x832a5950
	ctx.lr = 0x832B9F08;
	sub_832A5950(ctx, base);
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r3,-32528(r11)
	PPC_STORE_U32(ctx.r11.u32 + -32528, ctx.r3.u32);
	// bgt cr6,0x832b9f2c
	if (cr6.gt) goto loc_832B9F2C;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,-21972
	ctx.r4.s64 = ctx.r11.s64 + -21972;
	// addi r3,r10,27400
	ctx.r3.s64 = ctx.r10.s64 + 27400;
	// bl 0x832982e8
	ctx.lr = 0x832B9F2C;
	sub_832982E8(ctx, base);
loc_832B9F2C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832B9F3C"))) PPC_WEAK_FUNC(sub_832B9F3C);
PPC_FUNC_IMPL(__imp__sub_832B9F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B9F40"))) PPC_WEAK_FUNC(sub_832B9F40);
PPC_FUNC_IMPL(__imp__sub_832B9F40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// lwz r3,-32528(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32528);
	// b 0x832a59f0
	sub_832A59F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B9F4C"))) PPC_WEAK_FUNC(sub_832B9F4C);
PPC_FUNC_IMPL(__imp__sub_832B9F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B9F50"))) PPC_WEAK_FUNC(sub_832B9F50);
PPC_FUNC_IMPL(__imp__sub_832B9F50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832B9F58;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r30,-31747
	ctx.r30.s64 = -2080571392;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,-32524(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32524);
	// bl 0x832b99d0
	ctx.lr = 0x832B9F80;
	sub_832B99D0(ctx, base);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x832b9fcc
	if (cr6.eq) goto loc_832B9FCC;
loc_832B9F8C:
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, xer);
	// bne cr6,0x832b9fac
	if (!cr6.eq) goto loc_832B9FAC;
	// addi r4,r31,140
	ctx.r4.s64 = ctx.r31.s64 + 140;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83296d78
	ctx.lr = 0x832B9FA4;
	sub_83296D78(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x832b9fd8
	if (cr6.eq) goto loc_832B9FD8;
loc_832B9FAC:
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,-32524(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32524);
	// bl 0x832b99d0
	ctx.lr = 0x832B9FC0;
	sub_832B99D0(ctx, base);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x832b9f8c
	if (!cr6.eq) goto loc_832B9F8C;
loc_832B9FCC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_832B9FD8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832B9FE4"))) PPC_WEAK_FUNC(sub_832B9FE4);
PPC_FUNC_IMPL(__imp__sub_832B9FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832B9FE8"))) PPC_WEAK_FUNC(sub_832B9FE8);
PPC_FUNC_IMPL(__imp__sub_832B9FE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832B9FF0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x832ba03c
	if (cr6.eq) goto loc_832BA03C;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_832BA020:
	// rlwinm r8,r31,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// subf r8,r31,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r31.s64;
	// add r31,r8,r11
	ctx.r31.u64 = ctx.r8.u64 + ctx.r11.u64;
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x832ba020
	if (!cr6.eq) goto loc_832BA020;
loc_832BA03C:
	// lis r29,-31747
	ctx.r29.s64 = -2080571392;
	// lwz r3,-32528(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32528);
	// bl 0x832a5a38
	ctx.lr = 0x832BA048;
	sub_832A5A38(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x832b9f50
	ctx.lr = 0x832BA054;
	sub_832B9F50(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832ba08c
	if (cr6.eq) goto loc_832BA08C;
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// lis r10,-32761
	ctx.r10.s64 = -2147024896;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// ori r8,r10,17
	ctx.r8.u64 = ctx.r10.u64 | 17;
	// stw r9,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r9.u32);
	// stw r8,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r8.u32);
	// lwz r3,-32528(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32528);
	// bl 0x832a5ae8
	ctx.lr = 0x832BA080;
	sub_832A5AE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_832BA08C:
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// lwz r3,-32524(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32524);
	// bl 0x832b9768
	ctx.lr = 0x832BA098;
	sub_832B9768(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832ba0cc
	if (cr6.eq) goto loc_832BA0CC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r31,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r31.u32);
	// stb r27,140(r3)
	PPC_STORE_U8(ctx.r3.u32 + 140, ctx.r27.u8);
	// stw r11,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r11.u32);
	// stw r27,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r27.u32);
	// lwz r3,-32528(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32528);
	// bl 0x832a5ae8
	ctx.lr = 0x832BA0C0;
	sub_832A5AE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_832BA0CC:
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r10,r11,12
	ctx.r10.u64 = ctx.r11.u64 | 12;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// lwz r3,-32528(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32528);
	// bl 0x832a5ae8
	ctx.lr = 0x832BA0E0;
	sub_832A5AE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BA0EC"))) PPC_WEAK_FUNC(sub_832BA0EC);
PPC_FUNC_IMPL(__imp__sub_832BA0EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BA0F0"))) PPC_WEAK_FUNC(sub_832BA0F0);
PPC_FUNC_IMPL(__imp__sub_832BA0F0) {
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
	// lwz r3,108(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832ba118
	if (cr6.eq) goto loc_832BA118;
	// bl 0x832a1d18
	ctx.lr = 0x832BA118;
	sub_832A1D18(ctx, base);
loc_832BA118:
	// lis r30,-31747
	ctx.r30.s64 = -2080571392;
	// lwz r3,-32528(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32528);
	// bl 0x832a5a38
	ctx.lr = 0x832BA124;
	sub_832A5A38(ctx, base);
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-32524(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32524);
	// bl 0x832b9878
	ctx.lr = 0x832BA134;
	sub_832B9878(ctx, base);
	// lwz r3,-32528(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32528);
	// bl 0x832a5ae8
	ctx.lr = 0x832BA13C;
	sub_832A5AE8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832BA154"))) PPC_WEAK_FUNC(sub_832BA154);
PPC_FUNC_IMPL(__imp__sub_832BA154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BA158"))) PPC_WEAK_FUNC(sub_832BA158);
PPC_FUNC_IMPL(__imp__sub_832BA158) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832BA160;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,12(r5)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bne cr6,0x832ba1f0
	if (!cr6.eq) goto loc_832BA1F0;
	// li r29,0
	ctx.r29.s64 = 0;
loc_832BA180:
	// li r5,108
	ctx.r5.s64 = 108;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83293ec8
	ctx.lr = 0x832BA190;
	sub_83293EC8(ctx, base);
	// lhz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 24);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// sth r11,124(r31)
	PPC_STORE_U16(ctx.r31.u32 + 124, ctx.r11.u16);
	// lhz r9,26(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 26);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// sth r9,126(r31)
	PPC_STORE_U16(ctx.r31.u32 + 126, ctx.r9.u16);
	// stw r27,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r27.u32);
	// stw r29,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r29.u32);
	// lwz r8,16(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r8,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r8.u32);
	// lwz r7,20(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r7,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r7.u32);
	// bctrl 
	ctx.lr = 0x832BA1C8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x832ba22c
	if (cr6.lt) goto loc_832BA22C;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r31,140
	ctx.r3.s64 = ctx.r31.s64 + 140;
	// bl 0x83296be0
	ctx.lr = 0x832BA1E4;
	sub_83296BE0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_832BA1F0:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x832a1cb0
	ctx.lr = 0x832BA200;
	sub_832A1CB0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832ba21c
	if (cr6.eq) goto loc_832BA21C;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83294018
	ctx.lr = 0x832BA218;
	sub_83294018(ctx, base);
	// b 0x832ba180
	goto loc_832BA180;
loc_832BA21C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,12
	ctx.r3.u64 = ctx.r3.u64 | 12;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_832BA22C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x832ba23c
	if (cr6.eq) goto loc_832BA23C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832a1d18
	ctx.lr = 0x832BA23C;
	sub_832A1D18(ctx, base);
loc_832BA23C:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BA250"))) PPC_WEAK_FUNC(sub_832BA250);
PPC_FUNC_IMPL(__imp__sub_832BA250) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,108(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832BA278;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832ba288
	if (cr6.eq) goto loc_832BA288;
	// bl 0x832a1d18
	ctx.lr = 0x832BA288;
	sub_832A1D18(ctx, base);
loc_832BA288:
	// lis r30,-31747
	ctx.r30.s64 = -2080571392;
	// lwz r3,-32528(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32528);
	// bl 0x832a5a38
	ctx.lr = 0x832BA294;
	sub_832A5A38(ctx, base);
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,-32524(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32524);
	// bl 0x832b9878
	ctx.lr = 0x832BA2A4;
	sub_832B9878(ctx, base);
	// lwz r3,-32528(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32528);
	// bl 0x832a5ae8
	ctx.lr = 0x832BA2AC;
	sub_832A5AE8(ctx, base);
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

__attribute__((alias("__imp__sub_832BA2C8"))) PPC_WEAK_FUNC(sub_832BA2C8);
PPC_FUNC_IMPL(__imp__sub_832BA2C8) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r4,156
	ctx.r4.s64 = 156;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x832b9548
	ctx.lr = 0x832BA2F4;
	sub_832B9548(ctx, base);
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r3,-32524(r11)
	PPC_STORE_U32(ctx.r11.u32 + -32524, ctx.r3.u32);
	// bgt cr6,0x832ba318
	if (cr6.gt) goto loc_832BA318;
	// lis r11,-32220
	ctx.r11.s64 = -2111569920;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,-21948
	ctx.r4.s64 = ctx.r11.s64 + -21948;
	// addi r3,r10,27400
	ctx.r3.s64 = ctx.r10.s64 + 27400;
	// bl 0x832982e8
	ctx.lr = 0x832BA318;
	sub_832982E8(ctx, base);
loc_832BA318:
	// mulli r11,r30,168
	ctx.r11.s64 = ctx.r30.s64 * 168;
	// addi r11,r11,51
	ctx.r11.s64 = ctx.r11.s64 + 51;
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
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

__attribute__((alias("__imp__sub_832BA340"))) PPC_WEAK_FUNC(sub_832BA340);
PPC_FUNC_IMPL(__imp__sub_832BA340) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31747
	ctx.r11.s64 = -2080571392;
	// lwz r3,-32524(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32524);
	// b 0x832b96b8
	sub_832B96B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BA34C"))) PPC_WEAK_FUNC(sub_832BA34C);
PPC_FUNC_IMPL(__imp__sub_832BA34C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BA350"))) PPC_WEAK_FUNC(sub_832BA350);
PPC_FUNC_IMPL(__imp__sub_832BA350) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x832BA358;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x832a1350
	ctx.lr = 0x832BA370;
	sub_832A1350(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x832b9fe8
	ctx.lr = 0x832BA388;
	sub_832B9FE8(ctx, base);
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bge cr6,0x832ba3d0
	if (!cr6.lt) goto loc_832BA3D0;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq cr6,0x832ba3a8
	if (cr6.eq) goto loc_832BA3A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a13d8
	ctx.lr = 0x832BA3A8;
	sub_832A13D8(ctx, base);
loc_832BA3A8:
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r10,r11,17
	ctx.r10.u64 = ctx.r11.u64 | 17;
	// cmpw cr6,r28,r10
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, xer);
	// bne cr6,0x832ba3c4
	if (!cr6.eq) goto loc_832BA3C4;
	// lwz r3,112(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832BA3C4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832BA3D0:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne cr6,0x832ba3f0
	if (!cr6.eq) goto loc_832BA3F0;
	// bl 0x832ba0f0
	ctx.lr = 0x832BA3E0;
	sub_832BA0F0(ctx, base);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,12
	ctx.r3.u64 = ctx.r3.u64 | 12;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832BA3F0:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x832ba158
	ctx.lr = 0x832BA3FC;
	sub_832BA158(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x832ba424
	if (!cr6.lt) goto loc_832BA424;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832ba0f0
	ctx.lr = 0x832BA410;
	sub_832BA0F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a13d8
	ctx.lr = 0x832BA418;
	sub_832A13D8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832BA424:
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-23984
	ctx.r4.s64 = ctx.r11.s64 + -23984;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832a0cc0
	ctx.lr = 0x832BA438;
	sub_832A0CC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BA444"))) PPC_WEAK_FUNC(sub_832BA444);
PPC_FUNC_IMPL(__imp__sub_832BA444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BA448"))) PPC_WEAK_FUNC(sub_832BA448);
PPC_FUNC_IMPL(__imp__sub_832BA448) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x832ba158
	sub_832BA158(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BA454"))) PPC_WEAK_FUNC(sub_832BA454);
PPC_FUNC_IMPL(__imp__sub_832BA454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BA458"))) PPC_WEAK_FUNC(sub_832BA458);
PPC_FUNC_IMPL(__imp__sub_832BA458) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,108(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x832BA47C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832ba48c
	if (cr6.eq) goto loc_832BA48C;
	// bl 0x832a1d18
	ctx.lr = 0x832BA48C;
	sub_832A1D18(ctx, base);
loc_832BA48C:
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

__attribute__((alias("__imp__sub_832BA4A0"))) PPC_WEAK_FUNC(sub_832BA4A0);
PPC_FUNC_IMPL(__imp__sub_832BA4A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832BA4A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x832ba4e8
	if (cr6.eq) goto loc_832BA4E8;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_832BA4CC:
	// rlwinm r8,r31,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// subf r8,r31,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r31.s64;
	// add r31,r8,r11
	ctx.r31.u64 = ctx.r8.u64 + ctx.r11.u64;
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x832ba4cc
	if (!cr6.eq) goto loc_832BA4CC;
loc_832BA4E8:
	// lis r29,-31747
	ctx.r29.s64 = -2080571392;
	// lwz r3,-32528(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32528);
	// bl 0x832a5a38
	ctx.lr = 0x832BA4F4;
	sub_832A5A38(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x832b9f50
	ctx.lr = 0x832BA504;
	sub_832B9F50(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832ba554
	if (cr6.eq) goto loc_832BA554;
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// lwz r30,112(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x832ba52c
	if (cr6.eq) goto loc_832BA52C;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ble cr6,0x832ba558
	if (!cr6.gt) goto loc_832BA558;
	// ori r31,r31,16
	ctx.r31.u64 = ctx.r31.u64 | 16;
	// b 0x832ba55c
	goto loc_832BA55C;
loc_832BA52C:
	// lwz r11,132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832ba54c
	if (cr6.eq) goto loc_832BA54C;
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r11.u32);
	// bne 0x832ba54c
	if (!cr0.eq) goto loc_832BA54C;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,140(r3)
	PPC_STORE_U8(ctx.r3.u32 + 140, ctx.r10.u8);
loc_832BA54C:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x832ba55c
	goto loc_832BA55C;
loc_832BA554:
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
loc_832BA558:
	// ori r31,r31,19
	ctx.r31.u64 = ctx.r31.u64 | 19;
loc_832BA55C:
	// lwz r3,-32528(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32528);
	// bl 0x832a5ae8
	ctx.lr = 0x832BA564;
	sub_832A5AE8(ctx, base);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne cr6,0x832ba574
	if (!cr6.eq) goto loc_832BA574;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832a13d8
	ctx.lr = 0x832BA574;
	sub_832A13D8(ctx, base);
loc_832BA574:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BA580"))) PPC_WEAK_FUNC(sub_832BA580);
PPC_FUNC_IMPL(__imp__sub_832BA580) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832BA588;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x832ba5c8
	if (cr6.eq) goto loc_832BA5C8;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_832BA5AC:
	// rlwinm r8,r31,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// subf r8,r31,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r31.s64;
	// add r31,r8,r11
	ctx.r31.u64 = ctx.r8.u64 + ctx.r11.u64;
	// extsb r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x832ba5ac
	if (!cr6.eq) goto loc_832BA5AC;
loc_832BA5C8:
	// lis r30,-31747
	ctx.r30.s64 = -2080571392;
	// lwz r3,-32528(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32528);
	// bl 0x832a5a38
	ctx.lr = 0x832BA5D4;
	sub_832A5A38(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832b9f50
	ctx.lr = 0x832BA5E0;
	sub_832B9F50(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832ba604
	if (cr6.eq) goto loc_832BA604;
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// stw r11,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// and r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 & ctx.r31.u64;
loc_832BA604:
	// lwz r3,-32528(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -32528);
	// bl 0x832a5ae8
	ctx.lr = 0x832BA60C;
	sub_832A5AE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BA618"))) PPC_WEAK_FUNC(sub_832BA618);
PPC_FUNC_IMPL(__imp__sub_832BA618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832BA620;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31747
	ctx.r29.s64 = -2080571392;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,-32528(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32528);
	// bl 0x832a5a38
	ctx.lr = 0x832BA634;
	sub_832A5A38(ctx, base);
	// lwz r11,128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// addi r31,r11,-1
	ctx.r31.s64 = ctx.r11.s64 + -1;
	// stw r31,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r31.u32);
	// lwz r3,-32528(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32528);
	// bl 0x832a5ae8
	ctx.lr = 0x832BA648;
	sub_832A5AE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BA654"))) PPC_WEAK_FUNC(sub_832BA654);
PPC_FUNC_IMPL(__imp__sub_832BA654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BA658"))) PPC_WEAK_FUNC(sub_832BA658);
PPC_FUNC_IMPL(__imp__sub_832BA658) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-13381
	ctx.r11.s64 = -876937216;
	// lis r10,25242
	ctx.r10.s64 = 1654259712;
	// lis r9,-28327
	ctx.r9.s64 = -1856438272;
	// lis r8,5423
	ctx.r8.s64 = 355401728;
	// lis r7,26419
	ctx.r7.s64 = 1731395584;
	// lis r6,-29004
	ctx.r6.s64 = -1900806144;
	// lis r5,-9460
	ctx.r5.s64 = -619970560;
	// lis r4,18357
	ctx.r4.s64 = 1203044352;
	// ori r11,r11,40285
	ctx.r11.u64 = ctx.r11.u64 | 40285;
	// ori r10,r10,10538
	ctx.r10.u64 = ctx.r10.u64 | 10538;
	// ori r9,r9,346
	ctx.r9.u64 = ctx.r9.u64 | 346;
	// ori r8,r8,60632
	ctx.r8.u64 = ctx.r8.u64 | 60632;
	// ori r7,r7,9831
	ctx.r7.u64 = ctx.r7.u64 | 9831;
	// ori r6,r6,19079
	ctx.r6.u64 = ctx.r6.u64 | 19079;
	// ori r5,r5,11789
	ctx.r5.u64 = ctx.r5.u64 | 11789;
	// ori r4,r4,18461
	ctx.r4.u64 = ctx.r4.u64 | 18461;
	// rldicr r11,r11,32,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000;
	// rldicr r10,r10,32,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000;
	// rldicr r9,r9,32,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000;
	// rldicr r8,r8,32,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000;
	// rldicr r7,r7,32,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000;
	// rldicr r6,r6,32,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000;
	// rldicr r5,r5,32,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFF00000000;
	// rldicr r4,r4,32,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF00000000;
	// oris r11,r11,49413
	ctx.r11.u64 = ctx.r11.u64 | 3238330368;
	// oris r10,r10,13948
	ctx.r10.u64 = ctx.r10.u64 | 914096128;
	// oris r9,r9,12400
	ctx.r9.u64 = ctx.r9.u64 | 812646400;
	// oris r8,r8,63246
	ctx.r8.u64 = ctx.r8.u64 | 4144889856;
	// oris r7,r7,65472
	ctx.r7.u64 = ctx.r7.u64 | 4290772992;
	// oris r6,r6,26712
	ctx.r6.u64 = ctx.r6.u64 | 1750597632;
	// oris r5,r5,25849
	ctx.r5.u64 = ctx.r5.u64 | 1694040064;
	// oris r4,r4,48890
	ctx.r4.u64 = ctx.r4.u64 | 3204055040;
	// ori r11,r11,40664
	ctx.r11.u64 = ctx.r11.u64 | 40664;
	// ori r10,r10,54535
	ctx.r10.u64 = ctx.r10.u64 | 54535;
	// ori r9,r9,56599
	ctx.r9.u64 = ctx.r9.u64 | 56599;
	// std r11,136(r3)
	PPC_STORE_U64(ctx.r3.u32 + 136, ctx.r11.u64);
	// ori r8,r8,22841
	ctx.r8.u64 = ctx.r8.u64 | 22841;
	// std r10,144(r3)
	PPC_STORE_U64(ctx.r3.u32 + 144, ctx.r10.u64);
	// ori r7,r7,2865
	ctx.r7.u64 = ctx.r7.u64 | 2865;
	// std r9,152(r3)
	PPC_STORE_U64(ctx.r3.u32 + 152, ctx.r9.u64);
	// ori r6,r6,5393
	ctx.r6.u64 = ctx.r6.u64 | 5393;
	// std r8,160(r3)
	PPC_STORE_U64(ctx.r3.u32 + 160, ctx.r8.u64);
	// ori r5,r5,36775
	ctx.r5.u64 = ctx.r5.u64 | 36775;
	// std r7,168(r3)
	PPC_STORE_U64(ctx.r3.u32 + 168, ctx.r7.u64);
	// ori r4,r4,20388
	ctx.r4.u64 = ctx.r4.u64 | 20388;
	// std r6,176(r3)
	PPC_STORE_U64(ctx.r3.u32 + 176, ctx.r6.u64);
	// std r5,184(r3)
	PPC_STORE_U64(ctx.r3.u32 + 184, ctx.r5.u64);
	// std r4,192(r3)
	PPC_STORE_U64(ctx.r3.u32 + 192, ctx.r4.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832BA71C"))) PPC_WEAK_FUNC(sub_832BA71C);
PPC_FUNC_IMPL(__imp__sub_832BA71C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BA720"))) PPC_WEAK_FUNC(sub_832BA720);
PPC_FUNC_IMPL(__imp__sub_832BA720) {
	PPC_FUNC_PROLOGUE();
	// lis r11,27145
	ctx.r11.s64 = 1778974720;
	// lis r10,-17561
	ctx.r10.s64 = -1150877696;
	// lis r9,15470
	ctx.r9.s64 = 1013841920;
	// lis r8,-23217
	ctx.r8.s64 = -1521549312;
	// lis r7,20750
	ctx.r7.s64 = 1359872000;
	// lis r6,-25851
	ctx.r6.s64 = -1694171136;
	// lis r5,8067
	ctx.r5.s64 = 528678912;
	// lis r4,23520
	ctx.r4.s64 = 1541406720;
	// ori r11,r11,58983
	ctx.r11.u64 = ctx.r11.u64 | 58983;
	// ori r10,r10,44677
	ctx.r10.u64 = ctx.r10.u64 | 44677;
	// ori r9,r9,62322
	ctx.r9.u64 = ctx.r9.u64 | 62322;
	// ori r8,r8,62778
	ctx.r8.u64 = ctx.r8.u64 | 62778;
	// ori r7,r7,21119
	ctx.r7.u64 = ctx.r7.u64 | 21119;
	// ori r6,r6,26764
	ctx.r6.u64 = ctx.r6.u64 | 26764;
	// ori r5,r5,55723
	ctx.r5.u64 = ctx.r5.u64 | 55723;
	// ori r4,r4,52505
	ctx.r4.u64 = ctx.r4.u64 | 52505;
	// rldicr r11,r11,32,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000;
	// rldicr r10,r10,32,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000;
	// rldicr r9,r9,32,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000;
	// rldicr r8,r8,32,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000;
	// rldicr r7,r7,32,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000;
	// rldicr r6,r6,32,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000;
	// rldicr r5,r5,32,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u64, 32) & 0xFFFFFFFF00000000;
	// rldicr r4,r4,32,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF00000000;
	// oris r11,r11,62396
	ctx.r11.u64 = ctx.r11.u64 | 4089184256;
	// oris r10,r10,33994
	ctx.r10.u64 = ctx.r10.u64 | 2227830784;
	// oris r9,r9,65172
	ctx.r9.u64 = ctx.r9.u64 | 4271112192;
	// oris r8,r8,24349
	ctx.r8.u64 = ctx.r8.u64 | 1595736064;
	// oris r7,r7,44518
	ctx.r7.u64 = ctx.r7.u64 | 2917531648;
	// oris r6,r6,11070
	ctx.r6.u64 = ctx.r6.u64 | 725483520;
	// oris r5,r5,64321
	ctx.r5.u64 = ctx.r5.u64 | 4215341056;
	// oris r4,r4,4990
	ctx.r4.u64 = ctx.r4.u64 | 327024640;
	// ori r11,r11,51464
	ctx.r11.u64 = ctx.r11.u64 | 51464;
	// ori r10,r10,42811
	ctx.r10.u64 = ctx.r10.u64 | 42811;
	// ori r9,r9,63531
	ctx.r9.u64 = ctx.r9.u64 | 63531;
	// std r11,136(r3)
	PPC_STORE_U64(ctx.r3.u32 + 136, ctx.r11.u64);
	// ori r8,r8,14065
	ctx.r8.u64 = ctx.r8.u64 | 14065;
	// std r10,144(r3)
	PPC_STORE_U64(ctx.r3.u32 + 144, ctx.r10.u64);
	// ori r7,r7,33489
	ctx.r7.u64 = ctx.r7.u64 | 33489;
	// std r9,152(r3)
	PPC_STORE_U64(ctx.r3.u32 + 152, ctx.r9.u64);
	// ori r6,r6,27679
	ctx.r6.u64 = ctx.r6.u64 | 27679;
	// std r8,160(r3)
	PPC_STORE_U64(ctx.r3.u32 + 160, ctx.r8.u64);
	// ori r5,r5,48491
	ctx.r5.u64 = ctx.r5.u64 | 48491;
	// std r7,168(r3)
	PPC_STORE_U64(ctx.r3.u32 + 168, ctx.r7.u64);
	// ori r4,r4,8569
	ctx.r4.u64 = ctx.r4.u64 | 8569;
	// std r6,176(r3)
	PPC_STORE_U64(ctx.r3.u32 + 176, ctx.r6.u64);
	// std r5,184(r3)
	PPC_STORE_U64(ctx.r3.u32 + 184, ctx.r5.u64);
	// std r4,192(r3)
	PPC_STORE_U64(ctx.r3.u32 + 192, ctx.r4.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832BA7E4"))) PPC_WEAK_FUNC(sub_832BA7E4);
PPC_FUNC_IMPL(__imp__sub_832BA7E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BA7E8"))) PPC_WEAK_FUNC(sub_832BA7E8);
PPC_FUNC_IMPL(__imp__sub_832BA7E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x832BA7F0;
	__savegprlr_19(ctx, base);
	// stwu r1,-1472(r1)
	ea = -1472 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// addi r10,r1,712
	ctx.r10.s64 = ctx.r1.s64 + 712;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_832BA808:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x832ba808
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832BA808;
	// li r10,64
	ctx.r10.s64 = 64;
	// addi r11,r1,840
	ctx.r11.s64 = ctx.r1.s64 + 840;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_832BA820:
	// ld r9,-112(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + -112);
	// ld r10,-8(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + -8);
	// rldicr r4,r9,63,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// ld r8,-48(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + -48);
	// rldicr r5,r9,56,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,-120(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + -120);
	// rldicr r6,r10,3,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u64, 3) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r31,r10,45,63
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u64, 45) & 0xFFFFFFFFFFFFFFFF;
	// xor r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 ^ ctx.r4.u64;
	// rldicl r10,r10,58,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 58) & 0x3FFFFFFFFFFFFFF;
	// rldicl r4,r9,57,7
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u64, 57) & 0x1FFFFFFFFFFFFFF;
	// xor r6,r6,r31
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r31.u64;
	// xor r9,r5,r4
	ctx.r9.u64 = ctx.r5.u64 ^ ctx.r4.u64;
	// xor r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 ^ ctx.r10.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x832ba820
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832BA820;
	// li r9,16
	ctx.r9.s64 = 16;
	// ld r5,160(r3)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r3.u32 + 160);
	// ld r8,136(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 136);
	// addi r11,r1,656
	ctx.r11.s64 = ctx.r1.s64 + 656;
	// ld r7,144(r3)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r3.u32 + 144);
	// li r10,0
	ctx.r10.s64 = 0;
	// ld r6,152(r3)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r3.u32 + 152);
	// ld r4,168(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 168);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// ld r9,184(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 184);
	// ld r31,176(r3)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r3.u32 + 176);
	// ld r30,192(r3)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r3.u32 + 192);
	// std r5,680(r1)
	PPC_STORE_U64(ctx.r1.u32 + 680, ctx.r5.u64);
	// std r8,656(r1)
	PPC_STORE_U64(ctx.r1.u32 + 656, ctx.r8.u64);
	// std r9,704(r1)
	PPC_STORE_U64(ctx.r1.u32 + 704, ctx.r9.u64);
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// std r7,664(r1)
	PPC_STORE_U64(ctx.r1.u32 + 664, ctx.r7.u64);
	// std r6,672(r1)
	PPC_STORE_U64(ctx.r1.u32 + 672, ctx.r6.u64);
	// addi r5,r9,-21784
	ctx.r5.s64 = ctx.r9.s64 + -21784;
	// std r4,688(r1)
	PPC_STORE_U64(ctx.r1.u32 + 688, ctx.r4.u64);
	// std r31,696(r1)
	PPC_STORE_U64(ctx.r1.u32 + 696, ctx.r31.u64);
	// std r30,712(r1)
	PPC_STORE_U64(ctx.r1.u32 + 712, ctx.r30.u64);
loc_832BA8C4:
	// ld r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// addi r9,r1,720
	ctx.r9.s64 = ctx.r1.s64 + 720;
	// ld r30,48(r11)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// addi r27,r1,728
	ctx.r27.s64 = ctx.r1.s64 + 728;
	// ld r31,40(r11)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 40);
	// rldicr r6,r8,46,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u64, 46) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r7,r8,23,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 23) & 0xFFFFFFFFFFFFFFFF;
	// ldx r29,r10,r5
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r5.u32);
	// xor r4,r31,r30
	ctx.r4.u64 = ctx.r31.u64 ^ ctx.r30.u64;
	// ld r26,56(r11)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
	// ldx r28,r10,r9
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r9.u32);
	// xor r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r6.u64;
	// and r9,r4,r8
	ctx.r9.u64 = ctx.r4.u64 & ctx.r8.u64;
	// ld r24,0(r11)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// rldicr r6,r8,50,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u64, 50) & 0xFFFFFFFFFFFFFFFF;
	// ld r25,24(r11)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// xor r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r30.u64;
	// ldx r27,r10,r27
	ctx.r27.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r27.u32);
	// xor r4,r7,r6
	ctx.r4.u64 = ctx.r7.u64 ^ ctx.r6.u64;
	// ld r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// rldicr r20,r24,25,63
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r24.u64, 25) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// add r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 + ctx.r9.u64;
	// xor r23,r8,r31
	ctx.r23.u64 = ctx.r8.u64 ^ ctx.r31.u64;
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + ctx.r29.u64;
	// or r4,r6,r7
	ctx.r4.u64 = ctx.r6.u64 | ctx.r7.u64;
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + ctx.r28.u64;
	// rldicr r28,r24,30,63
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r24.u64, 30) & 0xFFFFFFFFFFFFFFFF;
	// add r29,r9,r26
	ctx.r29.u64 = ctx.r9.u64 + ctx.r26.u64;
	// and r4,r4,r24
	ctx.r4.u64 = ctx.r4.u64 & ctx.r24.u64;
	// add r9,r25,r29
	ctx.r9.u64 = ctx.r25.u64 + ctx.r29.u64;
	// xor r25,r20,r28
	ctx.r25.u64 = ctx.r20.u64 ^ ctx.r28.u64;
	// rldicr r28,r9,23,63
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u64, 23) & 0xFFFFFFFFFFFFFFFF;
	// std r9,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r9.u64);
	// rldicr r20,r9,46,63
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r9.u64, 46) & 0xFFFFFFFFFFFFFFFF;
	// and r23,r23,r9
	ctx.r23.u64 = ctx.r23.u64 & ctx.r9.u64;
	// xor r20,r28,r20
	ctx.r20.u64 = ctx.r28.u64 ^ ctx.r20.u64;
	// rldicr r9,r9,50,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 50) & 0xFFFFFFFFFFFFFFFF;
	// mr r21,r24
	ctx.r21.u64 = ctx.r24.u64;
	// and r26,r6,r7
	ctx.r26.u64 = ctx.r6.u64 & ctx.r7.u64;
	// rldicr r19,r24,36,63
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r24.u64, 36) & 0xFFFFFFFFFFFFFFFF;
	// mr r22,r24
	ctx.r22.u64 = ctx.r24.u64;
	// xor r9,r20,r9
	ctx.r9.u64 = ctx.r20.u64 ^ ctx.r9.u64;
	// xor r28,r23,r31
	ctx.r28.u64 = ctx.r23.u64 ^ ctx.r31.u64;
	// addi r24,r5,8
	ctx.r24.s64 = ctx.r5.s64 + 8;
	// or r26,r4,r26
	ctx.r26.u64 = ctx.r4.u64 | ctx.r26.u64;
	// xor r25,r25,r19
	ctx.r25.u64 = ctx.r25.u64 ^ ctx.r19.u64;
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + ctx.r28.u64;
	// add r26,r25,r26
	ctx.r26.u64 = ctx.r25.u64 + ctx.r26.u64;
	// ldx r28,r10,r24
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r24.u32);
	// add r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 + ctx.r27.u64;
	// add r4,r26,r29
	ctx.r4.u64 = ctx.r26.u64 + ctx.r29.u64;
	// add r29,r9,r28
	ctx.r29.u64 = ctx.r9.u64 + ctx.r28.u64;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// std r4,-8(r11)
	PPC_STORE_U64(ctx.r11.u32 + -8, ctx.r4.u64);
	// add r30,r29,r30
	ctx.r30.u64 = ctx.r29.u64 + ctx.r30.u64;
	// ld r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// rldicr r27,r9,30,63
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r9.u64, 30) & 0xFFFFFFFFFFFFFFFF;
	// add r7,r7,r30
	ctx.r7.u64 = ctx.r7.u64 + ctx.r30.u64;
	// rldicr r29,r9,25,63
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u64, 25) & 0xFFFFFFFFFFFFFFFF;
	// or r28,r21,r6
	ctx.r28.u64 = ctx.r21.u64 | ctx.r6.u64;
	// std r7,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r7.u64);
	// rldicr r25,r7,23,63
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r7.u64, 23) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r23,r7,46,63
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r7.u64, 46) & 0xFFFFFFFFFFFFFFFF;
	// xor r29,r29,r27
	ctx.r29.u64 = ctx.r29.u64 ^ ctx.r27.u64;
	// xor r26,r4,r8
	ctx.r26.u64 = ctx.r4.u64 ^ ctx.r8.u64;
	// and r27,r21,r6
	ctx.r27.u64 = ctx.r21.u64 & ctx.r6.u64;
	// and r28,r28,r9
	ctx.r28.u64 = ctx.r28.u64 & ctx.r9.u64;
	// rldicr r20,r9,36,63
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r9.u64, 36) & 0xFFFFFFFFFFFFFFFF;
	// addi r22,r1,736
	ctx.r22.s64 = ctx.r1.s64 + 736;
	// rldicr r19,r7,50,63
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r7.u64, 50) & 0xFFFFFFFFFFFFFFFF;
	// and r26,r26,r7
	ctx.r26.u64 = ctx.r26.u64 & ctx.r7.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// xor r25,r25,r23
	ctx.r25.u64 = ctx.r25.u64 ^ ctx.r23.u64;
	// or r7,r28,r27
	ctx.r7.u64 = ctx.r28.u64 | ctx.r27.u64;
	// ldx r28,r10,r22
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r22.u32);
	// xor r29,r29,r20
	ctx.r29.u64 = ctx.r29.u64 ^ ctx.r20.u64;
	// xor r27,r25,r19
	ctx.r27.u64 = ctx.r25.u64 ^ ctx.r19.u64;
	// xor r26,r26,r8
	ctx.r26.u64 = ctx.r26.u64 ^ ctx.r8.u64;
	// addi r25,r5,16
	ctx.r25.s64 = ctx.r5.s64 + 16;
	// add r7,r29,r7
	ctx.r7.u64 = ctx.r29.u64 + ctx.r7.u64;
	// add r23,r7,r30
	ctx.r23.u64 = ctx.r7.u64 + ctx.r30.u64;
	// ldx r29,r10,r25
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r25.u32);
	// add r7,r27,r26
	ctx.r7.u64 = ctx.r27.u64 + ctx.r26.u64;
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
	// std r23,-16(r11)
	PPC_STORE_U64(ctx.r11.u32 + -16, ctx.r23.u64);
	// add r7,r7,r28
	ctx.r7.u64 = ctx.r7.u64 + ctx.r28.u64;
	// rldicr r26,r23,25,63
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r23.u64, 25) & 0xFFFFFFFFFFFFFFFF;
	// add r7,r7,r29
	ctx.r7.u64 = ctx.r7.u64 + ctx.r29.u64;
	// xor r27,r24,r4
	ctx.r27.u64 = ctx.r24.u64 ^ ctx.r4.u64;
	// add r31,r7,r31
	ctx.r31.u64 = ctx.r7.u64 + ctx.r31.u64;
	// rldicr r23,r23,30,63
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u64, 30) & 0xFFFFFFFFFFFFFFFF;
	// add r7,r6,r31
	ctx.r7.u64 = ctx.r6.u64 + ctx.r31.u64;
	// addi r6,r1,744
	ctx.r6.s64 = ctx.r1.s64 + 744;
	// rldicr r29,r7,23,63
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u64, 23) & 0xFFFFFFFFFFFFFFFF;
	// std r7,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r7.u64);
	// rldicr r20,r7,46,63
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r7.u64, 46) & 0xFFFFFFFFFFFFFFFF;
	// or r28,r9,r21
	ctx.r28.u64 = ctx.r9.u64 | ctx.r21.u64;
	// xor r20,r29,r20
	ctx.r20.u64 = ctx.r29.u64 ^ ctx.r20.u64;
	// ldx r29,r10,r6
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r6.u32);
	// and r27,r27,r7
	ctx.r27.u64 = ctx.r27.u64 & ctx.r7.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// and r6,r9,r21
	ctx.r6.u64 = ctx.r9.u64 & ctx.r21.u64;
	// rldicr r7,r7,50,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 50) & 0xFFFFFFFFFFFFFFFF;
	// xor r26,r26,r23
	ctx.r26.u64 = ctx.r26.u64 ^ ctx.r23.u64;
	// rldicr r21,r25,36,63
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r25.u64, 36) & 0xFFFFFFFFFFFFFFFF;
	// and r23,r28,r25
	ctx.r23.u64 = ctx.r28.u64 & ctx.r25.u64;
	// xor r28,r27,r4
	ctx.r28.u64 = ctx.r27.u64 ^ ctx.r4.u64;
	// xor r7,r20,r7
	ctx.r7.u64 = ctx.r20.u64 ^ ctx.r7.u64;
	// xor r27,r26,r21
	ctx.r27.u64 = ctx.r26.u64 ^ ctx.r21.u64;
	// or r26,r23,r6
	ctx.r26.u64 = ctx.r23.u64 | ctx.r6.u64;
	// addi r19,r5,24
	ctx.r19.s64 = ctx.r5.s64 + 24;
	// add r7,r7,r28
	ctx.r7.u64 = ctx.r7.u64 + ctx.r28.u64;
	// add r28,r27,r26
	ctx.r28.u64 = ctx.r27.u64 + ctx.r26.u64;
	// add r7,r7,r29
	ctx.r7.u64 = ctx.r7.u64 + ctx.r29.u64;
	// add r31,r28,r31
	ctx.r31.u64 = ctx.r28.u64 + ctx.r31.u64;
	// ldx r6,r10,r19
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r19.u32);
	// xor r23,r22,r24
	ctx.r23.u64 = ctx.r22.u64 ^ ctx.r24.u64;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// std r31,-24(r11)
	PPC_STORE_U64(ctx.r11.u32 + -24, ctx.r31.u64);
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// rldicr r31,r31,25,63
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u64, 25) & 0xFFFFFFFFFFFFFFFF;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// rldicr r28,r29,30,63
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r29.u64, 30) & 0xFFFFFFFFFFFFFFFF;
	// or r6,r25,r9
	ctx.r6.u64 = ctx.r25.u64 | ctx.r9.u64;
	// add r8,r30,r7
	ctx.r8.u64 = ctx.r30.u64 + ctx.r7.u64;
	// xor r28,r31,r28
	ctx.r28.u64 = ctx.r31.u64 ^ ctx.r28.u64;
	// and r6,r6,r29
	ctx.r6.u64 = ctx.r6.u64 & ctx.r29.u64;
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// and r31,r25,r9
	ctx.r31.u64 = ctx.r25.u64 & ctx.r9.u64;
	// rldicr r30,r29,36,63
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u64, 36) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r27,r8,23,63
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r8.u64, 23) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r26,r8,46,63
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r8.u64, 46) & 0xFFFFFFFFFFFFFFFF;
	// or r31,r6,r31
	ctx.r31.u64 = ctx.r6.u64 | ctx.r31.u64;
	// xor r6,r28,r30
	ctx.r6.u64 = ctx.r28.u64 ^ ctx.r30.u64;
	// and r30,r23,r8
	ctx.r30.u64 = ctx.r23.u64 & ctx.r8.u64;
	// xor r28,r27,r26
	ctx.r28.u64 = ctx.r27.u64 ^ ctx.r26.u64;
	// rldicr r8,r8,50,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 50) & 0xFFFFFFFFFFFFFFFF;
	// addi r27,r1,752
	ctx.r27.s64 = ctx.r1.s64 + 752;
	// add r6,r6,r31
	ctx.r6.u64 = ctx.r6.u64 + ctx.r31.u64;
	// xor r31,r30,r24
	ctx.r31.u64 = ctx.r30.u64 ^ ctx.r24.u64;
	// xor r8,r28,r8
	ctx.r8.u64 = ctx.r28.u64 ^ ctx.r8.u64;
	// addi r30,r5,32
	ctx.r30.s64 = ctx.r5.s64 + 32;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// ldx r6,r10,r27
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r27.u32);
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// std r7,-32(r11)
	PPC_STORE_U64(ctx.r11.u32 + -32, ctx.r7.u64);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// ldx r7,r10,r30
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r30.u32);
	// rldicr r6,r28,25,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r28.u64, 25) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r30,r28,30,63
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u64, 30) & 0xFFFFFFFFFFFFFFFF;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// or r31,r29,r25
	ctx.r31.u64 = ctx.r29.u64 | ctx.r25.u64;
	// xor r7,r6,r30
	ctx.r7.u64 = ctx.r6.u64 ^ ctx.r30.u64;
	// rldicr r6,r28,36,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r28.u64, 36) & 0xFFFFFFFFFFFFFFFF;
	// and r31,r31,r28
	ctx.r31.u64 = ctx.r31.u64 & ctx.r28.u64;
	// and r30,r29,r25
	ctx.r30.u64 = ctx.r29.u64 & ctx.r25.u64;
	// xor r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r6.u64;
	// or r6,r31,r30
	ctx.r6.u64 = ctx.r31.u64 | ctx.r30.u64;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r9,r7,r8
	ctx.r9.u64 = ctx.r7.u64 + ctx.r8.u64;
	// std r4,-8(r11)
	PPC_STORE_U64(ctx.r11.u32 + -8, ctx.r4.u64);
	// addi r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 + 40;
	// std r9,-40(r11)
	PPC_STORE_U64(ctx.r11.u32 + -40, ctx.r9.u64);
	// addi r11,r11,-40
	ctx.r11.s64 = ctx.r11.s64 + -40;
	// bdnz 0x832ba8c4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832BA8C4;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r28,136(r3)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r3.u32 + 136);
	// ld r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// add r28,r9,r28
	ctx.r28.u64 = ctx.r9.u64 + ctx.r28.u64;
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// ld r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// ld r29,144(r3)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r3.u32 + 144);
	// ld r30,152(r3)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r3.u32 + 152);
	// ld r31,160(r3)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r3.u32 + 160);
	// add r29,r5,r29
	ctx.r29.u64 = ctx.r5.u64 + ctx.r29.u64;
	// add r30,r7,r30
	ctx.r30.u64 = ctx.r7.u64 + ctx.r30.u64;
	// ld r4,168(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 168);
	// add r31,r9,r31
	ctx.r31.u64 = ctx.r9.u64 + ctx.r31.u64;
	// ld r8,184(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 184);
	// ld r5,32(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// ld r7,40(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 40);
	// ld r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 48);
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// ld r6,176(r3)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r3.u32 + 176);
	// ld r10,192(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 192);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// ld r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 56);
	// add r4,r7,r6
	ctx.r4.u64 = ctx.r7.u64 + ctx.r6.u64;
	// std r28,136(r3)
	PPC_STORE_U64(ctx.r3.u32 + 136, ctx.r28.u64);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r29,144(r3)
	PPC_STORE_U64(ctx.r3.u32 + 144, ctx.r29.u64);
	// std r30,152(r3)
	PPC_STORE_U64(ctx.r3.u32 + 152, ctx.r30.u64);
	// std r31,160(r3)
	PPC_STORE_U64(ctx.r3.u32 + 160, ctx.r31.u64);
	// std r5,168(r3)
	PPC_STORE_U64(ctx.r3.u32 + 168, ctx.r5.u64);
	// std r4,176(r3)
	PPC_STORE_U64(ctx.r3.u32 + 176, ctx.r4.u64);
	// std r9,184(r3)
	PPC_STORE_U64(ctx.r3.u32 + 184, ctx.r9.u64);
	// std r8,192(r3)
	PPC_STORE_U64(ctx.r3.u32 + 192, ctx.r8.u64);
	// addi r1,r1,1472
	ctx.r1.s64 = ctx.r1.s64 + 1472;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BABF4"))) PPC_WEAK_FUNC(sub_832BABF4);
PPC_FUNC_IMPL(__imp__sub_832BABF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BABF8"))) PPC_WEAK_FUNC(sub_832BABF8);
PPC_FUNC_IMPL(__imp__sub_832BABF8) {
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
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,128
	ctx.r9.s64 = 128;
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// li r5,1
	ctx.r5.s64 = 1;
	// std r8,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r8.u64);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x832aa6e0
	ctx.lr = 0x832BAC38;
	sub_832AA6E0(ctx, base);
	// lhz r7,2(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// cmplwi cr6,r7,112
	cr6.compare<uint32_t>(ctx.r7.u32, 112, xer);
	// beq cr6,0x832bac60
	if (cr6.eq) goto loc_832BAC60;
loc_832BAC44:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832aa6e0
	ctx.lr = 0x832BAC54;
	sub_832AA6E0(ctx, base);
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// cmplwi cr6,r11,112
	cr6.compare<uint32_t>(ctx.r11.u32, 112, xer);
	// bne cr6,0x832bac44
	if (!cr6.eq) goto loc_832BAC44;
loc_832BAC60:
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832aa6e0
	ctx.lr = 0x832BAC70;
	sub_832AA6E0(ctx, base);
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
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

__attribute__((alias("__imp__sub_832BAC88"))) PPC_WEAK_FUNC(sub_832BAC88);
PPC_FUNC_IMPL(__imp__sub_832BAC88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,27145
	ctx.r11.s64 = 1778974720;
	// lis r10,-17561
	ctx.r10.s64 = -1150877696;
	// lis r9,15470
	ctx.r9.s64 = 1013841920;
	// lis r8,-23217
	ctx.r8.s64 = -1521549312;
	// lis r7,20750
	ctx.r7.s64 = 1359872000;
	// lis r6,-25851
	ctx.r6.s64 = -1694171136;
	// lis r5,8067
	ctx.r5.s64 = 528678912;
	// lis r4,23520
	ctx.r4.s64 = 1541406720;
	// ori r11,r11,58983
	ctx.r11.u64 = ctx.r11.u64 | 58983;
	// ori r10,r10,44677
	ctx.r10.u64 = ctx.r10.u64 | 44677;
	// ori r9,r9,62322
	ctx.r9.u64 = ctx.r9.u64 | 62322;
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// ori r8,r8,62778
	ctx.r8.u64 = ctx.r8.u64 | 62778;
	// stw r10,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// ori r7,r7,21119
	ctx.r7.u64 = ctx.r7.u64 | 21119;
	// stw r9,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r9.u32);
	// ori r6,r6,26764
	ctx.r6.u64 = ctx.r6.u64 | 26764;
	// stw r8,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r8.u32);
	// ori r5,r5,55723
	ctx.r5.u64 = ctx.r5.u64 | 55723;
	// stw r7,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r7.u32);
	// ori r4,r4,52505
	ctx.r4.u64 = ctx.r4.u64 | 52505;
	// stw r6,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r6.u32);
	// stw r5,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r5.u32);
	// stw r4,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832BACEC"))) PPC_WEAK_FUNC(sub_832BACEC);
PPC_FUNC_IMPL(__imp__sub_832BACEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BACF0"))) PPC_WEAK_FUNC(sub_832BACF0);
PPC_FUNC_IMPL(__imp__sub_832BACF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x832BACF8;
	__savegprlr_20(ctx, base);
	// stwu r1,-672(r1)
	ea = -672 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// addi r10,r1,12
	ctx.r10.s64 = ctx.r1.s64 + 12;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_832BAD10:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x832bad10
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832BAD10;
	// li r10,48
	ctx.r10.s64 = 48;
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_832BAD28:
	// lwz r9,-56(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -56);
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// rotlwi r4,r9,25
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r9.u32, 25);
	// lwz r8,-24(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24);
	// rotlwi r5,r9,14
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 14);
	// lwz r7,-60(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -60);
	// rotlwi r6,r10,13
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 13);
	// rotlwi r31,r10,15
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 15);
	// xor r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 ^ ctx.r4.u64;
	// rlwinm r10,r10,22,10,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x3FFFFF;
	// rlwinm r4,r9,29,3,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// xor r6,r6,r31
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r31.u64;
	// xor r9,r5,r4
	ctx.r9.u64 = ctx.r5.u64 ^ ctx.r4.u64;
	// xor r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 ^ ctx.r10.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x832bad28
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832BAD28;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r23,r3,72
	ctx.r23.s64 = ctx.r3.s64 + 72;
	// addi r10,r1,524
	ctx.r10.s64 = ctx.r1.s64 + 524;
	// addi r11,r23,-4
	ctx.r11.s64 = ctx.r23.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_832BAD88:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x832bad88
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832BAD88;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r11,r1,528
	ctx.r11.s64 = ctx.r1.s64 + 528;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// addi r4,r9,-21080
	ctx.r4.s64 = ctx.r9.s64 + -21080;
loc_832BADAC:
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r7,r1,16
	ctx.r7.s64 = ctx.r1.s64 + 16;
	// lwz r30,24(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addi r28,r4,4
	ctx.r28.s64 = ctx.r4.s64 + 4;
	// lwz r5,20(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rotlwi r6,r8,7
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 7);
	// rotlwi r29,r8,21
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r8.u32, 21);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// xor r26,r5,r30
	ctx.r26.u64 = ctx.r5.u64 ^ ctx.r30.u64;
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// xor r29,r6,r29
	ctx.r29.u64 = ctx.r6.u64 ^ ctx.r29.u64;
	// lwzx r25,r10,r7
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// and r26,r26,r8
	ctx.r26.u64 = ctx.r26.u64 & ctx.r8.u64;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rotlwi r24,r8,26
	ctx.r24.u64 = __builtin_rotateleft32(ctx.r8.u32, 26);
	// lwzx r27,r10,r4
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// xor r7,r26,r30
	ctx.r7.u64 = ctx.r26.u64 ^ ctx.r30.u64;
	// lwz r26,12(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// xor r29,r29,r24
	ctx.r29.u64 = ctx.r29.u64 ^ ctx.r24.u64;
	// lwz r24,28(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// or r22,r6,r31
	ctx.r22.u64 = ctx.r6.u64 | ctx.r31.u64;
	// lwzx r28,r10,r28
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// add r7,r29,r7
	ctx.r7.u64 = ctx.r29.u64 + ctx.r7.u64;
	// rotlwi r29,r9,10
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r9.u32, 10);
	// rotlwi r21,r9,19
	ctx.r21.u64 = __builtin_rotateleft32(ctx.r9.u32, 19);
	// add r7,r7,r27
	ctx.r7.u64 = ctx.r7.u64 + ctx.r27.u64;
	// xor r21,r29,r21
	ctx.r21.u64 = ctx.r29.u64 ^ ctx.r21.u64;
	// and r27,r6,r31
	ctx.r27.u64 = ctx.r6.u64 & ctx.r31.u64;
	// and r22,r22,r9
	ctx.r22.u64 = ctx.r22.u64 & ctx.r9.u64;
	// rotlwi r20,r9,30
	ctx.r20.u64 = __builtin_rotateleft32(ctx.r9.u32, 30);
	// add r29,r7,r25
	ctx.r29.u64 = ctx.r7.u64 + ctx.r25.u64;
	// or r27,r22,r27
	ctx.r27.u64 = ctx.r22.u64 | ctx.r27.u64;
	// xor r7,r21,r20
	ctx.r7.u64 = ctx.r21.u64 ^ ctx.r20.u64;
	// add r29,r29,r24
	ctx.r29.u64 = ctx.r29.u64 + ctx.r24.u64;
	// add r27,r7,r27
	ctx.r27.u64 = ctx.r7.u64 + ctx.r27.u64;
	// add r7,r26,r29
	ctx.r7.u64 = ctx.r26.u64 + ctx.r29.u64;
	// xor r26,r8,r5
	ctx.r26.u64 = ctx.r8.u64 ^ ctx.r5.u64;
	// rotlwi r22,r7,21
	ctx.r22.u64 = __builtin_rotateleft32(ctx.r7.u32, 21);
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// rotlwi r25,r7,7
	ctx.r25.u64 = __builtin_rotateleft32(ctx.r7.u32, 7);
	// add r27,r27,r29
	ctx.r27.u64 = ctx.r27.u64 + ctx.r29.u64;
	// and r26,r26,r7
	ctx.r26.u64 = ctx.r26.u64 & ctx.r7.u64;
	// rotlwi r24,r7,0
	ctx.r24.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r27,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r27.u32);
	// rotlwi r7,r7,26
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 26);
	// xor r25,r25,r22
	ctx.r25.u64 = ctx.r25.u64 ^ ctx.r22.u64;
	// xor r29,r26,r5
	ctx.r29.u64 = ctx.r26.u64 ^ ctx.r5.u64;
	// lwz r26,-4(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// xor r7,r25,r7
	ctx.r7.u64 = ctx.r25.u64 ^ ctx.r7.u64;
	// addi r27,r1,20
	ctx.r27.s64 = ctx.r1.s64 + 20;
	// add r7,r7,r29
	ctx.r7.u64 = ctx.r7.u64 + ctx.r29.u64;
	// or r25,r9,r6
	ctx.r25.u64 = ctx.r9.u64 | ctx.r6.u64;
	// add r7,r7,r28
	ctx.r7.u64 = ctx.r7.u64 + ctx.r28.u64;
	// rotlwi r28,r26,10
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r26.u32, 10);
	// lwzx r29,r10,r27
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// rotlwi r27,r26,19
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r26.u32, 19);
	// and r22,r9,r6
	ctx.r22.u64 = ctx.r9.u64 & ctx.r6.u64;
	// add r7,r7,r29
	ctx.r7.u64 = ctx.r7.u64 + ctx.r29.u64;
	// xor r28,r28,r27
	ctx.r28.u64 = ctx.r28.u64 ^ ctx.r27.u64;
	// rotlwi r29,r26,30
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r26.u32, 30);
	// and r27,r25,r26
	ctx.r27.u64 = ctx.r25.u64 & ctx.r26.u64;
	// xor r29,r28,r29
	ctx.r29.u64 = ctx.r28.u64 ^ ctx.r29.u64;
	// add r30,r7,r30
	ctx.r30.u64 = ctx.r7.u64 + ctx.r30.u64;
	// or r28,r27,r22
	ctx.r28.u64 = ctx.r27.u64 | ctx.r22.u64;
	// add r7,r31,r30
	ctx.r7.u64 = ctx.r31.u64 + ctx.r30.u64;
	// add r31,r29,r28
	ctx.r31.u64 = ctx.r29.u64 + ctx.r28.u64;
	// xor r25,r24,r8
	ctx.r25.u64 = ctx.r24.u64 ^ ctx.r8.u64;
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// rotlwi r28,r7,21
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r7.u32, 21);
	// rotlwi r29,r7,7
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r7.u32, 7);
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
	// and r30,r25,r7
	ctx.r30.u64 = ctx.r25.u64 & ctx.r7.u64;
	// rotlwi r27,r7,0
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r31,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r31.u32);
	// xor r29,r29,r28
	ctx.r29.u64 = ctx.r29.u64 ^ ctx.r28.u64;
	// rotlwi r7,r7,26
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 26);
	// rotlwi r28,r31,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// xor r7,r29,r7
	ctx.r7.u64 = ctx.r29.u64 ^ ctx.r7.u64;
	// addi r25,r4,8
	ctx.r25.s64 = ctx.r4.s64 + 8;
	// xor r31,r30,r8
	ctx.r31.u64 = ctx.r30.u64 ^ ctx.r8.u64;
	// addi r29,r1,24
	ctx.r29.s64 = ctx.r1.s64 + 24;
	// add r7,r7,r31
	ctx.r7.u64 = ctx.r7.u64 + ctx.r31.u64;
	// lwzx r30,r10,r25
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r25.u32);
	// lwzx r31,r10,r29
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// rotlwi r29,r28,10
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r28.u32, 10);
	// add r7,r7,r30
	ctx.r7.u64 = ctx.r7.u64 + ctx.r30.u64;
	// rotlwi r30,r28,19
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r28.u32, 19);
	// add r7,r7,r31
	ctx.r7.u64 = ctx.r7.u64 + ctx.r31.u64;
	// or r31,r26,r9
	ctx.r31.u64 = ctx.r26.u64 | ctx.r9.u64;
	// add r5,r7,r5
	ctx.r5.u64 = ctx.r7.u64 + ctx.r5.u64;
	// xor r30,r29,r30
	ctx.r30.u64 = ctx.r29.u64 ^ ctx.r30.u64;
	// and r31,r31,r28
	ctx.r31.u64 = ctx.r31.u64 & ctx.r28.u64;
	// rotlwi r29,r28,30
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r28.u32, 30);
	// and r25,r26,r9
	ctx.r25.u64 = ctx.r26.u64 & ctx.r9.u64;
	// add r7,r6,r5
	ctx.r7.u64 = ctx.r6.u64 + ctx.r5.u64;
	// xor r6,r30,r29
	ctx.r6.u64 = ctx.r30.u64 ^ ctx.r29.u64;
	// or r31,r31,r25
	ctx.r31.u64 = ctx.r31.u64 | ctx.r25.u64;
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// xor r27,r27,r24
	ctx.r27.u64 = ctx.r27.u64 ^ ctx.r24.u64;
	// rotlwi r29,r7,21
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r7.u32, 21);
	// add r6,r6,r31
	ctx.r6.u64 = ctx.r6.u64 + ctx.r31.u64;
	// rotlwi r30,r7,7
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r7.u32, 7);
	// and r31,r27,r7
	ctx.r31.u64 = ctx.r27.u64 & ctx.r7.u64;
	// add r5,r6,r5
	ctx.r5.u64 = ctx.r6.u64 + ctx.r5.u64;
	// xor r30,r30,r29
	ctx.r30.u64 = ctx.r30.u64 ^ ctx.r29.u64;
	// rotlwi r7,r7,26
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 26);
	// stw r5,-12(r11)
	PPC_STORE_U32(ctx.r11.u32 + -12, ctx.r5.u32);
	// xor r6,r31,r24
	ctx.r6.u64 = ctx.r31.u64 ^ ctx.r24.u64;
	// addi r29,r4,12
	ctx.r29.s64 = ctx.r4.s64 + 12;
	// addi r31,r1,28
	ctx.r31.s64 = ctx.r1.s64 + 28;
	// xor r7,r30,r7
	ctx.r7.u64 = ctx.r30.u64 ^ ctx.r7.u64;
	// rotlwi r30,r5,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// lwzx r5,r10,r29
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// rotlwi r27,r30,19
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r30.u32, 19);
	// lwzx r6,r10,r31
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// rotlwi r29,r30,10
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r30.u32, 10);
	// or r31,r28,r26
	ctx.r31.u64 = ctx.r28.u64 | ctx.r26.u64;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// xor r29,r29,r27
	ctx.r29.u64 = ctx.r29.u64 ^ ctx.r27.u64;
	// rotlwi r27,r30,30
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r30.u32, 30);
	// and r28,r28,r26
	ctx.r28.u64 = ctx.r28.u64 & ctx.r26.u64;
	// and r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 & ctx.r30.u64;
	// add r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 + ctx.r6.u64;
	// xor r7,r29,r27
	ctx.r7.u64 = ctx.r29.u64 ^ ctx.r27.u64;
	// or r6,r31,r28
	ctx.r6.u64 = ctx.r31.u64 | ctx.r28.u64;
	// add r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 + ctx.r8.u64;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stw r8,-16(r11)
	PPC_STORE_U32(ctx.r11.u32 + -16, ctx.r8.u32);
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// bdnz 0x832badac
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832BADAC;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r28,0(r23)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r28,r9,r28
	ctx.r28.u64 = ctx.r9.u64 + ctx.r28.u64;
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r29,76(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// lwz r30,80(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// lwz r31,84(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// add r29,r5,r29
	ctx.r29.u64 = ctx.r5.u64 + ctx.r29.u64;
	// add r30,r7,r30
	ctx.r30.u64 = ctx.r7.u64 + ctx.r30.u64;
	// lwz r4,88(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// add r31,r9,r31
	ctx.r31.u64 = ctx.r9.u64 + ctx.r31.u64;
	// lwz r8,96(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r7,20(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// lwz r6,92(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// lwz r10,100(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// add r4,r7,r6
	ctx.r4.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stw r28,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r28.u32);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r29,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r29.u32);
	// stw r30,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r30.u32);
	// stw r31,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r31.u32);
	// stw r5,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r5.u32);
	// stw r4,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r4.u32);
	// stw r9,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r9.u32);
	// stw r8,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r8.u32);
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BB050"))) PPC_WEAK_FUNC(sub_832BB050);
PPC_FUNC_IMPL(__imp__sub_832BB050) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,128
	ctx.r9.s64 = 128;
	// rlwinm r8,r11,3,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x7;
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// rlwinm r7,r11,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x832aa6e0
	ctx.lr = 0x832BB094;
	sub_832AA6E0(ctx, base);
	// lhz r6,2(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// cmplwi cr6,r6,56
	cr6.compare<uint32_t>(ctx.r6.u32, 56, xer);
	// beq cr6,0x832bb0bc
	if (cr6.eq) goto loc_832BB0BC;
loc_832BB0A0:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832aa6e0
	ctx.lr = 0x832BB0B0;
	sub_832AA6E0(ctx, base);
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// cmplwi cr6,r11,56
	cr6.compare<uint32_t>(ctx.r11.u32, 56, xer);
	// bne cr6,0x832bb0a0
	if (!cr6.eq) goto loc_832BB0A0;
loc_832BB0BC:
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832aa6e0
	ctx.lr = 0x832BB0CC;
	sub_832AA6E0(ctx, base);
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
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

__attribute__((alias("__imp__sub_832BB0E4"))) PPC_WEAK_FUNC(sub_832BB0E4);
PPC_FUNC_IMPL(__imp__sub_832BB0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BB0E8"))) PPC_WEAK_FUNC(sub_832BB0E8);
PPC_FUNC_IMPL(__imp__sub_832BB0E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-16123
	ctx.r11.s64 = -1056636928;
	// lis r10,13948
	ctx.r10.s64 = 914096128;
	// lis r9,12400
	ctx.r9.s64 = 812646400;
	// lis r8,-2290
	ctx.r8.s64 = -150077440;
	// lis r7,-64
	ctx.r7.s64 = -4194304;
	// lis r6,26712
	ctx.r6.s64 = 1750597632;
	// lis r5,25849
	ctx.r5.s64 = 1694040064;
	// lis r4,-16646
	ctx.r4.s64 = -1090912256;
	// ori r11,r11,40664
	ctx.r11.u64 = ctx.r11.u64 | 40664;
	// ori r10,r10,54535
	ctx.r10.u64 = ctx.r10.u64 | 54535;
	// ori r9,r9,56599
	ctx.r9.u64 = ctx.r9.u64 | 56599;
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// ori r8,r8,22841
	ctx.r8.u64 = ctx.r8.u64 | 22841;
	// stw r10,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// ori r7,r7,2865
	ctx.r7.u64 = ctx.r7.u64 | 2865;
	// stw r9,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r9.u32);
	// ori r6,r6,5393
	ctx.r6.u64 = ctx.r6.u64 | 5393;
	// stw r8,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r8.u32);
	// ori r5,r5,36775
	ctx.r5.u64 = ctx.r5.u64 | 36775;
	// stw r7,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r7.u32);
	// ori r4,r4,20388
	ctx.r4.u64 = ctx.r4.u64 | 20388;
	// stw r6,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r6.u32);
	// stw r5,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r5.u32);
	// stw r4,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832BB14C"))) PPC_WEAK_FUNC(sub_832BB14C);
PPC_FUNC_IMPL(__imp__sub_832BB14C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BB150"))) PPC_WEAK_FUNC(sub_832BB150);
PPC_FUNC_IMPL(__imp__sub_832BB150) {
	PPC_FUNC_PROLOGUE();
	// b 0x832bacf0
	sub_832BACF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BB154"))) PPC_WEAK_FUNC(sub_832BB154);
PPC_FUNC_IMPL(__imp__sub_832BB154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BB158"))) PPC_WEAK_FUNC(sub_832BB158);
PPC_FUNC_IMPL(__imp__sub_832BB158) {
	PPC_FUNC_PROLOGUE();
	// b 0x832bb050
	sub_832BB050(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BB15C"))) PPC_WEAK_FUNC(sub_832BB15C);
PPC_FUNC_IMPL(__imp__sub_832BB15C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BB160"))) PPC_WEAK_FUNC(sub_832BB160);
PPC_FUNC_IMPL(__imp__sub_832BB160) {
	PPC_FUNC_PROLOGUE();
	// lis r11,26437
	ctx.r11.s64 = 1732575232;
	// lis r10,-4147
	ctx.r10.s64 = -271777792;
	// lis r9,-26438
	ctx.r9.s64 = -1732640768;
	// lis r8,4146
	ctx.r8.s64 = 271712256;
	// lis r7,-15406
	ctx.r7.s64 = -1009647616;
	// ori r11,r11,8961
	ctx.r11.u64 = ctx.r11.u64 | 8961;
	// ori r10,r10,43913
	ctx.r10.u64 = ctx.r10.u64 | 43913;
	// ori r9,r9,56574
	ctx.r9.u64 = ctx.r9.u64 | 56574;
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// ori r8,r8,21622
	ctx.r8.u64 = ctx.r8.u64 | 21622;
	// stw r10,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// ori r7,r7,57840
	ctx.r7.u64 = ctx.r7.u64 | 57840;
	// stw r9,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r9.u32);
	// stw r8,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r8.u32);
	// stw r7,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832BB1A0"))) PPC_WEAK_FUNC(sub_832BB1A0);
PPC_FUNC_IMPL(__imp__sub_832BB1A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x832BB1A8;
	__savegprlr_20(ctx, base);
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// addi r10,r1,-436
	ctx.r10.s64 = ctx.r1.s64 + -436;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_832BB1BC:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x832bb1bc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832BB1BC;
	// li r10,64
	ctx.r10.s64 = 64;
	// addi r11,r1,-372
	ctx.r11.s64 = ctx.r1.s64 + -372;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_832BB1D4:
	// lwz r10,-52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -52);
	// lwz r9,-60(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -60);
	// lwz r8,-28(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28);
	// xor r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// lwz r6,-8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// xor r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 ^ ctx.r8.u64;
	// xor r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 ^ ctx.r6.u64;
	// rotlwi r10,r4,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 1);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x832bb1d4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832BB1D4;
	// li r7,4
	ctx.r7.s64 = 4;
	// lwz r25,72(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// lwz r24,76(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// addi r5,r1,-436
	ctx.r5.s64 = ctx.r1.s64 + -436;
	// lwz r23,80(r3)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// lwz r22,84(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// lwz r21,88(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// lis r7,23170
	ctx.r7.s64 = 1518469120;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// ori r7,r7,31129
	ctx.r7.u64 = ctx.r7.u64 | 31129;
loc_832BB238:
	// and r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 & ctx.r11.u64;
	// lwz r29,4(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// andc r31,r9,r11
	ctx.r31.u64 = ctx.r9.u64 & ~ctx.r11.u64;
	// lwz r28,8(r5)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// rotlwi r30,r8,5
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r8.u32, 5);
	// lwz r27,12(r5)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// or r31,r31,r4
	ctx.r31.u64 = ctx.r31.u64 | ctx.r4.u64;
	// lwz r26,16(r5)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// mr r20,r8
	ctx.r20.u64 = ctx.r8.u64;
	// lwzu r4,20(r5)
	ea = 20 + ctx.r5.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r5.u32 = ea;
	// add r31,r30,r31
	ctx.r31.u64 = ctx.r30.u64 + ctx.r31.u64;
	// rotlwi r11,r11,30
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 30);
	// add r31,r31,r29
	ctx.r31.u64 = ctx.r31.u64 + ctx.r29.u64;
	// add r8,r31,r6
	ctx.r8.u64 = ctx.r31.u64 + ctx.r6.u64;
	// andc r6,r10,r20
	ctx.r6.u64 = ctx.r10.u64 & ~ctx.r20.u64;
	// and r31,r11,r20
	ctx.r31.u64 = ctx.r11.u64 & ctx.r20.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// or r6,r6,r31
	ctx.r6.u64 = ctx.r6.u64 | ctx.r31.u64;
	// rotlwi r31,r8,5
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r8.u32, 5);
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// add r6,r31,r6
	ctx.r6.u64 = ctx.r31.u64 + ctx.r6.u64;
	// andc r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 & ~ctx.r8.u64;
	// add r31,r6,r28
	ctx.r31.u64 = ctx.r6.u64 + ctx.r28.u64;
	// rotlwi r6,r20,30
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r20.u32, 30);
	// add r9,r31,r9
	ctx.r9.u64 = ctx.r31.u64 + ctx.r9.u64;
	// and r31,r6,r30
	ctx.r31.u64 = ctx.r6.u64 & ctx.r30.u64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// or r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 | ctx.r31.u64;
	// rotlwi r31,r9,5
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r9.u32, 5);
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// add r8,r31,r8
	ctx.r8.u64 = ctx.r31.u64 + ctx.r8.u64;
	// andc r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 & ~ctx.r9.u64;
	// add r31,r8,r27
	ctx.r31.u64 = ctx.r8.u64 + ctx.r27.u64;
	// rotlwi r8,r30,30
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r30.u32, 30);
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// and r31,r8,r29
	ctx.r31.u64 = ctx.r8.u64 & ctx.r29.u64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// or r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 | ctx.r31.u64;
	// rotlwi r31,r10,5
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 5);
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// add r9,r31,r9
	ctx.r9.u64 = ctx.r31.u64 + ctx.r9.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// add r6,r9,r26
	ctx.r6.u64 = ctx.r9.u64 + ctx.r26.u64;
	// rotlwi r9,r29,30
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r29.u32, 30);
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// andc r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ~ctx.r10.u64;
	// add r11,r6,r7
	ctx.r11.u64 = ctx.r6.u64 + ctx.r7.u64;
	// and r29,r9,r30
	ctx.r29.u64 = ctx.r9.u64 & ctx.r30.u64;
	// rotlwi r6,r11,5
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 5);
	// or r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 | ctx.r29.u64;
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r8,r10,r31
	ctx.r8.u64 = ctx.r10.u64 + ctx.r31.u64;
	// rotlwi r10,r30,30
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r30.u32, 30);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// bdnz 0x832bb238
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832BB238;
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r5,r1,-356
	ctx.r5.s64 = ctx.r1.s64 + -356;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// lis r7,28377
	ctx.r7.s64 = 1859715072;
	// ori r7,r7,60321
	ctx.r7.u64 = ctx.r7.u64 | 60321;
loc_832BB330:
	// xor r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// lwz r30,4(r5)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// rotlwi r31,r8,5
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r8.u32, 5);
	// lwz r29,8(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// xor r4,r4,r11
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r11.u64;
	// lwz r28,12(r5)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// rotlwi r11,r11,30
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 30);
	// lwz r27,16(r5)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// add r31,r31,r4
	ctx.r31.u64 = ctx.r31.u64 + ctx.r4.u64;
	// lwzu r4,20(r5)
	ea = 20 + ctx.r5.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r5.u32 = ea;
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// add r8,r31,r6
	ctx.r8.u64 = ctx.r31.u64 + ctx.r6.u64;
	// xor r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// xor r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r30.u64;
	// rotlwi r31,r8,5
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r8.u32, 5);
	// add r6,r31,r6
	ctx.r6.u64 = ctx.r31.u64 + ctx.r6.u64;
	// add r31,r6,r29
	ctx.r31.u64 = ctx.r6.u64 + ctx.r29.u64;
	// rotlwi r6,r30,30
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r30.u32, 30);
	// add r9,r31,r9
	ctx.r9.u64 = ctx.r31.u64 + ctx.r9.u64;
	// xor r31,r11,r6
	ctx.r31.u64 = ctx.r11.u64 ^ ctx.r6.u64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// xor r8,r31,r8
	ctx.r8.u64 = ctx.r31.u64 ^ ctx.r8.u64;
	// rotlwi r31,r9,5
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r9.u32, 5);
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// add r8,r31,r8
	ctx.r8.u64 = ctx.r31.u64 + ctx.r8.u64;
	// add r31,r8,r28
	ctx.r31.u64 = ctx.r8.u64 + ctx.r28.u64;
	// rotlwi r8,r30,30
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r30.u32, 30);
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// xor r31,r6,r8
	ctx.r31.u64 = ctx.r6.u64 ^ ctx.r8.u64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// xor r9,r31,r9
	ctx.r9.u64 = ctx.r31.u64 ^ ctx.r9.u64;
	// rotlwi r30,r10,5
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r10.u32, 5);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// add r9,r30,r9
	ctx.r9.u64 = ctx.r30.u64 + ctx.r9.u64;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// add r6,r9,r27
	ctx.r6.u64 = ctx.r9.u64 + ctx.r27.u64;
	// rotlwi r9,r29,30
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r29.u32, 30);
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// xor r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// add r11,r6,r7
	ctx.r11.u64 = ctx.r6.u64 + ctx.r7.u64;
	// xor r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r30.u64;
	// rotlwi r6,r11,5
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 5);
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r8,r10,r31
	ctx.r8.u64 = ctx.r10.u64 + ctx.r31.u64;
	// rotlwi r10,r30,30
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r30.u32, 30);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// bdnz 0x832bb330
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832BB330;
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r5,r1,-276
	ctx.r5.s64 = ctx.r1.s64 + -276;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// lis r7,28900
	ctx.r7.s64 = 1893990400;
	// ori r7,r7,17188
	ctx.r7.u64 = ctx.r7.u64 | 17188;
loc_832BB414:
	// or r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 | ctx.r11.u64;
	// lwz r27,4(r5)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// and r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 & ctx.r11.u64;
	// lwz r28,8(r5)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// and r4,r4,r9
	ctx.r4.u64 = ctx.r4.u64 & ctx.r9.u64;
	// lwz r31,12(r5)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// rotlwi r11,r11,30
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 30);
	// lwz r30,16(r5)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// or r29,r4,r29
	ctx.r29.u64 = ctx.r4.u64 | ctx.r29.u64;
	// lwzu r4,20(r5)
	ea = 20 + ctx.r5.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r5.u32 = ea;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// add r29,r29,r27
	ctx.r29.u64 = ctx.r29.u64 + ctx.r27.u64;
	// or r27,r11,r8
	ctx.r27.u64 = ctx.r11.u64 | ctx.r8.u64;
	// add r29,r29,r6
	ctx.r29.u64 = ctx.r29.u64 + ctx.r6.u64;
	// rotlwi r6,r8,5
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 5);
	// subf r29,r7,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r7.s64;
	// add r8,r6,r29
	ctx.r8.u64 = ctx.r6.u64 + ctx.r29.u64;
	// and r29,r27,r10
	ctx.r29.u64 = ctx.r27.u64 & ctx.r10.u64;
	// and r27,r11,r26
	ctx.r27.u64 = ctx.r11.u64 & ctx.r26.u64;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// rotlwi r10,r26,30
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r26.u32, 30);
	// or r29,r29,r27
	ctx.r29.u64 = ctx.r29.u64 | ctx.r27.u64;
	// or r27,r10,r8
	ctx.r27.u64 = ctx.r10.u64 | ctx.r8.u64;
	// add r29,r29,r28
	ctx.r29.u64 = ctx.r29.u64 + ctx.r28.u64;
	// and r28,r27,r11
	ctx.r28.u64 = ctx.r27.u64 & ctx.r11.u64;
	// and r27,r10,r8
	ctx.r27.u64 = ctx.r10.u64 & ctx.r8.u64;
	// add r26,r29,r9
	ctx.r26.u64 = ctx.r29.u64 + ctx.r9.u64;
	// or r9,r28,r27
	ctx.r9.u64 = ctx.r28.u64 | ctx.r27.u64;
	// rotlwi r29,r8,5
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r8.u32, 5);
	// subf r28,r7,r26
	ctx.r28.s64 = ctx.r26.s64 - ctx.r7.s64;
	// mr r20,r8
	ctx.r20.u64 = ctx.r8.u64;
	// add r8,r9,r31
	ctx.r8.u64 = ctx.r9.u64 + ctx.r31.u64;
	// add r9,r29,r28
	ctx.r9.u64 = ctx.r29.u64 + ctx.r28.u64;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// rotlwi r11,r20,30
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r20.u32, 30);
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// rotlwi r8,r9,5
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 5);
	// or r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 | ctx.r9.u64;
	// subf r6,r7,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r7.s64;
	// and r28,r11,r29
	ctx.r28.u64 = ctx.r11.u64 & ctx.r29.u64;
	// and r26,r9,r10
	ctx.r26.u64 = ctx.r9.u64 & ctx.r10.u64;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// rotlwi r9,r29,30
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r29.u32, 30);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// or r11,r26,r28
	ctx.r11.u64 = ctx.r26.u64 | ctx.r28.u64;
	// or r29,r9,r8
	ctx.r29.u64 = ctx.r9.u64 | ctx.r8.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// and r28,r9,r8
	ctx.r28.u64 = ctx.r9.u64 & ctx.r8.u64;
	// and r30,r29,r6
	ctx.r30.u64 = ctx.r29.u64 & ctx.r6.u64;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// or r30,r30,r28
	ctx.r30.u64 = ctx.r30.u64 | ctx.r28.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// rotlwi r11,r8,5
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 5);
	// add r8,r30,r4
	ctx.r8.u64 = ctx.r30.u64 + ctx.r4.u64;
	// subf r31,r7,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r7.s64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// rotlwi r10,r11,5
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 5);
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rotlwi r10,r27,30
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r27.u32, 30);
	// bdnz 0x832bb414
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832BB414;
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r5,r1,-196
	ctx.r5.s64 = ctx.r1.s64 + -196;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// lis r7,13725
	ctx.r7.s64 = 899481600;
	// ori r7,r7,15914
	ctx.r7.u64 = ctx.r7.u64 | 15914;
loc_832BB524:
	// xor r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// lwz r31,4(r5)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// lwz r29,8(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// xor r4,r4,r11
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r11.u64;
	// lwz r28,12(r5)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// rotlwi r11,r11,30
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 30);
	// lwz r30,16(r5)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// add r31,r4,r31
	ctx.r31.u64 = ctx.r4.u64 + ctx.r31.u64;
	// lwzu r4,20(r5)
	ea = 20 + ctx.r5.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r5.u32 = ea;
	// xor r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// add r31,r31,r6
	ctx.r31.u64 = ctx.r31.u64 + ctx.r6.u64;
	// rotlwi r6,r8,5
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 5);
	// subf r31,r7,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r7.s64;
	// add r8,r6,r31
	ctx.r8.u64 = ctx.r6.u64 + ctx.r31.u64;
	// xor r31,r27,r26
	ctx.r31.u64 = ctx.r27.u64 ^ ctx.r26.u64;
	// rotlwi r6,r26,30
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r26.u32, 30);
	// add r31,r31,r29
	ctx.r31.u64 = ctx.r31.u64 + ctx.r29.u64;
	// xor r27,r11,r6
	ctx.r27.u64 = ctx.r11.u64 ^ ctx.r6.u64;
	// add r31,r31,r9
	ctx.r31.u64 = ctx.r31.u64 + ctx.r9.u64;
	// xor r29,r27,r8
	ctx.r29.u64 = ctx.r27.u64 ^ ctx.r8.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// rotlwi r9,r8,5
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 5);
	// subf r31,r7,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r7.s64;
	// add r8,r29,r28
	ctx.r8.u64 = ctx.r29.u64 + ctx.r28.u64;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// add r31,r8,r10
	ctx.r31.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rotlwi r10,r26,30
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r26.u32, 30);
	// subf r31,r7,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r7.s64;
	// rotlwi r8,r9,5
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 5);
	// xor r29,r6,r10
	ctx.r29.u64 = ctx.r6.u64 ^ ctx.r10.u64;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// rotlwi r9,r9,30
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 30);
	// xor r31,r29,r28
	ctx.r31.u64 = ctx.r29.u64 ^ ctx.r28.u64;
	// xor r28,r10,r9
	ctx.r28.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
	// xor r30,r28,r8
	ctx.r30.u64 = ctx.r28.u64 ^ ctx.r8.u64;
	// add r31,r31,r11
	ctx.r31.u64 = ctx.r31.u64 + ctx.r11.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// rotlwi r11,r8,5
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 5);
	// add r8,r30,r4
	ctx.r8.u64 = ctx.r30.u64 + ctx.r4.u64;
	// subf r31,r7,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r7.s64;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// subf r4,r7,r8
	ctx.r4.s64 = ctx.r8.s64 - ctx.r7.s64;
	// rotlwi r8,r11,5
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 5);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// rotlwi r10,r29,30
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r29.u32, 30);
	// bdnz 0x832bb524
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832BB524;
	// add r7,r24,r11
	ctx.r7.u64 = ctx.r24.u64 + ctx.r11.u64;
	// add r8,r25,r8
	ctx.r8.u64 = ctx.r25.u64 + ctx.r8.u64;
	// add r5,r23,r10
	ctx.r5.u64 = ctx.r23.u64 + ctx.r10.u64;
	// stw r7,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r7.u32);
	// add r4,r22,r9
	ctx.r4.u64 = ctx.r22.u64 + ctx.r9.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// add r11,r21,r6
	ctx.r11.u64 = ctx.r21.u64 + ctx.r6.u64;
	// stw r5,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r5.u32);
	// stw r4,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r4.u32);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BB61C"))) PPC_WEAK_FUNC(sub_832BB61C);
PPC_FUNC_IMPL(__imp__sub_832BB61C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BB620"))) PPC_WEAK_FUNC(sub_832BB620);
PPC_FUNC_IMPL(__imp__sub_832BB620) {
	PPC_FUNC_PROLOGUE();
	// lis r11,26437
	ctx.r11.s64 = 1732575232;
	// lis r10,-4147
	ctx.r10.s64 = -271777792;
	// lis r9,-26438
	ctx.r9.s64 = -1732640768;
	// lis r8,4146
	ctx.r8.s64 = 271712256;
	// ori r11,r11,8961
	ctx.r11.u64 = ctx.r11.u64 | 8961;
	// ori r10,r10,43913
	ctx.r10.u64 = ctx.r10.u64 | 43913;
	// ori r9,r9,56574
	ctx.r9.u64 = ctx.r9.u64 | 56574;
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// ori r8,r8,21622
	ctx.r8.u64 = ctx.r8.u64 | 21622;
	// stw r10,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// stw r9,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r9.u32);
	// stw r8,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832BB654"))) PPC_WEAK_FUNC(sub_832BB654);
PPC_FUNC_IMPL(__imp__sub_832BB654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BB658"))) PPC_WEAK_FUNC(sub_832BB658);
PPC_FUNC_IMPL(__imp__sub_832BB658) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x832BB660;
	__savegprlr_19(ctx, base);
	// li r9,16
	ctx.r9.s64 = 16;
	// lwz r25,72(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// lwz r24,76(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// lwz r23,80(r3)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// addi r11,r3,72
	ctx.r11.s64 = ctx.r3.s64 + 72;
	// lwz r22,84(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_832BB684:
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm r7,r9,8,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF;
	// rlwimi r7,r9,24,16,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 24) & 0xFF00) | (ctx.r7.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r7,r9,8,8,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFF0000) | (ctx.r7.u64 & 0xFFFFFFFFFF00FFFF);
	// rlwimi r7,r9,24,0,7
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 24) & 0xFF000000) | (ctx.r7.u64 & 0xFFFFFFFF00FFFFFF);
	// stwu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x832bb684
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832BB684;
	// li r9,4
	ctx.r9.s64 = 4;
	// lis r8,-32220
	ctx.r8.s64 = -2111569920;
	// addi r26,r8,-20784
	ctx.r26.s64 = ctx.r8.s64 + -20784;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// addi r8,r26,-8
	ctx.r8.s64 = ctx.r26.s64 + -8;
	// addi r9,r3,12
	ctx.r9.s64 = ctx.r3.s64 + 12;
	// subf r30,r3,r26
	ctx.r30.s64 = ctx.r26.s64 - ctx.r3.s64;
loc_832BB6BC:
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// andc r29,r6,r7
	ctx.r29.u64 = ctx.r6.u64 & ~ctx.r7.u64;
	// lwz r6,-4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// and r5,r5,r7
	ctx.r5.u64 = ctx.r5.u64 & ctx.r7.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r31,8(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// or r5,r29,r5
	ctx.r5.u64 = ctx.r29.u64 | ctx.r5.u64;
	// add r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 + ctx.r6.u64;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// add r4,r6,r31
	ctx.r4.u64 = ctx.r6.u64 + ctx.r31.u64;
	// rotlwi r6,r4,7
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r4.u32, 7);
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// rotlwi r7,r7,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r29,8(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r4,12(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r31,0(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// and r5,r5,r7
	ctx.r5.u64 = ctx.r5.u64 & ctx.r7.u64;
	// andc r29,r29,r7
	ctx.r29.u64 = ctx.r29.u64 & ~ctx.r7.u64;
	// or r5,r29,r5
	ctx.r5.u64 = ctx.r29.u64 | ctx.r5.u64;
	// add r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 + ctx.r6.u64;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// add r4,r6,r31
	ctx.r4.u64 = ctx.r6.u64 + ctx.r31.u64;
	// rotlwi r6,r4,12
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r4.u32, 12);
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// rotlwi r7,r7,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r29,4(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwzu r6,16(r8)
	ea = 16 + ctx.r8.u32;
	ctx.r6.u64 = PPC_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// and r4,r4,r7
	ctx.r4.u64 = ctx.r4.u64 & ctx.r7.u64;
	// andc r29,r29,r7
	ctx.r29.u64 = ctx.r29.u64 & ~ctx.r7.u64;
	// or r4,r29,r4
	ctx.r4.u64 = ctx.r29.u64 | ctx.r4.u64;
	// add r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 + ctx.r5.u64;
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// add r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 + ctx.r6.u64;
	// rotlwi r6,r6,17
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 17);
	// add r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 + ctx.r7.u64;
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r6,r9,r30
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// lwz r4,8(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// and r5,r5,r7
	ctx.r5.u64 = ctx.r5.u64 & ctx.r7.u64;
	// andc r29,r29,r7
	ctx.r29.u64 = ctx.r29.u64 & ~ctx.r7.u64;
	// or r5,r29,r5
	ctx.r5.u64 = ctx.r29.u64 | ctx.r5.u64;
	// add r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 + ctx.r6.u64;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// add r4,r6,r31
	ctx.r4.u64 = ctx.r6.u64 + ctx.r31.u64;
	// rotlwi r6,r4,22
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r4.u32, 22);
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// bdnz 0x832bb6bc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832BB6BC;
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r8,r26,56
	ctx.r8.s64 = ctx.r26.s64 + 56;
	// addi r7,r26,60
	ctx.r7.s64 = ctx.r26.s64 + 60;
	// addi r6,r26,64
	ctx.r6.s64 = ctx.r26.s64 + 64;
	// addi r5,r26,68
	ctx.r5.s64 = ctx.r26.s64 + 68;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// li r9,-5
	ctx.r9.s64 = -5;
	// subf r30,r3,r8
	ctx.r30.s64 = ctx.r8.s64 - ctx.r3.s64;
	// subf r29,r3,r7
	ctx.r29.s64 = ctx.r7.s64 - ctx.r3.s64;
	// subf r28,r3,r6
	ctx.r28.s64 = ctx.r6.s64 - ctx.r3.s64;
	// subf r27,r3,r5
	ctx.r27.s64 = ctx.r5.s64 - ctx.r3.s64;
loc_832BB7E0:
	// addi r7,r9,-5
	ctx.r7.s64 = ctx.r9.s64 + -5;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// clrlwi r4,r9,28
	ctx.r4.u64 = ctx.r9.u32 & 0xF;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// clrlwi r7,r7,28
	ctx.r7.u64 = ctx.r7.u32 & 0xF;
	// and r21,r6,r8
	ctx.r21.u64 = ctx.r6.u64 & ctx.r8.u64;
	// lwzx r31,r30,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// andc r20,r5,r6
	ctx.r20.u64 = ctx.r5.u64 & ~ctx.r6.u64;
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r19,r7,2
	ctx.r19.s64 = ctx.r7.s64 + 2;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// or r7,r20,r21
	ctx.r7.u64 = ctx.r20.u64 | ctx.r21.u64;
	// rlwinm r21,r19,2,0,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r7,r31
	ctx.r7.u64 = ctx.r7.u64 + ctx.r31.u64;
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// rlwinm r31,r4,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// rotlwi r7,r7,5
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 5);
	// add r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// lwzx r5,r29,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// and r20,r7,r8
	ctx.r20.u64 = ctx.r7.u64 & ctx.r8.u64;
	// lwzx r4,r21,r3
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r3.u32);
	// lwz r21,4(r11)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// andc r7,r21,r7
	ctx.r7.u64 = ctx.r21.u64 & ~ctx.r7.u64;
	// or r7,r7,r20
	ctx.r7.u64 = ctx.r7.u64 | ctx.r20.u64;
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// add r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 + ctx.r6.u64;
	// rotlwi r7,r6,9
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r6.u32, 9);
	// add r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r5,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r4,r31,r3
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// lwzx r5,r28,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// and r21,r31,r8
	ctx.r21.u64 = ctx.r31.u64 & ctx.r8.u64;
	// andc r7,r7,r31
	ctx.r7.u64 = ctx.r7.u64 & ~ctx.r31.u64;
	// or r7,r7,r21
	ctx.r7.u64 = ctx.r7.u64 | ctx.r21.u64;
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// add r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 + ctx.r6.u64;
	// rotlwi r7,r6,14
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r6.u32, 14);
	// add r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwzx r4,r27,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r10.u32);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// and r21,r31,r8
	ctx.r21.u64 = ctx.r31.u64 & ctx.r8.u64;
	// andc r7,r7,r31
	ctx.r7.u64 = ctx.r7.u64 & ~ctx.r31.u64;
	// or r7,r7,r21
	ctx.r7.u64 = ctx.r7.u64 | ctx.r21.u64;
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// add r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 + ctx.r6.u64;
	// rotlwi r7,r6,20
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r6.u32, 20);
	// add r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// bdnz 0x832bb7e0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832BB7E0;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r29,r3,64
	ctx.r29.s64 = ctx.r3.s64 + 64;
	// addi r9,r26,124
	ctx.r9.s64 = ctx.r26.s64 + 124;
	// addi r7,r29,16
	ctx.r7.s64 = ctx.r29.s64 + 16;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// li r10,-8
	ctx.r10.s64 = -8;
loc_832BB910:
	// addi r8,r10,-3
	ctx.r8.s64 = ctx.r10.s64 + -3;
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// clrlwi r31,r10,28
	ctx.r31.u64 = ctx.r10.u32 & 0xF;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// clrlwi r6,r8,28
	ctx.r6.u64 = ctx.r8.u32 & 0xF;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// xor r30,r5,r4
	ctx.r30.u64 = ctx.r5.u64 ^ ctx.r4.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r28,r6,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r27,r31,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// xor r6,r30,r8
	ctx.r6.u64 = ctx.r30.u64 ^ ctx.r8.u64;
	// addi r30,r10,3
	ctx.r30.s64 = ctx.r10.s64 + 3;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// lwzx r31,r28,r3
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r3.u32);
	// clrlwi r30,r30,28
	ctx.r30.u64 = ctx.r30.u32 & 0xF;
	// add r6,r6,r31
	ctx.r6.u64 = ctx.r6.u64 + ctx.r31.u64;
	// addi r31,r30,2
	ctx.r31.s64 = ctx.r30.s64 + 2;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// rlwinm r30,r31,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r6,r5
	ctx.r5.u64 = ctx.r6.u64 + ctx.r5.u64;
	// rotlwi r6,r5,4
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r5.u32, 4);
	// add r4,r6,r8
	ctx.r4.u64 = ctx.r6.u64 + ctx.r8.u64;
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// rotlwi r8,r4,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// lwzx r31,r27,r3
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r3.u32);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r28,8(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// xor r6,r28,r6
	ctx.r6.u64 = ctx.r28.u64 ^ ctx.r6.u64;
	// xor r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r8.u64;
	// add r6,r6,r31
	ctx.r6.u64 = ctx.r6.u64 + ctx.r31.u64;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// add r5,r6,r5
	ctx.r5.u64 = ctx.r6.u64 + ctx.r5.u64;
	// rotlwi r6,r5,11
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r5.u32, 11);
	// add r4,r6,r8
	ctx.r4.u64 = ctx.r6.u64 + ctx.r8.u64;
	// stw r4,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r4.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwzx r6,r30,r3
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r3.u32);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r5,12(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// xor r31,r30,r31
	ctx.r31.u64 = ctx.r30.u64 ^ ctx.r31.u64;
	// xor r31,r31,r8
	ctx.r31.u64 = ctx.r31.u64 ^ ctx.r8.u64;
	// add r6,r6,r31
	ctx.r6.u64 = ctx.r6.u64 + ctx.r31.u64;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// rotlwi r6,r6,16
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 16);
	// add r5,r6,r8
	ctx.r5.u64 = ctx.r6.u64 + ctx.r8.u64;
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// lwzu r6,-16(r7)
	ea = -16 + ctx.r7.u32;
	ctx.r6.u64 = PPC_LOAD_U32(ea);
	ctx.r7.u32 = ea;
	// lwzu r5,16(r9)
	ea = 16 + ctx.r9.u32;
	ctx.r5.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// xor r30,r8,r31
	ctx.r30.u64 = ctx.r8.u64 ^ ctx.r31.u64;
	// xor r4,r30,r4
	ctx.r4.u64 = ctx.r30.u64 ^ ctx.r4.u64;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + ctx.r31.u64;
	// add r6,r4,r6
	ctx.r6.u64 = ctx.r4.u64 + ctx.r6.u64;
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// rotlwi r6,r6,23
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 23);
	// add r5,r6,r8
	ctx.r5.u64 = ctx.r6.u64 + ctx.r8.u64;
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// bdnz 0x832bb910
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832BB910;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r9,r26,188
	ctx.r9.s64 = ctx.r26.s64 + 188;
	// addi r7,r29,16
	ctx.r7.s64 = ctx.r29.s64 + 16;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// li r10,5
	ctx.r10.s64 = 5;
loc_832BBA38:
	// addi r6,r10,-5
	ctx.r6.s64 = ctx.r10.s64 + -5;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// clrlwi r31,r10,28
	ctx.r31.u64 = ctx.r10.u32 & 0xF;
	// clrlwi r6,r6,28
	ctx.r6.u64 = ctx.r6.u32 & 0xF;
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// orc r29,r8,r5
	ctx.r29.u64 = ctx.r8.u64 | ~ctx.r5.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// rlwinm r28,r6,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// xor r6,r29,r30
	ctx.r6.u64 = ctx.r29.u64 ^ ctx.r30.u64;
	// rlwinm r29,r31,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r10,2
	ctx.r30.s64 = ctx.r10.s64 + 2;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// lwzx r31,r28,r3
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r3.u32);
	// clrlwi r30,r30,28
	ctx.r30.u64 = ctx.r30.u32 & 0xF;
	// add r6,r6,r31
	ctx.r6.u64 = ctx.r6.u64 + ctx.r31.u64;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// rlwinm r31,r30,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r6,r5
	ctx.r5.u64 = ctx.r6.u64 + ctx.r5.u64;
	// rotlwi r6,r5,6
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r5.u32, 6);
	// add r4,r6,r8
	ctx.r4.u64 = ctx.r6.u64 + ctx.r8.u64;
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// rotlwi r8,r4,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r31,r31,r3
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// orc r5,r8,r5
	ctx.r5.u64 = ctx.r8.u64 | ~ctx.r5.u64;
	// xor r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 ^ ctx.r6.u64;
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r6,r6,r31
	ctx.r6.u64 = ctx.r6.u64 + ctx.r31.u64;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// add r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 + ctx.r5.u64;
	// rotlwi r6,r4,10
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r4.u32, 10);
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// rotlwi r8,r8,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwzu r6,-16(r7)
	ea = -16 + ctx.r7.u32;
	ctx.r6.u64 = PPC_LOAD_U32(ea);
	ctx.r7.u32 = ea;
	// lwz r5,12(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// orc r30,r8,r30
	ctx.r30.u64 = ctx.r8.u64 | ~ctx.r30.u64;
	// xor r4,r30,r4
	ctx.r4.u64 = ctx.r30.u64 ^ ctx.r4.u64;
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + ctx.r31.u64;
	// add r6,r4,r6
	ctx.r6.u64 = ctx.r4.u64 + ctx.r6.u64;
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// rotlwi r6,r6,15
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 15);
	// add r5,r6,r8
	ctx.r5.u64 = ctx.r6.u64 + ctx.r8.u64;
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// rotlwi r8,r5,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// lwz r31,12(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// orc r30,r8,r5
	ctx.r30.u64 = ctx.r8.u64 | ~ctx.r5.u64;
	// xor r31,r30,r31
	ctx.r31.u64 = ctx.r30.u64 ^ ctx.r31.u64;
	// lwzx r5,r29,r3
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r3.u32);
	// lwzu r6,16(r9)
	ea = 16 + ctx.r9.u32;
	ctx.r6.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// add r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 + ctx.r6.u64;
	// rotlwi r6,r4,21
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r4.u32, 21);
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// bdnz 0x832bba38
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832BBA38;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,76(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// add r7,r25,r10
	ctx.r7.u64 = ctx.r25.u64 + ctx.r10.u64;
	// lwz r9,80(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// lwz r10,84(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// add r6,r8,r24
	ctx.r6.u64 = ctx.r8.u64 + ctx.r24.u64;
	// add r5,r9,r23
	ctx.r5.u64 = ctx.r9.u64 + ctx.r23.u64;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// add r4,r10,r22
	ctx.r4.u64 = ctx.r10.u64 + ctx.r22.u64;
	// stw r6,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r6.u32);
	// stw r5,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r5.u32);
	// stw r4,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r4.u32);
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BBB80"))) PPC_WEAK_FUNC(sub_832BBB80);
PPC_FUNC_IMPL(__imp__sub_832BBB80) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,128
	ctx.r9.s64 = 128;
	// rlwinm r7,r11,3,29,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x7;
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// rlwinm r5,r7,8,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFF;
	// rlwinm r6,r8,8,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFF;
	// rlwimi r5,r7,24,16,23
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r7.u32, 24) & 0xFF00) | (ctx.r5.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r6,r8,24,16,23
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 24) & 0xFF00) | (ctx.r6.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r5,r7,8,8,15
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r7.u32, 8) & 0xFF0000) | (ctx.r5.u64 & 0xFFFFFFFFFF00FFFF);
	// rlwimi r6,r8,8,8,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xFF0000) | (ctx.r6.u64 & 0xFFFFFFFFFF00FFFF);
	// rlwimi r5,r7,24,0,7
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r7.u32, 24) & 0xFF000000) | (ctx.r5.u64 & 0xFFFFFFFF00FFFFFF);
	// rlwimi r6,r8,24,0,7
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 24) & 0xFF000000) | (ctx.r6.u64 & 0xFFFFFFFF00FFFFFF);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r4,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x832aa6e0
	ctx.lr = 0x832BBBE8;
	sub_832AA6E0(ctx, base);
	// lhz r3,2(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// cmplwi cr6,r3,56
	cr6.compare<uint32_t>(ctx.r3.u32, 56, xer);
	// beq cr6,0x832bbc10
	if (cr6.eq) goto loc_832BBC10;
loc_832BBBF4:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832aa6e0
	ctx.lr = 0x832BBC04;
	sub_832AA6E0(ctx, base);
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// cmplwi cr6,r11,56
	cr6.compare<uint32_t>(ctx.r11.u32, 56, xer);
	// bne cr6,0x832bbbf4
	if (!cr6.eq) goto loc_832BBBF4;
loc_832BBC10:
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832aa6e0
	ctx.lr = 0x832BBC20;
	sub_832AA6E0(ctx, base);
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_832BBC30:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r10,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// rlwimi r9,r10,24,16,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 24) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r9,r10,8,8,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF0000) | (ctx.r9.u64 & 0xFFFFFFFFFF00FFFF);
	// rlwimi r9,r10,24,0,7
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 24) & 0xFF000000) | (ctx.r9.u64 & 0xFFFFFFFF00FFFFFF);
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x832bbc30
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832BBC30;
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

__attribute__((alias("__imp__sub_832BBC60"))) PPC_WEAK_FUNC(sub_832BBC60);
PPC_FUNC_IMPL(__imp__sub_832BBC60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// not r11,r3
	ctx.r11.u64 = ~ctx.r3.u64;
	// cmplwi cr6,r5,4
	cr6.compare<uint32_t>(ctx.r5.u32, 4, xer);
	// blt cr6,0x832bbc9c
	if (cr6.lt) goto loc_832BBC9C;
	// rlwinm r10,r5,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_832BBC74:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r5,-4
	ctx.r5.s64 = ctx.r5.s64 + -4;
	// and r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ctx.r11.u64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// and r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 & ctx.r11.u64;
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// and r3,r6,r11
	ctx.r3.u64 = ctx.r6.u64 & ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// and r4,r3,r4
	ctx.r4.u64 = ctx.r3.u64 & ctx.r4.u64;
	// bdnz 0x832bbc74
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_832BBC74;
loc_832BBC9C:
	// subfic r10,r5,2
	xer.ca = ctx.r5.u32 <= 2;
	ctx.r10.s64 = 2 - ctx.r5.s64;
	// subfic r9,r5,1
	xer.ca = ctx.r5.u32 <= 1;
	ctx.r9.s64 = 1 - ctx.r5.s64;
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// neg r8,r5
	ctx.r8.s64 = -ctx.r5.s64;
	// rlwinm r9,r9,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r9,-1
	ctx.r5.s64 = ctx.r9.s64 + -1;
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r8,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// or r9,r7,r6
	ctx.r9.u64 = ctx.r7.u64 | ctx.r6.u64;
	// or r8,r5,r3
	ctx.r8.u64 = ctx.r5.u64 | ctx.r3.u64;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// and r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 & ctx.r8.u64;
	// or r5,r7,r11
	ctx.r5.u64 = ctx.r7.u64 | ctx.r11.u64;
	// and r3,r6,r5
	ctx.r3.u64 = ctx.r6.u64 & ctx.r5.u64;
	// and r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 & ctx.r4.u64;
	// cntlzw r3,r11
	ctx.r3.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832BBCE8"))) PPC_WEAK_FUNC(sub_832BBCE8);
PPC_FUNC_IMPL(__imp__sub_832BBCE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832BBCF0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,4(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r28,0(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// rlwinm r11,r29,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// oris r27,r11,32768
	ctx.r27.u64 = ctx.r11.u64 | 2147483648;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x832bbc60
	ctx.lr = 0x832BBD1C;
	sub_832BBC60(ctx, base);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// addi r9,r30,-1
	ctx.r9.s64 = ctx.r30.s64 + -1;
	// lbz r11,9(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9);
	// srw r8,r10,r3
	ctx.r8.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r3.u8 & 0x3F));
	// srw r7,r8,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r9.u8 & 0x3F));
	// or r6,r8,r28
	ctx.r6.u64 = ctx.r8.u64 | ctx.r28.u64;
	// rlwinm r5,r7,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// not r11,r6
	ctx.r11.u64 = ~ctx.r6.u64;
	// or r10,r5,r27
	ctx.r10.u64 = ctx.r5.u64 | ctx.r27.u64;
	// stb r4,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r4.u8);
	// or r9,r7,r29
	ctx.r9.u64 = ctx.r7.u64 | ctx.r29.u64;
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832bbd78
	if (cr6.eq) goto loc_832BBD78;
loc_832BBD64:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// and r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x832bbd64
	if (!cr6.eq) goto loc_832BBD64;
loc_832BBD78:
	// stb r9,10(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10, ctx.r9.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BBD84"))) PPC_WEAK_FUNC(sub_832BBD84);
PPC_FUNC_IMPL(__imp__sub_832BBD84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BBD88"))) PPC_WEAK_FUNC(sub_832BBD88);
PPC_FUNC_IMPL(__imp__sub_832BBD88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// slw. r10,r7,r4
	ctx.r10.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r4.u8 & 0x3F));
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bge 0x832bbdb0
	if (!cr0.lt) goto loc_832BBDB0;
	// slw r10,r8,r4
	ctx.r10.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r4.u8 & 0x3F));
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r3,32
	cr6.compare<uint32_t>(ctx.r3.u32, 32, xer);
	// ble cr6,0x832bbdbc
	if (!cr6.gt) goto loc_832BBDBC;
loc_832BBDB0:
	// lis r3,-32757
	ctx.r3.s64 = -2146762752;
	// ori r3,r3,9350
	ctx.r3.u64 = ctx.r3.u64 | 9350;
	// blr 
	return;
loc_832BBDBC:
	// add r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lbz r6,9(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// srw r4,r9,r4
	ctx.r4.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r4.u8 & 0x3F));
	// srw r10,r9,r5
	ctx.r10.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r5.u8 & 0x3F));
	// andc r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 & ~ctx.r10.u64;
	// andc r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 & ~ctx.r4.u64;
	// rlwimi r9,r8,31,1,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 31) & 0x7FFFFFFF) | (ctx.r9.u64 & 0xFFFFFFFF80000000);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// not r10,r7
	ctx.r10.u64 = ~ctx.r7.u64;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// subf r6,r3,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r3.s64;
	// and r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 & ctx.r10.u64;
	// stb r6,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r6.u8);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x832bbe18
	if (cr6.eq) goto loc_832BBE18;
loc_832BBE04:
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// and r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 & ctx.r9.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x832bbe04
	if (!cr6.eq) goto loc_832BBE04;
loc_832BBE18:
	// stb r8,10(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832BBE20"))) PPC_WEAK_FUNC(sub_832BBE20);
PPC_FUNC_IMPL(__imp__sub_832BBE20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// cmplwi cr6,r5,7
	cr6.compare<uint32_t>(ctx.r5.u32, 7, xer);
	// bge cr6,0x832bbe34
	if (!cr6.lt) goto loc_832BBE34;
	// li r8,64
	ctx.r8.s64 = 64;
	// b 0x832bbe3c
	goto loc_832BBE3C;
loc_832BBE34:
	// li r11,1
	ctx.r11.s64 = 1;
	// slw r8,r11,r5
	ctx.r8.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r5.u8 & 0x3F));
loc_832BBE3C:
	// addi r11,r6,-1
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// stw r4,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// subfic r10,r6,31
	xer.ca = ctx.r6.u32 <= 31;
	ctx.r10.s64 = 31 - ctx.r6.s64;
	// stw r8,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r8.u32);
	// rlwinm r7,r11,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// stb r6,9(r3)
	PPC_STORE_U8(ctx.r3.u32 + 9, ctx.r6.u8);
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// addi r9,r7,-1
	ctx.r9.s64 = ctx.r7.s64 + -1;
	// subfe r7,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r4.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r4,r9,31,0,0
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x80000000;
	// li r9,0
	ctx.r9.s64 = 0;
	// srw r31,r4,r11
	ctx.r31.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r11.u8 & 0x3F));
	// addi r11,r3,28
	ctx.r11.s64 = ctx.r3.s64 + 28;
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// clrlwi r5,r5,24
	ctx.r5.u64 = ctx.r5.u32 & 0xFF;
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// and r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 & ctx.r10.u64;
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// li r11,31
	ctx.r11.s64 = 31;
	// stb r5,11(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11, ctx.r5.u8);
	// slw r10,r9,r5
	ctx.r10.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r5.u8 & 0x3F));
	// ori r5,r4,1
	ctx.r5.u64 = ctx.r4.u64 | 1;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// ori r4,r31,1
	ctx.r4.u64 = ctx.r31.u64 | 1;
	// stb r7,10(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10, ctx.r7.u8);
	// add r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832BBEBC"))) PPC_WEAK_FUNC(sub_832BBEBC);
PPC_FUNC_IMPL(__imp__sub_832BBEBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BBEC0"))) PPC_WEAK_FUNC(sub_832BBEC0);
PPC_FUNC_IMPL(__imp__sub_832BBEC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832BBEC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r10,148(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 148);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r30,r3,144
	ctx.r30.s64 = ctx.r3.s64 + 144;
loc_832BBEDC:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r30
	ea = ctx.r30.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r29,0,r30
	ea = ctx.r30.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r29.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x832bbedc
	if (!cr0.eq) goto loc_832BBEDC;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// lwsync 
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832bbf44
	if (cr6.eq) goto loc_832BBF44;
loc_832BBF04:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// bne cr6,0x832bbf1c
	if (!cr6.eq) goto loc_832BBF1C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x832b2e08
	ctx.lr = 0x832BBF18;
	sub_832B2E08(ctx, base);
	// lhz r10,148(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 148);
loc_832BBF1C:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r30
	ea = ctx.r30.u32;
	ctx.reservation = 0x100000000ull | ea;
	reserved.u32 = *(volatile uint32_t*)(base + ea);
	ctx.r11.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r29,0,r30
	ea = ctx.r30.u32;
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = ctx.reservation == (0x100000000ull | ea) && __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ea), reserved.s32, __builtin_bswap32(ctx.r29.s32));
	ctx.reservation = 0;
	cr0.so = xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x832bbf1c
	if (!cr0.eq) goto loc_832BBF1C;
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// lwsync 
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832bbf04
	if (!cr6.eq) goto loc_832BBF04;
loc_832BBF44:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BBF4C"))) PPC_WEAK_FUNC(sub_832BBF4C);
PPC_FUNC_IMPL(__imp__sub_832BBF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832BBF50"))) PPC_WEAK_FUNC(sub_832BBF50);
PPC_FUNC_IMPL(__imp__sub_832BBF50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x832BBF58;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// bl 0x832bbec0
	ctx.lr = 0x832BBF78;
	sub_832BBEC0(ctx, base);
	// lwz r9,132(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// lis r25,-32768
	ctx.r25.s64 = -2147483648;
	// slw r11,r9,r29
	ctx.r11.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r29.u8 & 0x3F));
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplwi cr6,r11,31
	cr6.compare<uint32_t>(ctx.r11.u32, 31, xer);
	// bgt cr6,0x832bbff4
	if (cr6.gt) goto loc_832BBFF4;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r6,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r6.u32);
	// stw r7,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r5,r30
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r30.u32, xer);
	// bne cr6,0x832bbfc8
	if (!cr6.eq) goto loc_832BBFC8;
	// srw r11,r25,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r25.u32 >> (ctx.r11.u8 & 0x3F));
	// andc r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 & ~ctx.r11.u64;
	// stw r10,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r10.u32);
loc_832BBFC8:
	// addic. r31,r8,-28
	xer.ca = ctx.r8.u32 > 27;
	ctx.r31.s64 = ctx.r8.s64 + -28;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq 0x832bbff4
	if (cr0.eq) goto loc_832BBFF4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832bbce8
	ctx.lr = 0x832BBFDC;
	sub_832BBCE8(ctx, base);
	// lbz r10,11(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// slw r10,r3,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r10.u8 & 0x3F));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r27,r11,r31
	ctx.r27.u64 = ctx.r11.u64 + ctx.r31.u64;
	// b 0x832bc044
	goto loc_832BC044;
loc_832BBFF4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832bd498
	ctx.lr = 0x832BBFFC;
	sub_832BD498(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832bc078
	if (cr6.eq) goto loc_832BC078;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lhz r5,150(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 150);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x832bbe20
	ctx.lr = 0x832BC018;
	sub_832BBE20(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwsync 
	// subf r11,r28,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r28.s64;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r11,-64
	ctx.r9.s64 = ctx.r11.s64 + -64;
	// rlwimi r10,r26,2,0,29
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r26.u32, 2) & 0xFFFFFFFC) | (ctx.r10.u64 & 0xFFFFFFFF00000003);
	// rlwinm r11,r9,20,12,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0xFFFFF;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r6,r7,r28
	ctx.r6.s64 = ctx.r28.s64 - ctx.r7.s64;
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
loc_832BC044:
	// lbz r9,10(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10);
	// addi r10,r31,28
	ctx.r10.s64 = ctx.r31.s64 + 28;
	// rotlwi r11,r9,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// srw r8,r25,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r25.u32 >> (ctx.r9.u8 & 0x3F));
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r7,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r7.u32);
	// lwz r6,132(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// or r5,r8,r6
	ctx.r5.u64 = ctx.r8.u64 | ctx.r6.u64;
	// stw r5,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r5.u32);
loc_832BC078:
	// lwsync 
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,144(r30)
	PPC_STORE_U32(ctx.r30.u32 + 144, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832BC090"))) PPC_WEAK_FUNC(sub_832BC090);
PPC_FUNC_IMPL(__imp__sub_832BC090) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x832BC098;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// li r20,0
	ctx.r20.s64 = 0;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r23,r20
	ctx.r23.u64 = ctx.r20.u64;
	// bl 0x832bbec0
	ctx.lr = 0x832BC0C0;
	sub_832BBEC0(ctx, base);
	// lwz r10,132(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// lis r21,-32768
	ctx.r21.s64 = -2147483648;
	// slw r11,r10,r27
	ctx.r11.u64 = ctx.r27.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r27.u8 & 0x3F));
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// cmplwi cr6,r11,31
	cr6.compare<uint32_t>(ctx.r11.u32, 31, xer);
	// bgt cr6,0x832bc180
	if (cr6.gt) goto loc_832BC180;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r6,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r6.u32);
	// stw r7,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// lwz r5,4(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r5,r30
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r30.u32, xer);
	// bne cr6,0x832bc110
	if (!cr6.eq) goto loc_832BC110;
	// srw r11,r21,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r21.u32 >> (ctx.r11.u8 & 0x3F));
	// andc r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// stw r10,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r10.u32);
loc_832BC110:
	// addic. r31,r8,-28
	xer.ca = ctx.r8.u32 > 27;
	ctx.r31.s64 = ctx.r8.s64 + -28;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq 0x832bc180
	if (cr0.eq) goto loc_832BC180;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832bbce8
	ctx.lr = 0x832BC124;
	sub_832BBCE8(ctx, base);
	// lbz r7,10(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10);
	// addi r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 + 28;
	// lbz r6,11(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11);
	// rotlwi r10,r7,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// slw r8,r3,r6
	ctx.r8.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r6.u8 & 0x3F));
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// srw r5,r21,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r21.u32 >> (ctx.r7.u8 & 0x3F));
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// add r23,r9,r31
	ctx.r23.u64 = ctx.r9.u64 + ctx.r31.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// stw r4,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r4.u32);
	// lwz r3,132(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// or r11,r5,r3
	ctx.r11.u64 = ctx.r5.u64 | ctx.r3.u64;
	// stw r11,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r11.u32);
	// lwsync 
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r20,144(r30)
	PPC_STORE_U32(ctx.r30.u32 + 144, ctx.r20.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_832BC180:
	// lhz r26,150(r30)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r30.u32 + 150);
	// li r24,31
	ctx.r24.s64 = 31;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// slw r11,r24,r26
	ctx.r11.u64 = ctx.r26.u8 & 0x20 ? 0 : (ctx.r24.u32 << (ctx.r26.u8 & 0x3F));
	// addi r11,r11,191
	ctx.r11.s64 = ctx.r11.s64 + 191;
	// rlwinm r29,r11,25,7,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FFFFFF;
	// bl 0x832bbec0
	ctx.lr = 0x832BC19C;
	sub_832BBEC0(ctx, base);
	// lwz r9,132(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 132);
	// slw r10,r9,r29
	ctx.r10.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r29.u8 & 0x3F));
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplwi cr6,r11,31
	cr6.compare<uint32_t>(ctx.r11.u32, 31, xer);
	// bgt cr6,0x832bc258
	if (cr6.gt) goto loc_832BC258;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r6,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r6.u32);
	// stw r7,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r5,r28
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r28.u32, xer);
	// bne cr6,0x832bc1e8
	if (!cr6.eq) goto loc_832BC1E8;
	// srw r11,r21,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r21.u32 >> (ctx.r11.u8 & 0x3F));
	// andc r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 & ~ctx.r11.u64;
	// stw r10,132(r28)
	PPC_STORE_U32(ctx.r28.u32 + 132, ctx.r10.u32);
loc_832BC1E8:
	// addic. r31,r8,-28
	xer.ca = ctx.r8.u32 > 27;
	ctx.r31.s64 = ctx.r8.s64 + -28;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq 0x832bc258
	if (cr0.eq) goto loc_832BC258;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832bbce8
	ctx.lr = 0x832BC1FC;
	sub_832BBCE8(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// slw r11,r10,r29
	ctx.r11.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r29.u8 & 0x3F));
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// lbz r5,11(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11);
	// slw r4,r10,r3
	ctx.r4.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r3.u8 & 0x3F));
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// slw r11,r6,r3
	ctx.r11.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r3.u8 & 0x3F));
	// or r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 | ctx.r8.u64;
	// or r8,r4,r7
	ctx.r8.u64 = ctx.r4.u64 | ctx.r7.u64;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// slw r11,r3,r5
	ctx.r11.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r5.u8 & 0x3F));
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// add r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832bbe20
	ctx.lr = 0x832BC250;
	sub_832BBE20(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// b 0x832bc32c
	goto loc_832BC32C;
loc_832BC258:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x832bd498
	ctx.lr = 0x832BC260;
	sub_832BD498(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832bc394
	if (cr6.eq) goto loc_832BC394;
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// stw r20,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r20.u32);
	// subfic r9,r29,31
	xer.ca = ctx.r29.u32 <= 31;
	ctx.r9.s64 = 31 - ctx.r29.s64;
	// stw r20,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r20.u32);
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// stw r28,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r28.u32);
	// subfic r10,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r9.s64;
	// stb r24,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r24.u8);
	// addi r6,r8,-1
	ctx.r6.s64 = ctx.r8.s64 + -1;
	// stb r29,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r29.u8);
	// subfe r5,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r4,r6,31,0,0
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x80000000;
	// and r3,r5,r9
	ctx.r3.u64 = ctx.r5.u64 & ctx.r9.u64;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// slw r9,r10,r29
	ctx.r9.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r29.u8 & 0x3F));
	// srw r8,r4,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r11.u8 & 0x3F));
	// stb r3,10(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10, ctx.r3.u8);
	// addi r5,r9,-1
	ctx.r5.s64 = ctx.r9.s64 + -1;
	// addi r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 + 28;
	// ori r7,r4,1
	ctx.r7.u64 = ctx.r4.u64 | 1;
	// stw r5,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r5.u32);
	// ori r6,r8,1
	ctx.r6.u64 = ctx.r8.u64 | 1;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// li r10,128
	ctx.r10.s64 = 128;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// li r9,7
	ctx.r9.s64 = 7;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// addi r29,r31,128
	ctx.r29.s64 = ctx.r31.s64 + 128;
	// stb r9,11(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11, ctx.r9.u8);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832bbe20
	ctx.lr = 0x832BC300;
	sub_832BBE20(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// lwsync 
	// subf r11,r25,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r25.s64;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r11,r11,-64
	ctx.r11.s64 = ctx.r11.s64 + -64;
	// rlwimi r3,r22,2,0,29
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r22.u32, 2) & 0xFFFFFFFC) | (ctx.r3.u64 & 0xFFFFFFFF00000003);
	// rlwinm r11,r11,20,12,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFFFFF;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r8,r9,r25
	ctx.r8.s64 = ctx.r25.s64 - ctx.r9.s64;
	// stw r3,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r3.u32);
loc_832BC32C:
	// lbz r8,10(r29)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + 10);
	// addi r11,r29,28
	ctx.r11.s64 = ctx.r29.s64 + 28;
	// addi r9,r31,28
	ctx.r9.s64 = ctx.r31.s64 + 28;
	// rotlwi r10,r8,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// srw r7,r21,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r21.u32 >> (ctx.r8.u8 & 0x3F));
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// stw r6,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r6.u32);
	// stw r10,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r10.u32);
	// lwz r5,132(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// or r4,r7,r5
	ctx.r4.u64 = ctx.r7.u64 | ctx.r5.u64;
	// stw r4,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r4.u32);
	// lbz r3,10(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10);
	// rotlwi r11,r3,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 2);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// srw r10,r21,r3
	ctx.r10.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r21.u32 >> (ctx.r3.u8 & 0x3F));
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r8,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
	// lwz r7,132(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 132);
	// or r6,r10,r7
	ctx.r6.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stw r6,132(r28)
	PPC_STORE_U32(ctx.r28.u32 + 132, ctx.r6.u32);
loc_832BC394:
	// lwsync 
	// stw r20,144(r28)
	PPC_STORE_U32(ctx.r28.u32 + 144, ctx.r20.u32);
	// lwsync 
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r20,144(r30)
	PPC_STORE_U32(ctx.r30.u32 + 144, ctx.r20.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

