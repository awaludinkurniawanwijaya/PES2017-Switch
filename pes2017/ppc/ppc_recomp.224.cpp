#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82EA2EC8"))) PPC_WEAK_FUNC(sub_82EA2EC8);
PPC_FUNC_IMPL(__imp__sub_82EA2EC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82EA2ED0;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x82e6e978
	ctx.lr = 0x82EA2EE4;
	sub_82E6E978(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ea2f68
	if (cr6.eq) goto loc_82EA2F68;
	// lwz r31,24(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825359d8
	ctx.lr = 0x82EA2EFC;
	sub_825359D8(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r30,r11,-30564
	ctx.r30.s64 = ctx.r11.s64 + -30564;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r5,r30,-120
	ctx.r5.s64 = ctx.r30.s64 + -120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8c3a8
	ctx.lr = 0x82EA2F18;
	sub_82E8C3A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea2f60
	if (cr6.eq) goto loc_82EA2F60;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ea2330
	ctx.lr = 0x82EA2F34;
	sub_82EA2330(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825359d8
	ctx.lr = 0x82EA2F44;
	sub_825359D8(ctx, base);
	// cmplwi cr6,r29,1
	cr6.compare<uint32_t>(ctx.r29.u32, 1, xer);
	// blt cr6,0x82ea2fe4
	if (cr6.lt) goto loc_82EA2FE4;
	// beq cr6,0x82ea2fac
	if (cr6.eq) goto loc_82EA2FAC;
	// cmplwi cr6,r29,3
	cr6.compare<uint32_t>(ctx.r29.u32, 3, xer);
	// blt cr6,0x82ea2f74
	if (cr6.lt) goto loc_82EA2F74;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535aa0
	ctx.lr = 0x82EA2F60;
	sub_82535AA0(ctx, base);
loc_82EA2F60:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535aa0
	ctx.lr = 0x82EA2F68;
	sub_82535AA0(ctx, base);
loc_82EA2F68:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82EA2F74:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8c3a8
	ctx.lr = 0x82EA2F84;
	sub_82E8C3A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea301c
	if (!cr6.eq) goto loc_82EA301C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535aa0
	ctx.lr = 0x82EA2F98;
	sub_82535AA0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535aa0
	ctx.lr = 0x82EA2FA0;
	sub_82535AA0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82EA2FAC:
	// addi r5,r30,-52
	ctx.r5.s64 = ctx.r30.s64 + -52;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8c3a8
	ctx.lr = 0x82EA2FBC;
	sub_82E8C3A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea301c
	if (!cr6.eq) goto loc_82EA301C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535aa0
	ctx.lr = 0x82EA2FD0;
	sub_82535AA0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535aa0
	ctx.lr = 0x82EA2FD8;
	sub_82535AA0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82EA2FE4:
	// addi r5,r30,-92
	ctx.r5.s64 = ctx.r30.s64 + -92;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8c3a8
	ctx.lr = 0x82EA2FF4;
	sub_82E8C3A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea301c
	if (!cr6.eq) goto loc_82EA301C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535aa0
	ctx.lr = 0x82EA3008;
	sub_82535AA0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535aa0
	ctx.lr = 0x82EA3010;
	sub_82535AA0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82EA301C:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ea2330
	ctx.lr = 0x82EA302C;
	sub_82EA2330(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// or r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 | ctx.r10.u64;
	// bl 0x82535aa0
	ctx.lr = 0x82EA3040;
	sub_82535AA0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535aa0
	ctx.lr = 0x82EA3048;
	sub_82535AA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA3054"))) PPC_WEAK_FUNC(sub_82EA3054);
PPC_FUNC_IMPL(__imp__sub_82EA3054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA3058"))) PPC_WEAK_FUNC(sub_82EA3058);
PPC_FUNC_IMPL(__imp__sub_82EA3058) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82EA3060;
	__savegprlr_28(ctx, base);
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82ee66c8
	ctx.lr = 0x82EA307C;
	sub_82EE66C8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82ee66c8
	ctx.lr = 0x82EA3088;
	sub_82EE66C8(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// stb r29,292(r1)
	PPC_STORE_U8(ctx.r1.u32 + 292, ctx.r29.u8);
	// blt cr6,0x82ea30a4
	if (cr6.lt) goto loc_82EA30A4;
	// beq cr6,0x82ea30a4
	if (cr6.eq) goto loc_82EA30A4;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// bge cr6,0x82ea30b4
	if (!cr6.lt) goto loc_82EA30B4;
loc_82EA30A4:
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e9da70
	ctx.lr = 0x82EA30B0;
	sub_82E9DA70(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
loc_82EA30B4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r10,r11,21716
	ctx.r10.s64 = ctx.r11.s64 + 21716;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// stw r10,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r10.u32);
	// bl 0x82e9db50
	ctx.lr = 0x82EA30CC;
	sub_82E9DB50(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ea2ec8
	ctx.lr = 0x82EA30DC;
	sub_82EA2EC8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea3100
	if (cr6.eq) goto loc_82EA3100;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e9da70
	ctx.lr = 0x82EA30F4;
	sub_82E9DA70(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82EA3100:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea3124
	if (cr6.eq) goto loc_82EA3124;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e9da70
	ctx.lr = 0x82EA3118;
	sub_82E9DA70(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82EA3124:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA3130"))) PPC_WEAK_FUNC(sub_82EA3130);
PPC_FUNC_IMPL(__imp__sub_82EA3130) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82EA3138;
	__savegprlr_25(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x831ce774
	ctx.lr = 0x82EA3140;
	__savefpr_27(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82e9dd28
	ctx.lr = 0x82EA3158;
	sub_82E9DD28(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r26,r11,12496
	ctx.r26.s64 = ctx.r11.s64 + 12496;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// bl 0x825359d8
	ctx.lr = 0x82EA3178;
	sub_825359D8(ctx, base);
	// stb r31,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r31.u8);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82535130
	ctx.lr = 0x82EA3184;
	sub_82535130(ctx, base);
	// stb r31,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r31.u8);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82535130
	ctx.lr = 0x82EA3190;
	sub_82535130(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x825369e8
	ctx.lr = 0x82EA319C;
	sub_825369E8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r11,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r11.u8);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x825359d8
	ctx.lr = 0x82EA31B0;
	sub_825359D8(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r29,r11,-30396
	ctx.r29.s64 = ctx.r11.s64 + -30396;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82e8c3a8
	ctx.lr = 0x82EA31C8;
	sub_82E8C3A8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ea31f8
	if (cr6.eq) goto loc_82EA31F8;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e9e058
	ctx.lr = 0x82EA31E0;
	sub_82E9E058(ctx, base);
	// lbz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 120);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ea3220
	if (!cr6.eq) goto loc_82EA3220;
loc_82EA31EC:
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82535aa0
	ctx.lr = 0x82EA31F8;
	sub_82535AA0(ctx, base);
loc_82EA31F8:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82535aa0
	ctx.lr = 0x82EA3200;
	sub_82535AA0(ctx, base);
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82535aa0
	ctx.lr = 0x82EA320C;
	sub_82535AA0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x831ce7c0
	ctx.lr = 0x82EA321C;
	__restfpr_27(ctx, base);
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82EA3220:
	// bl 0x8242a638
	ctx.lr = 0x82EA3224;
	sub_8242A638(ctx, base);
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r5,r29,7532
	ctx.r5.s64 = ctx.r29.s64 + 7532;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA3238;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r27,-1
	ctx.r27.s64 = -1;
	// clrldi r28,r10,32
	ctx.r28.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea3258
	if (!cr6.eq) goto loc_82EA3258;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea3278
	goto loc_82EA3278;
loc_82EA3258:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r28
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r28.u64, xer);
	// ble cr6,0x82ea326c
	if (!cr6.gt) goto loc_82EA326C;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82ea3270
	goto loc_82EA3270;
loc_82EA326C:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA3270:
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA3278:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea3288
	if (cr6.eq) goto loc_82EA3288;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82EA3288:
	// bl 0x8242a638
	ctx.lr = 0x82EA328C;
	sub_8242A638(ctx, base);
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r5,r29,7576
	ctx.r5.s64 = ctx.r29.s64 + 7576;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA32A0;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea32b4
	if (!cr6.eq) goto loc_82EA32B4;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea32d4
	goto loc_82EA32D4;
loc_82EA32B4:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r28
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r28.u64, xer);
	// ble cr6,0x82ea32c8
	if (!cr6.gt) goto loc_82EA32C8;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82ea32cc
	goto loc_82EA32CC;
loc_82EA32C8:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA32CC:
	// stw r11,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA32D4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea32e4
	if (cr6.eq) goto loc_82EA32E4;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82EA32E4:
	// bl 0x8242a638
	ctx.lr = 0x82EA32E8;
	sub_8242A638(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r5,r29,7620
	ctx.r5.s64 = ctx.r29.s64 + 7620;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfd f27,9000(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f27.u64 = PPC_LOAD_U64(ctx.r11.u32 + 9000);
	// stfd f27,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f27.u64);
	// bl 0x82e8c578
	ctx.lr = 0x82EA3304;
	sub_82E8C578(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32231
	ctx.r7.s64 = -2112290816;
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// lfs f28,-4660(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4660);
	ctx.f28.f64 = double(temp.f32);
	// lfd f29,-18168(r9)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r9.u32 + -18168);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// lfs f30,-4664(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -4664);
	ctx.f30.f64 = double(temp.f32);
	// lfd f31,-18160(r7)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r7.u32 + -18160);
	// bne cr6,0x82ea3338
	if (!cr6.eq) goto loc_82EA3338;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea3368
	goto loc_82EA3368;
loc_82EA3338:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82ea334c
	if (!cr6.lt) goto loc_82EA334C;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82ea3360
	goto loc_82EA3360;
loc_82EA334C:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82ea335c
	if (!cr6.gt) goto loc_82EA335C;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
	// b 0x82ea3360
	goto loc_82EA3360;
loc_82EA335C:
	// frsp f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64));
loc_82EA3360:
	// stfs f0,192(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA3368:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea3378
	if (cr6.eq) goto loc_82EA3378;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82EA3378:
	// bl 0x8242a638
	ctx.lr = 0x82EA337C;
	sub_8242A638(ctx, base);
	// stfd f27,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f27.u64);
	// addi r5,r29,7680
	ctx.r5.s64 = ctx.r29.s64 + 7680;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c578
	ctx.lr = 0x82EA3390;
	sub_82E8C578(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea33a4
	if (!cr6.eq) goto loc_82EA33A4;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea33d4
	goto loc_82EA33D4;
loc_82EA33A4:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82ea33b8
	if (!cr6.lt) goto loc_82EA33B8;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82ea33cc
	goto loc_82EA33CC;
loc_82EA33B8:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82ea33c8
	if (!cr6.gt) goto loc_82EA33C8;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
	// b 0x82ea33cc
	goto loc_82EA33CC;
loc_82EA33C8:
	// frsp f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64));
loc_82EA33CC:
	// stfs f0,196(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA33D4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea33e4
	if (cr6.eq) goto loc_82EA33E4;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82EA33E4:
	// bl 0x8242a638
	ctx.lr = 0x82EA33E8;
	sub_8242A638(ctx, base);
	// stfd f27,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f27.u64);
	// addi r5,r29,7740
	ctx.r5.s64 = ctx.r29.s64 + 7740;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c578
	ctx.lr = 0x82EA33FC;
	sub_82E8C578(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea3410
	if (!cr6.eq) goto loc_82EA3410;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea3440
	goto loc_82EA3440;
loc_82EA3410:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82ea3424
	if (!cr6.lt) goto loc_82EA3424;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82ea3438
	goto loc_82EA3438;
loc_82EA3424:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82ea3434
	if (!cr6.gt) goto loc_82EA3434;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
	// b 0x82ea3438
	goto loc_82EA3438;
loc_82EA3434:
	// frsp f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64));
loc_82EA3438:
	// stfs f0,200(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA3440:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea3450
	if (cr6.eq) goto loc_82EA3450;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82EA3450:
	// bl 0x8242a638
	ctx.lr = 0x82EA3454;
	sub_8242A638(ctx, base);
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r5,r29,7816
	ctx.r5.s64 = ctx.r29.s64 + 7816;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA3468;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea347c
	if (!cr6.eq) goto loc_82EA347C;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea349c
	goto loc_82EA349C;
loc_82EA347C:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r28
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r28.u64, xer);
	// ble cr6,0x82ea3490
	if (!cr6.gt) goto loc_82EA3490;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82ea3494
	goto loc_82EA3494;
loc_82EA3490:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA3494:
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA349C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea34ac
	if (cr6.eq) goto loc_82EA34AC;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82EA34AC:
	// bl 0x8242a638
	ctx.lr = 0x82EA34B0;
	sub_8242A638(ctx, base);
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r5,r29,7852
	ctx.r5.s64 = ctx.r29.s64 + 7852;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA34C4;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea34d8
	if (!cr6.eq) goto loc_82EA34D8;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea34e4
	goto loc_82EA34E4;
loc_82EA34D8:
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r11,1
	ctx.r11.s64 = 1;
	// std r10,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r10.u64);
loc_82EA34E4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea34f4
	if (cr6.eq) goto loc_82EA34F4;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82EA34F4:
	// bl 0x8242a638
	ctx.lr = 0x82EA34F8;
	sub_8242A638(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r5,r29,7940
	ctx.r5.s64 = ctx.r29.s64 + 7940;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c1e8
	ctx.lr = 0x82EA350C;
	sub_82E8C1E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea3520
	if (!cr6.eq) goto loc_82EA3520;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea352c
	goto loc_82EA352C;
loc_82EA3520:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r10.u32);
loc_82EA352C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea353c
	if (cr6.eq) goto loc_82EA353C;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82EA353C:
	// bl 0x8242a638
	ctx.lr = 0x82EA3540;
	sub_8242A638(ctx, base);
	// stfd f27,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f27.u64);
	// addi r5,r29,7992
	ctx.r5.s64 = ctx.r29.s64 + 7992;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c578
	ctx.lr = 0x82EA3554;
	sub_82E8C578(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea3568
	if (!cr6.eq) goto loc_82EA3568;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea3598
	goto loc_82EA3598;
loc_82EA3568:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82ea357c
	if (!cr6.lt) goto loc_82EA357C;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82ea3590
	goto loc_82EA3590;
loc_82EA357C:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82ea358c
	if (!cr6.gt) goto loc_82EA358C;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
	// b 0x82ea3590
	goto loc_82EA3590;
loc_82EA358C:
	// frsp f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64));
loc_82EA3590:
	// stfs f0,220(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA3598:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea35a8
	if (cr6.eq) goto loc_82EA35A8;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82EA35A8:
	// bl 0x8242a638
	ctx.lr = 0x82EA35AC;
	sub_8242A638(ctx, base);
	// stfd f27,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f27.u64);
	// addi r5,r29,8036
	ctx.r5.s64 = ctx.r29.s64 + 8036;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c578
	ctx.lr = 0x82EA35C0;
	sub_82E8C578(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea35d4
	if (!cr6.eq) goto loc_82EA35D4;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea3604
	goto loc_82EA3604;
loc_82EA35D4:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82ea35e8
	if (!cr6.lt) goto loc_82EA35E8;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82ea35fc
	goto loc_82EA35FC;
loc_82EA35E8:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82ea35f8
	if (!cr6.gt) goto loc_82EA35F8;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
	// b 0x82ea35fc
	goto loc_82EA35FC;
loc_82EA35F8:
	// frsp f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64));
loc_82EA35FC:
	// stfs f0,224(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA3604:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea3614
	if (cr6.eq) goto loc_82EA3614;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82EA3614:
	// bl 0x8242a638
	ctx.lr = 0x82EA3618;
	sub_8242A638(ctx, base);
	// stfd f27,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f27.u64);
	// addi r5,r29,8080
	ctx.r5.s64 = ctx.r29.s64 + 8080;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c578
	ctx.lr = 0x82EA362C;
	sub_82E8C578(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea3640
	if (!cr6.eq) goto loc_82EA3640;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea3670
	goto loc_82EA3670;
loc_82EA3640:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82ea3654
	if (!cr6.lt) goto loc_82EA3654;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82ea3668
	goto loc_82EA3668;
loc_82EA3654:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82ea3664
	if (!cr6.gt) goto loc_82EA3664;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
	// b 0x82ea3668
	goto loc_82EA3668;
loc_82EA3664:
	// frsp f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64));
loc_82EA3668:
	// stfs f0,228(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA3670:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea3680
	if (cr6.eq) goto loc_82EA3680;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82EA3680:
	// bl 0x8242a638
	ctx.lr = 0x82EA3684;
	sub_8242A638(ctx, base);
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r5,r29,8124
	ctx.r5.s64 = ctx.r29.s64 + 8124;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA3698;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea36ac
	if (!cr6.eq) goto loc_82EA36AC;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea36cc
	goto loc_82EA36CC;
loc_82EA36AC:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r28
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r28.u64, xer);
	// ble cr6,0x82ea36c0
	if (!cr6.gt) goto loc_82EA36C0;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82ea36c4
	goto loc_82EA36C4;
loc_82EA36C0:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA36C4:
	// stw r11,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA36CC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea36dc
	if (cr6.eq) goto loc_82EA36DC;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82EA36DC:
	// bl 0x8242a638
	ctx.lr = 0x82EA36E0;
	sub_8242A638(ctx, base);
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r5,r29,8208
	ctx.r5.s64 = ctx.r29.s64 + 8208;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA36F4;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea3708
	if (!cr6.eq) goto loc_82EA3708;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea3728
	goto loc_82EA3728;
loc_82EA3708:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r28
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r28.u64, xer);
	// ble cr6,0x82ea371c
	if (!cr6.gt) goto loc_82EA371C;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82ea3720
	goto loc_82EA3720;
loc_82EA371C:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA3720:
	// stw r11,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA3728:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea3738
	if (cr6.eq) goto loc_82EA3738;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82EA3738:
	// bl 0x8242a638
	ctx.lr = 0x82EA373C;
	sub_8242A638(ctx, base);
	// stfd f27,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f27.u64);
	// addi r5,r29,8360
	ctx.r5.s64 = ctx.r29.s64 + 8360;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c578
	ctx.lr = 0x82EA3750;
	sub_82E8C578(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea3764
	if (!cr6.eq) goto loc_82EA3764;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea3794
	goto loc_82EA3794;
loc_82EA3764:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82ea3778
	if (!cr6.lt) goto loc_82EA3778;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82ea378c
	goto loc_82EA378C;
loc_82EA3778:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82ea3788
	if (!cr6.gt) goto loc_82EA3788;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
	// b 0x82ea378c
	goto loc_82EA378C;
loc_82EA3788:
	// frsp f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64));
loc_82EA378C:
	// stfs f0,240(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA3794:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea37a4
	if (cr6.eq) goto loc_82EA37A4;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82EA37A4:
	// bl 0x8242a638
	ctx.lr = 0x82EA37A8;
	sub_8242A638(ctx, base);
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r5,r29,8376
	ctx.r5.s64 = ctx.r29.s64 + 8376;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA37BC;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea37d0
	if (!cr6.eq) goto loc_82EA37D0;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea37f0
	goto loc_82EA37F0;
loc_82EA37D0:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r28
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r28.u64, xer);
	// ble cr6,0x82ea37e4
	if (!cr6.gt) goto loc_82EA37E4;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82ea37e8
	goto loc_82EA37E8;
loc_82EA37E4:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA37E8:
	// stw r11,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA37F0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea3800
	if (cr6.eq) goto loc_82EA3800;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82EA3800:
	// bl 0x8242a638
	ctx.lr = 0x82EA3804;
	sub_8242A638(ctx, base);
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r5,r29,8460
	ctx.r5.s64 = ctx.r29.s64 + 8460;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA3818;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea382c
	if (!cr6.eq) goto loc_82EA382C;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea384c
	goto loc_82EA384C;
loc_82EA382C:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r28
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r28.u64, xer);
	// ble cr6,0x82ea3840
	if (!cr6.gt) goto loc_82EA3840;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82ea3844
	goto loc_82EA3844;
loc_82EA3840:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA3844:
	// stw r11,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA384C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea385c
	if (cr6.eq) goto loc_82EA385C;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82EA385C:
	// bl 0x8242a638
	ctx.lr = 0x82EA3860;
	sub_8242A638(ctx, base);
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r5,r29,8584
	ctx.r5.s64 = ctx.r29.s64 + 8584;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA3874;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea3888
	if (!cr6.eq) goto loc_82EA3888;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea38a8
	goto loc_82EA38A8;
loc_82EA3888:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r28
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r28.u64, xer);
	// ble cr6,0x82ea389c
	if (!cr6.gt) goto loc_82EA389C;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82ea38a0
	goto loc_82EA38A0;
loc_82EA389C:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA38A0:
	// stw r11,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA38A8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea38b8
	if (cr6.eq) goto loc_82EA38B8;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82EA38B8:
	// bl 0x8242a638
	ctx.lr = 0x82EA38BC;
	sub_8242A638(ctx, base);
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r5,r29,8636
	ctx.r5.s64 = ctx.r29.s64 + 8636;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA38D0;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea38e4
	if (!cr6.eq) goto loc_82EA38E4;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea3904
	goto loc_82EA3904;
loc_82EA38E4:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r28
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r28.u64, xer);
	// ble cr6,0x82ea38f8
	if (!cr6.gt) goto loc_82EA38F8;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82ea38fc
	goto loc_82EA38FC;
loc_82EA38F8:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA38FC:
	// stw r11,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA3904:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea3914
	if (cr6.eq) goto loc_82EA3914;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82EA3914:
	// bl 0x8242a638
	ctx.lr = 0x82EA3918;
	sub_8242A638(ctx, base);
	// stb r31,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r31.u8);
	// addi r5,r29,8688
	ctx.r5.s64 = ctx.r29.s64 + 8688;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c338
	ctx.lr = 0x82EA392C;
	sub_82E8C338(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea3940
	if (!cr6.eq) goto loc_82EA3940;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea394c
	goto loc_82EA394C;
loc_82EA3940:
	// lbz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r10,260(r1)
	PPC_STORE_U8(ctx.r1.u32 + 260, ctx.r10.u8);
loc_82EA394C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea395c
	if (cr6.eq) goto loc_82EA395C;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82EA395C:
	// bl 0x8242a638
	ctx.lr = 0x82EA3960;
	sub_8242A638(ctx, base);
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r5,r29,8756
	ctx.r5.s64 = ctx.r29.s64 + 8756;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA3974;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea3988
	if (!cr6.eq) goto loc_82EA3988;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea39a8
	goto loc_82EA39A8;
loc_82EA3988:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r28
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r28.u64, xer);
	// ble cr6,0x82ea399c
	if (!cr6.gt) goto loc_82EA399C;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82ea39a0
	goto loc_82EA39A0;
loc_82EA399C:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA39A0:
	// stw r11,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA39A8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea39b8
	if (cr6.eq) goto loc_82EA39B8;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82EA39B8:
	// bl 0x8242a638
	ctx.lr = 0x82EA39BC;
	sub_8242A638(ctx, base);
	// stfd f27,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f27.u64);
	// addi r5,r29,8840
	ctx.r5.s64 = ctx.r29.s64 + 8840;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c578
	ctx.lr = 0x82EA39D0;
	sub_82E8C578(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea39e4
	if (!cr6.eq) goto loc_82EA39E4;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea3a14
	goto loc_82EA3A14;
loc_82EA39E4:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82ea39f8
	if (!cr6.lt) goto loc_82EA39F8;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82ea3a0c
	goto loc_82EA3A0C;
loc_82EA39F8:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82ea3a08
	if (!cr6.gt) goto loc_82EA3A08;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
	// b 0x82ea3a0c
	goto loc_82EA3A0C;
loc_82EA3A08:
	// frsp f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64));
loc_82EA3A0C:
	// stfs f0,268(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA3A14:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea3a24
	if (cr6.eq) goto loc_82EA3A24;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82EA3A24:
	// bl 0x8242a638
	ctx.lr = 0x82EA3A28;
	sub_8242A638(ctx, base);
	// stfd f27,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f27.u64);
	// addi r5,r29,8936
	ctx.r5.s64 = ctx.r29.s64 + 8936;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c578
	ctx.lr = 0x82EA3A3C;
	sub_82E8C578(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea3a50
	if (!cr6.eq) goto loc_82EA3A50;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea3a80
	goto loc_82EA3A80;
loc_82EA3A50:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82ea3a64
	if (!cr6.lt) goto loc_82EA3A64;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82ea3a78
	goto loc_82EA3A78;
loc_82EA3A64:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82ea3a74
	if (!cr6.gt) goto loc_82EA3A74;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
	// b 0x82ea3a78
	goto loc_82EA3A78;
loc_82EA3A74:
	// frsp f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64));
loc_82EA3A78:
	// stfs f0,272(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA3A80:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea3a90
	if (cr6.eq) goto loc_82EA3A90;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82EA3A90:
	// bl 0x8242a638
	ctx.lr = 0x82EA3A94;
	sub_8242A638(ctx, base);
	// stfd f27,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f27.u64);
	// addi r5,r29,9008
	ctx.r5.s64 = ctx.r29.s64 + 9008;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c578
	ctx.lr = 0x82EA3AA8;
	sub_82E8C578(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea3abc
	if (!cr6.eq) goto loc_82EA3ABC;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea3aec
	goto loc_82EA3AEC;
loc_82EA3ABC:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82ea3ad0
	if (!cr6.lt) goto loc_82EA3AD0;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82ea3ae4
	goto loc_82EA3AE4;
loc_82EA3AD0:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82ea3ae0
	if (!cr6.gt) goto loc_82EA3AE0;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
	// b 0x82ea3ae4
	goto loc_82EA3AE4;
loc_82EA3AE0:
	// frsp f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64));
loc_82EA3AE4:
	// stfs f0,276(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA3AEC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea3afc
	if (cr6.eq) goto loc_82EA3AFC;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82EA3AFC:
	// bl 0x8242a638
	ctx.lr = 0x82EA3B00;
	sub_8242A638(ctx, base);
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r5,r29,9080
	ctx.r5.s64 = ctx.r29.s64 + 9080;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA3B14;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea3b28
	if (!cr6.eq) goto loc_82EA3B28;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea3b48
	goto loc_82EA3B48;
loc_82EA3B28:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r28
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r28.u64, xer);
	// ble cr6,0x82ea3b3c
	if (!cr6.gt) goto loc_82EA3B3C;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82ea3b40
	goto loc_82EA3B40;
loc_82EA3B3C:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA3B40:
	// stw r11,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA3B48:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea3b58
	if (cr6.eq) goto loc_82EA3B58;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82EA3B58:
	// bl 0x8242a638
	ctx.lr = 0x82EA3B5C;
	sub_8242A638(ctx, base);
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r5,r29,9184
	ctx.r5.s64 = ctx.r29.s64 + 9184;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA3B70;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea3b84
	if (!cr6.eq) goto loc_82EA3B84;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea3ba4
	goto loc_82EA3BA4;
loc_82EA3B84:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r28
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r28.u64, xer);
	// ble cr6,0x82ea3b98
	if (!cr6.gt) goto loc_82EA3B98;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82ea3b9c
	goto loc_82EA3B9C;
loc_82EA3B98:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA3B9C:
	// stw r11,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA3BA4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea3bb4
	if (cr6.eq) goto loc_82EA3BB4;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82EA3BB4:
	// bl 0x8242a638
	ctx.lr = 0x82EA3BB8;
	sub_8242A638(ctx, base);
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r5,r29,9288
	ctx.r5.s64 = ctx.r29.s64 + 9288;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA3BCC;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea3be0
	if (!cr6.eq) goto loc_82EA3BE0;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea3c00
	goto loc_82EA3C00;
loc_82EA3BE0:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r28
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r28.u64, xer);
	// ble cr6,0x82ea3bf4
	if (!cr6.gt) goto loc_82EA3BF4;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82ea3bf8
	goto loc_82EA3BF8;
loc_82EA3BF4:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA3BF8:
	// stw r11,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA3C00:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea3c10
	if (cr6.eq) goto loc_82EA3C10;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82EA3C10:
	// bl 0x8242a638
	ctx.lr = 0x82EA3C14;
	sub_8242A638(ctx, base);
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r5,r29,9388
	ctx.r5.s64 = ctx.r29.s64 + 9388;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA3C28;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea3c3c
	if (!cr6.eq) goto loc_82EA3C3C;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea3c48
	goto loc_82EA3C48;
loc_82EA3C3C:
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r11,1
	ctx.r11.s64 = 1;
	// std r10,296(r1)
	PPC_STORE_U64(ctx.r1.u32 + 296, ctx.r10.u64);
loc_82EA3C48:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea3c58
	if (cr6.eq) goto loc_82EA3C58;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82EA3C58:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea31ec
	if (cr6.eq) goto loc_82EA31EC;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82e9dc48
	ctx.lr = 0x82EA3C70;
	sub_82E9DC48(ctx, base);
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82535aa0
	ctx.lr = 0x82EA3C7C;
	sub_82535AA0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82535aa0
	ctx.lr = 0x82EA3C84;
	sub_82535AA0(ctx, base);
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82535aa0
	ctx.lr = 0x82EA3C90;
	sub_82535AA0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x831ce7c0
	ctx.lr = 0x82EA3CA0;
	__restfpr_27(ctx, base);
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA3CA4"))) PPC_WEAK_FUNC(sub_82EA3CA4);
PPC_FUNC_IMPL(__imp__sub_82EA3CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA3CA8"))) PPC_WEAK_FUNC(sub_82EA3CA8);
PPC_FUNC_IMPL(__imp__sub_82EA3CA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82EA3CB0;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x82e6e978
	ctx.lr = 0x82EA3CC4;
	sub_82E6E978(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ea3d48
	if (cr6.eq) goto loc_82EA3D48;
	// lwz r31,24(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825359d8
	ctx.lr = 0x82EA3CDC;
	sub_825359D8(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r30,r11,-30564
	ctx.r30.s64 = ctx.r11.s64 + -30564;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r5,r30,-120
	ctx.r5.s64 = ctx.r30.s64 + -120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8c3a8
	ctx.lr = 0x82EA3CF8;
	sub_82E8C3A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea3d40
	if (cr6.eq) goto loc_82EA3D40;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ea3130
	ctx.lr = 0x82EA3D14;
	sub_82EA3130(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825359d8
	ctx.lr = 0x82EA3D24;
	sub_825359D8(ctx, base);
	// cmplwi cr6,r29,1
	cr6.compare<uint32_t>(ctx.r29.u32, 1, xer);
	// blt cr6,0x82ea3dc4
	if (cr6.lt) goto loc_82EA3DC4;
	// beq cr6,0x82ea3d8c
	if (cr6.eq) goto loc_82EA3D8C;
	// cmplwi cr6,r29,3
	cr6.compare<uint32_t>(ctx.r29.u32, 3, xer);
	// blt cr6,0x82ea3d54
	if (cr6.lt) goto loc_82EA3D54;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535aa0
	ctx.lr = 0x82EA3D40;
	sub_82535AA0(ctx, base);
loc_82EA3D40:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535aa0
	ctx.lr = 0x82EA3D48;
	sub_82535AA0(ctx, base);
loc_82EA3D48:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82EA3D54:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8c3a8
	ctx.lr = 0x82EA3D64;
	sub_82E8C3A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea3dfc
	if (!cr6.eq) goto loc_82EA3DFC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535aa0
	ctx.lr = 0x82EA3D78;
	sub_82535AA0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535aa0
	ctx.lr = 0x82EA3D80;
	sub_82535AA0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82EA3D8C:
	// addi r5,r30,-52
	ctx.r5.s64 = ctx.r30.s64 + -52;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8c3a8
	ctx.lr = 0x82EA3D9C;
	sub_82E8C3A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea3dfc
	if (!cr6.eq) goto loc_82EA3DFC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535aa0
	ctx.lr = 0x82EA3DB0;
	sub_82535AA0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535aa0
	ctx.lr = 0x82EA3DB8;
	sub_82535AA0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82EA3DC4:
	// addi r5,r30,-92
	ctx.r5.s64 = ctx.r30.s64 + -92;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8c3a8
	ctx.lr = 0x82EA3DD4;
	sub_82E8C3A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea3dfc
	if (!cr6.eq) goto loc_82EA3DFC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535aa0
	ctx.lr = 0x82EA3DE8;
	sub_82535AA0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535aa0
	ctx.lr = 0x82EA3DF0;
	sub_82535AA0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82EA3DFC:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ea3130
	ctx.lr = 0x82EA3E0C;
	sub_82EA3130(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// or r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 | ctx.r10.u64;
	// bl 0x82535aa0
	ctx.lr = 0x82EA3E20;
	sub_82535AA0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535aa0
	ctx.lr = 0x82EA3E28;
	sub_82535AA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA3E34"))) PPC_WEAK_FUNC(sub_82EA3E34);
PPC_FUNC_IMPL(__imp__sub_82EA3E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA3E38"))) PPC_WEAK_FUNC(sub_82EA3E38);
PPC_FUNC_IMPL(__imp__sub_82EA3E38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82EA3E40;
	__savegprlr_28(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82ee7250
	ctx.lr = 0x82EA3E5C;
	sub_82EE7250(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e9e6a8
	ctx.lr = 0x82EA3E6C;
	sub_82E9E6A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82e9dd28
	ctx.lr = 0x82EA3E7C;
	sub_82E9DD28(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ea3ca8
	ctx.lr = 0x82EA3E8C;
	sub_82EA3CA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea3eb0
	if (cr6.eq) goto loc_82EA3EB0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e9dc48
	ctx.lr = 0x82EA3EA4;
	sub_82E9DC48(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82EA3EB0:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea3ed4
	if (cr6.eq) goto loc_82EA3ED4;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e9dc48
	ctx.lr = 0x82EA3EC8;
	sub_82E9DC48(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82EA3ED4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA3EE0"))) PPC_WEAK_FUNC(sub_82EA3EE0);
PPC_FUNC_IMPL(__imp__sub_82EA3EE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82EA3EE8;
	__savegprlr_25(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x831ce774
	ctx.lr = 0x82EA3EF0;
	__savefpr_27(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82e9df08
	ctx.lr = 0x82EA3F08;
	sub_82E9DF08(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r26,r11,12496
	ctx.r26.s64 = ctx.r11.s64 + 12496;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// bl 0x825359d8
	ctx.lr = 0x82EA3F28;
	sub_825359D8(ctx, base);
	// stb r31,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r31.u8);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82535130
	ctx.lr = 0x82EA3F34;
	sub_82535130(ctx, base);
	// stb r31,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r31.u8);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82535130
	ctx.lr = 0x82EA3F40;
	sub_82535130(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x825369e8
	ctx.lr = 0x82EA3F4C;
	sub_825369E8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r11,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r11.u8);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x825359d8
	ctx.lr = 0x82EA3F60;
	sub_825359D8(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r29,r11,-30396
	ctx.r29.s64 = ctx.r11.s64 + -30396;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82e8c3a8
	ctx.lr = 0x82EA3F78;
	sub_82E8C3A8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ea3fa8
	if (cr6.eq) goto loc_82EA3FA8;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e9e058
	ctx.lr = 0x82EA3F90;
	sub_82E9E058(ctx, base);
	// lbz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 120);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ea3fd0
	if (!cr6.eq) goto loc_82EA3FD0;
loc_82EA3F9C:
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82535aa0
	ctx.lr = 0x82EA3FA8;
	sub_82535AA0(ctx, base);
loc_82EA3FA8:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82535aa0
	ctx.lr = 0x82EA3FB0;
	sub_82535AA0(ctx, base);
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82535aa0
	ctx.lr = 0x82EA3FBC;
	sub_82535AA0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x831ce7c0
	ctx.lr = 0x82EA3FCC;
	__restfpr_27(ctx, base);
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82EA3FD0:
	// bl 0x8242a638
	ctx.lr = 0x82EA3FD4;
	sub_8242A638(ctx, base);
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r5,r29,9480
	ctx.r5.s64 = ctx.r29.s64 + 9480;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA3FE8;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r27,-1
	ctx.r27.s64 = -1;
	// clrldi r28,r10,32
	ctx.r28.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea4008
	if (!cr6.eq) goto loc_82EA4008;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea4028
	goto loc_82EA4028;
loc_82EA4008:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r28
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r28.u64, xer);
	// ble cr6,0x82ea401c
	if (!cr6.gt) goto loc_82EA401C;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82ea4020
	goto loc_82EA4020;
loc_82EA401C:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA4020:
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA4028:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea4038
	if (cr6.eq) goto loc_82EA4038;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82EA4038:
	// bl 0x8242a638
	ctx.lr = 0x82EA403C;
	sub_8242A638(ctx, base);
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r5,r29,9524
	ctx.r5.s64 = ctx.r29.s64 + 9524;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA4050;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea4064
	if (!cr6.eq) goto loc_82EA4064;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea4084
	goto loc_82EA4084;
loc_82EA4064:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r28
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r28.u64, xer);
	// ble cr6,0x82ea4078
	if (!cr6.gt) goto loc_82EA4078;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82ea407c
	goto loc_82EA407C;
loc_82EA4078:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA407C:
	// stw r11,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA4084:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea4094
	if (cr6.eq) goto loc_82EA4094;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82EA4094:
	// bl 0x8242a638
	ctx.lr = 0x82EA4098;
	sub_8242A638(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r5,r29,9568
	ctx.r5.s64 = ctx.r29.s64 + 9568;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfd f27,9000(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f27.u64 = PPC_LOAD_U64(ctx.r11.u32 + 9000);
	// stfd f27,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f27.u64);
	// bl 0x82e8c578
	ctx.lr = 0x82EA40B4;
	sub_82E8C578(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32231
	ctx.r7.s64 = -2112290816;
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// lfs f28,-4660(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4660);
	ctx.f28.f64 = double(temp.f32);
	// lfd f29,-18168(r9)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r9.u32 + -18168);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// lfs f30,-4664(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -4664);
	ctx.f30.f64 = double(temp.f32);
	// lfd f31,-18160(r7)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r7.u32 + -18160);
	// bne cr6,0x82ea40e8
	if (!cr6.eq) goto loc_82EA40E8;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea4118
	goto loc_82EA4118;
loc_82EA40E8:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82ea40fc
	if (!cr6.lt) goto loc_82EA40FC;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82ea4110
	goto loc_82EA4110;
loc_82EA40FC:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82ea410c
	if (!cr6.gt) goto loc_82EA410C;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
	// b 0x82ea4110
	goto loc_82EA4110;
loc_82EA410C:
	// frsp f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64));
loc_82EA4110:
	// stfs f0,192(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA4118:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea4128
	if (cr6.eq) goto loc_82EA4128;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82EA4128:
	// bl 0x8242a638
	ctx.lr = 0x82EA412C;
	sub_8242A638(ctx, base);
	// stfd f27,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f27.u64);
	// addi r5,r29,9628
	ctx.r5.s64 = ctx.r29.s64 + 9628;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c578
	ctx.lr = 0x82EA4140;
	sub_82E8C578(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea4154
	if (!cr6.eq) goto loc_82EA4154;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea4184
	goto loc_82EA4184;
loc_82EA4154:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82ea4168
	if (!cr6.lt) goto loc_82EA4168;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82ea417c
	goto loc_82EA417C;
loc_82EA4168:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82ea4178
	if (!cr6.gt) goto loc_82EA4178;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
	// b 0x82ea417c
	goto loc_82EA417C;
loc_82EA4178:
	// frsp f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64));
loc_82EA417C:
	// stfs f0,196(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA4184:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea4194
	if (cr6.eq) goto loc_82EA4194;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82EA4194:
	// bl 0x8242a638
	ctx.lr = 0x82EA4198;
	sub_8242A638(ctx, base);
	// stfd f27,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f27.u64);
	// addi r5,r29,9688
	ctx.r5.s64 = ctx.r29.s64 + 9688;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c578
	ctx.lr = 0x82EA41AC;
	sub_82E8C578(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea41c0
	if (!cr6.eq) goto loc_82EA41C0;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea41f0
	goto loc_82EA41F0;
loc_82EA41C0:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82ea41d4
	if (!cr6.lt) goto loc_82EA41D4;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82ea41e8
	goto loc_82EA41E8;
loc_82EA41D4:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82ea41e4
	if (!cr6.gt) goto loc_82EA41E4;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
	// b 0x82ea41e8
	goto loc_82EA41E8;
loc_82EA41E4:
	// frsp f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64));
loc_82EA41E8:
	// stfs f0,200(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA41F0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea4200
	if (cr6.eq) goto loc_82EA4200;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82EA4200:
	// bl 0x8242a638
	ctx.lr = 0x82EA4204;
	sub_8242A638(ctx, base);
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r5,r29,9764
	ctx.r5.s64 = ctx.r29.s64 + 9764;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA4218;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea422c
	if (!cr6.eq) goto loc_82EA422C;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea424c
	goto loc_82EA424C;
loc_82EA422C:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r28
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r28.u64, xer);
	// ble cr6,0x82ea4240
	if (!cr6.gt) goto loc_82EA4240;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82ea4244
	goto loc_82EA4244;
loc_82EA4240:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA4244:
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA424C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea425c
	if (cr6.eq) goto loc_82EA425C;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82EA425C:
	// bl 0x8242a638
	ctx.lr = 0x82EA4260;
	sub_8242A638(ctx, base);
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r5,r29,9800
	ctx.r5.s64 = ctx.r29.s64 + 9800;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA4274;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea4288
	if (!cr6.eq) goto loc_82EA4288;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea4294
	goto loc_82EA4294;
loc_82EA4288:
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r11,1
	ctx.r11.s64 = 1;
	// std r10,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r10.u64);
loc_82EA4294:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea42a4
	if (cr6.eq) goto loc_82EA42A4;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82EA42A4:
	// bl 0x8242a638
	ctx.lr = 0x82EA42A8;
	sub_8242A638(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r5,r29,9888
	ctx.r5.s64 = ctx.r29.s64 + 9888;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c1e8
	ctx.lr = 0x82EA42BC;
	sub_82E8C1E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea42d0
	if (!cr6.eq) goto loc_82EA42D0;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea42dc
	goto loc_82EA42DC;
loc_82EA42D0:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r10.u32);
loc_82EA42DC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea42ec
	if (cr6.eq) goto loc_82EA42EC;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82EA42EC:
	// bl 0x8242a638
	ctx.lr = 0x82EA42F0;
	sub_8242A638(ctx, base);
	// stfd f27,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f27.u64);
	// addi r5,r29,9940
	ctx.r5.s64 = ctx.r29.s64 + 9940;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c578
	ctx.lr = 0x82EA4304;
	sub_82E8C578(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea4318
	if (!cr6.eq) goto loc_82EA4318;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea4348
	goto loc_82EA4348;
loc_82EA4318:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82ea432c
	if (!cr6.lt) goto loc_82EA432C;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82ea4340
	goto loc_82EA4340;
loc_82EA432C:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82ea433c
	if (!cr6.gt) goto loc_82EA433C;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
	// b 0x82ea4340
	goto loc_82EA4340;
loc_82EA433C:
	// frsp f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64));
loc_82EA4340:
	// stfs f0,220(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA4348:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea4358
	if (cr6.eq) goto loc_82EA4358;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82EA4358:
	// bl 0x8242a638
	ctx.lr = 0x82EA435C;
	sub_8242A638(ctx, base);
	// stfd f27,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f27.u64);
	// addi r5,r29,9984
	ctx.r5.s64 = ctx.r29.s64 + 9984;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c578
	ctx.lr = 0x82EA4370;
	sub_82E8C578(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea4384
	if (!cr6.eq) goto loc_82EA4384;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea43b4
	goto loc_82EA43B4;
loc_82EA4384:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82ea4398
	if (!cr6.lt) goto loc_82EA4398;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82ea43ac
	goto loc_82EA43AC;
loc_82EA4398:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82ea43a8
	if (!cr6.gt) goto loc_82EA43A8;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
	// b 0x82ea43ac
	goto loc_82EA43AC;
loc_82EA43A8:
	// frsp f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64));
loc_82EA43AC:
	// stfs f0,224(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA43B4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea43c4
	if (cr6.eq) goto loc_82EA43C4;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82EA43C4:
	// bl 0x8242a638
	ctx.lr = 0x82EA43C8;
	sub_8242A638(ctx, base);
	// stfd f27,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f27.u64);
	// addi r5,r29,10028
	ctx.r5.s64 = ctx.r29.s64 + 10028;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c578
	ctx.lr = 0x82EA43DC;
	sub_82E8C578(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea43f0
	if (!cr6.eq) goto loc_82EA43F0;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea4420
	goto loc_82EA4420;
loc_82EA43F0:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82ea4404
	if (!cr6.lt) goto loc_82EA4404;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82ea4418
	goto loc_82EA4418;
loc_82EA4404:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82ea4414
	if (!cr6.gt) goto loc_82EA4414;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
	// b 0x82ea4418
	goto loc_82EA4418;
loc_82EA4414:
	// frsp f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64));
loc_82EA4418:
	// stfs f0,228(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA4420:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea4430
	if (cr6.eq) goto loc_82EA4430;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82EA4430:
	// bl 0x8242a638
	ctx.lr = 0x82EA4434;
	sub_8242A638(ctx, base);
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r5,r29,10072
	ctx.r5.s64 = ctx.r29.s64 + 10072;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA4448;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea445c
	if (!cr6.eq) goto loc_82EA445C;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea447c
	goto loc_82EA447C;
loc_82EA445C:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r28
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r28.u64, xer);
	// ble cr6,0x82ea4470
	if (!cr6.gt) goto loc_82EA4470;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82ea4474
	goto loc_82EA4474;
loc_82EA4470:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA4474:
	// stw r11,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA447C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea448c
	if (cr6.eq) goto loc_82EA448C;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82EA448C:
	// bl 0x8242a638
	ctx.lr = 0x82EA4490;
	sub_8242A638(ctx, base);
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r5,r29,10156
	ctx.r5.s64 = ctx.r29.s64 + 10156;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA44A4;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea44b8
	if (!cr6.eq) goto loc_82EA44B8;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea44d8
	goto loc_82EA44D8;
loc_82EA44B8:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r28
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r28.u64, xer);
	// ble cr6,0x82ea44cc
	if (!cr6.gt) goto loc_82EA44CC;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82ea44d0
	goto loc_82EA44D0;
loc_82EA44CC:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA44D0:
	// stw r11,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA44D8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea44e8
	if (cr6.eq) goto loc_82EA44E8;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82EA44E8:
	// bl 0x8242a638
	ctx.lr = 0x82EA44EC;
	sub_8242A638(ctx, base);
	// stfd f27,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f27.u64);
	// addi r5,r29,10280
	ctx.r5.s64 = ctx.r29.s64 + 10280;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c578
	ctx.lr = 0x82EA4500;
	sub_82E8C578(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea4514
	if (!cr6.eq) goto loc_82EA4514;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea4544
	goto loc_82EA4544;
loc_82EA4514:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82ea4528
	if (!cr6.lt) goto loc_82EA4528;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82ea453c
	goto loc_82EA453C;
loc_82EA4528:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82ea4538
	if (!cr6.gt) goto loc_82EA4538;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
	// b 0x82ea453c
	goto loc_82EA453C;
loc_82EA4538:
	// frsp f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64));
loc_82EA453C:
	// stfs f0,240(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA4544:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea4554
	if (cr6.eq) goto loc_82EA4554;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82EA4554:
	// bl 0x8242a638
	ctx.lr = 0x82EA4558;
	sub_8242A638(ctx, base);
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r5,r29,10324
	ctx.r5.s64 = ctx.r29.s64 + 10324;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA456C;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea4580
	if (!cr6.eq) goto loc_82EA4580;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea45a0
	goto loc_82EA45A0;
loc_82EA4580:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r28
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r28.u64, xer);
	// ble cr6,0x82ea4594
	if (!cr6.gt) goto loc_82EA4594;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82ea4598
	goto loc_82EA4598;
loc_82EA4594:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA4598:
	// stw r11,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA45A0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea45b0
	if (cr6.eq) goto loc_82EA45B0;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82EA45B0:
	// bl 0x8242a638
	ctx.lr = 0x82EA45B4;
	sub_8242A638(ctx, base);
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r5,r29,10408
	ctx.r5.s64 = ctx.r29.s64 + 10408;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA45C8;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea45dc
	if (!cr6.eq) goto loc_82EA45DC;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea45fc
	goto loc_82EA45FC;
loc_82EA45DC:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r28
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r28.u64, xer);
	// ble cr6,0x82ea45f0
	if (!cr6.gt) goto loc_82EA45F0;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82ea45f4
	goto loc_82EA45F4;
loc_82EA45F0:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA45F4:
	// stw r11,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA45FC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea460c
	if (cr6.eq) goto loc_82EA460C;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82EA460C:
	// bl 0x8242a638
	ctx.lr = 0x82EA4610;
	sub_8242A638(ctx, base);
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r5,r29,10464
	ctx.r5.s64 = ctx.r29.s64 + 10464;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA4624;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea4638
	if (!cr6.eq) goto loc_82EA4638;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea4658
	goto loc_82EA4658;
loc_82EA4638:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r28
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r28.u64, xer);
	// ble cr6,0x82ea464c
	if (!cr6.gt) goto loc_82EA464C;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82ea4650
	goto loc_82EA4650;
loc_82EA464C:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA4650:
	// stw r11,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA4658:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea4668
	if (cr6.eq) goto loc_82EA4668;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82EA4668:
	// bl 0x8242a638
	ctx.lr = 0x82EA466C;
	sub_8242A638(ctx, base);
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r5,r29,10584
	ctx.r5.s64 = ctx.r29.s64 + 10584;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA4680;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea4694
	if (!cr6.eq) goto loc_82EA4694;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea46b4
	goto loc_82EA46B4;
loc_82EA4694:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r28
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r28.u64, xer);
	// ble cr6,0x82ea46a8
	if (!cr6.gt) goto loc_82EA46A8;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82ea46ac
	goto loc_82EA46AC;
loc_82EA46A8:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA46AC:
	// stw r11,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA46B4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea46c4
	if (cr6.eq) goto loc_82EA46C4;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82EA46C4:
	// bl 0x8242a638
	ctx.lr = 0x82EA46C8;
	sub_8242A638(ctx, base);
	// stb r31,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r31.u8);
	// addi r5,r29,10636
	ctx.r5.s64 = ctx.r29.s64 + 10636;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c338
	ctx.lr = 0x82EA46DC;
	sub_82E8C338(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea46f0
	if (!cr6.eq) goto loc_82EA46F0;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea46fc
	goto loc_82EA46FC;
loc_82EA46F0:
	// lbz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r10,260(r1)
	PPC_STORE_U8(ctx.r1.u32 + 260, ctx.r10.u8);
loc_82EA46FC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea470c
	if (cr6.eq) goto loc_82EA470C;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82EA470C:
	// bl 0x8242a638
	ctx.lr = 0x82EA4710;
	sub_8242A638(ctx, base);
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r5,r29,10704
	ctx.r5.s64 = ctx.r29.s64 + 10704;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA4724;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea4738
	if (!cr6.eq) goto loc_82EA4738;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea4758
	goto loc_82EA4758;
loc_82EA4738:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r28
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r28.u64, xer);
	// ble cr6,0x82ea474c
	if (!cr6.gt) goto loc_82EA474C;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82ea4750
	goto loc_82EA4750;
loc_82EA474C:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA4750:
	// stw r11,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA4758:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea4768
	if (cr6.eq) goto loc_82EA4768;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82EA4768:
	// bl 0x8242a638
	ctx.lr = 0x82EA476C;
	sub_8242A638(ctx, base);
	// stfd f27,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f27.u64);
	// addi r5,r29,10788
	ctx.r5.s64 = ctx.r29.s64 + 10788;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c578
	ctx.lr = 0x82EA4780;
	sub_82E8C578(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea4794
	if (!cr6.eq) goto loc_82EA4794;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea47c4
	goto loc_82EA47C4;
loc_82EA4794:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82ea47a8
	if (!cr6.lt) goto loc_82EA47A8;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82ea47bc
	goto loc_82EA47BC;
loc_82EA47A8:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82ea47b8
	if (!cr6.gt) goto loc_82EA47B8;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
	// b 0x82ea47bc
	goto loc_82EA47BC;
loc_82EA47B8:
	// frsp f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64));
loc_82EA47BC:
	// stfs f0,268(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA47C4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea47d4
	if (cr6.eq) goto loc_82EA47D4;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82EA47D4:
	// bl 0x8242a638
	ctx.lr = 0x82EA47D8;
	sub_8242A638(ctx, base);
	// stfd f27,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f27.u64);
	// addi r5,r29,10884
	ctx.r5.s64 = ctx.r29.s64 + 10884;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c578
	ctx.lr = 0x82EA47EC;
	sub_82E8C578(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea4800
	if (!cr6.eq) goto loc_82EA4800;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea4830
	goto loc_82EA4830;
loc_82EA4800:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82ea4814
	if (!cr6.lt) goto loc_82EA4814;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82ea4828
	goto loc_82EA4828;
loc_82EA4814:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82ea4824
	if (!cr6.gt) goto loc_82EA4824;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
	// b 0x82ea4828
	goto loc_82EA4828;
loc_82EA4824:
	// frsp f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64));
loc_82EA4828:
	// stfs f0,272(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA4830:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea4840
	if (cr6.eq) goto loc_82EA4840;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82EA4840:
	// bl 0x8242a638
	ctx.lr = 0x82EA4844;
	sub_8242A638(ctx, base);
	// stfd f27,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f27.u64);
	// addi r5,r29,10956
	ctx.r5.s64 = ctx.r29.s64 + 10956;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c578
	ctx.lr = 0x82EA4858;
	sub_82E8C578(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea486c
	if (!cr6.eq) goto loc_82EA486C;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea489c
	goto loc_82EA489C;
loc_82EA486C:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82ea4880
	if (!cr6.lt) goto loc_82EA4880;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82ea4894
	goto loc_82EA4894;
loc_82EA4880:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82ea4890
	if (!cr6.gt) goto loc_82EA4890;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
	// b 0x82ea4894
	goto loc_82EA4894;
loc_82EA4890:
	// frsp f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64));
loc_82EA4894:
	// stfs f0,276(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA489C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea48ac
	if (cr6.eq) goto loc_82EA48AC;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82EA48AC:
	// bl 0x8242a638
	ctx.lr = 0x82EA48B0;
	sub_8242A638(ctx, base);
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r5,r29,11028
	ctx.r5.s64 = ctx.r29.s64 + 11028;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA48C4;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea48d8
	if (!cr6.eq) goto loc_82EA48D8;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea48f8
	goto loc_82EA48F8;
loc_82EA48D8:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r28
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r28.u64, xer);
	// ble cr6,0x82ea48ec
	if (!cr6.gt) goto loc_82EA48EC;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82ea48f0
	goto loc_82EA48F0;
loc_82EA48EC:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA48F0:
	// stw r11,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA48F8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea4908
	if (cr6.eq) goto loc_82EA4908;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82EA4908:
	// bl 0x8242a638
	ctx.lr = 0x82EA490C;
	sub_8242A638(ctx, base);
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r5,r29,11132
	ctx.r5.s64 = ctx.r29.s64 + 11132;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA4920;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea4934
	if (!cr6.eq) goto loc_82EA4934;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea4954
	goto loc_82EA4954;
loc_82EA4934:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r28
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r28.u64, xer);
	// ble cr6,0x82ea4948
	if (!cr6.gt) goto loc_82EA4948;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82ea494c
	goto loc_82EA494C;
loc_82EA4948:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA494C:
	// stw r11,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA4954:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea4964
	if (cr6.eq) goto loc_82EA4964;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82EA4964:
	// bl 0x8242a638
	ctx.lr = 0x82EA4968;
	sub_8242A638(ctx, base);
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r5,r29,11236
	ctx.r5.s64 = ctx.r29.s64 + 11236;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA497C;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea4990
	if (!cr6.eq) goto loc_82EA4990;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea49b0
	goto loc_82EA49B0;
loc_82EA4990:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r28
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r28.u64, xer);
	// ble cr6,0x82ea49a4
	if (!cr6.gt) goto loc_82EA49A4;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82ea49a8
	goto loc_82EA49A8;
loc_82EA49A4:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA49A8:
	// stw r11,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA49B0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea49c0
	if (cr6.eq) goto loc_82EA49C0;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82EA49C0:
	// bl 0x8242a638
	ctx.lr = 0x82EA49C4;
	sub_8242A638(ctx, base);
	// std r31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r31.u64);
	// addi r5,r29,11336
	ctx.r5.s64 = ctx.r29.s64 + 11336;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA49D8;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea49ec
	if (!cr6.eq) goto loc_82EA49EC;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea49f8
	goto loc_82EA49F8;
loc_82EA49EC:
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r11,1
	ctx.r11.s64 = 1;
	// std r10,296(r1)
	PPC_STORE_U64(ctx.r1.u32 + 296, ctx.r10.u64);
loc_82EA49F8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea4a08
	if (cr6.eq) goto loc_82EA4A08;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82EA4A08:
	// bl 0x8242a638
	ctx.lr = 0x82EA4A0C;
	sub_8242A638(ctx, base);
	// stfd f27,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f27.u64);
	// addi r5,r29,11428
	ctx.r5.s64 = ctx.r29.s64 + 11428;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c578
	ctx.lr = 0x82EA4A20;
	sub_82E8C578(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea4a34
	if (!cr6.eq) goto loc_82EA4A34;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// b 0x82ea4a64
	goto loc_82EA4A64;
loc_82EA4A34:
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82ea4a48
	if (!cr6.lt) goto loc_82EA4A48;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82ea4a5c
	goto loc_82EA4A5C;
loc_82EA4A48:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82ea4a58
	if (!cr6.gt) goto loc_82EA4A58;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
	// b 0x82ea4a5c
	goto loc_82EA4A5C;
loc_82EA4A58:
	// frsp f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64));
loc_82EA4A5C:
	// stfs f0,304(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 304, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82EA4A64:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea4a74
	if (cr6.eq) goto loc_82EA4A74;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82EA4A74:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea3f9c
	if (cr6.eq) goto loc_82EA3F9C;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82e9de20
	ctx.lr = 0x82EA4A8C;
	sub_82E9DE20(ctx, base);
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82535aa0
	ctx.lr = 0x82EA4A98;
	sub_82535AA0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82535aa0
	ctx.lr = 0x82EA4AA0;
	sub_82535AA0(ctx, base);
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82535aa0
	ctx.lr = 0x82EA4AAC;
	sub_82535AA0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x831ce7c0
	ctx.lr = 0x82EA4ABC;
	__restfpr_27(ctx, base);
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA4AC0"))) PPC_WEAK_FUNC(sub_82EA4AC0);
PPC_FUNC_IMPL(__imp__sub_82EA4AC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82EA4AC8;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x82e6e978
	ctx.lr = 0x82EA4ADC;
	sub_82E6E978(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ea4b60
	if (cr6.eq) goto loc_82EA4B60;
	// lwz r31,24(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825359d8
	ctx.lr = 0x82EA4AF4;
	sub_825359D8(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r30,r11,-30564
	ctx.r30.s64 = ctx.r11.s64 + -30564;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r5,r30,-120
	ctx.r5.s64 = ctx.r30.s64 + -120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8c3a8
	ctx.lr = 0x82EA4B10;
	sub_82E8C3A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea4b58
	if (cr6.eq) goto loc_82EA4B58;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ea3ee0
	ctx.lr = 0x82EA4B2C;
	sub_82EA3EE0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825359d8
	ctx.lr = 0x82EA4B3C;
	sub_825359D8(ctx, base);
	// cmplwi cr6,r29,1
	cr6.compare<uint32_t>(ctx.r29.u32, 1, xer);
	// blt cr6,0x82ea4bdc
	if (cr6.lt) goto loc_82EA4BDC;
	// beq cr6,0x82ea4ba4
	if (cr6.eq) goto loc_82EA4BA4;
	// cmplwi cr6,r29,3
	cr6.compare<uint32_t>(ctx.r29.u32, 3, xer);
	// blt cr6,0x82ea4b6c
	if (cr6.lt) goto loc_82EA4B6C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535aa0
	ctx.lr = 0x82EA4B58;
	sub_82535AA0(ctx, base);
loc_82EA4B58:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535aa0
	ctx.lr = 0x82EA4B60;
	sub_82535AA0(ctx, base);
loc_82EA4B60:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82EA4B6C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8c3a8
	ctx.lr = 0x82EA4B7C;
	sub_82E8C3A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea4c14
	if (!cr6.eq) goto loc_82EA4C14;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535aa0
	ctx.lr = 0x82EA4B90;
	sub_82535AA0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535aa0
	ctx.lr = 0x82EA4B98;
	sub_82535AA0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82EA4BA4:
	// addi r5,r30,-52
	ctx.r5.s64 = ctx.r30.s64 + -52;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8c3a8
	ctx.lr = 0x82EA4BB4;
	sub_82E8C3A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea4c14
	if (!cr6.eq) goto loc_82EA4C14;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535aa0
	ctx.lr = 0x82EA4BC8;
	sub_82535AA0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535aa0
	ctx.lr = 0x82EA4BD0;
	sub_82535AA0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82EA4BDC:
	// addi r5,r30,-92
	ctx.r5.s64 = ctx.r30.s64 + -92;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8c3a8
	ctx.lr = 0x82EA4BEC;
	sub_82E8C3A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea4c14
	if (!cr6.eq) goto loc_82EA4C14;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535aa0
	ctx.lr = 0x82EA4C00;
	sub_82535AA0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535aa0
	ctx.lr = 0x82EA4C08;
	sub_82535AA0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82EA4C14:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ea3ee0
	ctx.lr = 0x82EA4C24;
	sub_82EA3EE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// or r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 | ctx.r10.u64;
	// bl 0x82535aa0
	ctx.lr = 0x82EA4C38;
	sub_82535AA0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535aa0
	ctx.lr = 0x82EA4C40;
	sub_82535AA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA4C4C"))) PPC_WEAK_FUNC(sub_82EA4C4C);
PPC_FUNC_IMPL(__imp__sub_82EA4C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA4C50"))) PPC_WEAK_FUNC(sub_82EA4C50);
PPC_FUNC_IMPL(__imp__sub_82EA4C50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82EA4C58;
	__savegprlr_28(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82ee88e0
	ctx.lr = 0x82EA4C74;
	sub_82EE88E0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e9e728
	ctx.lr = 0x82EA4C84;
	sub_82E9E728(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82e9df08
	ctx.lr = 0x82EA4C94;
	sub_82E9DF08(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ea4ac0
	ctx.lr = 0x82EA4CA4;
	sub_82EA4AC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea4cc8
	if (cr6.eq) goto loc_82EA4CC8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e9de20
	ctx.lr = 0x82EA4CBC;
	sub_82E9DE20(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82EA4CC8:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea4cec
	if (cr6.eq) goto loc_82EA4CEC;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e9de20
	ctx.lr = 0x82EA4CE0;
	sub_82E9DE20(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82EA4CEC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA4CF8"))) PPC_WEAK_FUNC(sub_82EA4CF8);
PPC_FUNC_IMPL(__imp__sub_82EA4CF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82EA4D00;
	__savegprlr_29(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82e9f120
	ctx.lr = 0x82EA4D18;
	sub_82E9F120(ctx, base);
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r6,76
	ctx.r6.s64 = 4980736;
	// lfs f0,6060(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6060);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,-26260(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -26260);
	ctx.f13.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r5,r6,19264
	ctx.r5.u64 = ctx.r6.u64 | 19264;
	// lfs f12,6520(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6520);
	ctx.f12.f64 = double(temp.f32);
	// li r4,1500
	ctx.r4.s64 = 1500;
	// lfs f11,32048(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 32048);
	ctx.f11.f64 = double(temp.f32);
	// li r3,22
	ctx.r3.s64 = 22;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r9,256
	ctx.r9.s64 = 256;
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f12,180(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// stfs f11,204(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// std r5,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r5.u64);
	// stb r11,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r11.u8);
	// stb r11,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r11.u8);
	// stb r11,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r11.u8);
	// stb r10,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r10.u8);
	// stb r11,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r11.u8);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// stb r11,124(r1)
	PPC_STORE_U8(ctx.r1.u32 + 124, ctx.r11.u8);
	// stb r10,125(r1)
	PPC_STORE_U8(ctx.r1.u32 + 125, ctx.r10.u8);
	// stb r11,126(r1)
	PPC_STORE_U8(ctx.r1.u32 + 126, ctx.r11.u8);
	// stb r11,127(r1)
	PPC_STORE_U8(ctx.r1.u32 + 127, ctx.r11.u8);
	// stb r11,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r11.u8);
	// stw r4,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r4.u32);
	// stb r11,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r11.u8);
	// stb r11,137(r1)
	PPC_STORE_U8(ctx.r1.u32 + 137, ctx.r11.u8);
	// stb r11,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r11.u8);
	// stw r3,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
	// stb r11,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, ctx.r11.u8);
	// stw r9,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r9.u32);
	// stb r11,156(r1)
	PPC_STORE_U8(ctx.r1.u32 + 156, ctx.r11.u8);
	// stb r11,157(r1)
	PPC_STORE_U8(ctx.r1.u32 + 157, ctx.r11.u8);
	// stb r11,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r11.u8);
	// stb r11,168(r1)
	PPC_STORE_U8(ctx.r1.u32 + 168, ctx.r11.u8);
	// stw r10,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r10.u32);
	// stb r11,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r11.u8);
	// stb r11,200(r1)
	PPC_STORE_U8(ctx.r1.u32 + 200, ctx.r11.u8);
	// blt cr6,0x82ea4e04
	if (cr6.lt) goto loc_82EA4E04;
	// beq cr6,0x82ea4df4
	if (cr6.eq) goto loc_82EA4DF4;
loc_82EA4DE8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82EA4DF4:
	// stb r11,137(r1)
	PPC_STORE_U8(ctx.r1.u32 + 137, ctx.r11.u8);
	// stb r11,168(r1)
	PPC_STORE_U8(ctx.r1.u32 + 168, ctx.r11.u8);
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// b 0x82ea4e30
	goto loc_82EA4E30;
loc_82EA4E04:
	// li r9,750
	ctx.r9.s64 = 750;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// li r8,11
	ctx.r8.s64 = 11;
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// stb r11,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r11.u8);
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// stb r10,137(r1)
	PPC_STORE_U8(ctx.r1.u32 + 137, ctx.r10.u8);
	// stb r11,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r11.u8);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// stb r11,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, ctx.r11.u8);
	// stw r8,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r8.u32);
loc_82EA4E30:
	// stb r11,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r11.u8);
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(ctx.r30.u32, 1, xer);
	// stb r11,125(r1)
	PPC_STORE_U8(ctx.r1.u32 + 125, ctx.r11.u8);
	// stb r11,124(r1)
	PPC_STORE_U8(ctx.r1.u32 + 124, ctx.r11.u8);
	// stb r10,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r10.u8);
	// stb r11,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r11.u8);
	// blt cr6,0x82ea4e58
	if (cr6.lt) goto loc_82EA4E58;
	// beq cr6,0x82ea4e58
	if (cr6.eq) goto loc_82EA4E58;
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(ctx.r30.u32, 3, xer);
	// bge cr6,0x82ea4de8
	if (!cr6.lt) goto loc_82EA4DE8;
loc_82EA4E58:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e9e988
	ctx.lr = 0x82EA4E64;
	sub_82E9E988(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA4E70"))) PPC_WEAK_FUNC(sub_82EA4E70);
PPC_FUNC_IMPL(__imp__sub_82EA4E70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82EA4E78;
	__savegprlr_24(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x831ce774
	ctx.lr = 0x82EA4E80;
	__savefpr_27(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82e9e988
	ctx.lr = 0x82EA4E98;
	sub_82E9E988(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r25,r11,12496
	ctx.r25.s64 = ctx.r11.s64 + 12496;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r25,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r25.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// bl 0x825359d8
	ctx.lr = 0x82EA4EB8;
	sub_825359D8(ctx, base);
	// stb r30,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r30.u8);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82535130
	ctx.lr = 0x82EA4EC4;
	sub_82535130(ctx, base);
	// stb r30,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r30.u8);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82535130
	ctx.lr = 0x82EA4ED0;
	sub_82535130(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x825369e8
	ctx.lr = 0x82EA4EDC;
	sub_825369E8(ctx, base);
	// li r31,1
	ctx.r31.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r31,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r31.u8);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x825359d8
	ctx.lr = 0x82EA4EF0;
	sub_825359D8(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r28,r11,-30360
	ctx.r28.s64 = ctx.r11.s64 + -30360;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82e8c3a8
	ctx.lr = 0x82EA4F08;
	sub_82E8C3A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea4f38
	if (cr6.eq) goto loc_82EA4F38;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e9e058
	ctx.lr = 0x82EA4F20;
	sub_82E9E058(ctx, base);
	// lbz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 120);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ea4f60
	if (!cr6.eq) goto loc_82EA4F60;
loc_82EA4F2C:
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82535aa0
	ctx.lr = 0x82EA4F38;
	sub_82535AA0(ctx, base);
loc_82EA4F38:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82535aa0
	ctx.lr = 0x82EA4F40;
	sub_82535AA0(ctx, base);
	// stw r25,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r25.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82535aa0
	ctx.lr = 0x82EA4F4C;
	sub_82535AA0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x831ce7c0
	ctx.lr = 0x82EA4F5C;
	__restfpr_27(ctx, base);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82EA4F60:
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// addi r5,r28,11468
	ctx.r5.s64 = ctx.r28.s64 + 11468;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c338
	ctx.lr = 0x82EA4F74;
	sub_82E8C338(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea4f88
	if (!cr6.eq) goto loc_82EA4F88;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82ea4f98
	goto loc_82EA4F98;
loc_82EA4F88:
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
	// stb r10,177(r1)
	PPC_STORE_U8(ctx.r1.u32 + 177, ctx.r10.u8);
loc_82EA4F98:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea4fa8
	if (cr6.eq) goto loc_82EA4FA8;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
loc_82EA4FA8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r5,r28,11512
	ctx.r5.s64 = ctx.r28.s64 + 11512;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfd f28,9000(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f28.u64 = PPC_LOAD_U64(ctx.r11.u32 + 9000);
	// stfd f28,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f28.u64);
	// bl 0x82e8c578
	ctx.lr = 0x82EA4FC4;
	sub_82E8C578(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32231
	ctx.r7.s64 = -2112290816;
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// lfs f27,-4660(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4660);
	ctx.f27.f64 = double(temp.f32);
	// lfd f29,-18168(r9)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r9.u32 + -18168);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// lfs f30,-4664(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -4664);
	ctx.f30.f64 = double(temp.f32);
	// lfd f31,-18160(r7)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r7.u32 + -18160);
	// bne cr6,0x82ea4ff8
	if (!cr6.eq) goto loc_82EA4FF8;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82ea502c
	goto loc_82EA502C;
loc_82EA4FF8:
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82ea500c
	if (!cr6.lt) goto loc_82EA500C;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82ea5020
	goto loc_82EA5020;
loc_82EA500C:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82ea501c
	if (!cr6.gt) goto loc_82EA501C;
	// fmr f0,f27
	ctx.f0.f64 = ctx.f27.f64;
	// b 0x82ea5020
	goto loc_82EA5020;
loc_82EA501C:
	// frsp f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64));
loc_82EA5020:
	// stfs f0,184(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,180(r1)
	PPC_STORE_U8(ctx.r1.u32 + 180, ctx.r31.u8);
loc_82EA502C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea503c
	if (cr6.eq) goto loc_82EA503C;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
loc_82EA503C:
	// std r30,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r30.u64);
	// addi r5,r28,11552
	ctx.r5.s64 = ctx.r28.s64 + 11552;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA5050;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea5064
	if (!cr6.eq) goto loc_82EA5064;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82ea5074
	goto loc_82EA5074;
loc_82EA5064:
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// std r10,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r10.u64);
loc_82EA5074:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea5084
	if (cr6.eq) goto loc_82EA5084;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
loc_82EA5084:
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// addi r5,r28,11600
	ctx.r5.s64 = ctx.r28.s64 + 11600;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c338
	ctx.lr = 0x82EA5098;
	sub_82E8C338(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea50ac
	if (!cr6.eq) goto loc_82EA50AC;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82ea50bc
	goto loc_82EA50BC;
loc_82EA50AC:
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r31.u8);
	// stb r10,209(r1)
	PPC_STORE_U8(ctx.r1.u32 + 209, ctx.r10.u8);
loc_82EA50BC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea50cc
	if (cr6.eq) goto loc_82EA50CC;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
loc_82EA50CC:
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// addi r5,r28,11636
	ctx.r5.s64 = ctx.r28.s64 + 11636;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c338
	ctx.lr = 0x82EA50E0;
	sub_82E8C338(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea50f4
	if (!cr6.eq) goto loc_82EA50F4;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82ea5104
	goto loc_82EA5104;
loc_82EA50F4:
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,210(r1)
	PPC_STORE_U8(ctx.r1.u32 + 210, ctx.r31.u8);
	// stb r10,211(r1)
	PPC_STORE_U8(ctx.r1.u32 + 211, ctx.r10.u8);
loc_82EA5104:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea5114
	if (cr6.eq) goto loc_82EA5114;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
loc_82EA5114:
	// std r30,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r30.u64);
	// addi r5,r28,11660
	ctx.r5.s64 = ctx.r28.s64 + 11660;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA5128;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r27,-1
	ctx.r27.s64 = -1;
	// clrldi r29,r10,32
	ctx.r29.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea5148
	if (!cr6.eq) goto loc_82EA5148;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82ea516c
	goto loc_82EA516C;
loc_82EA5148:
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// cmpld cr6,r11,r29
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r29.u64, xer);
	// ble cr6,0x82ea515c
	if (!cr6.gt) goto loc_82EA515C;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82ea5160
	goto loc_82EA5160;
loc_82EA515C:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA5160:
	// stw r11,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r11.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,212(r1)
	PPC_STORE_U8(ctx.r1.u32 + 212, ctx.r31.u8);
loc_82EA516C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea517c
	if (cr6.eq) goto loc_82EA517C;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
loc_82EA517C:
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// addi r5,r28,11684
	ctx.r5.s64 = ctx.r28.s64 + 11684;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c338
	ctx.lr = 0x82EA5190;
	sub_82E8C338(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea51a4
	if (!cr6.eq) goto loc_82EA51A4;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82ea51b4
	goto loc_82EA51B4;
loc_82EA51A4:
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,220(r1)
	PPC_STORE_U8(ctx.r1.u32 + 220, ctx.r31.u8);
	// stb r10,221(r1)
	PPC_STORE_U8(ctx.r1.u32 + 221, ctx.r10.u8);
loc_82EA51B4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea51c4
	if (cr6.eq) goto loc_82EA51C4;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
loc_82EA51C4:
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// addi r5,r28,11704
	ctx.r5.s64 = ctx.r28.s64 + 11704;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c338
	ctx.lr = 0x82EA51D8;
	sub_82E8C338(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea51ec
	if (!cr6.eq) goto loc_82EA51EC;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82ea51fc
	goto loc_82EA51FC;
loc_82EA51EC:
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,222(r1)
	PPC_STORE_U8(ctx.r1.u32 + 222, ctx.r31.u8);
	// stb r10,223(r1)
	PPC_STORE_U8(ctx.r1.u32 + 223, ctx.r10.u8);
loc_82EA51FC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea520c
	if (cr6.eq) goto loc_82EA520C;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
loc_82EA520C:
	// std r30,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r30.u64);
	// addi r5,r28,11736
	ctx.r5.s64 = ctx.r28.s64 + 11736;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA5220;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea5234
	if (!cr6.eq) goto loc_82EA5234;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82ea5258
	goto loc_82EA5258;
loc_82EA5234:
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// cmpld cr6,r11,r29
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r29.u64, xer);
	// ble cr6,0x82ea5248
	if (!cr6.gt) goto loc_82EA5248;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82ea524c
	goto loc_82EA524C;
loc_82EA5248:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA524C:
	// stw r11,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r11.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
loc_82EA5258:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea5268
	if (cr6.eq) goto loc_82EA5268;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
loc_82EA5268:
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// addi r5,r28,11764
	ctx.r5.s64 = ctx.r28.s64 + 11764;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c338
	ctx.lr = 0x82EA527C;
	sub_82E8C338(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea5290
	if (!cr6.eq) goto loc_82EA5290;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82ea52a0
	goto loc_82EA52A0;
loc_82EA5290:
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,232(r1)
	PPC_STORE_U8(ctx.r1.u32 + 232, ctx.r31.u8);
	// stb r10,233(r1)
	PPC_STORE_U8(ctx.r1.u32 + 233, ctx.r10.u8);
loc_82EA52A0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea52b0
	if (cr6.eq) goto loc_82EA52B0;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
loc_82EA52B0:
	// std r30,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r30.u64);
	// addi r5,r28,11796
	ctx.r5.s64 = ctx.r28.s64 + 11796;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA52C4;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea52d8
	if (!cr6.eq) goto loc_82EA52D8;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82ea52fc
	goto loc_82EA52FC;
loc_82EA52D8:
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// cmpld cr6,r11,r29
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r29.u64, xer);
	// ble cr6,0x82ea52ec
	if (!cr6.gt) goto loc_82EA52EC;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82ea52f0
	goto loc_82EA52F0;
loc_82EA52EC:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA52F0:
	// stw r11,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r11.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,236(r1)
	PPC_STORE_U8(ctx.r1.u32 + 236, ctx.r31.u8);
loc_82EA52FC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea530c
	if (cr6.eq) goto loc_82EA530C;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
loc_82EA530C:
	// std r30,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r30.u64);
	// addi r5,r28,11828
	ctx.r5.s64 = ctx.r28.s64 + 11828;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA5320;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea5334
	if (!cr6.eq) goto loc_82EA5334;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82ea5358
	goto loc_82EA5358;
loc_82EA5334:
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// cmpld cr6,r11,r29
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r29.u64, xer);
	// ble cr6,0x82ea5348
	if (!cr6.gt) goto loc_82EA5348;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82ea534c
	goto loc_82EA534C;
loc_82EA5348:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA534C:
	// stw r11,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r11.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,244(r1)
	PPC_STORE_U8(ctx.r1.u32 + 244, ctx.r31.u8);
loc_82EA5358:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea5368
	if (cr6.eq) goto loc_82EA5368;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
loc_82EA5368:
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// addi r5,r28,11868
	ctx.r5.s64 = ctx.r28.s64 + 11868;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c338
	ctx.lr = 0x82EA537C;
	sub_82E8C338(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea5390
	if (!cr6.eq) goto loc_82EA5390;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82ea53a0
	goto loc_82EA53A0;
loc_82EA5390:
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,252(r1)
	PPC_STORE_U8(ctx.r1.u32 + 252, ctx.r31.u8);
	// stb r10,253(r1)
	PPC_STORE_U8(ctx.r1.u32 + 253, ctx.r10.u8);
loc_82EA53A0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea53b0
	if (cr6.eq) goto loc_82EA53B0;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
loc_82EA53B0:
	// stfd f28,88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f28.u64);
	// addi r5,r28,11904
	ctx.r5.s64 = ctx.r28.s64 + 11904;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c578
	ctx.lr = 0x82EA53C4;
	sub_82E8C578(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea53d8
	if (!cr6.eq) goto loc_82EA53D8;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82ea540c
	goto loc_82EA540C;
loc_82EA53D8:
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82ea53ec
	if (!cr6.lt) goto loc_82EA53EC;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82ea5400
	goto loc_82EA5400;
loc_82EA53EC:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82ea53fc
	if (!cr6.gt) goto loc_82EA53FC;
	// fmr f0,f27
	ctx.f0.f64 = ctx.f27.f64;
	// b 0x82ea5400
	goto loc_82EA5400;
loc_82EA53FC:
	// frsp f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64));
loc_82EA5400:
	// stfs f0,260(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
loc_82EA540C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea541c
	if (cr6.eq) goto loc_82EA541C;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
loc_82EA541C:
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r5,r28,11932
	ctx.r5.s64 = ctx.r28.s64 + 11932;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c1e8
	ctx.lr = 0x82EA5430;
	sub_82E8C1E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea5444
	if (!cr6.eq) goto loc_82EA5444;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82ea5454
	goto loc_82EA5454;
loc_82EA5444:
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,264(r1)
	PPC_STORE_U8(ctx.r1.u32 + 264, ctx.r31.u8);
	// stw r10,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r10.u32);
loc_82EA5454:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea5464
	if (cr6.eq) goto loc_82EA5464;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
loc_82EA5464:
	// stfd f28,88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f28.u64);
	// addi r5,r28,11968
	ctx.r5.s64 = ctx.r28.s64 + 11968;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c578
	ctx.lr = 0x82EA5478;
	sub_82E8C578(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea548c
	if (!cr6.eq) goto loc_82EA548C;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82ea54c0
	goto loc_82EA54C0;
loc_82EA548C:
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82ea54a0
	if (!cr6.lt) goto loc_82EA54A0;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82ea54b4
	goto loc_82EA54B4;
loc_82EA54A0:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82ea54b0
	if (!cr6.gt) goto loc_82EA54B0;
	// fmr f0,f27
	ctx.f0.f64 = ctx.f27.f64;
	// b 0x82ea54b4
	goto loc_82EA54B4;
loc_82EA54B0:
	// frsp f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64));
loc_82EA54B4:
	// stfs f0,276(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r31.u8);
loc_82EA54C0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea54d0
	if (cr6.eq) goto loc_82EA54D0;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
loc_82EA54D0:
	// std r30,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r30.u64);
	// addi r5,r28,12004
	ctx.r5.s64 = ctx.r28.s64 + 12004;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA54E4;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea54f8
	if (!cr6.eq) goto loc_82EA54F8;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82ea551c
	goto loc_82EA551C;
loc_82EA54F8:
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// cmpld cr6,r11,r29
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r29.u64, xer);
	// ble cr6,0x82ea550c
	if (!cr6.gt) goto loc_82EA550C;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82ea5510
	goto loc_82EA5510;
loc_82EA550C:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA5510:
	// stw r11,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r11.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,280(r1)
	PPC_STORE_U8(ctx.r1.u32 + 280, ctx.r31.u8);
loc_82EA551C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea552c
	if (cr6.eq) goto loc_82EA552C;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
loc_82EA552C:
	// std r30,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r30.u64);
	// addi r5,r28,12028
	ctx.r5.s64 = ctx.r28.s64 + 12028;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA5540;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea5554
	if (!cr6.eq) goto loc_82EA5554;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82ea5578
	goto loc_82EA5578;
loc_82EA5554:
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// cmpld cr6,r11,r29
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r29.u64, xer);
	// ble cr6,0x82ea5568
	if (!cr6.gt) goto loc_82EA5568;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82ea556c
	goto loc_82EA556C;
loc_82EA5568:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA556C:
	// stw r11,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r11.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
loc_82EA5578:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea5588
	if (cr6.eq) goto loc_82EA5588;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
loc_82EA5588:
	// stfd f28,88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f28.u64);
	// addi r5,r28,12060
	ctx.r5.s64 = ctx.r28.s64 + 12060;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c578
	ctx.lr = 0x82EA559C;
	sub_82E8C578(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea55b0
	if (!cr6.eq) goto loc_82EA55B0;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82ea55e4
	goto loc_82EA55E4;
loc_82EA55B0:
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82ea55c4
	if (!cr6.lt) goto loc_82EA55C4;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82ea55d8
	goto loc_82EA55D8;
loc_82EA55C4:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82ea55d4
	if (!cr6.gt) goto loc_82EA55D4;
	// fmr f0,f27
	ctx.f0.f64 = ctx.f27.f64;
	// b 0x82ea55d8
	goto loc_82EA55D8;
loc_82EA55D4:
	// frsp f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64));
loc_82EA55D8:
	// stfs f0,300(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 300, temp.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,296(r1)
	PPC_STORE_U8(ctx.r1.u32 + 296, ctx.r31.u8);
loc_82EA55E4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea55f4
	if (cr6.eq) goto loc_82EA55F4;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
loc_82EA55F4:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea4f2c
	if (cr6.eq) goto loc_82EA4F2C;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82e9e988
	ctx.lr = 0x82EA560C;
	sub_82E9E988(ctx, base);
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82535aa0
	ctx.lr = 0x82EA5618;
	sub_82535AA0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82535aa0
	ctx.lr = 0x82EA5620;
	sub_82535AA0(ctx, base);
	// stw r25,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r25.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82535aa0
	ctx.lr = 0x82EA562C;
	sub_82535AA0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x831ce7c0
	ctx.lr = 0x82EA563C;
	__restfpr_27(ctx, base);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA5640"))) PPC_WEAK_FUNC(sub_82EA5640);
PPC_FUNC_IMPL(__imp__sub_82EA5640) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82EA5648;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x82e6e978
	ctx.lr = 0x82EA5660;
	sub_82E6E978(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ea5728
	if (cr6.eq) goto loc_82EA5728;
	// lwz r31,24(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r28,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r28.u8);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825359d8
	ctx.lr = 0x82EA567C;
	sub_825359D8(ctx, base);
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825359d8
	ctx.lr = 0x82EA568C;
	sub_825359D8(ctx, base);
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(ctx.r30.u32, 1, xer);
	// blt cr6,0x82ea56e4
	if (cr6.lt) goto loc_82EA56E4;
	// bne cr6,0x82ea5718
	if (!cr6.eq) goto loc_82EA5718;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r30,r11,-30564
	ctx.r30.s64 = ctx.r11.s64 + -30564;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r5,r30,-120
	ctx.r5.s64 = ctx.r30.s64 + -120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8c3a8
	ctx.lr = 0x82EA56B4;
	sub_82E8C3A8(ctx, base);
	// stb r3,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r3.u8);
	// cmplwi cr6,r29,1
	cr6.compare<uint32_t>(ctx.r29.u32, 1, xer);
	// blt cr6,0x82ea56dc
	if (cr6.lt) goto loc_82EA56DC;
	// beq cr6,0x82ea56d4
	if (cr6.eq) goto loc_82EA56D4;
	// cmplwi cr6,r29,3
	cr6.compare<uint32_t>(ctx.r29.u32, 3, xer);
	// bge cr6,0x82ea5718
	if (!cr6.lt) goto loc_82EA5718;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// b 0x82ea5748
	goto loc_82EA5748;
loc_82EA56D4:
	// addi r5,r30,-52
	ctx.r5.s64 = ctx.r30.s64 + -52;
	// b 0x82ea5748
	goto loc_82EA5748;
loc_82EA56DC:
	// addi r5,r30,-92
	ctx.r5.s64 = ctx.r30.s64 + -92;
	// b 0x82ea5748
	goto loc_82EA5748;
loc_82EA56E4:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r30,r11,-30564
	ctx.r30.s64 = ctx.r11.s64 + -30564;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r5,r30,-128
	ctx.r5.s64 = ctx.r30.s64 + -128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8c3a8
	ctx.lr = 0x82EA5700;
	sub_82E8C3A8(ctx, base);
	// stb r3,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r3.u8);
	// cmplwi cr6,r29,1
	cr6.compare<uint32_t>(ctx.r29.u32, 1, xer);
	// blt cr6,0x82ea5744
	if (cr6.lt) goto loc_82EA5744;
	// beq cr6,0x82ea573c
	if (cr6.eq) goto loc_82EA573C;
	// cmplwi cr6,r29,3
	cr6.compare<uint32_t>(ctx.r29.u32, 3, xer);
	// blt cr6,0x82ea5734
	if (cr6.lt) goto loc_82EA5734;
loc_82EA5718:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82535aa0
	ctx.lr = 0x82EA5720;
	sub_82535AA0(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82535aa0
	ctx.lr = 0x82EA5728;
	sub_82535AA0(ctx, base);
loc_82EA5728:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82EA5734:
	// addi r5,r30,-32
	ctx.r5.s64 = ctx.r30.s64 + -32;
	// b 0x82ea5748
	goto loc_82EA5748;
loc_82EA573C:
	// addi r5,r30,-72
	ctx.r5.s64 = ctx.r30.s64 + -72;
	// b 0x82ea5748
	goto loc_82EA5748;
loc_82EA5744:
	// addi r5,r30,-112
	ctx.r5.s64 = ctx.r30.s64 + -112;
loc_82EA5748:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8c3a8
	ctx.lr = 0x82EA5754;
	sub_82E8C3A8(ctx, base);
	// lbz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// stb r3,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r3.u8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ea5774
	if (cr6.eq) goto loc_82EA5774;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ea4e70
	ctx.lr = 0x82EA5770;
	sub_82EA4E70(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_82EA5774:
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ea5798
	if (cr6.eq) goto loc_82EA5798;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ea4e70
	ctx.lr = 0x82EA578C;
	sub_82EA4E70(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// or r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 | ctx.r10.u64;
loc_82EA5798:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82535aa0
	ctx.lr = 0x82EA57A0;
	sub_82535AA0(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82535aa0
	ctx.lr = 0x82EA57A8;
	sub_82535AA0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA57B4"))) PPC_WEAK_FUNC(sub_82EA57B4);
PPC_FUNC_IMPL(__imp__sub_82EA57B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA57B8"))) PPC_WEAK_FUNC(sub_82EA57B8);
PPC_FUNC_IMPL(__imp__sub_82EA57B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82EA57C0;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// li r8,0
	ctx.r8.s64 = 0;
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// li r7,0
	ctx.r7.s64 = 0;
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// li r30,0
	ctx.r30.s64 = 0;
	// stb r8,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r8.u8);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stb r7,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r7.u8);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// cmplwi cr6,r5,1
	cr6.compare<uint32_t>(ctx.r5.u32, 1, xer);
	// blt cr6,0x82ea5810
	if (cr6.lt) goto loc_82EA5810;
	// beq cr6,0x82ea5810
	if (cr6.eq) goto loc_82EA5810;
	// li r24,0
	ctx.r24.s64 = 0;
	// b 0x82ea5860
	goto loc_82EA5860;
loc_82EA5810:
	// cmplwi cr6,r6,1
	cr6.compare<uint32_t>(ctx.r6.u32, 1, xer);
	// blt cr6,0x82ea582c
	if (cr6.lt) goto loc_82EA582C;
	// beq cr6,0x82ea582c
	if (cr6.eq) goto loc_82EA582C;
	// cmplwi cr6,r6,3
	cr6.compare<uint32_t>(ctx.r6.u32, 3, xer);
	// blt cr6,0x82ea582c
	if (cr6.lt) goto loc_82EA582C;
	// li r24,0
	ctx.r24.s64 = 0;
	// b 0x82ea5860
	goto loc_82EA5860;
loc_82EA582C:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// li r8,46
	ctx.r8.s64 = 46;
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// li r7,1
	ctx.r7.s64 = 1;
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// li r30,1168
	ctx.r30.s64 = 1168;
	// stb r8,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r8.u8);
	// stb r7,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r7.u8);
	// li r24,1
	ctx.r24.s64 = 1;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
loc_82EA5860:
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// bl 0x82e9f408
	ctx.lr = 0x82EA5880;
	sub_82E9F408(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea58c8
	if (cr6.eq) goto loc_82EA58C8;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// li r3,1
	ctx.r3.s64 = 1;
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r9,82(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// lbz r8,83(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// lbz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// stb r10,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r10.u8);
	// stb r9,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r9.u8);
	// stb r8,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r8.u8);
	// stb r7,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r7.u8);
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82EA58C8:
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea58f8
	if (cr6.eq) goto loc_82EA58F8;
	// stb r29,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r29.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r28,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r28.u8);
	// stb r27,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r27.u8);
	// stb r26,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r26.u8);
	// stb r25,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r25.u8);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82EA58F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA5904"))) PPC_WEAK_FUNC(sub_82EA5904);
PPC_FUNC_IMPL(__imp__sub_82EA5904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA5908"))) PPC_WEAK_FUNC(sub_82EA5908);
PPC_FUNC_IMPL(__imp__sub_82EA5908) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82EA5910;
	__savegprlr_28(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82e9f120
	ctx.lr = 0x82EA5928;
	sub_82E9F120(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ea4cf8
	ctx.lr = 0x82EA5938;
	sub_82EA4CF8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82e9e988
	ctx.lr = 0x82EA5948;
	sub_82E9E988(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ea5640
	ctx.lr = 0x82EA5958;
	sub_82EA5640(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea597c
	if (cr6.eq) goto loc_82EA597C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e9e988
	ctx.lr = 0x82EA5970;
	sub_82E9E988(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82EA597C:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea59a0
	if (cr6.eq) goto loc_82EA59A0;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e9e988
	ctx.lr = 0x82EA5994;
	sub_82E9E988(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82EA59A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA59AC"))) PPC_WEAK_FUNC(sub_82EA59AC);
PPC_FUNC_IMPL(__imp__sub_82EA59AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA59B0"))) PPC_WEAK_FUNC(sub_82EA59B0);
PPC_FUNC_IMPL(__imp__sub_82EA59B0) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// b 0x82ea17d0
	sub_82EA17D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA59C0"))) PPC_WEAK_FUNC(sub_82EA59C0);
PPC_FUNC_IMPL(__imp__sub_82EA59C0) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// b 0x82ea2288
	sub_82EA2288(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA59D0"))) PPC_WEAK_FUNC(sub_82EA59D0);
PPC_FUNC_IMPL(__imp__sub_82EA59D0) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// b 0x82ea3058
	sub_82EA3058(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA59E0"))) PPC_WEAK_FUNC(sub_82EA59E0);
PPC_FUNC_IMPL(__imp__sub_82EA59E0) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// b 0x82ea3e38
	sub_82EA3E38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA59F0"))) PPC_WEAK_FUNC(sub_82EA59F0);
PPC_FUNC_IMPL(__imp__sub_82EA59F0) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// b 0x82ea4c50
	sub_82EA4C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA5A00"))) PPC_WEAK_FUNC(sub_82EA5A00);
PPC_FUNC_IMPL(__imp__sub_82EA5A00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82EA5A08;
	__savegprlr_27(ctx, base);
	// subf. r8,r3,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r3.s64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// subf r9,r3,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r3.s64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// beq 0x82ea5a48
	if (cr0.eq) goto loc_82EA5A48;
loc_82EA5A1C:
	// divw r7,r29,r11
	ctx.r7.s32 = PPCDivide(ctx.r29.s32, ctx.r11.s32);
	// rotlwi r10,r29,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r29.u32, 1);
	// mullw r6,r7,r11
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// subf. r10,r6,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r6.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// andc r7,r11,r4
	ctx.r7.u64 = ctx.r11.u64 & ~ctx.r4.u64;
	// twllei r11,0
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// twlgei r7,-1
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// bne 0x82ea5a1c
	if (!cr0.eq) goto loc_82EA5A1C;
loc_82EA5A48:
	// cmpw cr6,r29,r9
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r9.s32, xer);
	// bge cr6,0x82ea5ad8
	if (!cr6.lt) goto loc_82EA5AD8;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble cr6,0x82ea5ad8
	if (!cr6.gt) goto loc_82EA5AD8;
	// neg r4,r3
	ctx.r4.s64 = -ctx.r3.s64;
	// neg r7,r8
	ctx.r7.s64 = -ctx.r8.s64;
	// neg r31,r5
	ctx.r31.s64 = -ctx.r5.s64;
	// add r30,r29,r3
	ctx.r30.u64 = ctx.r29.u64 + ctx.r3.u64;
loc_82EA5A68:
	// add r11,r30,r8
	ctx.r11.u64 = ctx.r30.u64 + ctx.r8.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, xer);
	// bne cr6,0x82ea5a7c
	if (!cr6.eq) goto loc_82EA5A7C;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82EA5A7C:
	// neg r10,r11
	ctx.r10.s64 = -ctx.r11.s64;
loc_82EA5A80:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// add r28,r10,r5
	ctx.r28.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lbz r27,0(r6)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// cmpw cr6,r8,r28
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r28.s32, xer);
	// stb r9,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r9.u8);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// stb r27,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r27.u8);
	// bge cr6,0x82ea5aac
	if (!cr6.lt) goto loc_82EA5AAC;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// b 0x82ea5ac4
	goto loc_82EA5AC4;
loc_82EA5AAC:
	// subf r10,r31,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r31.s64;
	// subf r9,r5,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r5.s64;
	// add r11,r7,r10
	ctx.r11.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r10,r4,r11
	ctx.r10.u64 = ctx.r4.u64 + ctx.r11.u64;
	// add r11,r9,r3
	ctx.r11.u64 = ctx.r9.u64 + ctx.r3.u64;
loc_82EA5AC4:
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// bne cr6,0x82ea5a80
	if (!cr6.eq) goto loc_82EA5A80;
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// bgt 0x82ea5a68
	if (cr0.gt) goto loc_82EA5A68;
loc_82EA5AD8:
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA5ADC"))) PPC_WEAK_FUNC(sub_82EA5ADC);
PPC_FUNC_IMPL(__imp__sub_82EA5ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA5AE0"))) PPC_WEAK_FUNC(sub_82EA5AE0);
PPC_FUNC_IMPL(__imp__sub_82EA5AE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82EA5AE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82e9ee90
	ctx.lr = 0x82EA5AFC;
	sub_82E9EE90(ctx, base);
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lis r8,-32210
	ctx.r8.s64 = -2110914560;
	// lis r7,228
	ctx.r7.s64 = 14942208;
	// lfs f0,9796(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9796);
	ctx.f0.f64 = double(temp.f32);
	// li r31,1
	ctx.r31.s64 = 1;
	// ori r6,r7,57792
	ctx.r6.u64 = ctx.r7.u64 | 57792;
	// lfs f13,-9976(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -9976);
	ctx.f13.f64 = double(temp.f32);
	// li r5,2
	ctx.r5.s64 = 2;
	// lfs f12,-26260(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -26260);
	ctx.f12.f64 = double(temp.f32);
	// li r4,32
	ctx.r4.s64 = 32;
	// lfs f11,24504(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24504);
	ctx.f11.f64 = double(temp.f32);
	// li r3,64
	ctx.r3.s64 = 64;
	// stfs f0,204(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f13,308(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 308, temp.u32);
	// stfs f12,316(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 316, temp.u32);
	// stb r31,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r31.u8);
	// stfs f11,348(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 348, temp.u32);
	// std r6,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r6.u64);
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(ctx.r30.u32, 1, xer);
	// stw r5,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// stb r31,184(r1)
	PPC_STORE_U8(ctx.r1.u32 + 184, ctx.r31.u8);
	// stw r4,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r4.u32);
	// stb r31,200(r1)
	PPC_STORE_U8(ctx.r1.u32 + 200, ctx.r31.u8);
	// stb r31,304(r1)
	PPC_STORE_U8(ctx.r1.u32 + 304, ctx.r31.u8);
	// stb r31,312(r1)
	PPC_STORE_U8(ctx.r1.u32 + 312, ctx.r31.u8);
	// stb r31,328(r1)
	PPC_STORE_U8(ctx.r1.u32 + 328, ctx.r31.u8);
	// stw r3,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r3.u32);
	// stb r31,344(r1)
	PPC_STORE_U8(ctx.r1.u32 + 344, ctx.r31.u8);
	// stb r31,418(r1)
	PPC_STORE_U8(ctx.r1.u32 + 418, ctx.r31.u8);
	// stb r11,419(r1)
	PPC_STORE_U8(ctx.r1.u32 + 419, ctx.r11.u8);
	// blt cr6,0x82ea5bb0
	if (cr6.lt) goto loc_82EA5BB0;
	// beq cr6,0x82ea5ba0
	if (cr6.eq) goto loc_82EA5BA0;
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(ctx.r30.u32, 3, xer);
	// blt cr6,0x82ea5bb0
	if (cr6.lt) goto loc_82EA5BB0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82EA5BA0:
	// lis r11,305
	ctx.r11.s64 = 19988480;
	// stb r31,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r31.u8);
	// ori r10,r11,11520
	ctx.r10.u64 = ctx.r11.u64 | 11520;
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
loc_82EA5BB0:
	// bl 0x830ff290
	ctx.lr = 0x82EA5BB4;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x82ea5bcc
	if (!cr6.eq) goto loc_82EA5BCC;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stb r31,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r31.u8);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
loc_82EA5BCC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e9e0c8
	ctx.lr = 0x82EA5BD8;
	sub_82E9E0C8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA5BE4"))) PPC_WEAK_FUNC(sub_82EA5BE4);
PPC_FUNC_IMPL(__imp__sub_82EA5BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA5BE8"))) PPC_WEAK_FUNC(sub_82EA5BE8);
PPC_FUNC_IMPL(__imp__sub_82EA5BE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82EA5BF0;
	__savegprlr_28(ctx, base);
	// stwu r1,-1200(r1)
	ea = -1200 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82e9ee90
	ctx.lr = 0x82EA5C08;
	sub_82E9EE90(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ea5ae0
	ctx.lr = 0x82EA5C18;
	sub_82EA5AE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bl 0x82e95f20
	ctx.lr = 0x82EA5C28;
	sub_82E95F20(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ea0480
	ctx.lr = 0x82EA5C38;
	sub_82EA0480(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea5c5c
	if (cr6.eq) goto loc_82EA5C5C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e9e0c8
	ctx.lr = 0x82EA5C50;
	sub_82E9E0C8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1200
	ctx.r1.s64 = ctx.r1.s64 + 1200;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82EA5C5C:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea5c80
	if (cr6.eq) goto loc_82EA5C80;
	// addi r4,r1,624
	ctx.r4.s64 = ctx.r1.s64 + 624;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e9e0c8
	ctx.lr = 0x82EA5C74;
	sub_82E9E0C8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1200
	ctx.r1.s64 = ctx.r1.s64 + 1200;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82EA5C80:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,1200
	ctx.r1.s64 = ctx.r1.s64 + 1200;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA5C8C"))) PPC_WEAK_FUNC(sub_82EA5C8C);
PPC_FUNC_IMPL(__imp__sub_82EA5C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA5C90"))) PPC_WEAK_FUNC(sub_82EA5C90);
PPC_FUNC_IMPL(__imp__sub_82EA5C90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82EA5C98;
	__savegprlr_28(ctx, base);
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82e9ee90
	ctx.lr = 0x82EA5CB4;
	sub_82E9EE90(ctx, base);
	// clrlwi r9,r28,24
	ctx.r9.u64 = ctx.r28.u32 & 0xFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r9,-6
	ctx.r9.s64 = ctx.r9.s64 + -6;
	// stb r11,512(r1)
	PPC_STORE_U8(ctx.r1.u32 + 512, ctx.r11.u8);
	// li r8,191
	ctx.r8.s64 = 191;
	// stb r10,513(r1)
	PPC_STORE_U8(ctx.r1.u32 + 513, ctx.r10.u8);
	// stb r11,532(r1)
	PPC_STORE_U8(ctx.r1.u32 + 532, ctx.r11.u8);
	// cmplwi cr6,r9,9
	cr6.compare<uint32_t>(ctx.r9.u32, 9, xer);
	// stb r10,533(r1)
	PPC_STORE_U8(ctx.r1.u32 + 533, ctx.r10.u8);
	// stb r11,590(r1)
	PPC_STORE_U8(ctx.r1.u32 + 590, ctx.r11.u8);
	// stb r8,591(r1)
	PPC_STORE_U8(ctx.r1.u32 + 591, ctx.r8.u8);
	// stb r11,592(r1)
	PPC_STORE_U8(ctx.r1.u32 + 592, ctx.r11.u8);
	// stb r10,593(r1)
	PPC_STORE_U8(ctx.r1.u32 + 593, ctx.r10.u8);
	// stb r11,464(r1)
	PPC_STORE_U8(ctx.r1.u32 + 464, ctx.r11.u8);
	// stw r11,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r11.u32);
	// stb r11,504(r1)
	PPC_STORE_U8(ctx.r1.u32 + 504, ctx.r11.u8);
	// stw r11,508(r1)
	PPC_STORE_U32(ctx.r1.u32 + 508, ctx.r11.u32);
	// bgt cr6,0x82ea5dc0
	if (cr6.gt) goto loc_82EA5DC0;
	// lis r12,-32022
	ctx.r12.s64 = -2098593792;
	// rlwinm r0,r9,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,23832
	ctx.r12.s64 = ctx.r12.s64 + 23832;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r9.u32) {
	case 0:
		goto loc_82EA5D40;
	case 1:
		goto loc_82EA5D88;
	case 2:
		goto loc_82EA5D88;
	case 3:
		goto loc_82EA5D40;
	case 4:
		goto loc_82EA5D88;
	case 5:
		goto loc_82EA5D88;
	case 6:
		goto loc_82EA5D88;
	case 7:
		goto loc_82EA5D6C;
	case 8:
		goto loc_82EA5D88;
	case 9:
		goto loc_82EA5D88;
	default:
		return;
	}
	// lwz r23,23872(r10)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23872);
	// lwz r23,23944(r10)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23944);
	// lwz r23,23944(r10)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23944);
	// lwz r23,23872(r10)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23872);
	// lwz r23,23944(r10)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23944);
	// lwz r23,23944(r10)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23944);
	// lwz r23,23944(r10)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23944);
	// lwz r23,23916(r10)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23916);
	// lwz r23,23944(r10)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23944);
	// lwz r23,23944(r10)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23944);
loc_82EA5D40:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// stb r11,464(r1)
	PPC_STORE_U8(ctx.r1.u32 + 464, ctx.r11.u8);
	// li r9,10
	ctx.r9.s64 = 10;
	// stb r11,504(r1)
	PPC_STORE_U8(ctx.r1.u32 + 504, ctx.r11.u8);
	// ori r10,r10,34464
	ctx.r10.u64 = ctx.r10.u64 | 34464;
	// li r8,128
	ctx.r8.s64 = 128;
	// stw r9,520(r1)
	PPC_STORE_U32(ctx.r1.u32 + 520, ctx.r9.u32);
	// stw r10,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r10.u32);
	// stw r10,508(r1)
	PPC_STORE_U32(ctx.r1.u32 + 508, ctx.r10.u32);
	// stb r8,591(r1)
	PPC_STORE_U8(ctx.r1.u32 + 591, ctx.r8.u8);
	// b 0x82ea5d78
	goto loc_82EA5D78;
loc_82EA5D6C:
	// li r9,160
	ctx.r9.s64 = 160;
	// stw r10,520(r1)
	PPC_STORE_U32(ctx.r1.u32 + 520, ctx.r10.u32);
	// stb r9,591(r1)
	PPC_STORE_U8(ctx.r1.u32 + 591, ctx.r9.u8);
loc_82EA5D78:
	// stb r11,590(r1)
	PPC_STORE_U8(ctx.r1.u32 + 590, ctx.r11.u8);
	// stb r11,516(r1)
	PPC_STORE_U8(ctx.r1.u32 + 516, ctx.r11.u8);
	// stb r11,513(r1)
	PPC_STORE_U8(ctx.r1.u32 + 513, ctx.r11.u8);
	// stb r11,512(r1)
	PPC_STORE_U8(ctx.r1.u32 + 512, ctx.r11.u8);
loc_82EA5D88:
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// blt cr6,0x82ea5d94
	if (cr6.lt) goto loc_82EA5D94;
	// bne cr6,0x82ea5dc0
	if (!cr6.eq) goto loc_82EA5DC0;
loc_82EA5D94:
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(ctx.r30.u32, 1, xer);
	// blt cr6,0x82ea5da8
	if (cr6.lt) goto loc_82EA5DA8;
	// beq cr6,0x82ea5da8
	if (cr6.eq) goto loc_82EA5DA8;
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(ctx.r30.u32, 3, xer);
	// bge cr6,0x82ea5dc0
	if (!cr6.lt) goto loc_82EA5DC0;
loc_82EA5DA8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e9e0c8
	ctx.lr = 0x82EA5DB4;
	sub_82E9E0C8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82EA5DC0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA5DCC"))) PPC_WEAK_FUNC(sub_82EA5DCC);
PPC_FUNC_IMPL(__imp__sub_82EA5DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA5DD0"))) PPC_WEAK_FUNC(sub_82EA5DD0);
PPC_FUNC_IMPL(__imp__sub_82EA5DD0) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// b 0x82ea5be8
	sub_82EA5BE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA5DE0"))) PPC_WEAK_FUNC(sub_82EA5DE0);
PPC_FUNC_IMPL(__imp__sub_82EA5DE0) {
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
	// lwz r4,180(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82ea5e10
	if (cr6.eq) goto loc_82EA5E10;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82EA5E10;
	sub_825952B8(ctx, base);
loc_82EA5E10:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// stw r11,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82EA5E34"))) PPC_WEAK_FUNC(sub_82EA5E34);
PPC_FUNC_IMPL(__imp__sub_82EA5E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA5E38"))) PPC_WEAK_FUNC(sub_82EA5E38);
PPC_FUNC_IMPL(__imp__sub_82EA5E38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82EA5E40;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r5,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r5.s64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// srawi. r24,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r24.s64 = ctx.r11.s32 >> 2;
	cr0.compare<int32_t>(ctx.r24.s32, 0, xer);
	// beq 0x82ea6028
	if (cr0.eq) goto loc_82EA6028;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,16383
	ctx.r9.s64 = 1073676288;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// ori r8,r9,65535
	ctx.r8.u64 = ctx.r9.u64 | 65535;
	// subf r7,r11,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r9,r7,2
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 2;
	// subf r6,r9,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmplw cr6,r6,r24
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r24.u32, xer);
	// bge cr6,0x82ea5e90
	if (!cr6.lt) goto loc_82EA5E90;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x82EA5E90;
	sub_831CC150(ctx, base);
loc_82EA5E90:
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// add r9,r9,r24
	ctx.r9.u64 = ctx.r9.u64 + ctx.r24.u64;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// srawi r11,r6,2
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 2;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82ea5fc4
	if (!cr6.lt) goto loc_82EA5FC4;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// subf r8,r10,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r10.s64;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// bge cr6,0x82ea5ec0
	if (!cr6.lt) goto loc_82EA5EC0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82ea5ec4
	goto loc_82EA5EC4;
loc_82EA5EC0:
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82EA5EC4:
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82ea5ed0
	if (!cr6.lt) goto loc_82EA5ED0;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82EA5ED0:
	// li r25,2
	ctx.r25.s64 = 2;
	// rlwinm r26,r11,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82EA5EEC;
	sub_82595718(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplw cr6,r10,r27
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, xer);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// beq cr6,0x82ea5f20
	if (cr6.eq) goto loc_82EA5F20;
loc_82EA5F00:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea5f10
	if (cr6.eq) goto loc_82EA5F10;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_82EA5F10:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r27
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, xer);
	// bne cr6,0x82ea5f00
	if (!cr6.eq) goto loc_82EA5F00;
loc_82EA5F20:
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, xer);
	// beq cr6,0x82ea5f4c
	if (cr6.eq) goto loc_82EA5F4C;
	// subf r10,r11,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r11.s64;
loc_82EA5F2C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea5f3c
	if (cr6.eq) goto loc_82EA5F3C;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_82EA5F3C:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r9,r28
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r28.u32, xer);
	// bne cr6,0x82ea5f2c
	if (!cr6.eq) goto loc_82EA5F2C;
loc_82EA5F4C:
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r27,r9
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r9.u32, xer);
	// beq cr6,0x82ea5f7c
	if (cr6.eq) goto loc_82EA5F7C;
	// subf r10,r11,r27
	ctx.r10.s64 = ctx.r27.s64 - ctx.r11.s64;
loc_82EA5F5C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea5f6c
	if (cr6.eq) goto loc_82EA5F6C;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
loc_82EA5F6C:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x82ea5f5c
	if (!cr6.eq) goto loc_82EA5F5C;
loc_82EA5F7C:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// srawi r11,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 2;
	// add r31,r11,r24
	ctx.r31.u64 = ctx.r11.u64 + ctx.r24.u64;
	// beq cr6,0x82ea5fa4
	if (cr6.eq) goto loc_82EA5FA4;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x82EA5FA4;
	sub_825952B8(ctx, base);
loc_82EA5FA4:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// add r10,r26,r29
	ctx.r10.u64 = ctx.r26.u64 + ctx.r29.u64;
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82EA5FC4:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, xer);
	// beq cr6,0x82ea5ff0
	if (cr6.eq) goto loc_82EA5FF0;
loc_82EA5FD0:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ea5fe0
	if (cr6.eq) goto loc_82EA5FE0;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_82EA5FE0:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// bne cr6,0x82ea5fd0
	if (!cr6.eq) goto loc_82EA5FD0;
loc_82EA5FF0:
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r31,r24,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r31,r4
	ctx.r5.u64 = ctx.r31.u64 + ctx.r4.u64;
	// cmplw cr6,r27,r4
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r4.u32, xer);
	// beq cr6,0x82ea601c
	if (cr6.eq) goto loc_82EA601C;
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// beq cr6,0x82ea601c
	if (cr6.eq) goto loc_82EA601C;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d63600
	ctx.lr = 0x82EA601C;
	sub_82D63600(ctx, base);
loc_82EA601C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_82EA6028:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA6030"))) PPC_WEAK_FUNC(sub_82EA6030);
PPC_FUNC_IMPL(__imp__sub_82EA6030) {
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
	// lbz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r3,176
	ctx.r11.s64 = ctx.r3.s64 + 176;
	// addi r10,r4,176
	ctx.r10.s64 = ctx.r4.s64 + 176;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stb r9,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r9.u8);
	// addi r4,r10,4
	ctx.r4.s64 = ctx.r10.s64 + 4;
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// lbz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// stb r7,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r7.u8);
	// lwz r6,12(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r6,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r6.u32);
	// lbz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// stb r5,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r5.u8);
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
	// lbz r8,32(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 32);
	// stb r8,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r8.u8);
	// ld r7,40(r30)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r30.u32 + 40);
	// std r7,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r7.u64);
	// lbz r6,48(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 48);
	// stb r6,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r6.u8);
	// lwz r5,52(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// stw r5,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r5.u32);
	// lbz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 56);
	// stb r11,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r11.u8);
	// ld r10,64(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 64);
	// std r10,64(r31)
	PPC_STORE_U64(ctx.r31.u32 + 64, ctx.r10.u64);
	// lbz r9,72(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 72);
	// stb r9,72(r31)
	PPC_STORE_U8(ctx.r31.u32 + 72, ctx.r9.u8);
	// lwz r8,76(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// stw r8,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r8.u32);
	// lbz r7,80(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 80);
	// stb r7,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r7.u8);
	// lwz r6,84(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// stw r6,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r6.u32);
	// lbz r5,88(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 88);
	// stb r5,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r5.u8);
	// ld r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 96);
	// std r11,96(r31)
	PPC_STORE_U64(ctx.r31.u32 + 96, ctx.r11.u64);
	// lbz r10,104(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 104);
	// stb r10,104(r31)
	PPC_STORE_U8(ctx.r31.u32 + 104, ctx.r10.u8);
	// lwz r9,108(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// stw r9,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r9.u32);
	// lbz r8,112(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 112);
	// stb r8,112(r31)
	PPC_STORE_U8(ctx.r31.u32 + 112, ctx.r8.u8);
	// lwz r7,116(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// stw r7,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r7.u32);
	// lbz r6,120(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 120);
	// stb r6,120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 120, ctx.r6.u8);
	// lwz r5,124(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// stw r5,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r5.u32);
	// lbz r11,128(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 128);
	// stb r11,128(r31)
	PPC_STORE_U8(ctx.r31.u32 + 128, ctx.r11.u8);
	// ld r10,136(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 136);
	// std r10,136(r31)
	PPC_STORE_U64(ctx.r31.u32 + 136, ctx.r10.u64);
	// lbz r9,144(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 144);
	// stb r9,144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 144, ctx.r9.u8);
	// lwz r8,148(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// stw r8,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r8.u32);
	// lbz r7,152(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 152);
	// stb r7,152(r31)
	PPC_STORE_U8(ctx.r31.u32 + 152, ctx.r7.u8);
	// lwz r6,156(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// stw r6,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r6.u32);
	// lbz r5,160(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 160);
	// stb r5,160(r31)
	PPC_STORE_U8(ctx.r31.u32 + 160, ctx.r5.u8);
	// lwz r11,164(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
	// lbz r10,168(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 168);
	// stb r10,168(r31)
	PPC_STORE_U8(ctx.r31.u32 + 168, ctx.r10.u8);
	// lwz r9,172(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// stw r9,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r9.u32);
	// lbz r8,176(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 176);
	// stb r8,176(r31)
	PPC_STORE_U8(ctx.r31.u32 + 176, ctx.r8.u8);
	// bl 0x828eeb48
	ctx.lr = 0x82EA6188;
	sub_828EEB48(ctx, base);
	// lbz r7,196(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 196);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r7,196(r31)
	PPC_STORE_U8(ctx.r31.u32 + 196, ctx.r7.u8);
	// lwz r6,200(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 200);
	// stw r6,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r6.u32);
	// lbz r5,204(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 204);
	// stb r5,204(r31)
	PPC_STORE_U8(ctx.r31.u32 + 204, ctx.r5.u8);
	// lwz r4,208(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// stw r4,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r4.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA61C4"))) PPC_WEAK_FUNC(sub_82EA61C4);
PPC_FUNC_IMPL(__imp__sub_82EA61C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA61C8"))) PPC_WEAK_FUNC(sub_82EA61C8);
PPC_FUNC_IMPL(__imp__sub_82EA61C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82EA61D0;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// bl 0x825359d8
	ctx.lr = 0x82EA61F4;
	sub_825359D8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e8c3a8
	ctx.lr = 0x82EA6204;
	sub_82E8C3A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea6234
	if (!cr6.eq) goto loc_82EA6234;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82ea6220
	if (cr6.eq) goto loc_82EA6220;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
loc_82EA6220:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535aa0
	ctx.lr = 0x82EA6228;
	sub_82535AA0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82EA6234:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82ea6244
	if (cr6.eq) goto loc_82EA6244;
	// stb r29,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r29.u8);
loc_82EA6244:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// bl 0x825355c0
	ctx.lr = 0x82EA6258;
	sub_825355C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82ad5e38
	ctx.lr = 0x82EA6264;
	sub_82AD5E38(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// bl 0x825355c0
	ctx.lr = 0x82EA6270;
	sub_825355C0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ea6300
	if (cr6.eq) goto loc_82EA6300;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r27,-1
	ctx.r27.s64 = -1;
	// clrldi r28,r11,32
	ctx.r28.u64 = ctx.r11.u64 & 0xFFFFFFFF;
loc_82EA6284:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// bl 0x82536bb8
	ctx.lr = 0x82EA6294;
	sub_82536BB8(ctx, base);
	// bl 0x825349d0
	ctx.lr = 0x82EA6298;
	sub_825349D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea62c0
	if (cr6.eq) goto loc_82EA62C0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82536bb8
	ctx.lr = 0x82EA62B0;
	sub_82536BB8(ctx, base);
	// bl 0x82534850
	ctx.lr = 0x82EA62B4;
	sub_82534850(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82ea62c4
	goto loc_82EA62C4;
loc_82EA62C0:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82EA62C4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea62ec
	if (cr6.eq) goto loc_82EA62EC;
	// cmpld cr6,r31,r28
	cr6.compare<uint64_t>(ctx.r31.u64, ctx.r28.u64, xer);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// bgt cr6,0x82ea62e0
	if (cr6.gt) goto loc_82EA62E0;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
loc_82EA62E0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x835977d8
	ctx.lr = 0x82EA62EC;
	sub_835977D8(ctx, base);
loc_82EA62EC:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bl 0x825355c0
	ctx.lr = 0x82EA62F8;
	sub_825355C0(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, xer);
	// blt cr6,0x82ea6284
	if (cr6.lt) goto loc_82EA6284;
loc_82EA6300:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82a8e3a8
	ctx.lr = 0x82EA630C;
	sub_82A8E3A8(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mtctr r25
	ctr.u64 = ctx.r25.u64;
	// bctrl 
	ctx.lr = 0x82EA631C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82ea633c
	if (cr6.eq) goto loc_82EA633C;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82EA633C;
	sub_825952B8(ctx, base);
loc_82EA633C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535aa0
	ctx.lr = 0x82EA6344;
	sub_82535AA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA6350"))) PPC_WEAK_FUNC(sub_82EA6350);
PPC_FUNC_IMPL(__imp__sub_82EA6350) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82EA6358;
	__savegprlr_25(ctx, base);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// bl 0x825359d8
	ctx.lr = 0x82EA637C;
	sub_825359D8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e8c3a8
	ctx.lr = 0x82EA638C;
	sub_82E8C3A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea63bc
	if (!cr6.eq) goto loc_82EA63BC;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82ea63a8
	if (cr6.eq) goto loc_82EA63A8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
loc_82EA63A8:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535aa0
	ctx.lr = 0x82EA63B0;
	sub_82535AA0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82EA63BC:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82ea63cc
	if (cr6.eq) goto loc_82EA63CC;
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
loc_82EA63CC:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// bl 0x825355c0
	ctx.lr = 0x82EA63E0;
	sub_825355C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x833ea8a8
	ctx.lr = 0x82EA63EC;
	sub_833EA8A8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// bl 0x825355c0
	ctx.lr = 0x82EA63F8;
	sub_825355C0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ea6590
	if (cr6.eq) goto loc_82EA6590;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r28,1
	ctx.r28.s64 = 1;
	// li r29,15
	ctx.r29.s64 = 15;
	// addi r27,r11,15320
	ctx.r27.s64 = ctx.r11.s64 + 15320;
loc_82EA6410:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82536bb8
	ctx.lr = 0x82EA6420;
	sub_82536BB8(ctx, base);
	// bl 0x825349d0
	ctx.lr = 0x82EA6424;
	sub_825349D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea644c
	if (cr6.eq) goto loc_82EA644C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82536bb8
	ctx.lr = 0x82EA643C;
	sub_82536BB8(ctx, base);
	// bl 0x825347e8
	ctx.lr = 0x82EA6440;
	sub_825347E8(ctx, base);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stb r3,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r3.u8);
	// b 0x82ea6450
	goto loc_82EA6450;
loc_82EA644C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82EA6450:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea646c
	if (cr6.eq) goto loc_82EA646C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x833eab80
	ctx.lr = 0x82EA6468;
	sub_833EAB80(ctx, base);
	// b 0x82ea657c
	goto loc_82EA657C;
loc_82EA646C:
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// bl 0x82536bb8
	ctx.lr = 0x82EA6484;
	sub_82536BB8(ctx, base);
	// bl 0x82534a18
	ctx.lr = 0x82EA6488;
	sub_82534A18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea64e0
	if (cr6.eq) goto loc_82EA64E0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82536bb8
	ctx.lr = 0x82EA64A0;
	sub_82536BB8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82535b70
	ctx.lr = 0x82EA64AC;
	sub_82535B70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8252ae98
	ctx.lr = 0x82EA64B8;
	sub_8252AE98(ctx, base);
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ea64cc
	if (cr6.lt) goto loc_82EA64CC;
	// lwz r3,176(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x8386d088
	ctx.lr = 0x82EA64CC;
	sub_8386D088(ctx, base);
loc_82EA64CC:
	// stw r29,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r29.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
	// b 0x82ea64e4
	goto loc_82EA64E4;
loc_82EA64E0:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82EA64E4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea65e0
	if (cr6.eq) goto loc_82EA65E0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82a8c428
	ctx.lr = 0x82EA6500;
	sub_82A8C428(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82d74280
	ctx.lr = 0x82EA650C;
	sub_82D74280(ctx, base);
	// lwz r10,224(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,164
	ctx.r4.s64 = ctx.r1.s64 + 164;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwimi r9,r28,11,20,22
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r28.u32, 11) & 0xE00) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF1FF);
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// bl 0x82e79de0
	ctx.lr = 0x82EA6534;
	sub_82E79DE0(ctx, base);
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// bl 0x833eab80
	ctx.lr = 0x82EA6548;
	sub_833EAB80(ctx, base);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82a79160
	ctx.lr = 0x82EA6550;
	sub_82A79160(ctx, base);
	// stw r27,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r27.u32);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x831ccf00
	ctx.lr = 0x82EA655C;
	sub_831CCF00(ctx, base);
	// lwz r6,148(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r6,16
	cr6.compare<uint32_t>(ctx.r6.u32, 16, xer);
	// blt cr6,0x82ea6570
	if (cr6.lt) goto loc_82EA6570;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x8386d088
	ctx.lr = 0x82EA6570;
	sub_8386D088(ctx, base);
loc_82EA6570:
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
loc_82EA657C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bl 0x825355c0
	ctx.lr = 0x82EA6588;
	sub_825355C0(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, xer);
	// blt cr6,0x82ea6410
	if (cr6.lt) goto loc_82EA6410;
loc_82EA6590:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82abc660
	ctx.lr = 0x82EA659C;
	sub_82ABC660(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mtctr r25
	ctr.u64 = ctx.r25.u64;
	// bctrl 
	ctx.lr = 0x82EA65AC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82ea65cc
	if (cr6.eq) goto loc_82EA65CC;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82EA65CC;
	sub_825952B8(ctx, base);
loc_82EA65CC:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535aa0
	ctx.lr = 0x82EA65D4;
	sub_82535AA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82EA65E0:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ea65f4
	if (cr6.lt) goto loc_82EA65F4;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x8386d088
	ctx.lr = 0x82EA65F4;
	sub_8386D088(ctx, base);
loc_82EA65F4:
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// beq cr6,0x82ea661c
	if (cr6.eq) goto loc_82EA661C;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82EA661C;
	sub_825952B8(ctx, base);
loc_82EA661C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535aa0
	ctx.lr = 0x82EA6624;
	sub_82535AA0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA6630"))) PPC_WEAK_FUNC(sub_82EA6630);
PPC_FUNC_IMPL(__imp__sub_82EA6630) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82a8c428
	ctx.lr = 0x82EA665C;
	sub_82A8C428(ctx, base);
	// clrlwi r4,r30,24
	ctx.r4.u64 = ctx.r30.u32 & 0xFF;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82474170
	ctx.lr = 0x82EA6668;
	sub_82474170(ctx, base);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a79bf8
	ctx.lr = 0x82EA6674;
	sub_82A79BF8(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82ea6688
	if (!cr6.lt) goto loc_82EA6688;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_82EA6688:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82EA668C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ea668c
	if (!cr6.eq) goto loc_82EA668C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82EA66B0;
	sub_8259CC28(ctx, base);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82ea66c4
	if (cr6.lt) goto loc_82EA66C4;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82416268
	ctx.lr = 0x82EA66C4;
	sub_82416268(ctx, base);
loc_82EA66C4:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// bne cr6,0x82ea6708
	if (!cr6.eq) goto loc_82EA6708;
	// bl 0x82a79160
	ctx.lr = 0x82EA66EC;
	sub_82A79160(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r10,r11,15320
	ctx.r10.s64 = ctx.r11.s64 + 15320;
	// stw r10,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r10.u32);
	// bl 0x831ccf00
	ctx.lr = 0x82EA6700;
	sub_831CCF00(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ea6724
	goto loc_82EA6724;
loc_82EA6708:
	// bl 0x82a79160
	ctx.lr = 0x82EA670C;
	sub_82A79160(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r10,r11,15320
	ctx.r10.s64 = ctx.r11.s64 + 15320;
	// stw r10,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r10.u32);
	// bl 0x831ccf00
	ctx.lr = 0x82EA6720;
	sub_831CCF00(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82EA6724:
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

__attribute__((alias("__imp__sub_82EA673C"))) PPC_WEAK_FUNC(sub_82EA673C);
PPC_FUNC_IMPL(__imp__sub_82EA673C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA6740"))) PPC_WEAK_FUNC(sub_82EA6740);
PPC_FUNC_IMPL(__imp__sub_82EA6740) {
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
	// lbz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r4,52
	ctx.r11.s64 = ctx.r4.s64 + 52;
	// addi r10,r3,52
	ctx.r10.s64 = ctx.r3.s64 + 52;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// stb r9,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r9.u8);
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lbz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// stb r8,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r8.u8);
	// ld r7,16(r30)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// std r7,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r7.u64);
	// lbz r6,24(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 24);
	// stb r6,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r6.u8);
	// ld r5,32(r30)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r30.u32 + 32);
	// std r5,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r5.u64);
	// lbz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 40);
	// stb r11,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r11.u8);
	// lbz r10,41(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 41);
	// stb r10,41(r31)
	PPC_STORE_U8(ctx.r31.u32 + 41, ctx.r10.u8);
	// lbz r9,44(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 44);
	// stb r9,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r9.u8);
	// lwz r8,48(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// stw r8,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r8.u32);
	// lbz r7,52(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 52);
	// stb r7,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r7.u8);
	// bl 0x82a8e3a8
	ctx.lr = 0x82EA67C8;
	sub_82A8E3A8(ctx, base);
	// lbz r6,72(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 72);
	// stb r6,72(r31)
	PPC_STORE_U8(ctx.r31.u32 + 72, ctx.r6.u8);
	// lwz r5,76(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// stw r5,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r5.u32);
	// lbz r4,80(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 80);
	// stb r4,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r4.u8);
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// lbz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 88);
	// stb r11,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r11.u8);
	// lwz r10,92(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// stw r10,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r10.u32);
	// lbz r9,96(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 96);
	// stb r9,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r9.u8);
	// lwz r8,100(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// stw r8,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r8.u32);
	// lbz r7,104(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 104);
	// stb r7,104(r31)
	PPC_STORE_U8(ctx.r31.u32 + 104, ctx.r7.u8);
	// lwz r6,108(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// stw r6,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r6.u32);
	// lbz r5,112(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 112);
	// stb r5,112(r31)
	PPC_STORE_U8(ctx.r31.u32 + 112, ctx.r5.u8);
	// lfs f13,116(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,116(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// lbz r4,120(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 120);
	// stb r4,120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 120, ctx.r4.u8);
	// lwz r3,124(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// stw r3,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r11,128(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 128);
	// stb r11,128(r31)
	PPC_STORE_U8(ctx.r31.u32 + 128, ctx.r11.u8);
	// lbz r10,129(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 129);
	// stb r10,129(r31)
	PPC_STORE_U8(ctx.r31.u32 + 129, ctx.r10.u8);
	// lbz r9,132(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 132);
	// stb r9,132(r31)
	PPC_STORE_U8(ctx.r31.u32 + 132, ctx.r9.u8);
	// lwz r8,136(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// stw r8,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA6874"))) PPC_WEAK_FUNC(sub_82EA6874);
PPC_FUNC_IMPL(__imp__sub_82EA6874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA6878"))) PPC_WEAK_FUNC(sub_82EA6878);
PPC_FUNC_IMPL(__imp__sub_82EA6878) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82EA6880;
	__savegprlr_25(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r31,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r31.u32);
	// addi r27,r3,8
	ctx.r27.s64 = ctx.r3.s64 + 8;
	// stw r10,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r10.u32);
	// li r25,-1
	ctx.r25.s64 = -1;
	// stb r31,168(r1)
	PPC_STORE_U8(ctx.r1.u32 + 168, ctx.r31.u8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// std r11,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r11.u64);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x8259cb28
	ctx.lr = 0x82EA68C4;
	sub_8259CB28(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r29,r11,12496
	ctx.r29.s64 = ctx.r11.s64 + 12496;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// bl 0x825359d8
	ctx.lr = 0x82EA68E0;
	sub_825359D8(ctx, base);
	// stb r31,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r31.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82535130
	ctx.lr = 0x82EA68EC;
	sub_82535130(ctx, base);
	// stb r31,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r31.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82535130
	ctx.lr = 0x82EA68F8;
	sub_82535130(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825369e8
	ctx.lr = 0x82EA6904;
	sub_825369E8(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r9,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r9.u8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825359d8
	ctx.lr = 0x82EA6918;
	sub_825359D8(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r28,r11,-30500
	ctx.r28.s64 = ctx.r11.s64 + -30500;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82e8c3a8
	ctx.lr = 0x82EA6930;
	sub_82E8C3A8(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82ea697c
	if (!cr6.eq) goto loc_82EA697C;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82535aa0
	ctx.lr = 0x82EA6944;
	sub_82535AA0(ctx, base);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82535aa0
	ctx.lr = 0x82EA6950;
	sub_82535AA0(ctx, base);
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ea6970
	if (cr6.lt) goto loc_82EA6970;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,168(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82EA6970;
	sub_825952B8(ctx, base);
loc_82EA6970:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82EA697C:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82e9e058
	ctx.lr = 0x82EA6988;
	sub_82E9E058(ctx, base);
	// lbz r10,232(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 232);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ea69c8
	if (!cr6.eq) goto loc_82EA69C8;
loc_82EA6994:
	// stw r29,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r29.u32);
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x82535aa0
	ctx.lr = 0x82EA69A0;
	sub_82535AA0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82535aa0
	ctx.lr = 0x82EA69A8;
	sub_82535AA0(ctx, base);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82535aa0
	ctx.lr = 0x82EA69B4;
	sub_82535AA0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x83876458
	ctx.lr = 0x82EA69BC;
	sub_83876458(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82EA69C8:
	// std r31,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r31.u64);
	// addi r5,r28,788
	ctx.r5.s64 = ctx.r28.s64 + 788;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA69DC;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea69f4
	if (cr6.eq) goto loc_82EA69F4;
	// ld r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// li r31,1
	ctx.r31.s64 = 1;
	// std r11,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r11.u64);
loc_82EA69F4:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea6a04
	if (cr6.eq) goto loc_82EA6A04;
	// li r26,1
	ctx.r26.s64 = 1;
loc_82EA6A04:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea6994
	if (cr6.eq) goto loc_82EA6994;
	// ld r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// std r11,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r11.u64);
	// bl 0x8259cb28
	ctx.lr = 0x82EA6A2C;
	sub_8259CB28(ctx, base);
	// stw r29,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r29.u32);
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x82535aa0
	ctx.lr = 0x82EA6A38;
	sub_82535AA0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82535aa0
	ctx.lr = 0x82EA6A40;
	sub_82535AA0(ctx, base);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82535aa0
	ctx.lr = 0x82EA6A4C;
	sub_82535AA0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x83876458
	ctx.lr = 0x82EA6A54;
	sub_83876458(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA6A60"))) PPC_WEAK_FUNC(sub_82EA6A60);
PPC_FUNC_IMPL(__imp__sub_82EA6A60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82EA6A68;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82e6e978
	ctx.lr = 0x82EA6A78;
	sub_82E6E978(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ea6af8
	if (cr6.eq) goto loc_82EA6AF8;
	// lwz r31,24(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825359d8
	ctx.lr = 0x82EA6A90;
	sub_825359D8(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r30,r11,-30596
	ctx.r30.s64 = ctx.r11.s64 + -30596;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r5,r30,-96
	ctx.r5.s64 = ctx.r30.s64 + -96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8c3a8
	ctx.lr = 0x82EA6AAC;
	sub_82E8C3A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea6af0
	if (cr6.eq) goto loc_82EA6AF0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ea6878
	ctx.lr = 0x82EA6AC4;
	sub_82EA6878(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825359d8
	ctx.lr = 0x82EA6AD4;
	sub_825359D8(ctx, base);
	// cmplwi cr6,r29,1
	cr6.compare<uint32_t>(ctx.r29.u32, 1, xer);
	// blt cr6,0x82ea6b74
	if (cr6.lt) goto loc_82EA6B74;
	// beq cr6,0x82ea6b3c
	if (cr6.eq) goto loc_82EA6B3C;
	// cmplwi cr6,r29,3
	cr6.compare<uint32_t>(ctx.r29.u32, 3, xer);
	// blt cr6,0x82ea6b04
	if (cr6.lt) goto loc_82EA6B04;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535aa0
	ctx.lr = 0x82EA6AF0;
	sub_82535AA0(ctx, base);
loc_82EA6AF0:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535aa0
	ctx.lr = 0x82EA6AF8;
	sub_82535AA0(ctx, base);
loc_82EA6AF8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82EA6B04:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8c3a8
	ctx.lr = 0x82EA6B14;
	sub_82E8C3A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea6bac
	if (!cr6.eq) goto loc_82EA6BAC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535aa0
	ctx.lr = 0x82EA6B28;
	sub_82535AA0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535aa0
	ctx.lr = 0x82EA6B30;
	sub_82535AA0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82EA6B3C:
	// addi r5,r30,-40
	ctx.r5.s64 = ctx.r30.s64 + -40;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8c3a8
	ctx.lr = 0x82EA6B4C;
	sub_82E8C3A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea6bac
	if (!cr6.eq) goto loc_82EA6BAC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535aa0
	ctx.lr = 0x82EA6B60;
	sub_82535AA0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535aa0
	ctx.lr = 0x82EA6B68;
	sub_82535AA0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82EA6B74:
	// addi r5,r30,-80
	ctx.r5.s64 = ctx.r30.s64 + -80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8c3a8
	ctx.lr = 0x82EA6B84;
	sub_82E8C3A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea6bac
	if (!cr6.eq) goto loc_82EA6BAC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535aa0
	ctx.lr = 0x82EA6B98;
	sub_82535AA0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535aa0
	ctx.lr = 0x82EA6BA0;
	sub_82535AA0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82EA6BAC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ea6878
	ctx.lr = 0x82EA6BB8;
	sub_82EA6878(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// or r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 | ctx.r10.u64;
	// bl 0x82535aa0
	ctx.lr = 0x82EA6BCC;
	sub_82535AA0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535aa0
	ctx.lr = 0x82EA6BD4;
	sub_82535AA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA6BE0"))) PPC_WEAK_FUNC(sub_82EA6BE0);
PPC_FUNC_IMPL(__imp__sub_82EA6BE0) {
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
	// lbz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r3,176
	ctx.r11.s64 = ctx.r3.s64 + 176;
	// addi r10,r4,176
	ctx.r10.s64 = ctx.r4.s64 + 176;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stb r9,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r9.u8);
	// addi r4,r10,4
	ctx.r4.s64 = ctx.r10.s64 + 4;
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// lbz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// stb r7,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r7.u8);
	// lwz r6,12(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r6,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r6.u32);
	// lbz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// stb r5,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r5.u8);
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
	// lbz r8,32(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 32);
	// stb r8,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r8.u8);
	// ld r7,40(r30)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r30.u32 + 40);
	// std r7,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r7.u64);
	// lbz r6,48(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 48);
	// stb r6,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r6.u8);
	// lwz r5,52(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// stw r5,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r5.u32);
	// lbz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 56);
	// stb r11,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r11.u8);
	// ld r10,64(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 64);
	// std r10,64(r31)
	PPC_STORE_U64(ctx.r31.u32 + 64, ctx.r10.u64);
	// lbz r9,72(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 72);
	// stb r9,72(r31)
	PPC_STORE_U8(ctx.r31.u32 + 72, ctx.r9.u8);
	// lwz r8,76(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// stw r8,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r8.u32);
	// lbz r7,80(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 80);
	// stb r7,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r7.u8);
	// lwz r6,84(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// stw r6,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r6.u32);
	// lbz r5,88(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 88);
	// stb r5,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r5.u8);
	// ld r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 96);
	// std r11,96(r31)
	PPC_STORE_U64(ctx.r31.u32 + 96, ctx.r11.u64);
	// lbz r10,104(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 104);
	// stb r10,104(r31)
	PPC_STORE_U8(ctx.r31.u32 + 104, ctx.r10.u8);
	// lwz r9,108(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// stw r9,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r9.u32);
	// lbz r8,112(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 112);
	// stb r8,112(r31)
	PPC_STORE_U8(ctx.r31.u32 + 112, ctx.r8.u8);
	// lwz r7,116(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// stw r7,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r7.u32);
	// lbz r6,120(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 120);
	// stb r6,120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 120, ctx.r6.u8);
	// lwz r5,124(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// stw r5,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r5.u32);
	// lbz r11,128(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 128);
	// stb r11,128(r31)
	PPC_STORE_U8(ctx.r31.u32 + 128, ctx.r11.u8);
	// ld r10,136(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 136);
	// std r10,136(r31)
	PPC_STORE_U64(ctx.r31.u32 + 136, ctx.r10.u64);
	// lbz r9,144(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 144);
	// stb r9,144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 144, ctx.r9.u8);
	// lwz r8,148(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// stw r8,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r8.u32);
	// lbz r7,152(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 152);
	// stb r7,152(r31)
	PPC_STORE_U8(ctx.r31.u32 + 152, ctx.r7.u8);
	// lwz r6,156(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// stw r6,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r6.u32);
	// lbz r5,160(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 160);
	// stb r5,160(r31)
	PPC_STORE_U8(ctx.r31.u32 + 160, ctx.r5.u8);
	// lwz r11,164(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// stw r11,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
	// lbz r10,168(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 168);
	// stb r10,168(r31)
	PPC_STORE_U8(ctx.r31.u32 + 168, ctx.r10.u8);
	// lwz r9,172(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// stw r9,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r9.u32);
	// lbz r8,176(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 176);
	// stb r8,176(r31)
	PPC_STORE_U8(ctx.r31.u32 + 176, ctx.r8.u8);
	// bl 0x82abc660
	ctx.lr = 0x82EA6D38;
	sub_82ABC660(ctx, base);
	// lbz r7,196(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 196);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r7,196(r31)
	PPC_STORE_U8(ctx.r31.u32 + 196, ctx.r7.u8);
	// lwz r6,200(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 200);
	// stw r6,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r6.u32);
	// lbz r5,204(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 204);
	// stb r5,204(r31)
	PPC_STORE_U8(ctx.r31.u32 + 204, ctx.r5.u8);
	// lwz r4,208(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// stw r4,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r4.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA6D74"))) PPC_WEAK_FUNC(sub_82EA6D74);
PPC_FUNC_IMPL(__imp__sub_82EA6D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA6D78"))) PPC_WEAK_FUNC(sub_82EA6D78);
PPC_FUNC_IMPL(__imp__sub_82EA6D78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82EA6D80;
	__savegprlr_26(ctx, base);
	// stwu r1,-880(r1)
	ea = -880 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82e95f20
	ctx.lr = 0x82EA6D9C;
	sub_82E95F20(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r29,r11,12496
	ctx.r29.s64 = ctx.r11.s64 + 12496;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// bl 0x825359d8
	ctx.lr = 0x82EA6DB4;
	sub_825359D8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stb r31,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r31.u8);
	// bl 0x82535130
	ctx.lr = 0x82EA6DC4;
	sub_82535130(ctx, base);
	// stb r31,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r31.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82535130
	ctx.lr = 0x82EA6DD0;
	sub_82535130(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825369e8
	ctx.lr = 0x82EA6DDC;
	sub_825369E8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r11,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r11.u8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825359d8
	ctx.lr = 0x82EA6DF0;
	sub_825359D8(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r30,r11,-30428
	ctx.r30.s64 = ctx.r11.s64 + -30428;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r5,r30,-20
	ctx.r5.s64 = ctx.r30.s64 + -20;
	// bl 0x82e8c3a8
	ctx.lr = 0x82EA6E08;
	sub_82E8C3A8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ea6f5c
	if (cr6.eq) goto loc_82EA6F5C;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82e9e058
	ctx.lr = 0x82EA6E20;
	sub_82E9E058(ctx, base);
	// lbz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 152);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ea6f50
	if (cr6.eq) goto loc_82EA6F50;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// bl 0x825359d8
	ctx.lr = 0x82EA6E3C;
	sub_825359D8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82e8c3a8
	ctx.lr = 0x82EA6E4C;
	sub_82E8C3A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea6e8c
	if (cr6.eq) goto loc_82EA6E8C;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82e9e058
	ctx.lr = 0x82EA6E64;
	sub_82E9E058(ctx, base);
	// lbz r10,280(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 280);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ea6e80
	if (cr6.eq) goto loc_82EA6E80;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82ea05f8
	ctx.lr = 0x82EA6E7C;
	sub_82EA05F8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_82EA6E80:
	// stw r29,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r29.u32);
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// bl 0x82535aa0
	ctx.lr = 0x82EA6E8C;
	sub_82535AA0(ctx, base);
loc_82EA6E8C:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r11,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r11.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82ea6630
	ctx.lr = 0x82EA6EA8;
	sub_82EA6630(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ea6f40
	if (cr6.eq) goto loc_82EA6F40;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x825359d8
	ctx.lr = 0x82EA6EC0;
	sub_825359D8(ctx, base);
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82ea6ed4
	if (!cr6.lt) goto loc_82EA6ED4;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
loc_82EA6ED4:
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82e8c3a8
	ctx.lr = 0x82EA6EE0;
	sub_82E8C3A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea6f20
	if (cr6.eq) goto loc_82EA6F20;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82e9e058
	ctx.lr = 0x82EA6EF8;
	sub_82E9E058(ctx, base);
	// lbz r10,248(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 248);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ea6f14
	if (cr6.eq) goto loc_82EA6F14;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82ea05f8
	ctx.lr = 0x82EA6F10;
	sub_82EA05F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82EA6F14:
	// stw r29,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r29.u32);
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// bl 0x82535aa0
	ctx.lr = 0x82EA6F20;
	sub_82535AA0(ctx, base);
loc_82EA6F20:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea6f7c
	if (!cr6.eq) goto loc_82EA6F7C;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea6f7c
	if (!cr6.eq) goto loc_82EA6F7C;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82535aa0
	ctx.lr = 0x82EA6F40;
	sub_82535AA0(ctx, base);
loc_82EA6F40:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8387e8e0
	ctx.lr = 0x82EA6F48;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82535aa0
	ctx.lr = 0x82EA6F50;
	sub_82535AA0(ctx, base);
loc_82EA6F50:
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82535aa0
	ctx.lr = 0x82EA6F5C;
	sub_82535AA0(ctx, base);
loc_82EA6F5C:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82535aa0
	ctx.lr = 0x82EA6F64;
	sub_82535AA0(ctx, base);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82535aa0
	ctx.lr = 0x82EA6F70;
	sub_82535AA0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,880
	ctx.r1.s64 = ctx.r1.s64 + 880;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82EA6F7C:
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e9e0c8
	ctx.lr = 0x82EA6F88;
	sub_82E9E0C8(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82535aa0
	ctx.lr = 0x82EA6F90;
	sub_82535AA0(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8387e8e0
	ctx.lr = 0x82EA6F98;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82535aa0
	ctx.lr = 0x82EA6FA0;
	sub_82535AA0(ctx, base);
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82535aa0
	ctx.lr = 0x82EA6FAC;
	sub_82535AA0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82535aa0
	ctx.lr = 0x82EA6FB4;
	sub_82535AA0(ctx, base);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82535aa0
	ctx.lr = 0x82EA6FC0;
	sub_82535AA0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,880
	ctx.r1.s64 = ctx.r1.s64 + 880;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA6FCC"))) PPC_WEAK_FUNC(sub_82EA6FCC);
PPC_FUNC_IMPL(__imp__sub_82EA6FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA6FD0"))) PPC_WEAK_FUNC(sub_82EA6FD0);
PPC_FUNC_IMPL(__imp__sub_82EA6FD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82EA6FD8;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x82e6e978
	ctx.lr = 0x82EA6FF4;
	sub_82E6E978(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ea70bc
	if (cr6.eq) goto loc_82EA70BC;
	// lwz r31,24(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r28,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r28.u8);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825359d8
	ctx.lr = 0x82EA7010;
	sub_825359D8(ctx, base);
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825359d8
	ctx.lr = 0x82EA7020;
	sub_825359D8(ctx, base);
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(ctx.r30.u32, 1, xer);
	// blt cr6,0x82ea7078
	if (cr6.lt) goto loc_82EA7078;
	// bne cr6,0x82ea70ac
	if (!cr6.eq) goto loc_82EA70AC;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r30,r11,-30564
	ctx.r30.s64 = ctx.r11.s64 + -30564;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r5,r30,-120
	ctx.r5.s64 = ctx.r30.s64 + -120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8c3a8
	ctx.lr = 0x82EA7048;
	sub_82E8C3A8(ctx, base);
	// stb r3,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r3.u8);
	// cmplwi cr6,r29,1
	cr6.compare<uint32_t>(ctx.r29.u32, 1, xer);
	// blt cr6,0x82ea7070
	if (cr6.lt) goto loc_82EA7070;
	// beq cr6,0x82ea7068
	if (cr6.eq) goto loc_82EA7068;
	// cmplwi cr6,r29,3
	cr6.compare<uint32_t>(ctx.r29.u32, 3, xer);
	// bge cr6,0x82ea70ac
	if (!cr6.lt) goto loc_82EA70AC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// b 0x82ea70dc
	goto loc_82EA70DC;
loc_82EA7068:
	// addi r5,r30,-52
	ctx.r5.s64 = ctx.r30.s64 + -52;
	// b 0x82ea70dc
	goto loc_82EA70DC;
loc_82EA7070:
	// addi r5,r30,-92
	ctx.r5.s64 = ctx.r30.s64 + -92;
	// b 0x82ea70dc
	goto loc_82EA70DC;
loc_82EA7078:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r30,r11,-30564
	ctx.r30.s64 = ctx.r11.s64 + -30564;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r5,r30,-128
	ctx.r5.s64 = ctx.r30.s64 + -128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8c3a8
	ctx.lr = 0x82EA7094;
	sub_82E8C3A8(ctx, base);
	// stb r3,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r3.u8);
	// cmplwi cr6,r29,1
	cr6.compare<uint32_t>(ctx.r29.u32, 1, xer);
	// blt cr6,0x82ea70d8
	if (cr6.lt) goto loc_82EA70D8;
	// beq cr6,0x82ea70d0
	if (cr6.eq) goto loc_82EA70D0;
	// cmplwi cr6,r29,3
	cr6.compare<uint32_t>(ctx.r29.u32, 3, xer);
	// blt cr6,0x82ea70c8
	if (cr6.lt) goto loc_82EA70C8;
loc_82EA70AC:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82535aa0
	ctx.lr = 0x82EA70B4;
	sub_82535AA0(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82535aa0
	ctx.lr = 0x82EA70BC;
	sub_82535AA0(ctx, base);
loc_82EA70BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82EA70C8:
	// addi r5,r30,-32
	ctx.r5.s64 = ctx.r30.s64 + -32;
	// b 0x82ea70dc
	goto loc_82EA70DC;
loc_82EA70D0:
	// addi r5,r30,-72
	ctx.r5.s64 = ctx.r30.s64 + -72;
	// b 0x82ea70dc
	goto loc_82EA70DC;
loc_82EA70D8:
	// addi r5,r30,-112
	ctx.r5.s64 = ctx.r30.s64 + -112;
loc_82EA70DC:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8c3a8
	ctx.lr = 0x82EA70E8;
	sub_82E8C3A8(ctx, base);
	// lbz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// stb r3,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r3.u8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ea710c
	if (cr6.eq) goto loc_82EA710C;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ea6d78
	ctx.lr = 0x82EA7108;
	sub_82EA6D78(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_82EA710C:
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ea7134
	if (cr6.eq) goto loc_82EA7134;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ea6d78
	ctx.lr = 0x82EA7128;
	sub_82EA6D78(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// or r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 | ctx.r10.u64;
loc_82EA7134:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82535aa0
	ctx.lr = 0x82EA713C;
	sub_82535AA0(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82535aa0
	ctx.lr = 0x82EA7144;
	sub_82535AA0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA7150"))) PPC_WEAK_FUNC(sub_82EA7150);
PPC_FUNC_IMPL(__imp__sub_82EA7150) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82EA7158;
	__savegprlr_27(ctx, base);
	// stwu r1,-1216(r1)
	ea = -1216 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x82e9ee90
	ctx.lr = 0x82EA7174;
	sub_82E9EE90(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ea5c90
	ctx.lr = 0x82EA7188;
	sub_82EA5C90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bl 0x82e95f20
	ctx.lr = 0x82EA7198;
	sub_82E95F20(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ea6fd0
	ctx.lr = 0x82EA71AC;
	sub_82EA6FD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea71d0
	if (cr6.eq) goto loc_82EA71D0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e9e0c8
	ctx.lr = 0x82EA71C4;
	sub_82E9E0C8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1216
	ctx.r1.s64 = ctx.r1.s64 + 1216;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82EA71D0:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea71f4
	if (cr6.eq) goto loc_82EA71F4;
	// addi r4,r1,624
	ctx.r4.s64 = ctx.r1.s64 + 624;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e9e0c8
	ctx.lr = 0x82EA71E8;
	sub_82E9E0C8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1216
	ctx.r1.s64 = ctx.r1.s64 + 1216;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82EA71F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,1216
	ctx.r1.s64 = ctx.r1.s64 + 1216;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA7200"))) PPC_WEAK_FUNC(sub_82EA7200);
PPC_FUNC_IMPL(__imp__sub_82EA7200) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// b 0x82ea7150
	sub_82EA7150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA7214"))) PPC_WEAK_FUNC(sub_82EA7214);
PPC_FUNC_IMPL(__imp__sub_82EA7214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA7218"))) PPC_WEAK_FUNC(sub_82EA7218);
PPC_FUNC_IMPL(__imp__sub_82EA7218) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r3,176
	ctx.r11.s64 = ctx.r3.s64 + 176;
	// stb r30,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r30.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stb r30,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r30.u8);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stb r30,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r30.u8);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stb r30,24(r31)
	PPC_STORE_U8(ctx.r31.u32 + 24, ctx.r30.u8);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stb r30,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r30.u8);
	// std r30,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r30.u64);
	// stb r30,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r30.u8);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stb r30,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r30.u8);
	// std r30,64(r31)
	PPC_STORE_U64(ctx.r31.u32 + 64, ctx.r30.u64);
	// stb r30,72(r31)
	PPC_STORE_U8(ctx.r31.u32 + 72, ctx.r30.u8);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// stb r30,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r30.u8);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stb r30,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r30.u8);
	// std r30,96(r31)
	PPC_STORE_U64(ctx.r31.u32 + 96, ctx.r30.u64);
	// stb r30,104(r31)
	PPC_STORE_U8(ctx.r31.u32 + 104, ctx.r30.u8);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// stb r30,112(r31)
	PPC_STORE_U8(ctx.r31.u32 + 112, ctx.r30.u8);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// stb r30,120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 120, ctx.r30.u8);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// stb r30,128(r31)
	PPC_STORE_U8(ctx.r31.u32 + 128, ctx.r30.u8);
	// std r30,136(r31)
	PPC_STORE_U64(ctx.r31.u32 + 136, ctx.r30.u64);
	// stb r30,144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 144, ctx.r30.u8);
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// stb r30,152(r31)
	PPC_STORE_U8(ctx.r31.u32 + 152, ctx.r30.u8);
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// stb r30,160(r31)
	PPC_STORE_U8(ctx.r31.u32 + 160, ctx.r30.u8);
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
	// stb r30,168(r31)
	PPC_STORE_U8(ctx.r31.u32 + 168, ctx.r30.u8);
	// stw r30,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r30.u32);
	// stb r30,176(r31)
	PPC_STORE_U8(ctx.r31.u32 + 176, ctx.r30.u8);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// bl 0x82abc660
	ctx.lr = 0x82EA72E4;
	sub_82ABC660(ctx, base);
	// stb r30,196(r31)
	PPC_STORE_U8(ctx.r31.u32 + 196, ctx.r30.u8);
	// stw r30,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r30,204(r31)
	PPC_STORE_U8(ctx.r31.u32 + 204, ctx.r30.u8);
	// stw r30,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82EA7310"))) PPC_WEAK_FUNC(sub_82EA7310);
PPC_FUNC_IMPL(__imp__sub_82EA7310) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82EA7318;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82abc660
	ctx.lr = 0x82EA732C;
	sub_82ABC660(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stb r11,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r11.u8);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x82abc660
	ctx.lr = 0x82EA7340;
	sub_82ABC660(ctx, base);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r29,2
	ctx.r29.s64 = 2;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82ea735c
	if (cr6.eq) goto loc_82EA735C;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x82EA735C;
	sub_825952B8(ctx, base);
loc_82EA735C:
	// lbz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// addi r11,r31,176
	ctx.r11.s64 = ctx.r31.s64 + 176;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stb r10,176(r31)
	PPC_STORE_U8(ctx.r31.u32 + 176, ctx.r10.u8);
	// bl 0x828eeb48
	ctx.lr = 0x82EA7374;
	sub_828EEB48(ctx, base);
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82ea738c
	if (cr6.eq) goto loc_82EA738C;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x82EA738C;
	sub_825952B8(ctx, base);
loc_82EA738C:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82ea73a4
	if (cr6.eq) goto loc_82EA73A4;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825952b8
	ctx.lr = 0x82EA73A4;
	sub_825952B8(ctx, base);
loc_82EA73A4:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA73C0"))) PPC_WEAK_FUNC(sub_82EA73C0);
PPC_FUNC_IMPL(__imp__sub_82EA73C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82EA73C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82a8e3a8
	ctx.lr = 0x82EA73DC;
	sub_82A8E3A8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stb r11,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r11.u8);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x82a8e3a8
	ctx.lr = 0x82EA73F0;
	sub_82A8E3A8(ctx, base);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r29,2
	ctx.r29.s64 = 2;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82ea740c
	if (cr6.eq) goto loc_82EA740C;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x82EA740C;
	sub_825952B8(ctx, base);
loc_82EA740C:
	// lbz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// addi r11,r31,52
	ctx.r11.s64 = ctx.r31.s64 + 52;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stb r10,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r10.u8);
	// bl 0x82a120f0
	ctx.lr = 0x82EA7424;
	sub_82A120F0(ctx, base);
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82ea743c
	if (cr6.eq) goto loc_82EA743C;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x82EA743C;
	sub_825952B8(ctx, base);
loc_82EA743C:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82ea7454
	if (cr6.eq) goto loc_82EA7454;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825952b8
	ctx.lr = 0x82EA7454;
	sub_825952B8(ctx, base);
loc_82EA7454:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA7470"))) PPC_WEAK_FUNC(sub_82EA7470);
PPC_FUNC_IMPL(__imp__sub_82EA7470) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82EA7478;
	__savegprlr_24(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x831ce774
	ctx.lr = 0x82EA7480;
	__savefpr_27(ctx, base);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82ea6740
	ctx.lr = 0x82EA7498;
	sub_82EA6740(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r25,r11,12496
	ctx.r25.s64 = ctx.r11.s64 + 12496;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r25,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r25.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// bl 0x825359d8
	ctx.lr = 0x82EA74B8;
	sub_825359D8(ctx, base);
	// stb r30,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r30.u8);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82535130
	ctx.lr = 0x82EA74C4;
	sub_82535130(ctx, base);
	// stb r30,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r30.u8);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82535130
	ctx.lr = 0x82EA74D0;
	sub_82535130(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x825369e8
	ctx.lr = 0x82EA74DC;
	sub_825369E8(ctx, base);
	// li r31,1
	ctx.r31.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r31,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r31.u8);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x825359d8
	ctx.lr = 0x82EA74F0;
	sub_825359D8(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r28,r11,-30520
	ctx.r28.s64 = ctx.r11.s64 + -30520;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82e8c3a8
	ctx.lr = 0x82EA7508;
	sub_82E8C3A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea7558
	if (!cr6.eq) goto loc_82EA7558;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82535aa0
	ctx.lr = 0x82EA751C;
	sub_82535AA0(ctx, base);
	// stw r25,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r25.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82535aa0
	ctx.lr = 0x82EA7528;
	sub_82535AA0(ctx, base);
	// lwz r4,248(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82ea7544
	if (cr6.eq) goto loc_82EA7544;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82EA7544;
	sub_825952B8(ctx, base);
loc_82EA7544:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x831ce7c0
	ctx.lr = 0x82EA7554;
	__restfpr_27(ctx, base);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82EA7558:
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e9e058
	ctx.lr = 0x82EA7564;
	sub_82E9E058(ctx, base);
	// lbz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 120);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ea75ac
	if (!cr6.eq) goto loc_82EA75AC;
loc_82EA7570:
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82535aa0
	ctx.lr = 0x82EA757C;
	sub_82535AA0(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82535aa0
	ctx.lr = 0x82EA7584;
	sub_82535AA0(ctx, base);
	// stw r25,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r25.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82535aa0
	ctx.lr = 0x82EA7590;
	sub_82535AA0(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82dce0c8
	ctx.lr = 0x82EA7598;
	sub_82DCE0C8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x831ce7c0
	ctx.lr = 0x82EA75A8;
	__restfpr_27(ctx, base);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82EA75AC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r5,r28,232
	ctx.r5.s64 = ctx.r28.s64 + 232;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfd f31,9000(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 9000);
	// stfd f31,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f31.u64);
	// bl 0x82e8c578
	ctx.lr = 0x82EA75C8;
	sub_82E8C578(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32231
	ctx.r7.s64 = -2112290816;
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// lfs f27,-4660(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4660);
	ctx.f27.f64 = double(temp.f32);
	// lfd f28,-18168(r9)
	ctx.f28.u64 = PPC_LOAD_U64(ctx.r9.u32 + -18168);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// lfs f29,-4664(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -4664);
	ctx.f29.f64 = double(temp.f32);
	// lfd f30,-18160(r7)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r7.u32 + -18160);
	// bne cr6,0x82ea75fc
	if (!cr6.eq) goto loc_82EA75FC;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82ea7630
	goto loc_82EA7630;
loc_82EA75FC:
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcmpu cr6,f0,f30
	cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x82ea7610
	if (!cr6.lt) goto loc_82EA7610;
	// fmr f0,f29
	ctx.f0.f64 = ctx.f29.f64;
	// b 0x82ea7624
	goto loc_82EA7624;
loc_82EA7610:
	// fcmpu cr6,f0,f28
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// ble cr6,0x82ea7620
	if (!cr6.gt) goto loc_82EA7620;
	// fmr f0,f27
	ctx.f0.f64 = ctx.f27.f64;
	// b 0x82ea7624
	goto loc_82EA7624;
loc_82EA7620:
	// frsp f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64));
loc_82EA7624:
	// stfs f0,196(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
loc_82EA7630:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea7640
	if (cr6.eq) goto loc_82EA7640;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
loc_82EA7640:
	// std r30,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r30.u64);
	// addi r5,r28,280
	ctx.r5.s64 = ctx.r28.s64 + 280;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA7654;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea7668
	if (!cr6.eq) goto loc_82EA7668;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82ea7678
	goto loc_82EA7678;
loc_82EA7668:
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,200(r1)
	PPC_STORE_U8(ctx.r1.u32 + 200, ctx.r31.u8);
	// std r10,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r10.u64);
loc_82EA7678:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea7688
	if (cr6.eq) goto loc_82EA7688;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
loc_82EA7688:
	// std r30,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r30.u64);
	// addi r5,r28,324
	ctx.r5.s64 = ctx.r28.s64 + 324;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA769C;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea76b0
	if (!cr6.eq) goto loc_82EA76B0;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82ea76c0
	goto loc_82EA76C0;
loc_82EA76B0:
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,216(r1)
	PPC_STORE_U8(ctx.r1.u32 + 216, ctx.r31.u8);
	// std r10,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r10.u64);
loc_82EA76C0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea76d0
	if (cr6.eq) goto loc_82EA76D0;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
loc_82EA76D0:
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// addi r5,r28,364
	ctx.r5.s64 = ctx.r28.s64 + 364;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c338
	ctx.lr = 0x82EA76E4;
	sub_82E8C338(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea76f8
	if (!cr6.eq) goto loc_82EA76F8;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82ea7708
	goto loc_82EA7708;
loc_82EA76F8:
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,232(r1)
	PPC_STORE_U8(ctx.r1.u32 + 232, ctx.r31.u8);
	// stb r10,233(r1)
	PPC_STORE_U8(ctx.r1.u32 + 233, ctx.r10.u8);
loc_82EA7708:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea7718
	if (cr6.eq) goto loc_82EA7718;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
loc_82EA7718:
	// std r30,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r30.u64);
	// addi r5,r28,388
	ctx.r5.s64 = ctx.r28.s64 + 388;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA772C;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r27,-1
	ctx.r27.s64 = -1;
	// clrldi r29,r10,32
	ctx.r29.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea774c
	if (!cr6.eq) goto loc_82EA774C;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82ea7770
	goto loc_82EA7770;
loc_82EA774C:
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// cmpld cr6,r11,r29
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r29.u64, xer);
	// ble cr6,0x82ea7760
	if (!cr6.gt) goto loc_82EA7760;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82ea7764
	goto loc_82EA7764;
loc_82EA7760:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA7764:
	// stw r11,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r11.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,236(r1)
	PPC_STORE_U8(ctx.r1.u32 + 236, ctx.r31.u8);
loc_82EA7770:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea7780
	if (cr6.eq) goto loc_82EA7780;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
loc_82EA7780:
	// lis r11,-32022
	ctx.r11.s64 = -2098593792;
	// addi r5,r28,412
	ctx.r5.s64 = ctx.r28.s64 + 412;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,29632
	ctx.r4.s64 = ctx.r11.s64 + 29632;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82ea61c8
	ctx.lr = 0x82EA779C;
	sub_82EA61C8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ea77ac
	if (cr6.eq) goto loc_82EA77AC;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
loc_82EA77AC:
	// std r30,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r30.u64);
	// addi r5,r28,444
	ctx.r5.s64 = ctx.r28.s64 + 444;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA77C0;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea77d4
	if (!cr6.eq) goto loc_82EA77D4;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82ea77f8
	goto loc_82EA77F8;
loc_82EA77D4:
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// cmpld cr6,r11,r29
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r29.u64, xer);
	// ble cr6,0x82ea77e8
	if (!cr6.gt) goto loc_82EA77E8;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82ea77ec
	goto loc_82EA77EC;
loc_82EA77E8:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA77EC:
	// stw r11,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r11.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,264(r1)
	PPC_STORE_U8(ctx.r1.u32 + 264, ctx.r31.u8);
loc_82EA77F8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea7808
	if (cr6.eq) goto loc_82EA7808;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
loc_82EA7808:
	// std r30,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r30.u64);
	// addi r5,r28,476
	ctx.r5.s64 = ctx.r28.s64 + 476;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA781C;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea7830
	if (!cr6.eq) goto loc_82EA7830;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82ea7854
	goto loc_82EA7854;
loc_82EA7830:
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// cmpld cr6,r11,r29
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r29.u64, xer);
	// ble cr6,0x82ea7844
	if (!cr6.gt) goto loc_82EA7844;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82ea7848
	goto loc_82EA7848;
loc_82EA7844:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA7848:
	// stw r11,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r11.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r31.u8);
loc_82EA7854:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea7864
	if (cr6.eq) goto loc_82EA7864;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
loc_82EA7864:
	// std r30,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r30.u64);
	// addi r5,r28,528
	ctx.r5.s64 = ctx.r28.s64 + 528;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA7878;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea788c
	if (!cr6.eq) goto loc_82EA788C;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82ea78b0
	goto loc_82EA78B0;
loc_82EA788C:
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// cmpld cr6,r11,r29
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r29.u64, xer);
	// ble cr6,0x82ea78a0
	if (!cr6.gt) goto loc_82EA78A0;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82ea78a4
	goto loc_82EA78A4;
loc_82EA78A0:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA78A4:
	// stw r11,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r11.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,280(r1)
	PPC_STORE_U8(ctx.r1.u32 + 280, ctx.r31.u8);
loc_82EA78B0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea78c0
	if (cr6.eq) goto loc_82EA78C0;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
loc_82EA78C0:
	// std r30,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r30.u64);
	// addi r5,r28,568
	ctx.r5.s64 = ctx.r28.s64 + 568;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA78D4;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea78e8
	if (!cr6.eq) goto loc_82EA78E8;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82ea790c
	goto loc_82EA790C;
loc_82EA78E8:
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// cmpld cr6,r11,r29
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r29.u64, xer);
	// ble cr6,0x82ea78fc
	if (!cr6.gt) goto loc_82EA78FC;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82ea7900
	goto loc_82EA7900;
loc_82EA78FC:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA7900:
	// stw r11,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r11.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
loc_82EA790C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea791c
	if (cr6.eq) goto loc_82EA791C;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
loc_82EA791C:
	// std r30,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r30.u64);
	// addi r5,r28,620
	ctx.r5.s64 = ctx.r28.s64 + 620;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA7930;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea7944
	if (!cr6.eq) goto loc_82EA7944;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82ea7968
	goto loc_82EA7968;
loc_82EA7944:
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// cmpld cr6,r11,r29
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r29.u64, xer);
	// ble cr6,0x82ea7958
	if (!cr6.gt) goto loc_82EA7958;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82ea795c
	goto loc_82EA795C;
loc_82EA7958:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA795C:
	// stw r11,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r11.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,296(r1)
	PPC_STORE_U8(ctx.r1.u32 + 296, ctx.r31.u8);
loc_82EA7968:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea7978
	if (cr6.eq) goto loc_82EA7978;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
loc_82EA7978:
	// stfd f31,88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f31.u64);
	// addi r5,r28,664
	ctx.r5.s64 = ctx.r28.s64 + 664;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c578
	ctx.lr = 0x82EA798C;
	sub_82E8C578(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea79a0
	if (!cr6.eq) goto loc_82EA79A0;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82ea79d4
	goto loc_82EA79D4;
loc_82EA79A0:
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcmpu cr6,f0,f30
	cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x82ea79b4
	if (!cr6.lt) goto loc_82EA79B4;
	// fmr f0,f29
	ctx.f0.f64 = ctx.f29.f64;
	// b 0x82ea79c8
	goto loc_82EA79C8;
loc_82EA79B4:
	// fcmpu cr6,f0,f28
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// ble cr6,0x82ea79c4
	if (!cr6.gt) goto loc_82EA79C4;
	// fmr f0,f27
	ctx.f0.f64 = ctx.f27.f64;
	// b 0x82ea79c8
	goto loc_82EA79C8;
loc_82EA79C4:
	// frsp f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64));
loc_82EA79C8:
	// stfs f0,308(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 308, temp.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,304(r1)
	PPC_STORE_U8(ctx.r1.u32 + 304, ctx.r31.u8);
loc_82EA79D4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea79e4
	if (cr6.eq) goto loc_82EA79E4;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
loc_82EA79E4:
	// std r30,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r30.u64);
	// addi r5,r28,716
	ctx.r5.s64 = ctx.r28.s64 + 716;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA79F8;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea7a0c
	if (!cr6.eq) goto loc_82EA7A0C;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82ea7a30
	goto loc_82EA7A30;
loc_82EA7A0C:
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// cmpld cr6,r11,r29
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r29.u64, xer);
	// ble cr6,0x82ea7a20
	if (!cr6.gt) goto loc_82EA7A20;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82ea7a24
	goto loc_82EA7A24;
loc_82EA7A20:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA7A24:
	// stw r11,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r11.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,312(r1)
	PPC_STORE_U8(ctx.r1.u32 + 312, ctx.r31.u8);
loc_82EA7A30:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea7a40
	if (cr6.eq) goto loc_82EA7A40;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
loc_82EA7A40:
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// addi r5,r28,768
	ctx.r5.s64 = ctx.r28.s64 + 768;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c338
	ctx.lr = 0x82EA7A54;
	sub_82E8C338(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea7a68
	if (!cr6.eq) goto loc_82EA7A68;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82ea7a78
	goto loc_82EA7A78;
loc_82EA7A68:
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// stb r10,321(r1)
	PPC_STORE_U8(ctx.r1.u32 + 321, ctx.r10.u8);
loc_82EA7A78:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea7a88
	if (cr6.eq) goto loc_82EA7A88;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
loc_82EA7A88:
	// std r30,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r30.u64);
	// addi r5,r28,784
	ctx.r5.s64 = ctx.r28.s64 + 784;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA7A9C;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea7ab0
	if (!cr6.eq) goto loc_82EA7AB0;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82ea7ad4
	goto loc_82EA7AD4;
loc_82EA7AB0:
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// cmpld cr6,r11,r29
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r29.u64, xer);
	// ble cr6,0x82ea7ac4
	if (!cr6.gt) goto loc_82EA7AC4;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// b 0x82ea7ac8
	goto loc_82EA7AC8;
loc_82EA7AC4:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA7AC8:
	// stw r11,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r11.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,324(r1)
	PPC_STORE_U8(ctx.r1.u32 + 324, ctx.r31.u8);
loc_82EA7AD4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea7ae4
	if (cr6.eq) goto loc_82EA7AE4;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
loc_82EA7AE4:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea7570
	if (cr6.eq) goto loc_82EA7570;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82e7adf8
	ctx.lr = 0x82EA7AFC;
	sub_82E7ADF8(ctx, base);
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82535aa0
	ctx.lr = 0x82EA7B08;
	sub_82535AA0(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82535aa0
	ctx.lr = 0x82EA7B10;
	sub_82535AA0(ctx, base);
	// stw r25,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r25.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82535aa0
	ctx.lr = 0x82EA7B1C;
	sub_82535AA0(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82dce0c8
	ctx.lr = 0x82EA7B24;
	sub_82DCE0C8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x831ce7c0
	ctx.lr = 0x82EA7B34;
	__restfpr_27(ctx, base);
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA7B38"))) PPC_WEAK_FUNC(sub_82EA7B38);
PPC_FUNC_IMPL(__imp__sub_82EA7B38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82EA7B40;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x82e6e978
	ctx.lr = 0x82EA7B58;
	sub_82E6E978(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ea7c20
	if (cr6.eq) goto loc_82EA7C20;
	// lwz r31,24(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r28,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r28.u8);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825359d8
	ctx.lr = 0x82EA7B74;
	sub_825359D8(ctx, base);
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825359d8
	ctx.lr = 0x82EA7B84;
	sub_825359D8(ctx, base);
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(ctx.r30.u32, 1, xer);
	// blt cr6,0x82ea7bdc
	if (cr6.lt) goto loc_82EA7BDC;
	// bne cr6,0x82ea7c10
	if (!cr6.eq) goto loc_82EA7C10;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r30,r11,-30564
	ctx.r30.s64 = ctx.r11.s64 + -30564;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r5,r30,-120
	ctx.r5.s64 = ctx.r30.s64 + -120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8c3a8
	ctx.lr = 0x82EA7BAC;
	sub_82E8C3A8(ctx, base);
	// stb r3,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r3.u8);
	// cmplwi cr6,r29,1
	cr6.compare<uint32_t>(ctx.r29.u32, 1, xer);
	// blt cr6,0x82ea7bd4
	if (cr6.lt) goto loc_82EA7BD4;
	// beq cr6,0x82ea7bcc
	if (cr6.eq) goto loc_82EA7BCC;
	// cmplwi cr6,r29,3
	cr6.compare<uint32_t>(ctx.r29.u32, 3, xer);
	// bge cr6,0x82ea7c10
	if (!cr6.lt) goto loc_82EA7C10;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// b 0x82ea7c40
	goto loc_82EA7C40;
loc_82EA7BCC:
	// addi r5,r30,-52
	ctx.r5.s64 = ctx.r30.s64 + -52;
	// b 0x82ea7c40
	goto loc_82EA7C40;
loc_82EA7BD4:
	// addi r5,r30,-92
	ctx.r5.s64 = ctx.r30.s64 + -92;
	// b 0x82ea7c40
	goto loc_82EA7C40;
loc_82EA7BDC:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r30,r11,-30564
	ctx.r30.s64 = ctx.r11.s64 + -30564;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r5,r30,-128
	ctx.r5.s64 = ctx.r30.s64 + -128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8c3a8
	ctx.lr = 0x82EA7BF8;
	sub_82E8C3A8(ctx, base);
	// stb r3,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r3.u8);
	// cmplwi cr6,r29,1
	cr6.compare<uint32_t>(ctx.r29.u32, 1, xer);
	// blt cr6,0x82ea7c3c
	if (cr6.lt) goto loc_82EA7C3C;
	// beq cr6,0x82ea7c34
	if (cr6.eq) goto loc_82EA7C34;
	// cmplwi cr6,r29,3
	cr6.compare<uint32_t>(ctx.r29.u32, 3, xer);
	// blt cr6,0x82ea7c2c
	if (cr6.lt) goto loc_82EA7C2C;
loc_82EA7C10:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82535aa0
	ctx.lr = 0x82EA7C18;
	sub_82535AA0(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82535aa0
	ctx.lr = 0x82EA7C20;
	sub_82535AA0(ctx, base);
loc_82EA7C20:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82EA7C2C:
	// addi r5,r30,-32
	ctx.r5.s64 = ctx.r30.s64 + -32;
	// b 0x82ea7c40
	goto loc_82EA7C40;
loc_82EA7C34:
	// addi r5,r30,-72
	ctx.r5.s64 = ctx.r30.s64 + -72;
	// b 0x82ea7c40
	goto loc_82EA7C40;
loc_82EA7C3C:
	// addi r5,r30,-112
	ctx.r5.s64 = ctx.r30.s64 + -112;
loc_82EA7C40:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8c3a8
	ctx.lr = 0x82EA7C4C;
	sub_82E8C3A8(ctx, base);
	// lbz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// stb r3,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r3.u8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ea7c6c
	if (cr6.eq) goto loc_82EA7C6C;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ea7470
	ctx.lr = 0x82EA7C68;
	sub_82EA7470(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_82EA7C6C:
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ea7c90
	if (cr6.eq) goto loc_82EA7C90;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ea7470
	ctx.lr = 0x82EA7C84;
	sub_82EA7470(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// or r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 | ctx.r10.u64;
loc_82EA7C90:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82535aa0
	ctx.lr = 0x82EA7C98;
	sub_82535AA0(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82535aa0
	ctx.lr = 0x82EA7CA0;
	sub_82535AA0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA7CAC"))) PPC_WEAK_FUNC(sub_82EA7CAC);
PPC_FUNC_IMPL(__imp__sub_82EA7CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA7CB0"))) PPC_WEAK_FUNC(sub_82EA7CB0);
PPC_FUNC_IMPL(__imp__sub_82EA7CB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82EA7CB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x83873378
	ctx.lr = 0x82EA7CCC;
	sub_83873378(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// blt cr6,0x82ea7d08
	if (cr6.lt) goto loc_82EA7D08;
	// beq cr6,0x82ea7d08
	if (cr6.eq) goto loc_82EA7D08;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// blt cr6,0x82ea7cf8
	if (cr6.lt) goto loc_82EA7CF8;
loc_82EA7CE4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83876458
	ctx.lr = 0x82EA7CEC;
	sub_83876458(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82EA7CF8:
	// lis r11,45
	ctx.r11.s64 = 2949120;
	// li r30,1
	ctx.r30.s64 = 1;
	// ori r10,r11,50880
	ctx.r10.u64 = ctx.r11.u64 | 50880;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
loc_82EA7D08:
	// bl 0x830ff290
	ctx.lr = 0x82EA7D0C;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x82ea7d24
	if (!cr6.eq) goto loc_82EA7D24;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r30,1
	ctx.r30.s64 = 1;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
loc_82EA7D24:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea7ce4
	if (cr6.eq) goto loc_82EA7CE4;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// std r11,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r11.u64);
	// bl 0x8259cb28
	ctx.lr = 0x82EA7D4C;
	sub_8259CB28(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83876458
	ctx.lr = 0x82EA7D54;
	sub_83876458(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA7D60"))) PPC_WEAK_FUNC(sub_82EA7D60);
PPC_FUNC_IMPL(__imp__sub_82EA7D60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82EA7D68;
	__savegprlr_24(ctx, base);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82ea6be0
	ctx.lr = 0x82EA7D80;
	sub_82EA6BE0(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r25,r11,12496
	ctx.r25.s64 = ctx.r11.s64 + 12496;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r25,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r25.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// bl 0x825359d8
	ctx.lr = 0x82EA7DA0;
	sub_825359D8(ctx, base);
	// stb r30,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r30.u8);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82535130
	ctx.lr = 0x82EA7DAC;
	sub_82535130(ctx, base);
	// stb r30,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r30.u8);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82535130
	ctx.lr = 0x82EA7DB8;
	sub_82535130(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x825369e8
	ctx.lr = 0x82EA7DC4;
	sub_825369E8(ctx, base);
	// li r31,1
	ctx.r31.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r31,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r31.u8);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x825359d8
	ctx.lr = 0x82EA7DD8;
	sub_825359D8(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r29,r11,-30488
	ctx.r29.s64 = ctx.r11.s64 + -30488;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82e8c3a8
	ctx.lr = 0x82EA7DF0;
	sub_82E8C3A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea7e38
	if (!cr6.eq) goto loc_82EA7E38;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82535aa0
	ctx.lr = 0x82EA7E04;
	sub_82535AA0(ctx, base);
	// stw r25,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r25.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82535aa0
	ctx.lr = 0x82EA7E10;
	sub_82535AA0(ctx, base);
	// lwz r4,372(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82ea7e2c
	if (cr6.eq) goto loc_82EA7E2C;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82EA7E2C;
	sub_825952B8(ctx, base);
loc_82EA7E2C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82EA7E38:
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e9e058
	ctx.lr = 0x82EA7E44;
	sub_82E9E058(ctx, base);
	// lbz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 120);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ea7e84
	if (!cr6.eq) goto loc_82EA7E84;
loc_82EA7E50:
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82535aa0
	ctx.lr = 0x82EA7E5C;
	sub_82535AA0(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82535aa0
	ctx.lr = 0x82EA7E64;
	sub_82535AA0(ctx, base);
	// stw r25,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r25.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82535aa0
	ctx.lr = 0x82EA7E70;
	sub_82535AA0(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82ea5de0
	ctx.lr = 0x82EA7E78;
	sub_82EA5DE0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82EA7E84:
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// addi r5,r29,816
	ctx.r5.s64 = ctx.r29.s64 + 816;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA7E98;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r26,-1
	ctx.r26.s64 = -1;
	// clrldi r27,r10,32
	ctx.r27.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea7eb8
	if (!cr6.eq) goto loc_82EA7EB8;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82ea7edc
	goto loc_82EA7EDC;
loc_82EA7EB8:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r27
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r27.u64, xer);
	// ble cr6,0x82ea7ecc
	if (!cr6.gt) goto loc_82EA7ECC;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x82ea7ed0
	goto loc_82EA7ED0;
loc_82EA7ECC:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA7ED0:
	// stw r11,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r11.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
loc_82EA7EDC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea7eec
	if (cr6.eq) goto loc_82EA7EEC;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_82EA7EEC:
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// addi r5,r29,844
	ctx.r5.s64 = ctx.r29.s64 + 844;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA7F00;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea7f14
	if (!cr6.eq) goto loc_82EA7F14;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82ea7f38
	goto loc_82EA7F38;
loc_82EA7F14:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r27
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r27.u64, xer);
	// ble cr6,0x82ea7f28
	if (!cr6.gt) goto loc_82EA7F28;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x82ea7f2c
	goto loc_82EA7F2C;
loc_82EA7F28:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA7F2C:
	// stw r11,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r11.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,200(r1)
	PPC_STORE_U8(ctx.r1.u32 + 200, ctx.r31.u8);
loc_82EA7F38:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea7f48
	if (cr6.eq) goto loc_82EA7F48;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_82EA7F48:
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// addi r5,r29,872
	ctx.r5.s64 = ctx.r29.s64 + 872;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA7F5C;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea7f70
	if (!cr6.eq) goto loc_82EA7F70;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82ea7f94
	goto loc_82EA7F94;
loc_82EA7F70:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r27
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r27.u64, xer);
	// ble cr6,0x82ea7f84
	if (!cr6.gt) goto loc_82EA7F84;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x82ea7f88
	goto loc_82EA7F88;
loc_82EA7F84:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA7F88:
	// stw r11,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r11.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r31.u8);
loc_82EA7F94:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea7fa4
	if (cr6.eq) goto loc_82EA7FA4;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_82EA7FA4:
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// addi r5,r29,892
	ctx.r5.s64 = ctx.r29.s64 + 892;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA7FB8;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea7fcc
	if (!cr6.eq) goto loc_82EA7FCC;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82ea7ff0
	goto loc_82EA7FF0;
loc_82EA7FCC:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r27
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r27.u64, xer);
	// ble cr6,0x82ea7fe0
	if (!cr6.gt) goto loc_82EA7FE0;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x82ea7fe4
	goto loc_82EA7FE4;
loc_82EA7FE0:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA7FE4:
	// stw r11,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r11.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,216(r1)
	PPC_STORE_U8(ctx.r1.u32 + 216, ctx.r31.u8);
loc_82EA7FF0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea8000
	if (cr6.eq) goto loc_82EA8000;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_82EA8000:
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// addi r5,r29,912
	ctx.r5.s64 = ctx.r29.s64 + 912;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA8014;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea8028
	if (!cr6.eq) goto loc_82EA8028;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82ea8038
	goto loc_82EA8038;
loc_82EA8028:
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// std r10,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r10.u64);
loc_82EA8038:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea8048
	if (cr6.eq) goto loc_82EA8048;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_82EA8048:
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// addi r5,r29,928
	ctx.r5.s64 = ctx.r29.s64 + 928;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA805C;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea8070
	if (!cr6.eq) goto loc_82EA8070;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82ea8094
	goto loc_82EA8094;
loc_82EA8070:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r27
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r27.u64, xer);
	// ble cr6,0x82ea8084
	if (!cr6.gt) goto loc_82EA8084;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x82ea8088
	goto loc_82EA8088;
loc_82EA8084:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA8088:
	// stw r11,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r11.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r31.u8);
loc_82EA8094:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea80a4
	if (cr6.eq) goto loc_82EA80A4;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_82EA80A4:
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// addi r5,r29,952
	ctx.r5.s64 = ctx.r29.s64 + 952;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA80B8;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea80cc
	if (!cr6.eq) goto loc_82EA80CC;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82ea80dc
	goto loc_82EA80DC;
loc_82EA80CC:
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,248(r1)
	PPC_STORE_U8(ctx.r1.u32 + 248, ctx.r31.u8);
	// std r10,256(r1)
	PPC_STORE_U64(ctx.r1.u32 + 256, ctx.r10.u64);
loc_82EA80DC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea80ec
	if (cr6.eq) goto loc_82EA80EC;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_82EA80EC:
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// addi r5,r29,976
	ctx.r5.s64 = ctx.r29.s64 + 976;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA8100;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea8114
	if (!cr6.eq) goto loc_82EA8114;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82ea8138
	goto loc_82EA8138;
loc_82EA8114:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r27
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r27.u64, xer);
	// ble cr6,0x82ea8128
	if (!cr6.gt) goto loc_82EA8128;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x82ea812c
	goto loc_82EA812C;
loc_82EA8128:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA812C:
	// stw r11,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r11.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,264(r1)
	PPC_STORE_U8(ctx.r1.u32 + 264, ctx.r31.u8);
loc_82EA8138:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea8148
	if (cr6.eq) goto loc_82EA8148;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_82EA8148:
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// addi r5,r29,996
	ctx.r5.s64 = ctx.r29.s64 + 996;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA815C;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea8170
	if (!cr6.eq) goto loc_82EA8170;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82ea8194
	goto loc_82EA8194;
loc_82EA8170:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r27
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r27.u64, xer);
	// ble cr6,0x82ea8184
	if (!cr6.gt) goto loc_82EA8184;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x82ea8188
	goto loc_82EA8188;
loc_82EA8184:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA8188:
	// stw r11,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r11.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r31.u8);
loc_82EA8194:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea81a4
	if (cr6.eq) goto loc_82EA81A4;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_82EA81A4:
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// addi r5,r29,1008
	ctx.r5.s64 = ctx.r29.s64 + 1008;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA81B8;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea81cc
	if (!cr6.eq) goto loc_82EA81CC;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82ea81dc
	goto loc_82EA81DC;
loc_82EA81CC:
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,280(r1)
	PPC_STORE_U8(ctx.r1.u32 + 280, ctx.r31.u8);
	// std r10,288(r1)
	PPC_STORE_U64(ctx.r1.u32 + 288, ctx.r10.u64);
loc_82EA81DC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea81ec
	if (cr6.eq) goto loc_82EA81EC;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_82EA81EC:
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// addi r5,r29,1028
	ctx.r5.s64 = ctx.r29.s64 + 1028;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA8200;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea8214
	if (!cr6.eq) goto loc_82EA8214;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82ea8238
	goto loc_82EA8238;
loc_82EA8214:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r27
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r27.u64, xer);
	// ble cr6,0x82ea8228
	if (!cr6.gt) goto loc_82EA8228;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x82ea822c
	goto loc_82EA822C;
loc_82EA8228:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA822C:
	// stw r11,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r11.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,296(r1)
	PPC_STORE_U8(ctx.r1.u32 + 296, ctx.r31.u8);
loc_82EA8238:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea8248
	if (cr6.eq) goto loc_82EA8248;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_82EA8248:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r5,r29,1060
	ctx.r5.s64 = ctx.r29.s64 + 1060;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c1e8
	ctx.lr = 0x82EA825C;
	sub_82E8C1E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea8270
	if (!cr6.eq) goto loc_82EA8270;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82ea8280
	goto loc_82EA8280;
loc_82EA8270:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,304(r1)
	PPC_STORE_U8(ctx.r1.u32 + 304, ctx.r31.u8);
	// stw r10,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r10.u32);
loc_82EA8280:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea8290
	if (cr6.eq) goto loc_82EA8290;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_82EA8290:
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// addi r5,r29,1072
	ctx.r5.s64 = ctx.r29.s64 + 1072;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA82A4;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea82b8
	if (!cr6.eq) goto loc_82EA82B8;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82ea82dc
	goto loc_82EA82DC;
loc_82EA82B8:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r27
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r27.u64, xer);
	// ble cr6,0x82ea82cc
	if (!cr6.gt) goto loc_82EA82CC;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x82ea82d0
	goto loc_82EA82D0;
loc_82EA82CC:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA82D0:
	// stw r11,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r11.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,312(r1)
	PPC_STORE_U8(ctx.r1.u32 + 312, ctx.r31.u8);
loc_82EA82DC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea82ec
	if (cr6.eq) goto loc_82EA82EC;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_82EA82EC:
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// addi r5,r29,1088
	ctx.r5.s64 = ctx.r29.s64 + 1088;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA8300;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea8314
	if (!cr6.eq) goto loc_82EA8314;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82ea8324
	goto loc_82EA8324;
loc_82EA8314:
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// std r10,328(r1)
	PPC_STORE_U64(ctx.r1.u32 + 328, ctx.r10.u64);
loc_82EA8324:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea8334
	if (cr6.eq) goto loc_82EA8334;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_82EA8334:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r5,r29,1104
	ctx.r5.s64 = ctx.r29.s64 + 1104;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c1e8
	ctx.lr = 0x82EA8348;
	sub_82E8C1E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea835c
	if (!cr6.eq) goto loc_82EA835C;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82ea836c
	goto loc_82EA836C;
loc_82EA835C:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,336(r1)
	PPC_STORE_U8(ctx.r1.u32 + 336, ctx.r31.u8);
	// stw r10,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r10.u32);
loc_82EA836C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea837c
	if (cr6.eq) goto loc_82EA837C;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_82EA837C:
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// addi r5,r29,1116
	ctx.r5.s64 = ctx.r29.s64 + 1116;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA8390;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea83a4
	if (!cr6.eq) goto loc_82EA83A4;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82ea83c8
	goto loc_82EA83C8;
loc_82EA83A4:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r27
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r27.u64, xer);
	// ble cr6,0x82ea83b8
	if (!cr6.gt) goto loc_82EA83B8;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x82ea83bc
	goto loc_82EA83BC;
loc_82EA83B8:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA83BC:
	// stw r11,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r11.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,344(r1)
	PPC_STORE_U8(ctx.r1.u32 + 344, ctx.r31.u8);
loc_82EA83C8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea83d8
	if (cr6.eq) goto loc_82EA83D8;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_82EA83D8:
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// addi r5,r29,1140
	ctx.r5.s64 = ctx.r29.s64 + 1140;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA83EC;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea8400
	if (!cr6.eq) goto loc_82EA8400;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82ea8424
	goto loc_82EA8424;
loc_82EA8400:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r27
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r27.u64, xer);
	// ble cr6,0x82ea8414
	if (!cr6.gt) goto loc_82EA8414;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x82ea8418
	goto loc_82EA8418;
loc_82EA8414:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA8418:
	// stw r11,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r11.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
loc_82EA8424:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea8434
	if (cr6.eq) goto loc_82EA8434;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_82EA8434:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r5,r29,1176
	ctx.r5.s64 = ctx.r29.s64 + 1176;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c1e8
	ctx.lr = 0x82EA8448;
	sub_82E8C1E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea845c
	if (!cr6.eq) goto loc_82EA845C;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82ea846c
	goto loc_82EA846C;
loc_82EA845C:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,360(r1)
	PPC_STORE_U8(ctx.r1.u32 + 360, ctx.r31.u8);
	// stw r10,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r10.u32);
loc_82EA846C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea847c
	if (cr6.eq) goto loc_82EA847C;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_82EA847C:
	// lis r11,-32022
	ctx.r11.s64 = -2098593792;
	// addi r5,r29,1208
	ctx.r5.s64 = ctx.r29.s64 + 1208;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,29456
	ctx.r4.s64 = ctx.r11.s64 + 29456;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82ea6350
	ctx.lr = 0x82EA8498;
	sub_82EA6350(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ea84a8
	if (cr6.eq) goto loc_82EA84A8;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_82EA84A8:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r5,r29,1236
	ctx.r5.s64 = ctx.r29.s64 + 1236;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c1e8
	ctx.lr = 0x82EA84BC;
	sub_82E8C1E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea84d0
	if (!cr6.eq) goto loc_82EA84D0;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82ea84e0
	goto loc_82EA84E0;
loc_82EA84D0:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,388(r1)
	PPC_STORE_U8(ctx.r1.u32 + 388, ctx.r31.u8);
	// stw r10,392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 392, ctx.r10.u32);
loc_82EA84E0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea84f0
	if (cr6.eq) goto loc_82EA84F0;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_82EA84F0:
	// std r30,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r30.u64);
	// addi r5,r29,1268
	ctx.r5.s64 = ctx.r29.s64 + 1268;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EA8504;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ea8518
	if (!cr6.eq) goto loc_82EA8518;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82ea853c
	goto loc_82EA853C;
loc_82EA8518:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpld cr6,r11,r27
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r27.u64, xer);
	// ble cr6,0x82ea852c
	if (!cr6.gt) goto loc_82EA852C;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x82ea8530
	goto loc_82EA8530;
loc_82EA852C:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82EA8530:
	// stw r11,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r11.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stb r31,396(r1)
	PPC_STORE_U8(ctx.r1.u32 + 396, ctx.r31.u8);
loc_82EA853C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea854c
	if (cr6.eq) goto loc_82EA854C;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_82EA854C:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea7e50
	if (cr6.eq) goto loc_82EA7E50;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82ea6030
	ctx.lr = 0x82EA8564;
	sub_82EA6030(ctx, base);
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82535aa0
	ctx.lr = 0x82EA8570;
	sub_82535AA0(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82535aa0
	ctx.lr = 0x82EA8578;
	sub_82535AA0(ctx, base);
	// stw r25,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r25.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82535aa0
	ctx.lr = 0x82EA8584;
	sub_82535AA0(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82ea5de0
	ctx.lr = 0x82EA858C;
	sub_82EA5DE0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA8598"))) PPC_WEAK_FUNC(sub_82EA8598);
PPC_FUNC_IMPL(__imp__sub_82EA8598) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82EA85A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x82e6e978
	ctx.lr = 0x82EA85B8;
	sub_82E6E978(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ea8680
	if (cr6.eq) goto loc_82EA8680;
	// lwz r31,24(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r28,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r28.u8);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825359d8
	ctx.lr = 0x82EA85D4;
	sub_825359D8(ctx, base);
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825359d8
	ctx.lr = 0x82EA85E4;
	sub_825359D8(ctx, base);
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(ctx.r30.u32, 1, xer);
	// blt cr6,0x82ea863c
	if (cr6.lt) goto loc_82EA863C;
	// bne cr6,0x82ea8670
	if (!cr6.eq) goto loc_82EA8670;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r30,r11,-30564
	ctx.r30.s64 = ctx.r11.s64 + -30564;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r5,r30,-120
	ctx.r5.s64 = ctx.r30.s64 + -120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8c3a8
	ctx.lr = 0x82EA860C;
	sub_82E8C3A8(ctx, base);
	// stb r3,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r3.u8);
	// cmplwi cr6,r29,1
	cr6.compare<uint32_t>(ctx.r29.u32, 1, xer);
	// blt cr6,0x82ea8634
	if (cr6.lt) goto loc_82EA8634;
	// beq cr6,0x82ea862c
	if (cr6.eq) goto loc_82EA862C;
	// cmplwi cr6,r29,3
	cr6.compare<uint32_t>(ctx.r29.u32, 3, xer);
	// bge cr6,0x82ea8670
	if (!cr6.lt) goto loc_82EA8670;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// b 0x82ea86a0
	goto loc_82EA86A0;
loc_82EA862C:
	// addi r5,r30,-52
	ctx.r5.s64 = ctx.r30.s64 + -52;
	// b 0x82ea86a0
	goto loc_82EA86A0;
loc_82EA8634:
	// addi r5,r30,-92
	ctx.r5.s64 = ctx.r30.s64 + -92;
	// b 0x82ea86a0
	goto loc_82EA86A0;
loc_82EA863C:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r30,r11,-30564
	ctx.r30.s64 = ctx.r11.s64 + -30564;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r5,r30,-128
	ctx.r5.s64 = ctx.r30.s64 + -128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8c3a8
	ctx.lr = 0x82EA8658;
	sub_82E8C3A8(ctx, base);
	// stb r3,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r3.u8);
	// cmplwi cr6,r29,1
	cr6.compare<uint32_t>(ctx.r29.u32, 1, xer);
	// blt cr6,0x82ea869c
	if (cr6.lt) goto loc_82EA869C;
	// beq cr6,0x82ea8694
	if (cr6.eq) goto loc_82EA8694;
	// cmplwi cr6,r29,3
	cr6.compare<uint32_t>(ctx.r29.u32, 3, xer);
	// blt cr6,0x82ea868c
	if (cr6.lt) goto loc_82EA868C;
loc_82EA8670:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82535aa0
	ctx.lr = 0x82EA8678;
	sub_82535AA0(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82535aa0
	ctx.lr = 0x82EA8680;
	sub_82535AA0(ctx, base);
loc_82EA8680:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82EA868C:
	// addi r5,r30,-32
	ctx.r5.s64 = ctx.r30.s64 + -32;
	// b 0x82ea86a0
	goto loc_82EA86A0;
loc_82EA8694:
	// addi r5,r30,-72
	ctx.r5.s64 = ctx.r30.s64 + -72;
	// b 0x82ea86a0
	goto loc_82EA86A0;
loc_82EA869C:
	// addi r5,r30,-112
	ctx.r5.s64 = ctx.r30.s64 + -112;
loc_82EA86A0:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8c3a8
	ctx.lr = 0x82EA86AC;
	sub_82E8C3A8(ctx, base);
	// lbz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// stb r3,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r3.u8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ea86cc
	if (cr6.eq) goto loc_82EA86CC;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ea7d60
	ctx.lr = 0x82EA86C8;
	sub_82EA7D60(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_82EA86CC:
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ea86f0
	if (cr6.eq) goto loc_82EA86F0;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ea7d60
	ctx.lr = 0x82EA86E4;
	sub_82EA7D60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// or r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 | ctx.r10.u64;
loc_82EA86F0:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82535aa0
	ctx.lr = 0x82EA86F8;
	sub_82535AA0(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82535aa0
	ctx.lr = 0x82EA8700;
	sub_82535AA0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA870C"))) PPC_WEAK_FUNC(sub_82EA870C);
PPC_FUNC_IMPL(__imp__sub_82EA870C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA8710"))) PPC_WEAK_FUNC(sub_82EA8710);
PPC_FUNC_IMPL(__imp__sub_82EA8710) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82EA8718;
	__savegprlr_26(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x83873378
	ctx.lr = 0x82EA872C;
	sub_83873378(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82ea7cb0
	ctx.lr = 0x82EA8738;
	sub_82EA7CB0(ctx, base);
	// ld r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// li r29,-1
	ctx.r29.s64 = -1;
	// stw r27,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r27.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stb r30,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r30.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8259cb28
	ctx.lr = 0x82EA8770;
	sub_8259CB28(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82ea6a60
	ctx.lr = 0x82EA877C;
	sub_82EA6A60(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ea87f8
	if (cr6.eq) goto loc_82EA87F8;
	// ld r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// bl 0x8259cb28
	ctx.lr = 0x82EA87A4;
	sub_8259CB28(ctx, base);
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// li r31,2
	ctx.r31.s64 = 2;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82ea87c4
	if (cr6.lt) goto loc_82EA87C4;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x825952b8
	ctx.lr = 0x82EA87C4;
	sub_825952B8(ctx, base);
loc_82EA87C4:
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// stw r27,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r27.u32);
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r30,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r30.u8);
	// blt cr6,0x82ea87ec
	if (cr6.lt) goto loc_82EA87EC;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,152(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// bl 0x825952b8
	ctx.lr = 0x82EA87EC;
	sub_825952B8(ctx, base);
loc_82EA87EC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82EA87F8:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea883c
	if (cr6.eq) goto loc_82EA883C;
	// ld r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// bl 0x8259cb28
	ctx.lr = 0x82EA8820;
	sub_8259CB28(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83876458
	ctx.lr = 0x82EA8828;
	sub_83876458(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x83876458
	ctx.lr = 0x82EA8830;
	sub_83876458(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82EA883C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83876458
	ctx.lr = 0x82EA8844;
	sub_83876458(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x83876458
	ctx.lr = 0x82EA884C;
	sub_83876458(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA8858"))) PPC_WEAK_FUNC(sub_82EA8858);
PPC_FUNC_IMPL(__imp__sub_82EA8858) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82EA8860;
	__savegprlr_24(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x82dce3d0
	ctx.lr = 0x82EA8878;
	sub_82DCE3D0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// li r29,25
	ctx.r29.s64 = 25;
	// li r28,50
	ctx.r28.s64 = 50;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// li r25,75
	ctx.r25.s64 = 75;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// lis r9,76
	ctx.r9.s64 = 4980736;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stw r25,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r25.u32);
	// li r31,1
	ctx.r31.s64 = 1;
	// stb r11,169(r1)
	PPC_STORE_U8(ctx.r1.u32 + 169, ctx.r11.u8);
	// li r8,10000
	ctx.r8.s64 = 10000;
	// lfs f0,-24912(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24912);
	ctx.f0.f64 = double(temp.f32);
	// ori r11,r9,19264
	ctx.r11.u64 = ctx.r9.u64 | 19264;
	// li r10,10
	ctx.r10.s64 = 10;
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// addi r6,r1,108
	ctx.r6.s64 = ctx.r1.s64 + 108;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stb r31,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r31.u8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// std r8,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r8.u64);
	// stb r31,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r31.u8);
	// std r11,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r11.u64);
	// stb r31,168(r1)
	PPC_STORE_U8(ctx.r1.u32 + 168, ctx.r31.u8);
	// stb r31,172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 172, ctx.r31.u8);
	// stw r10,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// bl 0x82ea5e38
	ctx.lr = 0x82EA88FC;
	sub_82EA5E38(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82a8e3a8
	ctx.lr = 0x82EA8908;
	sub_82A8E3A8(ctx, base);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82ea73c0
	ctx.lr = 0x82EA8914;
	sub_82EA73C0(ctx, base);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r27,2
	ctx.r27.s64 = 2;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82ea8930
	if (cr6.eq) goto loc_82EA8930;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x82EA8930;
	sub_825952B8(ctx, base);
loc_82EA8930:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stb r31,200(r1)
	PPC_STORE_U8(ctx.r1.u32 + 200, ctx.r31.u8);
	// li r11,1000
	ctx.r11.s64 = 1000;
	// stb r31,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r31.u8);
	// li r9,5000
	ctx.r9.s64 = 5000;
	// stb r31,216(r1)
	PPC_STORE_U8(ctx.r1.u32 + 216, ctx.r31.u8);
	// li r8,32
	ctx.r8.s64 = 32;
	// stw r11,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r11.u32);
	// stw r11,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r11.u32);
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(ctx.r30.u32, 1, xer);
	// lfs f0,21708(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21708);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r9.u32);
	// stfs f0,244(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// stw r29,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r29.u32);
	// stb r31,232(r1)
	PPC_STORE_U8(ctx.r1.u32 + 232, ctx.r31.u8);
	// stw r28,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r28.u32);
	// stb r31,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r31.u8);
	// stb r31,248(r1)
	PPC_STORE_U8(ctx.r1.u32 + 248, ctx.r31.u8);
	// stw r8,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r8.u32);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// stb r31,257(r1)
	PPC_STORE_U8(ctx.r1.u32 + 257, ctx.r31.u8);
	// stb r31,260(r1)
	PPC_STORE_U8(ctx.r1.u32 + 260, ctx.r31.u8);
	// stw r27,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r27.u32);
	// blt cr6,0x82ea89bc
	if (cr6.lt) goto loc_82EA89BC;
	// beq cr6,0x82ea89bc
	if (cr6.eq) goto loc_82EA89BC;
	// lwz r4,184(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82ea89b0
	if (cr6.eq) goto loc_82EA89B0;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825952b8
	ctx.lr = 0x82EA89B0;
	sub_825952B8(ctx, base);
loc_82EA89B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82EA89BC:
	// cmplwi cr6,r26,1
	cr6.compare<uint32_t>(ctx.r26.u32, 1, xer);
	// blt cr6,0x82ea89e4
	if (cr6.lt) goto loc_82EA89E4;
	// beq cr6,0x82ea89e4
	if (cr6.eq) goto loc_82EA89E4;
	// cmplwi cr6,r26,3
	cr6.compare<uint32_t>(ctx.r26.u32, 3, xer);
	// blt cr6,0x82ea89e4
	if (cr6.lt) goto loc_82EA89E4;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82dce0c8
	ctx.lr = 0x82EA89D8;
	sub_82DCE0C8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82EA89E4:
	// bl 0x8310e000
	ctx.lr = 0x82EA89E8;
	sub_8310E000(ctx, base);
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// bgt cr6,0x82ea8a24
	if (cr6.gt) goto loc_82EA8A24;
	// mtctr r3
	ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82ea8a1c
	if (cr6.eq) goto loc_82EA8A1C;
	// bdz 0x82ea8a08
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82EA8A08;
	// bdz 0x82ea8a14
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82EA8A14;
	// b 0x82ea8a1c
	goto loc_82EA8A1C;
loc_82EA8A08:
	// li r11,100
	ctx.r11.s64 = 100;
	// stw r11,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r11.u32);
	// b 0x82ea8a20
	goto loc_82EA8A20;
loc_82EA8A14:
	// stw r28,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r28.u32);
	// b 0x82ea8a20
	goto loc_82EA8A20;
loc_82EA8A1C:
	// stw r25,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r25.u32);
loc_82EA8A20:
	// stb r31,232(r1)
	PPC_STORE_U8(ctx.r1.u32 + 232, ctx.r31.u8);
loc_82EA8A24:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82e7adf8
	ctx.lr = 0x82EA8A30;
	sub_82E7ADF8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82dce0c8
	ctx.lr = 0x82EA8A38;
	sub_82DCE0C8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA8A44"))) PPC_WEAK_FUNC(sub_82EA8A44);
PPC_FUNC_IMPL(__imp__sub_82EA8A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA8A48"))) PPC_WEAK_FUNC(sub_82EA8A48);
PPC_FUNC_IMPL(__imp__sub_82EA8A48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x82EA8A50;
	__savegprlr_14(ctx, base);
	// stwu r1,-832(r1)
	ea = -832 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,852(r1)
	PPC_STORE_U32(ctx.r1.u32 + 852, ctx.r3.u32);
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r5,868(r1)
	PPC_STORE_U32(ctx.r1.u32 + 868, ctx.r5.u32);
	// bl 0x82ea7218
	ctx.lr = 0x82EA8A68;
	sub_82EA7218(ctx, base);
	// lis r10,152
	ctx.r10.s64 = 9961472;
	// li r31,1
	ctx.r31.s64 = 1;
	// li r16,56
	ctx.r16.s64 = 56;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r31,464(r1)
	PPC_STORE_U8(ctx.r1.u32 + 464, ctx.r31.u8);
	// li r9,1000
	ctx.r9.s64 = 1000;
	// stw r16,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r16.u32);
	// li r8,500
	ctx.r8.s64 = 500;
	// stb r31,472(r1)
	PPC_STORE_U8(ctx.r1.u32 + 472, ctx.r31.u8);
	// ori r7,r10,38528
	ctx.r7.u64 = ctx.r10.u64 | 38528;
	// stw r16,476(r1)
	PPC_STORE_U32(ctx.r1.u32 + 476, ctx.r16.u32);
	// li r6,256
	ctx.r6.s64 = 256;
	// stb r31,480(r1)
	PPC_STORE_U8(ctx.r1.u32 + 480, ctx.r31.u8);
	// stw r9,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r9.u32);
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(ctx.r30.u32, 1, xer);
	// stb r31,488(r1)
	PPC_STORE_U8(ctx.r1.u32 + 488, ctx.r31.u8);
	// stw r8,492(r1)
	PPC_STORE_U32(ctx.r1.u32 + 492, ctx.r8.u32);
	// stb r31,576(r1)
	PPC_STORE_U8(ctx.r1.u32 + 576, ctx.r31.u8);
	// stw r31,580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 580, ctx.r31.u32);
	// stb r31,592(r1)
	PPC_STORE_U8(ctx.r1.u32 + 592, ctx.r31.u8);
	// std r7,600(r1)
	PPC_STORE_U64(ctx.r1.u32 + 600, ctx.r7.u64);
	// stb r31,632(r1)
	PPC_STORE_U8(ctx.r1.u32 + 632, ctx.r31.u8);
	// stw r11,636(r1)
	PPC_STORE_U32(ctx.r1.u32 + 636, ctx.r11.u32);
	// stb r31,660(r1)
	PPC_STORE_U8(ctx.r1.u32 + 660, ctx.r31.u8);
	// stw r11,664(r1)
	PPC_STORE_U32(ctx.r1.u32 + 664, ctx.r11.u32);
	// stb r31,668(r1)
	PPC_STORE_U8(ctx.r1.u32 + 668, ctx.r31.u8);
	// stw r6,672(r1)
	PPC_STORE_U32(ctx.r1.u32 + 672, ctx.r6.u32);
	// blt cr6,0x82ea929c
	if (cr6.lt) goto loc_82EA929C;
	// beq cr6,0x82ea8b04
	if (cr6.eq) goto loc_82EA8B04;
	// lwz r4,644(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 644);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82ea8af8
	if (cr6.eq) goto loc_82EA8AF8;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// stw r11,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82EA8AF8;
	sub_825952B8(ctx, base);
loc_82EA8AF8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,832
	ctx.r1.s64 = ctx.r1.s64 + 832;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_82EA8B04:
	// li r5,207
	ctx.r5.s64 = 207;
	// stb r31,608(r1)
	PPC_STORE_U8(ctx.r1.u32 + 608, ctx.r31.u8);
	// li r3,72
	ctx.r3.s64 = 72;
	// stb r5,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r5.u8);
	// li r5,193
	ctx.r5.s64 = 193;
	// stb r3,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r3.u8);
	// li r3,183
	ctx.r3.s64 = 183;
	// li r4,2
	ctx.r4.s64 = 2;
	// stb r5,101(r1)
	PPC_STORE_U8(ctx.r1.u32 + 101, ctx.r5.u8);
	// stb r3,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r3.u8);
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r4,612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 612, ctx.r4.u32);
	// li r3,46
	ctx.r3.s64 = 46;
	// li r4,223
	ctx.r4.s64 = 223;
	// stb r5,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r5.u8);
	// stb r3,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r3.u8);
	// li r5,181
	ctx.r5.s64 = 181;
	// stb r4,99(r1)
	PPC_STORE_U8(ctx.r1.u32 + 99, ctx.r4.u8);
	// li r3,218
	ctx.r3.s64 = 218;
	// li r27,91
	ctx.r27.s64 = 91;
	// stb r5,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r5.u8);
	// li r4,63
	ctx.r4.s64 = 63;
	// stb r3,121(r1)
	PPC_STORE_U8(ctx.r1.u32 + 121, ctx.r3.u8);
	// li r26,117
	ctx.r26.s64 = 117;
	// stb r27,117(r1)
	PPC_STORE_U8(ctx.r1.u32 + 117, ctx.r27.u8);
	// li r5,237
	ctx.r5.s64 = 237;
	// stb r4,109(r1)
	PPC_STORE_U8(ctx.r1.u32 + 109, ctx.r4.u8);
	// li r3,15
	ctx.r3.s64 = 15;
	// stb r26,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r26.u8);
	// stb r27,126(r1)
	PPC_STORE_U8(ctx.r1.u32 + 126, ctx.r27.u8);
	// li r28,53
	ctx.r28.s64 = 53;
	// li r18,22
	ctx.r18.s64 = 22;
	// stb r5,125(r1)
	PPC_STORE_U8(ctx.r1.u32 + 125, ctx.r5.u8);
	// li r19,5
	ctx.r19.s64 = 5;
	// stb r3,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r3.u8);
	// li r25,195
	ctx.r25.s64 = 195;
	// stb r28,107(r1)
	PPC_STORE_U8(ctx.r1.u32 + 107, ctx.r28.u8);
	// li r7,249
	ctx.r7.s64 = 249;
	// stb r18,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r18.u8);
	// li r8,238
	ctx.r8.s64 = 238;
	// stb r19,111(r1)
	PPC_STORE_U8(ctx.r1.u32 + 111, ctx.r19.u8);
	// li r6,204
	ctx.r6.s64 = 204;
	// stb r28,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r28.u8);
	// li r30,232
	ctx.r30.s64 = 232;
	// stb r18,118(r1)
	PPC_STORE_U8(ctx.r1.u32 + 118, ctx.r18.u8);
	// li r17,111
	ctx.r17.s64 = 111;
	// stb r8,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, ctx.r8.u8);
	// li r24,99
	ctx.r24.s64 = 99;
	// stb r6,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r6.u8);
	// li r10,61
	ctx.r10.s64 = 61;
	// stb r30,102(r1)
	PPC_STORE_U8(ctx.r1.u32 + 102, ctx.r30.u8);
	// li r29,156
	ctx.r29.s64 = 156;
	// stb r17,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r17.u8);
	// li r20,16
	ctx.r20.s64 = 16;
	// stb r24,105(r1)
	PPC_STORE_U8(ctx.r1.u32 + 105, ctx.r24.u8);
	// li r9,4
	ctx.r9.s64 = 4;
	// stb r10,110(r1)
	PPC_STORE_U8(ctx.r1.u32 + 110, ctx.r10.u8);
	// li r4,197
	ctx.r4.s64 = 197;
	// stb r29,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r29.u8);
	// li r22,118
	ctx.r22.s64 = 118;
	// stb r20,119(r1)
	PPC_STORE_U8(ctx.r1.u32 + 119, ctx.r20.u8);
	// li r23,245
	ctx.r23.s64 = 245;
	// stb r25,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r25.u8);
	// li r21,174
	ctx.r21.s64 = 174;
	// stb r7,122(r1)
	PPC_STORE_U8(ctx.r1.u32 + 122, ctx.r7.u8);
	// li r27,44
	ctx.r27.s64 = 44;
	// stb r19,123(r1)
	PPC_STORE_U8(ctx.r1.u32 + 123, ctx.r19.u8);
	// li r26,230
	ctx.r26.s64 = 230;
	// stb r9,124(r1)
	PPC_STORE_U8(ctx.r1.u32 + 124, ctx.r9.u8);
	// stb r22,127(r1)
	PPC_STORE_U8(ctx.r1.u32 + 127, ctx.r22.u8);
	// li r5,98
	ctx.r5.s64 = 98;
	// li r3,35
	ctx.r3.s64 = 35;
	// stb r4,129(r1)
	PPC_STORE_U8(ctx.r1.u32 + 129, ctx.r4.u8);
	// stb r23,130(r1)
	PPC_STORE_U8(ctx.r1.u32 + 130, ctx.r23.u8);
	// li r15,199
	ctx.r15.s64 = 199;
	// stb r21,131(r1)
	PPC_STORE_U8(ctx.r1.u32 + 131, ctx.r21.u8);
	// li r14,36
	ctx.r14.s64 = 36;
	// stb r27,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r27.u8);
	// stb r26,133(r1)
	PPC_STORE_U8(ctx.r1.u32 + 133, ctx.r26.u8);
	// stb r25,134(r1)
	PPC_STORE_U8(ctx.r1.u32 + 134, ctx.r25.u8);
	// stb r7,135(r1)
	PPC_STORE_U8(ctx.r1.u32 + 135, ctx.r7.u8);
	// li r26,205
	ctx.r26.s64 = 205;
	// stb r14,138(r1)
	PPC_STORE_U8(ctx.r1.u32 + 138, ctx.r14.u8);
	// li r7,215
	ctx.r7.s64 = 215;
	// stb r15,137(r1)
	PPC_STORE_U8(ctx.r1.u32 + 137, ctx.r15.u8);
	// stb r26,142(r1)
	PPC_STORE_U8(ctx.r1.u32 + 142, ctx.r26.u8);
	// li r26,137
	ctx.r26.s64 = 137;
	// stb r7,139(r1)
	PPC_STORE_U8(ctx.r1.u32 + 139, ctx.r7.u8);
	// li r7,89
	ctx.r7.s64 = 89;
	// stb r26,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r26.u8);
	// li r26,92
	ctx.r26.s64 = 92;
	// stb r7,141(r1)
	PPC_STORE_U8(ctx.r1.u32 + 141, ctx.r7.u8);
	// li r7,217
	ctx.r7.s64 = 217;
	// stb r26,149(r1)
	PPC_STORE_U8(ctx.r1.u32 + 149, ctx.r26.u8);
	// li r26,11
	ctx.r26.s64 = 11;
	// stb r7,143(r1)
	PPC_STORE_U8(ctx.r1.u32 + 143, ctx.r7.u8);
	// li r7,52
	ctx.r7.s64 = 52;
	// stb r26,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r26.u8);
	// li r25,9
	ctx.r25.s64 = 9;
	// stb r7,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r7.u8);
	// li r14,110
	ctx.r14.s64 = 110;
	// stb r25,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r25.u8);
	// li r25,143
	ctx.r25.s64 = 143;
	// stb r14,154(r1)
	PPC_STORE_U8(ctx.r1.u32 + 154, ctx.r14.u8);
	// li r15,82
	ctx.r15.s64 = 82;
	// stb r25,145(r1)
	PPC_STORE_U8(ctx.r1.u32 + 145, ctx.r25.u8);
	// li r25,116
	ctx.r25.s64 = 116;
	// stb r10,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, ctx.r10.u8);
	// li r10,24
	ctx.r10.s64 = 24;
	// stb r4,150(r1)
	PPC_STORE_U8(ctx.r1.u32 + 150, ctx.r4.u8);
	// li r4,133
	ctx.r4.s64 = 133;
	// stb r25,151(r1)
	PPC_STORE_U8(ctx.r1.u32 + 151, ctx.r25.u8);
	// li r27,94
	ctx.r27.s64 = 94;
	// stb r15,153(r1)
	PPC_STORE_U8(ctx.r1.u32 + 153, ctx.r15.u8);
	// li r15,55
	ctx.r15.s64 = 55;
	// stb r10,156(r1)
	PPC_STORE_U8(ctx.r1.u32 + 156, ctx.r10.u8);
	// li r10,43
	ctx.r10.s64 = 43;
	// stb r5,146(r1)
	PPC_STORE_U8(ctx.r1.u32 + 146, ctx.r5.u8);
	// li r7,103
	ctx.r7.s64 = 103;
	// stb r5,157(r1)
	PPC_STORE_U8(ctx.r1.u32 + 157, ctx.r5.u8);
	// li r26,189
	ctx.r26.s64 = 189;
	// stb r24,158(r1)
	PPC_STORE_U8(ctx.r1.u32 + 158, ctx.r24.u8);
	// li r5,240
	ctx.r5.s64 = 240;
	// stb r4,159(r1)
	PPC_STORE_U8(ctx.r1.u32 + 159, ctx.r4.u8);
	// li r24,131
	ctx.r24.s64 = 131;
	// std r11,352(r1)
	PPC_STORE_U64(ctx.r1.u32 + 352, ctx.r11.u64);
	// li r4,149
	ctx.r4.s64 = 149;
	// stb r15,161(r1)
	PPC_STORE_U8(ctx.r1.u32 + 161, ctx.r15.u8);
	// li r11,83
	ctx.r11.s64 = 83;
	// li r15,81
	ctx.r15.s64 = 81;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// std r29,368(r1)
	PPC_STORE_U64(ctx.r1.u32 + 368, ctx.r29.u64);
	// li r29,124
	ctx.r29.s64 = 124;
	// std r30,384(r1)
	PPC_STORE_U64(ctx.r1.u32 + 384, ctx.r30.u64);
	// li r30,19
	ctx.r30.s64 = 19;
	// std r22,440(r1)
	PPC_STORE_U64(ctx.r1.u32 + 440, ctx.r22.u64);
	// li r22,233
	ctx.r22.s64 = 233;
	// lbz r14,80(r1)
	ctx.r14.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r25,81(r1)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// std r31,400(r1)
	PPC_STORE_U64(ctx.r1.u32 + 400, ctx.r31.u64);
	// li r31,255
	ctx.r31.s64 = 255;
	// stb r10,167(r1)
	PPC_STORE_U8(ctx.r1.u32 + 167, ctx.r10.u8);
	// li r10,49
	ctx.r10.s64 = 49;
	// stb r3,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r3.u8);
	// stb r14,155(r1)
	PPC_STORE_U8(ctx.r1.u32 + 155, ctx.r14.u8);
	// li r14,47
	ctx.r14.s64 = 47;
	// stb r25,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r25.u8);
	// li r25,39
	ctx.r25.s64 = 39;
	// stb r14,165(r1)
	PPC_STORE_U8(ctx.r1.u32 + 165, ctx.r14.u8);
	// li r14,136
	ctx.r14.s64 = 136;
	// stb r8,147(r1)
	PPC_STORE_U8(ctx.r1.u32 + 147, ctx.r8.u8);
	// stb r7,162(r1)
	PPC_STORE_U8(ctx.r1.u32 + 162, ctx.r7.u8);
	// stb r20,163(r1)
	PPC_STORE_U8(ctx.r1.u32 + 163, ctx.r20.u8);
	// stb r26,164(r1)
	PPC_STORE_U8(ctx.r1.u32 + 164, ctx.r26.u8);
	// stb r27,166(r1)
	PPC_STORE_U8(ctx.r1.u32 + 166, ctx.r27.u8);
	// stb r5,168(r1)
	PPC_STORE_U8(ctx.r1.u32 + 168, ctx.r5.u8);
	// stb r24,169(r1)
	PPC_STORE_U8(ctx.r1.u32 + 169, ctx.r24.u8);
	// stb r4,170(r1)
	PPC_STORE_U8(ctx.r1.u32 + 170, ctx.r4.u8);
	// stb r15,171(r1)
	PPC_STORE_U8(ctx.r1.u32 + 171, ctx.r15.u8);
	// stb r28,172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 172, ctx.r28.u8);
	// stb r11,173(r1)
	PPC_STORE_U8(ctx.r1.u32 + 173, ctx.r11.u8);
	// stb r23,174(r1)
	PPC_STORE_U8(ctx.r1.u32 + 174, ctx.r23.u8);
	// li r15,227
	ctx.r15.s64 = 227;
	// stb r14,180(r1)
	PPC_STORE_U8(ctx.r1.u32 + 180, ctx.r14.u8);
	// li r11,102
	ctx.r11.s64 = 102;
	// stb r10,183(r1)
	PPC_STORE_U8(ctx.r1.u32 + 183, ctx.r10.u8);
	// stb r15,194(r1)
	PPC_STORE_U8(ctx.r1.u32 + 194, ctx.r15.u8);
	// li r14,252
	ctx.r14.s64 = 252;
	// stb r11,197(r1)
	PPC_STORE_U8(ctx.r1.u32 + 197, ctx.r11.u8);
	// li r15,169
	ctx.r15.s64 = 169;
	// li r11,30
	ctx.r11.s64 = 30;
	// stb r14,199(r1)
	PPC_STORE_U8(ctx.r1.u32 + 199, ctx.r14.u8);
	// li r5,155
	ctx.r5.s64 = 155;
	// stb r15,200(r1)
	PPC_STORE_U8(ctx.r1.u32 + 200, ctx.r15.u8);
	// li r4,50
	ctx.r4.s64 = 50;
	// stb r11,205(r1)
	PPC_STORE_U8(ctx.r1.u32 + 205, ctx.r11.u8);
	// li r10,231
	ctx.r10.s64 = 231;
	// stb r5,186(r1)
	PPC_STORE_U8(ctx.r1.u32 + 186, ctx.r5.u8);
	// stb r4,184(r1)
	PPC_STORE_U8(ctx.r1.u32 + 184, ctx.r4.u8);
	// li r14,72
	ctx.r14.s64 = 72;
	// stb r10,187(r1)
	PPC_STORE_U8(ctx.r1.u32 + 187, ctx.r10.u8);
	// li r15,21
	ctx.r15.s64 = 21;
	// li r11,212
	ctx.r11.s64 = 212;
	// stb r14,202(r1)
	PPC_STORE_U8(ctx.r1.u32 + 202, ctx.r14.u8);
	// li r5,57
	ctx.r5.s64 = 57;
	// stb r15,203(r1)
	PPC_STORE_U8(ctx.r1.u32 + 203, ctx.r15.u8);
	// li r4,192
	ctx.r4.s64 = 192;
	// stb r11,210(r1)
	PPC_STORE_U8(ctx.r1.u32 + 210, ctx.r11.u8);
	// li r10,123
	ctx.r10.s64 = 123;
	// stb r5,185(r1)
	PPC_STORE_U8(ctx.r1.u32 + 185, ctx.r5.u8);
	// stb r4,189(r1)
	PPC_STORE_U8(ctx.r1.u32 + 189, ctx.r4.u8);
	// li r14,104
	ctx.r14.s64 = 104;
	// stb r10,190(r1)
	PPC_STORE_U8(ctx.r1.u32 + 190, ctx.r10.u8);
	// li r15,203
	ctx.r15.s64 = 203;
	// li r11,237
	ctx.r11.s64 = 237;
	// stb r14,207(r1)
	PPC_STORE_U8(ctx.r1.u32 + 207, ctx.r14.u8);
	// li r5,65
	ctx.r5.s64 = 65;
	// stb r15,209(r1)
	PPC_STORE_U8(ctx.r1.u32 + 209, ctx.r15.u8);
	// li r4,77
	ctx.r4.s64 = 77;
	// stb r11,212(r1)
	PPC_STORE_U8(ctx.r1.u32 + 212, ctx.r11.u8);
	// li r10,208
	ctx.r10.s64 = 208;
	// stb r5,188(r1)
	PPC_STORE_U8(ctx.r1.u32 + 188, ctx.r5.u8);
	// li r14,17
	ctx.r14.s64 = 17;
	// stb r4,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r4.u8);
	// li r15,14
	ctx.r15.s64 = 14;
	// stb r10,193(r1)
	PPC_STORE_U8(ctx.r1.u32 + 193, ctx.r10.u8);
	// li r11,234
	ctx.r11.s64 = 234;
	// stb r29,175(r1)
	PPC_STORE_U8(ctx.r1.u32 + 175, ctx.r29.u8);
	// li r23,45
	ctx.r23.s64 = 45;
	// stb r30,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r30.u8);
	// li r4,248
	ctx.r4.s64 = 248;
	// stb r31,181(r1)
	PPC_STORE_U8(ctx.r1.u32 + 181, ctx.r31.u8);
	// li r24,122
	ctx.r24.s64 = 122;
	// stb r25,182(r1)
	PPC_STORE_U8(ctx.r1.u32 + 182, ctx.r25.u8);
	// li r28,38
	ctx.r28.s64 = 38;
	// stb r14,213(r1)
	PPC_STORE_U8(ctx.r1.u32 + 213, ctx.r14.u8);
	// li r10,254
	ctx.r10.s64 = 254;
	// stb r25,214(r1)
	PPC_STORE_U8(ctx.r1.u32 + 214, ctx.r25.u8);
	// li r5,95
	ctx.r5.s64 = 95;
	// stb r15,215(r1)
	PPC_STORE_U8(ctx.r1.u32 + 215, ctx.r15.u8);
	// stb r11,218(r1)
	PPC_STORE_U8(ctx.r1.u32 + 218, ctx.r11.u8);
	// li r31,119
	ctx.r31.s64 = 119;
	// stb r27,177(r1)
	PPC_STORE_U8(ctx.r1.u32 + 177, ctx.r27.u8);
	// li r14,23
	ctx.r14.s64 = 23;
	// stb r22,178(r1)
	PPC_STORE_U8(ctx.r1.u32 + 178, ctx.r22.u8);
	// li r25,85
	ctx.r25.s64 = 85;
	// stb r8,179(r1)
	PPC_STORE_U8(ctx.r1.u32 + 179, ctx.r8.u8);
	// li r15,129
	ctx.r15.s64 = 129;
	// stb r6,191(r1)
	PPC_STORE_U8(ctx.r1.u32 + 191, ctx.r6.u8);
	// li r30,202
	ctx.r30.s64 = 202;
	// stb r9,195(r1)
	PPC_STORE_U8(ctx.r1.u32 + 195, ctx.r9.u8);
	// li r29,114
	ctx.r29.s64 = 114;
	// stb r23,196(r1)
	PPC_STORE_U8(ctx.r1.u32 + 196, ctx.r23.u8);
	// li r11,64
	ctx.r11.s64 = 64;
	// stb r4,198(r1)
	PPC_STORE_U8(ctx.r1.u32 + 198, ctx.r4.u8);
	// stb r27,201(r1)
	PPC_STORE_U8(ctx.r1.u32 + 201, ctx.r27.u8);
	// stb r9,204(r1)
	PPC_STORE_U8(ctx.r1.u32 + 204, ctx.r9.u8);
	// stb r16,206(r1)
	PPC_STORE_U8(ctx.r1.u32 + 206, ctx.r16.u8);
	// stb r24,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r24.u8);
	// stb r28,211(r1)
	PPC_STORE_U8(ctx.r1.u32 + 211, ctx.r28.u8);
	// stb r21,216(r1)
	PPC_STORE_U8(ctx.r1.u32 + 216, ctx.r21.u8);
	// stb r10,217(r1)
	PPC_STORE_U8(ctx.r1.u32 + 217, ctx.r10.u8);
	// stb r5,219(r1)
	PPC_STORE_U8(ctx.r1.u32 + 219, ctx.r5.u8);
	// stb r3,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r3.u8);
	// li r3,27
	ctx.r3.s64 = 27;
	// stb r14,221(r1)
	PPC_STORE_U8(ctx.r1.u32 + 221, ctx.r14.u8);
	// li r14,40
	ctx.r14.s64 = 40;
	// stb r3,230(r1)
	PPC_STORE_U8(ctx.r1.u32 + 230, ctx.r3.u8);
	// li r3,87
	ctx.r3.s64 = 87;
	// stb r9,248(r1)
	PPC_STORE_U8(ctx.r1.u32 + 248, ctx.r9.u8);
	// li r9,89
	ctx.r9.s64 = 89;
	// stb r14,235(r1)
	PPC_STORE_U8(ctx.r1.u32 + 235, ctx.r14.u8);
	// li r14,50
	ctx.r14.s64 = 50;
	// stb r3,236(r1)
	PPC_STORE_U8(ctx.r1.u32 + 236, ctx.r3.u8);
	// li r3,104
	ctx.r3.s64 = 104;
	// stb r5,239(r1)
	PPC_STORE_U8(ctx.r1.u32 + 239, ctx.r5.u8);
	// li r5,173
	ctx.r5.s64 = 173;
	// stb r9,231(r1)
	PPC_STORE_U8(ctx.r1.u32 + 231, ctx.r9.u8);
	// li r9,220
	ctx.r9.s64 = 220;
	// stb r31,220(r1)
	PPC_STORE_U8(ctx.r1.u32 + 220, ctx.r31.u8);
	// li r31,31
	ctx.r31.s64 = 31;
	// stb r11,227(r1)
	PPC_STORE_U8(ctx.r1.u32 + 227, ctx.r11.u8);
	// li r11,121
	ctx.r11.s64 = 121;
	// stb r14,242(r1)
	PPC_STORE_U8(ctx.r1.u32 + 242, ctx.r14.u8);
	// li r14,34
	ctx.r14.s64 = 34;
	// stb r3,244(r1)
	PPC_STORE_U8(ctx.r1.u32 + 244, ctx.r3.u8);
	// li r3,126
	ctx.r3.s64 = 126;
	// stb r15,223(r1)
	PPC_STORE_U8(ctx.r1.u32 + 223, ctx.r15.u8);
	// li r22,234
	ctx.r22.s64 = 234;
	// stb r30,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r30.u8);
	// li r15,117
	ctx.r15.s64 = 117;
	// stb r5,229(r1)
	PPC_STORE_U8(ctx.r1.u32 + 229, ctx.r5.u8);
	// li r5,37
	ctx.r5.s64 = 37;
	// stb r9,237(r1)
	PPC_STORE_U8(ctx.r1.u32 + 237, ctx.r9.u8);
	// li r9,217
	ctx.r9.s64 = 217;
	// li r30,70
	ctx.r30.s64 = 70;
	// stb r29,226(r1)
	PPC_STORE_U8(ctx.r1.u32 + 226, ctx.r29.u8);
	// stb r11,247(r1)
	PPC_STORE_U8(ctx.r1.u32 + 247, ctx.r11.u8);
	// li r29,69
	ctx.r29.s64 = 69;
	// stb r31,249(r1)
	PPC_STORE_U8(ctx.r1.u32 + 249, ctx.r31.u8);
	// li r11,144
	ctx.r11.s64 = 144;
	// stb r14,250(r1)
	PPC_STORE_U8(ctx.r1.u32 + 250, ctx.r14.u8);
	// li r31,73
	ctx.r31.s64 = 73;
	// stb r3,253(r1)
	PPC_STORE_U8(ctx.r1.u32 + 253, ctx.r3.u8);
	// li r14,98
	ctx.r14.s64 = 98;
	// li r3,229
	ctx.r3.s64 = 229;
	// stb r25,222(r1)
	PPC_STORE_U8(ctx.r1.u32 + 222, ctx.r25.u8);
	// stb r22,225(r1)
	PPC_STORE_U8(ctx.r1.u32 + 225, ctx.r22.u8);
	// li r25,201
	ctx.r25.s64 = 201;
	// stb r15,232(r1)
	PPC_STORE_U8(ctx.r1.u32 + 232, ctx.r15.u8);
	// li r15,75
	ctx.r15.s64 = 75;
	// stb r5,233(r1)
	PPC_STORE_U8(ctx.r1.u32 + 233, ctx.r5.u8);
	// li r5,11
	ctx.r5.s64 = 11;
	// stb r9,246(r1)
	PPC_STORE_U8(ctx.r1.u32 + 246, ctx.r9.u8);
	// li r9,106
	ctx.r9.s64 = 106;
	// stb r30,252(r1)
	PPC_STORE_U8(ctx.r1.u32 + 252, ctx.r30.u8);
	// li r22,61
	ctx.r22.s64 = 61;
	// li r30,80
	ctx.r30.s64 = 80;
	// stb r10,245(r1)
	PPC_STORE_U8(ctx.r1.u32 + 245, ctx.r10.u8);
	// stb r3,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r3.u8);
	// li r3,158
	ctx.r3.s64 = 158;
	// stb r29,255(r1)
	PPC_STORE_U8(ctx.r1.u32 + 255, ctx.r29.u8);
	// li r29,81
	ctx.r29.s64 = 81;
	// stb r10,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r10.u8);
	// li r10,37
	ctx.r10.s64 = 37;
	// stb r11,257(r1)
	PPC_STORE_U8(ctx.r1.u32 + 257, ctx.r11.u8);
	// li r11,97
	ctx.r11.s64 = 97;
	// std r8,416(r1)
	PPC_STORE_U64(ctx.r1.u32 + 416, ctx.r8.u64);
	// li r8,102
	ctx.r8.s64 = 102;
	// stb r14,259(r1)
	PPC_STORE_U8(ctx.r1.u32 + 259, ctx.r14.u8);
	// li r14,188
	ctx.r14.s64 = 188;
	// stb r31,261(r1)
	PPC_STORE_U8(ctx.r1.u32 + 261, ctx.r31.u8);
	// li r31,253
	ctx.r31.s64 = 253;
	// stb r16,228(r1)
	PPC_STORE_U8(ctx.r1.u32 + 228, ctx.r16.u8);
	// stb r25,234(r1)
	PPC_STORE_U8(ctx.r1.u32 + 234, ctx.r25.u8);
	// stb r15,238(r1)
	PPC_STORE_U8(ctx.r1.u32 + 238, ctx.r15.u8);
	// stb r5,241(r1)
	PPC_STORE_U8(ctx.r1.u32 + 241, ctx.r5.u8);
	// stb r6,243(r1)
	PPC_STORE_U8(ctx.r1.u32 + 243, ctx.r6.u8);
	// stb r19,251(r1)
	PPC_STORE_U8(ctx.r1.u32 + 251, ctx.r19.u8);
	// stb r9,254(r1)
	PPC_STORE_U8(ctx.r1.u32 + 254, ctx.r9.u8);
	// stb r26,258(r1)
	PPC_STORE_U8(ctx.r1.u32 + 258, ctx.r26.u8);
	// stb r22,260(r1)
	PPC_STORE_U8(ctx.r1.u32 + 260, ctx.r22.u8);
	// stb r18,262(r1)
	PPC_STORE_U8(ctx.r1.u32 + 262, ctx.r18.u8);
	// stb r30,263(r1)
	PPC_STORE_U8(ctx.r1.u32 + 263, ctx.r30.u8);
	// stb r31,276(r1)
	PPC_STORE_U8(ctx.r1.u32 + 276, ctx.r31.u8);
	// li r31,62
	ctx.r31.s64 = 62;
	// lbz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// li r22,230
	ctx.r22.s64 = 230;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// stb r22,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r22.u8);
	// ld r22,440(r1)
	ctx.r22.u64 = PPC_LOAD_U64(ctx.r1.u32 + 440);
	// stb r10,270(r1)
	PPC_STORE_U8(ctx.r1.u32 + 270, ctx.r10.u8);
	// li r10,65
	ctx.r10.s64 = 65;
	// stb r18,273(r1)
	PPC_STORE_U8(ctx.r1.u32 + 273, ctx.r18.u8);
	// li r18,250
	ctx.r18.s64 = 250;
	// stb r11,274(r1)
	PPC_STORE_U8(ctx.r1.u32 + 274, ctx.r11.u8);
	// li r11,247
	ctx.r11.s64 = 247;
	// stb r10,289(r1)
	PPC_STORE_U8(ctx.r1.u32 + 289, ctx.r10.u8);
	// stb r10,296(r1)
	PPC_STORE_U8(ctx.r1.u32 + 296, ctx.r10.u8);
	// li r10,236
	ctx.r10.s64 = 236;
	// stb r14,275(r1)
	PPC_STORE_U8(ctx.r1.u32 + 275, ctx.r14.u8);
	// li r14,132
	ctx.r14.s64 = 132;
	// stb r18,279(r1)
	PPC_STORE_U8(ctx.r1.u32 + 279, ctx.r18.u8);
	// li r18,39
	ctx.r18.s64 = 39;
	// stb r22,302(r1)
	PPC_STORE_U8(ctx.r1.u32 + 302, ctx.r22.u8);
	// ld r31,400(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + 400);
	// stb r8,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r8.u8);
	// li r8,42
	ctx.r8.s64 = 42;
	// stb r10,280(r1)
	PPC_STORE_U8(ctx.r1.u32 + 280, ctx.r10.u8);
	// li r10,60
	ctx.r10.s64 = 60;
	// stb r15,281(r1)
	PPC_STORE_U8(ctx.r1.u32 + 281, ctx.r15.u8);
	// li r15,222
	ctx.r15.s64 = 222;
	// stb r19,282(r1)
	PPC_STORE_U8(ctx.r1.u32 + 282, ctx.r19.u8);
	// li r19,14
	ctx.r19.s64 = 14;
	// stb r11,283(r1)
	PPC_STORE_U8(ctx.r1.u32 + 283, ctx.r11.u8);
	// li r11,59
	ctx.r11.s64 = 59;
	// stb r14,285(r1)
	PPC_STORE_U8(ctx.r1.u32 + 285, ctx.r14.u8);
	// li r14,249
	ctx.r14.s64 = 249;
	// stb r18,287(r1)
	PPC_STORE_U8(ctx.r1.u32 + 287, ctx.r18.u8);
	// li r18,41
	ctx.r18.s64 = 41;
	// stb r30,268(r1)
	PPC_STORE_U8(ctx.r1.u32 + 268, ctx.r30.u8);
	// li r30,159
	ctx.r30.s64 = 159;
	// lbz r22,80(r1)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stb r5,277(r1)
	PPC_STORE_U8(ctx.r1.u32 + 277, ctx.r5.u8);
	// li r5,9
	ctx.r5.s64 = 9;
	// stb r9,278(r1)
	PPC_STORE_U8(ctx.r1.u32 + 278, ctx.r9.u8);
	// li r9,52
	ctx.r9.s64 = 52;
	// stb r29,267(r1)
	PPC_STORE_U8(ctx.r1.u32 + 267, ctx.r29.u8);
	// li r29,6
	ctx.r29.s64 = 6;
	// stb r28,297(r1)
	PPC_STORE_U8(ctx.r1.u32 + 297, ctx.r28.u8);
	// li r28,100
	ctx.r28.s64 = 100;
	// stb r10,290(r1)
	PPC_STORE_U8(ctx.r1.u32 + 290, ctx.r10.u8);
	// li r10,151
	ctx.r10.s64 = 151;
	// stb r24,291(r1)
	PPC_STORE_U8(ctx.r1.u32 + 291, ctx.r24.u8);
	// li r24,71
	ctx.r24.s64 = 71;
	// stb r15,292(r1)
	PPC_STORE_U8(ctx.r1.u32 + 292, ctx.r15.u8);
	// li r15,209
	ctx.r15.s64 = 209;
	// stb r19,294(r1)
	PPC_STORE_U8(ctx.r1.u32 + 294, ctx.r19.u8);
	// li r19,40
	ctx.r19.s64 = 40;
	// stb r11,298(r1)
	PPC_STORE_U8(ctx.r1.u32 + 298, ctx.r11.u8);
	// li r11,32
	ctx.r11.s64 = 32;
	// stb r8,299(r1)
	PPC_STORE_U8(ctx.r1.u32 + 299, ctx.r8.u8);
	// li r8,116
	ctx.r8.s64 = 116;
	// stb r14,300(r1)
	PPC_STORE_U8(ctx.r1.u32 + 300, ctx.r14.u8);
	// li r14,235
	ctx.r14.s64 = 235;
	// stb r25,301(r1)
	PPC_STORE_U8(ctx.r1.u32 + 301, ctx.r25.u8);
	// li r25,63
	ctx.r25.s64 = 63;
	// stb r22,303(r1)
	PPC_STORE_U8(ctx.r1.u32 + 303, ctx.r22.u8);
	// li r22,226
	ctx.r22.s64 = 226;
	// stb r27,304(r1)
	PPC_STORE_U8(ctx.r1.u32 + 304, ctx.r27.u8);
	// li r27,10
	ctx.r27.s64 = 10;
	// stb r18,305(r1)
	PPC_STORE_U8(ctx.r1.u32 + 305, ctx.r18.u8);
	// li r18,112
	ctx.r18.s64 = 112;
	// stb r20,264(r1)
	PPC_STORE_U8(ctx.r1.u32 + 264, ctx.r20.u8);
	// stb r23,265(r1)
	PPC_STORE_U8(ctx.r1.u32 + 265, ctx.r23.u8);
	// stb r3,266(r1)
	PPC_STORE_U8(ctx.r1.u32 + 266, ctx.r3.u8);
	// stb r17,269(r1)
	PPC_STORE_U8(ctx.r1.u32 + 269, ctx.r17.u8);
	// stb r26,271(r1)
	PPC_STORE_U8(ctx.r1.u32 + 271, ctx.r26.u8);
	// stb r7,284(r1)
	PPC_STORE_U8(ctx.r1.u32 + 284, ctx.r7.u8);
	// stb r9,286(r1)
	PPC_STORE_U8(ctx.r1.u32 + 286, ctx.r9.u8);
	// stb r5,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r5.u8);
	// stb r31,293(r1)
	PPC_STORE_U8(ctx.r1.u32 + 293, ctx.r31.u8);
	// stb r21,295(r1)
	PPC_STORE_U8(ctx.r1.u32 + 295, ctx.r21.u8);
	// stb r30,306(r1)
	PPC_STORE_U8(ctx.r1.u32 + 306, ctx.r30.u8);
	// stb r17,307(r1)
	PPC_STORE_U8(ctx.r1.u32 + 307, ctx.r17.u8);
	// stb r24,309(r1)
	PPC_STORE_U8(ctx.r1.u32 + 309, ctx.r24.u8);
	// ld r30,384(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + 384);
	// lbz r24,81(r1)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// stb r6,324(r1)
	PPC_STORE_U8(ctx.r1.u32 + 324, ctx.r6.u8);
	// li r6,25
	ctx.r6.s64 = 25;
	// stb r29,312(r1)
	PPC_STORE_U8(ctx.r1.u32 + 312, ctx.r29.u8);
	// stb r8,319(r1)
	PPC_STORE_U8(ctx.r1.u32 + 319, ctx.r8.u8);
	// stb r11,321(r1)
	PPC_STORE_U8(ctx.r1.u32 + 321, ctx.r11.u8);
	// ld r11,352(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 352);
	// ld r29,368(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + 368);
	// ld r8,416(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 416);
	// stb r5,308(r1)
	PPC_STORE_U8(ctx.r1.u32 + 308, ctx.r5.u8);
	// li r5,78
	ctx.r5.s64 = 78;
	// stb r3,323(r1)
	PPC_STORE_U8(ctx.r1.u32 + 323, ctx.r3.u8);
	// li r3,57
	ctx.r3.s64 = 57;
	// stb r4,342(r1)
	PPC_STORE_U8(ctx.r1.u32 + 342, ctx.r4.u8);
	// li r4,150
	ctx.r4.s64 = 150;
	// stb r28,311(r1)
	PPC_STORE_U8(ctx.r1.u32 + 311, ctx.r28.u8);
	// stb r28,317(r1)
	PPC_STORE_U8(ctx.r1.u32 + 317, ctx.r28.u8);
	// li r28,20
	ctx.r28.s64 = 20;
	// stb r24,318(r1)
	PPC_STORE_U8(ctx.r1.u32 + 318, ctx.r24.u8);
	// li r24,147
	ctx.r24.s64 = 147;
	// stb r25,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r25.u8);
	// li r25,228
	ctx.r25.s64 = 228;
	// stb r22,325(r1)
	PPC_STORE_U8(ctx.r1.u32 + 325, ctx.r22.u8);
	// li r22,203
	ctx.r22.s64 = 203;
	// stb r27,326(r1)
	PPC_STORE_U8(ctx.r1.u32 + 326, ctx.r27.u8);
	// li r27,21
	ctx.r27.s64 = 21;
	// stb r6,328(r1)
	PPC_STORE_U8(ctx.r1.u32 + 328, ctx.r6.u8);
	// li r6,175
	ctx.r6.s64 = 175;
	// stb r30,329(r1)
	PPC_STORE_U8(ctx.r1.u32 + 329, ctx.r30.u8);
	// li r30,227
	ctx.r30.s64 = 227;
	// stb r7,333(r1)
	PPC_STORE_U8(ctx.r1.u32 + 333, ctx.r7.u8);
	// li r7,223
	ctx.r7.s64 = 223;
	// stb r5,331(r1)
	PPC_STORE_U8(ctx.r1.u32 + 331, ctx.r5.u8);
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// stb r3,332(r1)
	PPC_STORE_U8(ctx.r1.u32 + 332, ctx.r3.u8);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// stb r4,334(r1)
	PPC_STORE_U8(ctx.r1.u32 + 334, ctx.r4.u8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stb r15,310(r1)
	PPC_STORE_U8(ctx.r1.u32 + 310, ctx.r15.u8);
	// stb r17,313(r1)
	PPC_STORE_U8(ctx.r1.u32 + 313, ctx.r17.u8);
	// stb r21,314(r1)
	PPC_STORE_U8(ctx.r1.u32 + 314, ctx.r21.u8);
	// stb r19,315(r1)
	PPC_STORE_U8(ctx.r1.u32 + 315, ctx.r19.u8);
	// stb r10,316(r1)
	PPC_STORE_U8(ctx.r1.u32 + 316, ctx.r10.u8);
	// stb r14,322(r1)
	PPC_STORE_U8(ctx.r1.u32 + 322, ctx.r14.u8);
	// stb r18,327(r1)
	PPC_STORE_U8(ctx.r1.u32 + 327, ctx.r18.u8);
	// stb r16,330(r1)
	PPC_STORE_U8(ctx.r1.u32 + 330, ctx.r16.u8);
	// stb r26,335(r1)
	PPC_STORE_U8(ctx.r1.u32 + 335, ctx.r26.u8);
	// stb r28,336(r1)
	PPC_STORE_U8(ctx.r1.u32 + 336, ctx.r28.u8);
	// stb r30,337(r1)
	PPC_STORE_U8(ctx.r1.u32 + 337, ctx.r30.u8);
	// stb r6,338(r1)
	PPC_STORE_U8(ctx.r1.u32 + 338, ctx.r6.u8);
	// stb r23,339(r1)
	PPC_STORE_U8(ctx.r1.u32 + 339, ctx.r23.u8);
	// stb r9,340(r1)
	PPC_STORE_U8(ctx.r1.u32 + 340, ctx.r9.u8);
	// stb r27,341(r1)
	PPC_STORE_U8(ctx.r1.u32 + 341, ctx.r27.u8);
	// stb r20,343(r1)
	PPC_STORE_U8(ctx.r1.u32 + 343, ctx.r20.u8);
	// stb r29,344(r1)
	PPC_STORE_U8(ctx.r1.u32 + 344, ctx.r29.u8);
	// stb r25,345(r1)
	PPC_STORE_U8(ctx.r1.u32 + 345, ctx.r25.u8);
	// stb r8,346(r1)
	PPC_STORE_U8(ctx.r1.u32 + 346, ctx.r8.u8);
	// stb r7,347(r1)
	PPC_STORE_U8(ctx.r1.u32 + 347, ctx.r7.u8);
	// stb r10,348(r1)
	PPC_STORE_U8(ctx.r1.u32 + 348, ctx.r10.u8);
	// stb r24,349(r1)
	PPC_STORE_U8(ctx.r1.u32 + 349, ctx.r24.u8);
	// stb r29,350(r1)
	PPC_STORE_U8(ctx.r1.u32 + 350, ctx.r29.u8);
	// stb r22,351(r1)
	PPC_STORE_U8(ctx.r1.u32 + 351, ctx.r22.u8);
	// stw r11,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r11.u32);
	// stw r11,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r11.u32);
	// stw r11,392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 392, ctx.r11.u32);
	// bl 0x838c1f30
	ctx.lr = 0x82EA9268;
	sub_838C1F30(ctx, base);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82abc660
	ctx.lr = 0x82EA9274;
	sub_82ABC660(ctx, base);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x82ea7310
	ctx.lr = 0x82EA9280;
	sub_82EA7310(ctx, base);
	// lwz r4,384(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82ea9a70
	if (cr6.eq) goto loc_82EA9A70;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// stw r11,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r11.u32);
	// b 0x82ea9a6c
	goto loc_82EA9A6C;
loc_82EA929C:
	// li r7,106
	ctx.r7.s64 = 106;
	// stb r31,608(r1)
	PPC_STORE_U8(ctx.r1.u32 + 608, ctx.r31.u8);
	// li r8,31
	ctx.r8.s64 = 31;
	// stw r11,612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 612, ctx.r11.u32);
	// li r3,33
	ctx.r3.s64 = 33;
	// stb r7,102(r1)
	PPC_STORE_U8(ctx.r1.u32 + 102, ctx.r7.u8);
	// stb r8,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r8.u8);
	// li r7,186
	ctx.r7.s64 = 186;
	// stb r3,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r3.u8);
	// li r8,3
	ctx.r8.s64 = 3;
	// li r3,237
	ctx.r3.s64 = 237;
	// stb r7,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r7.u8);
	// stb r8,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r8.u8);
	// li r7,19
	ctx.r7.s64 = 19;
	// stb r3,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r3.u8);
	// li r8,113
	ctx.r8.s64 = 113;
	// li r3,114
	ctx.r3.s64 = 114;
	// stb r7,109(r1)
	PPC_STORE_U8(ctx.r1.u32 + 109, ctx.r7.u8);
	// stb r8,105(r1)
	PPC_STORE_U8(ctx.r1.u32 + 105, ctx.r8.u8);
	// li r7,178
	ctx.r7.s64 = 178;
	// stb r3,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r3.u8);
	// li r8,136
	ctx.r8.s64 = 136;
	// li r3,84
	ctx.r3.s64 = 84;
	// stb r7,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, ctx.r7.u8);
	// stb r8,111(r1)
	PPC_STORE_U8(ctx.r1.u32 + 111, ctx.r8.u8);
	// li r7,68
	ctx.r7.s64 = 68;
	// stb r3,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r3.u8);
	// li r8,49
	ctx.r8.s64 = 49;
	// li r3,77
	ctx.r3.s64 = 77;
	// stb r7,117(r1)
	PPC_STORE_U8(ctx.r1.u32 + 117, ctx.r7.u8);
	// li r28,138
	ctx.r28.s64 = 138;
	// stb r8,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r8.u8);
	// li r7,65
	ctx.r7.s64 = 65;
	// stb r3,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r3.u8);
	// li r25,22
	ctx.r25.s64 = 22;
	// stb r28,123(r1)
	PPC_STORE_U8(ctx.r1.u32 + 123, ctx.r28.u8);
	// li r27,191
	ctx.r27.s64 = 191;
	// stb r7,124(r1)
	PPC_STORE_U8(ctx.r1.u32 + 124, ctx.r7.u8);
	// li r16,66
	ctx.r16.s64 = 66;
	// stb r25,133(r1)
	PPC_STORE_U8(ctx.r1.u32 + 133, ctx.r25.u8);
	// li r17,130
	ctx.r17.s64 = 130;
	// stb r27,131(r1)
	PPC_STORE_U8(ctx.r1.u32 + 131, ctx.r27.u8);
	// li r10,254
	ctx.r10.s64 = 254;
	// stb r16,101(r1)
	PPC_STORE_U8(ctx.r1.u32 + 101, ctx.r16.u8);
	// li r26,76
	ctx.r26.s64 = 76;
	// stb r16,118(r1)
	PPC_STORE_U8(ctx.r1.u32 + 118, ctx.r16.u8);
	// li r29,156
	ctx.r29.s64 = 156;
	// stb r10,99(r1)
	PPC_STORE_U8(ctx.r1.u32 + 99, ctx.r10.u8);
	// li r30,232
	ctx.r30.s64 = 232;
	// stb r17,119(r1)
	PPC_STORE_U8(ctx.r1.u32 + 119, ctx.r17.u8);
	// li r4,248
	ctx.r4.s64 = 248;
	// stb r29,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r29.u8);
	// li r5,95
	ctx.r5.s64 = 95;
	// stb r30,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, ctx.r30.u8);
	// li r6,142
	ctx.r6.s64 = 142;
	// stb r4,107(r1)
	PPC_STORE_U8(ctx.r1.u32 + 107, ctx.r4.u8);
	// li r23,245
	ctx.r23.s64 = 245;
	// stb r5,110(r1)
	PPC_STORE_U8(ctx.r1.u32 + 110, ctx.r5.u8);
	// li r24,122
	ctx.r24.s64 = 122;
	// stb r6,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r6.u8);
	// li r9,162
	ctx.r9.s64 = 162;
	// stb r17,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r17.u8);
	// li r8,55
	ctx.r8.s64 = 55;
	// stb r23,121(r1)
	PPC_STORE_U8(ctx.r1.u32 + 121, ctx.r23.u8);
	// li r28,53
	ctx.r28.s64 = 53;
	// stb r24,122(r1)
	PPC_STORE_U8(ctx.r1.u32 + 122, ctx.r24.u8);
	// li r3,239
	ctx.r3.s64 = 239;
	// stb r9,125(r1)
	PPC_STORE_U8(ctx.r1.u32 + 125, ctx.r9.u8);
	// stb r28,126(r1)
	PPC_STORE_U8(ctx.r1.u32 + 126, ctx.r28.u8);
	// li r18,141
	ctx.r18.s64 = 141;
	// stb r26,127(r1)
	PPC_STORE_U8(ctx.r1.u32 + 127, ctx.r26.u8);
	// li r19,29
	ctx.r19.s64 = 29;
	// stb r3,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r3.u8);
	// li r20,161
	ctx.r20.s64 = 161;
	// stb r26,129(r1)
	PPC_STORE_U8(ctx.r1.u32 + 129, ctx.r26.u8);
	// li r7,103
	ctx.r7.s64 = 103;
	// stb r10,130(r1)
	PPC_STORE_U8(ctx.r1.u32 + 130, ctx.r10.u8);
	// li r27,115
	ctx.r27.s64 = 115;
	// stb r8,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r8.u8);
	// li r22,118
	ctx.r22.s64 = 118;
	// li r25,139
	ctx.r25.s64 = 139;
	// stb r9,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, ctx.r9.u8);
	// li r9,64
	ctx.r9.s64 = 64;
	// li r15,174
	ctx.r15.s64 = 174;
	// stb r25,134(r1)
	PPC_STORE_U8(ctx.r1.u32 + 134, ctx.r25.u8);
	// stb r9,137(r1)
	PPC_STORE_U8(ctx.r1.u32 + 137, ctx.r9.u8);
	// li r9,89
	ctx.r9.s64 = 89;
	// stb r15,147(r1)
	PPC_STORE_U8(ctx.r1.u32 + 147, ctx.r15.u8);
	// li r15,16
	ctx.r15.s64 = 16;
	// stb r9,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r9.u8);
	// li r9,188
	ctx.r9.s64 = 188;
	// stb r15,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r15.u8);
	// li r21,163
	ctx.r21.s64 = 163;
	// stb r9,143(r1)
	PPC_STORE_U8(ctx.r1.u32 + 143, ctx.r9.u8);
	// li r9,160
	ctx.r9.s64 = 160;
	// stb r21,138(r1)
	PPC_STORE_U8(ctx.r1.u32 + 138, ctx.r21.u8);
	// li r25,157
	ctx.r25.s64 = 157;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// li r21,125
	ctx.r21.s64 = 125;
	// stb r8,155(r1)
	PPC_STORE_U8(ctx.r1.u32 + 155, ctx.r8.u8);
	// li r8,17
	ctx.r8.s64 = 17;
	// stb r25,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r25.u8);
	// li r25,100
	ctx.r25.s64 = 100;
	// stb r21,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r21.u8);
	// li r21,192
	ctx.r21.s64 = 192;
	// std r31,384(r1)
	PPC_STORE_U64(ctx.r1.u32 + 384, ctx.r31.u64);
	// li r14,199
	ctx.r14.s64 = 199;
	// stb r8,135(r1)
	PPC_STORE_U8(ctx.r1.u32 + 135, ctx.r8.u8);
	// li r8,42
	ctx.r8.s64 = 42;
	// stb r25,142(r1)
	PPC_STORE_U8(ctx.r1.u32 + 142, ctx.r25.u8);
	// li r25,81
	ctx.r25.s64 = 81;
	// stb r21,150(r1)
	PPC_STORE_U8(ctx.r1.u32 + 150, ctx.r21.u8);
	// li r21,86
	ctx.r21.s64 = 86;
	// std r24,352(r1)
	PPC_STORE_U64(ctx.r1.u32 + 352, ctx.r24.u64);
	// li r3,35
	ctx.r3.s64 = 35;
	// stb r8,139(r1)
	PPC_STORE_U8(ctx.r1.u32 + 139, ctx.r8.u8);
	// li r8,251
	ctx.r8.s64 = 251;
	// stb r25,151(r1)
	PPC_STORE_U8(ctx.r1.u32 + 151, ctx.r25.u8);
	// li r25,244
	ctx.r25.s64 = 244;
	// stb r21,162(r1)
	PPC_STORE_U8(ctx.r1.u32 + 162, ctx.r21.u8);
	// li r21,45
	ctx.r21.s64 = 45;
	// stb r22,156(r1)
	PPC_STORE_U8(ctx.r1.u32 + 156, ctx.r22.u8);
	// li r15,119
	ctx.r15.s64 = 119;
	// stb r22,161(r1)
	PPC_STORE_U8(ctx.r1.u32 + 161, ctx.r22.u8);
	// li r22,87
	ctx.r22.s64 = 87;
	// stb r14,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r14.u8);
	// li r14,67
	ctx.r14.s64 = 67;
	// std r26,400(r1)
	PPC_STORE_U64(ctx.r1.u32 + 400, ctx.r26.u64);
	// li r26,79
	ctx.r26.s64 = 79;
	// stb r8,145(r1)
	PPC_STORE_U8(ctx.r1.u32 + 145, ctx.r8.u8);
	// li r9,4
	ctx.r9.s64 = 4;
	// lbz r24,81(r1)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// li r8,238
	ctx.r8.s64 = 238;
	// stb r19,146(r1)
	PPC_STORE_U8(ctx.r1.u32 + 146, ctx.r19.u8);
	// std r19,368(r1)
	PPC_STORE_U64(ctx.r1.u32 + 368, ctx.r19.u64);
	// li r19,152
	ctx.r19.s64 = 152;
	// lbz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// std r30,416(r1)
	PPC_STORE_U64(ctx.r1.u32 + 416, ctx.r30.u64);
	// li r30,171
	ctx.r30.s64 = 171;
	// stb r24,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r24.u8);
	// li r24,194
	ctx.r24.s64 = 194;
	// stb r25,163(r1)
	PPC_STORE_U8(ctx.r1.u32 + 163, ctx.r25.u8);
	// li r25,201
	ctx.r25.s64 = 201;
	// stb r21,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r21.u8);
	// li r21,182
	ctx.r21.s64 = 182;
	// stb r31,157(r1)
	PPC_STORE_U8(ctx.r1.u32 + 157, ctx.r31.u8);
	// li r31,145
	ctx.r31.s64 = 145;
	// stb r18,141(r1)
	PPC_STORE_U8(ctx.r1.u32 + 141, ctx.r18.u8);
	// stb r20,149(r1)
	PPC_STORE_U8(ctx.r1.u32 + 149, ctx.r20.u8);
	// stb r7,153(r1)
	PPC_STORE_U8(ctx.r1.u32 + 153, ctx.r7.u8);
	// stb r27,154(r1)
	PPC_STORE_U8(ctx.r1.u32 + 154, ctx.r27.u8);
	// stb r6,158(r1)
	PPC_STORE_U8(ctx.r1.u32 + 158, ctx.r6.u8);
	// stb r3,159(r1)
	PPC_STORE_U8(ctx.r1.u32 + 159, ctx.r3.u8);
	// stb r14,164(r1)
	PPC_STORE_U8(ctx.r1.u32 + 164, ctx.r14.u8);
	// stb r15,165(r1)
	PPC_STORE_U8(ctx.r1.u32 + 165, ctx.r15.u8);
	// stb r22,166(r1)
	PPC_STORE_U8(ctx.r1.u32 + 166, ctx.r22.u8);
	// stb r28,167(r1)
	PPC_STORE_U8(ctx.r1.u32 + 167, ctx.r28.u8);
	// stb r6,168(r1)
	PPC_STORE_U8(ctx.r1.u32 + 168, ctx.r6.u8);
	// stb r26,169(r1)
	PPC_STORE_U8(ctx.r1.u32 + 169, ctx.r26.u8);
	// stb r3,170(r1)
	PPC_STORE_U8(ctx.r1.u32 + 170, ctx.r3.u8);
	// stb r7,171(r1)
	PPC_STORE_U8(ctx.r1.u32 + 171, ctx.r7.u8);
	// stb r31,172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 172, ctx.r31.u8);
	// stb r23,190(r1)
	PPC_STORE_U8(ctx.r1.u32 + 190, ctx.r23.u8);
	// li r23,147
	ctx.r23.s64 = 147;
	// lbz r14,80(r1)
	ctx.r14.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// li r31,183
	ctx.r31.s64 = 183;
	// stb r23,199(r1)
	PPC_STORE_U8(ctx.r1.u32 + 199, ctx.r23.u8);
	// li r26,207
	ctx.r26.s64 = 207;
	// stb r23,202(r1)
	PPC_STORE_U8(ctx.r1.u32 + 202, ctx.r23.u8);
	// li r23,160
	ctx.r23.s64 = 160;
	// stb r17,173(r1)
	PPC_STORE_U8(ctx.r1.u32 + 173, ctx.r17.u8);
	// li r17,252
	ctx.r17.s64 = 252;
	// stb r23,187(r1)
	PPC_STORE_U8(ctx.r1.u32 + 187, ctx.r23.u8);
	// li r23,71
	ctx.r23.s64 = 71;
	// stb r30,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r30.u8);
	// li r30,93
	ctx.r30.s64 = 93;
	// stb r14,181(r1)
	PPC_STORE_U8(ctx.r1.u32 + 181, ctx.r14.u8);
	// li r14,2
	ctx.r14.s64 = 2;
	// stb r23,195(r1)
	PPC_STORE_U8(ctx.r1.u32 + 195, ctx.r23.u8);
	// li r23,120
	ctx.r23.s64 = 120;
	// stb r17,191(r1)
	PPC_STORE_U8(ctx.r1.u32 + 191, ctx.r17.u8);
	// li r17,18
	ctx.r17.s64 = 18;
	// stb r14,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r14.u8);
	// li r14,233
	ctx.r14.s64 = 233;
	// stb r30,196(r1)
	PPC_STORE_U8(ctx.r1.u32 + 196, ctx.r30.u8);
	// li r30,155
	ctx.r30.s64 = 155;
	// stb r23,203(r1)
	PPC_STORE_U8(ctx.r1.u32 + 203, ctx.r23.u8);
	// li r23,116
	ctx.r23.s64 = 116;
	// stb r29,174(r1)
	PPC_STORE_U8(ctx.r1.u32 + 174, ctx.r29.u8);
	// li r29,26
	ctx.r29.s64 = 26;
	// stb r31,194(r1)
	PPC_STORE_U8(ctx.r1.u32 + 194, ctx.r31.u8);
	// li r31,206
	ctx.r31.s64 = 206;
	// stb r19,175(r1)
	PPC_STORE_U8(ctx.r1.u32 + 175, ctx.r19.u8);
	// li r19,150
	ctx.r19.s64 = 150;
	// stb r6,178(r1)
	PPC_STORE_U8(ctx.r1.u32 + 178, ctx.r6.u8);
	// li r6,243
	ctx.r6.s64 = 243;
	// stb r24,180(r1)
	PPC_STORE_U8(ctx.r1.u32 + 180, ctx.r24.u8);
	// li r24,220
	ctx.r24.s64 = 220;
	// stb r17,197(r1)
	PPC_STORE_U8(ctx.r1.u32 + 197, ctx.r17.u8);
	// li r17,83
	ctx.r17.s64 = 83;
	// stb r14,198(r1)
	PPC_STORE_U8(ctx.r1.u32 + 198, ctx.r14.u8);
	// li r14,139
	ctx.r14.s64 = 139;
	// stb r30,204(r1)
	PPC_STORE_U8(ctx.r1.u32 + 204, ctx.r30.u8);
	// li r30,46
	ctx.r30.s64 = 46;
	// stb r23,212(r1)
	PPC_STORE_U8(ctx.r1.u32 + 212, ctx.r23.u8);
	// li r23,93
	ctx.r23.s64 = 93;
	// stb r29,186(r1)
	PPC_STORE_U8(ctx.r1.u32 + 186, ctx.r29.u8);
	// li r28,121
	ctx.r28.s64 = 121;
	// stb r31,205(r1)
	PPC_STORE_U8(ctx.r1.u32 + 205, ctx.r31.u8);
	// li r29,209
	ctx.r29.s64 = 209;
	// li r31,144
	ctx.r31.s64 = 144;
	// stb r22,179(r1)
	PPC_STORE_U8(ctx.r1.u32 + 179, ctx.r22.u8);
	// stb r6,185(r1)
	PPC_STORE_U8(ctx.r1.u32 + 185, ctx.r6.u8);
	// li r6,204
	ctx.r6.s64 = 204;
	// stb r14,207(r1)
	PPC_STORE_U8(ctx.r1.u32 + 207, ctx.r14.u8);
	// li r14,246
	ctx.r14.s64 = 246;
	// stb r17,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r17.u8);
	// li r17,249
	ctx.r17.s64 = 249;
	// stb r24,209(r1)
	PPC_STORE_U8(ctx.r1.u32 + 209, ctx.r24.u8);
	// li r24,169
	ctx.r24.s64 = 169;
	// std r22,440(r1)
	PPC_STORE_U64(ctx.r1.u32 + 440, ctx.r22.u64);
	// li r22,197
	ctx.r22.s64 = 197;
	// stb r26,211(r1)
	PPC_STORE_U8(ctx.r1.u32 + 211, ctx.r26.u8);
	// li r26,183
	ctx.r26.s64 = 183;
	// stb r30,213(r1)
	PPC_STORE_U8(ctx.r1.u32 + 213, ctx.r30.u8);
	// li r30,200
	ctx.r30.s64 = 200;
	// stb r19,214(r1)
	PPC_STORE_U8(ctx.r1.u32 + 214, ctx.r19.u8);
	// li r19,171
	ctx.r19.s64 = 171;
	// stb r23,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r23.u8);
	// li r23,159
	ctx.r23.s64 = 159;
	// stb r9,177(r1)
	PPC_STORE_U8(ctx.r1.u32 + 177, ctx.r9.u8);
	// stb r8,182(r1)
	PPC_STORE_U8(ctx.r1.u32 + 182, ctx.r8.u8);
	// stb r21,183(r1)
	PPC_STORE_U8(ctx.r1.u32 + 183, ctx.r21.u8);
	// stb r25,184(r1)
	PPC_STORE_U8(ctx.r1.u32 + 184, ctx.r25.u8);
	// stb r11,188(r1)
	PPC_STORE_U8(ctx.r1.u32 + 188, ctx.r11.u8);
	// stb r27,189(r1)
	PPC_STORE_U8(ctx.r1.u32 + 189, ctx.r27.u8);
	// stb r28,193(r1)
	PPC_STORE_U8(ctx.r1.u32 + 193, ctx.r28.u8);
	// stb r9,200(r1)
	PPC_STORE_U8(ctx.r1.u32 + 200, ctx.r9.u8);
	// stb r4,201(r1)
	PPC_STORE_U8(ctx.r1.u32 + 201, ctx.r4.u8);
	// stb r29,206(r1)
	PPC_STORE_U8(ctx.r1.u32 + 206, ctx.r29.u8);
	// stb r11,210(r1)
	PPC_STORE_U8(ctx.r1.u32 + 210, ctx.r11.u8);
	// stb r10,215(r1)
	PPC_STORE_U8(ctx.r1.u32 + 215, ctx.r10.u8);
	// stb r31,216(r1)
	PPC_STORE_U8(ctx.r1.u32 + 216, ctx.r31.u8);
	// stb r25,231(r1)
	PPC_STORE_U8(ctx.r1.u32 + 231, ctx.r25.u8);
	// li r25,34
	ctx.r25.s64 = 34;
	// stb r17,220(r1)
	PPC_STORE_U8(ctx.r1.u32 + 220, ctx.r17.u8);
	// li r31,5
	ctx.r31.s64 = 5;
	// stb r25,236(r1)
	PPC_STORE_U8(ctx.r1.u32 + 236, ctx.r25.u8);
	// li r25,214
	ctx.r25.s64 = 214;
	// lbz r17,80(r1)
	ctx.r17.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stb r25,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r25.u8);
	// li r25,195
	ctx.r25.s64 = 195;
	// stb r18,219(r1)
	PPC_STORE_U8(ctx.r1.u32 + 219, ctx.r18.u8);
	// stb r18,239(r1)
	PPC_STORE_U8(ctx.r1.u32 + 239, ctx.r18.u8);
	// li r18,84
	ctx.r18.s64 = 84;
	// stb r28,226(r1)
	PPC_STORE_U8(ctx.r1.u32 + 226, ctx.r28.u8);
	// stb r28,242(r1)
	PPC_STORE_U8(ctx.r1.u32 + 242, ctx.r28.u8);
	// li r28,210
	ctx.r28.s64 = 210;
	// stb r18,235(r1)
	PPC_STORE_U8(ctx.r1.u32 + 235, ctx.r18.u8);
	// li r18,165
	ctx.r18.s64 = 165;
	// stb r14,217(r1)
	PPC_STORE_U8(ctx.r1.u32 + 217, ctx.r14.u8);
	// li r14,219
	ctx.r14.s64 = 219;
	// stb r17,222(r1)
	PPC_STORE_U8(ctx.r1.u32 + 222, ctx.r17.u8);
	// li r17,102
	ctx.r17.s64 = 102;
	// stb r30,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r30.u8);
	// li r30,52
	ctx.r30.s64 = 52;
	// stb r16,263(r1)
	PPC_STORE_U8(ctx.r1.u32 + 263, ctx.r16.u8);
	// li r16,137
	ctx.r16.s64 = 137;
	// stb r28,245(r1)
	PPC_STORE_U8(ctx.r1.u32 + 245, ctx.r28.u8);
	// stb r28,246(r1)
	PPC_STORE_U8(ctx.r1.u32 + 246, ctx.r28.u8);
	// li r28,31
	ctx.r28.s64 = 31;
	// stb r18,255(r1)
	PPC_STORE_U8(ctx.r1.u32 + 255, ctx.r18.u8);
	// stb r24,218(r1)
	PPC_STORE_U8(ctx.r1.u32 + 218, ctx.r24.u8);
	// li r24,222
	ctx.r24.s64 = 222;
	// stb r26,221(r1)
	PPC_STORE_U8(ctx.r1.u32 + 221, ctx.r26.u8);
	// li r26,33
	ctx.r26.s64 = 33;
	// stb r22,223(r1)
	PPC_STORE_U8(ctx.r1.u32 + 223, ctx.r22.u8);
	// li r22,169
	ctx.r22.s64 = 169;
	// stb r28,248(r1)
	PPC_STORE_U8(ctx.r1.u32 + 248, ctx.r28.u8);
	// stb r28,254(r1)
	PPC_STORE_U8(ctx.r1.u32 + 254, ctx.r28.u8);
	// li r28,112
	ctx.r28.s64 = 112;
	// stb r14,229(r1)
	PPC_STORE_U8(ctx.r1.u32 + 229, ctx.r14.u8);
	// li r14,80
	ctx.r14.s64 = 80;
	// stb r31,230(r1)
	PPC_STORE_U8(ctx.r1.u32 + 230, ctx.r31.u8);
	// li r31,226
	ctx.r31.s64 = 226;
	// lbz r18,80(r1)
	ctx.r18.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stb r17,232(r1)
	PPC_STORE_U8(ctx.r1.u32 + 232, ctx.r17.u8);
	// li r17,26
	ctx.r17.s64 = 26;
	// stb r16,233(r1)
	PPC_STORE_U8(ctx.r1.u32 + 233, ctx.r16.u8);
	// li r16,132
	ctx.r16.s64 = 132;
	// stb r30,234(r1)
	PPC_STORE_U8(ctx.r1.u32 + 234, ctx.r30.u8);
	// li r30,67
	ctx.r30.s64 = 67;
	// stb r19,225(r1)
	PPC_STORE_U8(ctx.r1.u32 + 225, ctx.r19.u8);
	// li r19,97
	ctx.r19.s64 = 97;
	// stb r15,257(r1)
	PPC_STORE_U8(ctx.r1.u32 + 257, ctx.r15.u8);
	// li r15,54
	ctx.r15.s64 = 54;
	// stb r26,237(r1)
	PPC_STORE_U8(ctx.r1.u32 + 237, ctx.r26.u8);
	// li r26,72
	ctx.r26.s64 = 72;
	// stb r28,241(r1)
	PPC_STORE_U8(ctx.r1.u32 + 241, ctx.r28.u8);
	// li r28,126
	ctx.r28.s64 = 126;
	// stb r24,243(r1)
	PPC_STORE_U8(ctx.r1.u32 + 243, ctx.r24.u8);
	// li r24,136
	ctx.r24.s64 = 136;
	// stb r16,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r16.u8);
	// li r16,198
	ctx.r16.s64 = 198;
	// stb r14,244(r1)
	PPC_STORE_U8(ctx.r1.u32 + 244, ctx.r14.u8);
	// li r14,231
	ctx.r14.s64 = 231;
	// stb r17,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r17.u8);
	// li r17,190
	ctx.r17.s64 = 190;
	// stb r31,247(r1)
	PPC_STORE_U8(ctx.r1.u32 + 247, ctx.r31.u8);
	// li r31,192
	ctx.r31.s64 = 192;
	// stb r22,249(r1)
	PPC_STORE_U8(ctx.r1.u32 + 249, ctx.r22.u8);
	// li r22,63
	ctx.r22.s64 = 63;
	// stb r30,252(r1)
	PPC_STORE_U8(ctx.r1.u32 + 252, ctx.r30.u8);
	// li r30,188
	ctx.r30.s64 = 188;
	// stb r18,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r18.u8);
	// li r18,108
	ctx.r18.s64 = 108;
	// stb r6,227(r1)
	PPC_STORE_U8(ctx.r1.u32 + 227, ctx.r6.u8);
	// stb r8,228(r1)
	PPC_STORE_U8(ctx.r1.u32 + 228, ctx.r8.u8);
	// stb r5,238(r1)
	PPC_STORE_U8(ctx.r1.u32 + 238, ctx.r5.u8);
	// stb r15,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r15.u8);
	// stb r20,250(r1)
	PPC_STORE_U8(ctx.r1.u32 + 250, ctx.r20.u8);
	// stb r23,251(r1)
	PPC_STORE_U8(ctx.r1.u32 + 251, ctx.r23.u8);
	// stb r19,253(r1)
	PPC_STORE_U8(ctx.r1.u32 + 253, ctx.r19.u8);
	// stb r21,258(r1)
	PPC_STORE_U8(ctx.r1.u32 + 258, ctx.r21.u8);
	// stb r26,259(r1)
	PPC_STORE_U8(ctx.r1.u32 + 259, ctx.r26.u8);
	// li r15,43
	ctx.r15.s64 = 43;
	// lbz r26,81(r1)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// stb r6,299(r1)
	PPC_STORE_U8(ctx.r1.u32 + 299, ctx.r6.u8);
	// li r6,114
	ctx.r6.s64 = 114;
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// li r28,38
	ctx.r28.s64 = 38;
	// stb r6,281(r1)
	PPC_STORE_U8(ctx.r1.u32 + 281, ctx.r6.u8);
	// li r6,54
	ctx.r6.s64 = 54;
	// stb r24,269(r1)
	PPC_STORE_U8(ctx.r1.u32 + 269, ctx.r24.u8);
	// stb r26,260(r1)
	PPC_STORE_U8(ctx.r1.u32 + 260, ctx.r26.u8);
	// lbz r26,82(r1)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r6,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r6.u8);
	// li r6,110
	ctx.r6.s64 = 110;
	// ld r24,352(r1)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r1.u32 + 352);
	// stb r5,268(r1)
	PPC_STORE_U8(ctx.r1.u32 + 268, ctx.r5.u8);
	// li r5,200
	ctx.r5.s64 = 200;
	// stb r31,265(r1)
	PPC_STORE_U8(ctx.r1.u32 + 265, ctx.r31.u8);
	// li r31,181
	ctx.r31.s64 = 181;
	// stb r26,262(r1)
	PPC_STORE_U8(ctx.r1.u32 + 262, ctx.r26.u8);
	// stb r30,271(r1)
	PPC_STORE_U8(ctx.r1.u32 + 271, ctx.r30.u8);
	// ld r30,416(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + 416);
	// ld r19,368(r1)
	ctx.r19.u64 = PPC_LOAD_U64(ctx.r1.u32 + 368);
	// stb r21,266(r1)
	PPC_STORE_U8(ctx.r1.u32 + 266, ctx.r21.u8);
	// li r21,15
	ctx.r21.s64 = 15;
	// stb r14,267(r1)
	PPC_STORE_U8(ctx.r1.u32 + 267, ctx.r14.u8);
	// li r14,80
	ctx.r14.s64 = 80;
	// stb r17,273(r1)
	PPC_STORE_U8(ctx.r1.u32 + 273, ctx.r17.u8);
	// stb r24,275(r1)
	PPC_STORE_U8(ctx.r1.u32 + 275, ctx.r24.u8);
	// li r24,13
	ctx.r24.s64 = 13;
	// stb r5,277(r1)
	PPC_STORE_U8(ctx.r1.u32 + 277, ctx.r5.u8);
	// li r5,193
	ctx.r5.s64 = 193;
	// stb r23,278(r1)
	PPC_STORE_U8(ctx.r1.u32 + 278, ctx.r23.u8);
	// stb r23,282(r1)
	PPC_STORE_U8(ctx.r1.u32 + 282, ctx.r23.u8);
	// li r23,154
	ctx.r23.s64 = 154;
	// lbz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stb r17,283(r1)
	PPC_STORE_U8(ctx.r1.u32 + 283, ctx.r17.u8);
	// li r17,226
	ctx.r17.s64 = 226;
	// stb r31,291(r1)
	PPC_STORE_U8(ctx.r1.u32 + 291, ctx.r31.u8);
	// li r31,225
	ctx.r31.s64 = 225;
	// stb r27,261(r1)
	PPC_STORE_U8(ctx.r1.u32 + 261, ctx.r27.u8);
	// stb r16,270(r1)
	PPC_STORE_U8(ctx.r1.u32 + 270, ctx.r16.u8);
	// stb r26,264(r1)
	PPC_STORE_U8(ctx.r1.u32 + 264, ctx.r26.u8);
	// lbz r26,82(r1)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r22,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r22.u8);
	// li r22,177
	ctx.r22.s64 = 177;
	// stb r11,276(r1)
	PPC_STORE_U8(ctx.r1.u32 + 276, ctx.r11.u8);
	// stb r24,284(r1)
	PPC_STORE_U8(ctx.r1.u32 + 284, ctx.r24.u8);
	// li r24,176
	ctx.r24.s64 = 176;
	// stb r5,285(r1)
	PPC_STORE_U8(ctx.r1.u32 + 285, ctx.r5.u8);
	// li r5,179
	ctx.r5.s64 = 179;
	// stb r30,286(r1)
	PPC_STORE_U8(ctx.r1.u32 + 286, ctx.r30.u8);
	// stb r21,287(r1)
	PPC_STORE_U8(ctx.r1.u32 + 287, ctx.r21.u8);
	// li r21,17
	ctx.r21.s64 = 17;
	// stb r14,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r14.u8);
	// li r14,77
	ctx.r14.s64 = 77;
	// stb r16,289(r1)
	PPC_STORE_U8(ctx.r1.u32 + 289, ctx.r16.u8);
	// li r16,69
	ctx.r16.s64 = 69;
	// stb r26,290(r1)
	PPC_STORE_U8(ctx.r1.u32 + 290, ctx.r26.u8);
	// li r26,167
	ctx.r26.s64 = 167;
	// stb r3,292(r1)
	PPC_STORE_U8(ctx.r1.u32 + 292, ctx.r3.u8);
	// li r3,220
	ctx.r3.s64 = 220;
	// stb r30,294(r1)
	PPC_STORE_U8(ctx.r1.u32 + 294, ctx.r30.u8);
	// li r30,47
	ctx.r30.s64 = 47;
	// stb r27,295(r1)
	PPC_STORE_U8(ctx.r1.u32 + 295, ctx.r27.u8);
	// li r27,37
	ctx.r27.s64 = 37;
	// stb r23,296(r1)
	PPC_STORE_U8(ctx.r1.u32 + 296, ctx.r23.u8);
	// li r23,120
	ctx.r23.s64 = 120;
	// std r11,368(r1)
	PPC_STORE_U64(ctx.r1.u32 + 368, ctx.r11.u64);
	// li r11,135
	ctx.r11.s64 = 135;
	// stb r17,298(r1)
	PPC_STORE_U8(ctx.r1.u32 + 298, ctx.r17.u8);
	// li r17,241
	ctx.r17.s64 = 241;
	// std r20,416(r1)
	PPC_STORE_U64(ctx.r1.u32 + 416, ctx.r20.u64);
	// li r20,222
	ctx.r20.s64 = 222;
	// stb r29,274(r1)
	PPC_STORE_U8(ctx.r1.u32 + 274, ctx.r29.u8);
	// stb r25,279(r1)
	PPC_STORE_U8(ctx.r1.u32 + 279, ctx.r25.u8);
	// stb r18,280(r1)
	PPC_STORE_U8(ctx.r1.u32 + 280, ctx.r18.u8);
	// stb r19,293(r1)
	PPC_STORE_U8(ctx.r1.u32 + 293, ctx.r19.u8);
	// stb r28,297(r1)
	PPC_STORE_U8(ctx.r1.u32 + 297, ctx.r28.u8);
	// stb r15,300(r1)
	PPC_STORE_U8(ctx.r1.u32 + 300, ctx.r15.u8);
	// stb r31,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r31.u8);
	// std r28,352(r1)
	PPC_STORE_U64(ctx.r1.u32 + 352, ctx.r28.u64);
	// li r28,191
	ctx.r28.s64 = 191;
	// stb r4,303(r1)
	PPC_STORE_U8(ctx.r1.u32 + 303, ctx.r4.u8);
	// li r4,150
	ctx.r4.s64 = 150;
	// stb r5,304(r1)
	PPC_STORE_U8(ctx.r1.u32 + 304, ctx.r5.u8);
	// li r5,82
	ctx.r5.s64 = 82;
	// stb r3,313(r1)
	PPC_STORE_U8(ctx.r1.u32 + 313, ctx.r3.u8);
	// li r3,132
	ctx.r3.s64 = 132;
	// stb r4,326(r1)
	PPC_STORE_U8(ctx.r1.u32 + 326, ctx.r4.u8);
	// li r4,217
	ctx.r4.s64 = 217;
	// stb r9,309(r1)
	PPC_STORE_U8(ctx.r1.u32 + 309, ctx.r9.u8);
	// li r9,36
	ctx.r9.s64 = 36;
	// stb r7,330(r1)
	PPC_STORE_U8(ctx.r1.u32 + 330, ctx.r7.u8);
	// li r7,151
	ctx.r7.s64 = 151;
	// stb r24,308(r1)
	PPC_STORE_U8(ctx.r1.u32 + 308, ctx.r24.u8);
	// stb r26,314(r1)
	PPC_STORE_U8(ctx.r1.u32 + 314, ctx.r26.u8);
	// stb r22,316(r1)
	PPC_STORE_U8(ctx.r1.u32 + 316, ctx.r22.u8);
	// stb r11,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r11.u8);
	// stb r20,322(r1)
	PPC_STORE_U8(ctx.r1.u32 + 322, ctx.r20.u8);
	// stb r28,323(r1)
	PPC_STORE_U8(ctx.r1.u32 + 323, ctx.r28.u8);
	// ld r31,384(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + 384);
	// ld r26,400(r1)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + 400);
	// ld r11,368(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 368);
	// lbz r24,82(r1)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// ld r22,440(r1)
	ctx.r22.u64 = PPC_LOAD_U64(ctx.r1.u32 + 440);
	// ld r20,416(r1)
	ctx.r20.u64 = PPC_LOAD_U64(ctx.r1.u32 + 416);
	// stb r5,328(r1)
	PPC_STORE_U8(ctx.r1.u32 + 328, ctx.r5.u8);
	// li r5,91
	ctx.r5.s64 = 91;
	// ld r28,352(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + 352);
	// stb r4,329(r1)
	PPC_STORE_U8(ctx.r1.u32 + 329, ctx.r4.u8);
	// li r4,230
	ctx.r4.s64 = 230;
	// stb r3,327(r1)
	PPC_STORE_U8(ctx.r1.u32 + 327, ctx.r3.u8);
	// li r3,205
	ctx.r3.s64 = 205;
	// stb r19,302(r1)
	PPC_STORE_U8(ctx.r1.u32 + 302, ctx.r19.u8);
	// li r19,157
	ctx.r19.s64 = 157;
	// stb r30,318(r1)
	PPC_STORE_U8(ctx.r1.u32 + 318, ctx.r30.u8);
	// li r30,6
	ctx.r30.s64 = 6;
	// stb r29,324(r1)
	PPC_STORE_U8(ctx.r1.u32 + 324, ctx.r29.u8);
	// li r29,113
	ctx.r29.s64 = 113;
	// stb r9,331(r1)
	PPC_STORE_U8(ctx.r1.u32 + 331, ctx.r9.u8);
	// li r9,184
	ctx.r9.s64 = 184;
	// stb r8,332(r1)
	PPC_STORE_U8(ctx.r1.u32 + 332, ctx.r8.u8);
	// li r8,78
	ctx.r8.s64 = 78;
	// stb r7,333(r1)
	PPC_STORE_U8(ctx.r1.u32 + 333, ctx.r7.u8);
	// li r7,107
	ctx.r7.s64 = 107;
	// stb r10,337(r1)
	PPC_STORE_U8(ctx.r1.u32 + 337, ctx.r10.u8);
	// li r10,155
	ctx.r10.s64 = 155;
	// stb r5,334(r1)
	PPC_STORE_U8(ctx.r1.u32 + 334, ctx.r5.u8);
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// stb r4,338(r1)
	PPC_STORE_U8(ctx.r1.u32 + 338, ctx.r4.u8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stb r3,340(r1)
	PPC_STORE_U8(ctx.r1.u32 + 340, ctx.r3.u8);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// stb r31,301(r1)
	PPC_STORE_U8(ctx.r1.u32 + 301, ctx.r31.u8);
	// stb r15,305(r1)
	PPC_STORE_U8(ctx.r1.u32 + 305, ctx.r15.u8);
	// stb r21,306(r1)
	PPC_STORE_U8(ctx.r1.u32 + 306, ctx.r21.u8);
	// stb r14,307(r1)
	PPC_STORE_U8(ctx.r1.u32 + 307, ctx.r14.u8);
	// stb r16,310(r1)
	PPC_STORE_U8(ctx.r1.u32 + 310, ctx.r16.u8);
	// stb r6,311(r1)
	PPC_STORE_U8(ctx.r1.u32 + 311, ctx.r6.u8);
	// stb r18,312(r1)
	PPC_STORE_U8(ctx.r1.u32 + 312, ctx.r18.u8);
	// stb r24,315(r1)
	PPC_STORE_U8(ctx.r1.u32 + 315, ctx.r24.u8);
	// stb r23,317(r1)
	PPC_STORE_U8(ctx.r1.u32 + 317, ctx.r23.u8);
	// stb r27,319(r1)
	PPC_STORE_U8(ctx.r1.u32 + 319, ctx.r27.u8);
	// stb r17,321(r1)
	PPC_STORE_U8(ctx.r1.u32 + 321, ctx.r17.u8);
	// stb r19,325(r1)
	PPC_STORE_U8(ctx.r1.u32 + 325, ctx.r19.u8);
	// stb r25,335(r1)
	PPC_STORE_U8(ctx.r1.u32 + 335, ctx.r25.u8);
	// stb r31,336(r1)
	PPC_STORE_U8(ctx.r1.u32 + 336, ctx.r31.u8);
	// stb r6,339(r1)
	PPC_STORE_U8(ctx.r1.u32 + 339, ctx.r6.u8);
	// stb r9,341(r1)
	PPC_STORE_U8(ctx.r1.u32 + 341, ctx.r9.u8);
	// stb r28,342(r1)
	PPC_STORE_U8(ctx.r1.u32 + 342, ctx.r28.u8);
	// stb r8,343(r1)
	PPC_STORE_U8(ctx.r1.u32 + 343, ctx.r8.u8);
	// stb r7,344(r1)
	PPC_STORE_U8(ctx.r1.u32 + 344, ctx.r7.u8);
	// stb r22,345(r1)
	PPC_STORE_U8(ctx.r1.u32 + 345, ctx.r22.u8);
	// stb r26,346(r1)
	PPC_STORE_U8(ctx.r1.u32 + 346, ctx.r26.u8);
	// stb r26,347(r1)
	PPC_STORE_U8(ctx.r1.u32 + 347, ctx.r26.u8);
	// stb r20,348(r1)
	PPC_STORE_U8(ctx.r1.u32 + 348, ctx.r20.u8);
	// stb r10,349(r1)
	PPC_STORE_U8(ctx.r1.u32 + 349, ctx.r10.u8);
	// stb r30,350(r1)
	PPC_STORE_U8(ctx.r1.u32 + 350, ctx.r30.u8);
	// stb r29,351(r1)
	PPC_STORE_U8(ctx.r1.u32 + 351, ctx.r29.u8);
	// stw r11,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r11.u32);
	// stw r11,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r11.u32);
	// stw r11,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r11.u32);
	// bl 0x838c1f30
	ctx.lr = 0x82EA9A3C;
	sub_838C1F30(ctx, base);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x82abc660
	ctx.lr = 0x82EA9A48;
	sub_82ABC660(ctx, base);
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x82ea7310
	ctx.lr = 0x82EA9A54;
	sub_82EA7310(ctx, base);
	// lwz r4,352(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82ea9a70
	if (cr6.eq) goto loc_82EA9A70;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,436
	ctx.r3.s64 = ctx.r1.s64 + 436;
	// stw r11,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r11.u32);
loc_82EA9A6C:
	// bl 0x825952b8
	ctx.lr = 0x82EA9A70;
	sub_825952B8(ctx, base);
loc_82EA9A70:
	// lwz r11,868(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 868);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82ea9a9c
	if (cr6.lt) goto loc_82EA9A9C;
	// beq cr6,0x82ea9a9c
	if (cr6.eq) goto loc_82EA9A9C;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// blt cr6,0x82ea9a9c
	if (cr6.lt) goto loc_82EA9A9C;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x82ea5de0
	ctx.lr = 0x82EA9A90;
	sub_82EA5DE0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,832
	ctx.r1.s64 = ctx.r1.s64 + 832;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_82EA9A9C:
	// bl 0x830ff290
	ctx.lr = 0x82EA9AA0;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x82ea9ab8
	if (!cr6.eq) goto loc_82EA9AB8;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stb r31,616(r1)
	PPC_STORE_U8(ctx.r1.u32 + 616, ctx.r31.u8);
	// stw r11,620(r1)
	PPC_STORE_U32(ctx.r1.u32 + 620, ctx.r11.u32);
loc_82EA9AB8:
	// addi r4,r1,464
	ctx.r4.s64 = ctx.r1.s64 + 464;
	// lwz r3,852(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 852);
	// bl 0x82ea6030
	ctx.lr = 0x82EA9AC4;
	sub_82EA6030(ctx, base);
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x82ea5de0
	ctx.lr = 0x82EA9ACC;
	sub_82EA5DE0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,832
	ctx.r1.s64 = ctx.r1.s64 + 832;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA9AD8"))) PPC_WEAK_FUNC(sub_82EA9AD8);
PPC_FUNC_IMPL(__imp__sub_82EA9AD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82EA9AE0;
	__savegprlr_28(ctx, base);
	// stwu r1,-576(r1)
	ea = -576 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82ea7218
	ctx.lr = 0x82EA9AF8;
	sub_82EA7218(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ea8a48
	ctx.lr = 0x82EA9B08;
	sub_82EA8A48(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82ea6be0
	ctx.lr = 0x82EA9B18;
	sub_82EA6BE0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ea8598
	ctx.lr = 0x82EA9B28;
	sub_82EA8598(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea9b80
	if (cr6.eq) goto loc_82EA9B80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ea6030
	ctx.lr = 0x82EA9B40;
	sub_82EA6030(ctx, base);
	// lwz r4,500(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 500);
	// li r31,2
	ctx.r31.s64 = 2;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82ea9b5c
	if (cr6.eq) goto loc_82EA9B5C;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x82EA9B5C;
	sub_825952B8(ctx, base);
loc_82EA9B5C:
	// lwz r4,276(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82ea9b74
	if (cr6.eq) goto loc_82EA9B74;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x82EA9B74;
	sub_825952B8(ctx, base);
loc_82EA9B74:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82EA9B80:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea9bb4
	if (cr6.eq) goto loc_82EA9BB4;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ea6030
	ctx.lr = 0x82EA9B98;
	sub_82EA6030(ctx, base);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82ea5de0
	ctx.lr = 0x82EA9BA0;
	sub_82EA5DE0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ea5de0
	ctx.lr = 0x82EA9BA8;
	sub_82EA5DE0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82EA9BB4:
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82ea5de0
	ctx.lr = 0x82EA9BBC;
	sub_82EA5DE0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ea5de0
	ctx.lr = 0x82EA9BC4;
	sub_82EA5DE0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA9BD0"))) PPC_WEAK_FUNC(sub_82EA9BD0);
PPC_FUNC_IMPL(__imp__sub_82EA9BD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82EA9BD8;
	__savegprlr_28(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82dce3d0
	ctx.lr = 0x82EA9BF0;
	sub_82DCE3D0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ea8858
	ctx.lr = 0x82EA9C00;
	sub_82EA8858(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82ea6740
	ctx.lr = 0x82EA9C10;
	sub_82EA6740(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82ea7b38
	ctx.lr = 0x82EA9C20;
	sub_82EA7B38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea9c78
	if (cr6.eq) goto loc_82EA9C78;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e7adf8
	ctx.lr = 0x82EA9C38;
	sub_82E7ADF8(ctx, base);
	// lwz r4,296(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	// li r31,2
	ctx.r31.s64 = 2;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82ea9c54
	if (cr6.eq) goto loc_82EA9C54;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x82EA9C54;
	sub_825952B8(ctx, base);
loc_82EA9C54:
	// lwz r4,152(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82ea9c6c
	if (cr6.eq) goto loc_82EA9C6C;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x82EA9C6C;
	sub_825952B8(ctx, base);
loc_82EA9C6C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82EA9C78:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea9cac
	if (cr6.eq) goto loc_82EA9CAC;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e7adf8
	ctx.lr = 0x82EA9C90;
	sub_82E7ADF8(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82dce0c8
	ctx.lr = 0x82EA9C98;
	sub_82DCE0C8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82dce0c8
	ctx.lr = 0x82EA9CA0;
	sub_82DCE0C8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82EA9CAC:
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82dce0c8
	ctx.lr = 0x82EA9CB4;
	sub_82DCE0C8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82dce0c8
	ctx.lr = 0x82EA9CBC;
	sub_82DCE0C8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA9CC8"))) PPC_WEAK_FUNC(sub_82EA9CC8);
PPC_FUNC_IMPL(__imp__sub_82EA9CC8) {
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
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,-18140
	ctx.r10.s64 = ctx.r11.s64 + -18140;
	// stb r30,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r30.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82ea7218
	ctx.lr = 0x82EA9CFC;
	sub_82EA7218(ctx, base);
	// stb r30,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r30.u8);
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82ea6be0
	ctx.lr = 0x82EA9D10;
	sub_82EA6BE0(ctx, base);
	// lwz r4,276(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82ea9d2c
	if (cr6.eq) goto loc_82EA9D2C;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82EA9D2C;
	sub_825952B8(ctx, base);
loc_82EA9D2C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA9D48"))) PPC_WEAK_FUNC(sub_82EA9D48);
PPC_FUNC_IMPL(__imp__sub_82EA9D48) {
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
	// lwz r4,196(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82ea9d80
	if (cr6.eq) goto loc_82EA9D80;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82EA9D80;
	sub_825952B8(ctx, base);
loc_82EA9D80:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// bl 0x83878e00
	ctx.lr = 0x82EA9D98;
	sub_83878E00(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ea9db0
	if (cr6.eq) goto loc_82EA9DB0;
	// bl 0x82416268
	ctx.lr = 0x82EA9DAC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82EA9DB0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA9DC8"))) PPC_WEAK_FUNC(sub_82EA9DC8);
PPC_FUNC_IMPL(__imp__sub_82EA9DC8) {
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
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-18140
	ctx.r9.s64 = ctx.r11.s64 + -18140;
	// stb r10,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// bl 0x82ea6be0
	ctx.lr = 0x82EA9E00;
	sub_82EA6BE0(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stb r8,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r8.u8);
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x82ea6be0
	ctx.lr = 0x82EA9E14;
	sub_82EA6BE0(ctx, base);
	// lwz r4,276(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82ea9e30
	if (cr6.eq) goto loc_82EA9E30;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82EA9E30;
	sub_825952B8(ctx, base);
loc_82EA9E30:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EA9E4C"))) PPC_WEAK_FUNC(sub_82EA9E4C);
PPC_FUNC_IMPL(__imp__sub_82EA9E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA9E50"))) PPC_WEAK_FUNC(sub_82EA9E50);
PPC_FUNC_IMPL(__imp__sub_82EA9E50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82EA9E58;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r3,36
	ctx.r31.s64 = ctx.r3.s64 + 36;
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r28,2
	ctx.r28.s64 = 2;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ea9e94
	if (cr6.eq) goto loc_82EA9E94;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x838adab0
	ctx.lr = 0x82EA9E84;
	sub_838ADAB0(ctx, base);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82EA9E94;
	sub_825952B8(ctx, base);
loc_82EA9E94:
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ea9ec4
	if (cr6.lt) goto loc_82EA9EC4;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82EA9EC4;
	sub_825952B8(ctx, base);
loc_82EA9EC4:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// stb r29,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r29.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EA9EDC"))) PPC_WEAK_FUNC(sub_82EA9EDC);
PPC_FUNC_IMPL(__imp__sub_82EA9EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EA9EE0"))) PPC_WEAK_FUNC(sub_82EA9EE0);
PPC_FUNC_IMPL(__imp__sub_82EA9EE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82EA9EE8;
	__savegprlr_28(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82ea7218
	ctx.lr = 0x82EA9F04;
	sub_82EA7218(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82ea9ad8
	ctx.lr = 0x82EA9F14;
	sub_82EA9AD8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r4,232
	ctx.r4.s64 = 232;
	// bne cr6,0x82ea9f64
	if (!cr6.eq) goto loc_82EA9F64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82595718
	ctx.lr = 0x82EA9F38;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ea9f4c
	if (cr6.eq) goto loc_82EA9F4C;
	// bl 0x82ea9cc8
	ctx.lr = 0x82EA9F44;
	sub_82EA9CC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82ea9f50
	goto loc_82EA9F50;
loc_82EA9F4C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82EA9F50:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// li r31,1
	ctx.r31.s64 = 1;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// b 0x82ea9f9c
	goto loc_82EA9F9C;
loc_82EA9F64:
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82595718
	ctx.lr = 0x82EA9F70;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ea9f88
	if (cr6.eq) goto loc_82EA9F88;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82ea9dc8
	ctx.lr = 0x82EA9F80;
	sub_82EA9DC8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82ea9f8c
	goto loc_82EA9F8C;
loc_82EA9F88:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82EA9F8C:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// li r31,2
	ctx.r31.s64 = 2;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
loc_82EA9F9C:
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// bl 0x83878e28
	ctx.lr = 0x82EA9FAC;
	sub_83878E28(ctx, base);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// bl 0x82b64b88
	ctx.lr = 0x82EA9FC4;
	sub_82B64B88(ctx, base);
	// rlwinm r9,r31,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82ea9fe4
	if (cr6.eq) goto loc_82EA9FE4;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r31,r31,0,31,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ea9fe4
	if (cr6.eq) goto loc_82EA9FE4;
	// bl 0x8259b510
	ctx.lr = 0x82EA9FE4;
	sub_8259B510(ctx, base);
loc_82EA9FE4:
	// clrlwi r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82eaa000
	if (cr6.eq) goto loc_82EAA000;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82eaa000
	if (cr6.eq) goto loc_82EAA000;
	// bl 0x8259b510
	ctx.lr = 0x82EAA000;
	sub_8259B510(ctx, base);
loc_82EAA000:
	// lwz r4,292(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82eaa01c
	if (cr6.eq) goto loc_82EAA01C;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82EAA01C;
	sub_825952B8(ctx, base);
loc_82EAA01C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAA028"))) PPC_WEAK_FUNC(sub_82EAA028);
PPC_FUNC_IMPL(__imp__sub_82EAA028) {
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
	// ld r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// std r10,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// stb r11,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r11.u8);
	// bl 0x8259cb28
	ctx.lr = 0x82EAA074;
	sub_8259CB28(ctx, base);
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// addi r4,r30,36
	ctx.r4.s64 = ctx.r30.s64 + 36;
	// bl 0x825add58
	ctx.lr = 0x82EAA080;
	sub_825ADD58(ctx, base);
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

__attribute__((alias("__imp__sub_82EAA09C"))) PPC_WEAK_FUNC(sub_82EAA09C);
PPC_FUNC_IMPL(__imp__sub_82EAA09C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAA0A0"))) PPC_WEAK_FUNC(sub_82EAA0A0);
PPC_FUNC_IMPL(__imp__sub_82EAA0A0) {
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
	// ld r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// bl 0x8259cb28
	ctx.lr = 0x82EAA0D8;
	sub_8259CB28(ctx, base);
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// addi r4,r30,36
	ctx.r4.s64 = ctx.r30.s64 + 36;
	// bl 0x82b8c198
	ctx.lr = 0x82EAA0E4;
	sub_82B8C198(ctx, base);
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

__attribute__((alias("__imp__sub_82EAA100"))) PPC_WEAK_FUNC(sub_82EAA100);
PPC_FUNC_IMPL(__imp__sub_82EAA100) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82EAA108;
	__savegprlr_27(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82eaa028
	ctx.lr = 0x82EAA120;
	sub_82EAA028(ctx, base);
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r11,12496
	ctx.r29.s64 = ctx.r11.s64 + 12496;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// bl 0x825359d8
	ctx.lr = 0x82EAA140;
	sub_825359D8(ctx, base);
	// stb r30,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82535130
	ctx.lr = 0x82EAA14C;
	sub_82535130(ctx, base);
	// stb r30,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82535130
	ctx.lr = 0x82EAA158;
	sub_82535130(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825369e8
	ctx.lr = 0x82EAA164;
	sub_825369E8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r11,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r11.u8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825359d8
	ctx.lr = 0x82EAA178;
	sub_825359D8(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r31,r11,-30500
	ctx.r31.s64 = ctx.r11.s64 + -30500;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82e8c3a8
	ctx.lr = 0x82EAA190;
	sub_82E8C3A8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82eaa1c0
	if (cr6.eq) goto loc_82EAA1C0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82e9e058
	ctx.lr = 0x82EAA1A8;
	sub_82E9E058(ctx, base);
	// lbz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 168);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82eaa1e8
	if (!cr6.eq) goto loc_82EAA1E8;
loc_82EAA1B4:
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82535aa0
	ctx.lr = 0x82EAA1C0;
	sub_82535AA0(ctx, base);
loc_82EAA1C0:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82535aa0
	ctx.lr = 0x82EAA1C8;
	sub_82535AA0(ctx, base);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82535aa0
	ctx.lr = 0x82EAA1D4;
	sub_82535AA0(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82ea9e50
	ctx.lr = 0x82EAA1DC;
	sub_82EA9E50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82EAA1E8:
	// std r30,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r30.u64);
	// addi r5,r31,808
	ctx.r5.s64 = ctx.r31.s64 + 808;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82e8c2c8
	ctx.lr = 0x82EAA1FC;
	sub_82E8C2C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82eaa214
	if (cr6.eq) goto loc_82EAA214;
	// ld r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// li r30,1
	ctx.r30.s64 = 1;
	// std r11,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r11.u64);
loc_82EAA214:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82eaa224
	if (cr6.eq) goto loc_82EAA224;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82EAA224:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82eaa1b4
	if (cr6.eq) goto loc_82EAA1B4;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82eaa0a0
	ctx.lr = 0x82EAA23C;
	sub_82EAA0A0(ctx, base);
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82535aa0
	ctx.lr = 0x82EAA248;
	sub_82535AA0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82535aa0
	ctx.lr = 0x82EAA250;
	sub_82535AA0(ctx, base);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82535aa0
	ctx.lr = 0x82EAA25C;
	sub_82535AA0(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82ea9e50
	ctx.lr = 0x82EAA264;
	sub_82EA9E50(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAA270"))) PPC_WEAK_FUNC(sub_82EAA270);
PPC_FUNC_IMPL(__imp__sub_82EAA270) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82EAA278;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82e6e978
	ctx.lr = 0x82EAA288;
	sub_82E6E978(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82eaa308
	if (cr6.eq) goto loc_82EAA308;
	// lwz r31,24(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825359d8
	ctx.lr = 0x82EAA2A0;
	sub_825359D8(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r30,r11,-30564
	ctx.r30.s64 = ctx.r11.s64 + -30564;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r5,r30,-120
	ctx.r5.s64 = ctx.r30.s64 + -120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8c3a8
	ctx.lr = 0x82EAA2BC;
	sub_82E8C3A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82eaa300
	if (cr6.eq) goto loc_82EAA300;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82eaa100
	ctx.lr = 0x82EAA2D4;
	sub_82EAA100(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825359d8
	ctx.lr = 0x82EAA2E4;
	sub_825359D8(ctx, base);
	// cmplwi cr6,r29,1
	cr6.compare<uint32_t>(ctx.r29.u32, 1, xer);
	// blt cr6,0x82eaa384
	if (cr6.lt) goto loc_82EAA384;
	// beq cr6,0x82eaa34c
	if (cr6.eq) goto loc_82EAA34C;
	// cmplwi cr6,r29,3
	cr6.compare<uint32_t>(ctx.r29.u32, 3, xer);
	// blt cr6,0x82eaa314
	if (cr6.lt) goto loc_82EAA314;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535aa0
	ctx.lr = 0x82EAA300;
	sub_82535AA0(ctx, base);
loc_82EAA300:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535aa0
	ctx.lr = 0x82EAA308;
	sub_82535AA0(ctx, base);
loc_82EAA308:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82EAA314:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8c3a8
	ctx.lr = 0x82EAA324;
	sub_82E8C3A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eaa3bc
	if (!cr6.eq) goto loc_82EAA3BC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535aa0
	ctx.lr = 0x82EAA338;
	sub_82535AA0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535aa0
	ctx.lr = 0x82EAA340;
	sub_82535AA0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82EAA34C:
	// addi r5,r30,-52
	ctx.r5.s64 = ctx.r30.s64 + -52;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8c3a8
	ctx.lr = 0x82EAA35C;
	sub_82E8C3A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eaa3bc
	if (!cr6.eq) goto loc_82EAA3BC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535aa0
	ctx.lr = 0x82EAA370;
	sub_82535AA0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535aa0
	ctx.lr = 0x82EAA378;
	sub_82535AA0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82EAA384:
	// addi r5,r30,-92
	ctx.r5.s64 = ctx.r30.s64 + -92;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8c3a8
	ctx.lr = 0x82EAA394;
	sub_82E8C3A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eaa3bc
	if (!cr6.eq) goto loc_82EAA3BC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535aa0
	ctx.lr = 0x82EAA3A8;
	sub_82535AA0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535aa0
	ctx.lr = 0x82EAA3B0;
	sub_82535AA0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82EAA3BC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82eaa100
	ctx.lr = 0x82EAA3C8;
	sub_82EAA100(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// or r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 | ctx.r10.u64;
	// bl 0x82535aa0
	ctx.lr = 0x82EAA3DC;
	sub_82535AA0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535aa0
	ctx.lr = 0x82EAA3E4;
	sub_82535AA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAA3F0"))) PPC_WEAK_FUNC(sub_82EAA3F0);
PPC_FUNC_IMPL(__imp__sub_82EAA3F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82EAA3F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x83877498
	ctx.lr = 0x82EAA40C;
	sub_83877498(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// blt cr6,0x82eaa448
	if (cr6.lt) goto loc_82EAA448;
	// beq cr6,0x82eaa448
	if (cr6.eq) goto loc_82EAA448;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// blt cr6,0x82eaa438
	if (cr6.lt) goto loc_82EAA438;
loc_82EAA424:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ea9e50
	ctx.lr = 0x82EAA42C;
	sub_82EA9E50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82EAA438:
	// lis r11,45
	ctx.r11.s64 = 2949120;
	// li r30,1
	ctx.r30.s64 = 1;
	// ori r10,r11,50880
	ctx.r10.u64 = ctx.r11.u64 | 50880;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
loc_82EAA448:
	// bl 0x830ff290
	ctx.lr = 0x82EAA44C;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x82eaa464
	if (!cr6.eq) goto loc_82EAA464;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r30,1
	ctx.r30.s64 = 1;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
loc_82EAA464:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82eaa424
	if (cr6.eq) goto loc_82EAA424;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82eaa0a0
	ctx.lr = 0x82EAA47C;
	sub_82EAA0A0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ea9e50
	ctx.lr = 0x82EAA484;
	sub_82EA9E50(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAA490"))) PPC_WEAK_FUNC(sub_82EAA490);
PPC_FUNC_IMPL(__imp__sub_82EAA490) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82EAA498;
	__savegprlr_29(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x83877498
	ctx.lr = 0x82EAA4AC;
	sub_83877498(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eaa3f0
	ctx.lr = 0x82EAA4B8;
	sub_82EAA3F0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82eaa028
	ctx.lr = 0x82EAA4C8;
	sub_82EAA028(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eaa270
	ctx.lr = 0x82EAA4D4;
	sub_82EAA270(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82eaa524
	if (cr6.eq) goto loc_82EAA524;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// bl 0x8259cb28
	ctx.lr = 0x82EAA4FC;
	sub_8259CB28(ctx, base);
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x82b8c198
	ctx.lr = 0x82EAA508;
	sub_82B8C198(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82ea9e50
	ctx.lr = 0x82EAA510;
	sub_82EA9E50(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ea9e50
	ctx.lr = 0x82EAA518;
	sub_82EA9E50(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82EAA524:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82eaa558
	if (cr6.eq) goto loc_82EAA558;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eaa0a0
	ctx.lr = 0x82EAA53C;
	sub_82EAA0A0(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82ea9e50
	ctx.lr = 0x82EAA544;
	sub_82EA9E50(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ea9e50
	ctx.lr = 0x82EAA54C;
	sub_82EA9E50(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82EAA558:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82ea9e50
	ctx.lr = 0x82EAA560;
	sub_82EA9E50(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ea9e50
	ctx.lr = 0x82EAA568;
	sub_82EA9E50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAA574"))) PPC_WEAK_FUNC(sub_82EAA574);
PPC_FUNC_IMPL(__imp__sub_82EAA574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAA578"))) PPC_WEAK_FUNC(sub_82EAA578);
PPC_FUNC_IMPL(__imp__sub_82EAA578) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,124(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// b 0x82eed100
	sub_82EED100(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAA580"))) PPC_WEAK_FUNC(sub_82EAA580);
PPC_FUNC_IMPL(__imp__sub_82EAA580) {
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
	// lwz r3,124(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82eec7b8
	ctx.lr = 0x82EAA59C;
	sub_82EEC7B8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82eaa5c0
	if (cr6.lt) goto loc_82EAA5C0;
	// ble cr6,0x82eaa5c0
	if (!cr6.gt) goto loc_82EAA5C0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82eaa5c0
	if (cr6.eq) goto loc_82EAA5C0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 & ctx.r3.u64;
loc_82EAA5C0:
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

__attribute__((alias("__imp__sub_82EAA5D4"))) PPC_WEAK_FUNC(sub_82EAA5D4);
PPC_FUNC_IMPL(__imp__sub_82EAA5D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAA5D8"))) PPC_WEAK_FUNC(sub_82EAA5D8);
PPC_FUNC_IMPL(__imp__sub_82EAA5D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// lwz r11,26240(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26240);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EAA5EC"))) PPC_WEAK_FUNC(sub_82EAA5EC);
PPC_FUNC_IMPL(__imp__sub_82EAA5EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAA5F0"))) PPC_WEAK_FUNC(sub_82EAA5F0);
PPC_FUNC_IMPL(__imp__sub_82EAA5F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,124(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EAA608"))) PPC_WEAK_FUNC(sub_82EAA608);
PPC_FUNC_IMPL(__imp__sub_82EAA608) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83a7d958
	ctx.lr = 0x82EAA620;
	sub_83A7D958(ctx, base);
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// lis r10,0
	ctx.r10.s64 = 0;
	// subf r9,r11,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r11.s64;
	// ori r10,r10,60000
	ctx.r10.u64 = ctx.r10.u64 | 60000;
	// subfc r8,r9,r10
	xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r6,31
	ctx.r3.u64 = ctx.r6.u32 & 0x1;
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

__attribute__((alias("__imp__sub_82EAA650"))) PPC_WEAK_FUNC(sub_82EAA650);
PPC_FUNC_IMPL(__imp__sub_82EAA650) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8335b0d0
	ctx.lr = 0x82EAA66C;
	sub_8335B0D0(ctx, base);
loc_82EAA66C:
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// li r5,4096
	ctx.r5.s64 = 4096;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82EAA690;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x82eaa6c0
	if (!cr6.gt) goto loc_82EAA6C0;
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// bl 0x82eec5c0
	ctx.lr = 0x82EAA6A0;
	sub_82EEC5C0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82eaa66c
	if (cr6.eq) goto loc_82EAA66C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x82eeda38
	ctx.lr = 0x82EAA6B4;
	sub_82EEDA38(ctx, base);
	// bl 0x83a7d958
	ctx.lr = 0x82EAA6B8;
	sub_83A7D958(ctx, base);
	// stw r3,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r3.u32);
	// b 0x82eaa66c
	goto loc_82EAA66C;
loc_82EAA6C0:
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

__attribute__((alias("__imp__sub_82EAA6D4"))) PPC_WEAK_FUNC(sub_82EAA6D4);
PPC_FUNC_IMPL(__imp__sub_82EAA6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAA6D8"))) PPC_WEAK_FUNC(sub_82EAA6D8);
PPC_FUNC_IMPL(__imp__sub_82EAA6D8) {
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
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82eaa73c
	if (cr6.lt) goto loc_82EAA73C;
	// beq cr6,0x82eaa74c
	if (cr6.eq) goto loc_82EAA74C;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x82eaa778
	if (!cr6.lt) goto loc_82EAA778;
	// bl 0x82eaa650
	ctx.lr = 0x82EAA708;
	sub_82EAA650(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x82572fa0
	ctx.lr = 0x82EAA71C;
	sub_82572FA0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eedb00
	ctx.lr = 0x82EAA724;
	sub_82EEDB00(ctx, base);
	// bl 0x82eecb48
	ctx.lr = 0x82EAA728;
	sub_82EECB48(ctx, base);
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
loc_82EAA73C:
	// bl 0x8335c888
	ctx.lr = 0x82EAA740;
	sub_8335C888(ctx, base);
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
loc_82EAA74C:
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// lwz r11,24700(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24700);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82eaa778
	if (cr6.eq) goto loc_82EAA778;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x8335c898
	ctx.lr = 0x82EAA764;
	sub_8335C898(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x82eaa778
	if (!cr6.gt) goto loc_82EAA778;
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
loc_82EAA778:
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

__attribute__((alias("__imp__sub_82EAA78C"))) PPC_WEAK_FUNC(sub_82EAA78C);
PPC_FUNC_IMPL(__imp__sub_82EAA78C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAA790"))) PPC_WEAK_FUNC(sub_82EAA790);
PPC_FUNC_IMPL(__imp__sub_82EAA790) {
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
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82eaa808
	if (cr6.lt) goto loc_82EAA808;
	// bne cr6,0x82eaa7e8
	if (!cr6.eq) goto loc_82EAA7E8;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r4,72(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x82572fa0
	ctx.lr = 0x82EAA7C8;
	sub_82572FA0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eedb00
	ctx.lr = 0x82EAA7D0;
	sub_82EEDB00(ctx, base);
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// bl 0x82eec778
	ctx.lr = 0x82EAA7D8;
	sub_82EEC778(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82eaa800
	if (cr6.eq) goto loc_82EAA800;
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// bl 0x82eec5f8
	ctx.lr = 0x82EAA7E8;
	sub_82EEC5F8(ctx, base);
loc_82EAA7E8:
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
loc_82EAA800:
	// bl 0x82eecb48
	ctx.lr = 0x82EAA804;
	sub_82EECB48(ctx, base);
	// b 0x82eaa834
	goto loc_82EAA834;
loc_82EAA808:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// bl 0x82572fa0
	ctx.lr = 0x82EAA81C;
	sub_82572FA0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82eedb00
	ctx.lr = 0x82EAA824;
	sub_82EEDB00(ctx, base);
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// bl 0x82eec898
	ctx.lr = 0x82EAA82C;
	sub_82EEC898(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r10.u32);
loc_82EAA834:
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

__attribute__((alias("__imp__sub_82EAA84C"))) PPC_WEAK_FUNC(sub_82EAA84C);
PPC_FUNC_IMPL(__imp__sub_82EAA84C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAA850"))) PPC_WEAK_FUNC(sub_82EAA850);
PPC_FUNC_IMPL(__imp__sub_82EAA850) {
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
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-31757
	ctx.r10.s64 = -2081226752;
	// addi r9,r11,-17672
	ctx.r9.s64 = ctx.r11.s64 + -17672;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r3,24700(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24700);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82eaa888
	if (cr6.eq) goto loc_82EAA888;
	// lwz r4,132(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x82e8d040
	ctx.lr = 0x82EAA888;
	sub_82E8D040(ctx, base);
loc_82EAA888:
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// lwz r10,26240(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26240);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// bne cr6,0x82eaa8b0
	if (!cr6.eq) goto loc_82EAA8B0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// stw r10,26240(r11)
	PPC_STORE_U32(ctx.r11.u32 + 26240, ctx.r10.u32);
	// addi r3,r9,-17764
	ctx.r3.s64 = ctx.r9.s64 + -17764;
	// addi r4,r3,-36
	ctx.r4.s64 = ctx.r3.s64 + -36;
	// bl 0x83102db0
	ctx.lr = 0x82EAA8B0;
	sub_83102DB0(ctx, base);
loc_82EAA8B0:
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82eaa8d4
	if (cr6.eq) goto loc_82EAA8D4;
	// li r11,29
	ctx.r11.s64 = 29;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82EAA8CC;
	sub_825952B8(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r10.u32);
loc_82EAA8D4:
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,27304
	ctx.r10.s64 = ctx.r11.s64 + 27304;
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// bl 0x82572fa0
	ctx.lr = 0x82EAA8EC;
	sub_82572FA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831032a0
	ctx.lr = 0x82EAA8F4;
	sub_831032A0(ctx, base);
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

__attribute__((alias("__imp__sub_82EAA908"))) PPC_WEAK_FUNC(sub_82EAA908);
PPC_FUNC_IMPL(__imp__sub_82EAA908) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82EAA910;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r28,r11,-17808
	ctx.r28.s64 = ctx.r11.s64 + -17808;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// addi r4,r28,-52
	ctx.r4.s64 = ctx.r28.s64 + -52;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// bl 0x83103328
	ctx.lr = 0x82EAA930;
	sub_83103328(ctx, base);
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r9,r10,-17672
	ctx.r9.s64 = ctx.r10.s64 + -17672;
	// addi r29,r31,72
	ctx.r29.s64 = ctx.r31.s64 + 72;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// std r30,72(r31)
	PPC_STORE_U64(ctx.r31.u32 + 72, ctx.r30.u64);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82572fa0
	ctx.lr = 0x82EAA954;
	sub_82572FA0(ctx, base);
	// addi r27,r31,80
	ctx.r27.s64 = ctx.r31.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8335b0d0
	ctx.lr = 0x82EAA960;
	sub_8335B0D0(ctx, base);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// addi r4,r28,-40
	ctx.r4.s64 = ctx.r28.s64 + -40;
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// clrlwi r5,r26,16
	ctx.r5.u64 = ctx.r26.u32 & 0xFFFF;
	// bl 0x83102db0
	ctx.lr = 0x82EAA980;
	sub_83102DB0(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8335d3e0
	ctx.lr = 0x82EAA988;
	sub_8335D3E0(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// std r30,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r30.u64);
	// bl 0x82572fa0
	ctx.lr = 0x82EAA99C;
	sub_82572FA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82572fa0
	ctx.lr = 0x82EAA9A8;
	sub_82572FA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82572fa0
	ctx.lr = 0x82EAA9B4;
	sub_82572FA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82572fa0
	ctx.lr = 0x82EAA9C0;
	sub_82572FA0(ctx, base);
	// lis r7,-31757
	ctx.r7.s64 = -2081226752;
	// lwz r4,24700(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 24700);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82eaaa0c
	if (cr6.eq) goto loc_82EAAA0C;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e8ce80
	ctx.lr = 0x82EAA9E0;
	sub_82E8CE80(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// lbz r7,135(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 135);
	// lbz r6,134(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 134);
	// lbz r5,133(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 133);
	// lbz r4,132(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 132);
	// bl 0x8335b048
	ctx.lr = 0x82EAAA00;
	sub_8335B048(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8335b0c0
	ctx.lr = 0x82EAAA0C;
	sub_8335B0C0(ctx, base);
loc_82EAAA0C:
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82EAAA34;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82eaaa98
	if (!cr6.eq) goto loc_82EAAA98;
	// std r30,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r30.u64);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82572fa0
	ctx.lr = 0x82EAAA4C;
	sub_82572FA0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82eedb00
	ctx.lr = 0x82EAAA54;
	sub_82EEDB00(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82eec6e8
	ctx.lr = 0x82EAAA60;
	sub_82EEC6E8(ctx, base);
	// li r11,29
	ctx.r11.s64 = 29;
	// stw r3,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r4,4096
	ctx.r4.s64 = 4096;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x82EAAA7C;
	sub_82595718(ctx, base);
	// lis r10,-31757
	ctx.r10.s64 = -2081226752;
	// stw r3,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r3.u32);
	// stw r31,26240(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26240, ctx.r31.u32);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// bl 0x83a7d958
	ctx.lr = 0x82EAAA94;
	sub_83A7D958(ctx, base);
	// stw r3,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r3.u32);
loc_82EAAA98:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAAAA4"))) PPC_WEAK_FUNC(sub_82EAAAA4);
PPC_FUNC_IMPL(__imp__sub_82EAAAA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAAAA8"))) PPC_WEAK_FUNC(sub_82EAAAA8);
PPC_FUNC_IMPL(__imp__sub_82EAAAA8) {
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
	// bl 0x82eaa850
	ctx.lr = 0x82EAAAC8;
	sub_82EAA850(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82eaaae0
	if (cr6.eq) goto loc_82EAAAE0;
	// bl 0x82416268
	ctx.lr = 0x82EAAADC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82EAAAE0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EAAAF8"))) PPC_WEAK_FUNC(sub_82EAAAF8);
PPC_FUNC_IMPL(__imp__sub_82EAAAF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac0
	ctx.lr = 0x82EAAB00;
	__savegprlr_18(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x82e6e978
	ctx.lr = 0x82EAAB10;
	sub_82E6E978(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82eaab3c
	if (!cr6.eq) goto loc_82EAAB3C;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r11,r11,-17052
	ctx.r11.s64 = ctx.r11.s64 + -17052;
	// addi r4,r11,-280
	ctx.r4.s64 = ctx.r11.s64 + -280;
	// addi r3,r11,-220
	ctx.r3.s64 = ctx.r11.s64 + -220;
	// bl 0x83102db0
	ctx.lr = 0x82EAAB30;
	sub_83102DB0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_82EAAB3C:
	// lwz r3,4(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// bl 0x82eb0250
	ctx.lr = 0x82EAAB44;
	sub_82EB0250(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt cr6,0x82eaab70
	if (cr6.gt) goto loc_82EAAB70;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r11,r11,-17052
	ctx.r11.s64 = ctx.r11.s64 + -17052;
	// addi r4,r11,-212
	ctx.r4.s64 = ctx.r11.s64 + -212;
	// addi r3,r11,-148
	ctx.r3.s64 = ctx.r11.s64 + -148;
	// bl 0x83102db0
	ctx.lr = 0x82EAAB64;
	sub_83102DB0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_82EAAB70:
	// li r20,1
	ctx.r20.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// slw r11,r20,r24
	ctx.r11.u64 = ctx.r24.u8 & 0x20 ? 0 : (ctx.r20.u32 << (ctx.r24.u8 & 0x3F));
	// li r21,-1
	ctx.r21.s64 = -1;
	// addi r25,r11,-1
	ctx.r25.s64 = ctx.r11.s64 + -1;
	// li r18,1000
	ctx.r18.s64 = 1000;
	// bl 0x82a5c280
	ctx.lr = 0x82EAAB8C;
	sub_82A5C280(ctx, base);
	// bl 0x83a7d958
	ctx.lr = 0x82EAAB90;
	sub_83A7D958(ctx, base);
	// bl 0x83524138
	ctx.lr = 0x82EAAB94;
	sub_83524138(ctx, base);
	// rotlwi r5,r3,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826501d8
	ctx.lr = 0x82EAABA4;
	sub_826501D8(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r22,29
	ctx.r22.s64 = 29;
	// li r29,-1
	ctx.r29.s64 = -1;
	// addi r27,r11,-17052
	ctx.r27.s64 = ctx.r11.s64 + -17052;
loc_82EAABB4:
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a5c300
	ctx.lr = 0x82EAABC0;
	sub_82A5C300(ctx, base);
	// divwu r11,r3,r24
	ctx.r11.u32 = PPCDivide(ctx.r3.u32, ctx.r24.u32);
	// twllei r24,0
	// mullw r10,r11,r24
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r24.s32);
	// subf r31,r10,r3
	ctx.r31.s64 = ctx.r3.s64 - ctx.r10.s64;
	// slw r26,r20,r31
	ctx.r26.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r20.u32 << (ctx.r31.u8 & 0x3F));
	// and r9,r26,r25
	ctx.r9.u64 = ctx.r26.u64 & ctx.r25.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82eaac7c
	if (cr6.eq) goto loc_82EAAC7C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,4(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// bl 0x82eb02d0
	ctx.lr = 0x82EAABEC;
	sub_82EB02D0(ctx, base);
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,144
	ctx.r4.s64 = 144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82EAAC04;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82eaac74
	if (cr6.eq) goto loc_82EAAC74;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82eaa908
	ctx.lr = 0x82EAAC1C;
	sub_82EAA908(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82eaac78
	if (cr6.eq) goto loc_82EAAC78;
	// bl 0x82eaa5f0
	ctx.lr = 0x82EAAC2C;
	sub_82EAA5F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r6,r30,16
	ctx.r6.u64 = ctx.r30.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// beq cr6,0x82eaac54
	if (cr6.eq) goto loc_82EAAC54;
	// addi r4,r27,-140
	ctx.r4.s64 = ctx.r27.s64 + -140;
	// addi r3,r27,-76
	ctx.r3.s64 = ctx.r27.s64 + -76;
	// bl 0x83102db0
	ctx.lr = 0x82EAAC4C;
	sub_83102DB0(ctx, base);
	// mr r21,r31
	ctx.r21.u64 = ctx.r31.u64;
	// b 0x82eaac78
	goto loc_82EAAC78;
loc_82EAAC54:
	// addi r4,r27,-68
	ctx.r4.s64 = ctx.r27.s64 + -68;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83102db0
	ctx.lr = 0x82EAAC60;
	sub_83102DB0(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82EAAC74;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EAAC74:
	// li r28,0
	ctx.r28.s64 = 0;
loc_82EAAC78:
	// andc r25,r25,r26
	ctx.r25.u64 = ctx.r25.u64 & ~ctx.r26.u64;
loc_82EAAC7C:
	// addic. r18,r18,-1
	xer.ca = ctx.r18.u32 > 0;
	ctx.r18.s64 = ctx.r18.s64 + -1;
	cr0.compare<int32_t>(ctx.r18.s32, 0, xer);
	// ble 0x82eaac94
	if (!cr0.gt) goto loc_82EAAC94;
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(ctx.r21.s32, 0, xer);
	// bge cr6,0x82eaac94
	if (!cr6.lt) goto loc_82EAAC94;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// bne cr6,0x82eaabb4
	if (!cr6.eq) goto loc_82EAABB4;
loc_82EAAC94:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a5c688
	ctx.lr = 0x82EAAC9C;
	sub_82A5C688(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAACA8"))) PPC_WEAK_FUNC(sub_82EAACA8);
PPC_FUNC_IMPL(__imp__sub_82EAACA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// lwz r3,26240(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26240);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
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

__attribute__((alias("__imp__sub_82EAACC8"))) PPC_WEAK_FUNC(sub_82EAACC8);
PPC_FUNC_IMPL(__imp__sub_82EAACC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EAACCC"))) PPC_WEAK_FUNC(sub_82EAACCC);
PPC_FUNC_IMPL(__imp__sub_82EAACCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAACD0"))) PPC_WEAK_FUNC(sub_82EAACD0);
PPC_FUNC_IMPL(__imp__sub_82EAACD0) {
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
	// bl 0x8308e078
	ctx.lr = 0x82EAACE8;
	sub_8308E078(ctx, base);
	// cmplwi cr6,r3,4
	cr6.compare<uint32_t>(ctx.r3.u32, 4, xer);
	// bge cr6,0x82eaad30
	if (!cr6.lt) goto loc_82EAAD30;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x832e0d90
	ctx.lr = 0x82EAAD04;
	sub_832E0D90(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82eaad30
	if (!cr6.eq) goto loc_82EAAD30;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
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
loc_82EAAD30:
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

__attribute__((alias("__imp__sub_82EAAD48"))) PPC_WEAK_FUNC(sub_82EAAD48);
PPC_FUNC_IMPL(__imp__sub_82EAAD48) {
	PPC_FUNC_PROLOGUE();
	// ld r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// b 0x82eaacd0
	sub_82EAACD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAAD50"))) PPC_WEAK_FUNC(sub_82EAAD50);
PPC_FUNC_IMPL(__imp__sub_82EAAD50) {
	PPC_FUNC_PROLOGUE();
	// b 0x82eaacd0
	sub_82EAACD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAAD54"))) PPC_WEAK_FUNC(sub_82EAAD54);
PPC_FUNC_IMPL(__imp__sub_82EAAD54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAAD58"))) PPC_WEAK_FUNC(sub_82EAAD58);
PPC_FUNC_IMPL(__imp__sub_82EAAD58) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r4,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 3;
	// bl 0x828edb30
	ctx.lr = 0x82EAAD98;
	sub_828EDB30(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82eaaddc
	if (cr6.eq) goto loc_82EAADDC;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x82eaadd8
	if (cr6.eq) goto loc_82EAADD8;
loc_82EAADB8:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82eaadc8
	if (cr6.eq) goto loc_82EAADC8;
	// ld r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r8,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
loc_82EAADC8:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x82eaadb8
	if (!cr6.eq) goto loc_82EAADB8;
loc_82EAADD8:
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
loc_82EAADDC:
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

__attribute__((alias("__imp__sub_82EAADF8"))) PPC_WEAK_FUNC(sub_82EAADF8);
PPC_FUNC_IMPL(__imp__sub_82EAADF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82EAAE00;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r4,r11,-16912
	ctx.r4.s64 = ctx.r11.s64 + -16912;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83103328
	ctx.lr = 0x82EAAE18;
	sub_83103328(ctx, base);
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r9,r10,-16816
	ctx.r9.s64 = ctx.r10.s64 + -16816;
	// li r30,0
	ctx.r30.s64 = 0;
	// stb r8,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r8.u8);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82eaad58
	ctx.lr = 0x82EAAE40;
	sub_82EAAD58(ctx, base);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAAE58"))) PPC_WEAK_FUNC(sub_82EAAE58);
PPC_FUNC_IMPL(__imp__sub_82EAAE58) {
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
	// addi r10,r11,-16816
	ctx.r10.s64 = ctx.r11.s64 + -16816;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r3,96(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82eaae8c
	if (cr6.eq) goto loc_82EAAE8C;
	// bl 0x82416268
	ctx.lr = 0x82EAAE8C;
	sub_82416268(ctx, base);
loc_82EAAE8C:
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82eaaeac
	if (cr6.eq) goto loc_82EAAEAC;
	// bl 0x82416268
	ctx.lr = 0x82EAAEAC;
	sub_82416268(ctx, base);
loc_82EAAEAC:
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// bl 0x831032a0
	ctx.lr = 0x82EAAEC0;
	sub_831032A0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EAAED8"))) PPC_WEAK_FUNC(sub_82EAAED8);
PPC_FUNC_IMPL(__imp__sub_82EAAED8) {
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
	// bl 0x82eaae58
	ctx.lr = 0x82EAAEF8;
	sub_82EAAE58(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82eaaf10
	if (cr6.eq) goto loc_82EAAF10;
	// bl 0x82416268
	ctx.lr = 0x82EAAF0C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82EAAF10:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EAAF28"))) PPC_WEAK_FUNC(sub_82EAAF28);
PPC_FUNC_IMPL(__imp__sub_82EAAF28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82EAAF30;
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
	ctx.lr = 0x82EAAF44;
	sub_82535130(ctx, base);
	// lwz r10,240(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 240);
	// addi r11,r29,220
	ctx.r11.s64 = ctx.r29.s64 + 220;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82eaaf58
	if (cr6.lt) goto loc_82EAAF58;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82EAAF58:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825346c8
	ctx.lr = 0x82EAAF64;
	sub_825346C8(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r11,-16672
	ctx.r31.s64 = ctx.r11.s64 + -16672;
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// bl 0x82536d88
	ctx.lr = 0x82EAAF78;
	sub_82536D88(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x825369e8
	ctx.lr = 0x82EAAF80;
	sub_825369E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535aa0
	ctx.lr = 0x82EAAF88;
	sub_82535AA0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,248(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 248);
	// bl 0x82534640
	ctx.lr = 0x82EAAF94;
	sub_82534640(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82536d88
	ctx.lr = 0x82EAAFA0;
	sub_82536D88(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x825369e8
	ctx.lr = 0x82EAAFA8;
	sub_825369E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535aa0
	ctx.lr = 0x82EAAFB0;
	sub_82535AA0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAAFBC"))) PPC_WEAK_FUNC(sub_82EAAFBC);
PPC_FUNC_IMPL(__imp__sub_82EAAFBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAAFC0"))) PPC_WEAK_FUNC(sub_82EAAFC0);
PPC_FUNC_IMPL(__imp__sub_82EAAFC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82EAAFC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r30,r3,176
	ctx.r30.s64 = ctx.r3.s64 + 176;
	// addi r29,r11,-16628
	ctx.r29.s64 = ctx.r11.s64 + -16628;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r29,-8
	ctx.r4.s64 = ctx.r29.s64 + -8;
	// bl 0x82536d88
	ctx.lr = 0x82EAAFE8;
	sub_82536D88(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x82EAAFEC;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82EAAFF4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82eaaff4
	if (!cr6.eq) goto loc_82EAAFF4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82EAB018;
	sub_824208C8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82536d88
	ctx.lr = 0x82EAB024;
	sub_82536D88(ctx, base);
	// bl 0x825347e8
	ctx.lr = 0x82EAB028;
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

__attribute__((alias("__imp__sub_82EAB038"))) PPC_WEAK_FUNC(sub_82EAB038);
PPC_FUNC_IMPL(__imp__sub_82EAB038) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82EAB040;
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
	// bge cr6,0x82eab080
	if (!cr6.lt) goto loc_82EAB080;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e745e0
	ctx.lr = 0x82EAB080;
	sub_82E745E0(ctx, base);
loc_82EAB080:
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r30,15
	ctx.r30.s64 = 15;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r27,r10,-16644
	ctx.r27.s64 = ctx.r10.s64 + -16644;
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r27,-20
	ctx.r4.s64 = ctx.r27.s64 + -20;
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
	ctx.lr = 0x82EAB0C8;
	sub_82472FC0(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x82EAB0D4;
	sub_82E74C08(ctx, base);
	// lwz r5,212(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x82eab0e8
	if (cr6.lt) goto loc_82EAB0E8;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82416268
	ctx.lr = 0x82EAB0E8;
	sub_82416268(ctx, base);
loc_82EAB0E8:
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
	// blt cr6,0x82eab108
	if (cr6.lt) goto loc_82EAB108;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82EAB108:
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
loc_82EAB118:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82eab118
	if (!cr6.eq) goto loc_82EAB118;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x82EAB13C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x82EAB148;
	sub_82E74C08(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82eab15c
	if (cr6.lt) goto loc_82EAB15C;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x82EAB15C;
	sub_82416268(ctx, base);
loc_82EAB15C:
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// addi r4,r27,-12
	ctx.r4.s64 = ctx.r27.s64 + -12;
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
	ctx.lr = 0x82EAB184;
	sub_82472FC0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x82EAB190;
	sub_82E74C08(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82eab1a4
	if (cr6.lt) goto loc_82EAB1A4;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x82EAB1A4;
	sub_82416268(ctx, base);
loc_82EAB1A4:
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
	ctx.lr = 0x82EAB1BC;
	sub_82E746C0(ctx, base);
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// addi r4,r27,-4
	ctx.r4.s64 = ctx.r27.s64 + -4;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82472fc0
	ctx.lr = 0x82EAB1D8;
	sub_82472FC0(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x82EAB1E4;
	sub_82E74C08(ctx, base);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82eab1f8
	if (cr6.lt) goto loc_82EAB1F8;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x82EAB1F8;
	sub_82416268(ctx, base);
loc_82EAB1F8:
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
	ctx.lr = 0x82EAB210;
	sub_82E746C0(ctx, base);
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82472fc0
	ctx.lr = 0x82EAB22C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x82EAB238;
	sub_82E74C08(ctx, base);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82eab24c
	if (cr6.lt) goto loc_82EAB24C;
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82416268
	ctx.lr = 0x82EAB24C;
	sub_82416268(ctx, base);
loc_82EAB24C:
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// lwz r4,120(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 120);
	// bl 0x82e746c0
	ctx.lr = 0x82EAB264;
	sub_82E746C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAB270"))) PPC_WEAK_FUNC(sub_82EAB270);
PPC_FUNC_IMPL(__imp__sub_82EAB270) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82EAB278;
	__savegprlr_26(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x83691bb8
	ctx.lr = 0x82EAB2A0;
	sub_83691BB8(ctx, base);
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82eab4e0
	if (!cr6.lt) goto loc_82EAB4E0;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// li r29,15
	ctx.r29.s64 = 15;
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r27,r11,1
	ctx.r27.s64 = ctx.r11.s64 + 1;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r26,r11,-16600
	ctx.r26.s64 = ctx.r11.s64 + -16600;
loc_82EAB2D8:
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// addi r10,r31,-16
	ctx.r10.s64 = ctx.r31.s64 + -16;
	// ld r9,-8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + -8);
	// ld r8,-16(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + -16);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,248(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// lwz r4,252(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// bl 0x82472fc0
	ctx.lr = 0x82EAB30C;
	sub_82472FC0(ctx, base);
	// addi r6,r26,-20
	ctx.r6.s64 = ctx.r26.s64 + -20;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x82EAB324;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82eab3b8
	if (!cr6.eq) goto loc_82EAB3B8;
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,200(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// lwz r4,204(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// bl 0x82472fc0
	ctx.lr = 0x82EAB35C;
	sub_82472FC0(ctx, base);
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x82eab370
	if (!cr6.lt) goto loc_82EAB370;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_82EAB370:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82EAB374:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82eab374
	if (!cr6.eq) goto loc_82EAB374;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,20
	ctx.r3.s64 = ctx.r28.s64 + 20;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82EAB398;
	sub_824208C8(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82eab3ac
	if (cr6.lt) goto loc_82EAB3AC;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82416268
	ctx.lr = 0x82EAB3AC;
	sub_82416268(ctx, base);
loc_82EAB3AC:
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
loc_82EAB3B8:
	// addi r6,r26,-12
	ctx.r6.s64 = ctx.r26.s64 + -12;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x82EAB3D0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82eab40c
	if (!cr6.eq) goto loc_82EAB40C;
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// lwz r8,208(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x82eab404
	if (!cr6.eq) goto loc_82EAB404;
	// ld r11,216(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x82eab408
	goto loc_82EAB408;
loc_82EAB404:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82EAB408:
	// stw r11,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r11.u32);
loc_82EAB40C:
	// addi r6,r26,-4
	ctx.r6.s64 = ctx.r26.s64 + -4;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,3
	ctx.r7.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x82EAB424;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82eab460
	if (!cr6.eq) goto loc_82EAB460;
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// lwz r8,176(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x82eab458
	if (!cr6.eq) goto loc_82EAB458;
	// ld r11,184(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x82eab45c
	goto loc_82EAB45C;
loc_82EAB458:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82EAB45C:
	// stw r11,156(r28)
	PPC_STORE_U32(ctx.r28.u32 + 156, ctx.r11.u32);
loc_82EAB460:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x82EAB478;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82eab4b4
	if (!cr6.eq) goto loc_82EAB4B4;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// lwz r8,224(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x82eab4ac
	if (!cr6.eq) goto loc_82EAB4AC;
	// ld r11,232(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 232);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x82eab4b0
	goto loc_82EAB4B0;
loc_82EAB4AC:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82EAB4B0:
	// stw r11,160(r28)
	PPC_STORE_U32(ctx.r28.u32 + 160, ctx.r11.u32);
loc_82EAB4B4:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82eab4c8
	if (cr6.lt) goto loc_82EAB4C8;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82416268
	ctx.lr = 0x82EAB4C8;
	sub_82416268(ctx, base);
loc_82EAB4C8:
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// bne 0x82eab2d8
	if (!cr0.eq) goto loc_82EAB2D8;
loc_82EAB4E0:
	// lwz r31,160(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82eab4fc
	if (cr6.eq) goto loc_82EAB4FC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x82EAB4F4;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82EAB4FC;
	sub_82416268(ctx, base);
loc_82EAB4FC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAB508"))) PPC_WEAK_FUNC(sub_82EAB508);
PPC_FUNC_IMPL(__imp__sub_82EAB508) {
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
	ctx.lr = 0x82EAB528;
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
	// addi r4,r5,-16696
	ctx.r4.s64 = ctx.r5.s64 + -16696;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x824208c8
	ctx.lr = 0x82EAB560;
	sub_824208C8(ctx, base);
	// lis r3,-32234
	ctx.r3.s64 = -2112487424;
	// lis r4,-32234
	ctx.r4.s64 = -2112487424;
	// stw r30,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r30.u32);
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r3,-8056
	ctx.r8.s64 = ctx.r3.s64 + -8056;
	// addi r9,r4,-8044
	ctx.r9.s64 = ctx.r4.s64 + -8044;
	// stw r11,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r11.u32);
	// addi r7,r10,-8060
	ctx.r7.s64 = ctx.r10.s64 + -8060;
	// stw r8,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r8.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r7.u32);
	// stw r11,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EAB5B0"))) PPC_WEAK_FUNC(sub_82EAB5B0);
PPC_FUNC_IMPL(__imp__sub_82EAB5B0) {
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
	ctx.lr = 0x82EAB5D0;
	sub_82E75880(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r31,312
	ctx.r3.s64 = ctx.r31.s64 + 312;
	// addi r4,r11,-16696
	ctx.r4.s64 = ctx.r11.s64 + -16696;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x824208c8
	ctx.lr = 0x82EAB5E4;
	sub_824208C8(ctx, base);
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// stw r30,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r30.u32);
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r10,-16492
	ctx.r7.s64 = ctx.r10.s64 + -16492;
	// addi r6,r9,-16504
	ctx.r6.s64 = ctx.r9.s64 + -16504;
	// stw r11,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r11.u32);
	// addi r5,r8,-16508
	ctx.r5.s64 = ctx.r8.s64 + -16508;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// stw r6,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r6.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r5,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r5.u32);
	// stw r11,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EAB634"))) PPC_WEAK_FUNC(sub_82EAB634);
PPC_FUNC_IMPL(__imp__sub_82EAB634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAB638"))) PPC_WEAK_FUNC(sub_82EAB638);
PPC_FUNC_IMPL(__imp__sub_82EAB638) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x82eab6d0
	sub_82EAB6D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAB640"))) PPC_WEAK_FUNC(sub_82EAB640);
PPC_FUNC_IMPL(__imp__sub_82EAB640) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x82eab6d0
	sub_82EAB6D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAB648"))) PPC_WEAK_FUNC(sub_82EAB648);
PPC_FUNC_IMPL(__imp__sub_82EAB648) {
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
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// addi r8,r11,-16492
	ctx.r8.s64 = ctx.r11.s64 + -16492;
	// addi r7,r10,-16504
	ctx.r7.s64 = ctx.r10.s64 + -16504;
	// addi r6,r9,-16508
	ctx.r6.s64 = ctx.r9.s64 + -16508;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r6,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r6.u32);
	// addi r31,r3,312
	ctx.r31.s64 = ctx.r3.s64 + 312;
	// lwz r5,332(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 332);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x82eab69c
	if (cr6.lt) goto loc_82EAB69C;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x82EAB69C;
	sub_8386D088(ctx, base);
loc_82EAB69C:
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
	ctx.lr = 0x82EAB6B8;
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

__attribute__((alias("__imp__sub_82EAB6D0"))) PPC_WEAK_FUNC(sub_82EAB6D0);
PPC_FUNC_IMPL(__imp__sub_82EAB6D0) {
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
	// bl 0x82eab648
	ctx.lr = 0x82EAB6F0;
	sub_82EAB648(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82eab708
	if (cr6.eq) goto loc_82EAB708;
	// bl 0x82416268
	ctx.lr = 0x82EAB704;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82EAB708:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EAB720"))) PPC_WEAK_FUNC(sub_82EAB720);
PPC_FUNC_IMPL(__imp__sub_82EAB720) {
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
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82eab7a0
	if (cr6.lt) goto loc_82EAB7A0;
	// beq cr6,0x82eab77c
	if (cr6.eq) goto loc_82EAB77C;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// blt cr6,0x82eab764
	if (cr6.lt) goto loc_82EAB764;
	// li r3,-1
	ctx.r3.s64 = -1;
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
loc_82EAB764:
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
loc_82EAB77C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82EAB790;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82eab7c4
	if (!cr6.eq) goto loc_82EAB7C4;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82eab7d0
	goto loc_82EAB7D0;
loc_82EAB7A0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82EAB7B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82eab7c4
	if (!cr6.eq) goto loc_82EAB7C4;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82eab7d0
	goto loc_82EAB7D0;
loc_82EAB7C4:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x82eab7d4
	if (!cr6.eq) goto loc_82EAB7D4;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82EAB7D0:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82EAB7D4:
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

__attribute__((alias("__imp__sub_82EAB7EC"))) PPC_WEAK_FUNC(sub_82EAB7EC);
PPC_FUNC_IMPL(__imp__sub_82EAB7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAB7F0"))) PPC_WEAK_FUNC(sub_82EAB7F0);
PPC_FUNC_IMPL(__imp__sub_82EAB7F0) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82eab81c
	if (!cr6.eq) goto loc_82EAB81C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82eab8a4
	goto loc_82EAB8A4;
loc_82EAB81C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82EAB830;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82eab8a0
	if (cr6.eq) goto loc_82EAB8A0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82EAB850;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82eab8a0
	if (cr6.eq) goto loc_82EAB8A0;
	// li r11,29
	ctx.r11.s64 = 29;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x82EAB870;
	sub_82595150(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82eab890
	if (cr6.eq) goto loc_82EAB890;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82EAB890;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EAB890:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x82EAB898;
	sub_82595170(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82EAB8A0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82EAB8A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EAB8BC"))) PPC_WEAK_FUNC(sub_82EAB8BC);
PPC_FUNC_IMPL(__imp__sub_82EAB8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAB8C0"))) PPC_WEAK_FUNC(sub_82EAB8C0);
PPC_FUNC_IMPL(__imp__sub_82EAB8C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82EAB8C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lwz r4,40(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-16112
	ctx.r10.s64 = ctx.r11.s64 + -16112;
	// li r29,29
	ctx.r29.s64 = 29;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82eab900
	if (cr6.eq) goto loc_82EAB900;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x82EAB8FC;
	sub_825952B8(ctx, base);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
loc_82EAB900:
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82eab91c
	if (cr6.eq) goto loc_82EAB91C;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x82EAB918;
	sub_825952B8(ctx, base);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
loc_82EAB91C:
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82eab940
	if (cr6.lt) goto loc_82EAB940;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82EAB940;
	sub_825952B8(ctx, base);
loc_82EAB940:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAB958"))) PPC_WEAK_FUNC(sub_82EAB958);
PPC_FUNC_IMPL(__imp__sub_82EAB958) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82EAB960;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bgt cr6,0x82eab994
	if (cr6.gt) goto loc_82EAB994;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r3,12
	ctx.r4.s64 = ctx.r3.s64 + 12;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82EAB988;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82eabaa4
	if (cr6.eq) goto loc_82EABAA4;
loc_82EAB994:
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r29,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r29.u8);
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82EAB9C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82eaba9c
	if (cr6.eq) goto loc_82EABA9C;
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r30,29
	ctx.r30.s64 = 29;
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// beq cr6,0x82eab9f4
	if (cr6.eq) goto loc_82EAB9F4;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x82EAB9F0;
	sub_825952B8(ctx, base);
	// stw r29,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r29.u32);
loc_82EAB9F4:
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x82595718
	ctx.lr = 0x82EABA08;
	sub_82595718(ctx, base);
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82eaba9c
	if (cr6.eq) goto loc_82EABA9C;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,44(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x831cdcf0
	ctx.lr = 0x82EABA20;
	sub_831CDCF0(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82eaba34
	if (!cr6.lt) goto loc_82EABA34;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
loc_82EABA34:
	// lwz r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x831d0080
	ctx.lr = 0x82EABA44;
	sub_831D0080(ctx, base);
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82eaba60
	if (cr6.eq) goto loc_82EABA60;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825952b8
	ctx.lr = 0x82EABA5C;
	sub_825952B8(ctx, base);
	// stw r29,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r29.u32);
loc_82EABA60:
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x82595718
	ctx.lr = 0x82EABA74;
	sub_82595718(ctx, base);
	// stw r3,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82eabab0
	if (!cr6.eq) goto loc_82EABAB0;
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82eaba9c
	if (cr6.eq) goto loc_82EABA9C;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825952b8
	ctx.lr = 0x82EABA98;
	sub_825952B8(ctx, base);
	// stw r29,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r29.u32);
loc_82EABA9C:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82EABAA4;
	sub_8387E8E0(ctx, base);
loc_82EABAA4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82EABAB0:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,48(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x831cdcf0
	ctx.lr = 0x82EABABC;
	sub_831CDCF0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82eabb04
	if (cr6.eq) goto loc_82EABB04;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82595150
	ctx.lr = 0x82EABAD8;
	sub_82595150(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82eabaf8
	if (cr6.eq) goto loc_82EABAF8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82EABAF8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EABAF8:
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82595170
	ctx.lr = 0x82EABB00;
	sub_82595170(ctx, base);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
loc_82EABB04:
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,5104
	ctx.r4.u64 = ctx.r4.u64 | 5104;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82595718
	ctx.lr = 0x82EABB1C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82eabb2c
	if (cr6.eq) goto loc_82EABB2C;
	// bl 0x82e8b3a0
	ctx.lr = 0x82EABB28;
	sub_82E8B3A0(ctx, base);
	// b 0x82eabb30
	goto loc_82EABB30;
loc_82EABB2C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82EABB30:
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82eabb88
	if (!cr6.eq) goto loc_82EABB88;
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82eabb58
	if (cr6.eq) goto loc_82EABB58;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825952b8
	ctx.lr = 0x82EABB54;
	sub_825952B8(ctx, base);
	// stw r29,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r29.u32);
loc_82EABB58:
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82eaba9c
	if (cr6.eq) goto loc_82EABA9C;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x825952b8
	ctx.lr = 0x82EABB70;
	sub_825952B8(ctx, base);
	// stw r29,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r29.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82EABB7C;
	sub_8387E8E0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82EABB88:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82EABB98;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82eabbac
	if (cr6.eq) goto loc_82EABBAC;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
loc_82EABBAC:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82eabbc0
	if (cr6.lt) goto loc_82EABBC0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82EABBC0:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r8,44(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r7,40(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r6,48(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r5,52(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82EABBE8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82eaba9c
	if (!cr6.eq) goto loc_82EABA9C;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82EABBF8;
	sub_8387E8E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EABC04"))) PPC_WEAK_FUNC(sub_82EABC04);
PPC_FUNC_IMPL(__imp__sub_82EABC04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EABC08"))) PPC_WEAK_FUNC(sub_82EABC08);
PPC_FUNC_IMPL(__imp__sub_82EABC08) {
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
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-16112
	ctx.r9.s64 = ctx.r10.s64 + -16112;
	// li r8,15
	ctx.r8.s64 = 15;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r7,512
	ctx.r7.s64 = 512;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// stw r8,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r7,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r7.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// beq cr6,0x82eabc8c
	if (cr6.eq) goto loc_82EABC8C;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82EABC6C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82eabc6c
	if (!cr6.eq) goto loc_82EABC6C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82EABC8C;
	sub_8259CC28(ctx, base);
loc_82EABC8C:
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

__attribute__((alias("__imp__sub_82EABCA4"))) PPC_WEAK_FUNC(sub_82EABCA4);
PPC_FUNC_IMPL(__imp__sub_82EABCA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EABCA8"))) PPC_WEAK_FUNC(sub_82EABCA8);
PPC_FUNC_IMPL(__imp__sub_82EABCA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,152(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EABCC0"))) PPC_WEAK_FUNC(sub_82EABCC0);
PPC_FUNC_IMPL(__imp__sub_82EABCC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,152(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EABCD8"))) PPC_WEAK_FUNC(sub_82EABCD8);
PPC_FUNC_IMPL(__imp__sub_82EABCD8) {
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
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82EABCFC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,92(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 92);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82EABD10;
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

__attribute__((alias("__imp__sub_82EABD24"))) PPC_WEAK_FUNC(sub_82EABD24);
PPC_FUNC_IMPL(__imp__sub_82EABD24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EABD28"))) PPC_WEAK_FUNC(sub_82EABD28);
PPC_FUNC_IMPL(__imp__sub_82EABD28) {
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
	// lwz r11,152(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82eabd8c
	if (cr6.eq) goto loc_82EABD8C;
	// li r11,29
	ctx.r11.s64 = 29;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x82EABD5C;
	sub_82595150(ctx, base);
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82eabd7c
	if (cr6.eq) goto loc_82EABD7C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82EABD7C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EABD7C:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x82EABD84;
	sub_82595170(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
loc_82EABD8C:
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

__attribute__((alias("__imp__sub_82EABDA0"))) PPC_WEAK_FUNC(sub_82EABDA0);
PPC_FUNC_IMPL(__imp__sub_82EABDA0) {
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
	// lwz r11,156(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82eabe04
	if (cr6.eq) goto loc_82EABE04;
	// li r11,29
	ctx.r11.s64 = 29;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x82EABDD4;
	sub_82595150(ctx, base);
	// lwz r3,156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82eabdf4
	if (cr6.eq) goto loc_82EABDF4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82EABDF4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EABDF4:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x82EABDFC;
	sub_82595170(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
loc_82EABE04:
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

__attribute__((alias("__imp__sub_82EABE18"))) PPC_WEAK_FUNC(sub_82EABE18);
PPC_FUNC_IMPL(__imp__sub_82EABE18) {
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
	// addi r10,r11,-15624
	ctx.r10.s64 = ctx.r11.s64 + -15624;
	// addi r31,r3,16
	ctx.r31.s64 = ctx.r3.s64 + 16;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r9,36(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82eabe54
	if (cr6.lt) goto loc_82EABE54;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x82EABE54;
	sub_8386D088(ctx, base);
loc_82EABE54:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// bl 0x8241f040
	ctx.lr = 0x82EABE74;
	sub_8241F040(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EABE8C"))) PPC_WEAK_FUNC(sub_82EABE8C);
PPC_FUNC_IMPL(__imp__sub_82EABE8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EABE90"))) PPC_WEAK_FUNC(sub_82EABE90);
PPC_FUNC_IMPL(__imp__sub_82EABE90) {
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
	// bl 0x82eabe18
	ctx.lr = 0x82EABEB0;
	sub_82EABE18(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82eabec8
	if (cr6.eq) goto loc_82EABEC8;
	// bl 0x82416268
	ctx.lr = 0x82EABEC4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82EABEC8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EABEE0"))) PPC_WEAK_FUNC(sub_82EABEE0);
PPC_FUNC_IMPL(__imp__sub_82EABEE0) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,-15624
	ctx.r10.s64 = ctx.r11.s64 + -15624;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// std r30,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r30.u64);
	// bl 0x8241f040
	ctx.lr = 0x82EABF18;
	sub_8241F040(ctx, base);
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// li r8,15
	ctx.r8.s64 = 15;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// addi r7,r9,-15616
	ctx.r7.s64 = ctx.r9.s64 + -15616;
	// stw r8,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r30,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r30.u8);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EABF50"))) PPC_WEAK_FUNC(sub_82EABF50);
PPC_FUNC_IMPL(__imp__sub_82EABF50) {
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
	// addi r10,r11,-15616
	ctx.r10.s64 = ctx.r11.s64 + -15616;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82eabe18
	ctx.lr = 0x82EABF7C;
	sub_82EABE18(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82eabf94
	if (cr6.eq) goto loc_82EABF94;
	// bl 0x82416268
	ctx.lr = 0x82EABF90;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82EABF94:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EABFAC"))) PPC_WEAK_FUNC(sub_82EABFAC);
PPC_FUNC_IMPL(__imp__sub_82EABFAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EABFB0"))) PPC_WEAK_FUNC(sub_82EABFB0);
PPC_FUNC_IMPL(__imp__sub_82EABFB0) {
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
	// bl 0x82e87ec0
	ctx.lr = 0x82EABFC8;
	sub_82E87EC0(ctx, base);
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-15608
	ctx.r9.s64 = ctx.r10.s64 + -15608;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lis r8,-31757
	ctx.r8.s64 = -2081226752;
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r10,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r10.u32);
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
	// stb r11,160(r31)
	PPC_STORE_U8(ctx.r31.u32 + 160, ctx.r11.u8);
	// stw r10,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r10.u32);
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// stb r11,188(r31)
	PPC_STORE_U8(ctx.r31.u32 + 188, ctx.r11.u8);
	// sth r11,216(r31)
	PPC_STORE_U16(ctx.r31.u32 + 216, ctx.r11.u16);
	// stw r10,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r10.u32);
	// stw r11,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r11.u32);
	// stb r11,220(r31)
	PPC_STORE_U8(ctx.r31.u32 + 220, ctx.r11.u8);
	// stw r10,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r10.u32);
	// stw r11,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r11.u32);
	// stb r11,248(r31)
	PPC_STORE_U8(ctx.r31.u32 + 248, ctx.r11.u8);
	// stw r10,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r10.u32);
	// stw r11,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r11.u32);
	// stb r11,276(r31)
	PPC_STORE_U8(ctx.r31.u32 + 276, ctx.r11.u8);
	// stw r11,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r11.u32);
	// stw r11,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
	// stw r11,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r11.u32);
	// stw r7,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r7.u32);
	// lwz r4,24700(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24700);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82eac060
	if (cr6.eq) goto loc_82EAC060;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e8ce80
	ctx.lr = 0x82EAC058;
	sub_82E8CE80(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r11.u32);
loc_82EAC060:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,114(r31)
	PPC_STORE_U8(ctx.r31.u32 + 114, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82EAC080"))) PPC_WEAK_FUNC(sub_82EAC080);
PPC_FUNC_IMPL(__imp__sub_82EAC080) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82EAC088;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lwz r10,308(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,-15608
	ctx.r9.s64 = ctx.r11.s64 + -15608;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82eac0ec
	if (cr6.eq) goto loc_82EAC0EC;
	// li r11,29
	ctx.r11.s64 = 29;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x82EAC0C0;
	sub_82595150(ctx, base);
	// lwz r3,308(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82eac0e0
	if (cr6.eq) goto loc_82EAC0E0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82EAC0E0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EAC0E0:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x82EAC0E8;
	sub_82595170(ctx, base);
	// stw r30,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r30.u32);
loc_82EAC0EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eabd28
	ctx.lr = 0x82EAC0F4;
	sub_82EABD28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eabda0
	ctx.lr = 0x82EAC0FC;
	sub_82EABDA0(ctx, base);
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// lwz r3,24700(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24700);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82eac114
	if (cr6.eq) goto loc_82EAC114;
	// lwz r4,312(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// bl 0x82e8d138
	ctx.lr = 0x82EAC114;
	sub_82E8D138(ctx, base);
loc_82EAC114:
	// lwz r11,296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// addi r28,r31,276
	ctx.r28.s64 = ctx.r31.s64 + 276;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82eac12c
	if (cr6.lt) goto loc_82EAC12C;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x82EAC12C;
	sub_8386D088(ctx, base);
loc_82EAC12C:
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r30,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r30.u32);
	// addi r29,r31,248
	ctx.r29.s64 = ctx.r31.s64 + 248;
	// stw r27,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r27.u32);
	// stb r30,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r30.u8);
	// lwz r11,268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82eac154
	if (cr6.lt) goto loc_82EAC154;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x82EAC154;
	sub_8386D088(ctx, base);
loc_82EAC154:
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// addi r28,r31,220
	ctx.r28.s64 = ctx.r31.s64 + 220;
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// stb r30,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r30.u8);
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82eac178
	if (cr6.lt) goto loc_82EAC178;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x82EAC178;
	sub_8386D088(ctx, base);
loc_82EAC178:
	// stw r27,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r27.u32);
	// addi r29,r31,188
	ctx.r29.s64 = ctx.r31.s64 + 188;
	// stw r30,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r30.u32);
	// stb r30,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r30.u8);
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82eac19c
	if (cr6.lt) goto loc_82EAC19C;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x82EAC19C;
	sub_8386D088(ctx, base);
loc_82EAC19C:
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// addi r28,r31,160
	ctx.r28.s64 = ctx.r31.s64 + 160;
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// stb r30,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r30.u8);
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82eac1c0
	if (cr6.lt) goto loc_82EAC1C0;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x82EAC1C0;
	sub_8386D088(ctx, base);
loc_82EAC1C0:
	// stw r27,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r30.u32);
	// stb r30,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r30.u8);
	// bl 0x82e87f50
	ctx.lr = 0x82EAC1D4;
	sub_82E87F50(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAC1DC"))) PPC_WEAK_FUNC(sub_82EAC1DC);
PPC_FUNC_IMPL(__imp__sub_82EAC1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAC1E0"))) PPC_WEAK_FUNC(sub_82EAC1E0);
PPC_FUNC_IMPL(__imp__sub_82EAC1E0) {
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
	// lwz r11,156(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eac230
	if (!cr6.eq) goto loc_82EAC230;
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
	ctx.lr = 0x82EAC218;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82eac228
	if (cr6.eq) goto loc_82EAC228;
	// bl 0x82eabee0
	ctx.lr = 0x82EAC224;
	sub_82EABEE0(ctx, base);
	// b 0x82eac22c
	goto loc_82EAC22C;
loc_82EAC228:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EAC22C:
	// stw r3,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r3.u32);
loc_82EAC230:
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

__attribute__((alias("__imp__sub_82EAC244"))) PPC_WEAK_FUNC(sub_82EAC244);
PPC_FUNC_IMPL(__imp__sub_82EAC244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAC248"))) PPC_WEAK_FUNC(sub_82EAC248);
PPC_FUNC_IMPL(__imp__sub_82EAC248) {
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
	// bl 0x82eac080
	ctx.lr = 0x82EAC268;
	sub_82EAC080(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82eac280
	if (cr6.eq) goto loc_82EAC280;
	// bl 0x82416268
	ctx.lr = 0x82EAC27C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82EAC280:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EAC298"))) PPC_WEAK_FUNC(sub_82EAC298);
PPC_FUNC_IMPL(__imp__sub_82EAC298) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bge cr6,0x82eac2cc
	if (!cr6.lt) goto loc_82EAC2CC;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x8241fcf0
	ctx.lr = 0x82EAC2CC;
	sub_8241FCF0(ctx, base);
loc_82EAC2CC:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82eac2e0
	if (cr6.lt) goto loc_82EAC2E0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82eac2e4
	goto loc_82EAC2E4;
loc_82EAC2E0:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82EAC2E4:
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// blt cr6,0x82eac304
	if (cr6.lt) goto loc_82EAC304;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82eac308
	goto loc_82EAC308;
loc_82EAC304:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82EAC308:
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r10,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EAC32C"))) PPC_WEAK_FUNC(sub_82EAC32C);
PPC_FUNC_IMPL(__imp__sub_82EAC32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAC330"))) PPC_WEAK_FUNC(sub_82EAC330);
PPC_FUNC_IMPL(__imp__sub_82EAC330) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82EAC338;
	__savegprlr_25(ctx, base);
	// stwu r1,-2192(r1)
	ea = -2192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x82EAC360;
	sub_831CDCF0(ctx, base);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,1104
	ctx.r3.s64 = ctx.r1.s64 + 1104;
	// bl 0x831cdcf0
	ctx.lr = 0x82EAC370;
	sub_831CDCF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82eac298
	ctx.lr = 0x82EAC37C;
	sub_82EAC298(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82eac298
	ctx.lr = 0x82EAC388;
	sub_82EAC298(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r28,0(r26)
	PPC_STORE_U16(ctx.r26.u32 + 0, ctx.r28.u16);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82eac298
	ctx.lr = 0x82EAC39C;
	sub_82EAC298(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eac3b4
	if (!cr6.eq) goto loc_82EAC3B4;
loc_82EAC3A8:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,2192
	ctx.r1.s64 = ctx.r1.s64 + 2192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82EAC3B4:
	// cmplwi cr6,r11,1023
	cr6.compare<uint32_t>(ctx.r11.u32, 1023, xer);
	// bgt cr6,0x82eac3a8
	if (cr6.gt) goto loc_82EAC3A8;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82eac3d0
	if (cr6.lt) goto loc_82EAC3D0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82eac3d4
	goto loc_82EAC3D4;
loc_82EAC3D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82EAC3D4:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r8,1024
	ctx.r8.s64 = 1024;
	// addi r27,r11,-15736
	ctx.r27.s64 = ctx.r11.s64 + -15736;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r4,r27,-20
	ctx.r4.s64 = ctx.r27.s64 + -20;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// addi r5,r1,1104
	ctx.r5.s64 = ctx.r1.s64 + 1104;
	// bl 0x831d2de8
	ctx.lr = 0x82EAC3F4;
	sub_831D2DE8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x82eac3a8
	if (!cr6.gt) goto loc_82EAC3A8;
	// addi r11,r1,1104
	ctx.r11.s64 = ctx.r1.s64 + 1104;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82EAC404:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82eac404
	if (!cr6.eq) goto loc_82EAC404;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,1104
	ctx.r4.s64 = ctx.r1.s64 + 1104;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82EAC42C;
	sub_824208C8(ctx, base);
	// addi r4,r27,-8
	ctx.r4.s64 = ctx.r27.s64 + -8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831d3450
	ctx.lr = 0x82EAC438;
	sub_831D3450(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82eac474
	if (cr6.eq) goto loc_82EAC474;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82EAC448:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82eac448
	if (!cr6.eq) goto loc_82EAC448;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82EAC470;
	sub_824208C8(ctx, base);
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
loc_82EAC474:
	// addi r4,r27,-4
	ctx.r4.s64 = ctx.r27.s64 + -4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831d3450
	ctx.lr = 0x82EAC480;
	sub_831D3450(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82eac49c
	if (cr6.eq) goto loc_82EAC49C;
	// stb r28,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r28.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bl 0x831d88a0
	ctx.lr = 0x82EAC498;
	sub_831D88A0(ctx, base);
	// sth r3,0(r26)
	PPC_STORE_U16(ctx.r26.u32 + 0, ctx.r3.u16);
loc_82EAC49C:
	// lhz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eac4b0
	if (!cr6.eq) goto loc_82EAC4B0;
	// li r11,80
	ctx.r11.s64 = 80;
	// sth r11,0(r26)
	PPC_STORE_U16(ctx.r26.u32 + 0, ctx.r11.u16);
loc_82EAC4B0:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82EAC4B8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82eac4b8
	if (!cr6.eq) goto loc_82EAC4B8;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82EAC4E0;
	sub_824208C8(ctx, base);
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bgt cr6,0x82eac4fc
	if (cr6.gt) goto loc_82EAC4FC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824208c8
	ctx.lr = 0x82EAC4FC;
	sub_824208C8(ctx, base);
loc_82EAC4FC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,2192
	ctx.r1.s64 = ctx.r1.s64 + 2192;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAC508"))) PPC_WEAK_FUNC(sub_82EAC508);
PPC_FUNC_IMPL(__imp__sub_82EAC508) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82EAC510;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,152(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82eac684
	if (cr6.eq) goto loc_82EAC684;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82EAC534;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r9,114(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 114);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82eac544
	if (cr6.eq) goto loc_82EAC544;
	// bl 0x82d48260
	ctx.lr = 0x82EAC544;
	sub_82D48260(ctx, base);
loc_82EAC544:
	// lwz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82eac574
	if (cr6.lt) goto loc_82EAC574;
	// bne cr6,0x82eac668
	if (!cr6.eq) goto loc_82EAC668;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e879f8
	ctx.lr = 0x82EAC55C;
	sub_82E879F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82eac668
	if (cr6.eq) goto loc_82EAC668;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82EAC574:
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// lwz r29,12(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lbz r10,192(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 192);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82eac668
	if (cr6.eq) goto loc_82EAC668;
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lis r10,-31757
	ctx.r10.s64 = -2081226752;
	// addi r3,r10,27728
	ctx.r3.s64 = ctx.r10.s64 + 27728;
	// stw r11,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
	// bl 0x8252e3c0
	ctx.lr = 0x82EAC59C;
	sub_8252E3C0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r30,r29,316
	ctx.r30.s64 = ctx.r29.s64 + 316;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82EAC5A8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82eac5a8
	if (!cr6.eq) goto loc_82EAC5A8;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a8810
	ctx.lr = 0x82EAC5D4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bne cr6,0x82eac674
	if (!cr6.eq) goto loc_82EAC674;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e880b8
	ctx.lr = 0x82EAC5F0;
	sub_82E880B8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82586b80
	ctx.lr = 0x82EAC5FC;
	sub_82586B80(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83354bb8
	ctx.lr = 0x82EAC608;
	sub_83354BB8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e884d0
	ctx.lr = 0x82EAC614;
	sub_82E884D0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825832e8
	ctx.lr = 0x82EAC61C;
	sub_825832E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82586d00
	ctx.lr = 0x82EAC628;
	sub_82586D00(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stb r11,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r11.u8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x824208c8
	ctx.lr = 0x82EAC64C;
	sub_824208C8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8241fe60
	ctx.lr = 0x82EAC654;
	sub_8241FE60(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82586bd8
	ctx.lr = 0x82EAC65C;
	sub_82586BD8(ctx, base);
	// lwz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r9.u32);
loc_82EAC668:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82EAC674:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r6,320(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e880b8
	ctx.lr = 0x82EAC684;
	sub_82E880B8(ctx, base);
loc_82EAC684:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAC690"))) PPC_WEAK_FUNC(sub_82EAC690);
PPC_FUNC_IMPL(__imp__sub_82EAC690) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82EAC694:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82eac694
	if (!cr6.eq) goto loc_82EAC694;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r3,160
	ctx.r3.s64 = ctx.r3.s64 + 160;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x824208c8
	sub_824208C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAC6B8"))) PPC_WEAK_FUNC(sub_82EAC6B8);
PPC_FUNC_IMPL(__imp__sub_82EAC6B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82EAC6C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,304(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82eac7c0
	if (cr6.lt) goto loc_82EAC7C0;
	// bne cr6,0x82eac95c
	if (!cr6.eq) goto loc_82EAC95C;
	// lwz r3,308(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	// bl 0x82eedb90
	ctx.lr = 0x82EAC6E0;
	sub_82EEDB90(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82eac95c
	if (cr6.eq) goto loc_82EAC95C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,308(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// bl 0x82eedb70
	ctx.lr = 0x82EAC6F8;
	sub_82EEDB70(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r4,32
	ctx.r4.s64 = 32;
	// lbz r9,83(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 83);
	// addi r5,r11,-15720
	ctx.r5.s64 = ctx.r11.s64 + -15720;
	// lbz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lbz r7,81(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x831d0b08
	ctx.lr = 0x82EAC71C;
	sub_831D0B08(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82EAC724:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82eac724
	if (!cr6.eq) goto loc_82EAC724;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r30,r31,220
	ctx.r30.s64 = ctx.r31.s64 + 220;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x824208c8
	ctx.lr = 0x82EAC750;
	sub_824208C8(ctx, base);
	// addi r6,r31,248
	ctx.r6.s64 = ctx.r31.s64 + 248;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lhz r5,216(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 216);
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// bl 0x83356c08
	ctx.lr = 0x82EAC764;
	sub_83356C08(ctx, base);
	// lwz r10,308(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82eac7b4
	if (cr6.eq) goto loc_82EAC7B4;
	// li r11,29
	ctx.r11.s64 = 29;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595150
	ctx.lr = 0x82EAC784;
	sub_82595150(ctx, base);
	// lwz r3,308(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82eac7a4
	if (cr6.eq) goto loc_82EAC7A4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82EAC7A4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EAC7A4:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595170
	ctx.lr = 0x82EAC7AC;
	sub_82595170(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
loc_82EAC7B4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82EAC7C0:
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eac804
	if (!cr6.eq) goto loc_82EAC804;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82EAC7E0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82eac804
	if (cr6.eq) goto loc_82EAC804;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,220
	ctx.r4.s64 = ctx.r11.s64 + 220;
	// addi r3,r31,116
	ctx.r3.s64 = ctx.r31.s64 + 116;
	// bl 0x82420558
	ctx.lr = 0x82EAC804;
	sub_82420558(ctx, base);
loc_82EAC804:
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eac818
	if (!cr6.eq) goto loc_82EAC818;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eac1e0
	ctx.lr = 0x82EAC818;
	sub_82EAC1E0(ctx, base);
loc_82EAC818:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82EAC82C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82eac95c
	if (cr6.eq) goto loc_82EAC95C;
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82eac950
	if (cr6.eq) goto loc_82EAC950;
	// lwz r10,156(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// lwz r9,176(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// ble cr6,0x82eac8b8
	if (!cr6.gt) goto loc_82EAC8B8;
	// lwz r10,180(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// addi r11,r31,160
	ctx.r11.s64 = ctx.r31.s64 + 160;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82eac870
	if (cr6.lt) goto loc_82EAC870;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82eac874
	goto loc_82EAC874;
loc_82EAC870:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_82EAC874:
	// bl 0x82e6e978
	ctx.lr = 0x82EAC878;
	sub_82E6E978(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x82e80aa8
	ctx.lr = 0x82EAC884;
	sub_82E80AA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82eac950
	if (cr6.eq) goto loc_82EAC950;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82EAC894:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82eac894
	if (!cr6.eq) goto loc_82EAC894;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,188
	ctx.r3.s64 = ctx.r31.s64 + 188;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82EAC8B8;
	sub_824208C8(ctx, base);
loc_82EAC8B8:
	// addi r29,r31,248
	ctx.r29.s64 = ctx.r31.s64 + 248;
	// addi r28,r31,216
	ctx.r28.s64 = ctx.r31.s64 + 216;
	// addi r30,r31,220
	ctx.r30.s64 = ctx.r31.s64 + 220;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r31,276
	ctx.r4.s64 = ctx.r31.s64 + 276;
	// addi r3,r31,188
	ctx.r3.s64 = ctx.r31.s64 + 188;
	// bl 0x82eac330
	ctx.lr = 0x82EAC8DC;
	sub_82EAC330(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82eac950
	if (cr6.lt) goto loc_82EAC950;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lbz r9,315(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 315);
	// li r4,32
	ctx.r4.s64 = 32;
	// lbz r8,314(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 314);
	// addi r11,r11,-15720
	ctx.r11.s64 = ctx.r11.s64 + -15720;
	// lbz r7,313(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 313);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lbz r6,312(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 312);
	// addi r5,r11,-12
	ctx.r5.s64 = ctx.r11.s64 + -12;
	// bl 0x831d0b08
	ctx.lr = 0x82EAC90C;
	sub_831D0B08(ctx, base);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82EAC914:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82eac914
	if (!cr6.eq) goto loc_82EAC914;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82EAC93C;
	sub_824208C8(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lhz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// bl 0x83356c08
	ctx.lr = 0x82EAC950;
	sub_83356C08(ctx, base);
loc_82EAC950:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82EAC95C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAC968"))) PPC_WEAK_FUNC(sub_82EAC968);
PPC_FUNC_IMPL(__imp__sub_82EAC968) {
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
	// bl 0x82e8ba80
	ctx.lr = 0x82EAC980;
	sub_82E8BA80(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-15368
	ctx.r9.s64 = ctx.r11.s64 + -15368;
	// stb r10,204(r31)
	PPC_STORE_U8(ctx.r31.u32 + 204, ctx.r10.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82EAC9AC"))) PPC_WEAK_FUNC(sub_82EAC9AC);
PPC_FUNC_IMPL(__imp__sub_82EAC9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAC9B0"))) PPC_WEAK_FUNC(sub_82EAC9B0);
PPC_FUNC_IMPL(__imp__sub_82EAC9B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r10,r11,-15368
	ctx.r10.s64 = ctx.r11.s64 + -15368;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x82e8bdc0
	sub_82E8BDC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAC9C0"))) PPC_WEAK_FUNC(sub_82EAC9C0);
PPC_FUNC_IMPL(__imp__sub_82EAC9C0) {
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
	// addi r10,r11,-15368
	ctx.r10.s64 = ctx.r11.s64 + -15368;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82e8bdc0
	ctx.lr = 0x82EAC9EC;
	sub_82E8BDC0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82eaca04
	if (cr6.eq) goto loc_82EACA04;
	// bl 0x82416268
	ctx.lr = 0x82EACA00;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82EACA04:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EACA1C"))) PPC_WEAK_FUNC(sub_82EACA1C);
PPC_FUNC_IMPL(__imp__sub_82EACA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EACA20"))) PPC_WEAK_FUNC(sub_82EACA20);
PPC_FUNC_IMPL(__imp__sub_82EACA20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82EACA28;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,160
	ctx.r28.s64 = ctx.r3.s64 + 160;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82EACA3C;
	sub_82596FE8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82EACA50;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,156(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82eacbe0
	if (cr6.eq) goto loc_82EACBE0;
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82eacadc
	if (cr6.lt) goto loc_82EACADC;
	// bne cr6,0x82eacac8
	if (!cr6.eq) goto loc_82EACAC8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e879f8
	ctx.lr = 0x82EACA74;
	sub_82E879F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82eacac8
	if (cr6.eq) goto loc_82EACAC8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82EACA94;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8bae8
	ctx.lr = 0x82EACA9C;
	sub_82E8BAE8(ctx, base);
	// addi r11,r3,316
	ctx.r11.s64 = ctx.r3.s64 + 316;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82eacab8
	if (cr6.lt) goto loc_82EACAB8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82EACAB8:
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// stw r10,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r10.u32);
	// stb r9,204(r31)
	PPC_STORE_U8(ctx.r31.u32 + 204, ctx.r9.u8);
loc_82EACAC8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82597088
	ctx.lr = 0x82EACAD0;
	sub_82597088(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82EACADC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8bae8
	ctx.lr = 0x82EACAE4;
	sub_82E8BAE8(ctx, base);
	// lwz r11,332(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 332);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82eacac8
	if (cr6.eq) goto loc_82EACAC8;
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// addi r3,r11,27752
	ctx.r3.s64 = ctx.r11.s64 + 27752;
	// bl 0x8252e3c0
	ctx.lr = 0x82EACB00;
	sub_8252E3C0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r30,r29,316
	ctx.r30.s64 = ctx.r29.s64 + 316;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82EACB0C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82eacb0c
	if (!cr6.eq) goto loc_82EACB0C;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a8810
	ctx.lr = 0x82EACB38;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82eacbd8
	if (!cr6.eq) goto loc_82EACBD8;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82e880b8
	ctx.lr = 0x82EACB54;
	sub_82E880B8(ctx, base);
	// bl 0x83356788
	ctx.lr = 0x82EACB58;
	sub_83356788(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82eacbac
	if (!cr6.eq) goto loc_82EACBAC;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82586b80
	ctx.lr = 0x82EACB6C;
	sub_82586B80(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83354bb8
	ctx.lr = 0x82EACB78;
	sub_83354BB8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e884d0
	ctx.lr = 0x82EACB84;
	sub_82E884D0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82586bd8
	ctx.lr = 0x82EACB8C;
	sub_82586BD8(ctx, base);
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
	// bl 0x82597088
	ctx.lr = 0x82EACBA0;
	sub_82597088(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82EACBAC:
	// addi r4,r29,204
	ctx.r4.s64 = ctx.r29.s64 + 204;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88708
	ctx.lr = 0x82EACBB8;
	sub_82E88708(ctx, base);
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
	// bl 0x82597088
	ctx.lr = 0x82EACBCC;
	sub_82597088(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82EACBD8:
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82e880b8
	ctx.lr = 0x82EACBE0;
	sub_82E880B8(ctx, base);
loc_82EACBE0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82597088
	ctx.lr = 0x82EACBE8;
	sub_82597088(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EACBF4"))) PPC_WEAK_FUNC(sub_82EACBF4);
PPC_FUNC_IMPL(__imp__sub_82EACBF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EACBF8"))) PPC_WEAK_FUNC(sub_82EACBF8);
PPC_FUNC_IMPL(__imp__sub_82EACBF8) {
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
	// addi r30,r3,160
	ctx.r30.s64 = ctx.r3.s64 + 160;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82EACC1C;
	sub_82596FE8(ctx, base);
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eacc3c
	if (!cr6.eq) goto loc_82EACC3C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82EACC3C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EACC3C:
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82eacc5c
	if (cr6.eq) goto loc_82EACC5C;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,220
	ctx.r4.s64 = ctx.r11.s64 + 220;
	// addi r3,r31,116
	ctx.r3.s64 = ctx.r31.s64 + 116;
	// bl 0x82420558
	ctx.lr = 0x82EACC5C;
	sub_82420558(ctx, base);
loc_82EACC5C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82EACC70;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82eacca4
	if (cr6.eq) goto loc_82EACCA4;
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82eacc94
	if (cr6.eq) goto loc_82EACC94;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,192(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// bl 0x82ee2fd0
	ctx.lr = 0x82EACC94;
	sub_82EE2FD0(ctx, base);
loc_82EACC94:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82597088
	ctx.lr = 0x82EACC9C;
	sub_82597088(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82eaccb0
	goto loc_82EACCB0;
loc_82EACCA4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82597088
	ctx.lr = 0x82EACCAC;
	sub_82597088(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EACCB0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EACCC8"))) PPC_WEAK_FUNC(sub_82EACCC8);
PPC_FUNC_IMPL(__imp__sub_82EACCC8) {
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
	// bl 0x82e8ba80
	ctx.lr = 0x82EACCE0;
	sub_82E8BA80(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-15112
	ctx.r10.s64 = ctx.r11.s64 + -15112;
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

__attribute__((alias("__imp__sub_82EACD04"))) PPC_WEAK_FUNC(sub_82EACD04);
PPC_FUNC_IMPL(__imp__sub_82EACD04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EACD08"))) PPC_WEAK_FUNC(sub_82EACD08);
PPC_FUNC_IMPL(__imp__sub_82EACD08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r10,r11,-15112
	ctx.r10.s64 = ctx.r11.s64 + -15112;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x82e8bdc0
	sub_82E8BDC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EACD18"))) PPC_WEAK_FUNC(sub_82EACD18);
PPC_FUNC_IMPL(__imp__sub_82EACD18) {
	PPC_FUNC_PROLOGUE();
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EACD24"))) PPC_WEAK_FUNC(sub_82EACD24);
PPC_FUNC_IMPL(__imp__sub_82EACD24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EACD28"))) PPC_WEAK_FUNC(sub_82EACD28);
PPC_FUNC_IMPL(__imp__sub_82EACD28) {
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
	// addi r10,r11,-15112
	ctx.r10.s64 = ctx.r11.s64 + -15112;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82e8bdc0
	ctx.lr = 0x82EACD54;
	sub_82E8BDC0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82eacd6c
	if (cr6.eq) goto loc_82EACD6C;
	// bl 0x82416268
	ctx.lr = 0x82EACD68;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82EACD6C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EACD84"))) PPC_WEAK_FUNC(sub_82EACD84);
PPC_FUNC_IMPL(__imp__sub_82EACD84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EACD88"))) PPC_WEAK_FUNC(sub_82EACD88);
PPC_FUNC_IMPL(__imp__sub_82EACD88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82EACD90;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,160
	ctx.r28.s64 = ctx.r3.s64 + 160;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82EACDA4;
	sub_82596FE8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82EACDB8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,156(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82eacf40
	if (cr6.eq) goto loc_82EACF40;
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82eace3c
	if (cr6.lt) goto loc_82EACE3C;
	// bne cr6,0x82eace28
	if (!cr6.eq) goto loc_82EACE28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e879f8
	ctx.lr = 0x82EACDDC;
	sub_82E879F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82eace28
	if (cr6.eq) goto loc_82EACE28;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82EACDFC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8bae8
	ctx.lr = 0x82EACE04;
	sub_82E8BAE8(ctx, base);
	// addi r11,r3,316
	ctx.r11.s64 = ctx.r3.s64 + 316;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82eace20
	if (cr6.lt) goto loc_82EACE20;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82EACE20:
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// stw r10,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r10.u32);
loc_82EACE28:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82597088
	ctx.lr = 0x82EACE30;
	sub_82597088(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82EACE3C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8bae8
	ctx.lr = 0x82EACE44;
	sub_82E8BAE8(ctx, base);
	// lwz r11,332(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 332);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82eace28
	if (cr6.eq) goto loc_82EACE28;
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// addi r3,r11,27776
	ctx.r3.s64 = ctx.r11.s64 + 27776;
	// bl 0x8252e3c0
	ctx.lr = 0x82EACE60;
	sub_8252E3C0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r30,r29,316
	ctx.r30.s64 = ctx.r29.s64 + 316;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82EACE6C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82eace6c
	if (!cr6.eq) goto loc_82EACE6C;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a8810
	ctx.lr = 0x82EACE98;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82eacf38
	if (!cr6.eq) goto loc_82EACF38;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82e880b8
	ctx.lr = 0x82EACEB4;
	sub_82E880B8(ctx, base);
	// bl 0x83356788
	ctx.lr = 0x82EACEB8;
	sub_83356788(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82eacf0c
	if (!cr6.eq) goto loc_82EACF0C;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82586b80
	ctx.lr = 0x82EACECC;
	sub_82586B80(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83354bb8
	ctx.lr = 0x82EACED8;
	sub_83354BB8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e884d0
	ctx.lr = 0x82EACEE4;
	sub_82E884D0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82586bd8
	ctx.lr = 0x82EACEEC;
	sub_82586BD8(ctx, base);
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
	// bl 0x82597088
	ctx.lr = 0x82EACF00;
	sub_82597088(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82EACF0C:
	// addi r4,r29,204
	ctx.r4.s64 = ctx.r29.s64 + 204;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88708
	ctx.lr = 0x82EACF18;
	sub_82E88708(ctx, base);
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
	// bl 0x82597088
	ctx.lr = 0x82EACF2C;
	sub_82597088(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82EACF38:
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82e880b8
	ctx.lr = 0x82EACF40;
	sub_82E880B8(ctx, base);
loc_82EACF40:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82597088
	ctx.lr = 0x82EACF48;
	sub_82597088(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EACF54"))) PPC_WEAK_FUNC(sub_82EACF54);
PPC_FUNC_IMPL(__imp__sub_82EACF54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EACF58"))) PPC_WEAK_FUNC(sub_82EACF58);
PPC_FUNC_IMPL(__imp__sub_82EACF58) {
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
	// addi r30,r3,160
	ctx.r30.s64 = ctx.r3.s64 + 160;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82EACF7C;
	sub_82596FE8(ctx, base);
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eacf9c
	if (!cr6.eq) goto loc_82EACF9C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82EACF9C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EACF9C:
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82eacfbc
	if (cr6.eq) goto loc_82EACFBC;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,220
	ctx.r4.s64 = ctx.r11.s64 + 220;
	// addi r3,r31,116
	ctx.r3.s64 = ctx.r31.s64 + 116;
	// bl 0x82420558
	ctx.lr = 0x82EACFBC;
	sub_82420558(ctx, base);
loc_82EACFBC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82EACFD0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82ead004
	if (cr6.eq) goto loc_82EAD004;
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82eacff4
	if (cr6.eq) goto loc_82EACFF4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,192(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// bl 0x82ee2ec8
	ctx.lr = 0x82EACFF4;
	sub_82EE2EC8(ctx, base);
loc_82EACFF4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82597088
	ctx.lr = 0x82EACFFC;
	sub_82597088(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82ead010
	goto loc_82EAD010;
loc_82EAD004:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82597088
	ctx.lr = 0x82EAD00C;
	sub_82597088(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EAD010:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EAD028"))) PPC_WEAK_FUNC(sub_82EAD028);
PPC_FUNC_IMPL(__imp__sub_82EAD028) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,208
	ctx.r11.s64 = ctx.r3.s64 + 208;
	// stw r4,620(r3)
	PPC_STORE_U32(ctx.r3.u32 + 620, ctx.r4.u32);
	// stw r11,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EAD038"))) PPC_WEAK_FUNC(sub_82EAD038);
PPC_FUNC_IMPL(__imp__sub_82EAD038) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,41(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 41);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ead054
	if (cr6.eq) goto loc_82EAD054;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82EAD054:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,41(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 41);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82ead090
	if (!cr6.eq) goto loc_82EAD090;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lbz r9,41(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 41);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82ead088
	if (!cr6.eq) goto loc_82EAD088;
loc_82EAD074:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,41(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 41);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82ead074
	if (cr6.eq) goto loc_82EAD074;
loc_82EAD088:
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_82EAD090:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,41(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 41);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ead0c8
	if (!cr6.eq) goto loc_82EAD0C8;
loc_82EAD0A0:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82ead0c8
	if (!cr6.eq) goto loc_82EAD0C8;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,41(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 41);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ead0a0
	if (cr6.eq) goto loc_82EAD0A0;
loc_82EAD0C8:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r9,41(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 41);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EAD0E0"))) PPC_WEAK_FUNC(sub_82EAD0E0);
PPC_FUNC_IMPL(__imp__sub_82EAD0E0) {
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
	// addi r31,r3,160
	ctx.r31.s64 = ctx.r3.s64 + 160;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82EAD104;
	sub_82596FE8(ctx, base);
	// lwz r11,620(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 620);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ead12c
	if (cr6.eq) goto loc_82EAD12C;
	// lwz r11,332(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r31,r10,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x82597088
	ctx.lr = 0x82EAD124;
	sub_82597088(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82ead134
	goto loc_82EAD134;
loc_82EAD12C:
	// bl 0x82597088
	ctx.lr = 0x82EAD130;
	sub_82597088(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EAD134:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EAD14C"))) PPC_WEAK_FUNC(sub_82EAD14C);
PPC_FUNC_IMPL(__imp__sub_82EAD14C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAD150"))) PPC_WEAK_FUNC(sub_82EAD150);
PPC_FUNC_IMPL(__imp__sub_82EAD150) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,41(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 41);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,41(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 41);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82ead19c
	if (!cr6.eq) goto loc_82EAD19C;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r9,41(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 41);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82ead194
	if (!cr6.eq) goto loc_82EAD194;
loc_82EAD180:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,41(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 41);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82ead180
	if (cr6.eq) goto loc_82EAD180;
loc_82EAD194:
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_82EAD19C:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,41(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 41);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ead1d4
	if (!cr6.eq) goto loc_82EAD1D4;
loc_82EAD1AC:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82ead1d4
	if (!cr6.eq) goto loc_82EAD1D4;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,41(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 41);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ead1ac
	if (cr6.eq) goto loc_82EAD1AC;
loc_82EAD1D4:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EAD1DC"))) PPC_WEAK_FUNC(sub_82EAD1DC);
PPC_FUNC_IMPL(__imp__sub_82EAD1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAD1E0"))) PPC_WEAK_FUNC(sub_82EAD1E0);
PPC_FUNC_IMPL(__imp__sub_82EAD1E0) {
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
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82416260
	ctx.lr = 0x82EAD1FC;
	sub_82416260(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ead23c
	if (cr6.eq) goto loc_82EAD23C;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
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
	// stb r11,40(r3)
	PPC_STORE_U8(ctx.r3.u32 + 40, ctx.r11.u8);
	// stb r11,41(r3)
	PPC_STORE_U8(ctx.r3.u32 + 41, ctx.r11.u8);
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
loc_82EAD23C:
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
	ctx.lr = 0x82EAD258;
	sub_8246B850(ctx, base);
}

__attribute__((alias("__imp__sub_82EAD258"))) PPC_WEAK_FUNC(sub_82EAD258);
PPC_FUNC_IMPL(__imp__sub_82EAD258) {
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
	// std r4,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r4.u64);
	// cmpldi cr6,r4,256
	cr6.compare<uint64_t>(ctx.r4.u64, 256, xer);
	// bge cr6,0x82ead33c
	if (!cr6.lt) goto loc_82EAD33C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpldi cr6,r4,128
	cr6.compare<uint64_t>(ctx.r4.u64, 128, xer);
	// bge cr6,0x82ead2d0
	if (!cr6.lt) goto loc_82EAD2D0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bge cr6,0x82ead29c
	if (!cr6.lt) goto loc_82EAD29C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82e745e0
	ctx.lr = 0x82EAD29C;
	sub_82E745E0(ctx, base);
loc_82EAD29C:
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
loc_82EAD2D0:
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
	// bge cr6,0x82ead2fc
	if (!cr6.lt) goto loc_82EAD2FC;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e745e0
	ctx.lr = 0x82EAD2FC;
	sub_82E745E0(ctx, base);
loc_82EAD2FC:
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
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
loc_82EAD33C:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpld cr6,r4,r11
	cr6.compare<uint64_t>(ctx.r4.u64, ctx.r11.u64, xer);
	// bge cr6,0x82ead3bc
	if (!cr6.lt) goto loc_82EAD3BC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
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
	// bge cr6,0x82ead374
	if (!cr6.lt) goto loc_82EAD374;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e745e0
	ctx.lr = 0x82EAD374;
	sub_82E745E0(ctx, base);
loc_82EAD374:
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
loc_82EAD3BC:
	// li r11,1
	ctx.r11.s64 = 1;
	// rldicr r10,r11,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpld cr6,r4,r10
	cr6.compare<uint64_t>(ctx.r4.u64, ctx.r10.u64, xer);
	// bge cr6,0x82ead428
	if (!cr6.lt) goto loc_82EAD428;
	// li r10,206
	ctx.r10.s64 = 206;
	// stw r4,81(r1)
	PPC_STORE_U32(ctx.r1.u32 + 81, ctx.r4.u32);
	// subf r7,r9,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r9.s64;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// cmplwi cr6,r7,5
	cr6.compare<uint32_t>(ctx.r7.u32, 5, xer);
	// bge cr6,0x82ead3f4
	if (!cr6.lt) goto loc_82EAD3F4;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e745e0
	ctx.lr = 0x82EAD3F4;
	sub_82E745E0(ctx, base);
loc_82EAD3F4:
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
loc_82EAD410:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x82ead410
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82EAD410;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// b 0x82ead480
	goto loc_82EAD480;
loc_82EAD428:
	// li r10,207
	ctx.r10.s64 = 207;
	// li r12,81
	ctx.r12.s64 = 81;
	// stdx r4,r1,r12
	PPC_STORE_U64(ctx.r1.u32 + ctx.r12.u32, ctx.r4.u64);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// cmplwi cr6,r8,9
	cr6.compare<uint32_t>(ctx.r8.u32, 9, xer);
	// bge cr6,0x82ead450
	if (!cr6.lt) goto loc_82EAD450;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e745e0
	ctx.lr = 0x82EAD450;
	sub_82E745E0(ctx, base);
loc_82EAD450:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r9,9
	ctx.r9.s64 = 9;
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
loc_82EAD46C:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x82ead46c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82EAD46C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 9;
loc_82EAD480:
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

__attribute__((alias("__imp__sub_82EAD498"))) PPC_WEAK_FUNC(sub_82EAD498);
PPC_FUNC_IMPL(__imp__sub_82EAD498) {
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
	// std r4,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r4.u64);
	// cmpdi cr6,r4,-32
	cr6.compare<int64_t>(ctx.r4.s64, -32, xer);
	// bge cr6,0x82ead660
	if (!cr6.lt) goto loc_82EAD660;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpdi cr6,r4,-32768
	cr6.compare<int64_t>(ctx.r4.s64, -32768, xer);
	// bge cr6,0x82ead584
	if (!cr6.lt) goto loc_82EAD584;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// cmpd cr6,r4,r11
	cr6.compare<int64_t>(ctx.r4.s64, ctx.r11.s64, xer);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bge cr6,0x82ead528
	if (!cr6.lt) goto loc_82EAD528;
	// li r10,211
	ctx.r10.s64 = 211;
	// li r12,81
	ctx.r12.s64 = 81;
	// stdx r4,r1,r12
	PPC_STORE_U64(ctx.r1.u32 + ctx.r12.u32, ctx.r4.u64);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// cmplwi cr6,r8,9
	cr6.compare<uint32_t>(ctx.r8.u32, 9, xer);
	// bge cr6,0x82ead4f8
	if (!cr6.lt) goto loc_82EAD4F8;
	// li r4,9
	ctx.r4.s64 = 9;
	// bl 0x82e745e0
	ctx.lr = 0x82EAD4F8;
	sub_82E745E0(ctx, base);
loc_82EAD4F8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,9
	ctx.r9.s64 = 9;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82EAD518:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x82ead518
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82EAD518;
	// b 0x82ead864
	goto loc_82EAD864;
loc_82EAD528:
	// li r10,210
	ctx.r10.s64 = 210;
	// stw r4,81(r1)
	PPC_STORE_U32(ctx.r1.u32 + 81, ctx.r4.u32);
	// subf r7,r9,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r9.s64;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// cmplwi cr6,r7,5
	cr6.compare<uint32_t>(ctx.r7.u32, 5, xer);
	// bge cr6,0x82ead54c
	if (!cr6.lt) goto loc_82EAD54C;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e745e0
	ctx.lr = 0x82EAD54C;
	sub_82E745E0(ctx, base);
loc_82EAD54C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,5
	ctx.r9.s64 = 5;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82EAD56C:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x82ead56c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82EAD56C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// b 0x82ead86c
	goto loc_82EAD86C;
loc_82EAD584:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpdi cr6,r4,-128
	cr6.compare<int64_t>(ctx.r4.s64, -128, xer);
	// subf r7,r9,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r9.s64;
	// bge cr6,0x82ead5fc
	if (!cr6.lt) goto loc_82EAD5FC;
	// li r10,209
	ctx.r10.s64 = 209;
	// sth r4,81(r1)
	PPC_STORE_U16(ctx.r1.u32 + 81, ctx.r4.u16);
	// cmplwi cr6,r7,3
	cr6.compare<uint32_t>(ctx.r7.u32, 3, xer);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// bge cr6,0x82ead760
	if (!cr6.lt) goto loc_82EAD760;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e745e0
	ctx.lr = 0x82EAD5B4;
	sub_82E745E0(ctx, base);
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
loc_82EAD5FC:
	// lbz r8,143(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 143);
	// li r10,208
	ctx.r10.s64 = 208;
	// cmplwi cr6,r7,2
	cr6.compare<uint32_t>(ctx.r7.u32, 2, xer);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
	// bge cr6,0x82ead620
	if (!cr6.lt) goto loc_82EAD620;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e745e0
	ctx.lr = 0x82EAD620;
	sub_82E745E0(ctx, base);
loc_82EAD620:
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
loc_82EAD660:
	// cmpdi cr6,r4,128
	cr6.compare<int64_t>(ctx.r4.s64, 128, xer);
	// bge cr6,0x82ead6bc
	if (!cr6.lt) goto loc_82EAD6BC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bge cr6,0x82ead688
	if (!cr6.lt) goto loc_82EAD688;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e745e0
	ctx.lr = 0x82EAD688;
	sub_82E745E0(ctx, base);
loc_82EAD688:
	// addi r9,r1,143
	ctx.r9.s64 = ctx.r1.s64 + 143;
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
loc_82EAD6BC:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpd cr6,r4,r11
	cr6.compare<int64_t>(ctx.r4.s64, ctx.r11.s64, xer);
	// bge cr6,0x82ead7a8
	if (!cr6.lt) goto loc_82EAD7A8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpdi cr6,r4,256
	cr6.compare<int64_t>(ctx.r4.s64, 256, xer);
	// subf r7,r9,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r9.s64;
	// bge cr6,0x82ead740
	if (!cr6.lt) goto loc_82EAD740;
	// lbz r8,143(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 143);
	// li r10,204
	ctx.r10.s64 = 204;
	// cmplwi cr6,r7,2
	cr6.compare<uint32_t>(ctx.r7.u32, 2, xer);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
	// bge cr6,0x82ead620
	if (!cr6.lt) goto loc_82EAD620;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e745e0
	ctx.lr = 0x82EAD700;
	sub_82E745E0(ctx, base);
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
loc_82EAD740:
	// li r10,205
	ctx.r10.s64 = 205;
	// sth r4,81(r1)
	PPC_STORE_U16(ctx.r1.u32 + 81, ctx.r4.u16);
	// cmplwi cr6,r7,3
	cr6.compare<uint32_t>(ctx.r7.u32, 3, xer);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// bge cr6,0x82ead760
	if (!cr6.lt) goto loc_82EAD760;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e745e0
	ctx.lr = 0x82EAD760;
	sub_82E745E0(ctx, base);
loc_82EAD760:
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
loc_82EAD7A8:
	// li r11,1
	ctx.r11.s64 = 1;
	// rldicr r10,r11,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpd cr6,r4,r10
	cr6.compare<int64_t>(ctx.r4.s64, ctx.r10.s64, xer);
	// bge cr6,0x82ead814
	if (!cr6.lt) goto loc_82EAD814;
	// li r10,206
	ctx.r10.s64 = 206;
	// stw r4,81(r1)
	PPC_STORE_U32(ctx.r1.u32 + 81, ctx.r4.u32);
	// subf r7,r9,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r9.s64;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// cmplwi cr6,r7,5
	cr6.compare<uint32_t>(ctx.r7.u32, 5, xer);
	// bge cr6,0x82ead7e0
	if (!cr6.lt) goto loc_82EAD7E0;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e745e0
	ctx.lr = 0x82EAD7E0;
	sub_82E745E0(ctx, base);
loc_82EAD7E0:
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
loc_82EAD7FC:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x82ead7fc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82EAD7FC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// b 0x82ead86c
	goto loc_82EAD86C;
loc_82EAD814:
	// li r10,207
	ctx.r10.s64 = 207;
	// li r12,81
	ctx.r12.s64 = 81;
	// stdx r4,r1,r12
	PPC_STORE_U64(ctx.r1.u32 + ctx.r12.u32, ctx.r4.u64);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// cmplwi cr6,r8,9
	cr6.compare<uint32_t>(ctx.r8.u32, 9, xer);
	// bge cr6,0x82ead83c
	if (!cr6.lt) goto loc_82EAD83C;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e745e0
	ctx.lr = 0x82EAD83C;
	sub_82E745E0(ctx, base);
loc_82EAD83C:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r9,9
	ctx.r9.s64 = 9;
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
loc_82EAD858:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x82ead858
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82EAD858;
loc_82EAD864:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 9;
loc_82EAD86C:
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

__attribute__((alias("__imp__sub_82EAD884"))) PPC_WEAK_FUNC(sub_82EAD884);
PPC_FUNC_IMPL(__imp__sub_82EAD884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAD888"))) PPC_WEAK_FUNC(sub_82EAD888);
PPC_FUNC_IMPL(__imp__sub_82EAD888) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,203
	ctx.r10.s64 = 203;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stfd f1,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f1.u64);
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// subf r7,r9,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r9.s64;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// li r12,81
	ctx.r12.s64 = 81;
	// stdx r8,r1,r12
	PPC_STORE_U64(ctx.r1.u32 + ctx.r12.u32, ctx.r8.u64);
	// cmplwi cr6,r7,9
	cr6.compare<uint32_t>(ctx.r7.u32, 9, xer);
	// bge cr6,0x82ead8d0
	if (!cr6.lt) goto loc_82EAD8D0;
	// li r4,9
	ctx.r4.s64 = 9;
	// bl 0x82e745e0
	ctx.lr = 0x82EAD8D0;
	sub_82E745E0(ctx, base);
loc_82EAD8D0:
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r9,9
	ctx.r9.s64 = 9;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r1,79
	ctx.r11.s64 = ctx.r1.s64 + 79;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82EAD8EC:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x82ead8ec
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82EAD8EC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 9;
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

__attribute__((alias("__imp__sub_82EAD918"))) PPC_WEAK_FUNC(sub_82EAD918);
PPC_FUNC_IMPL(__imp__sub_82EAD918) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lbz r10,41(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 41);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ead974
	if (!cr6.eq) goto loc_82EAD974;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
loc_82EAD934:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82ead948
	if (!cr6.lt) goto loc_82EAD948;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82ead968
	goto loc_82EAD968;
loc_82EAD948:
	// lbz r8,41(r7)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + 41);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82ead960
	if (cr6.eq) goto loc_82EAD960;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x82ead960
	if (!cr6.lt) goto loc_82EAD960;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
loc_82EAD960:
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82EAD968:
	// lbz r10,41(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 41);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ead934
	if (cr6.eq) goto loc_82EAD934;
loc_82EAD974:
	// lbz r11,41(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 41);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ead98c
	if (cr6.eq) goto loc_82EAD98C;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82ead990
	goto loc_82EAD990;
loc_82EAD98C:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
loc_82EAD990:
	// lbz r10,41(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 41);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ead9c8
	if (!cr6.eq) goto loc_82EAD9C8;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
loc_82EAD9A0:
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82ead9b8
	if (!cr6.lt) goto loc_82EAD9B8;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82ead9bc
	goto loc_82EAD9BC;
loc_82EAD9B8:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_82EAD9BC:
	// lbz r9,41(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 41);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82ead9a0
	if (cr6.eq) goto loc_82EAD9A0;
loc_82EAD9C8:
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EAD9D4"))) PPC_WEAK_FUNC(sub_82EAD9D4);
PPC_FUNC_IMPL(__imp__sub_82EAD9D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAD9D8"))) PPC_WEAK_FUNC(sub_82EAD9D8);
PPC_FUNC_IMPL(__imp__sub_82EAD9D8) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// li r3,48
	ctx.r3.s64 = 48;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// bl 0x82416260
	ctx.lr = 0x82EADA00;
	sub_82416260(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82eada50
	if (cr6.eq) goto loc_82EADA50;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r9,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r11,40(r8)
	PPC_STORE_U8(ctx.r8.u32 + 40, ctx.r11.u8);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r11,41(r7)
	PPC_STORE_U8(ctx.r7.u32 + 41, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82EADA50:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r11,15364
	ctx.r10.s64 = ctx.r11.s64 + 15364;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x8246b850
	ctx.lr = 0x82EADA68;
	sub_8246B850(ctx, base);
}

__attribute__((alias("__imp__sub_82EADA68"))) PPC_WEAK_FUNC(sub_82EADA68);
PPC_FUNC_IMPL(__imp__sub_82EADA68) {
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
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bge cr6,0x82eadaa4
	if (!cr6.lt) goto loc_82EADAA4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e745e0
	ctx.lr = 0x82EADAA4;
	sub_82E745E0(ctx, base);
loc_82EADAA4:
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r8,-14325(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -14325);
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
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EADAE0"))) PPC_WEAK_FUNC(sub_82EADAE0);
PPC_FUNC_IMPL(__imp__sub_82EADAE0) {
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
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bge cr6,0x82eadb1c
	if (!cr6.lt) goto loc_82EADB1C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e745e0
	ctx.lr = 0x82EADB1C;
	sub_82E745E0(ctx, base);
loc_82EADB1C:
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r8,-14324(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -14324);
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
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EADB58"))) PPC_WEAK_FUNC(sub_82EADB58);
PPC_FUNC_IMPL(__imp__sub_82EADB58) {
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
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bge cr6,0x82eadb94
	if (!cr6.lt) goto loc_82EADB94;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e745e0
	ctx.lr = 0x82EADB94;
	sub_82E745E0(ctx, base);
loc_82EADB94:
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r8,-14323(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + -14323);
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
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EADBD0"))) PPC_WEAK_FUNC(sub_82EADBD0);
PPC_FUNC_IMPL(__imp__sub_82EADBD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82EADBD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r10,r11,-14320
	ctx.r10.s64 = ctx.r11.s64 + -14320;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82eadc08
	if (cr6.lt) goto loc_82EADC08;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x82EADC08;
	sub_8386D088(ctx, base);
loc_82EADC08:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// clrlwi r9,r29,31
	ctx.r9.u64 = ctx.r29.u32 & 0x1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82eadc34
	if (cr6.eq) goto loc_82EADC34;
	// bl 0x82416268
	ctx.lr = 0x82EADC30;
	sub_82416268(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82EADC34:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EADC3C"))) PPC_WEAK_FUNC(sub_82EADC3C);
PPC_FUNC_IMPL(__imp__sub_82EADC3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EADC40"))) PPC_WEAK_FUNC(sub_82EADC40);
PPC_FUNC_IMPL(__imp__sub_82EADC40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82EADC48;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,160
	ctx.r28.s64 = ctx.r3.s64 + 160;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82EADC5C;
	sub_82596FE8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82EADC70;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,156(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82eaddf4
	if (cr6.eq) goto loc_82EADDF4;
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82eadcf8
	if (cr6.lt) goto loc_82EADCF8;
	// bne cr6,0x82eadce4
	if (!cr6.eq) goto loc_82EADCE4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e879f8
	ctx.lr = 0x82EADC94;
	sub_82E879F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82eadce4
	if (cr6.eq) goto loc_82EADCE4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82EADCB4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,620(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,316
	ctx.r11.s64 = ctx.r11.s64 + 316;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82eadcd4
	if (cr6.lt) goto loc_82EADCD4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82EADCD4:
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// stw r10,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r10.u32);
	// stb r9,656(r31)
	PPC_STORE_U8(ctx.r31.u32 + 656, ctx.r9.u8);
loc_82EADCE4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82597088
	ctx.lr = 0x82EADCEC;
	sub_82597088(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82EADCF8:
	// lwz r29,620(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	// lwz r11,332(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 332);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82eadce4
	if (cr6.eq) goto loc_82EADCE4;
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// addi r3,r11,28160
	ctx.r3.s64 = ctx.r11.s64 + 28160;
	// bl 0x8252e3c0
	ctx.lr = 0x82EADD14;
	sub_8252E3C0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r30,r29,316
	ctx.r30.s64 = ctx.r29.s64 + 316;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82EADD20:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82eadd20
	if (!cr6.eq) goto loc_82EADD20;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a8810
	ctx.lr = 0x82EADD4C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82eaddec
	if (!cr6.eq) goto loc_82EADDEC;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82e880b8
	ctx.lr = 0x82EADD68;
	sub_82E880B8(ctx, base);
	// bl 0x83356788
	ctx.lr = 0x82EADD6C;
	sub_83356788(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82eaddc0
	if (!cr6.eq) goto loc_82EADDC0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82586b80
	ctx.lr = 0x82EADD80;
	sub_82586B80(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83354bb8
	ctx.lr = 0x82EADD8C;
	sub_83354BB8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e884d0
	ctx.lr = 0x82EADD98;
	sub_82E884D0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82586bd8
	ctx.lr = 0x82EADDA0;
	sub_82586BD8(ctx, base);
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
	// bl 0x82597088
	ctx.lr = 0x82EADDB4;
	sub_82597088(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82EADDC0:
	// addi r4,r29,204
	ctx.r4.s64 = ctx.r29.s64 + 204;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88708
	ctx.lr = 0x82EADDCC;
	sub_82E88708(ctx, base);
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
	// bl 0x82597088
	ctx.lr = 0x82EADDE0;
	sub_82597088(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82EADDEC:
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82e880b8
	ctx.lr = 0x82EADDF4;
	sub_82E880B8(ctx, base);
loc_82EADDF4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82597088
	ctx.lr = 0x82EADDFC;
	sub_82597088(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EADE08"))) PPC_WEAK_FUNC(sub_82EADE08);
PPC_FUNC_IMPL(__imp__sub_82EADE08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82EADE10;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eade4c
	if (!cr6.eq) goto loc_82EADE4C;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// lwz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82d2d780
	ctx.lr = 0x82EADE40;
	sub_82D2D780(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82EADE4C:
	// lwz r25,4(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bne cr6,0x82eade90
	if (!cr6.eq) goto loc_82EADE90;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82eadf8c
	if (!cr6.lt) goto loc_82EADF8C;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2d780
	ctx.lr = 0x82EADE84;
	sub_82D2D780(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82EADE90:
	// cmplw cr6,r30,r25
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, xer);
	// bne cr6,0x82eadecc
	if (!cr6.eq) goto loc_82EADECC;
	// lwz r6,8(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bge cr6,0x82eadf8c
	if (!cr6.lt) goto loc_82EADF8C;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2d780
	ctx.lr = 0x82EADEC0;
	sub_82D2D780(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82EADECC:
	// lwz r27,12(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r26,12(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplw cr6,r26,r27
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r27.u32, xer);
	// ble cr6,0x82eadf30
	if (!cr6.gt) goto loc_82EADF30;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8349cc40
	ctx.lr = 0x82EADEE8;
	sub_8349CC40(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, xer);
	// bge cr6,0x82eadf2c
	if (!cr6.lt) goto loc_82EADF2C;
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r10,25(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82eadf78
	if (!cr6.eq) goto loc_82EADF78;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
loc_82EADF18:
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82d2d780
	ctx.lr = 0x82EADF20;
	sub_82D2D780(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82EADF2C:
	// cmplw cr6,r26,r27
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r27.u32, xer);
loc_82EADF30:
	// bge cr6,0x82eadf8c
	if (!cr6.lt) goto loc_82EADF8C;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x833ccd48
	ctx.lr = 0x82EADF40;
	sub_833CCD48(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r6,r25
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r25.u32, xer);
	// beq cr6,0x82eadf58
	if (cr6.eq) goto loc_82EADF58;
	// lwz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, xer);
	// bge cr6,0x82eadf8c
	if (!cr6.lt) goto loc_82EADF8C;
loc_82EADF58:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r10,25(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82eadf18
	if (cr6.eq) goto loc_82EADF18;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
loc_82EADF78:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d2d780
	ctx.lr = 0x82EADF80;
	sub_82D2D780(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82EADF8C:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d2dd98
	ctx.lr = 0x82EADFA0;
	sub_82D2DD98(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EADFB8"))) PPC_WEAK_FUNC(sub_82EADFB8);
PPC_FUNC_IMPL(__imp__sub_82EADFB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82EADFC0;
	__savegprlr_29(ctx, base);
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
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bgt cr6,0x82eae140
	if (cr6.gt) goto loc_82EAE140;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82eae010
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82EAE010;
	// bdzf 4*cr6+eq,0x82eae040
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82EAE040;
	// bdzf 4*cr6+eq,0x82eae058
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82EAE058;
	// bdzf 4*cr6+eq,0x82eae070
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82EAE070;
	// bdzf 4*cr6+eq,0x82eae088
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82EAE088;
	// bdzf 4*cr6+eq,0x82eae0b0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82EAE0B0;
	// bne cr6,0x82eae0f8
	if (!cr6.eq) goto loc_82EAE0F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eada68
	ctx.lr = 0x82EAE004;
	sub_82EADA68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82EAE010:
	// lbz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82eae030
	if (cr6.eq) goto loc_82EAE030;
	// bl 0x82eadae0
	ctx.lr = 0x82EAE024;
	sub_82EADAE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82EAE030:
	// bl 0x82eadb58
	ctx.lr = 0x82EAE034;
	sub_82EADB58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82EAE040:
	// ld r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82ead258
	ctx.lr = 0x82EAE04C;
	sub_82EAD258(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82EAE058:
	// ld r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82ead498
	ctx.lr = 0x82EAE064;
	sub_82EAD498(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82EAE070:
	// lfd f1,8(r30)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82ead888
	ctx.lr = 0x82EAE07C;
	sub_82EAD888(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82EAE088:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82e74890
	ctx.lr = 0x82EAE094;
	sub_82E74890(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x82e74b98
	ctx.lr = 0x82EAE0A4;
	sub_82E74B98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82EAE0B0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82e749f8
	ctx.lr = 0x82EAE0BC;
	sub_82E749F8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r30,12(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r29,r11,r30
	ctx.r29.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// bge cr6,0x82eae140
	if (!cr6.lt) goto loc_82EAE140;
loc_82EAE0D4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eadfb8
	ctx.lr = 0x82EAE0E0;
	sub_82EADFB8(ctx, base);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// blt cr6,0x82eae0d4
	if (cr6.lt) goto loc_82EAE0D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82EAE0F8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82e74ac8
	ctx.lr = 0x82EAE104;
	sub_82E74AC8(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r30,12(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r29,r11,r30
	ctx.r29.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// bge cr6,0x82eae140
	if (!cr6.lt) goto loc_82EAE140;
loc_82EAE11C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eadfb8
	ctx.lr = 0x82EAE128;
	sub_82EADFB8(ctx, base);
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eadfb8
	ctx.lr = 0x82EAE134;
	sub_82EADFB8(ctx, base);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// blt cr6,0x82eae11c
	if (cr6.lt) goto loc_82EAE11C;
loc_82EAE140:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAE14C"))) PPC_WEAK_FUNC(sub_82EAE14C);
PPC_FUNC_IMPL(__imp__sub_82EAE14C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAE150"))) PPC_WEAK_FUNC(sub_82EAE150);
PPC_FUNC_IMPL(__imp__sub_82EAE150) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82EAE158;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,2730
	ctx.r10.s64 = 178913280;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// ori r9,r10,43689
	ctx.r9.u64 = ctx.r10.u64 | 43689;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x82eae198
	if (cr6.lt) goto loc_82EAE198;
	// addi r3,r7,24
	ctx.r3.s64 = ctx.r7.s64 + 24;
	// bl 0x82535aa0
	ctx.lr = 0x82EAE184;
	sub_82535AA0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82416268
	ctx.lr = 0x82EAE18C;
	sub_82416268(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12808
	ctx.r3.s64 = ctx.r11.s64 + 12808;
	// bl 0x831cc150
	ctx.lr = 0x82EAE198;
	sub_831CC150(ctx, base);
loc_82EAE198:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r6,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r6.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, xer);
	// bne cr6,0x82eae1c8
	if (!cr6.eq) goto loc_82EAE1C8;
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r27,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r27.u32);
	// b 0x82eae208
	goto loc_82EAE208;
loc_82EAE1C8:
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82eae1f0
	if (cr6.eq) goto loc_82EAE1F0;
	// stw r27,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r27.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// bne cr6,0x82eae208
	if (!cr6.eq) goto loc_82EAE208;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// b 0x82eae208
	goto loc_82EAE208;
loc_82EAE1F0:
	// stw r27,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r27.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// bne cr6,0x82eae208
	if (!cr6.eq) goto loc_82EAE208;
	// stw r27,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r27.u32);
loc_82EAE208:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// lbz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 40);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82eae32c
	if (!cr6.eq) goto loc_82EAE32C;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82EAE224:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bne cr6,0x82eae2ac
	if (!cr6.eq) goto loc_82EAE2AC;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 40);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82eae26c
	if (!cr6.eq) goto loc_82EAE26C;
	// rotlwi r10,r4,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stb r29,40(r10)
	PPC_STORE_U8(ctx.r10.u32 + 40, ctx.r29.u8);
	// stb r29,40(r11)
	PPC_STORE_U8(ctx.r11.u32 + 40, ctx.r29.u8);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r28,40(r8)
	PPC_STORE_U8(ctx.r8.u32 + 40, ctx.r28.u8);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r31,4(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// b 0x82eae31c
	goto loc_82EAE31C;
loc_82EAE26C:
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x82eae284
	if (!cr6.eq) goto loc_82EAE284;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8387dad0
	ctx.lr = 0x82EAE284;
	sub_8387DAD0(ctx, base);
loc_82EAE284:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r29,40(r11)
	PPC_STORE_U8(ctx.r11.u32 + 40, ctx.r29.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r28,40(r9)
	PPC_STORE_U8(ctx.r9.u32 + 40, ctx.r28.u8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x8387d818
	ctx.lr = 0x82EAE2A8;
	sub_8387D818(ctx, base);
	// b 0x82eae31c
	goto loc_82EAE31C;
loc_82EAE2AC:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 40);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82eae2e0
	if (!cr6.eq) goto loc_82EAE2E0;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r29,40(r10)
	PPC_STORE_U8(ctx.r10.u32 + 40, ctx.r29.u8);
	// stb r29,40(r11)
	PPC_STORE_U8(ctx.r11.u32 + 40, ctx.r29.u8);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r28,40(r8)
	PPC_STORE_U8(ctx.r8.u32 + 40, ctx.r28.u8);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r31,4(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// b 0x82eae31c
	goto loc_82EAE31C;
loc_82EAE2E0:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x82eae2f8
	if (!cr6.eq) goto loc_82EAE2F8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8387d818
	ctx.lr = 0x82EAE2F8;
	sub_8387D818(ctx, base);
loc_82EAE2F8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r29,40(r11)
	PPC_STORE_U8(ctx.r11.u32 + 40, ctx.r29.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r28,40(r9)
	PPC_STORE_U8(ctx.r9.u32 + 40, ctx.r28.u8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x8387dad0
	ctx.lr = 0x82EAE31C;
	sub_8387DAD0(ctx, base);
loc_82EAE31C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 40);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82eae224
	if (cr6.eq) goto loc_82EAE224;
loc_82EAE32C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r27,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r27.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stb r29,40(r10)
	PPC_STORE_U8(ctx.r10.u32 + 40, ctx.r29.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAE348"))) PPC_WEAK_FUNC(sub_82EAE348);
PPC_FUNC_IMPL(__imp__sub_82EAE348) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82EAE350;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,41(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 41);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r5,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r5.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82eae378
	if (cr6.eq) goto loc_82EAE378;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,11564
	ctx.r3.s64 = ctx.r11.s64 + 11564;
	// bl 0x831cc188
	ctx.lr = 0x82EAE378;
	sub_831CC188(ctx, base);
loc_82EAE378:
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x82ead150
	ctx.lr = 0x82EAE384;
	sub_82EAD150(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lbz r10,41(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 41);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r25,196(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// beq cr6,0x82eae3a0
	if (cr6.eq) goto loc_82EAE3A0;
	// lwz r28,8(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// b 0x82eae3c4
	goto loc_82EAE3C4;
loc_82EAE3A0:
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lbz r9,41(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 41);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82eae3b8
	if (cr6.eq) goto loc_82EAE3B8;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// b 0x82eae3c4
	goto loc_82EAE3C4;
loc_82EAE3B8:
	// lwz r28,8(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmplw cr6,r25,r26
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r26.u32, xer);
	// bne cr6,0x82eae4b0
	if (!cr6.eq) goto loc_82EAE4B0;
loc_82EAE3C4:
	// lbz r11,41(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 41);
	// lwz r31,4(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eae3d8
	if (!cr6.eq) goto loc_82EAE3D8;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_82EAE3D8:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, xer);
	// bne cr6,0x82eae3f0
	if (!cr6.eq) goto loc_82EAE3F0;
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// b 0x82eae408
	goto loc_82EAE408;
loc_82EAE3F0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x82eae404
	if (!cr6.eq) goto loc_82EAE404;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// b 0x82eae408
	goto loc_82EAE408;
loc_82EAE404:
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
loc_82EAE408:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x82eae458
	if (!cr6.eq) goto loc_82EAE458;
	// lbz r11,41(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 41);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82eae42c
	if (cr6.eq) goto loc_82EAE42C;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x82eae454
	goto loc_82EAE454;
loc_82EAE42C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lbz r8,41(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 41);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82eae454
	if (!cr6.eq) goto loc_82EAE454;
loc_82EAE440:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,41(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 41);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82eae440
	if (cr6.eq) goto loc_82EAE440;
loc_82EAE454:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_82EAE458:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x82eae544
	if (!cr6.eq) goto loc_82EAE544;
	// lbz r11,41(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 41);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82eae480
	if (cr6.eq) goto loc_82EAE480;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r31,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r31.u32);
	// b 0x82eae544
	goto loc_82EAE544;
loc_82EAE480:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lbz r8,41(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 41);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82eae4a8
	if (!cr6.eq) goto loc_82EAE4A8;
loc_82EAE494:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,41(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 41);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82eae494
	if (cr6.eq) goto loc_82EAE494;
loc_82EAE4A8:
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// b 0x82eae544
	goto loc_82EAE544;
loc_82EAE4B0:
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmplw cr6,r25,r10
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r10.u32, xer);
	// bne cr6,0x82eae4d0
	if (!cr6.eq) goto loc_82EAE4D0;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// b 0x82eae4f8
	goto loc_82EAE4F8;
loc_82EAE4D0:
	// lbz r11,41(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 41);
	// lwz r31,4(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eae4e4
	if (!cr6.eq) goto loc_82EAE4E4;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_82EAE4E4:
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// stw r11,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r11.u32);
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// stw r25,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r25.u32);
loc_82EAE4F8:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, xer);
	// bne cr6,0x82eae510
	if (!cr6.eq) goto loc_82EAE510;
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// b 0x82eae52c
	goto loc_82EAE52C;
loc_82EAE510:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, xer);
	// bne cr6,0x82eae528
	if (!cr6.eq) goto loc_82EAE528;
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// b 0x82eae52c
	goto loc_82EAE52C;
loc_82EAE528:
	// stw r25,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r25.u32);
loc_82EAE52C:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// lbz r9,40(r26)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r26.u32 + 40);
	// lbz r10,40(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + 40);
	// stb r9,40(r25)
	PPC_STORE_U8(ctx.r25.u32 + 40, ctx.r9.u8);
	// stb r10,40(r26)
	PPC_STORE_U8(ctx.r26.u32 + 40, ctx.r10.u8);
loc_82EAE544:
	// lbz r11,40(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 40);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82eae6dc
	if (!cr6.eq) goto loc_82EAE6DC;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, xer);
	// beq cr6,0x82eae6d8
	if (cr6.eq) goto loc_82EAE6D8;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82EAE568:
	// lbz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 40);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82eae6d8
	if (!cr6.eq) goto loc_82EAE6D8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// bne cr6,0x82eae620
	if (!cr6.eq) goto loc_82EAE620;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lbz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 40);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82eae5a8
	if (!cr6.eq) goto loc_82EAE5A8;
	// stb r29,40(r11)
	PPC_STORE_U8(ctx.r11.u32 + 40, ctx.r29.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r30,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8387dad0
	ctx.lr = 0x82EAE5A4;
	sub_8387DAD0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_82EAE5A8:
	// lbz r10,41(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 41);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82eae674
	if (!cr6.eq) goto loc_82EAE674;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 40);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x82eae5d4
	if (!cr6.eq) goto loc_82EAE5D4;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,40(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 40);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// beq cr6,0x82eae670
	if (cr6.eq) goto loc_82EAE670;
loc_82EAE5D4:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,40(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 40);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x82eae5fc
	if (!cr6.eq) goto loc_82EAE5FC;
	// stb r29,40(r10)
	PPC_STORE_U8(ctx.r10.u32 + 40, ctx.r29.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r30,40(r11)
	PPC_STORE_U8(ctx.r11.u32 + 40, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8387d818
	ctx.lr = 0x82EAE5F8;
	sub_8387D818(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_82EAE5FC:
	// lbz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 40);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r10,40(r11)
	PPC_STORE_U8(ctx.r11.u32 + 40, ctx.r10.u8);
	// stb r29,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r29.u8);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stb r29,40(r9)
	PPC_STORE_U8(ctx.r9.u32 + 40, ctx.r29.u8);
	// bl 0x8387dad0
	ctx.lr = 0x82EAE61C;
	sub_8387DAD0(ctx, base);
	// b 0x82eae6d8
	goto loc_82EAE6D8;
loc_82EAE620:
	// lbz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 40);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82eae644
	if (!cr6.eq) goto loc_82EAE644;
	// stb r29,40(r11)
	PPC_STORE_U8(ctx.r11.u32 + 40, ctx.r29.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r30,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8387d818
	ctx.lr = 0x82EAE640;
	sub_8387D818(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82EAE644:
	// lbz r10,41(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 41);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82eae674
	if (!cr6.eq) goto loc_82EAE674;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 40);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x82eae690
	if (!cr6.eq) goto loc_82EAE690;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,40(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 40);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x82eae690
	if (!cr6.eq) goto loc_82EAE690;
loc_82EAE670:
	// stb r30,40(r11)
	PPC_STORE_U8(ctx.r11.u32 + 40, ctx.r30.u8);
loc_82EAE674:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, xer);
	// bne cr6,0x82eae568
	if (!cr6.eq) goto loc_82EAE568;
	// b 0x82eae6d8
	goto loc_82EAE6D8;
loc_82EAE690:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,40(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 40);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x82eae6b8
	if (!cr6.eq) goto loc_82EAE6B8;
	// stb r29,40(r10)
	PPC_STORE_U8(ctx.r10.u32 + 40, ctx.r29.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r30,40(r11)
	PPC_STORE_U8(ctx.r11.u32 + 40, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8387dad0
	ctx.lr = 0x82EAE6B4;
	sub_8387DAD0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82EAE6B8:
	// lbz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 40);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r10,40(r11)
	PPC_STORE_U8(ctx.r11.u32 + 40, ctx.r10.u8);
	// stb r29,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r29.u8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r29,40(r9)
	PPC_STORE_U8(ctx.r9.u32 + 40, ctx.r29.u8);
	// bl 0x8387d818
	ctx.lr = 0x82EAE6D8;
	sub_8387D818(ctx, base);
loc_82EAE6D8:
	// stb r29,40(r28)
	PPC_STORE_U8(ctx.r28.u32 + 40, ctx.r29.u8);
loc_82EAE6DC:
	// addi r3,r26,24
	ctx.r3.s64 = ctx.r26.s64 + 24;
	// bl 0x82535aa0
	ctx.lr = 0x82EAE6E4;
	sub_82535AA0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82416268
	ctx.lr = 0x82EAE6EC;
	sub_82416268(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82eae700
	if (cr6.eq) goto loc_82EAE700;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
loc_82EAE700:
	// stw r25,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r25.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAE710"))) PPC_WEAK_FUNC(sub_82EAE710);
PPC_FUNC_IMPL(__imp__sub_82EAE710) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82EAE718;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,41(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 41);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eae764
	if (!cr6.eq) goto loc_82EAE764;
loc_82EAE734:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82eae710
	ctx.lr = 0x82EAE740;
	sub_82EAE710(ctx, base);
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82535aa0
	ctx.lr = 0x82EAE74C;
	sub_82535AA0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82416268
	ctx.lr = 0x82EAE754;
	sub_82416268(ctx, base);
	// lbz r11,41(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 41);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82eae734
	if (cr6.eq) goto loc_82EAE734;
loc_82EAE764:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAE76C"))) PPC_WEAK_FUNC(sub_82EAE76C);
PPC_FUNC_IMPL(__imp__sub_82EAE76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAE770"))) PPC_WEAK_FUNC(sub_82EAE770);
PPC_FUNC_IMPL(__imp__sub_82EAE770) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82EAE778;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,4(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r25,1
	ctx.r25.s64 = 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lbz r10,41(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 41);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82eae7fc
	if (!cr6.eq) goto loc_82EAE7FC;
	// lwz r9,16(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// clrlwi r7,r6,24
	ctx.r7.u64 = ctx.r6.u32 & 0xFF;
	// li r8,-1
	ctx.r8.s64 = -1;
loc_82EAE7B0:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82eae7cc
	if (cr6.eq) goto loc_82EAE7CC;
	// subfc r10,r9,r10
	xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subfze r31,r8
	temp.u8 = ~ctx.r8.u32 + xer.ca < xer.ca;
	ctx.r31.u64 = ~ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x82eae7d8
	goto loc_82EAE7D8;
loc_82EAE7CC:
	// subfc r6,r10,r9
	xer.ca = ctx.r9.u32 >= ctx.r10.u32;
	ctx.r6.s64 = ctx.r9.s64 - ctx.r10.s64;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r31,r4,31
	ctx.r31.u64 = ctx.r4.u32 & 0x1;
loc_82EAE7D8:
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82eae7ec
	if (cr6.eq) goto loc_82EAE7EC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82eae7f0
	goto loc_82EAE7F0;
loc_82EAE7EC:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_82EAE7F0:
	// lbz r10,41(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 41);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82eae7b0
	if (cr6.eq) goto loc_82EAE7B0;
loc_82EAE7FC:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82eae85c
	if (cr6.eq) goto loc_82EAE85C;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// bne cr6,0x82eae854
	if (!cr6.eq) goto loc_82EAE854;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82eae150
	ctx.lr = 0x82EAE838;
	sub_82EAE150(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r25,4(r28)
	PPC_STORE_U8(ctx.r28.u32 + 4, ctx.r25.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82EAE854:
	// bl 0x82ead038
	ctx.lr = 0x82EAE858;
	sub_82EAD038(ctx, base);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82EAE85C:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r10,16(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82eae8a0
	if (!cr6.lt) goto loc_82EAE8A0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eae150
	ctx.lr = 0x82EAE884;
	sub_82EAE150(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r25,4(r28)
	PPC_STORE_U8(ctx.r28.u32 + 4, ctx.r25.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82EAE8A0:
	// addi r3,r27,24
	ctx.r3.s64 = ctx.r27.s64 + 24;
	// bl 0x82535aa0
	ctx.lr = 0x82EAE8A8;
	sub_82535AA0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82416268
	ctx.lr = 0x82EAE8B0;
	sub_82416268(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r11,4(r28)
	PPC_STORE_U8(ctx.r28.u32 + 4, ctx.r11.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAE8C8"))) PPC_WEAK_FUNC(sub_82EAE8C8);
PPC_FUNC_IMPL(__imp__sub_82EAE8C8) {
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
	// addi r30,r3,160
	ctx.r30.s64 = ctx.r3.s64 + 160;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82596fe8
	ctx.lr = 0x82EAE8EC;
	sub_82596FE8(ctx, base);
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eae90c
	if (!cr6.eq) goto loc_82EAE90C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82EAE90C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82EAE90C:
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82eae92c
	if (cr6.eq) goto loc_82EAE92C;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,220
	ctx.r4.s64 = ctx.r11.s64 + 220;
	// addi r3,r31,116
	ctx.r3.s64 = ctx.r31.s64 + 116;
	// bl 0x82420558
	ctx.lr = 0x82EAE92C;
	sub_82420558(ctx, base);
loc_82EAE92C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82EAE940;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82eae974
	if (cr6.eq) goto loc_82EAE974;
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82eae964
	if (cr6.eq) goto loc_82EAE964;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,192(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// bl 0x82ee30c8
	ctx.lr = 0x82EAE964;
	sub_82EE30C8(ctx, base);
loc_82EAE964:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82597088
	ctx.lr = 0x82EAE96C;
	sub_82597088(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82eae980
	goto loc_82EAE980;
loc_82EAE974:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82597088
	ctx.lr = 0x82EAE97C;
	sub_82597088(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82EAE980:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EAE998"))) PPC_WEAK_FUNC(sub_82EAE998);
PPC_FUNC_IMPL(__imp__sub_82EAE998) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82eae710
	ctx.lr = 0x82EAE9B8;
	sub_82EAE710(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r8,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r7,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r7.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82EAE9EC"))) PPC_WEAK_FUNC(sub_82EAE9EC);
PPC_FUNC_IMPL(__imp__sub_82EAE9EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAE9F0"))) PPC_WEAK_FUNC(sub_82EAE9F0);
PPC_FUNC_IMPL(__imp__sub_82EAE9F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82EAE9F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lbz r10,25(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82eaea40
	if (!cr6.eq) goto loc_82EAEA40;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82EAEA18:
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x82eaea2c
	if (!cr6.lt) goto loc_82EAEA2C;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82eaea34
	goto loc_82EAEA34;
loc_82EAEA2C:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82EAEA34:
	// lbz r9,25(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 25);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82eaea18
	if (cr6.eq) goto loc_82EAEA18;
loc_82EAEA40:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// beq cr6,0x82eaea5c
	if (cr6.eq) goto loc_82EAEA5C;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82eaeaac
	if (!cr6.lt) goto loc_82EAEAAC;
loc_82EAEA5C:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// bl 0x82d2c800
	ctx.lr = 0x82EAEA74;
	sub_82D2C800(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addic. r11,r3,12
	xer.ca = ctx.r3.u32 > 4294967283;
	ctx.r11.s64 = ctx.r3.s64 + 12;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82eaea8c
	if (cr0.eq) goto loc_82EAEA8C;
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// std r10,4(r11)
	PPC_STORE_U64(ctx.r11.u32 + 4, ctx.r10.u64);
loc_82EAEA8C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eade08
	ctx.lr = 0x82EAEA9C;
	sub_82EADE08(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82EAEAAC:
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAEAB8"))) PPC_WEAK_FUNC(sub_82EAEAB8);
PPC_FUNC_IMPL(__imp__sub_82EAEAB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82EAEAC0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r5,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bne cr6,0x82eaeb0c
	if (!cr6.eq) goto loc_82EAEB0C;
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, xer);
	// bne cr6,0x82eaeb0c
	if (!cr6.eq) goto loc_82EAEB0C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82eae998
	ctx.lr = 0x82EAEAF4;
	sub_82EAE998(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82EAEB0C:
	// cmplw cr6,r5,r30
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r30.u32, xer);
	// beq cr6,0x82eaeb3c
	if (cr6.eq) goto loc_82EAEB3C;
loc_82EAEB14:
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82ead150
	ctx.lr = 0x82EAEB20;
	sub_82EAD150(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82eae348
	ctx.lr = 0x82EAEB30;
	sub_82EAE348(ctx, base);
	// lwz r5,164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplw cr6,r5,r30
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r30.u32, xer);
	// bne cr6,0x82eaeb14
	if (!cr6.eq) goto loc_82EAEB14;
loc_82EAEB3C:
	// stw r5,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r5.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAEB4C"))) PPC_WEAK_FUNC(sub_82EAEB4C);
PPC_FUNC_IMPL(__imp__sub_82EAEB4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAEB50"))) PPC_WEAK_FUNC(sub_82EAEB50);
PPC_FUNC_IMPL(__imp__sub_82EAEB50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac0
	ctx.lr = 0x82EAEB58;
	__savegprlr_18(ctx, base);
	// stwu r1,-672(r1)
	ea = -672 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,240(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 240);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82eaeb8c
	if (cr6.eq) goto loc_82EAEB8C;
	// lwz r11,-200(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -200);
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82EAEB80;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
loc_82EAEB8C:
	// li r25,0
	ctx.r25.s64 = 0;
	// li r21,15
	ctx.r21.s64 = 15;
	// stw r25,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r25.u32);
	// addi r31,r20,4
	ctx.r31.s64 = ctx.r20.s64 + 4;
	// stw r21,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r21.u32);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// stb r25,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r25.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82e74090
	ctx.lr = 0x82EAEBB0;
	sub_82E74090(ctx, base);
	// lwz r11,404(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82eaebc4
	if (cr6.lt) goto loc_82EAEBC4;
	// lwz r3,384(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// bl 0x82416268
	ctx.lr = 0x82EAEBC4;
	sub_82416268(ctx, base);
loc_82EAEBC4:
	// stw r21,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r21.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r25,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r25.u32);
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// stb r25,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r25.u8);
	// stw r25,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r25.u32);
	// stw r25,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, ctx.r25.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,8(r20)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	// bl 0x83691bb8
	ctx.lr = 0x82EAEBEC;
	sub_83691BB8(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// stw r21,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r21.u32);
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// addi r19,r11,-14420
	ctx.r19.s64 = ctx.r11.s64 + -14420;
	// stw r25,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r25.u32);
	// stb r25,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r25.u8);
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// stw r21,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r21.u32);
	// stw r25,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r25.u32);
	// stb r25,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r25.u8);
	// lwz r22,472(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 472);
	// lwz r23,476(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 476);
	// rlwinm r11,r22,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 5) & 0xFFFFFFE0;
	// add r18,r11,r23
	ctx.r18.u64 = ctx.r11.u64 + ctx.r23.u64;
	// cmplw cr6,r23,r18
	cr6.compare<uint32_t>(ctx.r23.u32, ctx.r18.u32, xer);
	// bge cr6,0x82eaf040
	if (!cr6.lt) goto loc_82EAF040;
	// subf r11,r23,r18
	ctx.r11.s64 = ctx.r18.s64 - ctx.r23.s64;
	// addi r31,r23,16
	ctx.r31.s64 = ctx.r23.s64 + 16;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
loc_82EAEC40:
	// stw r21,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r21.u32);
	// addi r11,r1,496
	ctx.r11.s64 = ctx.r1.s64 + 496;
	// stw r25,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r25.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stb r25,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r25.u8);
	// addi r10,r31,-16
	ctx.r10.s64 = ctx.r31.s64 + -16;
	// ld r9,-8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + -8);
	// ld r8,-16(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + -16);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,504(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 504);
	// lwz r4,508(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 508);
	// bl 0x82472fc0
	ctx.lr = 0x82EAEC74;
	sub_82472FC0(ctx, base);
	// addi r6,r19,-80
	ctx.r6.s64 = ctx.r19.s64 + -80;
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r7,13
	ctx.r7.s64 = 13;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x827a8810
	ctx.lr = 0x82EAEC8C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82eaecb8
	if (!cr6.eq) goto loc_82EAECB8;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,416
	ctx.r10.s64 = ctx.r1.s64 + 416;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r5,424(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 424);
	// lwz r4,428(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 428);
	// bl 0x82472fc0
	ctx.lr = 0x82EAECB8;
	sub_82472FC0(ctx, base);
loc_82EAECB8:
	// addi r6,r19,-64
	ctx.r6.s64 = ctx.r19.s64 + -64;
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r7,9
	ctx.r7.s64 = 9;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x827a8810
	ctx.lr = 0x82EAECD0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82eaecfc
	if (!cr6.eq) goto loc_82EAECFC;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,320
	ctx.r10.s64 = ctx.r1.s64 + 320;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r5,328(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// lwz r4,332(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// bl 0x82472fc0
	ctx.lr = 0x82EAECFC;
	sub_82472FC0(ctx, base);
loc_82EAECFC:
	// addi r6,r19,-52
	ctx.r6.s64 = ctx.r19.s64 + -52;
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x827a8810
	ctx.lr = 0x82EAED14;
	sub_827A8810(ctx, base);
	// addi r6,r19,-40
	ctx.r6.s64 = ctx.r19.s64 + -40;
	// li r7,9
	ctx.r7.s64 = 9;
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x827a8810
	ctx.lr = 0x82EAED2C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82eaed3c
	if (!cr6.eq) goto loc_82EAED3C;
	// lwz r29,12(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r28,8(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_82EAED3C:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82eaed50
	if (cr6.lt) goto loc_82EAED50;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82416268
	ctx.lr = 0x82EAED50;
	sub_82416268(ctx, base);
loc_82EAED50:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r21,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r21.u32);
	// stw r25,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r25.u32);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// stb r25,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r25.u8);
	// bne 0x82eaec40
	if (!cr0.eq) goto loc_82EAEC40;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82eaf040
	if (cr6.eq) goto loc_82EAF040;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x82eaf040
	if (cr6.eq) goto loc_82EAF040;
	// rlwinm r11,r28,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// add r24,r11,r29
	ctx.r24.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplw cr6,r29,r24
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, xer);
	// bge cr6,0x82eaf040
	if (!cr6.lt) goto loc_82EAF040;
	// addi r28,r20,196
	ctx.r28.s64 = ctx.r20.s64 + 196;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// li r26,29
	ctx.r26.s64 = 29;
loc_82EAED94:
	// stw r25,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r25.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r25,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r25.u32);
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x83691bb8
	ctx.lr = 0x82EAEDB0;
	sub_83691BB8(ctx, base);
	// lwz r11,440(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 440);
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r31,444(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 444);
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bge cr6,0x82eaee98
	if (!cr6.lt) goto loc_82EAEE98;
loc_82EAEDD0:
	// stw r21,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r21.u32);
	// addi r11,r1,528
	ctx.r11.s64 = ctx.r1.s64 + 528;
	// stw r25,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r25.u32);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// stb r25,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r25.u8);
	// ld r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// lwz r5,536(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 536);
	// lwz r4,540(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 540);
	// bl 0x82472fc0
	ctx.lr = 0x82EAEE00;
	sub_82472FC0(ctx, base);
	// lwz r8,244(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r6,224(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x82eaee14
	if (!cr6.lt) goto loc_82EAEE14;
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
loc_82EAEE14:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r7,240(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// lwz r5,272(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// bl 0x827a8810
	ctx.lr = 0x82EAEE28;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82eaee68
	if (!cr6.eq) goto loc_82EAEE68;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// addi r10,r1,288
	ctx.r10.s64 = ctx.r1.s64 + 288;
	// ld r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// addi r8,r31,16
	ctx.r8.s64 = ctx.r31.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,288(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x82eaee60
	if (!cr6.eq) goto loc_82EAEE60;
	// ld r11,296(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 296);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x82eaee64
	goto loc_82EAEE64;
loc_82EAEE60:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82EAEE64:
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_82EAEE68:
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82eaee7c
	if (cr6.lt) goto loc_82EAEE7C;
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x82416268
	ctx.lr = 0x82EAEE7C;
	sub_82416268(ctx, base);
loc_82EAEE7C:
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// stw r21,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r21.u32);
	// stw r25,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r25.u32);
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// stb r25,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r25.u8);
	// blt cr6,0x82eaedd0
	if (cr6.lt) goto loc_82EAEDD0;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
loc_82EAEE98:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,488
	ctx.r3.s64 = ctx.r1.s64 + 488;
	// bl 0x833d2a98
	ctx.lr = 0x82EAEEA8;
	sub_833D2A98(ctx, base);
	// lwz r11,200(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 200);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x82eaeee4
	if (cr6.eq) goto loc_82EAEEE4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82eae9f0
	ctx.lr = 0x82EAEEC4;
	sub_82EAE9F0(ctx, base);
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// std r11,416(r1)
	PPC_STORE_U64(ctx.r1.u32 + 416, ctx.r11.u64);
	// lwz r4,416(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82eaeee4
	if (cr6.eq) goto loc_82EAEEE4;
	// stw r26,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r26.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x825952b8
	ctx.lr = 0x82EAEEE4;
	sub_825952B8(ctx, base);
loc_82EAEEE4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82d059a8
	ctx.lr = 0x82EAEEF4;
	sub_82D059A8(ctx, base);
	// lwz r30,304(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// lwz r31,308(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, xer);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// beq cr6,0x82eaef1c
	if (cr6.eq) goto loc_82EAEF1C;
loc_82EAEF08:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x833ccd48
	ctx.lr = 0x82EAEF10;
	sub_833CCD48(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// bne cr6,0x82eaef08
	if (!cr6.eq) goto loc_82EAEF08;
loc_82EAEF1C:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x82d2e308
	ctx.lr = 0x82EAEF30;
	sub_82D2E308(ctx, base);
	// addi r6,r19,-28
	ctx.r6.s64 = ctx.r19.s64 + -28;
	// li r7,3
	ctx.r7.s64 = 3;
	// lwz r5,192(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x827a8810
	ctx.lr = 0x82EAEF48;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82eaf014
	if (cr6.eq) goto loc_82EAF014;
	// addi r6,r19,-24
	ctx.r6.s64 = ctx.r19.s64 + -24;
	// lwz r5,192(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// li r7,3
	ctx.r7.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x827a8810
	ctx.lr = 0x82EAEF68;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82eaef90
	if (cr6.eq) goto loc_82EAEF90;
	// addi r6,r19,-20
	ctx.r6.s64 = ctx.r19.s64 + -20;
	// lwz r5,192(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x827a8810
	ctx.lr = 0x82EAEF88;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82eaf014
	if (!cr6.eq) goto loc_82EAF014;
loc_82EAEF90:
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r26,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r26.u32);
	// addi r3,r1,204
	ctx.r3.s64 = ctx.r1.s64 + 204;
	// bl 0x82595718
	ctx.lr = 0x82EAEFA4;
	sub_82595718(ctx, base);
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r3,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r3.u32);
	// bl 0x831ce980
	ctx.lr = 0x82EAEFB4;
	sub_831CE980(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r3,28
	ctx.r3.s64 = 28;
	// stw r11,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r11.u32);
	// bl 0x82416260
	ctx.lr = 0x82EAEFC4;
	sub_82416260(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82eaf25c
	if (cr6.eq) goto loc_82EAF25C;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addic. r11,r3,12
	xer.ca = ctx.r3.u32 > 4294967283;
	ctx.r11.s64 = ctx.r3.s64 + 12;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lwz r8,4(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stb r25,24(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24, ctx.r25.u8);
	// stb r25,25(r3)
	PPC_STORE_U8(ctx.r3.u32 + 25, ctx.r25.u8);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// beq 0x82eaf004
	if (cr0.eq) goto loc_82EAF004;
	// ld r10,320(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 320);
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// std r10,4(r11)
	PPC_STORE_U64(ctx.r11.u32 + 4, ctx.r10.u64);
loc_82EAF004:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x82d2dd98
	ctx.lr = 0x82EAF014;
	sub_82D2DD98(ctx, base);
loc_82EAF014:
	// lwz r31,448(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82eaf030
	if (cr6.eq) goto loc_82EAF030;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x82EAF028;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82EAF030;
	sub_82416268(ctx, base);
loc_82EAF030:
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// addi r11,r29,-8
	ctx.r11.s64 = ctx.r29.s64 + -8;
	// cmplw cr6,r11,r24
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, xer);
	// blt cr6,0x82eaed94
	if (cr6.lt) goto loc_82EAED94;
loc_82EAF040:
	// li r3,8192
	ctx.r3.s64 = 8192;
	// bl 0x831d2bf8
	ctx.lr = 0x82EAF048;
	sub_831D2BF8(ctx, base);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// li r10,8192
	ctx.r10.s64 = 8192;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
	// lwz r22,204(r20)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r20.u32 + 204);
	// bl 0x82e74ac8
	ctx.lr = 0x82EAF074;
	sub_82E74AC8(ctx, base);
	// cmplw cr6,r23,r18
	cr6.compare<uint32_t>(ctx.r23.u32, ctx.r18.u32, xer);
	// bge cr6,0x82eaf2dc
	if (!cr6.lt) goto loc_82EAF2DC;
loc_82EAF07C:
	// stw r21,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r21.u32);
	// addi r11,r1,288
	ctx.r11.s64 = ctx.r1.s64 + 288;
	// stw r25,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r25.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r25,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r25.u8);
	// ld r10,8(r24)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r24.u32 + 8);
	// ld r9,0(r24)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r24.u32 + 0);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// lwz r5,296(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	// lwz r4,300(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// bl 0x82472fc0
	ctx.lr = 0x82EAF0AC;
	sub_82472FC0(ctx, base);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82e74890
	ctx.lr = 0x82EAF0B8;
	sub_82E74890(ctx, base);
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// lwz r26,112(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bge cr6,0x82eaf0d4
	if (!cr6.lt) goto loc_82EAF0D4;
	// addi r26,r1,112
	ctx.r26.s64 = ctx.r1.s64 + 112;
loc_82EAF0D4:
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r28,r10,8
	ctx.r28.s64 = ctx.r10.s64 + 8;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// subf r7,r8,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r8.s64;
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// bge cr6,0x82eaf13c
	if (!cr6.lt) goto loc_82EAF13C;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// rlwinm r31,r11,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x82eaf104
	if (!cr6.eq) goto loc_82EAF104;
	// li r31,8192
	ctx.r31.s64 = 8192;
loc_82EAF104:
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bge cr6,0x82eaf124
	if (!cr6.lt) goto loc_82EAF124;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_82EAF118:
	// rlwinm r31,r31,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// blt cr6,0x82eaf118
	if (cr6.lt) goto loc_82EAF118;
loc_82EAF124:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r29,r10,4
	ctx.r29.s64 = ctx.r10.s64 + 4;
	// bl 0x831d3198
	ctx.lr = 0x82EAF134;
	sub_831D3198(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
loc_82EAF13C:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x831ce980
	ctx.lr = 0x82EAF154;
	sub_831CE980(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r6,r19,-12
	ctx.r6.s64 = ctx.r19.s64 + -12;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// li r7,9
	ctx.r7.s64 = 9;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x827a8810
	ctx.lr = 0x82EAF178;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82eaf274
	if (!cr6.eq) goto loc_82EAF274;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82e749f8
	ctx.lr = 0x82EAF18C;
	sub_82E749F8(ctx, base);
	// lwz r11,200(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 200);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// beq cr6,0x82eaf2b0
	if (cr6.eq) goto loc_82EAF2B0;
loc_82EAF1A0:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82e74890
	ctx.lr = 0x82EAF1AC;
	sub_82E74890(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r27,r11,8
	ctx.r27.s64 = ctx.r11.s64 + 8;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// lwz r30,20(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r26,16(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r8,r30
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, xer);
	// bge cr6,0x82eaf21c
	if (!cr6.lt) goto loc_82EAF21C;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// rlwinm r31,r10,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x82eaf1e4
	if (!cr6.eq) goto loc_82EAF1E4;
	// li r31,8192
	ctx.r31.s64 = 8192;
loc_82EAF1E4:
	// add r10,r9,r30
	ctx.r10.u64 = ctx.r9.u64 + ctx.r30.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// bge cr6,0x82eaf204
	if (!cr6.lt) goto loc_82EAF204;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 + ctx.r10.u64;
loc_82EAF1F8:
	// rlwinm r31,r31,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// blt cr6,0x82eaf1f8
	if (cr6.lt) goto loc_82EAF1F8;
loc_82EAF204:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r28,r11,4
	ctx.r28.s64 = ctx.r11.s64 + 4;
	// bl 0x831d3198
	ctx.lr = 0x82EAF214;
	sub_831D3198(ctx, base);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// stw r31,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
loc_82EAF21C:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x831ce980
	ctx.lr = 0x82EAF234;
	sub_831CE980(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bl 0x833ccd48
	ctx.lr = 0x82EAF248;
	sub_833CCD48(ctx, base);
	// lwz r10,200(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 200);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x82eaf1a0
	if (!cr6.eq) goto loc_82EAF1A0;
	// b 0x82eaf2b0
	goto loc_82EAF2B0;
loc_82EAF25C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r25,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r25.u32);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// addi r10,r11,15364
	ctx.r10.s64 = ctx.r11.s64 + 15364;
	// stw r10,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r10.u32);
	// bl 0x8246b850
	ctx.lr = 0x82EAF274;
	sub_8246B850(ctx, base);
loc_82EAF274:
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x82EAF28C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82eaf2a4
	if (!cr6.eq) goto loc_82EAF2A4;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,204(r20)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r20.u32 + 204);
	// bl 0x82e746c0
	ctx.lr = 0x82EAF2A0;
	sub_82E746C0(ctx, base);
	// b 0x82eaf2b0
	goto loc_82EAF2B0;
loc_82EAF2A4:
	// addi r4,r24,16
	ctx.r4.s64 = ctx.r24.s64 + 16;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82eadfb8
	ctx.lr = 0x82EAF2B0;
	sub_82EADFB8(ctx, base);
loc_82EAF2B0:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82eaf2c4
	if (cr6.lt) goto loc_82EAF2C4;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82416268
	ctx.lr = 0x82EAF2C4;
	sub_82416268(ctx, base);
loc_82EAF2C4:
	// addi r24,r24,32
	ctx.r24.s64 = ctx.r24.s64 + 32;
	// stw r21,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r21.u32);
	// stw r25,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r25.u32);
	// cmplw cr6,r24,r18
	cr6.compare<uint32_t>(ctx.r24.u32, ctx.r18.u32, xer);
	// stb r25,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r25.u8);
	// blt cr6,0x82eaf07c
	if (cr6.lt) goto loc_82EAF07C;
loc_82EAF2DC:
	// stw r21,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r21.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r25,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r25.u32);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// stb r25,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r25.u8);
	// bl 0x82e74090
	ctx.lr = 0x82EAF2F4;
	sub_82E74090(ctx, base);
	// lwz r11,372(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82eaf308
	if (cr6.lt) goto loc_82EAF308;
	// lwz r3,352(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// bl 0x82416268
	ctx.lr = 0x82EAF308;
	sub_82416268(ctx, base);
loc_82EAF308:
	// stw r21,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r21.u32);
	// addi r31,r20,216
	ctx.r31.s64 = ctx.r20.s64 + 216;
	// stw r25,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r25.u32);
	// stb r25,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r25.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82586b68
	ctx.lr = 0x82EAF320;
	sub_82586B68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82586c08
	ctx.lr = 0x82EAF330;
	sub_82586C08(ctx, base);
	// lwz r3,212(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 212);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82eaf348
	if (cr6.eq) goto loc_82EAF348;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83354de8
	ctx.lr = 0x82EAF348;
	sub_83354DE8(ctx, base);
loc_82EAF348:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x831cf100
	ctx.lr = 0x82EAF350;
	sub_831CF100(ctx, base);
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82eaf364
	if (cr6.lt) goto loc_82EAF364;
	// lwz r3,176(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x82416268
	ctx.lr = 0x82EAF364;
	sub_82416268(ctx, base);
loc_82EAF364:
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// stw r21,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r21.u32);
	// stw r25,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r25.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r25,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r25.u8);
	// blt cr6,0x82eaf384
	if (cr6.lt) goto loc_82EAF384;
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82416268
	ctx.lr = 0x82EAF384;
	sub_82416268(ctx, base);
loc_82EAF384:
	// lwz r31,480(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 480);
	// stw r21,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r21.u32);
	// stw r25,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r25.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// stb r25,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r25.u8);
	// beq cr6,0x82eaf3ac
	if (cr6.eq) goto loc_82EAF3AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x82EAF3A4;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82EAF3AC;
	sub_82416268(ctx, base);
loc_82EAF3AC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAF3B8"))) PPC_WEAK_FUNC(sub_82EAF3B8);
PPC_FUNC_IMPL(__imp__sub_82EAF3B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82EAF3C0;
	__savegprlr_25(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r28,r3,176
	ctx.r28.s64 = ctx.r3.s64 + 176;
	// addi r31,r11,-14508
	ctx.r31.s64 = ctx.r11.s64 + -14508;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r31,-216
	ctx.r4.s64 = ctx.r31.s64 + -216;
	// bl 0x82536d88
	ctx.lr = 0x82EAF3E0;
	sub_82536D88(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x82EAF3E4;
	sub_825832E0(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
	// li r25,15
	ctx.r25.s64 = 15;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r26,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r26.u32);
	// stw r25,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r25.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r26,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r26.u8);
loc_82EAF400:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82eaf400
	if (!cr6.eq) goto loc_82EAF400;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x82EAF424;
	sub_82472FC0(ctx, base);
	// addi r4,r31,-200
	ctx.r4.s64 = ctx.r31.s64 + -200;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82536d88
	ctx.lr = 0x82EAF430;
	sub_82536D88(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x82EAF434;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r25,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r25.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r26,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r26.u32);
	// stb r26,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r26.u8);
loc_82EAF448:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82eaf448
	if (!cr6.eq) goto loc_82EAF448;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x82EAF46C;
	sub_82472FC0(ctx, base);
	// addi r4,r31,-188
	ctx.r4.s64 = ctx.r31.s64 + -188;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82536d88
	ctx.lr = 0x82EAF478;
	sub_82536D88(ctx, base);
	// bl 0x825347e8
	ctx.lr = 0x82EAF47C;
	sub_825347E8(ctx, base);
	// addi r4,r31,-176
	ctx.r4.s64 = ctx.r31.s64 + -176;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82536d88
	ctx.lr = 0x82EAF488;
	sub_82536D88(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82536838
	ctx.lr = 0x82EAF494;
	sub_82536838(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82534a38
	ctx.lr = 0x82EAF49C;
	sub_82534A38(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82eaf624
	if (cr6.eq) goto loc_82EAF624;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825356a0
	ctx.lr = 0x82EAF4B4;
	sub_825356A0(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,296
	ctx.r3.s64 = ctx.r1.s64 + 296;
	// bl 0x825356f0
	ctx.lr = 0x82EAF4C0;
	sub_825356F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82534ae0
	ctx.lr = 0x82EAF4CC;
	sub_82534AE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82eaf624
	if (!cr6.eq) goto loc_82EAF624;
	// addi r30,r27,380
	ctx.r30.s64 = ctx.r27.s64 + 380;
loc_82EAF4DC:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82535118
	ctx.lr = 0x82EAF4E4;
	sub_82535118(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82536838
	ctx.lr = 0x82EAF4F0;
	sub_82536838(ctx, base);
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82eaf504
	if (!cr6.lt) goto loc_82EAF504;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
loc_82EAF504:
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82536d88
	ctx.lr = 0x82EAF50C;
	sub_82536D88(ctx, base);
	// bl 0x825347e8
	ctx.lr = 0x82EAF510;
	sub_825347E8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82ead918
	ctx.lr = 0x82EAF528;
	sub_82EAD918(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// lwz r6,196(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r5,192(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82eaeab8
	ctx.lr = 0x82EAF53C;
	sub_82EAEAB8(ctx, base);
	// addi r6,r31,-164
	ctx.r6.s64 = ctx.r31.s64 + -164;
	// li r7,3
	ctx.r7.s64 = 3;
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x827a8810
	ctx.lr = 0x82EAF554;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82eaf5f0
	if (cr6.eq) goto loc_82EAF5F0;
	// addi r6,r31,-160
	ctx.r6.s64 = ctx.r31.s64 + -160;
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r7,3
	ctx.r7.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x827a8810
	ctx.lr = 0x82EAF574;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82eaf59c
	if (cr6.eq) goto loc_82EAF59C;
	// addi r6,r31,-156
	ctx.r6.s64 = ctx.r31.s64 + -156;
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x827a8810
	ctx.lr = 0x82EAF594;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82eaf5f0
	if (!cr6.eq) goto loc_82EAF5F0;
loc_82EAF59C:
	// stw r29,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r29.u32);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// addi r3,r1,312
	ctx.r3.s64 = ctx.r1.s64 + 312;
	// bl 0x82536838
	ctx.lr = 0x82EAF5AC;
	sub_82536838(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ead1e0
	ctx.lr = 0x82EAF5B4;
	sub_82EAD1E0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addic. r11,r3,16
	xer.ca = ctx.r3.u32 > 4294967279;
	ctx.r11.s64 = ctx.r3.s64 + 16;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82eaf5d4
	if (cr0.eq) goto loc_82EAF5D4;
	// lwz r10,304(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// addi r4,r1,312
	ctx.r4.s64 = ctx.r1.s64 + 312;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x82536838
	ctx.lr = 0x82EAF5D4;
	sub_82536838(ctx, base);
loc_82EAF5D4:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82eae770
	ctx.lr = 0x82EAF5E8;
	sub_82EAE770(ctx, base);
	// addi r3,r1,312
	ctx.r3.s64 = ctx.r1.s64 + 312;
	// bl 0x82535aa0
	ctx.lr = 0x82EAF5F0;
	sub_82535AA0(ctx, base);
loc_82EAF5F0:
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82535aa0
	ctx.lr = 0x82EAF5F8;
	sub_82535AA0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82535128
	ctx.lr = 0x82EAF600;
	sub_82535128(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,296
	ctx.r3.s64 = ctx.r1.s64 + 296;
	// bl 0x825356f0
	ctx.lr = 0x82EAF60C;
	sub_825356F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82534ae0
	ctx.lr = 0x82EAF618;
	sub_82534AE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82eaf4dc
	if (cr6.eq) goto loc_82EAF4DC;
loc_82EAF624:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82536838
	ctx.lr = 0x82EAF630;
	sub_82536838(ctx, base);
	// addi r4,r31,-148
	ctx.r4.s64 = ctx.r31.s64 + -148;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82536d88
	ctx.lr = 0x82EAF63C;
	sub_82536D88(ctx, base);
	// bl 0x82535130
	ctx.lr = 0x82EAF640;
	sub_82535130(ctx, base);
	// lwz r11,384(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 384);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// beq cr6,0x82eaf680
	if (cr6.eq) goto loc_82EAF680;
loc_82EAF654:
	// addi r4,r31,-136
	ctx.r4.s64 = ctx.r31.s64 + -136;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82536d88
	ctx.lr = 0x82EAF660;
	sub_82536D88(ctx, base);
	// addi r4,r30,24
	ctx.r4.s64 = ctx.r30.s64 + 24;
	// bl 0x82536d38
	ctx.lr = 0x82EAF668;
	sub_82536D38(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ead150
	ctx.lr = 0x82EAF670;
	sub_82EAD150(ctx, base);
	// lwz r11,384(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 384);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bne cr6,0x82eaf654
	if (!cr6.eq) goto loc_82EAF654;
loc_82EAF680:
	// addi r4,r31,-112
	ctx.r4.s64 = ctx.r31.s64 + -112;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82536d88
	ctx.lr = 0x82EAF68C;
	sub_82536D88(ctx, base);
	// bl 0x825355c0
	ctx.lr = 0x82EAF690;
	sub_825355C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82534640
	ctx.lr = 0x82EAF69C;
	sub_82534640(ctx, base);
	// addi r4,r31,-124
	ctx.r4.s64 = ctx.r31.s64 + -124;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82536d88
	ctx.lr = 0x82EAF6A8;
	sub_82536D88(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x825369e8
	ctx.lr = 0x82EAF6B0;
	sub_825369E8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535aa0
	ctx.lr = 0x82EAF6B8;
	sub_82535AA0(ctx, base);
	// addi r4,r31,-92
	ctx.r4.s64 = ctx.r31.s64 + -92;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82536d88
	ctx.lr = 0x82EAF6C4;
	sub_82536D88(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x82EAF6C8;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825346c8
	ctx.lr = 0x82EAF6D4;
	sub_825346C8(ctx, base);
	// addi r4,r31,-100
	ctx.r4.s64 = ctx.r31.s64 + -100;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82536d88
	ctx.lr = 0x82EAF6E0;
	sub_82536D88(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x825369e8
	ctx.lr = 0x82EAF6E8;
	sub_825369E8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535aa0
	ctx.lr = 0x82EAF6F0;
	sub_82535AA0(ctx, base);
	// addi r4,r31,-76
	ctx.r4.s64 = ctx.r31.s64 + -76;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82536d88
	ctx.lr = 0x82EAF6FC;
	sub_82536D88(ctx, base);
	// bl 0x825347e8
	ctx.lr = 0x82EAF700;
	sub_825347E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82534640
	ctx.lr = 0x82EAF70C;
	sub_82534640(ctx, base);
	// addi r4,r31,-84
	ctx.r4.s64 = ctx.r31.s64 + -84;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82536d88
	ctx.lr = 0x82EAF718;
	sub_82536D88(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x825369e8
	ctx.lr = 0x82EAF720;
	sub_825369E8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535aa0
	ctx.lr = 0x82EAF728;
	sub_82535AA0(ctx, base);
	// addi r4,r31,-68
	ctx.r4.s64 = ctx.r31.s64 + -68;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82536d88
	ctx.lr = 0x82EAF734;
	sub_82536D88(ctx, base);
	// bl 0x82534a18
	ctx.lr = 0x82EAF738;
	sub_82534A18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82eaf77c
	if (!cr6.eq) goto loc_82EAF77C;
	// addi r4,r31,-44
	ctx.r4.s64 = ctx.r31.s64 + -44;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82536d88
	ctx.lr = 0x82EAF750;
	sub_82536D88(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x82EAF754;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825346c8
	ctx.lr = 0x82EAF760;
	sub_825346C8(ctx, base);
	// addi r4,r31,-56
	ctx.r4.s64 = ctx.r31.s64 + -56;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82536d88
	ctx.lr = 0x82EAF76C;
	sub_82536D88(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x825369e8
	ctx.lr = 0x82EAF774;
	sub_825369E8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535aa0
	ctx.lr = 0x82EAF77C;
	sub_82535AA0(ctx, base);
loc_82EAF77C:
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82536d88
	ctx.lr = 0x82EAF788;
	sub_82536D88(ctx, base);
	// bl 0x82534a18
	ctx.lr = 0x82EAF78C;
	sub_82534A18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82eaf7d0
	if (!cr6.eq) goto loc_82EAF7D0;
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82536d88
	ctx.lr = 0x82EAF7A4;
	sub_82536D88(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x82EAF7A8;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825346c8
	ctx.lr = 0x82EAF7B4;
	sub_825346C8(ctx, base);
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82536d88
	ctx.lr = 0x82EAF7C0;
	sub_82536D88(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x825369e8
	ctx.lr = 0x82EAF7C8;
	sub_825369E8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535aa0
	ctx.lr = 0x82EAF7D0;
	sub_82535AA0(ctx, base);
loc_82EAF7D0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82536d88
	ctx.lr = 0x82EAF7DC;
	sub_82536D88(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x82EAF7E0;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825346c8
	ctx.lr = 0x82EAF7EC;
	sub_825346C8(ctx, base);
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82536d88
	ctx.lr = 0x82EAF7F8;
	sub_82536D88(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x825369e8
	ctx.lr = 0x82EAF800;
	sub_825369E8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535aa0
	ctx.lr = 0x82EAF808;
	sub_82535AA0(ctx, base);
	// addi r31,r27,416
	ctx.r31.s64 = ctx.r27.s64 + 416;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82586b68
	ctx.lr = 0x82EAF814;
	sub_82586B68(ctx, base);
	// lwz r11,344(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 344);
	// addi r4,r27,344
	ctx.r4.s64 = ctx.r27.s64 + 344;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82EAF830;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,228(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// bge cr6,0x82eaf844
	if (!cr6.lt) goto loc_82EAF844;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
loc_82EAF844:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,224(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82586c08
	ctx.lr = 0x82EAF850;
	sub_82586C08(ctx, base);
	// lwz r3,412(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 412);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82eaf868
	if (cr6.eq) goto loc_82EAF868;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83354de8
	ctx.lr = 0x82EAF868;
	sub_83354DE8(ctx, base);
loc_82EAF868:
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82eaf87c
	if (cr6.lt) goto loc_82EAF87C;
	// lwz r3,208(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x8386d088
	ctx.lr = 0x82EAF87C;
	sub_8386D088(ctx, base);
loc_82EAF87C:
	// stw r25,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r25.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r26,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r26.u32);
	// stb r26,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r26.u8);
	// bl 0x82535aa0
	ctx.lr = 0x82EAF890;
	sub_82535AA0(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82535aa0
	ctx.lr = 0x82EAF898;
	sub_82535AA0(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82eaf8ac
	if (cr6.lt) goto loc_82EAF8AC;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82416268
	ctx.lr = 0x82EAF8AC;
	sub_82416268(ctx, base);
loc_82EAF8AC:
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// stw r25,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r25.u32);
	// stw r26,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r26.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r26,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r26.u8);
	// blt cr6,0x82eaf8cc
	if (cr6.lt) goto loc_82EAF8CC;
	// lwz r3,240(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x82416268
	ctx.lr = 0x82EAF8CC;
	sub_82416268(ctx, base);
loc_82EAF8CC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAF8D8"))) PPC_WEAK_FUNC(sub_82EAF8D8);
PPC_FUNC_IMPL(__imp__sub_82EAF8D8) {
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
	ctx.lr = 0x82EAF8F0;
	sub_82D95768(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// addi r9,r11,-14320
	ctx.r9.s64 = ctx.r11.s64 + -14320;
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r9.u32);
	// lis r7,-32231
	ctx.r7.s64 = -2112290816;
	// lis r6,-32231
	ctx.r6.s64 = -2112290816;
	// stw r11,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r11.u32);
	// li r5,15
	ctx.r5.s64 = 15;
	// addi r4,r10,-14296
	ctx.r4.s64 = ctx.r10.s64 + -14296;
	// addi r3,r8,-14308
	ctx.r3.s64 = ctx.r8.s64 + -14308;
	// stw r5,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r5.u32);
	// addi r10,r7,-14312
	ctx.r10.s64 = ctx.r7.s64 + -14312;
	// stb r11,316(r31)
	PPC_STORE_U8(ctx.r31.u32 + 316, ctx.r11.u8);
	// addi r9,r6,-14316
	ctx.r9.s64 = ctx.r6.s64 + -14316;
	// stw r3,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r3.u32);
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// addi r11,r31,312
	ctx.r11.s64 = ctx.r31.s64 + 312;
	// stw r10,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82EAF95C"))) PPC_WEAK_FUNC(sub_82EAF95C);
PPC_FUNC_IMPL(__imp__sub_82EAF95C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAF960"))) PPC_WEAK_FUNC(sub_82EAF960);
PPC_FUNC_IMPL(__imp__sub_82EAF960) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x82eafa20
	sub_82EAFA20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAF968"))) PPC_WEAK_FUNC(sub_82EAF968);
PPC_FUNC_IMPL(__imp__sub_82EAF968) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-312
	ctx.r3.s64 = ctx.r3.s64 + -312;
	// b 0x82eafa20
	sub_82EAFA20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAF970"))) PPC_WEAK_FUNC(sub_82EAF970);
PPC_FUNC_IMPL(__imp__sub_82EAF970) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x82eafa20
	sub_82EAFA20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAF978"))) PPC_WEAK_FUNC(sub_82EAF978);
PPC_FUNC_IMPL(__imp__sub_82EAF978) {
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
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// lis r7,-32231
	ctx.r7.s64 = -2112290816;
	// lis r6,-32231
	ctx.r6.s64 = -2112290816;
	// addi r11,r3,312
	ctx.r11.s64 = ctx.r3.s64 + 312;
	// addi r5,r10,-14296
	ctx.r5.s64 = ctx.r10.s64 + -14296;
	// addi r4,r9,-14308
	ctx.r4.s64 = ctx.r9.s64 + -14308;
	// addi r3,r8,-14312
	ctx.r3.s64 = ctx.r8.s64 + -14312;
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// addi r10,r7,-14316
	ctx.r10.s64 = ctx.r7.s64 + -14316;
	// stw r4,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r4.u32);
	// addi r9,r6,-14320
	ctx.r9.s64 = ctx.r6.s64 + -14320;
	// stw r3,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r3.u32);
	// stw r10,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r10.u32);
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// stw r9,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r9.u32);
	// lwz r8,336(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x82eaf9e8
	if (cr6.lt) goto loc_82EAF9E8;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x82EAF9E8;
	sub_8386D088(ctx, base);
loc_82EAF9E8:
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
	ctx.lr = 0x82EAFA04;
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

__attribute__((alias("__imp__sub_82EAFA1C"))) PPC_WEAK_FUNC(sub_82EAFA1C);
PPC_FUNC_IMPL(__imp__sub_82EAFA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAFA20"))) PPC_WEAK_FUNC(sub_82EAFA20);
PPC_FUNC_IMPL(__imp__sub_82EAFA20) {
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
	// bl 0x82eaf978
	ctx.lr = 0x82EAFA40;
	sub_82EAF978(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82eafa58
	if (cr6.eq) goto loc_82EAFA58;
	// bl 0x82416268
	ctx.lr = 0x82EAFA54;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82EAFA58:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EAFA70"))) PPC_WEAK_FUNC(sub_82EAFA70);
PPC_FUNC_IMPL(__imp__sub_82EAFA70) {
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
	// bl 0x82eaf8d8
	ctx.lr = 0x82EAFA8C;
	sub_82EAF8D8(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// addi r7,r11,-14260
	ctx.r7.s64 = ctx.r11.s64 + -14260;
	// addi r6,r10,-14272
	ctx.r6.s64 = ctx.r10.s64 + -14272;
	// addi r5,r9,-14276
	ctx.r5.s64 = ctx.r9.s64 + -14276;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// addi r4,r8,-14280
	ctx.r4.s64 = ctx.r8.s64 + -14280;
	// stw r6,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r6.u32);
	// stw r5,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r5.u32);
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// stw r4,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r4.u32);
	// bl 0x82545e38
	ctx.lr = 0x82EAFAC4;
	sub_82545E38(ctx, base);
	// addi r3,r31,380
	ctx.r3.s64 = ctx.r31.s64 + 380;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82ead9d8
	ctx.lr = 0x82EAFAD4;
	sub_82EAD9D8(ctx, base);
	// addi r3,r31,396
	ctx.r3.s64 = ctx.r31.s64 + 396;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82d2c878
	ctx.lr = 0x82EAFAE4;
	sub_82D2C878(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r31,416
	ctx.r3.s64 = ctx.r31.s64 + 416;
	// stw r30,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82586b80
	ctx.lr = 0x82EAFAF8;
	sub_82586B80(ctx, base);
	// stb r30,440(r31)
	PPC_STORE_U8(ctx.r31.u32 + 440, ctx.r30.u8);
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

__attribute__((alias("__imp__sub_82EAFB18"))) PPC_WEAK_FUNC(sub_82EAFB18);
PPC_FUNC_IMPL(__imp__sub_82EAFB18) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x82eafd30
	sub_82EAFD30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAFB20"))) PPC_WEAK_FUNC(sub_82EAFB20);
PPC_FUNC_IMPL(__imp__sub_82EAFB20) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-312
	ctx.r3.s64 = ctx.r3.s64 + -312;
	// b 0x82eafd30
	sub_82EAFD30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAFB28"))) PPC_WEAK_FUNC(sub_82EAFB28);
PPC_FUNC_IMPL(__imp__sub_82EAFB28) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x82eafd30
	sub_82EAFD30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAFB30"))) PPC_WEAK_FUNC(sub_82EAFB30);
PPC_FUNC_IMPL(__imp__sub_82EAFB30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82EAFB38;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lwz r10,400(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 400);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r6,r11,-14260
	ctx.r6.s64 = ctx.r11.s64 + -14260;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// lis r7,-32231
	ctx.r7.s64 = -2112290816;
	// addi r5,r9,-14272
	ctx.r5.s64 = ctx.r9.s64 + -14272;
	// addi r4,r8,-14276
	ctx.r4.s64 = ctx.r8.s64 + -14276;
	// addi r3,r7,-14280
	ctx.r3.s64 = ctx.r7.s64 + -14280;
	// stw r5,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r5.u32);
	// stw r4,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r4.u32);
	// stw r3,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r3.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82eafbbc
	if (cr6.eq) goto loc_82EAFBBC;
	// li r30,29
	ctx.r30.s64 = 29;
loc_82EAFB88:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82eafba4
	if (cr6.eq) goto loc_82EAFBA4;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x825952b8
	ctx.lr = 0x82EAFBA4;
	sub_825952B8(ctx, base);
loc_82EAFBA4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x833ccd48
	ctx.lr = 0x82EAFBAC;
	sub_833CCD48(ctx, base);
	// lwz r10,400(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82eafb88
	if (!cr6.eq) goto loc_82EAFB88;
loc_82EAFBBC:
	// addi r3,r31,416
	ctx.r3.s64 = ctx.r31.s64 + 416;
	// bl 0x82586bd8
	ctx.lr = 0x82EAFBC4;
	sub_82586BD8(ctx, base);
	// lwz r6,400(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// addi r4,r31,396
	ctx.r4.s64 = ctx.r31.s64 + 396;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82d2e308
	ctx.lr = 0x82EAFBD8;
	sub_82D2E308(ctx, base);
	// lwz r3,400(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// bl 0x82416268
	ctx.lr = 0x82EAFBE0;
	sub_82416268(ctx, base);
	// lwz r6,384(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// addi r4,r31,380
	ctx.r4.s64 = ctx.r31.s64 + 380;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82eaeab8
	ctx.lr = 0x82EAFBF4;
	sub_82EAEAB8(ctx, base);
	// lwz r3,384(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// bl 0x82416268
	ctx.lr = 0x82EAFBFC;
	sub_82416268(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r29,r31,344
	ctx.r29.s64 = ctx.r31.s64 + 344;
	// addi r10,r11,-68
	ctx.r10.s64 = ctx.r11.s64 + -68;
	// addi r30,r29,4
	ctx.r30.s64 = ctx.r29.s64 + 4;
	// stw r10,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r10.u32);
	// lwz r9,368(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82eafc24
	if (cr6.lt) goto loc_82EAFC24;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x82EAFC24;
	sub_8386D088(ctx, base);
loc_82EAFC24:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// bl 0x825458c8
	ctx.lr = 0x82EAFC40;
	sub_825458C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eaf978
	ctx.lr = 0x82EAFC48;
	sub_82EAF978(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAFC50"))) PPC_WEAK_FUNC(sub_82EAFC50);
PPC_FUNC_IMPL(__imp__sub_82EAFC50) {
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
	// bl 0x82e8ba80
	ctx.lr = 0x82EAFC68;
	sub_82E8BA80(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r31,208
	ctx.r3.s64 = ctx.r31.s64 + 208;
	// addi r10,r11,-14240
	ctx.r10.s64 = ctx.r11.s64 + -14240;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82eafa70
	ctx.lr = 0x82EAFC7C;
	sub_82EAFA70(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r9,656(r31)
	PPC_STORE_U8(ctx.r31.u32 + 656, ctx.r9.u8);
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

__attribute__((alias("__imp__sub_82EAFC9C"))) PPC_WEAK_FUNC(sub_82EAFC9C);
PPC_FUNC_IMPL(__imp__sub_82EAFC9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EAFCA0"))) PPC_WEAK_FUNC(sub_82EAFCA0);
PPC_FUNC_IMPL(__imp__sub_82EAFCA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82EAFCA8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r29,r3,160
	ctx.r29.s64 = ctx.r3.s64 + 160;
	// addi r10,r11,-14240
	ctx.r10.s64 = ctx.r11.s64 + -14240;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82596fe8
	ctx.lr = 0x82EAFCC8;
	sub_82596FE8(ctx, base);
	// lwz r30,620(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82eafd08
	if (cr6.eq) goto loc_82EAFD08;
	// li r11,29
	ctx.r11.s64 = 29;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x82EAFCE8;
	sub_82595150(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82EAFD00;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x82EAFD08;
	sub_82595170(ctx, base);
loc_82EAFD08:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// bl 0x82597088
	ctx.lr = 0x82EAFD18;
	sub_82597088(ctx, base);
	// addi r3,r31,208
	ctx.r3.s64 = ctx.r31.s64 + 208;
	// bl 0x82eafb30
	ctx.lr = 0x82EAFD20;
	sub_82EAFB30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8bdc0
	ctx.lr = 0x82EAFD28;
	sub_82E8BDC0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAFD30"))) PPC_WEAK_FUNC(sub_82EAFD30);
PPC_FUNC_IMPL(__imp__sub_82EAFD30) {
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
	// bl 0x82eafb30
	ctx.lr = 0x82EAFD50;
	sub_82EAFB30(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82eafd68
	if (cr6.eq) goto loc_82EAFD68;
	// bl 0x82416268
	ctx.lr = 0x82EAFD64;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82EAFD68:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EAFD80"))) PPC_WEAK_FUNC(sub_82EAFD80);
PPC_FUNC_IMPL(__imp__sub_82EAFD80) {
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
	// bl 0x82eafca0
	ctx.lr = 0x82EAFDA0;
	sub_82EAFCA0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82eafdb8
	if (cr6.eq) goto loc_82EAFDB8;
	// bl 0x82416268
	ctx.lr = 0x82EAFDB4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82EAFDB8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EAFDD0"))) PPC_WEAK_FUNC(sub_82EAFDD0);
PPC_FUNC_IMPL(__imp__sub_82EAFDD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r3,r3,56
	ctx.r3.s64 = ctx.r3.s64 + 56;
	// li r5,16
	ctx.r5.s64 = 16;
	// b 0x831ce980
	sub_831CE980(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAFDE4"))) PPC_WEAK_FUNC(sub_82EAFDE4);
PPC_FUNC_IMPL(__imp__sub_82EAFDE4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EAFDE8"))) PPC_WEAK_FUNC(sub_82EAFDE8);
PPC_FUNC_IMPL(__imp__sub_82EAFDE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r3,r3,72
	ctx.r3.s64 = ctx.r3.s64 + 72;
	// li r5,16
	ctx.r5.s64 = 16;
	// b 0x831ce980
	sub_831CE980(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EAFDFC"))) PPC_WEAK_FUNC(sub_82EAFDFC);
PPC_FUNC_IMPL(__imp__sub_82EAFDFC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EAFE00"))) PPC_WEAK_FUNC(sub_82EAFE00);
PPC_FUNC_IMPL(__imp__sub_82EAFE00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addi r3,r3,28
	ctx.r3.s64 = ctx.r3.s64 + 28;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EAFE18"))) PPC_WEAK_FUNC(sub_82EAFE18);
PPC_FUNC_IMPL(__imp__sub_82EAFE18) {
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
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r3,28
	ctx.r11.s64 = ctx.r3.s64 + 28;
	// stw r31,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r31.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82eafe4c
	if (cr6.lt) goto loc_82EAFE4C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82EAFE4C:
	// stb r31,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// blt cr6,0x82eafe68
	if (cr6.lt) goto loc_82EAFE68;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82eafe6c
	goto loc_82EAFE6C;
loc_82EAFE68:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82EAFE6C:
	// stb r31,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r31,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r31.u32);
	// addi r3,r30,144
	ctx.r3.s64 = ctx.r30.s64 + 144;
	// stw r31,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r31.u32);
	// stw r31,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r31.u32);
	// stw r31,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r31.u32);
	// stw r31,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r31.u32);
	// stw r31,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r31.u32);
	// stw r31,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r31.u32);
	// bl 0x831cdcf0
	ctx.lr = 0x82EAFEA0;
	sub_831CDCF0(ctx, base);
	// lwz r10,228(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// addi r11,r30,208
	ctx.r11.s64 = ctx.r30.s64 + 208;
	// stw r31,224(r30)
	PPC_STORE_U32(ctx.r30.u32 + 224, ctx.r31.u32);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82eafebc
	if (cr6.lt) goto loc_82EAFEBC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82eafec0
	goto loc_82EAFEC0;
loc_82EAFEBC:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82EAFEC0:
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// addi r11,r30,244
	ctx.r11.s64 = ctx.r30.s64 + 244;
	// stw r31,236(r30)
	PPC_STORE_U32(ctx.r30.u32 + 236, ctx.r31.u32);
	// stb r31,240(r30)
	PPC_STORE_U8(ctx.r30.u32 + 240, ctx.r31.u8);
	// stb r31,241(r30)
	PPC_STORE_U8(ctx.r30.u32 + 241, ctx.r31.u8);
	// lwz r10,264(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stw r31,260(r30)
	PPC_STORE_U32(ctx.r30.u32 + 260, ctx.r31.u32);
	// blt cr6,0x82eafeec
	if (cr6.lt) goto loc_82EAFEEC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82eafef0
	goto loc_82EAFEF0;
loc_82EAFEEC:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82EAFEF0:
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// stw r31,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r31.u32);
	// stw r31,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r31.u32);
	// stw r31,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r31.u32);
	// stw r31,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r31.u32);
	// stb r31,44(r11)
	PPC_STORE_U8(ctx.r11.u32 + 44, ctx.r31.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EAFF20"))) PPC_WEAK_FUNC(sub_82EAFF20);
PPC_FUNC_IMPL(__imp__sub_82EAFF20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82EAFF28;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,264(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r28,r3,244
	ctx.r28.s64 = ctx.r3.s64 + 244;
	// li r26,2
	ctx.r26.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82eaff54
	if (cr6.lt) goto loc_82EAFF54;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82EAFF54;
	sub_825952B8(ctx, base);
loc_82EAFF54:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// addi r29,r30,208
	ctx.r29.s64 = ctx.r30.s64 + 208;
	// stw r27,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r27.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// lwz r11,228(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82eaff80
	if (cr6.lt) goto loc_82EAFF80;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82416268
	ctx.lr = 0x82EAFF80;
	sub_82416268(ctx, base);
loc_82EAFF80:
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// addi r28,r30,116
	ctx.r28.s64 = ctx.r30.s64 + 116;
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// lwz r11,136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82eaffac
	if (cr6.lt) goto loc_82EAFFAC;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82EAFFAC;
	sub_825952B8(ctx, base);
loc_82EAFFAC:
	// stw r27,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r27.u32);
	// addi r29,r30,88
	ctx.r29.s64 = ctx.r30.s64 + 88;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82eaffd8
	if (cr6.lt) goto loc_82EAFFD8;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82EAFFD8;
	sub_825952B8(ctx, base);
loc_82EAFFD8:
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// addi r28,r30,28
	ctx.r28.s64 = ctx.r30.s64 + 28;
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82eafffc
	if (cr6.lt) goto loc_82EAFFFC;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82416268
	ctx.lr = 0x82EAFFFC;
	sub_82416268(ctx, base);
loc_82EAFFFC:
	// stw r27,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r27.u32);
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82eb001c
	if (cr6.lt) goto loc_82EB001C;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82416268
	ctx.lr = 0x82EB001C;
	sub_82416268(ctx, base);
loc_82EB001C:
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB0030"))) PPC_WEAK_FUNC(sub_82EB0030);
PPC_FUNC_IMPL(__imp__sub_82EB0030) {
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
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// addi r10,r3,244
	ctx.r10.s64 = ctx.r3.s64 + 244;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// stw r9,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r9.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stb r11,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r11.u8);
	// stw r9,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r9.u32);
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// stb r11,88(r3)
	PPC_STORE_U8(ctx.r3.u32 + 88, ctx.r11.u8);
	// stw r9,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r9.u32);
	// stw r11,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r11.u32);
	// stb r11,116(r3)
	PPC_STORE_U8(ctx.r3.u32 + 116, ctx.r11.u8);
	// stw r9,228(r3)
	PPC_STORE_U32(ctx.r3.u32 + 228, ctx.r9.u32);
	// stw r11,224(r3)
	PPC_STORE_U32(ctx.r3.u32 + 224, ctx.r11.u32);
	// stb r11,208(r3)
	PPC_STORE_U8(ctx.r3.u32 + 208, ctx.r11.u8);
	// stw r9,264(r3)
	PPC_STORE_U32(ctx.r3.u32 + 264, ctx.r9.u32);
	// stb r11,244(r3)
	PPC_STORE_U8(ctx.r3.u32 + 244, ctx.r11.u8);
	// lwz r9,264(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// stw r11,260(r3)
	PPC_STORE_U32(ctx.r3.u32 + 260, ctx.r11.u32);
	// blt cr6,0x82eb00ac
	if (cr6.lt) goto loc_82EB00AC;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82eb00b0
	goto loc_82EB00B0;
loc_82EB00AC:
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_82EB00B0:
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r11.u32);
	// stw r11,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r11.u32);
	// stw r11,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r11.u32);
	// stw r11,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, ctx.r11.u32);
	// stb r11,44(r10)
	PPC_STORE_U8(ctx.r10.u32 + 44, ctx.r11.u8);
	// bl 0x82eafe18
	ctx.lr = 0x82EB00D0;
	sub_82EAFE18(ctx, base);
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

__attribute__((alias("__imp__sub_82EB00E8"))) PPC_WEAK_FUNC(sub_82EB00E8);
PPC_FUNC_IMPL(__imp__sub_82EB00E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82EB00F4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82eb00f4
	if (!cr6.eq) goto loc_82EB00F4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x82472fc0
	sub_82472FC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB0114"))) PPC_WEAK_FUNC(sub_82EB0114);
PPC_FUNC_IMPL(__imp__sub_82EB0114) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB0118"))) PPC_WEAK_FUNC(sub_82EB0118);
PPC_FUNC_IMPL(__imp__sub_82EB0118) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82EB0124:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82eb0124
	if (!cr6.eq) goto loc_82EB0124;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r3,28
	ctx.r3.s64 = ctx.r3.s64 + 28;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x82472fc0
	sub_82472FC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB0148"))) PPC_WEAK_FUNC(sub_82EB0148);
PPC_FUNC_IMPL(__imp__sub_82EB0148) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB014C"))) PPC_WEAK_FUNC(sub_82EB014C);
PPC_FUNC_IMPL(__imp__sub_82EB014C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB0150"))) PPC_WEAK_FUNC(sub_82EB0150);
PPC_FUNC_IMPL(__imp__sub_82EB0150) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x831d88a0
	ctx.lr = 0x82EB0170;
	sub_831D88A0(ctx, base);
	// mulli r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 * 100;
	// li r4,46
	ctx.r4.s64 = 46;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ceeb0
	ctx.lr = 0x82EB0180;
	sub_831CEEB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82eb0198
	if (cr6.eq) goto loc_82EB0198;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bl 0x831d88a0
	ctx.lr = 0x82EB0190;
	sub_831D88A0(ctx, base);
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + ctx.r31.u64;
	// b 0x82eb019c
	goto loc_82EB019C;
loc_82EB0198:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82EB019C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB01B4"))) PPC_WEAK_FUNC(sub_82EB01B4);
PPC_FUNC_IMPL(__imp__sub_82EB01B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB01B8"))) PPC_WEAK_FUNC(sub_82EB01B8);
PPC_FUNC_IMPL(__imp__sub_82EB01B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82EB01C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x831d88a0
	ctx.lr = 0x82EB01D0;
	sub_831D88A0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,46
	ctx.r4.s64 = 46;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ceeb0
	ctx.lr = 0x82EB01E0;
	sub_831CEEB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82eb0240
	if (cr6.eq) goto loc_82EB0240;
	// addi r31,r3,1
	ctx.r31.s64 = ctx.r3.s64 + 1;
	// li r4,46
	ctx.r4.s64 = 46;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ceeb0
	ctx.lr = 0x82EB01F8;
	sub_831CEEB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82eb022c
	if (cr6.eq) goto loc_82EB022C;
	// bl 0x831d88a0
	ctx.lr = 0x82EB020C;
	sub_831D88A0(ctx, base);
	// mulli r11,r29,100
	ctx.r11.s64 = ctx.r29.s64 * 100;
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r3,r30,1
	ctx.r3.s64 = ctx.r30.s64 + 1;
	// mulli r31,r10,100
	ctx.r31.s64 = ctx.r10.s64 * 100;
	// bl 0x831d88a0
	ctx.lr = 0x82EB0220;
	sub_831D88A0(ctx, base);
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82EB022C:
	// bl 0x831d88a0
	ctx.lr = 0x82EB0230;
	sub_831D88A0(ctx, base);
	// mulli r11,r29,100
	ctx.r11.s64 = ctx.r29.s64 * 100;
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82EB0240:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB024C"))) PPC_WEAK_FUNC(sub_82EB024C);
PPC_FUNC_IMPL(__imp__sub_82EB024C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB0250"))) PPC_WEAK_FUNC(sub_82EB0250);
PPC_FUNC_IMPL(__imp__sub_82EB0250) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	// lwz r11,13924(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13924);
	// lwz r10,13920(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13920);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r3,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB0264"))) PPC_WEAK_FUNC(sub_82EB0264);
PPC_FUNC_IMPL(__imp__sub_82EB0264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB0268"))) PPC_WEAK_FUNC(sub_82EB0268);
PPC_FUNC_IMPL(__imp__sub_82EB0268) {
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
	// beq cr6,0x82eb02bc
	if (cr6.eq) goto loc_82EB02BC;
	// lis r11,1023
	ctx.r11.s64 = 67043328;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82eb02a0
	if (cr6.gt) goto loc_82EB02A0;
	// rlwinm r3,r4,6,0,25
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 6) & 0xFFFFFFC0;
	// bl 0x82416260
	ctx.lr = 0x82EB0298;
	sub_82416260(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82eb02bc
	if (!cr6.eq) goto loc_82EB02BC;
loc_82EB02A0:
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
	ctx.lr = 0x82EB02BC;
	sub_8246B850(ctx, base);
loc_82EB02BC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB02CC"))) PPC_WEAK_FUNC(sub_82EB02CC);
PPC_FUNC_IMPL(__imp__sub_82EB02CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82EB02D0"))) PPC_WEAK_FUNC(sub_82EB02D0);
PPC_FUNC_IMPL(__imp__sub_82EB02D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,13920(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13920);
	// lwz r10,13924(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13924);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// bgt cr6,0x82eb02f0
	if (cr6.gt) goto loc_82EB02F0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82EB02F0:
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// clrlwi r3,r9,16
	ctx.r3.u64 = ctx.r9.u32 & 0xFFFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82EB0300"))) PPC_WEAK_FUNC(sub_82EB0300);
PPC_FUNC_IMPL(__imp__sub_82EB0300) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82EB0308;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,260(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r3,240
	ctx.r31.s64 = ctx.r3.s64 + 240;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82eb0324
	if (cr6.lt) goto loc_82EB0324;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82EB0324:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831d88a0
	ctx.lr = 0x82EB032C;
	sub_831D88A0(ctx, base);
	// mulli r30,r3,100
	ctx.r30.s64 = ctx.r3.s64 * 100;
	// li r4,46
	ctx.r4.s64 = 46;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ceeb0
	ctx.lr = 0x82EB033C;
	sub_831CEEB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82eb035c
	if (cr6.eq) goto loc_82EB035C;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bl 0x831d88a0
	ctx.lr = 0x82EB034C;
	sub_831D88A0(ctx, base);
	// add r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 + ctx.r30.u64;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82EB035C:
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82EB0368"))) PPC_WEAK_FUNC(sub_82EB0368);
PPC_FUNC_IMPL(__imp__sub_82EB0368) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82EB0370;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,288(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r3,268
	ctx.r31.s64 = ctx.r3.s64 + 268;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82eb038c
	if (cr6.lt) goto loc_82EB038C;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82EB038C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831d88a0
	ctx.lr = 0x82EB0394;
	sub_831D88A0(ctx, base);
	// mulli r30,r3,100
	ctx.r30.s64 = ctx.r3.s64 * 100;
	// li r4,46
	ctx.r4.s64 = 46;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ceeb0
	ctx.lr = 0x82EB03A4;
	sub_831CEEB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82eb03c4
	if (cr6.eq) goto loc_82EB03C4;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bl 0x831d88a0
	ctx.lr = 0x82EB03B4;
	sub_831D88A0(ctx, base);
	// add r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 + ctx.r30.u64;
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82EB03C4:
	// stw r30,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

