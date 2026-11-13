#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82AC86F8"))) PPC_WEAK_FUNC(sub_82AC86F8);
PPC_FUNC_IMPL(__imp__sub_82AC86F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ac8708
	if (cr6.lt) goto loc_82AC8708;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82AC8708:
	// lbz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// b 0x82ac8638
	sub_82AC8638(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC8714"))) PPC_WEAK_FUNC(sub_82AC8714);
PPC_FUNC_IMPL(__imp__sub_82AC8714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC8718"))) PPC_WEAK_FUNC(sub_82AC8718);
PPC_FUNC_IMPL(__imp__sub_82AC8718) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x825a1da8
	ctx.lr = 0x82AC8740;
	sub_825A1DA8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// bl 0x8292a448
	ctx.lr = 0x82AC8760;
	sub_8292A448(ctx, base);
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

__attribute__((alias("__imp__sub_82AC8778"))) PPC_WEAK_FUNC(sub_82AC8778);
PPC_FUNC_IMPL(__imp__sub_82AC8778) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82AC8780;
	__savegprlr_26(ctx, base);
	// stwu r1,-704(r1)
	ea = -704 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stb r29,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r29.u8);
	// addi r31,r11,-32720
	ctx.r31.s64 = ctx.r11.s64 + -32720;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r31,-245
	ctx.r4.s64 = ctx.r31.s64 + -245;
	// bl 0x8259cc28
	ctx.lr = 0x82AC87B4;
	sub_8259CC28(ctx, base);
	// lwz r11,584(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 584);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82ac8b2c
	if (cr6.lt) goto loc_82AC8B2C;
	// beq cr6,0x82ac8b20
	if (cr6.eq) goto loc_82AC8B20;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x82ac8b3c
	if (!cr6.lt) goto loc_82AC8B3C;
	// bl 0x831156e8
	ctx.lr = 0x82AC87D0;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r5,r31,-248
	ctx.r5.s64 = ctx.r31.s64 + -248;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r30,48(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x831178a0
	ctx.lr = 0x82AC87F0;
	sub_831178A0(ctx, base);
	// addi r4,r31,-214
	ctx.r4.s64 = ctx.r31.s64 + -214;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x837b0c10
	ctx.lr = 0x82AC87FC;
	sub_837B0C10(ctx, base);
	// lis r10,194
	ctx.r10.s64 = 12713984;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// ori r9,r10,52146
	ctx.r9.u64 = ctx.r10.u64 | 52146;
	// lhzx r28,r30,r9
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r30.u32 + ctx.r9.u32);
	// bl 0x8314c958
	ctx.lr = 0x82AC8810;
	sub_8314C958(ctx, base);
	// li r27,-1
	ctx.r27.s64 = -1;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ac8838
	if (!cr6.eq) goto loc_82AC8838;
	// lis r4,29
	ctx.r4.s64 = 1900544;
	// addi r6,r28,1
	ctx.r6.s64 = ctx.r28.s64 + 1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// ori r4,r4,591
	ctx.r4.u64 = ctx.r4.u64 | 591;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82d042a8
	ctx.lr = 0x82AC8834;
	sub_82D042A8(ctx, base);
	// b 0x82ac8868
	goto loc_82AC8868;
loc_82AC8838:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// clrldi r4,r28,32
	ctx.r4.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x83161f10
	ctx.lr = 0x82AC884C;
	sub_83161F10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8259cb28
	ctx.lr = 0x82AC8860;
	sub_8259CB28(ctx, base);
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x8387e8e0
	ctx.lr = 0x82AC8868;
	sub_8387E8E0(ctx, base);
loc_82AC8868:
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r5,192(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82ac887c
	if (!cr6.lt) goto loc_82AC887C;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
loc_82AC887C:
	// lis r4,276
	ctx.r4.s64 = 18087936;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,73
	ctx.r4.u64 = ctx.r4.u64 | 73;
	// bl 0x82d042a8
	ctx.lr = 0x82AC888C;
	sub_82D042A8(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x831573b0
	ctx.lr = 0x82AC8894;
	sub_831573B0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82ac89d0
	if (!cr6.eq) goto loc_82AC89D0;
	// addi r4,r31,-213
	ctx.r4.s64 = ctx.r31.s64 + -213;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x837b0c10
	ctx.lr = 0x82AC88A8;
	sub_837B0C10(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x83157218
	ctx.lr = 0x82AC88B0;
	sub_83157218(ctx, base);
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8311c338
	ctx.lr = 0x82AC88C0;
	sub_8311C338(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x83125548
	ctx.lr = 0x82AC88D0;
	sub_83125548(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8259cb28
	ctx.lr = 0x82AC88E4;
	sub_8259CB28(ctx, base);
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// bl 0x8387e8e0
	ctx.lr = 0x82AC88EC;
	sub_8387E8E0(ctx, base);
	// addi r4,r31,-183
	ctx.r4.s64 = ctx.r31.s64 + -183;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x82AC88F8;
	sub_837B0C10(ctx, base);
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r5,256(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82ac890c
	if (!cr6.lt) goto loc_82AC890C;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
loc_82AC890C:
	// lis r4,276
	ctx.r4.s64 = 18087936;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// ori r4,r4,75
	ctx.r4.u64 = ctx.r4.u64 | 75;
	// bl 0x82d042a8
	ctx.lr = 0x82AC891C;
	sub_82D042A8(ctx, base);
	// addi r4,r31,-182
	ctx.r4.s64 = ctx.r31.s64 + -182;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x837b0c10
	ctx.lr = 0x82AC8928;
	sub_837B0C10(ctx, base);
	// lis r4,276
	ctx.r4.s64 = 18087936;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// ori r4,r4,76
	ctx.r4.u64 = ctx.r4.u64 | 76;
	// bl 0x82d042a8
	ctx.lr = 0x82AC8938;
	sub_82D042A8(ctx, base);
	// addi r5,r31,-8
	ctx.r5.s64 = ctx.r31.s64 + -8;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82ab6970
	ctx.lr = 0x82AC8948;
	sub_82AB6970(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// bl 0x82ac8718
	ctx.lr = 0x82AC8958;
	sub_82AC8718(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r31,-12
	ctx.r5.s64 = ctx.r31.s64 + -12;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x8292a568
	ctx.lr = 0x82AC8968;
	sub_8292A568(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// bl 0x82ac8718
	ctx.lr = 0x82AC8978;
	sub_82AC8718(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82AC898C;
	sub_8259CB28(ctx, base);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x8387e8e0
	ctx.lr = 0x82AC8994;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x8387e8e0
	ctx.lr = 0x82AC899C;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x8387e8e0
	ctx.lr = 0x82AC89A4;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x8387e8e0
	ctx.lr = 0x82AC89AC;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x82AC89B4;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82AC89BC;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8387e8e0
	ctx.lr = 0x82AC89C4;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x82AC89CC;
	sub_8387E8E0(ctx, base);
	// b 0x82ac8b3c
	goto loc_82AC8B3C;
loc_82AC89D0:
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x82ac8b14
	if (!cr6.eq) goto loc_82AC8B14;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8317c2b8
	ctx.lr = 0x82AC89E0;
	sub_8317C2B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ac8b14
	if (!cr6.eq) goto loc_82AC8B14;
	// addi r4,r31,-181
	ctx.r4.s64 = ctx.r31.s64 + -181;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x837b0c10
	ctx.lr = 0x82AC89F8;
	sub_837B0C10(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x83157218
	ctx.lr = 0x82AC8A00;
	sub_83157218(ctx, base);
	// stb r29,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r29.u8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8311c338
	ctx.lr = 0x82AC8A10;
	sub_8311C338(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// addi r5,r1,81
	ctx.r5.s64 = ctx.r1.s64 + 81;
	// bl 0x83125548
	ctx.lr = 0x82AC8A20;
	sub_83125548(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8259cb28
	ctx.lr = 0x82AC8A34;
	sub_8259CB28(ctx, base);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x8387e8e0
	ctx.lr = 0x82AC8A3C;
	sub_8387E8E0(ctx, base);
	// addi r4,r31,-163
	ctx.r4.s64 = ctx.r31.s64 + -163;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x837b0c10
	ctx.lr = 0x82AC8A48;
	sub_837B0C10(ctx, base);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r5,224(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82ac8a5c
	if (!cr6.lt) goto loc_82AC8A5C;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
loc_82AC8A5C:
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// ori r4,r4,5
	ctx.r4.u64 = ctx.r4.u64 | 5;
	// bl 0x82d042a8
	ctx.lr = 0x82AC8A6C;
	sub_82D042A8(ctx, base);
	// addi r4,r31,-162
	ctx.r4.s64 = ctx.r31.s64 + -162;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x82AC8A78;
	sub_837B0C10(ctx, base);
	// lis r4,276
	ctx.r4.s64 = 18087936;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// ori r4,r4,74
	ctx.r4.u64 = ctx.r4.u64 | 74;
	// bl 0x82d042a8
	ctx.lr = 0x82AC8A88;
	sub_82D042A8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// bl 0x82ab6970
	ctx.lr = 0x82AC8A98;
	sub_82AB6970(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// bl 0x82ac8718
	ctx.lr = 0x82AC8AA8;
	sub_82AC8718(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r31,-4
	ctx.r5.s64 = ctx.r31.s64 + -4;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x8292a568
	ctx.lr = 0x82AC8AB8;
	sub_8292A568(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// bl 0x82ac8718
	ctx.lr = 0x82AC8AC8;
	sub_82AC8718(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82AC8ADC;
	sub_8259CB28(ctx, base);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x8387e8e0
	ctx.lr = 0x82AC8AE4;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x8387e8e0
	ctx.lr = 0x82AC8AEC;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// bl 0x8387e8e0
	ctx.lr = 0x82AC8AF4;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// bl 0x8387e8e0
	ctx.lr = 0x82AC8AFC;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82AC8B04;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x82AC8B0C;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8387e8e0
	ctx.lr = 0x82AC8B14;
	sub_8387E8E0(ctx, base);
loc_82AC8B14:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x82AC8B1C;
	sub_8387E8E0(ctx, base);
	// b 0x82ac8b3c
	goto loc_82AC8B3C;
loc_82AC8B20:
	// lis r4,631
	ctx.r4.s64 = 41353216;
	// ori r4,r4,629
	ctx.r4.u64 = ctx.r4.u64 | 629;
	// b 0x82ac8b34
	goto loc_82AC8B34;
loc_82AC8B2C:
	// lis r4,269
	ctx.r4.s64 = 17629184;
	// ori r4,r4,161
	ctx.r4.u64 = ctx.r4.u64 | 161;
loc_82AC8B34:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d042a8
	ctx.lr = 0x82AC8B3C;
	sub_82D042A8(ctx, base);
loc_82AC8B3C:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d2aab0
	ctx.lr = 0x82AC8B48;
	sub_82D2AAB0(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ac8b68
	if (cr6.lt) goto loc_82AC8B68;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82AC8B68;
	sub_825952B8(ctx, base);
loc_82AC8B68:
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC8B70"))) PPC_WEAK_FUNC(sub_82AC8B70);
PPC_FUNC_IMPL(__imp__sub_82AC8B70) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwimi r11,r10,0,14,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFC0000);
	// lbz r8,15(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 15);
	// lwz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwimi r6,r5,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// rlwimi r10,r9,0,12,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFF00000);
	// rotlwi r6,r10,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// rlwimi r6,r9,0,12,23
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFF00) | (ctx.r6.u64 & 0xFFFFFFFFFFF000FF);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// lwz r5,12(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// rlwinm r11,r5,0,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFF00;
	// or r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 | ctx.r11.u64;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// lwz r8,16(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// rlwimi r8,r7,0,12,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFF00000);
	// rotlwi r6,r8,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// lwz r7,16(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// rlwimi r6,r7,0,12,21
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFC00) | (ctx.r6.u64 & 0xFFFFFFFFFFF003FF);
	// stw r6,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
	// lwz r5,20(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// rlwimi r5,r9,0,11,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x1FFFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFE00000);
	// rotlwi r10,r5,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r5,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// rlwimi r10,r11,0,11,21
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x1FFC00) | (ctx.r10.u64 & 0xFFFFFFFFFFE003FF);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// lhz r9,24(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 24);
	// sth r9,24(r3)
	PPC_STORE_U16(ctx.r3.u32 + 24, ctx.r9.u16);
	// lhz r8,26(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 26);
	// sth r8,26(r3)
	PPC_STORE_U16(ctx.r3.u32 + 26, ctx.r8.u16);
	// lhz r7,28(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 28);
	// sth r7,28(r3)
	PPC_STORE_U16(ctx.r3.u32 + 28, ctx.r7.u16);
	// lhz r6,30(r4)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r4.u32 + 30);
	// sth r6,30(r3)
	PPC_STORE_U16(ctx.r3.u32 + 30, ctx.r6.u16);
	// lhz r5,32(r4)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r4.u32 + 32);
	// sth r5,32(r3)
	PPC_STORE_U16(ctx.r3.u32 + 32, ctx.r5.u16);
	// lhz r11,34(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 34);
	// sth r11,34(r3)
	PPC_STORE_U16(ctx.r3.u32 + 34, ctx.r11.u16);
	// lhz r10,36(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 36);
	// sth r10,36(r3)
	PPC_STORE_U16(ctx.r3.u32 + 36, ctx.r10.u16);
	// lhz r9,38(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 38);
	// sth r9,38(r3)
	PPC_STORE_U16(ctx.r3.u32 + 38, ctx.r9.u16);
	// lhz r8,40(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 40);
	// sth r8,40(r3)
	PPC_STORE_U16(ctx.r3.u32 + 40, ctx.r8.u16);
	// lhz r7,42(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 42);
	// sth r7,42(r3)
	PPC_STORE_U16(ctx.r3.u32 + 42, ctx.r7.u16);
	// lbz r6,44(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 44);
	// stb r6,44(r3)
	PPC_STORE_U8(ctx.r3.u32 + 44, ctx.r6.u8);
	// lbz r5,45(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 45);
	// stb r5,45(r3)
	PPC_STORE_U8(ctx.r3.u32 + 45, ctx.r5.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AC8C70"))) PPC_WEAK_FUNC(sub_82AC8C70);
PPC_FUNC_IMPL(__imp__sub_82AC8C70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-31968
	ctx.r5.s64 = ctx.r11.s64 + -31968;
	// b 0x82d20da8
	sub_82D20DA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC8C80"))) PPC_WEAK_FUNC(sub_82AC8C80);
PPC_FUNC_IMPL(__imp__sub_82AC8C80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bgt cr6,0x82ac8d5c
	if (cr6.gt) goto loc_82AC8D5C;
	// lis r12,-32083
	ctx.r12.s64 = -2102591488;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-29528
	ctx.r12.s64 = ctx.r12.s64 + -29528;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82AC8D5C;
	case 1:
		goto loc_82AC8CD8;
	case 2:
		goto loc_82AC8CE4;
	case 3:
		goto loc_82AC8CF0;
	case 4:
		goto loc_82AC8CFC;
	case 5:
		goto loc_82AC8D08;
	case 6:
		goto loc_82AC8D14;
	case 7:
		goto loc_82AC8D20;
	case 8:
		goto loc_82AC8D2C;
	case 9:
		goto loc_82AC8D38;
	case 10:
		goto loc_82AC8D44;
	case 11:
		goto loc_82AC8D50;
	default:
		return;
	}
	// lwz r21,-29348(r12)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r12.u32 + -29348);
	// lwz r21,-29480(r12)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r12.u32 + -29480);
	// lwz r21,-29468(r12)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r12.u32 + -29468);
	// lwz r21,-29456(r12)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r12.u32 + -29456);
	// lwz r21,-29444(r12)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r12.u32 + -29444);
	// lwz r21,-29432(r12)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r12.u32 + -29432);
	// lwz r21,-29420(r12)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r12.u32 + -29420);
	// lwz r21,-29408(r12)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r12.u32 + -29408);
	// lwz r21,-29396(r12)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r12.u32 + -29396);
	// lwz r21,-29384(r12)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r12.u32 + -29384);
	// lwz r21,-29372(r12)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r12.u32 + -29372);
	// lwz r21,-29360(r12)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r12.u32 + -29360);
loc_82AC8CD8:
	// lis r3,108
	ctx.r3.s64 = 7077888;
	// ori r3,r3,238
	ctx.r3.u64 = ctx.r3.u64 | 238;
	// blr 
	return;
loc_82AC8CE4:
	// lis r3,108
	ctx.r3.s64 = 7077888;
	// ori r3,r3,239
	ctx.r3.u64 = ctx.r3.u64 | 239;
	// blr 
	return;
loc_82AC8CF0:
	// lis r3,108
	ctx.r3.s64 = 7077888;
	// ori r3,r3,240
	ctx.r3.u64 = ctx.r3.u64 | 240;
	// blr 
	return;
loc_82AC8CFC:
	// lis r3,108
	ctx.r3.s64 = 7077888;
	// ori r3,r3,241
	ctx.r3.u64 = ctx.r3.u64 | 241;
	// blr 
	return;
loc_82AC8D08:
	// lis r3,108
	ctx.r3.s64 = 7077888;
	// ori r3,r3,242
	ctx.r3.u64 = ctx.r3.u64 | 242;
	// blr 
	return;
loc_82AC8D14:
	// lis r3,108
	ctx.r3.s64 = 7077888;
	// ori r3,r3,243
	ctx.r3.u64 = ctx.r3.u64 | 243;
	// blr 
	return;
loc_82AC8D20:
	// lis r3,108
	ctx.r3.s64 = 7077888;
	// ori r3,r3,244
	ctx.r3.u64 = ctx.r3.u64 | 244;
	// blr 
	return;
loc_82AC8D2C:
	// lis r3,108
	ctx.r3.s64 = 7077888;
	// ori r3,r3,245
	ctx.r3.u64 = ctx.r3.u64 | 245;
	// blr 
	return;
loc_82AC8D38:
	// lis r3,108
	ctx.r3.s64 = 7077888;
	// ori r3,r3,246
	ctx.r3.u64 = ctx.r3.u64 | 246;
	// blr 
	return;
loc_82AC8D44:
	// lis r3,108
	ctx.r3.s64 = 7077888;
	// ori r3,r3,247
	ctx.r3.u64 = ctx.r3.u64 | 247;
	// blr 
	return;
loc_82AC8D50:
	// lis r3,108
	ctx.r3.s64 = 7077888;
	// ori r3,r3,248
	ctx.r3.u64 = ctx.r3.u64 | 248;
	// blr 
	return;
loc_82AC8D5C:
	// lis r3,108
	ctx.r3.s64 = 7077888;
	// ori r3,r3,237
	ctx.r3.u64 = ctx.r3.u64 | 237;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AC8D68"))) PPC_WEAK_FUNC(sub_82AC8D68);
PPC_FUNC_IMPL(__imp__sub_82AC8D68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82ac8e84
	if (cr6.eq) goto loc_82AC8E84;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
loc_82AC8D74:
	// lwz r10,-8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r8,8(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// rlwimi r10,r9,0,14,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFC0000);
	// lbz r7,15(r5)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r5.u32 + 15);
	// lwz r6,16(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,-8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// rlwimi r3,r10,0,0,13
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFC0000) | (ctx.r3.u64 & 0xFFFFFFFF0003FFFF);
	// stw r3,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r3.u32);
	// lwz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r9,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r9.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r8,r3,0,0,11
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0xFFF00000) | (ctx.r8.u64 & 0xFFFFFFFF000FFFFF);
	// rotlwi r9,r8,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r8.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r9,r10,0,12,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFF000FF);
	// stw r9,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r3,r8,0,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF00;
	// or r10,r7,r3
	ctx.r10.u64 = ctx.r7.u64 | ctx.r3.u64;
	// lwz r9,20(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// stw r10,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r10.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwimi r8,r6,0,12,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFF00000);
	// rotlwi r6,r8,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r8.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwimi r6,r7,0,12,21
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFC00) | (ctx.r6.u64 & 0xFFFFFFFFFFF003FF);
	// stw r6,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r6.u32);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwimi r3,r9,0,11,31
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x1FFFFF) | (ctx.r3.u64 & 0xFFFFFFFFFFE00000);
	// rotlwi r9,r3,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r3,20(r5)
	PPC_STORE_U32(ctx.r5.u32 + 20, ctx.r3.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwimi r9,r10,0,11,21
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x1FFC00) | (ctx.r9.u64 & 0xFFFFFFFFFFE003FF);
	// stw r9,20(r5)
	PPC_STORE_U32(ctx.r5.u32 + 20, ctx.r9.u32);
	// lhz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 16);
	// sth r8,24(r5)
	PPC_STORE_U16(ctx.r5.u32 + 24, ctx.r8.u16);
	// lhz r7,18(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 18);
	// sth r7,26(r5)
	PPC_STORE_U16(ctx.r5.u32 + 26, ctx.r7.u16);
	// lhz r6,20(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 20);
	// sth r6,28(r5)
	PPC_STORE_U16(ctx.r5.u32 + 28, ctx.r6.u16);
	// lhz r3,22(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 22);
	// sth r3,30(r5)
	PPC_STORE_U16(ctx.r5.u32 + 30, ctx.r3.u16);
	// lhz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 24);
	// sth r10,32(r5)
	PPC_STORE_U16(ctx.r5.u32 + 32, ctx.r10.u16);
	// lhz r9,26(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 26);
	// sth r9,34(r5)
	PPC_STORE_U16(ctx.r5.u32 + 34, ctx.r9.u16);
	// lhz r8,28(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 28);
	// sth r8,36(r5)
	PPC_STORE_U16(ctx.r5.u32 + 36, ctx.r8.u16);
	// lhz r7,30(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 30);
	// sth r7,38(r5)
	PPC_STORE_U16(ctx.r5.u32 + 38, ctx.r7.u16);
	// lhz r6,32(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 32);
	// sth r6,40(r5)
	PPC_STORE_U16(ctx.r5.u32 + 40, ctx.r6.u16);
	// lhz r3,34(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 34);
	// sth r3,42(r5)
	PPC_STORE_U16(ctx.r5.u32 + 42, ctx.r3.u16);
	// lbz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 36);
	// stb r10,44(r5)
	PPC_STORE_U8(ctx.r5.u32 + 44, ctx.r10.u8);
	// lbz r9,37(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 37);
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// stb r9,45(r5)
	PPC_STORE_U8(ctx.r5.u32 + 45, ctx.r9.u8);
	// addi r5,r5,48
	ctx.r5.s64 = ctx.r5.s64 + 48;
	// addi r8,r11,-8
	ctx.r8.s64 = ctx.r11.s64 + -8;
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// bne cr6,0x82ac8d74
	if (!cr6.eq) goto loc_82AC8D74;
loc_82AC8E84:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AC8E8C"))) PPC_WEAK_FUNC(sub_82AC8E8C);
PPC_FUNC_IMPL(__imp__sub_82AC8E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC8E90"))) PPC_WEAK_FUNC(sub_82AC8E90);
PPC_FUNC_IMPL(__imp__sub_82AC8E90) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-31560
	ctx.r9.s64 = ctx.r11.s64 + -31560;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// lwz r4,96(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82ac8ed8
	if (cr6.eq) goto loc_82AC8ED8;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82AC8ED8;
	sub_825952B8(ctx, base);
loc_82AC8ED8:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// bl 0x82c0fc10
	ctx.lr = 0x82AC8EF0;
	sub_82C0FC10(ctx, base);
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

__attribute__((alias("__imp__sub_82AC8F04"))) PPC_WEAK_FUNC(sub_82AC8F04);
PPC_FUNC_IMPL(__imp__sub_82AC8F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC8F08"))) PPC_WEAK_FUNC(sub_82AC8F08);
PPC_FUNC_IMPL(__imp__sub_82AC8F08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82AC8F10;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x82c0fbb8
	ctx.lr = 0x82AC8F20;
	sub_82C0FBB8(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-31560
	ctx.r9.s64 = ctx.r11.s64 + -31560;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// addi r29,r7,-10760
	ctx.r29.s64 = ctx.r7.s64 + -10760;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// stb r11,116(r31)
	PPC_STORE_U8(ctx.r31.u32 + 116, ctx.r11.u8);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// stb r30,124(r31)
	PPC_STORE_U8(ctx.r31.u32 + 124, ctx.r30.u8);
	// lwz r4,-10760(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + -10760);
	// bl 0x82d20ae0
	ctx.lr = 0x82AC8F6C;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x82d23390
	ctx.lr = 0x82AC8F7C;
	sub_82D23390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC8F88"))) PPC_WEAK_FUNC(sub_82AC8F88);
PPC_FUNC_IMPL(__imp__sub_82AC8F88) {
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
	// bl 0x82ac8e90
	ctx.lr = 0x82AC8FA8;
	sub_82AC8E90(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ac8fc0
	if (cr6.eq) goto loc_82AC8FC0;
	// bl 0x82416268
	ctx.lr = 0x82AC8FBC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82AC8FC0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AC8FD8"))) PPC_WEAK_FUNC(sub_82AC8FD8);
PPC_FUNC_IMPL(__imp__sub_82AC8FD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82AC8FE0;
	__savegprlr_26(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// li r10,48
	ctx.r10.s64 = 48;
	// lwz r9,100(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r7,r8,r10
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	// cmplw cr6,r5,r7
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r7.u32, xer);
	// bge cr6,0x82ac9340
	if (!cr6.lt) goto loc_82AC9340;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82ac9340
	if (cr6.eq) goto loc_82AC9340;
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// add r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 + ctx.r10.u64;
	// li r5,48
	ctx.r5.s64 = 48;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x831ce980
	ctx.lr = 0x82AC902C;
	sub_831CE980(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82AC9030;
	sub_831156E8(ctx, base);
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311c148
	ctx.lr = 0x82AC903C;
	sub_8311C148(ctx, base);
	// lbz r9,116(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 116);
	// addi r31,r30,100
	ctx.r31.s64 = ctx.r30.s64 + 100;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r30,r11,-31672
	ctx.r30.s64 = ctx.r11.s64 + -31672;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bne cr6,0x82ac9220
	if (!cr6.eq) goto loc_82AC9220;
	// addi r4,r30,-208
	ctx.r4.s64 = ctx.r30.s64 + -208;
	// bctrl 
	ctx.lr = 0x82AC9070;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ac90ac
	if (cr6.eq) goto loc_82AC90AC;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r10,324(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r29,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r29.u32);
	// beq cr6,0x82ac909c
	if (cr6.eq) goto loc_82AC909C;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82AC909C:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82d329f8
	ctx.lr = 0x82AC90AC;
	sub_82D329F8(ctx, base);
loc_82AC90AC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r30,-196
	ctx.r4.s64 = ctx.r30.s64 + -196;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AC90C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ac91c8
	if (cr6.eq) goto loc_82AC91C8;
	// li r28,15
	ctx.r28.s64 = 15;
	// lbz r3,236(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 236);
	// stw r29,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r29.u32);
	// stw r28,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r28.u32);
	// stb r29,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r29.u8);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// stb r29,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r29.u8);
	// bl 0x82ac8c80
	ctx.lr = 0x82AC90F4;
	sub_82AC8C80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d042a8
	ctx.lr = 0x82AC9100;
	sub_82D042A8(ctx, base);
	// lbz r3,237(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 237);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ac9178
	if (cr6.eq) goto loc_82AC9178;
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// stb r29,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r29.u8);
	// bl 0x82ac8c80
	ctx.lr = 0x82AC911C;
	sub_82AC8C80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82d042a8
	ctx.lr = 0x82AC9128;
	sub_82D042A8(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82ac913c
	if (!cr6.lt) goto loc_82AC913C;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
loc_82AC913C:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82ac9150
	if (!cr6.lt) goto loc_82AC9150;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
loc_82AC9150:
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// rlwinm r7,r11,22,21,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x7FF;
	// rlwinm r5,r11,11,21,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x7FF;
	// ori r4,r4,597
	ctx.r4.u64 = ctx.r4.u64 | 597;
	// bl 0x82d042a8
	ctx.lr = 0x82AC916C;
	sub_82D042A8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82AC9174;
	sub_8387E8E0(ctx, base);
	// b 0x82ac91a4
	goto loc_82AC91A4;
loc_82AC9178:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82ac918c
	if (!cr6.lt) goto loc_82AC918C;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
loc_82AC918C:
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// ori r4,r4,598
	ctx.r4.u64 = ctx.r4.u64 | 598;
	// rlwinm r5,r11,11,21,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x7FF;
	// bl 0x82d042a8
	ctx.lr = 0x82AC91A4;
	sub_82D042A8(ctx, base);
loc_82AC91A4:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82AC91B8;
	sub_82D291E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82AC91C0;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x82AC91C8;
	sub_8387E8E0(ctx, base);
loc_82AC91C8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r30,-184
	ctx.r4.s64 = ctx.r30.s64 + -184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AC91E0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r30,-168
	ctx.r4.s64 = ctx.r30.s64 + -168;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82AC91FC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r30,-140
	ctx.r4.s64 = ctx.r30.s64 + -140;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82AC9218;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r30,-116
	ctx.r4.s64 = ctx.r30.s64 + -116;
	// b 0x82ac92b0
	goto loc_82AC92B0;
loc_82AC9220:
	// addi r4,r30,-92
	ctx.r4.s64 = ctx.r30.s64 + -92;
	// bctrl 
	ctx.lr = 0x82AC9228;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ac925c
	if (cr6.eq) goto loc_82AC925C;
	// lwz r10,324(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// li r29,0
	ctx.r29.s64 = 0;
	// lhz r11,784(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 784);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r29,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r29.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82ac9250
	if (cr6.eq) goto loc_82AC9250;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82AC9250:
	// li r6,0
	ctx.r6.s64 = 0;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x82d32b60
	ctx.lr = 0x82AC925C;
	sub_82D32B60(ctx, base);
loc_82AC925C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r30,-76
	ctx.r4.s64 = ctx.r30.s64 + -76;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AC9274;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r30,-60
	ctx.r4.s64 = ctx.r30.s64 + -60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82AC9290;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r30,-28
	ctx.r4.s64 = ctx.r30.s64 + -28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82AC92AC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82AC92B0:
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AC92C8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82ac92fc
	if (cr6.eq) goto loc_82AC92FC;
	// addi r4,r26,4
	ctx.r4.s64 = ctx.r26.s64 + 4;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x837b0c10
	ctx.lr = 0x82AC92E0;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82AC92F4;
	sub_82D291E0(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8387e8e0
	ctx.lr = 0x82AC92FC;
	sub_8387E8E0(ctx, base);
loc_82AC92FC:
	// lwz r30,200(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x82ac9314
	if (cr6.eq) goto loc_82AC9314;
	// rldicl r4,r30,44,52
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u64, 44) & 0xFFF;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d294d0
	ctx.lr = 0x82AC9314;
	sub_82D294D0(ctx, base);
loc_82AC9314:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x82ac9328
	if (cr6.eq) goto loc_82AC9328;
	// rldicl r4,r30,56,52
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u64, 56) & 0xFFF;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d294d0
	ctx.lr = 0x82AC9328;
	sub_82D294D0(ctx, base);
loc_82AC9328:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82ac9340
	if (cr6.eq) goto loc_82AC9340;
	// lwz r11,208(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rldicl r4,r11,54,54
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 54) & 0x3FF;
	// bl 0x82d294d0
	ctx.lr = 0x82AC9340;
	sub_82D294D0(ctx, base);
loc_82AC9340:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC9348"))) PPC_WEAK_FUNC(sub_82AC9348);
PPC_FUNC_IMPL(__imp__sub_82AC9348) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82AC9350;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82ac9490
	if (cr6.eq) goto loc_82AC9490;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r29,48
	ctx.r29.s64 = 48;
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// divw. r10,r11,r29
	ctx.r10.s32 = PPCDivide(ctx.r11.s32, ctx.r29.s32);
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82ac93ac
	if (!cr0.eq) goto loc_82AC93AC;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x82ac9490
	if (cr6.eq) goto loc_82AC9490;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82ac8d68
	ctx.lr = 0x82AC9398;
	sub_82AC8D68(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82AC93AC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r9,r5,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r5.s64;
	// divw r11,r9,r29
	ctx.r11.s32 = PPCDivide(ctx.r9.s32, ctx.r29.s32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82ac93fc
	if (cr6.gt) goto loc_82AC93FC;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82ac8d68
	ctx.lr = 0x82AC93C8;
	sub_82AC8D68(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r11,r8,r29
	ctx.r11.s32 = PPCDivide(ctx.r8.s32, ctx.r29.s32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82AC93FC:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r8,r5,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r5.s64;
	// divw r7,r8,r29
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r29.s32);
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// bgt cr6,0x82ac9438
	if (cr6.gt) goto loc_82AC9438;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r11,r3
	ctx.r29.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82ac8d68
	ctx.lr = 0x82AC942C;
	sub_82AC8D68(ctx, base);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82ac9480
	goto loc_82AC9480;
loc_82AC9438:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82ac9454
	if (cr6.eq) goto loc_82AC9454;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x82AC9454;
	sub_825952B8(ctx, base);
loc_82AC9454:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r4,r9,r29
	ctx.r4.s32 = PPCDivide(ctx.r9.s32, ctx.r29.s32);
	// bl 0x82de5d88
	ctx.lr = 0x82AC946C;
	sub_82DE5D88(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82ac9490
	if (cr6.eq) goto loc_82AC9490;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82AC9480:
	// addi r6,r31,12
	ctx.r6.s64 = ctx.r31.s64 + 12;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82f57ce8
	ctx.lr = 0x82AC948C;
	sub_82F57CE8(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
loc_82AC9490:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC949C"))) PPC_WEAK_FUNC(sub_82AC949C);
PPC_FUNC_IMPL(__imp__sub_82AC949C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC94A0"))) PPC_WEAK_FUNC(sub_82AC94A0);
PPC_FUNC_IMPL(__imp__sub_82AC94A0) {
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
	// blt cr6,0x82ac94c8
	if (cr6.lt) goto loc_82AC94C8;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82ac94cc
	goto loc_82AC94CC;
loc_82AC94C8:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82AC94CC:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82AC94E8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ac9504
	if (cr6.eq) goto loc_82AC9504;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ac8f08
	ctx.lr = 0x82AC9500;
	sub_82AC8F08(ctx, base);
	// b 0x82ac9508
	goto loc_82AC9508;
loc_82AC9504:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82AC9508:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AC9520"))) PPC_WEAK_FUNC(sub_82AC9520);
PPC_FUNC_IMPL(__imp__sub_82AC9520) {
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
	// blt cr6,0x82ac9548
	if (cr6.lt) goto loc_82AC9548;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82ac954c
	goto loc_82AC954C;
loc_82AC9548:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82AC954C:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82AC9568;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ac9584
	if (cr6.eq) goto loc_82AC9584;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ac8f08
	ctx.lr = 0x82AC9580;
	sub_82AC8F08(ctx, base);
	// b 0x82ac9588
	goto loc_82AC9588;
loc_82AC9584:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82AC9588:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AC95A0"))) PPC_WEAK_FUNC(sub_82AC95A0);
PPC_FUNC_IMPL(__imp__sub_82AC95A0) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bl 0x82d19a78
	ctx.lr = 0x82AC95CC;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r31,r11,-31904
	ctx.r31.s64 = ctx.r11.s64 + -31904;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AC95EC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ac9604
	if (cr6.eq) goto loc_82AC9604;
	// lis r4,29
	ctx.r4.s64 = 1900544;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,560
	ctx.r4.u64 = ctx.r4.u64 | 560;
	// bl 0x82d30340
	ctx.lr = 0x82AC9604;
	sub_82D30340(ctx, base);
loc_82AC9604:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82AC960C;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82AC9614;
	sub_82D33DB0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82AC961C;
	sub_82D33DB0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AC9634;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x831156e8
	ctx.lr = 0x82AC9638;
	sub_831156E8(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// li r5,48
	ctx.r5.s64 = 48;
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// addis r11,r8,222
	ctx.r11.s64 = ctx.r8.s64 + 14548992;
	// addi r11,r11,26340
	ctx.r11.s64 = ctx.r11.s64 + 26340;
	// addi r4,r11,3716
	ctx.r4.s64 = ctx.r11.s64 + 3716;
	// bl 0x831ce980
	ctx.lr = 0x82AC9658;
	sub_831CE980(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c89040
	ctx.lr = 0x82AC9664;
	sub_82C89040(ctx, base);
	// lwz r4,100(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// lwz r5,96(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// addi r31,r30,96
	ctx.r31.s64 = ctx.r30.s64 + 96;
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x82ac9688
	if (cr6.eq) goto loc_82AC9688;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82ac8d68
	ctx.lr = 0x82AC9684;
	sub_82AC8D68(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
loc_82AC9688:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ac9348
	ctx.lr = 0x82AC9694;
	sub_82AC9348(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r31,96(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r10,48
	ctx.r10.s64 = 48;
	// li r7,0
	ctx.r7.s64 = 0;
	// subf r9,r31,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r31.s64;
	// li r6,0
	ctx.r6.s64 = 0;
	// divw r5,r9,r10
	ctx.r5.s32 = PPCDivide(ctx.r9.s32, ctx.r10.s32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d20f50
	ctx.lr = 0x82AC96BC;
	sub_82D20F50(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82ac96d8
	if (cr6.eq) goto loc_82AC96D8;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x82AC96D8;
	sub_825952B8(ctx, base);
loc_82AC96D8:
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

__attribute__((alias("__imp__sub_82AC96F0"))) PPC_WEAK_FUNC(sub_82AC96F0);
PPC_FUNC_IMPL(__imp__sub_82AC96F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82AC96F8;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// bl 0x82d19a78
	ctx.lr = 0x82AC9714;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r31,r11,-31936
	ctx.r31.s64 = ctx.r11.s64 + -31936;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AC9734;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ac974c
	if (cr6.eq) goto loc_82AC974C;
	// lis r4,29
	ctx.r4.s64 = 1900544;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,525
	ctx.r4.u64 = ctx.r4.u64 | 525;
	// bl 0x82d30340
	ctx.lr = 0x82AC974C;
	sub_82D30340(ctx, base);
loc_82AC974C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82AC9754;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82AC975C;
	sub_82D33DB0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82AC9764;
	sub_82D33DB0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AC977C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x831156e8
	ctx.lr = 0x82AC9780;
	sub_831156E8(ctx, base);
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// addis r11,r9,222
	ctx.r11.s64 = ctx.r9.s64 + 14548992;
	// lis r28,-31777
	ctx.r28.s64 = -2082537472;
	// addi r11,r11,26340
	ctx.r11.s64 = ctx.r11.s64 + 26340;
	// addi r29,r11,836
	ctx.r29.s64 = ctx.r11.s64 + 836;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_82AC979C:
	// cmplwi cr6,r31,60
	cr6.compare<uint32_t>(ctx.r31.u32, 60, xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bge cr6,0x82ac97ac
	if (!cr6.lt) goto loc_82AC97AC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82AC97AC:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,-10672(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + -10672);
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm r8,r9,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82ac97d8
	if (!cr6.eq) goto loc_82AC97D8;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ac97dc
	if (cr6.eq) goto loc_82AC97DC;
loc_82AC97D8:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82AC97DC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ac9800
	if (!cr6.eq) goto loc_82AC9800;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c89040
	ctx.lr = 0x82AC97F0;
	sub_82C89040(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,48
	ctx.r30.s64 = ctx.r30.s64 + 48;
	// cmplwi cr6,r31,60
	cr6.compare<uint32_t>(ctx.r31.u32, 60, xer);
	// blt cr6,0x82ac979c
	if (cr6.lt) goto loc_82AC979C;
loc_82AC9800:
	// lwz r5,96(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 96);
	// addi r31,r27,96
	ctx.r31.s64 = ctx.r27.s64 + 96;
	// lwz r4,100(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 100);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x82ac9824
	if (cr6.eq) goto loc_82AC9824;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82ac8d68
	ctx.lr = 0x82AC9820;
	sub_82AC8D68(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
loc_82AC9824:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ac9348
	ctx.lr = 0x82AC9830;
	sub_82AC9348(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r31,96(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r10,48
	ctx.r10.s64 = 48;
	// li r7,0
	ctx.r7.s64 = 0;
	// subf r9,r31,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r31.s64;
	// li r6,0
	ctx.r6.s64 = 0;
	// divw r5,r9,r10
	ctx.r5.s32 = PPCDivide(ctx.r9.s32, ctx.r10.s32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d20f50
	ctx.lr = 0x82AC9858;
	sub_82D20F50(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82ac9874
	if (cr6.eq) goto loc_82AC9874;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x82AC9874;
	sub_825952B8(ctx, base);
loc_82AC9874:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC987C"))) PPC_WEAK_FUNC(sub_82AC987C);
PPC_FUNC_IMPL(__imp__sub_82AC987C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC9880"))) PPC_WEAK_FUNC(sub_82AC9880);
PPC_FUNC_IMPL(__imp__sub_82AC9880) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82AC9888;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82AC9894;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r29,r11,-31984
	ctx.r29.s64 = ctx.r11.s64 + -31984;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r29,-12
	ctx.r4.s64 = ctx.r29.s64 + -12;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AC98B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ac98c8
	if (!cr6.eq) goto loc_82AC98C8;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82AC98C8:
	// bl 0x831156e8
	ctx.lr = 0x82AC98CC;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,48
	ctx.r5.s64 = 48;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// addis r11,r10,222
	ctx.r11.s64 = ctx.r10.s64 + 14548992;
	// addi r11,r11,26340
	ctx.r11.s64 = ctx.r11.s64 + 26340;
	// addi r4,r11,3716
	ctx.r4.s64 = ctx.r11.s64 + 3716;
	// bl 0x831ce980
	ctx.lr = 0x82AC98EC;
	sub_831CE980(ctx, base);
	// lis r9,-31777
	ctx.r9.s64 = -2082537472;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,-10672(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10672);
	// xor r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm r7,r8,0,0,13
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82ac991c
	if (!cr6.eq) goto loc_82AC991C;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ac9920
	if (cr6.eq) goto loc_82AC9920;
loc_82AC991C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AC9920:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ac994c
	if (cr6.eq) goto loc_82AC994C;
	// bl 0x82d2fe58
	ctx.lr = 0x82AC9934;
	sub_82D2FE58(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ac9984
	if (cr6.eq) goto loc_82AC9984;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82AC9948;
	sub_82D2AEC8(ctx, base);
	// b 0x82ac9984
	goto loc_82AC9984;
loc_82AC994C:
	// bl 0x82d2fe58
	ctx.lr = 0x82AC9950;
	sub_82D2FE58(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ac9984
	if (cr6.eq) goto loc_82AC9984;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d3d968
	ctx.lr = 0x82AC9964;
	sub_82D3D968(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82AC9974;
	sub_82D19788(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82AC9984;
	sub_82D19788(ctx, base);
loc_82AC9984:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82AC998C;
	sub_82D19A78(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AC99A4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ac96f0
	ctx.lr = 0x82AC99AC;
	sub_82AC96F0(ctx, base);
	// lbz r9,124(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 124);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// bne cr6,0x82ac99c4
	if (!cr6.eq) goto loc_82AC99C4;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82AC99C4:
	// bl 0x82d198e0
	ctx.lr = 0x82AC99C8;
	sub_82D198E0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83102db0
	ctx.lr = 0x82AC99D4;
	sub_83102DB0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC99E0"))) PPC_WEAK_FUNC(sub_82AC99E0);
PPC_FUNC_IMPL(__imp__sub_82AC99E0) {
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
	// lbz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 116);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// stb r10,116(r3)
	PPC_STORE_U8(ctx.r3.u32 + 116, ctx.r10.u8);
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// blt cr6,0x82ac9a18
	if (cr6.lt) goto loc_82AC9A18;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,116(r3)
	PPC_STORE_U8(ctx.r3.u32 + 116, ctx.r11.u8);
loc_82AC9A18:
	// lbz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 116);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x82ac9a30
	if (cr6.eq) goto loc_82AC9A30;
	// bl 0x82ac96f0
	ctx.lr = 0x82AC9A2C;
	sub_82AC96F0(ctx, base);
	// b 0x82ac9a34
	goto loc_82AC9A34;
loc_82AC9A30:
	// bl 0x82ac95a0
	ctx.lr = 0x82AC9A34;
	sub_82AC95A0(ctx, base);
loc_82AC9A34:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82AC9A3C;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r4,r11,-31960
	ctx.r4.s64 = ctx.r11.s64 + -31960;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AC9A58;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ac9a88
	if (cr6.eq) goto loc_82AC9A88;
	// bl 0x82d2fe58
	ctx.lr = 0x82AC9A68;
	sub_82D2FE58(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ac9a88
	if (cr6.eq) goto loc_82AC9A88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r31,116(r31)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r31.u32 + 116);
	// bl 0x82d2fe58
	ctx.lr = 0x82AC9A7C;
	sub_82D2FE58(ctx, base);
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d3d968
	ctx.lr = 0x82AC9A88;
	sub_82D3D968(ctx, base);
loc_82AC9A88:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AC9AA0"))) PPC_WEAK_FUNC(sub_82AC9AA0);
PPC_FUNC_IMPL(__imp__sub_82AC9AA0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82ac99e0
	sub_82AC99E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC9AA4"))) PPC_WEAK_FUNC(sub_82AC9AA4);
PPC_FUNC_IMPL(__imp__sub_82AC9AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC9AA8"))) PPC_WEAK_FUNC(sub_82AC9AA8);
PPC_FUNC_IMPL(__imp__sub_82AC9AA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82AC9AB0;
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
	// bl 0x8308e078
	ctx.lr = 0x82AC9AC4;
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
	ctx.lr = 0x82AC9ADC;
	sub_82D253F8(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-30632
	ctx.r9.s64 = ctx.r11.s64 + -30632;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// lis r6,-31777
	ctx.r6.s64 = -2082537472;
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r6,-10624
	ctx.r30.s64 = ctx.r6.s64 + -10624;
	// lwz r4,-10624(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + -10624);
	// bl 0x82d20ae0
	ctx.lr = 0x82AC9B10;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82d23390
	ctx.lr = 0x82AC9B20;
	sub_82D23390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC9B2C"))) PPC_WEAK_FUNC(sub_82AC9B2C);
PPC_FUNC_IMPL(__imp__sub_82AC9B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC9B30"))) PPC_WEAK_FUNC(sub_82AC9B30);
PPC_FUNC_IMPL(__imp__sub_82AC9B30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82AC9B38;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82AC9B44;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r28,48(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x82d20f50
	ctx.lr = 0x82AC9B64;
	sub_82D20F50(ctx, base);
	// lis r10,214
	ctx.r10.s64 = 14024704;
	// li r29,0
	ctx.r29.s64 = 0;
	// ori r9,r10,10888
	ctx.r9.u64 = ctx.r10.u64 | 10888;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwzx r28,r28,r9
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r9.u32);
loc_82AC9B78:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83123700
	ctx.lr = 0x82AC9B80;
	sub_83123700(ctx, base);
	// cmpw cr6,r28,r3
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r3.s32, xer);
	// beq cr6,0x82ac9b98
	if (cr6.eq) goto loc_82AC9B98;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,28
	cr6.compare<uint32_t>(ctx.r31.u32, 28, xer);
	// blt cr6,0x82ac9b78
	if (cr6.lt) goto loc_82AC9B78;
	// b 0x82ac9b9c
	goto loc_82AC9B9C;
loc_82AC9B98:
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_82AC9B9C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AC9BBC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC9BC8"))) PPC_WEAK_FUNC(sub_82AC9BC8);
PPC_FUNC_IMPL(__imp__sub_82AC9BC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82AC9BD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ac9c4c
	if (cr6.eq) goto loc_82AC9C4C;
	// bl 0x82d17d90
	ctx.lr = 0x82AC9BE8;
	sub_82D17D90(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ac9c44
	if (!cr6.eq) goto loc_82AC9C44;
	// bl 0x831156e8
	ctx.lr = 0x82AC9BF4;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r30,48(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x82d19cd0
	ctx.lr = 0x82AC9C08;
	sub_82D19CD0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// cmplwi cr6,r3,28
	cr6.compare<uint32_t>(ctx.r3.u32, 28, xer);
	// addi r31,r11,-30916
	ctx.r31.s64 = ctx.r11.s64 + -30916;
	// bge cr6,0x82ac9c34
	if (!cr6.lt) goto loc_82AC9C34;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r31,12
	ctx.r10.s64 = ctx.r31.s64 + 12;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x83123700
	ctx.lr = 0x82AC9C28;
	sub_83123700(ctx, base);
	// lis r9,214
	ctx.r9.s64 = 14024704;
	// ori r8,r9,10888
	ctx.r8.u64 = ctx.r9.u64 | 10888;
	// stwx r3,r30,r8
	PPC_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r3.u32);
loc_82AC9C34:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82AC9C44;
	sub_82D20DA8(ctx, base);
loc_82AC9C44:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r11.u32);
loc_82AC9C4C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC9C54"))) PPC_WEAK_FUNC(sub_82AC9C54);
PPC_FUNC_IMPL(__imp__sub_82AC9C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC9C58"))) PPC_WEAK_FUNC(sub_82AC9C58);
PPC_FUNC_IMPL(__imp__sub_82AC9C58) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-30632
	ctx.r9.s64 = ctx.r11.s64 + -30632;
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
	ctx.lr = 0x82AC9C90;
	sub_82D25548(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82ac9ca8
	if (cr6.eq) goto loc_82AC9CA8;
	// bl 0x82416268
	ctx.lr = 0x82AC9CA4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82AC9CA8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AC9CC0"))) PPC_WEAK_FUNC(sub_82AC9CC0);
PPC_FUNC_IMPL(__imp__sub_82AC9CC0) {
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
	// blt cr6,0x82ac9ce8
	if (cr6.lt) goto loc_82AC9CE8;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82ac9cec
	goto loc_82AC9CEC;
loc_82AC9CE8:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82AC9CEC:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,100
	ctx.r4.s64 = 100;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82AC9D08;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ac9d20
	if (cr6.eq) goto loc_82AC9D20;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ac9aa8
	ctx.lr = 0x82AC9D1C;
	sub_82AC9AA8(ctx, base);
	// b 0x82ac9d24
	goto loc_82AC9D24;
loc_82AC9D20:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82AC9D24:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AC9D3C"))) PPC_WEAK_FUNC(sub_82AC9D3C);
PPC_FUNC_IMPL(__imp__sub_82AC9D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC9D40"))) PPC_WEAK_FUNC(sub_82AC9D40);
PPC_FUNC_IMPL(__imp__sub_82AC9D40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82AC9D48;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x82ac9dfc
	if (!cr6.eq) goto loc_82AC9DFC;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82ac9dfc
	if (cr6.eq) goto loc_82AC9DFC;
	// cmplwi cr6,r5,28
	cr6.compare<uint32_t>(ctx.r5.u32, 28, xer);
	// bge cr6,0x82ac9dfc
	if (!cr6.lt) goto loc_82AC9DFC;
	// lwz r10,100(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r4,100
	ctx.r3.s64 = ctx.r4.s64 + 100;
	// addi r30,r11,-30904
	ctx.r30.s64 = ctx.r11.s64 + -30904;
	// addi r4,r30,112
	ctx.r4.s64 = ctx.r30.s64 + 112;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AC9D88;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ac9dc0
	if (cr6.eq) goto loc_82AC9DC0;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x83160838
	ctx.lr = 0x82AC9DA4;
	sub_83160838(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82d291e0
	ctx.lr = 0x82AC9DB8;
	sub_82D291E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82AC9DC0;
	sub_8387E8E0(ctx, base);
loc_82AC9DC0:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x83123700
	ctx.lr = 0x82AC9DCC;
	sub_83123700(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831a1b30
	ctx.lr = 0x82AC9DD8;
	sub_831A1B30(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82ac9dfc
	if (cr6.eq) goto loc_82AC9DFC;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,53
	ctx.r4.s64 = 53;
	// beq cr6,0x82ac9df8
	if (cr6.eq) goto loc_82AC9DF8;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82AC9DF8:
	// bl 0x82d28130
	ctx.lr = 0x82AC9DFC;
	sub_82D28130(ctx, base);
loc_82AC9DFC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AC9E04"))) PPC_WEAK_FUNC(sub_82AC9E04);
PPC_FUNC_IMPL(__imp__sub_82AC9E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AC9E08"))) PPC_WEAK_FUNC(sub_82AC9E08);
PPC_FUNC_IMPL(__imp__sub_82AC9E08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82AC9E10;
	__savegprlr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82aca050
	if (!cr6.eq) goto loc_82ACA050;
	// bl 0x82d19cd0
	ctx.lr = 0x82AC9E24;
	sub_82D19CD0(ctx, base);
	// cmplwi cr6,r3,28
	cr6.compare<uint32_t>(ctx.r3.u32, 28, xer);
	// bge cr6,0x82aca050
	if (!cr6.lt) goto loc_82ACA050;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r11,-30744
	ctx.r31.s64 = ctx.r11.s64 + -30744;
	// addi r11,r31,-160
	ctx.r11.s64 = ctx.r31.s64 + -160;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x83123700
	ctx.lr = 0x82AC9E48;
	sub_83123700(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82AC9E54;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AC9E6C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ac9e9c
	if (cr6.eq) goto loc_82AC9E9C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83160838
	ctx.lr = 0x82AC9E84;
	sub_83160838(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d2fde0
	ctx.lr = 0x82AC9E94;
	sub_82D2FDE0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82AC9E9C;
	sub_8387E8E0(ctx, base);
loc_82AC9E9C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82AC9EA4;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AC9EBC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ac9ef0
	if (cr6.eq) goto loc_82AC9EF0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83160a78
	ctx.lr = 0x82AC9ED4;
	sub_83160A78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82d291e0
	ctx.lr = 0x82AC9EE8;
	sub_82D291E0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82AC9EF0;
	sub_8387E8E0(ctx, base);
loc_82AC9EF0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831a1b30
	ctx.lr = 0x82AC9EF8;
	sub_831A1B30(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82AC9F04;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AC9F1C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ac9fb4
	if (cr6.eq) goto loc_82AC9FB4;
	// addi r4,r31,-470
	ctx.r4.s64 = ctx.r31.s64 + -470;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82AC9F34;
	sub_837B0C10(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bne cr6,0x82ac9f50
	if (!cr6.eq) goto loc_82AC9F50;
	// lis r4,269
	ctx.r4.s64 = 17629184;
	// ori r4,r4,162
	ctx.r4.u64 = ctx.r4.u64 | 162;
	// bl 0x82d04220
	ctx.lr = 0x82AC9F4C;
	sub_82D04220(ctx, base);
	// b 0x82ac9f74
	goto loc_82AC9F74;
loc_82AC9F50:
	// cmpwi cr6,r29,-1
	cr6.compare<int32_t>(ctx.r29.s32, -1, xer);
	// bne cr6,0x82ac9f64
	if (!cr6.eq) goto loc_82AC9F64;
	// addi r4,r31,-164
	ctx.r4.s64 = ctx.r31.s64 + -164;
	// bl 0x8259d6c0
	ctx.lr = 0x82AC9F60;
	sub_8259D6C0(ctx, base);
	// b 0x82ac9f74
	goto loc_82AC9F74;
loc_82AC9F64:
	// lis r4,26
	ctx.r4.s64 = 1703936;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// ori r4,r4,406
	ctx.r4.u64 = ctx.r4.u64 | 406;
	// bl 0x82d042a8
	ctx.lr = 0x82AC9F74;
	sub_82D042A8(ctx, base);
loc_82AC9F74:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82ac9f88
	if (!cr6.lt) goto loc_82AC9F88;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82AC9F88:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x82AC9F90;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82AC9FA4;
	sub_82D291E0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82AC9FAC;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82AC9FB4;
	sub_8387E8E0(ctx, base);
loc_82AC9FB4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82AC9FBC;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AC9FD4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aca034
	if (cr6.eq) goto loc_82ACA034;
	// bl 0x831156e8
	ctx.lr = 0x82AC9FE4;
	sub_831156E8(ctx, base);
	// lis r11,228
	ctx.r11.s64 = 14942208;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ori r9,r11,42280
	ctx.r9.u64 = ctx.r11.u64 | 42280;
	// addis r3,r10,209
	ctx.r3.s64 = ctx.r10.s64 + 13697024;
	// addi r3,r3,320
	ctx.r3.s64 = ctx.r3.s64 + 320;
	// ldx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x82a671c0
	ctx.lr = 0x82ACA000;
	sub_82A671C0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,98
	cr6.compare<int32_t>(ctx.r11.s32, 98, xer);
	// blt cr6,0x82aca014
	if (cr6.lt) goto loc_82ACA014;
	// lhz r11,22(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 22);
	// b 0x82aca020
	goto loc_82ACA020;
loc_82ACA014:
	// addi r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 + 11;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r3.u32);
loc_82ACA020:
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1000
	ctx.r4.s64 = 1000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d3d3b0
	ctx.lr = 0x82ACA034;
	sub_82D3D3B0(ctx, base);
loc_82ACA034:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// beq cr6,0x82aca04c
	if (cr6.eq) goto loc_82ACA04C;
	// li r5,2
	ctx.r5.s64 = 2;
loc_82ACA04C:
	// bl 0x82d19788
	ctx.lr = 0x82ACA050;
	sub_82D19788(ctx, base);
loc_82ACA050:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ACA058"))) PPC_WEAK_FUNC(sub_82ACA058);
PPC_FUNC_IMPL(__imp__sub_82ACA058) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82ACA060;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d19d40
	ctx.lr = 0x82ACA070;
	sub_82D19D40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1c1a8
	ctx.lr = 0x82ACA07C;
	sub_82D1C1A8(ctx, base);
	// subf r30,r30,r3
	ctx.r30.s64 = ctx.r3.s64 - ctx.r30.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82ACA088;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82ACA090;
	sub_82D33DB0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82ACA098;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aca0b0
	if (cr6.eq) goto loc_82ACA0B0;
	// bl 0x82d2b038
	ctx.lr = 0x82ACA0A4;
	sub_82D2B038(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82aca154
	if (cr6.eq) goto loc_82ACA154;
loc_82ACA0B0:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r29,r11,-31213
	ctx.r29.s64 = ctx.r11.s64 + -31213;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r3,r29,477
	ctx.r3.s64 = ctx.r29.s64 + 477;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2f6d8
	ctx.lr = 0x82ACA0D0;
	sub_82D2F6D8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// beq cr6,0x82aca154
	if (cr6.eq) goto loc_82ACA154;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x831a1cd0
	ctx.lr = 0x82ACA0E4;
	sub_831A1CD0(ctx, base);
	// cmplwi cr6,r3,10
	cr6.compare<uint32_t>(ctx.r3.u32, 10, xer);
	// bge cr6,0x82aca0f0
	if (!cr6.lt) goto loc_82ACA0F0;
	// subfic r30,r3,10
	xer.ca = ctx.r3.u32 <= 10;
	ctx.r30.s64 = 10 - ctx.r3.s64;
loc_82ACA0F0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82ACA0FC;
	sub_837B0C10(ctx, base);
	// lis r4,278
	ctx.r4.s64 = 18219008;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// ori r4,r4,651
	ctx.r4.u64 = ctx.r4.u64 | 651;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d042a8
	ctx.lr = 0x82ACA110;
	sub_82D042A8(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82aca124
	if (!cr6.lt) goto loc_82ACA124;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_82ACA124:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x837b0c10
	ctx.lr = 0x82ACA12C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82d2aab0
	ctx.lr = 0x82ACA138;
	sub_82D2AAB0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x82ACA140;
	sub_8387E8E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x83103100
	ctx.lr = 0x82ACA14C;
	sub_83103100(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82ACA154;
	sub_8387E8E0(ctx, base);
loc_82ACA154:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ACA15C"))) PPC_WEAK_FUNC(sub_82ACA15C);
PPC_FUNC_IMPL(__imp__sub_82ACA15C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ACA160"))) PPC_WEAK_FUNC(sub_82ACA160);
PPC_FUNC_IMPL(__imp__sub_82ACA160) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82ACA168;
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
	// bl 0x8308e078
	ctx.lr = 0x82ACA17C;
	sub_8308E078(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x82d253f8
	ctx.lr = 0x82ACA194;
	sub_82D253F8(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-29344
	ctx.r9.s64 = ctx.r11.s64 + -29344;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// addi r6,r6,-30294
	ctx.r6.s64 = ctx.r6.s64 + -30294;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r7,-10392(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + -10392);
	// bl 0x82beac68
	ctx.lr = 0x82ACA1D4;
	sub_82BEAC68(ctx, base);
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-10488(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + -10488);
	// addi r30,r5,-10488
	ctx.r30.s64 = ctx.r5.s64 + -10488;
	// bl 0x82d20ae0
	ctx.lr = 0x82ACA1E8;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82d23390
	ctx.lr = 0x82ACA1F8;
	sub_82D23390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82d20ae0
	ctx.lr = 0x82ACA204;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x82d20ae0
	ctx.lr = 0x82ACA210;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ACA21C"))) PPC_WEAK_FUNC(sub_82ACA21C);
PPC_FUNC_IMPL(__imp__sub_82ACA21C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ACA220"))) PPC_WEAK_FUNC(sub_82ACA220);
PPC_FUNC_IMPL(__imp__sub_82ACA220) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82ACA228;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d19bb0
	ctx.lr = 0x82ACA234;
	sub_82D19BB0(ctx, base);
	// cmplwi cr6,r3,13
	cr6.compare<uint32_t>(ctx.r3.u32, 13, xer);
	// bge cr6,0x82aca29c
	if (!cr6.lt) goto loc_82ACA29C;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82aca29c
	if (cr6.lt) goto loc_82ACA29C;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r31,r10,-29576
	ctx.r31.s64 = ctx.r10.s64 + -29576;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r10,r31,-336
	ctx.r10.s64 = ctx.r31.s64 + -336;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831a1b30
	ctx.lr = 0x82ACA26C;
	sub_831A1B30(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aca29c
	if (cr6.eq) goto loc_82ACA29C;
	// bl 0x831156e8
	ctx.lr = 0x82ACA278;
	sub_831156E8(ctx, base);
	// lis r11,214
	ctx.r11.s64 = 14024704;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// ori r8,r11,10892
	ctx.r8.u64 = ctx.r11.u64 | 10892;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stwx r9,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
	// bl 0x82d20da8
	ctx.lr = 0x82ACA29C;
	sub_82D20DA8(ctx, base);
loc_82ACA29C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ACA2A4"))) PPC_WEAK_FUNC(sub_82ACA2A4);
PPC_FUNC_IMPL(__imp__sub_82ACA2A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ACA2A8"))) PPC_WEAK_FUNC(sub_82ACA2A8);
PPC_FUNC_IMPL(__imp__sub_82ACA2A8) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-29344
	ctx.r9.s64 = ctx.r11.s64 + -29344;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,96
	ctx.r3.s64 = ctx.r3.s64 + 96;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82beac98
	ctx.lr = 0x82ACA2E4;
	sub_82BEAC98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d25548
	ctx.lr = 0x82ACA2EC;
	sub_82D25548(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82aca304
	if (cr6.eq) goto loc_82ACA304;
	// bl 0x82416268
	ctx.lr = 0x82ACA300;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82ACA304:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ACA31C"))) PPC_WEAK_FUNC(sub_82ACA31C);
PPC_FUNC_IMPL(__imp__sub_82ACA31C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ACA320"))) PPC_WEAK_FUNC(sub_82ACA320);
PPC_FUNC_IMPL(__imp__sub_82ACA320) {
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
	// blt cr6,0x82aca348
	if (cr6.lt) goto loc_82ACA348;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82aca34c
	goto loc_82ACA34C;
loc_82ACA348:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82ACA34C:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,120
	ctx.r4.s64 = 120;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82ACA368;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aca380
	if (cr6.eq) goto loc_82ACA380;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82aca160
	ctx.lr = 0x82ACA37C;
	sub_82ACA160(ctx, base);
	// b 0x82aca384
	goto loc_82ACA384;
loc_82ACA380:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82ACA384:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ACA39C"))) PPC_WEAK_FUNC(sub_82ACA39C);
PPC_FUNC_IMPL(__imp__sub_82ACA39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ACA3A0"))) PPC_WEAK_FUNC(sub_82ACA3A0);
PPC_FUNC_IMPL(__imp__sub_82ACA3A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82ACA3A8;
	__savegprlr_24(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// add r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 + ctx.r10.u64;
	// addi r30,r11,-29448
	ctx.r30.s64 = ctx.r11.s64 + -29448;
	// rlwinm r31,r10,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r30,-464
	ctx.r9.s64 = ctx.r30.s64 + -464;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r5,13
	ctx.r5.s64 = 13;
	// addi r3,r3,96
	ctx.r3.s64 = ctx.r3.s64 + 96;
	// lwzx r4,r31,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// bl 0x82beacc8
	ctx.lr = 0x82ACA3D8;
	sub_82BEACC8(ctx, base);
	// addi r11,r30,-464
	ctx.r11.s64 = ctx.r30.s64 + -464;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// add r26,r31,r11
	ctx.r26.u64 = ctx.r31.u64 + ctx.r11.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x831a1b30
	ctx.lr = 0x82ACA3EC;
	sub_831A1B30(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// stw r29,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r29.u32);
	// addi r4,r30,-845
	ctx.r4.s64 = ctx.r30.s64 + -845;
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// bl 0x8259cc28
	ctx.lr = 0x82ACA42C;
	sub_8259CC28(ctx, base);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r4,r30,-814
	ctx.r4.s64 = ctx.r30.s64 + -814;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259cc28
	ctx.lr = 0x82ACA448;
	sub_8259CC28(ctx, base);
	// lis r4,28
	ctx.r4.s64 = 1835008;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// ori r4,r4,107
	ctx.r4.u64 = ctx.r4.u64 | 107;
	// bl 0x82d04220
	ctx.lr = 0x82ACA458;
	sub_82D04220(ctx, base);
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x82aca46c
	if (!cr6.lt) goto loc_82ACA46C;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
loc_82ACA46C:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82ACA470:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82aca470
	if (!cr6.eq) goto loc_82ACA470;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82ACA494;
	sub_825A1EB8(ctx, base);
	// li r27,2
	ctx.r27.s64 = 2;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// bne cr6,0x82aca524
	if (!cr6.eq) goto loc_82ACA524;
	// stw r29,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r29.u32);
	// lis r4,269
	ctx.r4.s64 = 17629184;
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// ori r4,r4,162
	ctx.r4.u64 = ctx.r4.u64 | 162;
	// bl 0x82d04220
	ctx.lr = 0x82ACA4BC;
	sub_82D04220(ctx, base);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82aca4d0
	if (!cr6.lt) goto loc_82ACA4D0;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
loc_82ACA4D0:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82ACA4D4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82aca4d4
	if (!cr6.eq) goto loc_82ACA4D4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82ACA4F8;
	sub_825A1EB8(ctx, base);
	// lwz r10,244(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82aca514
	if (cr6.lt) goto loc_82ACA514;
	// stw r27,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r27.u32);
	// addi r3,r1,204
	ctx.r3.s64 = ctx.r1.s64 + 204;
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x825952b8
	ctx.lr = 0x82ACA514;
	sub_825952B8(ctx, base);
loc_82ACA514:
	// stw r29,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r29.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// b 0x82aca58c
	goto loc_82ACA58C;
loc_82ACA524:
	// cmpwi cr6,r24,-1
	cr6.compare<int32_t>(ctx.r24.s32, -1, xer);
	// bne cr6,0x82aca53c
	if (!cr6.eq) goto loc_82ACA53C;
	// addi r4,r30,-120
	ctx.r4.s64 = ctx.r30.s64 + -120;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8259d6c0
	ctx.lr = 0x82ACA538;
	sub_8259D6C0(ctx, base);
	// b 0x82aca58c
	goto loc_82ACA58C;
loc_82ACA53C:
	// lis r4,26
	ctx.r4.s64 = 1703936;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// ori r4,r4,406
	ctx.r4.u64 = ctx.r4.u64 | 406;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82d042a8
	ctx.lr = 0x82ACA550;
	sub_82D042A8(ctx, base);
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82aca564
	if (!cr6.lt) goto loc_82ACA564;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
loc_82ACA564:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82ACA568:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82aca568
	if (!cr6.eq) goto loc_82ACA568;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x825a1eb8
	ctx.lr = 0x82ACA58C;
	sub_825A1EB8(ctx, base);
loc_82ACA58C:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82ACA594;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r30,-116
	ctx.r4.s64 = ctx.r30.s64 + -116;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ACA5AC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82aca654
	if (!cr6.eq) goto loc_82ACA654;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82aca5d4
	if (cr6.lt) goto loc_82ACA5D4;
	// stw r27,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r27.u32);
	// addi r3,r1,220
	ctx.r3.s64 = ctx.r1.s64 + 220;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x825952b8
	ctx.lr = 0x82ACA5D4;
	sub_825952B8(ctx, base);
loc_82ACA5D4:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// blt cr6,0x82aca5fc
	if (cr6.lt) goto loc_82ACA5FC;
	// stw r27,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r27.u32);
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x82ACA5FC;
	sub_825952B8(ctx, base);
loc_82ACA5FC:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// blt cr6,0x82aca624
	if (cr6.lt) goto loc_82ACA624;
	// stw r27,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r27.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x82ACA624;
	sub_825952B8(ctx, base);
loc_82ACA624:
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// blt cr6,0x82aca81c
	if (cr6.lt) goto loc_82ACA81C;
	// stw r27,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r27.u32);
	// addi r3,r1,212
	ctx.r3.s64 = ctx.r1.s64 + 212;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x825952b8
	ctx.lr = 0x82ACA64C;
	sub_825952B8(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82ACA654:
	// addi r4,r30,-100
	ctx.r4.s64 = ctx.r30.s64 + -100;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d2f098
	ctx.lr = 0x82ACA660;
	sub_82D2F098(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aca7fc
	if (cr6.eq) goto loc_82ACA7FC;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// addi r4,r30,-80
	ctx.r4.s64 = ctx.r30.s64 + -80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ACA684;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aca7fc
	if (cr6.eq) goto loc_82ACA7FC;
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82aca6a4
	if (!cr6.lt) goto loc_82ACA6A4;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_82ACA6A4:
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x837b0c10
	ctx.lr = 0x82ACA6AC;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82ACA6C0;
	sub_82D291E0(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8387e8e0
	ctx.lr = 0x82ACA6C8;
	sub_8387E8E0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r30,-60
	ctx.r4.s64 = ctx.r30.s64 + -60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ACA6E0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aca7fc
	if (cr6.eq) goto loc_82ACA7FC;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82aca700
	if (!cr6.lt) goto loc_82ACA700;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_82ACA700:
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x837b0c10
	ctx.lr = 0x82ACA708;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82ACA71C;
	sub_82D291E0(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8387e8e0
	ctx.lr = 0x82ACA724;
	sub_8387E8E0(ctx, base);
	// addi r4,r30,-40
	ctx.r4.s64 = ctx.r30.s64 + -40;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d2f098
	ctx.lr = 0x82ACA730;
	sub_82D2F098(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aca7fc
	if (cr6.eq) goto loc_82ACA7FC;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// addi r4,r30,-20
	ctx.r4.s64 = ctx.r30.s64 + -20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ACA754;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aca7fc
	if (cr6.eq) goto loc_82ACA7FC;
	// bl 0x831156e8
	ctx.lr = 0x82ACA764;
	sub_831156E8(ctx, base);
	// lis r11,228
	ctx.r11.s64 = 14942208;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ori r9,r11,42280
	ctx.r9.u64 = ctx.r11.u64 | 42280;
	// lwz r29,0(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addis r3,r10,209
	ctx.r3.s64 = ctx.r10.s64 + 13697024;
	// addi r3,r3,320
	ctx.r3.s64 = ctx.r3.s64 + 320;
	// ldx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x82a671c0
	ctx.lr = 0x82ACA784;
	sub_82A671C0(ctx, base);
	// cmpwi cr6,r29,98
	cr6.compare<int32_t>(ctx.r29.s32, 98, xer);
	// blt cr6,0x82aca794
	if (cr6.lt) goto loc_82ACA794;
	// lhz r11,22(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 22);
	// b 0x82aca7a0
	goto loc_82ACA7A0;
loc_82ACA794:
	// addi r11,r29,11
	ctx.r11.s64 = ctx.r29.s64 + 11;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r3.u32);
loc_82ACA7A0:
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1000
	ctx.r4.s64 = 1000;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d3d3b0
	ctx.lr = 0x82ACA7B4;
	sub_82D3D3B0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ACA7CC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aca7fc
	if (cr6.eq) goto loc_82ACA7FC;
	// lis r4,26
	ctx.r4.s64 = 1703936;
	// ori r4,r4,117
	ctx.r4.u64 = ctx.r4.u64 | 117;
	// bl 0x82d29598
	ctx.lr = 0x82ACA7E0;
	sub_82D29598(ctx, base);
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// beq cr6,0x82aca7f8
	if (cr6.eq) goto loc_82ACA7F8;
	// li r5,2
	ctx.r5.s64 = 2;
loc_82ACA7F8:
	// bl 0x82d19788
	ctx.lr = 0x82ACA7FC;
	sub_82D19788(ctx, base);
loc_82ACA7FC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82ACA804;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x82ACA80C;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x82ACA814;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8387e8e0
	ctx.lr = 0x82ACA81C;
	sub_8387E8E0(ctx, base);
loc_82ACA81C:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ACA824"))) PPC_WEAK_FUNC(sub_82ACA824);
PPC_FUNC_IMPL(__imp__sub_82ACA824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ACA828"))) PPC_WEAK_FUNC(sub_82ACA828);
PPC_FUNC_IMPL(__imp__sub_82ACA828) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82ACA830;
	__savegprlr_22(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82ACA83C;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r22,48(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x82d19a68
	ctx.lr = 0x82ACA84C;
	sub_82D19A68(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r27,r11,-29912
	ctx.r27.s64 = ctx.r11.s64 + -29912;
	// addi r4,r27,156
	ctx.r4.s64 = ctx.r27.s64 + 156;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82ACA86C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82ACA874;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r27,172
	ctx.r4.s64 = ctx.r27.s64 + 172;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82ACA88C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aca8b4
	if (cr6.eq) goto loc_82ACA8B4;
	// addi r4,r27,188
	ctx.r4.s64 = ctx.r27.s64 + 188;
	// bl 0x82d2f098
	ctx.lr = 0x82ACA89C;
	sub_82D2F098(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aca8b4
	if (cr6.eq) goto loc_82ACA8B4;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2b608
	ctx.lr = 0x82ACA8B4;
	sub_82D2B608(ctx, base);
loc_82ACA8B4:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82ACA8BC;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r27,204
	ctx.r4.s64 = ctx.r27.s64 + 204;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ACA8D4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aca934
	if (cr6.eq) goto loc_82ACA934;
	// addi r4,r27,220
	ctx.r4.s64 = ctx.r27.s64 + 220;
	// bl 0x82d2f098
	ctx.lr = 0x82ACA8E8;
	sub_82D2F098(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r27,240
	ctx.r4.s64 = ctx.r27.s64 + 240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2f098
	ctx.lr = 0x82ACA8F8;
	sub_82D2F098(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82aca918
	if (cr6.eq) goto loc_82ACA918;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82ACA918;
	sub_82D2B608(ctx, base);
loc_82ACA918:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82aca934
	if (cr6.eq) goto loc_82ACA934;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82ACA934;
	sub_82D2B608(ctx, base);
loc_82ACA934:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82ACA93C;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r27,260
	ctx.r4.s64 = ctx.r27.s64 + 260;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ACA954;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82ACA960;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r27,272
	ctx.r4.s64 = ctx.r27.s64 + 272;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82ACA978;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82acabdc
	if (cr6.eq) goto loc_82ACABDC;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82acabdc
	if (cr6.eq) goto loc_82ACABDC;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r5,100(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82acabdc
	if (cr6.eq) goto loc_82ACABDC;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82acabdc
	if (cr6.eq) goto loc_82ACABDC;
	// addi r24,r23,96
	ctx.r24.s64 = ctx.r23.s64 + 96;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82beaca8
	ctx.lr = 0x82ACA9AC;
	sub_82BEACA8(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82beadd8
	ctx.lr = 0x82ACA9B4;
	sub_82BEADD8(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82ACA9BC;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r27,296
	ctx.r4.s64 = ctx.r27.s64 + 296;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ACA9D4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aca9ec
	if (cr6.eq) goto loc_82ACA9EC;
	// lis r4,33
	ctx.r4.s64 = 2162688;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,5
	ctx.r4.u64 = ctx.r4.u64 | 5;
	// bl 0x82d30340
	ctx.lr = 0x82ACA9EC;
	sub_82D30340(ctx, base);
loc_82ACA9EC:
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r5,r27,312
	ctx.r5.s64 = ctx.r27.s64 + 312;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d19b10
	ctx.lr = 0x82ACAA04;
	sub_82D19B10(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82ACAA0C;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r27,324
	ctx.r4.s64 = ctx.r27.s64 + 324;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ACAA24;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82acabdc
	if (cr6.eq) goto loc_82ACABDC;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// li r28,13
	ctx.r28.s64 = 13;
	// addi r30,r27,4
	ctx.r30.s64 = ctx.r27.s64 + 4;
loc_82ACAA3C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82ACAA48;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82acaacc
	if (cr6.eq) goto loc_82ACAACC;
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2d510
	ctx.lr = 0x82ACAA64;
	sub_82D2D510(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82acaacc
	if (cr6.eq) goto loc_82ACAACC;
	// lwz r4,-4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// bl 0x82d39310
	ctx.lr = 0x82ACAA74;
	sub_82D39310(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2d510
	ctx.lr = 0x82ACAA84;
	sub_82D2D510(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82acaacc
	if (cr6.eq) goto loc_82ACAACC;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82d29598
	ctx.lr = 0x82ACAA98;
	sub_82D29598(ctx, base);
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x831a1b30
	ctx.lr = 0x82ACAAA0;
	sub_831A1B30(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82acaab8
	if (!cr6.eq) goto loc_82ACAAB8;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,53
	ctx.r4.s64 = 53;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d28130
	ctx.lr = 0x82ACAAB8;
	sub_82D28130(ctx, base);
loc_82ACAAB8:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,255
	ctx.r4.s64 = 255;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d21408
	ctx.lr = 0x82ACAACC;
	sub_82D21408(ctx, base);
loc_82ACAACC:
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// bne 0x82acaa3c
	if (!cr0.eq) goto loc_82ACAA3C;
	// bl 0x831156e8
	ctx.lr = 0x82ACAAE0;
	sub_831156E8(ctx, base);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lis r11,6
	ctx.r11.s64 = 393216;
	// addis r10,r3,222
	ctx.r10.s64 = ctx.r3.s64 + 14548992;
	// ori r9,r11,50744
	ctx.r9.u64 = ctx.r11.u64 | 50744;
	// addi r10,r10,-8464
	ctx.r10.s64 = ctx.r10.s64 + -8464;
	// ldx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x8311bf98
	ctx.lr = 0x82ACAAFC;
	sub_8311BF98(ctx, base);
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// li r4,13
	ctx.r4.s64 = 13;
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a816e0
	ctx.lr = 0x82ACAB20;
	sub_82A816E0(ctx, base);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// li r31,13
	ctx.r31.s64 = 13;
	// addi r29,r27,-4
	ctx.r29.s64 = ctx.r27.s64 + -4;
loc_82ACAB2C:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwzu r4,12(r29)
	ea = 12 + ctx.r29.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83120738
	ctx.lr = 0x82ACAB3C;
	sub_83120738(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// stwx r10,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r10.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82acab2c
	if (!cr0.eq) goto loc_82ACAB2C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82beaed0
	ctx.lr = 0x82ACAB60;
	sub_82BEAED0(ctx, base);
	// lis r11,214
	ctx.r11.s64 = 14024704;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// ori r8,r11,10892
	ctx.r8.u64 = ctx.r11.u64 | 10892;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// addi r11,r27,8
	ctx.r11.s64 = ctx.r27.s64 + 8;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// lwzx r8,r22,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r8.u32);
loc_82ACAB7C:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r7
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, xer);
	// beq cr6,0x82acaba0
	if (cr6.eq) goto loc_82ACABA0;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplwi cr6,r10,156
	cr6.compare<uint32_t>(ctx.r10.u32, 156, xer);
	// blt cr6,0x82acab7c
	if (cr6.lt) goto loc_82ACAB7C;
	// b 0x82acaba4
	goto loc_82ACABA4;
loc_82ACABA0:
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
loc_82ACABA4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lfs f2,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x82d1ebf8
	ctx.lr = 0x82ACABC0;
	sub_82D1EBF8(ctx, base);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82acabdc
	if (cr6.eq) goto loc_82ACABDC;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82ACABDC;
	sub_825952B8(ctx, base);
loc_82ACABDC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ACABE8"))) PPC_WEAK_FUNC(sub_82ACABE8);
PPC_FUNC_IMPL(__imp__sub_82ACABE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r9,9
	cr6.compare<int32_t>(ctx.r9.s32, 9, xer);
	// blt cr6,0x82acac00
	if (cr6.lt) goto loc_82ACAC00;
loc_82ACABF8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82ACAC00:
	// lbz r8,9(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// subf r8,r10,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r10.s64;
	// cmpwi cr6,r8,21
	cr6.compare<int32_t>(ctx.r8.s32, 21, xer);
	// bgt cr6,0x82acabf8
	if (cr6.gt) goto loc_82ACABF8;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// blt cr6,0x82acabf8
	if (cr6.lt) goto loc_82ACABF8;
	// lbzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// add r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stbx r7,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r7.u8);
	// lwz r5,0(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lbz r10,9(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// subf r9,r5,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r5.s64;
	// stb r9,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ACAC44"))) PPC_WEAK_FUNC(sub_82ACAC44);
PPC_FUNC_IMPL(__imp__sub_82ACAC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ACAC48"))) PPC_WEAK_FUNC(sub_82ACAC48);
PPC_FUNC_IMPL(__imp__sub_82ACAC48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82ACAC50;
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
	// bl 0x8308e078
	ctx.lr = 0x82ACAC64;
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
	ctx.lr = 0x82ACAC7C;
	sub_82D253F8(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-28408
	ctx.r8.s64 = ctx.r10.s64 + -28408;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// lis r6,-31777
	ctx.r6.s64 = -2082537472;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// addi r30,r6,-10344
	ctx.r30.s64 = ctx.r6.s64 + -10344;
	// lwz r4,-10344(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + -10344);
	// bl 0x82d20ae0
	ctx.lr = 0x82ACACB4;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82d23390
	ctx.lr = 0x82ACACC4;
	sub_82D23390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82d19788
	ctx.lr = 0x82ACACD4;
	sub_82D19788(ctx, base);
	// lis r5,51
	ctx.r5.s64 = 3342336;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r5,r5,66
	ctx.r5.u64 = ctx.r5.u64 | 66;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82d20eb8
	ctx.lr = 0x82ACACE8;
	sub_82D20EB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ACACF4"))) PPC_WEAK_FUNC(sub_82ACACF4);
PPC_FUNC_IMPL(__imp__sub_82ACACF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ACACF8"))) PPC_WEAK_FUNC(sub_82ACACF8);
PPC_FUNC_IMPL(__imp__sub_82ACACF8) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-28408
	ctx.r9.s64 = ctx.r11.s64 + -28408;
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
	ctx.lr = 0x82ACAD30;
	sub_82D25548(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82acad48
	if (cr6.eq) goto loc_82ACAD48;
	// bl 0x82416268
	ctx.lr = 0x82ACAD44;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82ACAD48:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ACAD60"))) PPC_WEAK_FUNC(sub_82ACAD60);
PPC_FUNC_IMPL(__imp__sub_82ACAD60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82ACAD68;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82ACAD74;
	sub_831156E8(ctx, base);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lis r11,228
	ctx.r11.s64 = 14942208;
	// addis r10,r3,214
	ctx.r10.s64 = ctx.r3.s64 + 14024704;
	// ori r9,r11,42280
	ctx.r9.u64 = ctx.r11.u64 | 42280;
	// addi r10,r10,10876
	ctx.r10.s64 = ctx.r10.s64 + 10876;
	// stw r10,96(r27)
	PPC_STORE_U32(ctx.r27.u32 + 96, ctx.r10.u32);
	// ldx r4,r3,r9
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + ctx.r9.u32);
	// bl 0x8311bf98
	ctx.lr = 0x82ACAD94;
	sub_8311BF98(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82ACADA0;
	sub_82D19A78(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82acaf0c
	if (cr6.eq) goto loc_82ACAF0C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82ACADB4;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r29,r11,-28632
	ctx.r29.s64 = ctx.r11.s64 + -28632;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r29,-20
	ctx.r4.s64 = ctx.r29.s64 + -20;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ACADD4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82acade8
	if (cr6.eq) goto loc_82ACADE8;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,56
	ctx.r4.s64 = ctx.r30.s64 + 56;
	// bl 0x82d30138
	ctx.lr = 0x82ACADE8;
	sub_82D30138(ctx, base);
loc_82ACADE8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82ACADF4;
	sub_82D33DB0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82acaea8
	if (cr6.eq) goto loc_82ACAEA8;
	// addi r11,r29,-76
	ctx.r11.s64 = ctx.r29.s64 + -76;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r28,r11,4
	ctx.r28.s64 = ctx.r11.s64 + 4;
loc_82ACAE0C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82ACAE18;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82acae98
	if (cr6.eq) goto loc_82ACAE98;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// addi r4,r29,-8
	ctx.r4.s64 = ctx.r29.s64 + -8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ACAE3C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82acae4c
	if (cr6.eq) goto loc_82ACAE4C;
	// lwz r4,-4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4);
	// bl 0x82d29598
	ctx.lr = 0x82ACAE4C;
	sub_82D29598(ctx, base);
loc_82ACAE4C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ACAE64;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82acae98
	if (cr6.eq) goto loc_82ACAE98;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// blt cr6,0x82acae80
	if (cr6.lt) goto loc_82ACAE80;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82acae88
	goto loc_82ACAE88;
loc_82ACAE80:
	// lwz r10,96(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 96);
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
loc_82ACAE88:
	// extsb r6,r11
	ctx.r6.s64 = ctx.r11.s8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x82d3d3b0
	ctx.lr = 0x82ACAE98;
	sub_82D3D3B0(ctx, base);
loc_82ACAE98:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// cmplwi cr6,r30,7
	cr6.compare<uint32_t>(ctx.r30.u32, 7, xer);
	// blt cr6,0x82acae0c
	if (cr6.lt) goto loc_82ACAE0C;
loc_82ACAEA8:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ACAEC0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r8,288(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 288);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82ACAED8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x82d35198
	ctx.lr = 0x82ACAEDC;
	sub_82D35198(ctx, base);
	// lis r5,641
	ctx.r5.s64 = 42008576;
	// li r4,1
	ctx.r4.s64 = 1;
	// ori r5,r5,32
	ctx.r5.u64 = ctx.r5.u64 | 32;
	// bl 0x82d36ab8
	ctx.lr = 0x82ACAEEC;
	sub_82D36AB8(ctx, base);
	// lwz r7,96(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 96);
	// lbz r31,9(r7)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r7.u32 + 9);
	// bl 0x82d35198
	ctx.lr = 0x82ACAEF8;
	sub_82D35198(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// extsb r5,r31
	ctx.r5.s64 = ctx.r31.s8;
	// bl 0x82d37bb8
	ctx.lr = 0x82ACAF04;
	sub_82D37BB8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d1b870
	ctx.lr = 0x82ACAF0C;
	sub_82D1B870(ctx, base);
loc_82ACAF0C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ACAF18"))) PPC_WEAK_FUNC(sub_82ACAF18);
PPC_FUNC_IMPL(__imp__sub_82ACAF18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ACAF30"))) PPC_WEAK_FUNC(sub_82ACAF30);
PPC_FUNC_IMPL(__imp__sub_82ACAF30) {
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
	// bl 0x82d19ba0
	ctx.lr = 0x82ACAF4C;
	sub_82D19BA0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// addi r30,r11,-28552
	ctx.r30.s64 = ctx.r11.s64 + -28552;
	// bne cr6,0x82acafc0
	if (!cr6.eq) goto loc_82ACAFC0;
	// bl 0x831a1cd0
	ctx.lr = 0x82ACAF60;
	sub_831A1CD0(ctx, base);
	// cmplwi cr6,r3,10
	cr6.compare<uint32_t>(ctx.r3.u32, 10, xer);
	// blt cr6,0x82acafb0
	if (cr6.lt) goto loc_82ACAFB0;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82acafc0
	if (!cr6.eq) goto loc_82ACAFC0;
	// addi r3,r30,-24
	ctx.r3.s64 = ctx.r30.s64 + -24;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2ee48
	ctx.lr = 0x82ACAF88;
	sub_82D2EE48(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82acafc0
	if (cr6.eq) goto loc_82ACAFC0;
	// lis r4,278
	ctx.r4.s64 = 18219008;
	// ori r4,r4,652
	ctx.r4.u64 = ctx.r4.u64 | 652;
	// bl 0x82d2ada8
	ctx.lr = 0x82ACAFA0;
	sub_82D2ADA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x83103100
	ctx.lr = 0x82ACAFAC;
	sub_83103100(ctx, base);
	// b 0x82acafc0
	goto loc_82ACAFC0;
loc_82ACAFB0:
	// addi r5,r30,-8
	ctx.r5.s64 = ctx.r30.s64 + -8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82ACAFC0;
	sub_82D20DA8(ctx, base);
loc_82ACAFC0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19ba0
	ctx.lr = 0x82ACAFC8;
	sub_82D19BA0(ctx, base);
	// cmplwi cr6,r3,2
	cr6.compare<uint32_t>(ctx.r3.u32, 2, xer);
	// bne cr6,0x82acafe0
	if (!cr6.eq) goto loc_82ACAFE0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82ACAFE0;
	sub_82D20DA8(ctx, base);
loc_82ACAFE0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ACAFF8"))) PPC_WEAK_FUNC(sub_82ACAFF8);
PPC_FUNC_IMPL(__imp__sub_82ACAFF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82ACB000;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82ACB00C;
	sub_831156E8(ctx, base);
	// lwz r29,48(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r27,-31758
	ctx.r27.s64 = -2081292288;
	// addis r30,r29,214
	ctx.r30.s64 = ctx.r29.s64 + 14024704;
	// addi r30,r30,10876
	ctx.r30.s64 = ctx.r30.s64 + 10876;
loc_82ACB020:
	// cmpwi cr6,r31,9
	cr6.compare<int32_t>(ctx.r31.s32, 9, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bge cr6,0x82acb030
	if (!cr6.lt) goto loc_82ACB030;
	// lbzx r11,r31,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r30.u32);
loc_82ACB030:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x82acb050
	if (cr6.eq) goto loc_82ACB050;
	// lwz r11,24080(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24080);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82acb050
	if (cr6.eq) goto loc_82ACB050;
	// li r3,359
	ctx.r3.s64 = 359;
	// bl 0x82d84728
	ctx.lr = 0x82ACB050;
	sub_82D84728(ctx, base);
loc_82ACB050:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,7
	cr6.compare<uint32_t>(ctx.r31.u32, 7, xer);
	// blt cr6,0x82acb020
	if (cr6.lt) goto loc_82ACB020;
	// lis r11,221
	ctx.r11.s64 = 14483456;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r9,r11,53016
	ctx.r9.u64 = ctx.r11.u64 | 53016;
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r8,-28540
	ctx.r5.s64 = ctx.r8.s64 + -28540;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stbx r10,r29,r9
	PPC_STORE_U8(ctx.r29.u32 + ctx.r9.u32, ctx.r10.u8);
	// bl 0x82d20da8
	ctx.lr = 0x82ACB080;
	sub_82D20DA8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ACB088"))) PPC_WEAK_FUNC(sub_82ACB088);
PPC_FUNC_IMPL(__imp__sub_82ACB088) {
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
	// bl 0x82d35198
	ctx.lr = 0x82ACB098;
	sub_82D35198(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d36760
	ctx.lr = 0x82ACB0A4;
	sub_82D36760(ctx, base);
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

__attribute__((alias("__imp__sub_82ACB0B8"))) PPC_WEAK_FUNC(sub_82ACB0B8);
PPC_FUNC_IMPL(__imp__sub_82ACB0B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82ACB0C0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,9
	ctx.r10.s64 = 9;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// addi r27,r11,-28500
	ctx.r27.s64 = ctx.r11.s64 + -28500;
	// bne cr6,0x82acb114
	if (!cr6.eq) goto loc_82ACB114;
	// cmplwi cr6,r5,7
	cr6.compare<uint32_t>(ctx.r5.u32, 7, xer);
	// bge cr6,0x82acb10c
	if (!cr6.lt) goto loc_82ACB10C;
	// addi r11,r27,-208
	ctx.r11.s64 = ctx.r27.s64 + -208;
	// rlwinm r10,r5,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// blt cr6,0x82acb124
	if (cr6.lt) goto loc_82ACB124;
loc_82ACB10C:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82acb12c
	goto loc_82ACB12C;
loc_82ACB114:
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// bne cr6,0x82acb14c
	if (!cr6.eq) goto loc_82ACB14C;
	// li r11,7
	ctx.r11.s64 = 7;
loc_82ACB120:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82ACB124:
	// lwz r10,96(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// lbzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
loc_82ACB12C:
	// subf r10,r11,r26
	ctx.r10.s64 = ctx.r26.s64 - ctx.r11.s64;
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82acb1e8
	if (cr6.eq) goto loc_82ACB1E8;
	// lwz r3,96(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// bge cr6,0x82acb15c
	if (!cr6.lt) goto loc_82ACB15C;
loc_82ACB144:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// b 0x82acb1c4
	goto loc_82ACB1C4;
loc_82ACB14C:
	// cmplwi cr6,r4,2
	cr6.compare<uint32_t>(ctx.r4.u32, 2, xer);
	// bne cr6,0x82acb10c
	if (!cr6.eq) goto loc_82ACB10C;
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x82acb120
	goto loc_82ACB120;
loc_82ACB15C:
	// lbz r10,9(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// extsb r31,r10
	ctx.r31.s64 = ctx.r10.s8;
	// subf r9,r11,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r11.s64;
	// extsb r30,r9
	ctx.r30.s64 = ctx.r9.s8;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bge cr6,0x82acb144
	if (!cr6.lt) goto loc_82ACB144;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a88
	ctx.lr = 0x82ACB17C;
	sub_82D19A88(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82ACB184;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82acb1e8
	if (cr6.eq) goto loc_82ACB1E8;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ACB1A4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82acb1e8
	if (cr6.eq) goto loc_82ACB1E8;
	// add r11,r30,r26
	ctx.r11.u64 = ctx.r30.u64 + ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// bl 0x82d3d190
	ctx.lr = 0x82ACB1BC;
	sub_82D3D190(ctx, base);
	// lwz r3,96(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
loc_82ACB1C4:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82acabe8
	ctx.lr = 0x82ACB1D0;
	sub_82ACABE8(ctx, base);
	// lwz r11,96(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// lbz r31,9(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// bl 0x82d35198
	ctx.lr = 0x82ACB1DC;
	sub_82D35198(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// extsb r5,r31
	ctx.r5.s64 = ctx.r31.s8;
	// bl 0x82d37bb8
	ctx.lr = 0x82ACB1E8;
	sub_82D37BB8(ctx, base);
loc_82ACB1E8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ACB1F0"))) PPC_WEAK_FUNC(sub_82ACB1F0);
PPC_FUNC_IMPL(__imp__sub_82ACB1F0) {
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
	// blt cr6,0x82acb218
	if (cr6.lt) goto loc_82ACB218;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82acb21c
	goto loc_82ACB21C;
loc_82ACB218:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82ACB21C:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,104
	ctx.r4.s64 = 104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82ACB238;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82acb254
	if (cr6.eq) goto loc_82ACB254;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82acac48
	ctx.lr = 0x82ACB24C;
	sub_82ACAC48(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82acb258
	if (!cr6.eq) goto loc_82ACB258;
loc_82ACB254:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82ACB258:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ACB270"))) PPC_WEAK_FUNC(sub_82ACB270);
PPC_FUNC_IMPL(__imp__sub_82ACB270) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82ACB278;
	__savegprlr_23(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d19ba0
	ctx.lr = 0x82ACB284;
	sub_82D19BA0(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19bb0
	ctx.lr = 0x82ACB290;
	sub_82D19BB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19aa8
	ctx.lr = 0x82ACB2A4;
	sub_82D19AA8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82acb4f0
	if (cr6.eq) goto loc_82ACB4F0;
	// li r23,0
	ctx.r23.s64 = 0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// li r26,98
	ctx.r26.s64 = 98;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// li r30,9
	ctx.r30.s64 = 9;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// addi r27,r11,-28508
	ctx.r27.s64 = ctx.r11.s64 + -28508;
	// bne cr6,0x82acb2f0
	if (!cr6.eq) goto loc_82ACB2F0;
	// cmplwi cr6,r31,7
	cr6.compare<uint32_t>(ctx.r31.u32, 7, xer);
	// bge cr6,0x82acb340
	if (!cr6.lt) goto loc_82ACB340;
	// addi r11,r27,-200
	ctx.r11.s64 = ctx.r27.s64 + -200;
	// rlwinm r10,r31,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwzx r30,r10,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// b 0x82acb340
	goto loc_82ACB340;
loc_82ACB2F0:
	// cmplwi cr6,r24,1
	cr6.compare<uint32_t>(ctx.r24.u32, 1, xer);
	// bne cr6,0x82acb314
	if (!cr6.eq) goto loc_82ACB314;
	// li r30,7
	ctx.r30.s64 = 7;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x82acb338
	if (!cr6.eq) goto loc_82ACB338;
	// lwz r11,96(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r26,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r26.u32);
	// b 0x82acb344
	goto loc_82ACB344;
loc_82ACB314:
	// cmplwi cr6,r24,2
	cr6.compare<uint32_t>(ctx.r24.u32, 2, xer);
	// bne cr6,0x82acb344
	if (!cr6.eq) goto loc_82ACB344;
	// li r30,8
	ctx.r30.s64 = 8;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x82acb338
	if (!cr6.eq) goto loc_82ACB338;
	// lwz r11,96(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r26,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r26.u32);
	// b 0x82acb344
	goto loc_82ACB344;
loc_82ACB338:
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(ctx.r31.u32, 1, xer);
	// bne cr6,0x82acb344
	if (!cr6.eq) goto loc_82ACB344;
loc_82ACB340:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82ACB344:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82acb39c
	if (cr6.eq) goto loc_82ACB39C;
	// lwz r11,100(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 100);
	// addi r3,r25,100
	ctx.r3.s64 = ctx.r25.s64 + 100;
	// addi r4,r27,-24
	ctx.r4.s64 = ctx.r27.s64 + -24;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ACB368;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82acb4f0
	if (cr6.eq) goto loc_82ACB4F0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d3d190
	ctx.lr = 0x82ACB37C;
	sub_82D3D190(ctx, base);
	// lwz r11,96(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// cmpwi cr6,r30,9
	cr6.compare<int32_t>(ctx.r30.s32, 9, xer);
	// bge cr6,0x82acb39c
	if (!cr6.lt) goto loc_82ACB39C;
	// lbzx r9,r11,r30
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// stbx r23,r11,r30
	PPC_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r23.u8);
	// lbz r8,9(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// add r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stb r7,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r7.u8);
loc_82ACB39C:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82acb4cc
	if (cr6.eq) goto loc_82ACB4CC;
	// lwz r11,100(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 100);
	// addi r3,r25,100
	ctx.r3.s64 = ctx.r25.s64 + 100;
	// addi r4,r27,-16
	ctx.r4.s64 = ctx.r27.s64 + -16;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ACB3C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82acb4f0
	if (cr6.eq) goto loc_82ACB4F0;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831607b8
	ctx.lr = 0x82ACB3DC;
	sub_831607B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d3bcc0
	ctx.lr = 0x82ACB3E8;
	sub_82D3BCC0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82ACB3F0;
	sub_8387E8E0(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a88
	ctx.lr = 0x82ACB3FC;
	sub_82D19A88(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d33db0
	ctx.lr = 0x82ACB404;
	sub_82D33DB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82acb4f0
	if (cr6.eq) goto loc_82ACB4F0;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2b608
	ctx.lr = 0x82ACB420;
	sub_82D2B608(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// addi r4,r27,-8
	ctx.r4.s64 = ctx.r27.s64 + -8;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ACB438;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82acb4f0
	if (cr6.eq) goto loc_82ACB4F0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d3d190
	ctx.lr = 0x82ACB44C;
	sub_82D3D190(ctx, base);
	// lwz r11,96(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// cmpwi cr6,r30,9
	cr6.compare<int32_t>(ctx.r30.s32, 9, xer);
	// bge cr6,0x82acb46c
	if (!cr6.lt) goto loc_82ACB46C;
	// lbzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// stbx r23,r11,r30
	PPC_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r23.u8);
	// lbz r9,9(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stb r8,9(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9, ctx.r8.u8);
loc_82ACB46C:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a88
	ctx.lr = 0x82ACB478;
	sub_82D19A88(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82d33db0
	ctx.lr = 0x82ACB480;
	sub_82D33DB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82acb4f0
	if (cr6.eq) goto loc_82ACB4F0;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2b608
	ctx.lr = 0x82ACB49C;
	sub_82D2B608(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ACB4B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82acb4f0
	if (cr6.eq) goto loc_82ACB4F0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1000
	ctx.r4.s64 = 1000;
	// bl 0x82d3d3b0
	ctx.lr = 0x82ACB4CC;
	sub_82D3D3B0(ctx, base);
loc_82ACB4CC:
	// lwz r11,96(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// lbz r31,9(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// bl 0x82d35198
	ctx.lr = 0x82ACB4D8;
	sub_82D35198(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// extsb r5,r31
	ctx.r5.s64 = ctx.r31.s8;
	// bl 0x82d37bb8
	ctx.lr = 0x82ACB4E4;
	sub_82D37BB8(ctx, base);
	// bl 0x82d26ed8
	ctx.lr = 0x82ACB4E8;
	sub_82D26ED8(ctx, base);
	// li r4,29
	ctx.r4.s64 = 29;
	// bl 0x82d26b18
	ctx.lr = 0x82ACB4F0;
	sub_82D26B18(ctx, base);
loc_82ACB4F0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ACB4F8"))) PPC_WEAK_FUNC(sub_82ACB4F8);
PPC_FUNC_IMPL(__imp__sub_82ACB4F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x82ACB500;
	__savegprlr_21(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82ACB510;
	sub_82D19A78(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82ACB518;
	sub_82D33DB0(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82acb84c
	if (cr6.eq) goto loc_82ACB84C;
	// bl 0x831156e8
	ctx.lr = 0x82ACB528;
	sub_831156E8(ctx, base);
	// lis r10,228
	ctx.r10.s64 = 14942208;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ori r9,r10,42280
	ctx.r9.u64 = ctx.r10.u64 | 42280;
	// addi r26,r11,-28584
	ctx.r26.s64 = ctx.r11.s64 + -28584;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r26,-422
	ctx.r4.s64 = ctx.r26.s64 + -422;
	// li r27,0
	ctx.r27.s64 = 0;
	// ldx r28,r31,r9
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r31.u32 + ctx.r9.u32);
	// bl 0x837b0c10
	ctx.lr = 0x82ACB550;
	sub_837B0C10(ctx, base);
	// li r24,0
	ctx.r24.s64 = 0;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r22,0
	ctx.r22.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(ctx.r30.u32, 1, xer);
	// bne cr6,0x82acb5e4
	if (!cr6.eq) goto loc_82ACB5E4;
	// lwz r11,96(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// lis r27,26
	ctx.r27.s64 = 1703936;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// ori r27,r27,328
	ctx.r27.u64 = ctx.r27.u64 | 328;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x831607b8
	ctx.lr = 0x82ACB588;
	sub_831607B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82ACB59C;
	sub_8259CB28(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82ACB5A4;
	sub_8387E8E0(ctx, base);
	// lwz r9,96(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// lis r24,26
	ctx.r24.s64 = 1703936;
	// ori r24,r24,327
	ctx.r24.u64 = ctx.r24.u64 | 327;
	// lbz r8,7(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 7);
	// extsb r23,r8
	ctx.r23.s64 = ctx.r8.s8;
	// lwz r30,12(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmpwi cr6,r30,98
	cr6.compare<int32_t>(ctx.r30.s32, 98, xer);
	// beq cr6,0x82acb67c
	if (cr6.eq) goto loc_82ACB67C;
	// addis r3,r31,209
	ctx.r3.s64 = ctx.r31.s64 + 13697024;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r3,320
	ctx.r3.s64 = ctx.r3.s64 + 320;
	// bl 0x82a671c0
	ctx.lr = 0x82ACB5D4;
	sub_82A671C0(ctx, base);
	// cmpwi cr6,r30,98
	cr6.compare<int32_t>(ctx.r30.s32, 98, xer);
	// blt cr6,0x82acb668
	if (cr6.lt) goto loc_82ACB668;
	// lhz r11,22(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 22);
	// b 0x82acb674
	goto loc_82ACB674;
loc_82ACB5E4:
	// cmplwi cr6,r30,2
	cr6.compare<uint32_t>(ctx.r30.u32, 2, xer);
	// bne cr6,0x82acb67c
	if (!cr6.eq) goto loc_82ACB67C;
	// lwz r11,96(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// lis r27,29
	ctx.r27.s64 = 1900544;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// ori r27,r27,312
	ctx.r27.u64 = ctx.r27.u64 | 312;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x831607b8
	ctx.lr = 0x82ACB60C;
	sub_831607B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82ACB620;
	sub_8259CB28(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82ACB628;
	sub_8387E8E0(ctx, base);
	// lwz r9,96(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// lis r24,26
	ctx.r24.s64 = 1703936;
	// ori r24,r24,329
	ctx.r24.u64 = ctx.r24.u64 | 329;
	// lbz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 8);
	// extsb r23,r8
	ctx.r23.s64 = ctx.r8.s8;
	// lwz r30,16(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// cmpwi cr6,r30,98
	cr6.compare<int32_t>(ctx.r30.s32, 98, xer);
	// beq cr6,0x82acb67c
	if (cr6.eq) goto loc_82ACB67C;
	// addis r3,r31,209
	ctx.r3.s64 = ctx.r31.s64 + 13697024;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r3,320
	ctx.r3.s64 = ctx.r3.s64 + 320;
	// bl 0x82a671c0
	ctx.lr = 0x82ACB658;
	sub_82A671C0(ctx, base);
	// cmpwi cr6,r30,98
	cr6.compare<int32_t>(ctx.r30.s32, 98, xer);
	// blt cr6,0x82acb668
	if (cr6.lt) goto loc_82ACB668;
	// lhz r11,22(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 22);
	// b 0x82acb674
	goto loc_82ACB674;
loc_82ACB668:
	// addi r11,r30,11
	ctx.r11.s64 = ctx.r30.s64 + 11;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r3.u32);
loc_82ACB674:
	// li r25,1
	ctx.r25.s64 = 1;
	// extsh r22,r11
	ctx.r22.s64 = ctx.r11.s16;
loc_82ACB67C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82ACB688;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82acb6e4
	if (cr6.eq) goto loc_82ACB6E4;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// addi r4,r26,-40
	ctx.r4.s64 = ctx.r26.s64 + -40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ACB6AC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82acb6bc
	if (cr6.eq) goto loc_82ACB6BC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82d29598
	ctx.lr = 0x82ACB6BC;
	sub_82D29598(ctx, base);
loc_82ACB6BC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r26,-32
	ctx.r4.s64 = ctx.r26.s64 + -32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ACB6D4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82acb6e4
	if (cr6.eq) goto loc_82ACB6E4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82d3bcc0
	ctx.lr = 0x82ACB6E4;
	sub_82D3BCC0(ctx, base);
loc_82ACB6E4:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82ACB6F0;
	sub_82D33DB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82acb778
	if (cr6.eq) goto loc_82ACB778;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// addi r4,r26,-24
	ctx.r4.s64 = ctx.r26.s64 + -24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ACB718;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82acb728
	if (cr6.eq) goto loc_82ACB728;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x82d29598
	ctx.lr = 0x82ACB728;
	sub_82D29598(ctx, base);
loc_82ACB728:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r26,-16
	ctx.r4.s64 = ctx.r26.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ACB740;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82acb758
	if (cr6.eq) goto loc_82ACB758;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x82d3d3b0
	ctx.lr = 0x82ACB758;
	sub_82D3D3B0(ctx, base);
loc_82ACB758:
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82acb778
	if (!cr6.eq) goto loc_82ACB778;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82ACB778;
	sub_82D2B608(ctx, base);
loc_82ACB778:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82ACB784;
	sub_82D33DB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82acb82c
	if (cr6.eq) goto loc_82ACB82C;
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// li r6,2
	ctx.r6.s64 = 2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// beq cr6,0x82acb7ac
	if (cr6.eq) goto loc_82ACB7AC;
	// li r5,0
	ctx.r5.s64 = 0;
loc_82ACB7AC:
	// bl 0x82d2b608
	ctx.lr = 0x82ACB7B0;
	sub_82D2B608(ctx, base);
	// addi r31,r31,100
	ctx.r31.s64 = ctx.r31.s64 + 100;
	// addi r4,r26,-8
	ctx.r4.s64 = ctx.r26.s64 + -8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ACB7CC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82acb7e0
	if (cr6.eq) goto loc_82ACB7E0;
	// lis r4,26
	ctx.r4.s64 = 1703936;
	// ori r4,r4,117
	ctx.r4.u64 = ctx.r4.u64 | 117;
	// bl 0x82d29598
	ctx.lr = 0x82ACB7E0;
	sub_82D29598(ctx, base);
loc_82ACB7E0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ACB7F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82acb82c
	if (cr6.eq) goto loc_82ACB82C;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1000
	ctx.r4.s64 = 1000;
	// bl 0x82d3d3b0
	ctx.lr = 0x82ACB814;
	sub_82D3D3B0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d3d4b8
	ctx.lr = 0x82ACB820;
	sub_82D3D4B8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d3d548
	ctx.lr = 0x82ACB82C;
	sub_82D3D548(ctx, base);
loc_82ACB82C:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82acb84c
	if (cr6.lt) goto loc_82ACB84C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82ACB84C;
	sub_825952B8(ctx, base);
loc_82ACB84C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ACB854"))) PPC_WEAK_FUNC(sub_82ACB854);
PPC_FUNC_IMPL(__imp__sub_82ACB854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ACB858"))) PPC_WEAK_FUNC(sub_82ACB858);
PPC_FUNC_IMPL(__imp__sub_82ACB858) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r3,252
	ctx.r10.s64 = ctx.r3.s64 + 252;
loc_82ACB868:
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82acb880
	if (!cr6.eq) goto loc_82ACB880;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cntlzw r6,r11
	ctx.r6.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r6,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// b 0x82acb8a8
	goto loc_82ACB8A8;
loc_82ACB880:
	// lhz r5,-4(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + -4);
	// lhz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplw cr6,r5,r6
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, xer);
	// bne cr6,0x82acb8a0
	if (!cr6.eq) goto loc_82ACB8A0;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82acb8a4
	if (cr6.eq) goto loc_82ACB8A4;
loc_82ACB8A0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82ACB8A4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82ACB8A8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82acb8cc
	if (!cr6.eq) goto loc_82ACB8CC;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r9,32
	cr6.compare<uint32_t>(ctx.r9.u32, 32, xer);
	// blt cr6,0x82acb868
	if (cr6.lt) goto loc_82ACB868;
	// clrlwi r3,r7,24
	ctx.r3.u64 = ctx.r7.u32 & 0xFF;
	// blr 
	return;
loc_82ACB8CC:
	// add r11,r9,r3
	ctx.r11.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lbz r3,512(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 512);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ACB8D8"))) PPC_WEAK_FUNC(sub_82ACB8D8);
PPC_FUNC_IMPL(__imp__sub_82ACB8D8) {
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
	// bl 0x82d35198
	ctx.lr = 0x82ACB8F0;
	sub_82D35198(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d36760
	ctx.lr = 0x82ACB8FC;
	sub_82D36760(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82ACB900;
	sub_831156E8(ctx, base);
	// lis r10,221
	ctx.r10.s64 = 14483456;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r10,r10,53019
	ctx.r10.u64 = ctx.r10.u64 | 53019;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stbx r9,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u8);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r7,296(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 296);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82ACB928;
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

__attribute__((alias("__imp__sub_82ACB940"))) PPC_WEAK_FUNC(sub_82ACB940);
PPC_FUNC_IMPL(__imp__sub_82ACB940) {
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
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82acb9cc
	if (!cr6.eq) goto loc_82ACB9CC;
	// bl 0x831156e8
	ctx.lr = 0x82ACB964;
	sub_831156E8(ctx, base);
	// lwz r11,140(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x82acb988
	if (!cr6.lt) goto loc_82ACB988;
	// addis r11,r11,56
	ctx.r11.s64 = ctx.r11.s64 + 3670016;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-25183
	ctx.r11.s64 = ctx.r11.s64 + -25183;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r10.u32);
loc_82ACB988:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d1c1a8
	ctx.lr = 0x82ACB990;
	sub_82D1C1A8(ctx, base);
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// cmplwi cr6,r10,100
	cr6.compare<uint32_t>(ctx.r10.u32, 100, xer);
	// bge cr6,0x82acb9b8
	if (!cr6.lt) goto loc_82ACB9B8;
	// lwz r11,140(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bge cr6,0x82acb9b8
	if (!cr6.lt) goto loc_82ACB9B8;
	// addis r11,r11,56
	ctx.r11.s64 = ctx.r11.s64 + 3670016;
	// addi r11,r11,-25185
	ctx.r11.s64 = ctx.r11.s64 + -25185;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r10.u32);
loc_82ACB9B8:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-27668
	ctx.r5.s64 = ctx.r11.s64 + -27668;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82ACB9CC;
	sub_82D20DA8(ctx, base);
loc_82ACB9CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ACB9E4"))) PPC_WEAK_FUNC(sub_82ACB9E4);
PPC_FUNC_IMPL(__imp__sub_82ACB9E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ACB9E8"))) PPC_WEAK_FUNC(sub_82ACB9E8);
PPC_FUNC_IMPL(__imp__sub_82ACB9E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82ACB9F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x82ACBA00;
	sub_831156E8(ctx, base);
	// lwz r30,48(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x831156e8
	ctx.lr = 0x82ACBA08;
	sub_831156E8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r10,-28060
	ctx.r5.s64 = ctx.r10.s64 + -28060;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831178a0
	ctx.lr = 0x82ACBA28;
	sub_831178A0(ctx, base);
	// lwz r9,140(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 140);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// bne cr6,0x82acba48
	if (!cr6.eq) goto loc_82ACBA48;
	// lis r11,221
	ctx.r11.s64 = 14483456;
	// ori r10,r11,57076
	ctx.r10.u64 = ctx.r11.u64 | 57076;
	// lwzx r9,r30,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
loc_82ACBA48:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ACBA50"))) PPC_WEAK_FUNC(sub_82ACBA50);
PPC_FUNC_IMPL(__imp__sub_82ACBA50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82acba6c
	if (!cr6.eq) goto loc_82ACBA6C;
	// cmplwi cr6,r5,23
	cr6.compare<uint32_t>(ctx.r5.u32, 23, xer);
	// ble cr6,0x82acba6c
	if (!cr6.gt) goto loc_82ACBA6C;
	// li r9,1
	ctx.r9.s64 = 1;
loc_82ACBA6C:
	// lwz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// addi r10,r5,1
	ctx.r10.s64 = ctx.r5.s64 + 1;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x82acba90
	if (cr6.eq) goto loc_82ACBA90;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82acba94
	if (!cr6.eq) goto loc_82ACBA94;
	// lwz r11,148(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x82acba94
	if (!cr6.eq) goto loc_82ACBA94;
loc_82ACBA90:
	// li r9,1
	ctx.r9.s64 = 1;
loc_82ACBA94:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82acbaac
	if (!cr6.eq) goto loc_82ACBAAC;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82d19788
	sub_82D19788(ctx, base);
	return;
loc_82ACBAAC:
	// li r5,2
	ctx.r5.s64 = 2;
	// b 0x82d19788
	sub_82D19788(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ACBAB4"))) PPC_WEAK_FUNC(sub_82ACBAB4);
PPC_FUNC_IMPL(__imp__sub_82ACBAB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ACBAB8"))) PPC_WEAK_FUNC(sub_82ACBAB8);
PPC_FUNC_IMPL(__imp__sub_82ACBAB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lwz r9,124(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 124);
	// addi r8,r5,1
	ctx.r8.s64 = ctx.r5.s64 + 1;
	// lwz r10,128(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 128);
	// li r11,0
	ctx.r11.s64 = 0;
	// subf. r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82acbaf0
	if (cr0.eq) goto loc_82ACBAF0;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// ble cr6,0x82acbb00
	if (!cr6.gt) goto loc_82ACBB00;
loc_82ACBAD8:
	// lbzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// beq cr6,0x82acbb0c
	if (cr6.eq) goto loc_82ACBB0C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82acbad8
	if (cr6.gt) goto loc_82ACBAD8;
loc_82ACBAF0:
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// ld r11,-10148(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + -10148);
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// blr 
	return;
loc_82ACBB00:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// b 0x831cc188
	sub_831CC188(ctx, base);
	return;
loc_82ACBB0C:
	// lwz r10,108(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	// lwz r9,112(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 112);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// srawi r7,r8,3
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	// cmplw cr6,r7,r11
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82acbb30
	if (cr6.gt) goto loc_82ACBB30;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// b 0x831cc188
	sub_831CC188(ctx, base);
	return;
loc_82ACBB30:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ACBB4C"))) PPC_WEAK_FUNC(sub_82ACBB4C);
PPC_FUNC_IMPL(__imp__sub_82ACBB4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ACBB50"))) PPC_WEAK_FUNC(sub_82ACBB50);
PPC_FUNC_IMPL(__imp__sub_82ACBB50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82ACBB58;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-27536
	ctx.r9.s64 = ctx.r11.s64 + -27536;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// li r29,2
	ctx.r29.s64 = 2;
	// lwz r4,124(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82acbb94
	if (cr6.eq) goto loc_82ACBB94;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x82ACBB94;
	sub_825952B8(ctx, base);
loc_82ACBB94:
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// lwz r4,108(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82acbbbc
	if (cr6.eq) goto loc_82ACBBBC;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x82ACBBBC;
	sub_825952B8(ctx, base);
loc_82ACBBBC:
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// bl 0x82d25548
	ctx.lr = 0x82ACBBD0;
	sub_82D25548(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ACBBD8"))) PPC_WEAK_FUNC(sub_82ACBBD8);
PPC_FUNC_IMPL(__imp__sub_82ACBBD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82ACBBE0;
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
	// bl 0x8308e078
	ctx.lr = 0x82ACBBF4;
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
	ctx.lr = 0x82ACBC0C;
	sub_82D253F8(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// lis r9,-31777
	ctx.r9.s64 = -2082537472;
	// addi r7,r10,-17088
	ctx.r7.s64 = ctx.r10.s64 + -17088;
	// addi r8,r11,-27536
	ctx.r8.s64 = ctx.r11.s64 + -27536;
	// lis r6,-31777
	ctx.r6.s64 = -2082537472;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// lis r4,-31777
	ctx.r4.s64 = -2082537472;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,-10100(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -10100);
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// ld r10,-10148(r6)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r6.u32 + -10148);
	// std r10,100(r31)
	PPC_STORE_U64(ctx.r31.u32 + 100, ctx.r10.u64);
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
	// stw r5,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r5.u32);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// lwz r4,-10044(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + -10044);
	// bl 0x82d20ae0
	ctx.lr = 0x82ACBC78;
	sub_82D20AE0(ctx, base);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,-10208(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10208);
	// bl 0x82d23390
	ctx.lr = 0x82ACBC8C;
	sub_82D23390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ACBC98"))) PPC_WEAK_FUNC(sub_82ACBC98);
PPC_FUNC_IMPL(__imp__sub_82ACBC98) {
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
	// bl 0x82acbb50
	ctx.lr = 0x82ACBCB8;
	sub_82ACBB50(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82acbcd0
	if (cr6.eq) goto loc_82ACBCD0;
	// bl 0x82416268
	ctx.lr = 0x82ACBCCC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82ACBCD0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ACBCE8"))) PPC_WEAK_FUNC(sub_82ACBCE8);
PPC_FUNC_IMPL(__imp__sub_82ACBCE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82ACBCF0;
	__savegprlr_22(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82acbf70
	if (cr6.eq) goto loc_82ACBF70;
	// cmplwi cr6,r5,99
	cr6.compare<uint32_t>(ctx.r5.u32, 99, xer);
	// bgt cr6,0x82acbf70
	if (cr6.gt) goto loc_82ACBF70;
	// addi r25,r5,1
	ctx.r25.s64 = ctx.r5.s64 + 1;
	// bl 0x831156e8
	ctx.lr = 0x82ACBD18;
	sub_831156E8(ctx, base);
	// lwz r10,100(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r30,r11,-10184
	ctx.r30.s64 = ctx.r11.s64 + -10184;
	// addi r31,r29,100
	ctx.r31.s64 = ctx.r29.s64 + 100;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r27,48(r9)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r4,-20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -20);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82ACBD44;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82acbf70
	if (cr6.eq) goto loc_82ACBF70;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// clrldi r4,r25,32
	ctx.r4.u64 = ctx.r25.u64 & 0xFFFFFFFF;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83161f10
	ctx.lr = 0x82ACBD64;
	sub_83161F10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82d291e0
	ctx.lr = 0x82ACBD78;
	sub_82D291E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82ACBD80;
	sub_8387E8E0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ACBD98;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82acbf70
	if (cr6.eq) goto loc_82ACBF70;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2d510
	ctx.lr = 0x82ACBDB4;
	sub_82D2D510(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82acbf70
	if (cr6.eq) goto loc_82ACBF70;
	// lwz r11,128(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 128);
	// lwz r31,124(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 124);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x82acbe9c
	if (cr6.eq) goto loc_82ACBE9C;
loc_82ACBDD0:
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplw cr6,r10,r25
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r25.u32, xer);
	// beq cr6,0x82acbde8
	if (cr6.eq) goto loc_82ACBDE8;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x82acbdd0
	if (!cr6.eq) goto loc_82ACBDD0;
loc_82ACBDE8:
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x82acbe9c
	if (cr6.eq) goto loc_82ACBE9C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,-4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ACBE0C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,108(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 108);
	// lwz r9,112(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 112);
	// lwz r8,124(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 124);
	// subf r7,r11,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r11.s64;
	// subf r10,r8,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r8.s64;
	// srawi r6,r7,3
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 3;
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82acbe38
	if (cr6.gt) goto loc_82ACBE38;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82ACBE38;
	sub_831CC188(ctx, base);
loc_82ACBE38:
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ldx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x8311bf98
	ctx.lr = 0x82ACBE48;
	sub_8311BF98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r31,56
	ctx.r4.s64 = ctx.r31.s64 + 56;
	// bl 0x837b0c10
	ctx.lr = 0x82ACBE58;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82ACBE6C;
	sub_82D291E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82ACBE74;
	sub_8387E8E0(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83120738
	ctx.lr = 0x82ACBE8C;
	sub_83120738(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82d39310
	ctx.lr = 0x82ACBE98;
	sub_82D39310(ctx, base);
	// b 0x82acbeb8
	goto loc_82ACBEB8;
loc_82ACBE9C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ACBEB8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82ACBEB8:
	// lwz r11,140(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 140);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82acbed4
	if (!cr6.eq) goto loc_82ACBED4;
	// cmplwi cr6,r22,23
	cr6.compare<uint32_t>(ctx.r22.u32, 23, xer);
	// blt cr6,0x82acbed4
	if (cr6.lt) goto loc_82ACBED4;
	// li r10,1
	ctx.r10.s64 = 1;
loc_82ACBED4:
	// lwz r11,144(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 144);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82acbef4
	if (cr6.eq) goto loc_82ACBEF4;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r9,r22
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r22.u32, xer);
	// beq cr6,0x82acbf00
	if (cr6.eq) goto loc_82ACBF00;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82acbf04
	if (!cr6.eq) goto loc_82ACBF04;
loc_82ACBEF4:
	// lwz r11,148(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 148);
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, xer);
	// bne cr6,0x82acbf04
	if (!cr6.eq) goto loc_82ACBF04;
loc_82ACBF00:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82ACBF04:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// li r6,2
	ctx.r6.s64 = 2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// beq cr6,0x82acbf40
	if (cr6.eq) goto loc_82ACBF40;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2b608
	ctx.lr = 0x82ACBF24;
	sub_82D2B608(ctx, base);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82ACBF38;
	sub_82D2B608(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82acbf60
	goto loc_82ACBF60;
loc_82ACBF40:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2b608
	ctx.lr = 0x82ACBF48;
	sub_82D2B608(ctx, base);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82ACBF5C;
	sub_82D2B608(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
loc_82ACBF60:
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82ACBF70;
	sub_82D2B608(ctx, base);
loc_82ACBF70:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ACBF78"))) PPC_WEAK_FUNC(sub_82ACBF78);
PPC_FUNC_IMPL(__imp__sub_82ACBF78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82ACBF80;
	__savegprlr_25(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r30,r11,-27624
	ctx.r30.s64 = ctx.r11.s64 + -27624;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r3,r30,-20
	ctx.r3.s64 = ctx.r30.s64 + -20;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2f6d8
	ctx.lr = 0x82ACBFAC;
	sub_82D2F6D8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// li r28,-1
	ctx.r28.s64 = -1;
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cb28
	ctx.lr = 0x82ACBFDC;
	sub_8259CB28(ctx, base);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,26
	ctx.r4.u64 = ctx.r4.u64 | 26;
	// bl 0x82d042a8
	ctx.lr = 0x82ACBFF8;
	sub_82D042A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825a1eb8
	ctx.lr = 0x82ACC008;
	sub_825A1EB8(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825a1da8
	ctx.lr = 0x82ACC01C;
	sub_825A1DA8(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x82d2aab0
	ctx.lr = 0x82ACC028;
	sub_82D2AAB0(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83103100
	ctx.lr = 0x82ACC034;
	sub_83103100(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r30,2
	ctx.r30.s64 = 2;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82acc054
	if (cr6.lt) goto loc_82ACC054;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82ACC054;
	sub_825952B8(ctx, base);
loc_82ACC054:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// blt cr6,0x82acc07c
	if (cr6.lt) goto loc_82ACC07C;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82ACC07C;
	sub_825952B8(ctx, base);
loc_82ACC07C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ACC084"))) PPC_WEAK_FUNC(sub_82ACC084);
PPC_FUNC_IMPL(__imp__sub_82ACC084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ACC088"))) PPC_WEAK_FUNC(sub_82ACC088);
PPC_FUNC_IMPL(__imp__sub_82ACC088) {
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
	// li r11,27
	ctx.r11.s64 = 27;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,152
	ctx.r4.s64 = 152;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82ACC0BC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82acc0f0
	if (cr6.eq) goto loc_82ACC0F0;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82acc0e0
	if (cr6.lt) goto loc_82ACC0E0;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// bl 0x82acbbd8
	ctx.lr = 0x82ACC0DC;
	sub_82ACBBD8(ctx, base);
	// b 0x82acc0f4
	goto loc_82ACC0F4;
loc_82ACC0E0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lbz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// bl 0x82acbbd8
	ctx.lr = 0x82ACC0EC;
	sub_82ACBBD8(ctx, base);
	// b 0x82acc0f4
	goto loc_82ACC0F4;
loc_82ACC0F0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82ACC0F4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ACC10C"))) PPC_WEAK_FUNC(sub_82ACC10C);
PPC_FUNC_IMPL(__imp__sub_82ACC10C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ACC110"))) PPC_WEAK_FUNC(sub_82ACC110);
PPC_FUNC_IMPL(__imp__sub_82ACC110) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82ACC118;
	__savegprlr_25(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82ACC124;
	sub_831156E8(ctx, base);
	// lis r11,221
	ctx.r11.s64 = 14483456;
	// lwz r30,48(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r27,0
	ctx.r27.s64 = 0;
	// ori r10,r11,53018
	ctx.r10.u64 = ctx.r11.u64 | 53018;
	// stbx r27,r30,r10
	PPC_STORE_U8(ctx.r30.u32 + ctx.r10.u32, ctx.r27.u8);
	// stw r27,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r27.u32);
	// bl 0x831156e8
	ctx.lr = 0x82ACC140;
	sub_831156E8(ctx, base);
	// lwz r9,52(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addis r29,r9,5
	ctx.r29.s64 = ctx.r9.s64 + 327680;
	// addi r29,r29,14904
	ctx.r29.s64 = ctx.r29.s64 + 14904;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83123768
	ctx.lr = 0x82ACC154;
	sub_83123768(ctx, base);
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r8,65535
	cr6.compare<uint32_t>(ctx.r8.u32, 65535, xer);
	// beq cr6,0x82acc184
	if (cr6.eq) goto loc_82ACC184;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83123778
	ctx.lr = 0x82ACC168;
	sub_83123778(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8311c338
	ctx.lr = 0x82ACC174;
	sub_8311C338(ctx, base);
	// lwz r11,520(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 520);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82acc184
	if (!cr6.eq) goto loc_82ACC184;
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
loc_82ACC184:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ACC19C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r8,96(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r25,r31,124
	ctx.r25.s64 = ctx.r31.s64 + 124;
	// addi r28,r31,108
	ctx.r28.s64 = ctx.r31.s64 + 108;
	// rlwimi r7,r8,0,14,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3FFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFC0000);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r7.u32);
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// rlwimi r6,r11,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// stw r6,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r6.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,288(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 288);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82ACC1E4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x8311bdf0
	ctx.lr = 0x82ACC1F0;
	sub_8311BDF0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82acc204
	if (!cr6.eq) goto loc_82ACC204;
loc_82ACC1F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82ACC204:
	// addis r29,r30,229
	ctx.r29.s64 = ctx.r30.s64 + 15007744;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r29,r29,-23256
	ctx.r29.s64 = ctx.r29.s64 + -23256;
	// ld r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// bl 0x82acb858
	ctx.lr = 0x82ACC21C;
	sub_82ACB858(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
	// bl 0x82d19a68
	ctx.lr = 0x82ACC22C;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r4,r9,-27680
	ctx.r4.s64 = ctx.r9.s64 + -27680;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82ACC248;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82acc1f8
	if (cr6.eq) goto loc_82ACC1F8;
	// lis r4,33
	ctx.r4.s64 = 2162688;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,14
	ctx.r4.u64 = ctx.r4.u64 | 14;
	// bl 0x82d30340
	ctx.lr = 0x82ACC260;
	sub_82D30340(ctx, base);
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// addis r10,r30,222
	ctx.r10.s64 = ctx.r30.s64 + 14548992;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// addi r10,r10,26340
	ctx.r10.s64 = ctx.r10.s64 + 26340;
	// blt cr6,0x82acc27c
	if (cr6.lt) goto loc_82ACC27C;
	// lwz r11,3992(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3992);
	// b 0x82acc288
	goto loc_82ACC288;
loc_82ACC27C:
	// addi r11,r11,998
	ctx.r11.s64 = ctx.r11.s64 + 998;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
loc_82ACC288:
	// li r26,15
	ctx.r26.s64 = 15;
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// li r30,-1
	ctx.r30.s64 = -1;
	// stw r27,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r27.u32);
	// stw r26,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stb r27,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r27.u8);
	// bne cr6,0x82acc2bc
	if (!cr6.eq) goto loc_82ACC2BC;
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// ori r4,r4,11
	ctx.r4.u64 = ctx.r4.u64 | 11;
	// bl 0x82d042a8
	ctx.lr = 0x82ACC2B8;
	sub_82D042A8(ctx, base);
	// b 0x82acc2ec
	goto loc_82ACC2EC;
loc_82ACC2BC:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// clrldi r4,r11,32
	ctx.r4.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x83161f10
	ctx.lr = 0x82ACC2D0;
	sub_83161F10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cb28
	ctx.lr = 0x82ACC2E4;
	sub_8259CB28(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x82ACC2EC;
	sub_8387E8E0(ctx, base);
loc_82ACC2EC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r10,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r10.u32);
	// lwz r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r8,4(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// subf r6,r7,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r7.s64;
	// srawi. r6,r6,3
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 3;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq 0x82acc3b8
	if (cr0.eq) goto loc_82ACC3B8;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// cmplw cr6,r6,r27
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r27.u32, xer);
	// ble cr6,0x82acc388
	if (!cr6.gt) goto loc_82ACC388;
loc_82ACC320:
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// add r11,r8,r7
	ctx.r11.u64 = ctx.r8.u64 + ctx.r7.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82acc340
	if (!cr6.eq) goto loc_82ACC340;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x82acc368
	goto loc_82ACC368;
loc_82ACC340:
	// lhz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 100);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// bne cr6,0x82acc360
	if (!cr6.eq) goto loc_82ACC360;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82acc364
	if (cr6.eq) goto loc_82ACC364;
loc_82ACC360:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82ACC364:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82ACC368:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82acc394
	if (!cr6.eq) goto loc_82ACC394;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// cmplw cr6,r6,r9
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82acc320
	if (cr6.gt) goto loc_82ACC320;
	// b 0x82acc3b8
	goto loc_82ACC3B8;
loc_82ACC388:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82ACC394;
	sub_831CC188(ctx, base);
loc_82ACC394:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82acc3b4
	if (cr6.gt) goto loc_82ACC3B4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82ACC3B4;
	sub_831CC188(ctx, base);
loc_82ACC3B4:
	// lbzx r30,r11,r9
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
loc_82ACC3B8:
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// lis r4,641
	ctx.r4.s64 = 42008576;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r27,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r27.u8);
	// ori r4,r4,275
	ctx.r4.u64 = ctx.r4.u64 | 275;
	// bl 0x82d042a8
	ctx.lr = 0x82ACC3D4;
	sub_82D042A8(ctx, base);
	// bl 0x82d35198
	ctx.lr = 0x82ACC3D8;
	sub_82D35198(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82d36760
	ctx.lr = 0x82ACC3E4;
	sub_82D36760(ctx, base);
	// bl 0x82d35198
	ctx.lr = 0x82ACC3E8;
	sub_82D35198(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x82d367d0
	ctx.lr = 0x82ACC3F4;
	sub_82D367D0(ctx, base);
	// bl 0x82d35198
	ctx.lr = 0x82ACC3F8;
	sub_82D35198(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// bl 0x82d36d80
	ctx.lr = 0x82ACC404;
	sub_82D36D80(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,99
	ctx.r5.s64 = 99;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20f50
	ctx.lr = 0x82ACC41C;
	sub_82D20F50(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// addi r5,r30,-1
	ctx.r5.s64 = ctx.r30.s64 + -1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bne cr6,0x82acc444
	if (!cr6.eq) goto loc_82ACC444;
	// li r5,0
	ctx.r5.s64 = 0;
loc_82ACC444:
	// bctrl 
	ctx.lr = 0x82ACC448;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r31,2
	ctx.r31.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82acc468
	if (cr6.lt) goto loc_82ACC468;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82ACC468;
	sub_825952B8(ctx, base);
loc_82ACC468:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r27,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r27.u8);
	// blt cr6,0x82acc490
	if (cr6.lt) goto loc_82ACC490;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82ACC490;
	sub_825952B8(ctx, base);
loc_82ACC490:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ACC49C"))) PPC_WEAK_FUNC(sub_82ACC49C);
PPC_FUNC_IMPL(__imp__sub_82ACC49C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ACC4A0"))) PPC_WEAK_FUNC(sub_82ACC4A0);
PPC_FUNC_IMPL(__imp__sub_82ACC4A0) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// bl 0x82d1c1a8
	ctx.lr = 0x82ACC4D0;
	sub_82D1C1A8(ctx, base);
	// lwz r10,148(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// addi r9,r3,1
	ctx.r9.s64 = ctx.r3.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82acc4f4
	if (!cr6.eq) goto loc_82ACC4F4;
	// bl 0x82d1c1a8
	ctx.lr = 0x82ACC4E8;
	sub_82D1C1A8(ctx, base);
	// lis r4,631
	ctx.r4.s64 = 41353216;
	// ori r4,r4,639
	ctx.r4.u64 = ctx.r4.u64 | 639;
	// b 0x82acc570
	goto loc_82ACC570;
loc_82ACC4F4:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d19cd0
	ctx.lr = 0x82ACC4FC;
	sub_82D19CD0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82acbab8
	ctx.lr = 0x82ACC50C;
	sub_82ACBAB8(ctx, base);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r11,r11,-10148
	ctx.r11.s64 = ctx.r11.s64 + -10148;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82acc530
	if (!cr6.eq) goto loc_82ACC530;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x82acc558
	goto loc_82ACC558;
loc_82ACC530:
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x82acc550
	if (!cr6.eq) goto loc_82ACC550;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82acc554
	if (cr6.eq) goto loc_82ACC554;
loc_82ACC550:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82ACC554:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82ACC558:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bl 0x82d1c1a8
	ctx.lr = 0x82ACC568;
	sub_82D1C1A8(ctx, base);
	// lis r4,631
	ctx.r4.s64 = 41353216;
	// ori r4,r4,638
	ctx.r4.u64 = ctx.r4.u64 | 638;
loc_82ACC570:
	// addi r5,r3,1
	ctx.r5.s64 = ctx.r3.s64 + 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d042a8
	ctx.lr = 0x82ACC57C;
	sub_82D042A8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82acbf78
	ctx.lr = 0x82ACC588;
	sub_82ACBF78(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82acc5a8
	if (cr6.lt) goto loc_82ACC5A8;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82ACC5A8;
	sub_825952B8(ctx, base);
loc_82ACC5A8:
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

__attribute__((alias("__imp__sub_82ACC5C0"))) PPC_WEAK_FUNC(sub_82ACC5C0);
PPC_FUNC_IMPL(__imp__sub_82ACC5C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82acbce8
	sub_82ACBCE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ACC5C4"))) PPC_WEAK_FUNC(sub_82ACC5C4);
PPC_FUNC_IMPL(__imp__sub_82ACC5C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ACC5C8"))) PPC_WEAK_FUNC(sub_82ACC5C8);
PPC_FUNC_IMPL(__imp__sub_82ACC5C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82ACC5D0;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ACC5F4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x831156e8
	ctx.lr = 0x82ACC5F8;
	sub_831156E8(ctx, base);
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8311c148
	ctx.lr = 0x82ACC608;
	sub_8311C148(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r4,504(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 504);
	// bl 0x8311c260
	ctx.lr = 0x82ACC618;
	sub_8311C260(ctx, base);
	// lhz r9,808(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 808);
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// clrlwi r10,r9,25
	ctx.r10.u64 = ctx.r9.u32 & 0x7F;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82acc6b0
	if (cr6.eq) goto loc_82ACC6B0;
	// lis r27,-31777
	ctx.r27.s64 = -2082537472;
loc_82ACC638:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// stb r25,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r25.u8);
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bge cr6,0x82acc654
	if (!cr6.lt) goto loc_82ACC654;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lbz r11,584(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 584);
	// b 0x82acc658
	goto loc_82ACC658;
loc_82ACC654:
	// li r11,255
	ctx.r11.s64 = 255;
loc_82ACC658:
	// ld r9,-10148(r27)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r27.u32 + -10148);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// bge cr6,0x82acc684
	if (!cr6.lt) goto loc_82ACC684;
	// addi r10,r11,31
	ctx.r10.s64 = ctx.r11.s64 + 31;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r7,512(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 512);
	// ldx r6,r8,r30
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r8.u32 + ctx.r30.u32);
	// stb r7,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r7.u8);
	// std r6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
loc_82ACC684:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83546fd8
	ctx.lr = 0x82ACC690;
	sub_83546FD8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x833eab80
	ctx.lr = 0x82ACC69C;
	sub_833EAB80(ctx, base);
	// lhz r11,808(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 808);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// clrlwi r10,r11,25
	ctx.r10.u64 = ctx.r11.u32 & 0x7F;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// blt cr6,0x82acc638
	if (cr6.lt) goto loc_82ACC638;
loc_82ACC6B0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ACC6B8"))) PPC_WEAK_FUNC(sub_82ACC6B8);
PPC_FUNC_IMPL(__imp__sub_82ACC6B8) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x83123620
	ctx.lr = 0x82ACC6DC;
	sub_83123620(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x83120738
	ctx.lr = 0x82ACC6EC;
	sub_83120738(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
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

__attribute__((alias("__imp__sub_82ACC70C"))) PPC_WEAK_FUNC(sub_82ACC70C);
PPC_FUNC_IMPL(__imp__sub_82ACC70C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ACC710"))) PPC_WEAK_FUNC(sub_82ACC710);
PPC_FUNC_IMPL(__imp__sub_82ACC710) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// bge cr6,0x82acc730
	if (!cr6.lt) goto loc_82ACC730;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// blr 
	return;
loc_82ACC730:
	// addi r3,r3,104
	ctx.r3.s64 = ctx.r3.s64 + 104;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ACC738"))) PPC_WEAK_FUNC(sub_82ACC738);
PPC_FUNC_IMPL(__imp__sub_82ACC738) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82ACC740;
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
	// bl 0x8308e078
	ctx.lr = 0x82ACC754;
	sub_8308E078(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x82d253f8
	ctx.lr = 0x82ACC76C;
	sub_82D253F8(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-26440
	ctx.r9.s64 = ctx.r11.s64 + -26440;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// addi r6,r6,-27181
	ctx.r6.s64 = ctx.r6.s64 + -27181;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r7,-9944(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + -9944);
	// bl 0x82beac68
	ctx.lr = 0x82ACC7AC;
	sub_82BEAC68(ctx, base);
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-10040(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + -10040);
	// addi r30,r5,-10040
	ctx.r30.s64 = ctx.r5.s64 + -10040;
	// bl 0x82d20ae0
	ctx.lr = 0x82ACC7C0;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82d23390
	ctx.lr = 0x82ACC7D0;
	sub_82D23390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82d20ae0
	ctx.lr = 0x82ACC7DC;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x82d20ae0
	ctx.lr = 0x82ACC7E8;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ACC7F4"))) PPC_WEAK_FUNC(sub_82ACC7F4);
PPC_FUNC_IMPL(__imp__sub_82ACC7F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ACC7F8"))) PPC_WEAK_FUNC(sub_82ACC7F8);
PPC_FUNC_IMPL(__imp__sub_82ACC7F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82ACC800;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82ACC80C;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r25,48(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x82d19a78
	ctx.lr = 0x82ACC81C;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r27,r11,-26536
	ctx.r27.s64 = ctx.r11.s64 + -26536;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r27,-12
	ctx.r4.s64 = ctx.r27.s64 + -12;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82ACC83C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82acc8d4
	if (cr6.eq) goto loc_82ACC8D4;
	// lis r11,55
	ctx.r11.s64 = 3604480;
	// addi r30,r27,-248
	ctx.r30.s64 = ctx.r27.s64 + -248;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,13
	ctx.r29.s64 = 13;
	// ori r28,r11,40338
	ctx.r28.u64 = ctx.r11.u64 | 40338;
loc_82ACC85C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82ACC868;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82acc8b4
	if (cr6.eq) goto loc_82ACC8B4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82ACC880;
	sub_82D2D510(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82acc894
	if (cr6.eq) goto loc_82ACC894;
	// bl 0x83a970c8
	ctx.lr = 0x82ACC890;
	sub_83A970C8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82ACC894:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r10,13
	cr6.compare<int32_t>(ctx.r10.s32, 13, xer);
	// bge cr6,0x82acc8b4
	if (!cr6.lt) goto loc_82ACC8B4;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x82acc8b4
	if (!cr6.lt) goto loc_82ACC8B4;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r9,r25
	PPC_STORE_U32(ctx.r9.u32 + ctx.r25.u32, ctx.r11.u32);
loc_82ACC8B4:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// bne 0x82acc85c
	if (!cr0.eq) goto loc_82ACC85C;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82ACC8D4;
	sub_82D20DA8(ctx, base);
loc_82ACC8D4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ACC8DC"))) PPC_WEAK_FUNC(sub_82ACC8DC);
PPC_FUNC_IMPL(__imp__sub_82ACC8DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ACC8E0"))) PPC_WEAK_FUNC(sub_82ACC8E0);
PPC_FUNC_IMPL(__imp__sub_82ACC8E0) {
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
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// addi r8,r10,-26784
	ctx.r8.s64 = ctx.r10.s64 + -26784;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,96
	ctx.r3.s64 = ctx.r3.s64 + 96;
	// li r5,13
	ctx.r5.s64 = 13;
	// lwzx r4,r9,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// bl 0x82beacc8
	ctx.lr = 0x82ACC918;
	sub_82BEACC8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1a9c8
	ctx.lr = 0x82ACC924;
	sub_82D1A9C8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82acc938
	if (cr6.eq) goto loc_82ACC938;
	// lis r4,631
	ctx.r4.s64 = 41353216;
	// ori r4,r4,640
	ctx.r4.u64 = ctx.r4.u64 | 640;
	// bl 0x82d39ab8
	ctx.lr = 0x82ACC938;
	sub_82D39AB8(ctx, base);
loc_82ACC938:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82ACC948;
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
}

__attribute__((alias("__imp__sub_82ACC95C"))) PPC_WEAK_FUNC(sub_82ACC95C);
PPC_FUNC_IMPL(__imp__sub_82ACC95C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ACC960"))) PPC_WEAK_FUNC(sub_82ACC960);
PPC_FUNC_IMPL(__imp__sub_82ACC960) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82acc9a8
	if (cr6.lt) goto loc_82ACC9A8;
	// beq cr6,0x82acc990
	if (cr6.eq) goto loc_82ACC990;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x82acc9bc
	if (!cr6.lt) goto loc_82ACC9BC;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x82acc9bc
	if (!cr6.lt) goto loc_82ACC9BC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r3,66(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 66);
	// blr 
	return;
loc_82ACC990:
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x82acc9bc
	if (!cr6.lt) goto loc_82ACC9BC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r3,33(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// blr 
	return;
loc_82ACC9A8:
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x82acc9bc
	if (!cr6.lt) goto loc_82ACC9BC;
	// lbzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// blr 
	return;
loc_82ACC9BC:
	// li r3,13
	ctx.r3.s64 = 13;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ACC9C4"))) PPC_WEAK_FUNC(sub_82ACC9C4);
PPC_FUNC_IMPL(__imp__sub_82ACC9C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ACC9C8"))) PPC_WEAK_FUNC(sub_82ACC9C8);
PPC_FUNC_IMPL(__imp__sub_82ACC9C8) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-26440
	ctx.r9.s64 = ctx.r11.s64 + -26440;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,96
	ctx.r3.s64 = ctx.r3.s64 + 96;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82beac98
	ctx.lr = 0x82ACCA04;
	sub_82BEAC98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d25548
	ctx.lr = 0x82ACCA0C;
	sub_82D25548(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82acca24
	if (cr6.eq) goto loc_82ACCA24;
	// bl 0x82416268
	ctx.lr = 0x82ACCA20;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82ACCA24:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ACCA3C"))) PPC_WEAK_FUNC(sub_82ACCA3C);
PPC_FUNC_IMPL(__imp__sub_82ACCA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ACCA40"))) PPC_WEAK_FUNC(sub_82ACCA40);
PPC_FUNC_IMPL(__imp__sub_82ACCA40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82ACCA48;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(ctx.r11.s32, 13, xer);
	// blt cr6,0x82acca68
	if (cr6.lt) goto loc_82ACCA68;
loc_82ACCA5C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82ACCA68:
	// bl 0x831156e8
	ctx.lr = 0x82ACCA6C;
	sub_831156E8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r9,-27184
	ctx.r5.s64 = ctx.r9.s64 + -27184;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r26,48(r10)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x831178a0
	ctx.lr = 0x82ACCA94;
	sub_831178A0(ctx, base);
	// lis r8,-31777
	ctx.r8.s64 = -2082537472;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,-9944(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9944);
	// xor r7,r11,r4
	ctx.r7.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	// rlwinm r6,r7,0,0,13
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x82accac4
	if (!cr6.eq) goto loc_82ACCAC4;
	// xor r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82accac8
	if (cr6.eq) goto loc_82ACCAC8;
loc_82ACCAC4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82ACCAC8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82acca5c
	if (!cr6.eq) goto loc_82ACCA5C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8311bdf0
	ctx.lr = 0x82ACCADC;
	sub_8311BDF0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82acca5c
	if (cr6.eq) goto loc_82ACCA5C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// ld r4,504(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + 504);
	// bl 0x8311be78
	ctx.lr = 0x82ACCAF4;
	sub_8311BE78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82acca5c
	if (cr6.eq) goto loc_82ACCA5C;
	// lwz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r29,r3,104
	ctx.r29.s64 = ctx.r3.s64 + 104;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82ACCB0C:
	// li r5,0
	ctx.r5.s64 = 0;
	// clrlwi r4,r31,24
	ctx.r4.u64 = ctx.r31.u32 & 0xFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82acc960
	ctx.lr = 0x82ACCB1C;
	sub_82ACC960(ctx, base);
	// cmpw cr6,r3,r30
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r30.s32, xer);
	// beq cr6,0x82accb34
	if (cr6.eq) goto loc_82ACCB34;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,11
	cr6.compare<uint32_t>(ctx.r31.u32, 11, xer);
	// blt cr6,0x82accb0c
	if (cr6.lt) goto loc_82ACCB0C;
	// b 0x82accb38
	goto loc_82ACCB38;
loc_82ACCB34:
	// li r28,1
	ctx.r28.s64 = 1;
loc_82ACCB38:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82acca5c
	if (cr6.eq) goto loc_82ACCA5C;
	// li r11,100
	ctx.r11.s64 = 100;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addis r28,r26,229
	ctx.r28.s64 = ctx.r26.s64 + 15007744;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r28,r28,-23256
	ctx.r28.s64 = ctx.r28.s64 + -23256;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// ld r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// std r9,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// bl 0x8317ead0
	ctx.lr = 0x82ACCB7C;
	sub_8317EAD0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// ble cr6,0x82accce0
	if (!cr6.gt) goto loc_82ACCCE0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83185df8
	ctx.lr = 0x82ACCB98;
	sub_83185DF8(ctx, base);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r11,r11,-9992
	ctx.r11.s64 = ctx.r11.s64 + -9992;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82accbbc
	if (!cr6.eq) goto loc_82ACCBBC;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x82accbe4
	goto loc_82ACCBE4;
loc_82ACCBBC:
	// lhz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x82accbdc
	if (!cr6.eq) goto loc_82ACCBDC;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82accbe0
	if (cr6.eq) goto loc_82ACCBE0;
loc_82ACCBDC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82ACCBE0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82ACCBE4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82accce0
	if (!cr6.eq) goto loc_82ACCCE0;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8314b1d0
	ctx.lr = 0x82ACCC00;
	sub_8314B1D0(ctx, base);
	// ld r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// clrlwi r31,r3,24
	ctx.r31.u64 = ctx.r3.u32 & 0xFF;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// bl 0x8314b1d0
	ctx.lr = 0x82ACCC1C;
	sub_8314B1D0(ctx, base);
	// clrlwi r30,r3,24
	ctx.r30.u64 = ctx.r3.u32 & 0xFF;
	// li r10,4
	ctx.r10.s64 = 4;
	// ld r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// twllei r29,0
	// divwu r29,r10,r29
	ctx.r29.u32 = PPCDivide(ctx.r10.u32, ctx.r29.u32);
	// bl 0x8311bf98
	ctx.lr = 0x82ACCC38;
	sub_8311BF98(ctx, base);
	// li r9,12
	ctx.r9.s64 = 12;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83120738
	ctx.lr = 0x82ACCC4C;
	sub_83120738(ctx, base);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x82accc88
	if (cr6.eq) goto loc_82ACCC88;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// ld r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// bl 0x8311bf98
	ctx.lr = 0x82ACCC64;
	sub_8311BF98(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82acc6b8
	ctx.lr = 0x82ACCC6C;
	sub_82ACC6B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82accc88
	if (!cr6.eq) goto loc_82ACCC88;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82accc88
	if (!cr6.eq) goto loc_82ACCC88;
	// addi r29,r29,10
	ctx.r29.s64 = ctx.r29.s64 + 10;
loc_82ACCC88:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, xer);
	// blt cr6,0x82accca4
	if (cr6.lt) goto loc_82ACCCA4;
	// subf r11,r31,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r31.s64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,80
	ctx.r3.s64 = ctx.r11.s64 + 80;
	// b 0x82acccd8
	goto loc_82ACCCD8;
loc_82ACCCA4:
	// addi r11,r30,3
	ctx.r11.s64 = ctx.r30.s64 + 3;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82acccc0
	if (cr6.gt) goto loc_82ACCCC0;
	// subf r11,r31,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r31.s64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,70
	ctx.r3.s64 = ctx.r11.s64 + 70;
	// b 0x82acccd8
	goto loc_82ACCCD8;
loc_82ACCCC0:
	// addi r11,r31,6
	ctx.r11.s64 = ctx.r31.s64 + 6;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82acccd8
	if (cr6.gt) goto loc_82ACCCD8;
	// subf r11,r31,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r31.s64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,40
	ctx.r3.s64 = ctx.r11.s64 + 40;
loc_82ACCCD8:
	// cmplwi cr6,r3,100
	cr6.compare<uint32_t>(ctx.r3.u32, 100, xer);
	// blt cr6,0x82accce4
	if (cr6.lt) goto loc_82ACCCE4;
loc_82ACCCE0:
	// li r3,100
	ctx.r3.s64 = 100;
loc_82ACCCE4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ACCCEC"))) PPC_WEAK_FUNC(sub_82ACCCEC);
PPC_FUNC_IMPL(__imp__sub_82ACCCEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ACCCF0"))) PPC_WEAK_FUNC(sub_82ACCCF0);
PPC_FUNC_IMPL(__imp__sub_82ACCCF0) {
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
	// blt cr6,0x82accd18
	if (cr6.lt) goto loc_82ACCD18;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82accd1c
	goto loc_82ACCD1C;
loc_82ACCD18:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82ACCD1C:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,120
	ctx.r4.s64 = 120;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82ACCD38;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82accd50
	if (cr6.eq) goto loc_82ACCD50;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82acc738
	ctx.lr = 0x82ACCD4C;
	sub_82ACC738(ctx, base);
	// b 0x82accd54
	goto loc_82ACCD54;
loc_82ACCD50:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82ACCD54:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ACCD6C"))) PPC_WEAK_FUNC(sub_82ACCD6C);
PPC_FUNC_IMPL(__imp__sub_82ACCD6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ACCD70"))) PPC_WEAK_FUNC(sub_82ACCD70);
PPC_FUNC_IMPL(__imp__sub_82ACCD70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdabc
	ctx.lr = 0x82ACCD78;
	__savegprlr_17(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82ACCD84;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwz r17,48(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x82d19a78
	ctx.lr = 0x82ACCD94;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r25,r11,-26552
	ctx.r25.s64 = ctx.r11.s64 + -26552;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r25,-76
	ctx.r4.s64 = ctx.r25.s64 + -76;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82ACCDB4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82ACCDC0;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r25,-64
	ctx.r4.s64 = ctx.r25.s64 + -64;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82ACCDD8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82acd12c
	if (cr6.eq) goto loc_82ACD12C;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82acd12c
	if (cr6.eq) goto loc_82ACD12C;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r5,100(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82acd12c
	if (cr6.eq) goto loc_82ACD12C;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82acd12c
	if (cr6.eq) goto loc_82ACD12C;
	// addi r18,r20,96
	ctx.r18.s64 = ctx.r20.s64 + 96;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82beaca8
	ctx.lr = 0x82ACCE0C;
	sub_82BEACA8(ctx, base);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82beadd8
	ctx.lr = 0x82ACCE14;
	sub_82BEADD8(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82ACCE1C;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r25,-40
	ctx.r4.s64 = ctx.r25.s64 + -40;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ACCE34;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82acce4c
	if (cr6.eq) goto loc_82ACCE4C;
	// lis r4,641
	ctx.r4.s64 = 42008576;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,274
	ctx.r4.u64 = ctx.r4.u64 | 274;
	// bl 0x82d30340
	ctx.lr = 0x82ACCE4C;
	sub_82D30340(ctx, base);
loc_82ACCE4C:
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r5,r25,-24
	ctx.r5.s64 = ctx.r25.s64 + -24;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82d19b10
	ctx.lr = 0x82ACCE64;
	sub_82D19B10(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82ACCE6C;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r25,-12
	ctx.r4.s64 = ctx.r25.s64 + -12;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ACCE84;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82acd12c
	if (cr6.eq) goto loc_82ACD12C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,55
	ctx.r10.s64 = 3604480;
	// addi r28,r25,-232
	ctx.r28.s64 = ctx.r25.s64 + -232;
	// mr r24,r27
	ctx.r24.u64 = ctx.r27.u64;
	// li r23,13
	ctx.r23.s64 = 13;
	// li r26,15
	ctx.r26.s64 = 15;
	// ori r21,r10,40338
	ctx.r21.u64 = ctx.r10.u64 | 40338;
	// addi r22,r11,-26152
	ctx.r22.s64 = ctx.r11.s64 + -26152;
loc_82ACCEB0:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82ACCEBC;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82acd014
	if (cr6.eq) goto loc_82ACD014;
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2d510
	ctx.lr = 0x82ACCED8;
	sub_82D2D510(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82acd014
	if (cr6.eq) goto loc_82ACD014;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82d39310
	ctx.lr = 0x82ACCEE8;
	sub_82D39310(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2d510
	ctx.lr = 0x82ACCEF8;
	sub_82D2D510(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82acd014
	if (cr6.eq) goto loc_82ACD014;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82acca40
	ctx.lr = 0x82ACCF10;
	sub_82ACCA40(ctx, base);
	// stw r26,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r26.u32);
	// stw r27,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r27.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stb r27,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r27.u8);
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x82d042a8
	ctx.lr = 0x82ACCF28;
	sub_82D042A8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82ACCF3C;
	sub_82D291E0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2d510
	ctx.lr = 0x82ACCF4C;
	sub_82D2D510(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82accff8
	if (cr6.eq) goto loc_82ACCFF8;
	// bl 0x82d3b3f8
	ctx.lr = 0x82ACCF5C;
	sub_82D3B3F8(ctx, base);
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// li r30,3
	ctx.r30.s64 = 3;
loc_82ACCF64:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r26,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r26.u32);
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stb r27,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r27.u8);
	// bne cr6,0x82accf8c
	if (!cr6.eq) goto loc_82ACCF8C;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x8259d6c0
	ctx.lr = 0x82ACCF88;
	sub_8259D6C0(ctx, base);
	// b 0x82accf90
	goto loc_82ACCF90;
loc_82ACCF8C:
	// bl 0x82d042a8
	ctx.lr = 0x82ACCF90;
	sub_82D042A8(ctx, base);
loc_82ACCF90:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82accfa4
	if (!cr6.lt) goto loc_82ACCFA4;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_82ACCFA4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d3b548
	ctx.lr = 0x82ACCFAC;
	sub_82D3B548(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x82ACCFB4;
	sub_8387E8E0(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x82accf64
	if (!cr0.eq) goto loc_82ACCF64;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(ctx.r11.s32, 13, xer);
	// blt cr6,0x82accfd4
	if (cr6.lt) goto loc_82ACCFD4;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// b 0x82accfe0
	goto loc_82ACCFE0;
loc_82ACCFD4:
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + ctx.r21.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r17
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r17.u32);
loc_82ACCFE0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d3b298
	ctx.lr = 0x82ACCFE8;
	sub_82D3B298(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82ACCFF8;
	sub_82D2AEC8(ctx, base);
loc_82ACCFF8:
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82d21408
	ctx.lr = 0x82ACD00C;
	sub_82D21408(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x82ACD014;
	sub_8387E8E0(ctx, base);
loc_82ACD014:
	// addic. r23,r23,-1
	xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	cr0.compare<int32_t>(ctx.r23.s32, 0, xer);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r28,r28,12
	ctx.r28.s64 = ctx.r28.s64 + 12;
	// bne 0x82acceb0
	if (!cr0.eq) goto loc_82ACCEB0;
	// bl 0x831156e8
	ctx.lr = 0x82ACD028;
	sub_831156E8(ctx, base);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lis r11,6
	ctx.r11.s64 = 393216;
	// addis r10,r3,222
	ctx.r10.s64 = ctx.r3.s64 + 14548992;
	// ori r9,r11,50744
	ctx.r9.u64 = ctx.r11.u64 | 50744;
	// addi r10,r10,-8464
	ctx.r10.s64 = ctx.r10.s64 + -8464;
	// ldx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x8311bf98
	ctx.lr = 0x82ACD044;
	sub_8311BF98(ctx, base);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// li r4,13
	ctx.r4.s64 = 13;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a816e0
	ctx.lr = 0x82ACD068;
	sub_82A816E0(ctx, base);
	// addi r11,r25,-232
	ctx.r11.s64 = ctx.r25.s64 + -232;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// li r31,13
	ctx.r31.s64 = 13;
	// addi r29,r11,-4
	ctx.r29.s64 = ctx.r11.s64 + -4;
loc_82ACD078:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwzu r4,12(r29)
	ea = 12 + ctx.r29.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83120738
	ctx.lr = 0x82ACD088;
	sub_83120738(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// stwx r10,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82acd078
	if (!cr0.eq) goto loc_82ACD078;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82beaed0
	ctx.lr = 0x82ACD0AC;
	sub_82BEAED0(ctx, base);
	// lis r10,214
	ctx.r10.s64 = 14024704;
	// addi r11,r25,-232
	ctx.r11.s64 = ctx.r25.s64 + -232;
	// ori r8,r10,10892
	ctx.r8.u64 = ctx.r10.u64 | 10892;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// lwzx r8,r17,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r17.u32 + ctx.r8.u32);
loc_82ACD0CC:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r7
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, xer);
	// beq cr6,0x82acd0f0
	if (cr6.eq) goto loc_82ACD0F0;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplwi cr6,r10,156
	cr6.compare<uint32_t>(ctx.r10.u32, 156, xer);
	// blt cr6,0x82acd0cc
	if (cr6.lt) goto loc_82ACD0CC;
	// b 0x82acd0f4
	goto loc_82ACD0F4;
loc_82ACD0F0:
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
loc_82ACD0F4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lfs f2,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x82d1ebf8
	ctx.lr = 0x82ACD110;
	sub_82D1EBF8(ctx, base);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82acd12c
	if (cr6.eq) goto loc_82ACD12C;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82ACD12C;
	sub_825952B8(ctx, base);
loc_82ACD12C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ACD138"))) PPC_WEAK_FUNC(sub_82ACD138);
PPC_FUNC_IMPL(__imp__sub_82ACD138) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82ACD140;
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
	// bl 0x8308e078
	ctx.lr = 0x82ACD154;
	sub_8308E078(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x82d253f8
	ctx.lr = 0x82ACD16C;
	sub_82D253F8(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-24936
	ctx.r9.s64 = ctx.r11.s64 + -24936;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// addi r6,r6,-26086
	ctx.r6.s64 = ctx.r6.s64 + -26086;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r7,-9800(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + -9800);
	// bl 0x82beac68
	ctx.lr = 0x82ACD1AC;
	sub_82BEAC68(ctx, base);
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-9896(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + -9896);
	// addi r30,r5,-9896
	ctx.r30.s64 = ctx.r5.s64 + -9896;
	// bl 0x82d20ae0
	ctx.lr = 0x82ACD1C0;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82d23390
	ctx.lr = 0x82ACD1D0;
	sub_82D23390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82d20ae0
	ctx.lr = 0x82ACD1DC;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x82d20ae0
	ctx.lr = 0x82ACD1E8;
	sub_82D20AE0(ctx, base);
	// lis r4,631
	ctx.r4.s64 = 41353216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// ori r4,r4,350
	ctx.r4.u64 = ctx.r4.u64 | 350;
	// bl 0x82d21730
	ctx.lr = 0x82ACD1FC;
	sub_82D21730(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ACD208"))) PPC_WEAK_FUNC(sub_82ACD208);
PPC_FUNC_IMPL(__imp__sub_82ACD208) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82ACD210;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82ACD21C;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r27,r11,-25068
	ctx.r27.s64 = ctx.r11.s64 + -25068;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r27,-52
	ctx.r4.s64 = ctx.r27.s64 + -52;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ACD23C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82ACD248;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r27,-40
	ctx.r4.s64 = ctx.r27.s64 + -40;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82ACD260;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82acd3c4
	if (cr6.eq) goto loc_82ACD3C4;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82acd3c4
	if (cr6.eq) goto loc_82ACD3C4;
	// lwz r30,100(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r29,100(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82acd3c4
	if (cr6.eq) goto loc_82ACD3C4;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82acd3c4
	if (cr6.eq) goto loc_82ACD3C4;
	// addi r31,r28,96
	ctx.r31.s64 = ctx.r28.s64 + 96;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82beaca8
	ctx.lr = 0x82ACD29C;
	sub_82BEACA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82beadd8
	ctx.lr = 0x82ACD2A4;
	sub_82BEADD8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2b0f8
	ctx.lr = 0x82ACD2AC;
	sub_82D2B0F8(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x83545640
	ctx.lr = 0x82ACD2C0;
	sub_83545640(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82ACD2C4;
	sub_831156E8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addis r29,r9,222
	ctx.r29.s64 = ctx.r9.s64 + 14548992;
	// addi r29,r29,-8464
	ctx.r29.s64 = ctx.r29.s64 + -8464;
	// bl 0x82d19a88
	ctx.lr = 0x82ACD2E0;
	sub_82D19A88(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82acd3c4
	if (cr6.eq) goto loc_82ACD3C4;
	// addi r4,r27,-16
	ctx.r4.s64 = ctx.r27.s64 + -16;
	// bl 0x82d2f098
	ctx.lr = 0x82ACD2F4;
	sub_82D2F098(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82acd3c4
	if (cr6.eq) goto loc_82ACD3C4;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ACD314;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82acd3c4
	if (cr6.eq) goto loc_82ACD3C4;
	// li r11,0
	ctx.r11.s64 = 0;
	// addis r3,r29,1
	ctx.r3.s64 = ctx.r29.s64 + 65536;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,40
	ctx.r4.s64 = 40;
	// addi r3,r3,-30728
	ctx.r3.s64 = ctx.r3.s64 + -30728;
	// bl 0x83120738
	ctx.lr = 0x82ACD33C;
	sub_83120738(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r4,35
	ctx.r4.s64 = 2293760;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne cr6,0x82acd358
	if (!cr6.eq) goto loc_82ACD358;
	// ori r4,r4,33
	ctx.r4.u64 = ctx.r4.u64 | 33;
	// b 0x82acd35c
	goto loc_82ACD35C;
loc_82ACD358:
	// ori r4,r4,36
	ctx.r4.u64 = ctx.r4.u64 | 36;
loc_82ACD35C:
	// bl 0x82d29598
	ctx.lr = 0x82ACD360;
	sub_82D29598(ctx, base);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82ACD374;
	sub_82D2B608(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,36
	ctx.r5.s64 = 36;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d20f50
	ctx.lr = 0x82ACD38C;
	sub_82D20F50(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ACD3AC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x82d14ce8
	ctx.lr = 0x82ACD3B0;
	sub_82D14CE8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82acd3c4
	if (cr6.eq) goto loc_82ACD3C4;
	// bl 0x82d14ce8
	ctx.lr = 0x82ACD3BC;
	sub_82D14CE8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d12e58
	ctx.lr = 0x82ACD3C4;
	sub_82D12E58(ctx, base);
loc_82ACD3C4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ACD3D0"))) PPC_WEAK_FUNC(sub_82ACD3D0);
PPC_FUNC_IMPL(__imp__sub_82ACD3D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82ACD3D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x82acd458
	if (!cr6.eq) goto loc_82ACD458;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82acd458
	if (cr6.eq) goto loc_82ACD458;
	// cmplwi cr6,r5,36
	cr6.compare<uint32_t>(ctx.r5.u32, 36, xer);
	// bge cr6,0x82acd458
	if (!cr6.lt) goto loc_82ACD458;
	// lwz r10,100(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r31,r4,100
	ctx.r31.s64 = ctx.r4.s64 + 100;
	// addi r30,r11,-25696
	ctx.r30.s64 = ctx.r11.s64 + -25696;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r30,648
	ctx.r4.s64 = ctx.r30.s64 + 648;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82ACD41C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82acd434
	if (cr6.eq) goto loc_82ACD434;
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 4;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82d29598
	ctx.lr = 0x82ACD434;
	sub_82D29598(ctx, base);
loc_82ACD434:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2d510
	ctx.lr = 0x82ACD444;
	sub_82D2D510(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82acd458
	if (cr6.eq) goto loc_82ACD458;
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r4,r11,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x82d39310
	ctx.lr = 0x82ACD458;
	sub_82D39310(ctx, base);
loc_82ACD458:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ACD460"))) PPC_WEAK_FUNC(sub_82ACD460);
PPC_FUNC_IMPL(__imp__sub_82ACD460) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d19cd0
	ctx.lr = 0x82ACD480;
	sub_82D19CD0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,36
	cr6.compare<uint32_t>(ctx.r3.u32, 36, xer);
	// bge cr6,0x82acd4fc
	if (!cr6.lt) goto loc_82ACD4FC;
	// bl 0x831156e8
	ctx.lr = 0x82ACD490;
	sub_831156E8(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// rlwinm r10,r31,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r31,r11,-25032
	ctx.r31.s64 = ctx.r11.s64 + -25032;
	// addis r5,r9,222
	ctx.r5.s64 = ctx.r9.s64 + 14548992;
	// addi r7,r31,-664
	ctx.r7.s64 = ctx.r31.s64 + -664;
	// lis r8,0
	ctx.r8.s64 = 0;
	// addi r11,r31,-664
	ctx.r11.s64 = ctx.r31.s64 + -664;
	// lis r6,0
	ctx.r6.s64 = 0;
	// addi r5,r5,-8464
	ctx.r5.s64 = ctx.r5.s64 + -8464;
	// lwzx r3,r10,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// ori r4,r8,34804
	ctx.r4.u64 = ctx.r8.u64 | 34804;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// ori r9,r6,35032
	ctx.r9.u64 = ctx.r6.u64 | 35032;
	// stwx r3,r5,r4
	PPC_STORE_U32(ctx.r5.u32 + ctx.r4.u32, ctx.r3.u32);
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stwx r8,r5,r9
	PPC_STORE_U32(ctx.r5.u32 + ctx.r9.u32, ctx.r8.u32);
	// bl 0x82d14ce8
	ctx.lr = 0x82ACD4D8;
	sub_82D14CE8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82acd4ec
	if (cr6.eq) goto loc_82ACD4EC;
	// bl 0x82d14ce8
	ctx.lr = 0x82ACD4E4;
	sub_82D14CE8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d12e58
	ctx.lr = 0x82ACD4EC;
	sub_82D12E58(ctx, base);
loc_82ACD4EC:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82ACD4FC;
	sub_82D20DA8(ctx, base);
loc_82ACD4FC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ACD514"))) PPC_WEAK_FUNC(sub_82ACD514);
PPC_FUNC_IMPL(__imp__sub_82ACD514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ACD518"))) PPC_WEAK_FUNC(sub_82ACD518);
PPC_FUNC_IMPL(__imp__sub_82ACD518) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82ACD520;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82acd578
	if (!cr6.eq) goto loc_82ACD578;
	// bl 0x82d19cd0
	ctx.lr = 0x82ACD534;
	sub_82D19CD0(ctx, base);
	// cmplwi cr6,r3,36
	cr6.compare<uint32_t>(ctx.r3.u32, 36, xer);
	// bge cr6,0x82acd578
	if (!cr6.lt) goto loc_82ACD578;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// rlwinm r30,r3,4,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r31,r11,-25696
	ctx.r31.s64 = ctx.r11.s64 + -25696;
	// li r5,13
	ctx.r5.s64 = 13;
	// addi r3,r29,96
	ctx.r3.s64 = ctx.r29.s64 + 96;
	// lwzx r4,r30,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// bl 0x82beacc8
	ctx.lr = 0x82ACD558;
	sub_82BEACC8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d1a9c8
	ctx.lr = 0x82ACD564;
	sub_82D1A9C8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82acd578
	if (cr6.eq) goto loc_82ACD578;
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x82d39ab8
	ctx.lr = 0x82ACD578;
	sub_82D39AB8(ctx, base);
loc_82ACD578:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ACD580"))) PPC_WEAK_FUNC(sub_82ACD580);
PPC_FUNC_IMPL(__imp__sub_82ACD580) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-24936
	ctx.r9.s64 = ctx.r11.s64 + -24936;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,96
	ctx.r3.s64 = ctx.r3.s64 + 96;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82beac98
	ctx.lr = 0x82ACD5BC;
	sub_82BEAC98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d25548
	ctx.lr = 0x82ACD5C4;
	sub_82D25548(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82acd5dc
	if (cr6.eq) goto loc_82ACD5DC;
	// bl 0x82416268
	ctx.lr = 0x82ACD5D8;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82ACD5DC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ACD5F4"))) PPC_WEAK_FUNC(sub_82ACD5F4);
PPC_FUNC_IMPL(__imp__sub_82ACD5F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ACD5F8"))) PPC_WEAK_FUNC(sub_82ACD5F8);
PPC_FUNC_IMPL(__imp__sub_82ACD5F8) {
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
	// blt cr6,0x82acd620
	if (cr6.lt) goto loc_82ACD620;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82acd624
	goto loc_82ACD624;
loc_82ACD620:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82ACD624:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,120
	ctx.r4.s64 = 120;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82ACD640;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82acd658
	if (cr6.eq) goto loc_82ACD658;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82acd138
	ctx.lr = 0x82ACD654;
	sub_82ACD138(ctx, base);
	// b 0x82acd65c
	goto loc_82ACD65C;
loc_82ACD658:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82ACD65C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ACD674"))) PPC_WEAK_FUNC(sub_82ACD674);
PPC_FUNC_IMPL(__imp__sub_82ACD674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ACD678"))) PPC_WEAK_FUNC(sub_82ACD678);
PPC_FUNC_IMPL(__imp__sub_82ACD678) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r3,10
	ctx.r3.s64 = 10;
	// cmplwi cr6,r4,13
	cr6.compare<uint32_t>(ctx.r4.u32, 13, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// lis r12,-32083
	ctx.r12.s64 = -2102591488;
	// rlwinm r0,r4,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-10596
	ctx.r12.s64 = ctx.r12.s64 + -10596;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r4.u32) {
	case 0:
		goto loc_82ACD6D4;
	case 1:
		goto loc_82ACD6DC;
	case 2:
		goto loc_82ACD6E4;
	case 3:
		goto loc_82ACD6EC;
	case 4:
		goto loc_82ACD6F4;
	case 5:
		goto loc_82ACD6FC;
	case 6:
		goto loc_82ACD704;
	case 7:
		goto loc_82ACD70C;
	case 8:
		goto loc_82ACD714;
	case 9:
		goto loc_82ACD71C;
	case 10:
		goto loc_82ACD724;
	case 11:
		goto loc_82ACD72C;
	case 12:
		goto loc_82ACD734;
	case 13:
		goto loc_82ACD73C;
	default:
		return;
	}
	// lwz r21,-10540(r12)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r12.u32 + -10540);
	// lwz r21,-10532(r12)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r12.u32 + -10532);
	// lwz r21,-10524(r12)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r12.u32 + -10524);
	// lwz r21,-10516(r12)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r12.u32 + -10516);
	// lwz r21,-10508(r12)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r12.u32 + -10508);
	// lwz r21,-10500(r12)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r12.u32 + -10500);
	// lwz r21,-10492(r12)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r12.u32 + -10492);
	// lwz r21,-10484(r12)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r12.u32 + -10484);
	// lwz r21,-10476(r12)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r12.u32 + -10476);
	// lwz r21,-10468(r12)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r12.u32 + -10468);
	// lwz r21,-10460(r12)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r12.u32 + -10460);
	// lwz r21,-10452(r12)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r12.u32 + -10452);
	// lwz r21,-10444(r12)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r12.u32 + -10444);
	// lwz r21,-10436(r12)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r12.u32 + -10436);
loc_82ACD6D4:
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
loc_82ACD6DC:
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
loc_82ACD6E4:
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
loc_82ACD6EC:
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
loc_82ACD6F4:
	// li r3,9
	ctx.r3.s64 = 9;
	// blr 
	return;
loc_82ACD6FC:
	// li r3,10
	ctx.r3.s64 = 10;
	// blr 
	return;
loc_82ACD704:
	// li r3,11
	ctx.r3.s64 = 11;
	// blr 
	return;
loc_82ACD70C:
	// li r3,12
	ctx.r3.s64 = 12;
	// blr 
	return;
loc_82ACD714:
	// li r3,13
	ctx.r3.s64 = 13;
	// blr 
	return;
loc_82ACD71C:
	// li r3,14
	ctx.r3.s64 = 14;
	// blr 
	return;
loc_82ACD724:
	// li r3,15
	ctx.r3.s64 = 15;
	// blr 
	return;
loc_82ACD72C:
	// li r3,20
	ctx.r3.s64 = 20;
	// blr 
	return;
loc_82ACD734:
	// li r3,25
	ctx.r3.s64 = 25;
	// blr 
	return;
loc_82ACD73C:
	// li r3,30
	ctx.r3.s64 = 30;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ACD744"))) PPC_WEAK_FUNC(sub_82ACD744);
PPC_FUNC_IMPL(__imp__sub_82ACD744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ACD748"))) PPC_WEAK_FUNC(sub_82ACD748);
PPC_FUNC_IMPL(__imp__sub_82ACD748) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addi r11,r4,-5
	ctx.r11.s64 = ctx.r4.s64 + -5;
	// li r3,-1
	ctx.r3.s64 = -1;
	// cmplwi cr6,r11,25
	cr6.compare<uint32_t>(ctx.r11.u32, 25, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// lis r12,-32083
	ctx.r12.s64 = -2102591488;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-10384
	ctx.r12.s64 = ctx.r12.s64 + -10384;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82ACD7D8;
	case 1:
		goto loc_82ACD7E4;
	case 2:
		goto loc_82ACD7F0;
	case 3:
		goto loc_82ACD7FC;
	case 4:
		goto loc_82ACD808;
	case 5:
		goto loc_82ACD814;
	case 6:
		goto loc_82ACD820;
	case 7:
		goto loc_82ACD82C;
	case 8:
		goto loc_82ACD838;
	case 9:
		goto loc_82ACD844;
	case 10:
		goto loc_82ACD850;
	case 11:
		goto loc_82ACD87C;
	case 12:
		goto loc_82ACD87C;
	case 13:
		goto loc_82ACD87C;
	case 14:
		goto loc_82ACD87C;
	case 15:
		goto loc_82ACD85C;
	case 16:
		goto loc_82ACD87C;
	case 17:
		goto loc_82ACD87C;
	case 18:
		goto loc_82ACD87C;
	case 19:
		goto loc_82ACD87C;
	case 20:
		goto loc_82ACD868;
	case 21:
		goto loc_82ACD87C;
	case 22:
		goto loc_82ACD87C;
	case 23:
		goto loc_82ACD87C;
	case 24:
		goto loc_82ACD87C;
	case 25:
		goto loc_82ACD874;
	default:
		return;
	}
	// lwz r21,-10280(r12)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r12.u32 + -10280);
	// lwz r21,-10268(r12)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r12.u32 + -10268);
	// lwz r21,-10256(r12)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r12.u32 + -10256);
	// lwz r21,-10244(r12)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r12.u32 + -10244);
	// lwz r21,-10232(r12)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r12.u32 + -10232);
	// lwz r21,-10220(r12)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r12.u32 + -10220);
	// lwz r21,-10208(r12)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r12.u32 + -10208);
	// lwz r21,-10196(r12)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r12.u32 + -10196);
	// lwz r21,-10184(r12)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r12.u32 + -10184);
	// lwz r21,-10172(r12)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r12.u32 + -10172);
	// lwz r21,-10160(r12)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r12.u32 + -10160);
	// lwz r21,-10116(r12)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r12.u32 + -10116);
	// lwz r21,-10116(r12)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r12.u32 + -10116);
	// lwz r21,-10116(r12)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r12.u32 + -10116);
	// lwz r21,-10116(r12)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r12.u32 + -10116);
	// lwz r21,-10148(r12)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r12.u32 + -10148);
	// lwz r21,-10116(r12)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r12.u32 + -10116);
	// lwz r21,-10116(r12)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r12.u32 + -10116);
	// lwz r21,-10116(r12)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r12.u32 + -10116);
	// lwz r21,-10116(r12)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r12.u32 + -10116);
	// lwz r21,-10136(r12)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r12.u32 + -10136);
	// lwz r21,-10116(r12)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r12.u32 + -10116);
	// lwz r21,-10116(r12)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r12.u32 + -10116);
	// lwz r21,-10116(r12)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r12.u32 + -10116);
	// lwz r21,-10116(r12)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r12.u32 + -10116);
	// lwz r21,-10124(r12)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r12.u32 + -10124);
loc_82ACD7D8:
	// lis r3,2
	ctx.r3.s64 = 131072;
	// ori r3,r3,11
	ctx.r3.u64 = ctx.r3.u64 | 11;
	// blr 
	return;
loc_82ACD7E4:
	// lis r3,2
	ctx.r3.s64 = 131072;
	// ori r3,r3,366
	ctx.r3.u64 = ctx.r3.u64 | 366;
	// blr 
	return;
loc_82ACD7F0:
	// lis r3,2
	ctx.r3.s64 = 131072;
	// ori r3,r3,367
	ctx.r3.u64 = ctx.r3.u64 | 367;
	// blr 
	return;
loc_82ACD7FC:
	// lis r3,2
	ctx.r3.s64 = 131072;
	// ori r3,r3,368
	ctx.r3.u64 = ctx.r3.u64 | 368;
	// blr 
	return;
loc_82ACD808:
	// lis r3,2
	ctx.r3.s64 = 131072;
	// ori r3,r3,369
	ctx.r3.u64 = ctx.r3.u64 | 369;
	// blr 
	return;
loc_82ACD814:
	// lis r3,2
	ctx.r3.s64 = 131072;
	// ori r3,r3,12
	ctx.r3.u64 = ctx.r3.u64 | 12;
	// blr 
	return;
loc_82ACD820:
	// lis r3,2
	ctx.r3.s64 = 131072;
	// ori r3,r3,370
	ctx.r3.u64 = ctx.r3.u64 | 370;
	// blr 
	return;
loc_82ACD82C:
	// lis r3,2
	ctx.r3.s64 = 131072;
	// ori r3,r3,371
	ctx.r3.u64 = ctx.r3.u64 | 371;
	// blr 
	return;
loc_82ACD838:
	// lis r3,2
	ctx.r3.s64 = 131072;
	// ori r3,r3,372
	ctx.r3.u64 = ctx.r3.u64 | 372;
	// blr 
	return;
loc_82ACD844:
	// lis r3,2
	ctx.r3.s64 = 131072;
	// ori r3,r3,373
	ctx.r3.u64 = ctx.r3.u64 | 373;
	// blr 
	return;
loc_82ACD850:
	// lis r3,2
	ctx.r3.s64 = 131072;
	// ori r3,r3,13
	ctx.r3.u64 = ctx.r3.u64 | 13;
	// blr 
	return;
loc_82ACD85C:
	// lis r3,2
	ctx.r3.s64 = 131072;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// blr 
	return;
loc_82ACD868:
	// lis r3,2
	ctx.r3.s64 = 131072;
	// ori r3,r3,15
	ctx.r3.u64 = ctx.r3.u64 | 15;
	// blr 
	return;
loc_82ACD874:
	// lis r3,2
	ctx.r3.s64 = 131072;
	// ori r3,r3,16
	ctx.r3.u64 = ctx.r3.u64 | 16;
loc_82ACD87C:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ACD880"))) PPC_WEAK_FUNC(sub_82ACD880);
PPC_FUNC_IMPL(__imp__sub_82ACD880) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82ACD888;
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
	ctx.lr = 0x82ACD8A0;
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
	ctx.lr = 0x82ACD8B8;
	sub_82D253F8(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// stb r28,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r28.u8);
	// addi r9,r11,-23992
	ctx.r9.s64 = ctx.r11.s64 + -23992;
	// stb r29,97(r31)
	PPC_STORE_U8(ctx.r31.u32 + 97, ctx.r29.u8);
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-9752(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + -9752);
	// bl 0x82d20ae0
	ctx.lr = 0x82ACD8E8;
	sub_82D20AE0(ctx, base);
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r6,-24208
	ctx.r4.s64 = ctx.r6.s64 + -24208;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82d23390
	ctx.lr = 0x82ACD8FC;
	sub_82D23390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1a9a8
	ctx.lr = 0x82ACD904;
	sub_82D1A9A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ACD910"))) PPC_WEAK_FUNC(sub_82ACD910);
PPC_FUNC_IMPL(__imp__sub_82ACD910) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82ACD918;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82ACD924;
	sub_831156E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82acdab8
	if (cr6.eq) goto loc_82ACDAB8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82ACD934;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82ACD93C;
	sub_82D33DB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82acdab8
	if (cr6.eq) goto loc_82ACDAB8;
	// bl 0x831156e8
	ctx.lr = 0x82ACD94C;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// addis r29,r10,221
	ctx.r29.s64 = ctx.r10.s64 + 14483456;
	// addi r29,r29,-26512
	ctx.r29.s64 = ctx.r29.s64 + -26512;
	// bl 0x82d33db0
	ctx.lr = 0x82ACD968;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82acdab8
	if (cr6.eq) goto loc_82ACDAB8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82ACD980;
	sub_82D2D510(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82acdab8
	if (cr6.eq) goto loc_82ACDAB8;
	// bl 0x83a970c8
	ctx.lr = 0x82ACD98C;
	sub_83A970C8(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82ACD99C;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82acdab8
	if (cr6.eq) goto loc_82ACDAB8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82ACD9B4;
	sub_82D2D510(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82acdab8
	if (cr6.eq) goto loc_82ACDAB8;
	// bl 0x831156e8
	ctx.lr = 0x82ACD9C4;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r31,52(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// bl 0x83a970c8
	ctx.lr = 0x82ACD9D4;
	sub_83A970C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r3,r3,24160
	ctx.r3.s64 = ctx.r3.s64 + 24160;
	// bl 0x82acd678
	ctx.lr = 0x82ACD9E4;
	sub_82ACD678(ctx, base);
	// stb r3,4(r29)
	PPC_STORE_U8(ctx.r29.u32 + 4, ctx.r3.u8);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82ACD9F4;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82acdab8
	if (cr6.eq) goto loc_82ACDAB8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82ACDA0C;
	sub_82D2D510(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82acdab8
	if (cr6.eq) goto loc_82ACDAB8;
	// bl 0x83a970c8
	ctx.lr = 0x82ACDA18;
	sub_83A970C8(ctx, base);
	// stw r3,7592(r29)
	PPC_STORE_U32(ctx.r29.u32 + 7592, ctx.r3.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82ACDA28;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82acdab8
	if (cr6.eq) goto loc_82ACDAB8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82ACDA40;
	sub_82D2D510(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82acdab8
	if (cr6.eq) goto loc_82ACDAB8;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x83a970c8
	ctx.lr = 0x82ACDA50;
	sub_83A970C8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82acda5c
	if (!cr6.eq) goto loc_82ACDA5C;
	// li r31,1
	ctx.r31.s64 = 1;
loc_82ACDA5C:
	// stb r31,7590(r29)
	PPC_STORE_U8(ctx.r29.u32 + 7590, ctx.r31.u8);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82ACDA6C;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82acdab8
	if (cr6.eq) goto loc_82ACDAB8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82ACDA84;
	sub_82D2D510(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82acdab8
	if (cr6.eq) goto loc_82ACDAB8;
	// bl 0x83a970c8
	ctx.lr = 0x82ACDA90;
	sub_83A970C8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x82acdaa0
	if (cr6.eq) goto loc_82ACDAA0;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82ACDAA0:
	// stb r11,7702(r29)
	PPC_STORE_U8(ctx.r29.u32 + 7702, ctx.r11.u8);
	// lbz r11,96(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82acdab8
	if (!cr6.eq) goto loc_82ACDAB8;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8316bc30
	ctx.lr = 0x82ACDAB8;
	sub_8316BC30(ctx, base);
loc_82ACDAB8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ACDAC4"))) PPC_WEAK_FUNC(sub_82ACDAC4);
PPC_FUNC_IMPL(__imp__sub_82ACDAC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ACDAC8"))) PPC_WEAK_FUNC(sub_82ACDAC8);
PPC_FUNC_IMPL(__imp__sub_82ACDAC8) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-23992
	ctx.r9.s64 = ctx.r11.s64 + -23992;
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
	ctx.lr = 0x82ACDB00;
	sub_82D25548(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82acdb18
	if (cr6.eq) goto loc_82ACDB18;
	// bl 0x82416268
	ctx.lr = 0x82ACDB14;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82ACDB18:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ACDB30"))) PPC_WEAK_FUNC(sub_82ACDB30);
PPC_FUNC_IMPL(__imp__sub_82ACDB30) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r7,24
	ctx.r7.s64 = 24;
	// addi r6,r11,-24280
	ctx.r6.s64 = ctx.r11.s64 + -24280;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x827a8810
	ctx.lr = 0x82ACDB64;
	sub_827A8810(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82acdbb4
	if (!cr6.eq) goto loc_82ACDBB4;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82acdb7c
	if (cr6.lt) goto loc_82ACDB7C;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82ACDB7C:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,100
	ctx.r4.s64 = 100;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82ACDB98;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82acdbf8
	if (cr6.eq) goto loc_82ACDBF8;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82acd880
	ctx.lr = 0x82ACDBB0;
	sub_82ACD880(ctx, base);
	// b 0x82acdbfc
	goto loc_82ACDBFC;
loc_82ACDBB4:
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82acdbc0
	if (cr6.lt) goto loc_82ACDBC0;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82ACDBC0:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r4,100
	ctx.r4.s64 = 100;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x82ACDBDC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82acdbf8
	if (cr6.eq) goto loc_82ACDBF8;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82acd880
	ctx.lr = 0x82ACDBF4;
	sub_82ACD880(ctx, base);
	// b 0x82acdbfc
	goto loc_82ACDBFC;
loc_82ACDBF8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82ACDBFC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ACDC14"))) PPC_WEAK_FUNC(sub_82ACDC14);
PPC_FUNC_IMPL(__imp__sub_82ACDC14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ACDC18"))) PPC_WEAK_FUNC(sub_82ACDC18);
PPC_FUNC_IMPL(__imp__sub_82ACDC18) {
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
	// beq cr6,0x82acdc5c
	if (cr6.eq) goto loc_82ACDC5C;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x830f6290
	ctx.lr = 0x82ACDC48;
	sub_830F6290(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82ACDC5C;
	sub_825952B8(ctx, base);
loc_82ACDC5C:
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

__attribute__((alias("__imp__sub_82ACDC80"))) PPC_WEAK_FUNC(sub_82ACDC80);
PPC_FUNC_IMPL(__imp__sub_82ACDC80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x82ACDC88;
	__savegprlr_21(ctx, base);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82ACDC94;
	sub_831156E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ace3e4
	if (cr6.eq) goto loc_82ACE3E4;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82ACDCA4;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82ACDCAC;
	sub_82D33DB0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ace3e4
	if (cr6.eq) goto loc_82ACE3E4;
	// bl 0x82d26ed8
	ctx.lr = 0x82ACDCBC;
	sub_82D26ED8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d26900
	ctx.lr = 0x82ACDCC4;
	sub_82D26900(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82ACDCCC;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r25,r11,-24308
	ctx.r25.s64 = ctx.r11.s64 + -24308;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r25,112
	ctx.r4.s64 = ctx.r25.s64 + 112;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ACDCEC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ace3e4
	if (cr6.eq) goto loc_82ACE3E4;
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,91
	ctx.r4.u64 = ctx.r4.u64 | 91;
	// bl 0x82d30340
	ctx.lr = 0x82ACDD04;
	sub_82D30340(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82d1ed60
	ctx.lr = 0x82ACDD14;
	sub_82D1ED60(ctx, base);
	// addi r5,r25,124
	ctx.r5.s64 = ctx.r25.s64 + 124;
	// li r6,5
	ctx.r6.s64 = 5;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x831d0b08
	ctx.lr = 0x82ACDD28;
	sub_831D0B08(ctx, base);
	// addi r5,r25,140
	ctx.r5.s64 = ctx.r25.s64 + 140;
	// li r6,6
	ctx.r6.s64 = 6;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x831d0b08
	ctx.lr = 0x82ACDD3C;
	sub_831D0B08(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82ACDD44;
	sub_82D19A78(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ACDD5C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82ACDD64;
	sub_82D19A78(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82ACDD7C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82ACDD84;
	sub_82D19A78(ctx, base);
	// addi r4,r25,160
	ctx.r4.s64 = ctx.r25.s64 + 160;
	// bl 0x82d2f098
	ctx.lr = 0x82ACDD8C;
	sub_82D2F098(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ace3e4
	if (cr6.eq) goto loc_82ACE3E4;
	// lbz r11,96(r22)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r22.u32 + 96);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82acddcc
	if (cr6.eq) goto loc_82ACDDCC;
	// bl 0x82d19a78
	ctx.lr = 0x82ACDDAC;
	sub_82D19A78(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r25,168
	ctx.r4.s64 = ctx.r25.s64 + 168;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ACDDC4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82acde00
	goto loc_82ACDE00;
loc_82ACDDCC:
	// bl 0x82d19a78
	ctx.lr = 0x82ACDDD0;
	sub_82D19A78(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r25,180
	ctx.r4.s64 = ctx.r25.s64 + 180;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ACDDE8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82ACDDFC;
	sub_82D2B608(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
loc_82ACDE00:
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82ACDE0C;
	sub_82D2AEC8(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82ACDE10;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r27,48(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// addis r23,r27,221
	ctx.r23.s64 = ctx.r27.s64 + 14483456;
	// addi r23,r23,-26512
	ctx.r23.s64 = ctx.r23.s64 + -26512;
	// bl 0x82d33db0
	ctx.lr = 0x82ACDE2C;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ace3e4
	if (cr6.eq) goto loc_82ACE3E4;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// addi r4,r25,192
	ctx.r4.s64 = ctx.r25.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ACDE50;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ace3e4
	if (cr6.eq) goto loc_82ACE3E4;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// ori r4,r4,214
	ctx.r4.u64 = ctx.r4.u64 | 214;
	// bl 0x82d29598
	ctx.lr = 0x82ACDE64;
	sub_82D29598(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2d510
	ctx.lr = 0x82ACDE74;
	sub_82D2D510(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ace3e4
	if (cr6.eq) goto loc_82ACE3E4;
	// addi r11,r25,-44
	ctx.r11.s64 = ctx.r25.s64 + -44;
	// li r31,6
	ctx.r31.s64 = 6;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
loc_82ACDE8C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzu r4,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x82d3b620
	ctx.lr = 0x82ACDE98;
	sub_82D3B620(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x82acde8c
	if (!cr0.eq) goto loc_82ACDE8C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// bl 0x82d3b298
	ctx.lr = 0x82ACDEAC;
	sub_82D3B298(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82ACDEB8;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ace3e4
	if (cr6.eq) goto loc_82ACE3E4;
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2d510
	ctx.lr = 0x82ACDED4;
	sub_82D2D510(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ace3e4
	if (cr6.eq) goto loc_82ACE3E4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r25,200
	ctx.r4.s64 = ctx.r25.s64 + 200;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ACDEF8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ace3e4
	if (cr6.eq) goto loc_82ACE3E4;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// ori r4,r4,10
	ctx.r4.u64 = ctx.r4.u64 | 10;
	// bl 0x82d29598
	ctx.lr = 0x82ACDF0C;
	sub_82D29598(ctx, base);
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// bl 0x831156e8
	ctx.lr = 0x82ACDF18;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// addis r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 65536;
	// addi r30,r30,24160
	ctx.r30.s64 = ctx.r30.s64 + 24160;
loc_82ACDF28:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82acd678
	ctx.lr = 0x82ACDF34;
	sub_82ACD678(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// bl 0x82acd748
	ctx.lr = 0x82ACDF44;
	sub_82ACD748(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d3b620
	ctx.lr = 0x82ACDF50;
	sub_82D3B620(ctx, base);
	// lbz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 4);
	// cmplw cr6,r11,r21
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r21.u32, xer);
	// bne cr6,0x82acdf60
	if (!cr6.eq) goto loc_82ACDF60;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_82ACDF60:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,14
	cr6.compare<uint32_t>(ctx.r31.u32, 14, xer);
	// blt cr6,0x82acdf28
	if (cr6.lt) goto loc_82ACDF28;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d3b298
	ctx.lr = 0x82ACDF78;
	sub_82D3B298(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82ACDF84;
	sub_82D33DB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ace3e4
	if (cr6.eq) goto loc_82ACE3E4;
	// lbz r11,96(r22)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r22.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82acdfac
	if (!cr6.eq) goto loc_82ACDFAC;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2b608
	ctx.lr = 0x82ACDFAC;
	sub_82D2B608(ctx, base);
loc_82ACDFAC:
	// addi r29,r31,100
	ctx.r29.s64 = ctx.r31.s64 + 100;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2d510
	ctx.lr = 0x82ACDFC0;
	sub_82D2D510(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ace3e4
	if (cr6.eq) goto loc_82ACE3E4;
	// addi r11,r25,-20
	ctx.r11.s64 = ctx.r25.s64 + -20;
	// li r31,5
	ctx.r31.s64 = 5;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
loc_82ACDFD8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzu r4,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x82d3b620
	ctx.lr = 0x82ACDFE4;
	sub_82D3B620(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x82acdfd8
	if (!cr0.eq) goto loc_82ACDFD8;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r25,208
	ctx.r4.s64 = ctx.r25.s64 + 208;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ACE004;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ace3e4
	if (cr6.eq) goto loc_82ACE3E4;
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// ori r4,r4,468
	ctx.r4.u64 = ctx.r4.u64 | 468;
	// bl 0x82d29598
	ctx.lr = 0x82ACE018;
	sub_82D29598(ctx, base);
	// bl 0x8310e030
	ctx.lr = 0x82ACE01C;
	sub_8310E030(ctx, base);
	// lbz r11,97(r22)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r22.u32 + 97);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ace084
	if (!cr6.eq) goto loc_82ACE084;
	// lis r11,236
	ctx.r11.s64 = 15466496;
	// ori r10,r11,5128
	ctx.r10.u64 = ctx.r11.u64 | 5128;
	// lwzx r9,r27,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82ace084
	if (!cr6.eq) goto loc_82ACE084;
	// cmplwi cr6,r3,4
	cr6.compare<uint32_t>(ctx.r3.u32, 4, xer);
	// bgt cr6,0x82ace07c
	if (cr6.gt) goto loc_82ACE07C;
	// mtctr r3
	ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82ace064
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82ACE064;
	// bdzf 4*cr6+eq,0x82ace06c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82ACE06C;
	// bdzf 4*cr6+eq,0x82ace07c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82ACE07C;
	// bne cr6,0x82ace074
	if (!cr6.eq) goto loc_82ACE074;
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x82ace088
	goto loc_82ACE088;
loc_82ACE064:
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82ace088
	goto loc_82ACE088;
loc_82ACE06C:
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x82ace088
	goto loc_82ACE088;
loc_82ACE074:
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x82ace088
	goto loc_82ACE088;
loc_82ACE07C:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// b 0x82ace088
	goto loc_82ACE088;
loc_82ACE084:
	// lwz r4,7592(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 7592);
loc_82ACE088:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d3b298
	ctx.lr = 0x82ACE090;
	sub_82D3B298(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82ACE09C;
	sub_82D33DB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ace3e4
	if (cr6.eq) goto loc_82ACE3E4;
	// lbz r11,96(r22)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r22.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ace0c4
	if (!cr6.eq) goto loc_82ACE0C4;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2b608
	ctx.lr = 0x82ACE0C4;
	sub_82D2B608(ctx, base);
loc_82ACE0C4:
	// addi r31,r31,100
	ctx.r31.s64 = ctx.r31.s64 + 100;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2d510
	ctx.lr = 0x82ACE0D8;
	sub_82D2D510(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ace3e4
	if (cr6.eq) goto loc_82ACE3E4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r25,216
	ctx.r4.s64 = ctx.r25.s64 + 216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ACE0FC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ace3e4
	if (cr6.eq) goto loc_82ACE3E4;
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// ori r4,r4,259
	ctx.r4.u64 = ctx.r4.u64 | 259;
	// bl 0x82d29598
	ctx.lr = 0x82ACE110;
	sub_82D29598(ctx, base);
	// addi r31,r25,-72
	ctx.r31.s64 = ctx.r25.s64 + -72;
loc_82ACE114:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82d3b620
	ctx.lr = 0x82ACE120;
	sub_82D3B620(ctx, base);
	// addi r11,r25,-72
	ctx.r11.s64 = ctx.r25.s64 + -72;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, xer);
	// blt cr6,0x82ace114
	if (cr6.lt) goto loc_82ACE114;
	// lbz r10,7590(r23)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r23.u32 + 7590);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ace148
	if (!cr6.eq) goto loc_82ACE148;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82ACE148:
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d3b298
	ctx.lr = 0x82ACE154;
	sub_82D3B298(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82ACE160;
	sub_82D33DB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ace3e4
	if (cr6.eq) goto loc_82ACE3E4;
	// lbz r11,96(r22)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r22.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ace188
	if (!cr6.eq) goto loc_82ACE188;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2b608
	ctx.lr = 0x82ACE188;
	sub_82D2B608(ctx, base);
loc_82ACE188:
	// addi r31,r31,100
	ctx.r31.s64 = ctx.r31.s64 + 100;
	// addi r4,r25,224
	ctx.r4.s64 = ctx.r25.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ACE1A4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ace3e4
	if (cr6.eq) goto loc_82ACE3E4;
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// ori r4,r4,623
	ctx.r4.u64 = ctx.r4.u64 | 623;
	// bl 0x82d29598
	ctx.lr = 0x82ACE1B8;
	sub_82D29598(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2d510
	ctx.lr = 0x82ACE1C8;
	sub_82D2D510(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ace3e4
	if (cr6.eq) goto loc_82ACE3E4;
	// addi r11,r25,20
	ctx.r11.s64 = ctx.r25.s64 + 20;
	// li r31,2
	ctx.r31.s64 = 2;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
loc_82ACE1E0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzu r4,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x82d3b620
	ctx.lr = 0x82ACE1EC;
	sub_82D3B620(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x82ace1e0
	if (!cr0.eq) goto loc_82ACE1E0;
	// lbz r11,7702(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 7702);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ace20c
	if (!cr6.eq) goto loc_82ACE20C;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82ACE20C:
	// bl 0x82d3b298
	ctx.lr = 0x82ACE210;
	sub_82D3B298(ctx, base);
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r24.u32);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// stw r24,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// stw r24,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r24.u32);
	// li r31,-1
	ctx.r31.s64 = -1;
	// li r26,15
	ctx.r26.s64 = 15;
	// li r27,39
	ctx.r27.s64 = 39;
	// li r28,41
	ctx.r28.s64 = 41;
	// li r29,40
	ctx.r29.s64 = 40;
loc_82ACE234:
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// cmplwi cr6,r30,4
	cr6.compare<uint32_t>(ctx.r30.u32, 4, xer);
	// stw r26,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r26.u32);
	// stw r24,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r24.u32);
	// stb r24,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r24.u8);
	// bne cr6,0x82ace324
	if (!cr6.eq) goto loc_82ACE324;
	// addi r4,r25,-290
	ctx.r4.s64 = ctx.r25.s64 + -290;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x837b0c10
	ctx.lr = 0x82ACE258;
	sub_837B0C10(ctx, base);
	// stb r24,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r24.u8);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8315e518
	ctx.lr = 0x82ACE270;
	sub_8315E518(ctx, base);
	// stb r24,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r24.u8);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8315e518
	ctx.lr = 0x82ACE288;
	sub_8315E518(ctx, base);
	// stb r24,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r24.u8);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8315e518
	ctx.lr = 0x82ACE2A0;
	sub_8315E518(ctx, base);
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r7,256(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82ace2b4
	if (!cr6.lt) goto loc_82ACE2B4;
	// addi r7,r1,256
	ctx.r7.s64 = ctx.r1.s64 + 256;
loc_82ACE2B4:
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r6,192(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82ace2c8
	if (!cr6.lt) goto loc_82ACE2C8;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
loc_82ACE2C8:
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r5,224(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82ace2dc
	if (!cr6.lt) goto loc_82ACE2DC;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
loc_82ACE2DC:
	// lis r4,269
	ctx.r4.s64 = 17629184;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// ori r4,r4,167
	ctx.r4.u64 = ctx.r4.u64 | 167;
	// bl 0x82d042a8
	ctx.lr = 0x82ACE2EC;
	sub_82D042A8(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x8259cb28
	ctx.lr = 0x82ACE300;
	sub_8259CB28(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8387e8e0
	ctx.lr = 0x82ACE308;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x82ACE310;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8387e8e0
	ctx.lr = 0x82ACE318;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x8387e8e0
	ctx.lr = 0x82ACE320;
	sub_8387E8E0(ctx, base);
	// b 0x82ace330
	goto loc_82ACE330;
loc_82ACE324:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r25
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
loc_82ACE330:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x830f6558
	ctx.lr = 0x82ACE33C;
	sub_830F6558(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x838760e0
	ctx.lr = 0x82ACE344;
	sub_838760E0(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,5
	cr6.compare<uint32_t>(ctx.r30.u32, 5, xer);
	// blt cr6,0x82ace234
	if (cr6.lt) goto loc_82ACE234;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82d24c38
	ctx.lr = 0x82ACE360;
	sub_82D24C38(ctx, base);
	// lbz r11,96(r22)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r22.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ace3bc
	if (cr6.eq) goto loc_82ACE3BC;
	// lis r11,269
	ctx.r11.s64 = 17629184;
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r24.u32);
	// stw r24,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// ori r10,r11,176
	ctx.r10.u64 = ctx.r11.u64 | 176;
	// stw r24,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r24.u32);
	// stw r26,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r26.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r24,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r24.u32);
	// stb r24,164(r1)
	PPC_STORE_U8(ctx.r1.u32 + 164, ctx.r24.u8);
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// bl 0x830f6558
	ctx.lr = 0x82ACE39C;
	sub_830F6558(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82d24c38
	ctx.lr = 0x82ACE3AC;
	sub_82D24C38(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x838760e0
	ctx.lr = 0x82ACE3B4;
	sub_838760E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82acdc18
	ctx.lr = 0x82ACE3BC;
	sub_82ACDC18(ctx, base);
loc_82ACE3BC:
	// lbz r11,96(r22)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r22.u32 + 96);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// bne cr6,0x82ace3d8
	if (!cr6.eq) goto loc_82ACE3D8;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82ACE3D8:
	// bl 0x82d1eac0
	ctx.lr = 0x82ACE3DC;
	sub_82D1EAC0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82acdc18
	ctx.lr = 0x82ACE3E4;
	sub_82ACDC18(ctx, base);
loc_82ACE3E4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ACE3F0"))) PPC_WEAK_FUNC(sub_82ACE3F0);
PPC_FUNC_IMPL(__imp__sub_82ACE3F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,4
	ctx.r11.s64 = 262144;
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r7,r11,11860
	ctx.r7.u64 = ctx.r11.u64 | 11860;
	// add r9,r3,r7
	ctx.r9.u64 = ctx.r3.u64 + ctx.r7.u64;
loc_82ACE404:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// xor r6,r8,r11
	ctx.r6.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// rlwinm r5,r6,0,0,13
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82ace42c
	if (!cr6.eq) goto loc_82ACE42C;
	// xor r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// clrlwi r6,r11,14
	ctx.r6.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82ace430
	if (cr6.eq) goto loc_82ACE430;
loc_82ACE42C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82ACE430:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ace454
	if (!cr6.eq) goto loc_82ACE454;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,20
	ctx.r9.s64 = ctx.r9.s64 + 20;
	// cmplwi cr6,r10,70
	cr6.compare<uint32_t>(ctx.r10.u32, 70, xer);
	// blt cr6,0x82ace404
	if (cr6.lt) goto loc_82ACE404;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82ACE454:
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r3,r10,r7
	ctx.r3.u64 = ctx.r10.u64 + ctx.r7.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ACE46C"))) PPC_WEAK_FUNC(sub_82ACE46C);
PPC_FUNC_IMPL(__imp__sub_82ACE46C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ACE470"))) PPC_WEAK_FUNC(sub_82ACE470);
PPC_FUNC_IMPL(__imp__sub_82ACE470) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82ACE478;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r9,r4,4
	ctx.r9.s64 = ctx.r4.s64 + 4;
	// li r10,70
	ctx.r10.s64 = 70;
	// rlwimi r7,r6,0,14,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x3FFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFC0000);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rotlwi r4,r7,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// rlwimi r5,r4,0,0,13
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0xFFFC0000) | (ctx.r5.u64 & 0xFFFFFFFF0003FFFF);
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
loc_82ACE4B8:
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82ace4b8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82ACE4B8;
	// lbz r7,74(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 74);
	// li r10,97
	ctx.r10.s64 = 97;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r30,80
	ctx.r9.s64 = ctx.r30.s64 + 80;
	// addi r8,r31,80
	ctx.r8.s64 = ctx.r31.s64 + 80;
	// stb r7,74(r31)
	PPC_STORE_U8(ctx.r31.u32 + 74, ctx.r7.u8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lbz r6,75(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 75);
	// stb r6,75(r31)
	PPC_STORE_U8(ctx.r31.u32 + 75, ctx.r6.u8);
	// lbz r5,76(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 76);
	// stb r5,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r5.u8);
	// lbz r4,77(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 77);
	// stb r4,77(r31)
	PPC_STORE_U8(ctx.r31.u32 + 77, ctx.r4.u8);
	// lhz r3,78(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 78);
	// sth r3,78(r31)
	PPC_STORE_U16(ctx.r31.u32 + 78, ctx.r3.u16);
loc_82ACE504:
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82ace504
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82ACE504;
	// li r10,64
	ctx.r10.s64 = 64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r30,177
	ctx.r9.s64 = ctx.r30.s64 + 177;
	// addi r8,r31,177
	ctx.r8.s64 = ctx.r31.s64 + 177;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82ACE528:
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82ace528
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82ACE528;
	// lbz r9,241(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 241);
	// addi r11,r31,248
	ctx.r11.s64 = ctx.r31.s64 + 248;
	// subf r27,r31,r30
	ctx.r27.s64 = ctx.r30.s64 - ctx.r31.s64;
	// li r10,32
	ctx.r10.s64 = 32;
	// stb r9,241(r31)
	PPC_STORE_U8(ctx.r31.u32 + 241, ctx.r9.u8);
	// lbz r8,242(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 242);
	// stb r8,242(r31)
	PPC_STORE_U8(ctx.r31.u32 + 242, ctx.r8.u8);
	// lbz r7,243(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 243);
	// stb r7,243(r31)
	PPC_STORE_U8(ctx.r31.u32 + 243, ctx.r7.u8);
	// lbz r6,244(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 244);
	// stb r6,244(r31)
	PPC_STORE_U8(ctx.r31.u32 + 244, ctx.r6.u8);
loc_82ACE564:
	// lwzx r9,r27,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// add r8,r27,r11
	ctx.r8.u64 = ctx.r27.u64 + ctx.r11.u64;
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x82ace564
	if (!cr0.eq) goto loc_82ACE564;
	// lhz r7,504(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 504);
	// li r10,32
	ctx.r10.s64 = 32;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r30,512
	ctx.r9.s64 = ctx.r30.s64 + 512;
	// addi r8,r31,512
	ctx.r8.s64 = ctx.r31.s64 + 512;
	// sth r7,504(r31)
	PPC_STORE_U16(ctx.r31.u32 + 504, ctx.r7.u16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lwz r6,508(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 508);
	// stw r6,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r6.u32);
loc_82ACE5A8:
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82ace5a8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82ACE5A8;
	// addi r11,r31,544
	ctx.r11.s64 = ctx.r31.s64 + 544;
	// li r10,15
	ctx.r10.s64 = 15;
loc_82ACE5C0:
	// lwzx r9,r11,r27
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// add r8,r11,r27
	ctx.r8.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lwz r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// lwz r5,12(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// stw r5,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bne 0x82ace5c0
	if (!cr0.eq) goto loc_82ACE5C0;
	// lhz r8,784(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 784);
	// li r10,12
	ctx.r10.s64 = 12;
	// lwz r7,788(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 788);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r6,792(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 792);
	// addi r9,r30,818
	ctx.r9.s64 = ctx.r30.s64 + 818;
	// lwz r5,796(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 796);
	// sth r8,784(r31)
	PPC_STORE_U16(ctx.r31.u32 + 784, ctx.r8.u16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lwz r4,788(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 788);
	// rlwimi r4,r7,0,7,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x1FFFFFF) | (ctx.r4.u64 & 0xFFFFFFFFFE000000);
	// stw r4,788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 788, ctx.r4.u32);
	// rotlwi r8,r4,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// lwz r3,788(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 788);
	// rlwimi r8,r3,0,7,14
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0x1FE0000) | (ctx.r8.u64 & 0xFFFFFFFFFE01FFFF);
	// rotlwi r4,r8,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 788, ctx.r8.u32);
	// lwz r7,788(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 788);
	// rlwimi r4,r7,0,15,15
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x10000) | (ctx.r4.u64 & 0xFFFFFFFFFFFEFFFF);
	// stw r4,788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 788, ctx.r4.u32);
	// lwz r3,788(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 788);
	// rlwinm r8,r3,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFF;
	// stb r8,790(r31)
	PPC_STORE_U8(ctx.r31.u32 + 790, ctx.r8.u8);
	// lwz r7,788(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 788);
	// stb r7,791(r31)
	PPC_STORE_U8(ctx.r31.u32 + 791, ctx.r7.u8);
	// lwz r3,792(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 792);
	// rlwimi r3,r6,0,4,31
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFFFFF) | (ctx.r3.u64 & 0xFFFFFFFFF0000000);
	// rotlwi r7,r3,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r3,792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 792, ctx.r3.u32);
	// lwz r8,792(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 792);
	// rlwimi r7,r8,0,4,7
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xF000000) | (ctx.r7.u64 & 0xFFFFFFFFF0FFFFFF);
	// rotlwi r4,r7,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 792, ctx.r7.u32);
	// lwz r6,792(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 792);
	// rlwimi r4,r6,0,8,11
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xF00000) | (ctx.r4.u64 & 0xFFFFFFFFFF0FFFFF);
	// rotlwi r8,r4,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stw r4,792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 792, ctx.r4.u32);
	// lwz r3,792(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 792);
	// rlwimi r8,r3,0,12,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0xF0000) | (ctx.r8.u64 & 0xFFFFFFFFFFF0FFFF);
	// stw r8,792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 792, ctx.r8.u32);
	// lwz r7,792(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 792);
	// sth r7,794(r31)
	PPC_STORE_U16(ctx.r31.u32 + 794, ctx.r7.u16);
	// lwz r4,796(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 796);
	// rlwimi r4,r5,0,4,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xFFFFFFF) | (ctx.r4.u64 & 0xFFFFFFFFF0000000);
	// rotlwi r3,r4,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stw r4,796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 796, ctx.r4.u32);
	// lwz r8,796(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 796);
	// rlwimi r3,r8,0,4,5
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xC000000) | (ctx.r3.u64 & 0xFFFFFFFFF3FFFFFF);
	// rotlwi r7,r3,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r3,796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 796, ctx.r3.u32);
	// lwz r6,796(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 796);
	// rlwimi r7,r6,0,6,8
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x3800000) | (ctx.r7.u64 & 0xFFFFFFFFFC7FFFFF);
	// rotlwi r5,r7,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 796, ctx.r7.u32);
	// lwz r4,796(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 796);
	// rlwimi r5,r4,0,9,12
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x780000) | (ctx.r5.u64 & 0xFFFFFFFFFF87FFFF);
	// rotlwi r3,r5,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r5,796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 796, ctx.r5.u32);
	// lwz r8,796(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 796);
	// rlwimi r3,r8,0,13,15
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x70000) | (ctx.r3.u64 & 0xFFFFFFFFFFF8FFFF);
	// rotlwi r7,r3,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r3,796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 796, ctx.r3.u32);
	// lwz r6,796(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 796);
	// rlwimi r7,r6,0,16,18
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xE000) | (ctx.r7.u64 & 0xFFFFFFFFFFFF1FFF);
	// rotlwi r5,r7,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 796, ctx.r7.u32);
	// lwz r4,796(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 796);
	// rlwimi r5,r4,0,19,21
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x1C00) | (ctx.r5.u64 & 0xFFFFFFFFFFFFE3FF);
	// rotlwi r3,r5,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r5,796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 796, ctx.r5.u32);
	// lwz r8,796(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 796);
	// rlwimi r3,r8,0,22,22
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x200) | (ctx.r3.u64 & 0xFFFFFFFFFFFFFDFF);
	// rotlwi r7,r3,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r3,796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 796, ctx.r3.u32);
	// lwz r6,796(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 796);
	// addi r8,r31,818
	ctx.r8.s64 = ctx.r31.s64 + 818;
	// rlwimi r7,r6,0,23,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x100) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFEFF);
	// rotlwi r4,r7,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 796, ctx.r7.u32);
	// lwz r5,796(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 796);
	// rlwimi r4,r5,0,24,24
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x80) | (ctx.r4.u64 & 0xFFFFFFFFFFFFFF7F);
	// rotlwi r10,r4,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stw r4,796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 796, ctx.r4.u32);
	// lwz r3,796(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 796);
	// rlwimi r10,r3,0,25,25
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0x40) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFBF);
	// stw r10,796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 796, ctx.r10.u32);
	// lwz r7,796(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 796);
	// rotlwi r6,r10,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rlwimi r6,r7,0,26,26
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x20) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFFDF);
	// stw r6,796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 796, ctx.r6.u32);
	// rotlwi r4,r6,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwz r5,796(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 796);
	// rlwimi r4,r5,0,27,27
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x10) | (ctx.r4.u64 & 0xFFFFFFFFFFFFFFEF);
	// rotlwi r3,r4,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stw r4,796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 796, ctx.r4.u32);
	// lwz r10,796(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 796);
	// rlwimi r3,r10,0,28,28
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x8) | (ctx.r3.u64 & 0xFFFFFFFFFFFFFFF7);
	// stw r3,796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 796, ctx.r3.u32);
	// rotlwi r6,r3,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// lwz r7,796(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 796);
	// rlwimi r6,r7,0,29,29
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x4) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFFFB);
	// stw r6,796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 796, ctx.r6.u32);
	// lwz r5,796(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 796);
	// rlwimi r6,r5,0,30,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFFFC);
	// stw r6,796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 796, ctx.r6.u32);
	// lhz r4,800(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 800);
	// sth r4,800(r31)
	PPC_STORE_U16(ctx.r31.u32 + 800, ctx.r4.u16);
	// lhz r3,802(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 802);
	// sth r3,802(r31)
	PPC_STORE_U16(ctx.r31.u32 + 802, ctx.r3.u16);
	// lhz r10,804(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 804);
	// sth r10,804(r31)
	PPC_STORE_U16(ctx.r31.u32 + 804, ctx.r10.u16);
	// lhz r7,806(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 806);
	// sth r7,806(r31)
	PPC_STORE_U16(ctx.r31.u32 + 806, ctx.r7.u16);
	// lwz r5,808(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 808);
	// lwz r6,808(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 808);
	// rlwimi r6,r5,0,9,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x7FFFFF) | (ctx.r6.u64 & 0xFFFFFFFFFF800000);
	// stw r6,808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 808, ctx.r6.u32);
	// rotlwi r3,r6,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwz r4,808(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 808);
	// rlwimi r3,r4,0,9,15
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x7F0000) | (ctx.r3.u64 & 0xFFFFFFFFFF80FFFF);
	// stw r3,808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 808, ctx.r3.u32);
	// lwz r10,808(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 808);
	// sth r10,810(r31)
	PPC_STORE_U16(ctx.r31.u32 + 810, ctx.r10.u16);
	// lbz r6,812(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 812);
	// stb r6,812(r31)
	PPC_STORE_U8(ctx.r31.u32 + 812, ctx.r6.u8);
	// lbz r5,813(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 813);
	// stb r5,813(r31)
	PPC_STORE_U8(ctx.r31.u32 + 813, ctx.r5.u8);
	// lbz r4,814(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 814);
	// stb r4,814(r31)
	PPC_STORE_U8(ctx.r31.u32 + 814, ctx.r4.u8);
	// lbz r3,815(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 815);
	// stb r3,815(r31)
	PPC_STORE_U8(ctx.r31.u32 + 815, ctx.r3.u8);
	// lbz r10,816(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 816);
	// stb r10,816(r31)
	PPC_STORE_U8(ctx.r31.u32 + 816, ctx.r10.u8);
	// lbz r7,817(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 817);
	// stb r7,817(r31)
	PPC_STORE_U8(ctx.r31.u32 + 817, ctx.r7.u8);
loc_82ACE80C:
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82ace80c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82ACE80C;
	// addi r29,r31,832
	ctx.r29.s64 = ctx.r31.s64 + 832;
	// li r28,2
	ctx.r28.s64 = 2;
loc_82ACE824:
	// add r4,r29,r27
	ctx.r4.u64 = ctx.r29.u64 + ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82abfda0
	ctx.lr = 0x82ACE830;
	sub_82ABFDA0(ctx, base);
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r29,r29,160
	ctx.r29.s64 = ctx.r29.s64 + 160;
	// bne 0x82ace824
	if (!cr0.eq) goto loc_82ACE824;
	// lbz r11,1152(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1152);
	// addi r4,r30,1162
	ctx.r4.s64 = ctx.r30.s64 + 1162;
	// addi r3,r31,1162
	ctx.r3.s64 = ctx.r31.s64 + 1162;
	// li r5,47
	ctx.r5.s64 = 47;
	// stb r11,1152(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1152, ctx.r11.u8);
	// lbz r10,1153(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1153);
	// stb r10,1153(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1153, ctx.r10.u8);
	// lbz r9,1154(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1154);
	// stb r9,1154(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1154, ctx.r9.u8);
	// lbz r8,1155(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1155);
	// stb r8,1155(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1155, ctx.r8.u8);
	// lbz r7,1156(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1156);
	// stb r7,1156(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1156, ctx.r7.u8);
	// lbz r6,1157(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1157);
	// stb r6,1157(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1157, ctx.r6.u8);
	// lbz r11,1158(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1158);
	// stb r11,1158(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1158, ctx.r11.u8);
	// lbz r10,1159(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1159);
	// stb r10,1159(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1159, ctx.r10.u8);
	// lbz r9,1160(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1160);
	// stb r9,1160(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1160, ctx.r9.u8);
	// lbz r8,1161(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1161);
	// stb r8,1161(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1161, ctx.r8.u8);
	// bl 0x831ce980
	ctx.lr = 0x82ACE89C;
	sub_831CE980(ctx, base);
	// addi r4,r30,1209
	ctx.r4.s64 = ctx.r30.s64 + 1209;
	// addi r3,r31,1209
	ctx.r3.s64 = ctx.r31.s64 + 1209;
	// li r5,80
	ctx.r5.s64 = 80;
	// bl 0x831ce980
	ctx.lr = 0x82ACE8AC;
	sub_831CE980(ctx, base);
	// lwz r6,1292(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1292);
	// lwz r7,1292(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1292);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwimi r7,r6,0,14,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x3FFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFC0000);
	// stw r7,1292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1292, ctx.r7.u32);
	// rotlwi r4,r7,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r5,1292(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1292);
	// rlwimi r5,r4,0,0,13
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0xFFFC0000) | (ctx.r5.u64 & 0xFFFFFFFF0003FFFF);
	// stw r5,1292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1292, ctx.r5.u32);
	// lwz r10,1296(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1296);
	// lwz r11,1296(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1296);
	// rlwimi r11,r10,0,14,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFC0000);
	// stw r11,1296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1296, ctx.r11.u32);
	// rotlwi r8,r11,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r9,1296(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1296);
	// rlwimi r9,r8,0,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// stw r9,1296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1296, ctx.r9.u32);
	// lwz r7,1300(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1300);
	// lwz r6,1300(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1300);
	// rlwimi r7,r6,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// stw r7,1300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1300, ctx.r7.u32);
	// lwz r5,1300(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1300);
	// rlwimi r7,r5,0,14,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFC0000);
	// stw r7,1300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1300, ctx.r7.u32);
	// lwz r11,1304(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1304);
	// lwz r4,1304(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1304);
	// rlwimi r4,r11,0,0,13
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r4.u64 & 0xFFFFFFFF0003FFFF);
	// stw r4,1304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1304, ctx.r4.u32);
	// lwz r10,1304(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1304);
	// rlwimi r4,r10,0,14,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFC0000);
	// stw r4,1304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1304, ctx.r4.u32);
	// lwz r9,1308(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1308);
	// lwz r8,1308(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1308);
	// rlwimi r8,r9,0,0,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// stw r8,1308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1308, ctx.r8.u32);
	// lwz r7,1308(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1308);
	// rlwimi r8,r7,0,14,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFC0000);
	// stw r8,1308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1308, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ACE94C"))) PPC_WEAK_FUNC(sub_82ACE94C);
PPC_FUNC_IMPL(__imp__sub_82ACE94C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ACE950"))) PPC_WEAK_FUNC(sub_82ACE950);
PPC_FUNC_IMPL(__imp__sub_82ACE950) {
	PPC_FUNC_PROLOGUE();
	// li r3,108
	ctx.r3.s64 = 108;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ACE958"))) PPC_WEAK_FUNC(sub_82ACE958);
PPC_FUNC_IMPL(__imp__sub_82ACE958) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// bl 0x831156e8
	ctx.lr = 0x82ACE974;
	sub_831156E8(ctx, base);
	// lbz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 188);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lwz r30,48(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// subfe r8,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r5,r10,-23648
	ctx.r5.s64 = ctx.r10.s64 + -23648;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x831178a0
	ctx.lr = 0x82ACE9A0;
	sub_831178A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8311c148
	ctx.lr = 0x82ACE9AC;
	sub_8311C148(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// bl 0x82ace470
	ctx.lr = 0x82ACE9B8;
	sub_82ACE470(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ACE9D0"))) PPC_WEAK_FUNC(sub_82ACE9D0);
PPC_FUNC_IMPL(__imp__sub_82ACE9D0) {
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
	ctx.lr = 0x82ACE9E8;
	sub_8308E078(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d444b0
	ctx.lr = 0x82ACE9F8;
	sub_82D444B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82acea0c
	if (cr6.eq) goto loc_82ACEA0C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82ACEA0C;
	sub_83103100(ctx, base);
loc_82ACEA0C:
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

__attribute__((alias("__imp__sub_82ACEA20"))) PPC_WEAK_FUNC(sub_82ACEA20);
PPC_FUNC_IMPL(__imp__sub_82ACEA20) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,136(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82c1b490
	sub_82C1B490(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ACEA2C"))) PPC_WEAK_FUNC(sub_82ACEA2C);
PPC_FUNC_IMPL(__imp__sub_82ACEA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ACEA30"))) PPC_WEAK_FUNC(sub_82ACEA30);
PPC_FUNC_IMPL(__imp__sub_82ACEA30) {
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
	// lbz r11,1540(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1540);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82aceaa0
	if (cr6.eq) goto loc_82ACEAA0;
	// lwz r11,1536(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1536);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82aceaa0
	if (cr6.eq) goto loc_82ACEAA0;
	// lbz r11,77(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 77);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82acea78
	if (!cr6.eq) goto loc_82ACEA78;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d199d0
	ctx.lr = 0x82ACEA70;
	sub_82D199D0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,1540(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1540, ctx.r11.u8);
loc_82ACEA78:
	// lwz r11,1536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1536);
	// lbz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 76);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82aceaa0
	if (cr6.eq) goto loc_82ACEAA0;
	// bl 0x831156e8
	ctx.lr = 0x82ACEA8C;
	sub_831156E8(ctx, base);
	// lis r11,5
	ctx.r11.s64 = 327680;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r9,1
	ctx.r9.s64 = 1;
	// ori r8,r11,37452
	ctx.r8.u64 = ctx.r11.u64 | 37452;
	// stbx r9,r10,r8
	PPC_STORE_U8(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u8);
loc_82ACEAA0:
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

__attribute__((alias("__imp__sub_82ACEAB4"))) PPC_WEAK_FUNC(sub_82ACEAB4);
PPC_FUNC_IMPL(__imp__sub_82ACEAB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ACEAB8"))) PPC_WEAK_FUNC(sub_82ACEAB8);
PPC_FUNC_IMPL(__imp__sub_82ACEAB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82ACEAC0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x831156e8
	ctx.lr = 0x82ACEAC8;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r31,0
	ctx.r31.s64 = 0;
	// addis r29,r11,205
	ctx.r29.s64 = ctx.r11.s64 + 13434880;
	// addi r29,r29,-18420
	ctx.r29.s64 = ctx.r29.s64 + -18420;
	// addis r28,r29,4
	ctx.r28.s64 = ctx.r29.s64 + 262144;
	// addi r28,r28,11860
	ctx.r28.s64 = ctx.r28.s64 + 11860;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82ACEAE4:
	// cmplwi cr6,r31,70
	cr6.compare<uint32_t>(ctx.r31.u32, 70, xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// bge cr6,0x82aceaf4
	if (!cr6.lt) goto loc_82ACEAF4;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82ACEAF4:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82ace3f0
	ctx.lr = 0x82ACEB08;
	sub_82ACE3F0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82aceb1c
	if (cr6.eq) goto loc_82ACEB1C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x82aceb38
	if (cr6.eq) goto loc_82ACEB38;
loc_82ACEB1C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// cmplwi cr6,r31,70
	cr6.compare<uint32_t>(ctx.r31.u32, 70, xer);
	// blt cr6,0x82aceae4
	if (cr6.lt) goto loc_82ACEAE4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82ACEB38:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ACEB44"))) PPC_WEAK_FUNC(sub_82ACEB44);
PPC_FUNC_IMPL(__imp__sub_82ACEB44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ACEB48"))) PPC_WEAK_FUNC(sub_82ACEB48);
PPC_FUNC_IMPL(__imp__sub_82ACEB48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82ACEB50;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x82ACEB5C;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r31,0
	ctx.r31.s64 = 0;
	// addis r29,r11,205
	ctx.r29.s64 = ctx.r11.s64 + 13434880;
	// addi r29,r29,-18420
	ctx.r29.s64 = ctx.r29.s64 + -18420;
	// addis r28,r29,4
	ctx.r28.s64 = ctx.r29.s64 + 262144;
	// addi r28,r28,11860
	ctx.r28.s64 = ctx.r28.s64 + 11860;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82ACEB78:
	// cmplwi cr6,r31,70
	cr6.compare<uint32_t>(ctx.r31.u32, 70, xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// bge cr6,0x82aceb88
	if (!cr6.lt) goto loc_82ACEB88;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82ACEB88:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82ace3f0
	ctx.lr = 0x82ACEB9C;
	sub_82ACE3F0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82acebb0
	if (cr6.eq) goto loc_82ACEBB0;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// beq cr6,0x82acebcc
	if (cr6.eq) goto loc_82ACEBCC;
loc_82ACEBB0:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// cmplwi cr6,r31,70
	cr6.compare<uint32_t>(ctx.r31.u32, 70, xer);
	// blt cr6,0x82aceb78
	if (cr6.lt) goto loc_82ACEB78;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82ACEBCC:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x82acebdc
	if (cr6.eq) goto loc_82ACEBDC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_82ACEBDC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ACEBE8"))) PPC_WEAK_FUNC(sub_82ACEBE8);
PPC_FUNC_IMPL(__imp__sub_82ACEBE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lhz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// lhz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// beq cr6,0x82acec08
	if (cr6.eq) goto loc_82ACEC08;
	// subfc r11,r8,r9
	xer.ca = ctx.r9.u32 >= ctx.r8.u32;
	ctx.r11.s64 = ctx.r9.s64 - ctx.r8.s64;
	// subfe r7,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
	// b 0x82acec3c
	goto loc_82ACEC3C;
loc_82ACEC08:
	// lbz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// lbz r10,2(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82acec28
	if (cr6.eq) goto loc_82ACEC28;
	// subfc r11,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r7,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
	// b 0x82acec3c
	goto loc_82ACEC3C;
loc_82ACEC28:
	// lbz r11,3(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// lbz r10,3(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// subfc r7,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r7.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r5,31
	ctx.r11.u64 = ctx.r5.u32 & 0x1;
loc_82ACEC3C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82acec8c
	if (!cr6.eq) goto loc_82ACEC8C;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x82acec7c
	if (!cr6.eq) goto loc_82ACEC7C;
	// lbz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// lbz r10,2(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82acec68
	if (cr6.eq) goto loc_82ACEC68;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82acec7c
	goto loc_82ACEC7C;
loc_82ACEC68:
	// lbz r11,3(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// lbz r10,3(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r11,r8,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_82ACEC7C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_82ACEC8C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ACEC94"))) PPC_WEAK_FUNC(sub_82ACEC94);
PPC_FUNC_IMPL(__imp__sub_82ACEC94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ACEC98"))) PPC_WEAK_FUNC(sub_82ACEC98);
PPC_FUNC_IMPL(__imp__sub_82ACEC98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// bgt cr6,0x82acecf8
	if (cr6.gt) goto loc_82ACECF8;
	// lis r12,-32083
	ctx.r12.s64 = -2102591488;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-4928
	ctx.r12.s64 = ctx.r12.s64 + -4928;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82ACECF0;
	case 1:
		goto loc_82ACECF8;
	case 2:
		goto loc_82ACECE8;
	case 3:
		goto loc_82ACECF8;
	case 4:
		goto loc_82ACECE8;
	case 5:
		goto loc_82ACECF8;
	case 6:
		goto loc_82ACECF8;
	case 7:
		goto loc_82ACECE8;
	case 8:
		goto loc_82ACECF8;
	case 9:
		goto loc_82ACECE8;
	default:
		return;
	}
	// lwz r21,-4880(r12)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r12.u32 + -4880);
	// lwz r21,-4872(r12)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r12.u32 + -4872);
	// lwz r21,-4888(r12)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r12.u32 + -4888);
	// lwz r21,-4872(r12)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r12.u32 + -4872);
	// lwz r21,-4888(r12)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r12.u32 + -4888);
	// lwz r21,-4872(r12)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r12.u32 + -4872);
	// lwz r21,-4872(r12)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r12.u32 + -4872);
	// lwz r21,-4888(r12)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r12.u32 + -4888);
	// lwz r21,-4872(r12)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r12.u32 + -4872);
	// lwz r21,-4888(r12)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r12.u32 + -4888);
loc_82ACECE8:
	// li r3,30
	ctx.r3.s64 = 30;
	// blr 
	return;
loc_82ACECF0:
	// li r3,28
	ctx.r3.s64 = 28;
	// blr 
	return;
loc_82ACECF8:
	// li r3,31
	ctx.r3.s64 = 31;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ACED00"))) PPC_WEAK_FUNC(sub_82ACED00);
PPC_FUNC_IMPL(__imp__sub_82ACED00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// bgt cr6,0x82aced60
	if (cr6.gt) goto loc_82ACED60;
	// lis r12,-32083
	ctx.r12.s64 = -2102591488;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-4824
	ctx.r12.s64 = ctx.r12.s64 + -4824;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82ACED58;
	case 1:
		goto loc_82ACED60;
	case 2:
		goto loc_82ACED50;
	case 3:
		goto loc_82ACED60;
	case 4:
		goto loc_82ACED50;
	case 5:
		goto loc_82ACED60;
	case 6:
		goto loc_82ACED60;
	case 7:
		goto loc_82ACED50;
	case 8:
		goto loc_82ACED60;
	case 9:
		goto loc_82ACED50;
	default:
		return;
	}
	// lwz r21,-4776(r12)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r12.u32 + -4776);
	// lwz r21,-4768(r12)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r12.u32 + -4768);
	// lwz r21,-4784(r12)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r12.u32 + -4784);
	// lwz r21,-4768(r12)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r12.u32 + -4768);
	// lwz r21,-4784(r12)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r12.u32 + -4784);
	// lwz r21,-4768(r12)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r12.u32 + -4768);
	// lwz r21,-4768(r12)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r12.u32 + -4768);
	// lwz r21,-4784(r12)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r12.u32 + -4784);
	// lwz r21,-4768(r12)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r12.u32 + -4768);
	// lwz r21,-4784(r12)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r12.u32 + -4784);
loc_82ACED50:
	// li r11,30
	ctx.r11.s64 = 30;
	// b 0x82aced64
	goto loc_82ACED64;
loc_82ACED58:
	// li r11,28
	ctx.r11.s64 = 28;
	// b 0x82aced64
	goto loc_82ACED64;
loc_82ACED60:
	// li r11,31
	ctx.r11.s64 = 31;
loc_82ACED64:
	// lbz r10,3(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r3,r7,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ACED7C"))) PPC_WEAK_FUNC(sub_82ACED7C);
PPC_FUNC_IMPL(__imp__sub_82ACED7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ACED80"))) PPC_WEAK_FUNC(sub_82ACED80);
PPC_FUNC_IMPL(__imp__sub_82ACED80) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82c14930
	ctx.lr = 0x82ACEDA0;
	sub_82C14930(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lbz r6,188(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 188);
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// lwz r5,1532(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1532);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,-22848
	ctx.r8.s64 = ctx.r10.s64 + -22848;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r11,1536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1536, ctx.r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// lis r3,-32246
	ctx.r3.s64 = -2113273856;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r11,1540(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1540, ctx.r11.u8);
	// addi r3,r3,-23384
	ctx.r3.s64 = ctx.r3.s64 + -23384;
	// stb r11,1541(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1541, ctx.r11.u8);
	// bl 0x82c1ca80
	ctx.lr = 0x82ACEDE0;
	sub_82C1CA80(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ace958
	ctx.lr = 0x82ACEDEC;
	sub_82ACE958(ctx, base);
	// addi r4,r31,192
	ctx.r4.s64 = ctx.r31.s64 + 192;
	// addi r3,r30,96
	ctx.r3.s64 = ctx.r30.s64 + 96;
	// bl 0x82ace470
	ctx.lr = 0x82ACEDF8;
	sub_82ACE470(ctx, base);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d23788
	ctx.lr = 0x82ACEE08;
	sub_82D23788(ctx, base);
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

__attribute__((alias("__imp__sub_82ACEE24"))) PPC_WEAK_FUNC(sub_82ACEE24);
PPC_FUNC_IMPL(__imp__sub_82ACEE24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ACEE28"))) PPC_WEAK_FUNC(sub_82ACEE28);
PPC_FUNC_IMPL(__imp__sub_82ACEE28) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-22848
	ctx.r9.s64 = ctx.r11.s64 + -22848;
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
	// bl 0x82c146f0
	ctx.lr = 0x82ACEE60;
	sub_82C146F0(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82acee78
	if (cr6.eq) goto loc_82ACEE78;
	// bl 0x82416268
	ctx.lr = 0x82ACEE74;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82ACEE78:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ACEE90"))) PPC_WEAK_FUNC(sub_82ACEE90);
PPC_FUNC_IMPL(__imp__sub_82ACEE90) {
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
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r30,136(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d19788
	ctx.lr = 0x82ACEEB8;
	sub_82D19788(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82aceefc
	if (cr6.eq) goto loc_82ACEEFC;
	// lwz r11,1528(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1528);
	// li r10,144
	ctx.r10.s64 = 144;
	// lwz r9,1524(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1524);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw r7,r8,r10
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// ble cr6,0x82aceefc
	if (!cr6.gt) goto loc_82ACEEFC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,25
	ctx.r5.s64 = 1638400;
	// li r4,14
	ctx.r4.s64 = 14;
	// ori r5,r5,628
	ctx.r5.u64 = ctx.r5.u64 | 628;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82ACEEFC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82ACEEFC:
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

__attribute__((alias("__imp__sub_82ACEF18"))) PPC_WEAK_FUNC(sub_82ACEF18);
PPC_FUNC_IMPL(__imp__sub_82ACEF18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82ACEF20;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// lhz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,17144
	ctx.r11.s64 = ctx.r11.s64 + 17144;
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// beq cr6,0x82acef48
	if (cr6.eq) goto loc_82ACEF48;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82acef74
	goto loc_82ACEF74;
loc_82ACEF48:
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r9,2(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// beq cr6,0x82acef60
	if (cr6.eq) goto loc_82ACEF60;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82acef74
	goto loc_82ACEF74;
loc_82ACEF60:
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r10,3(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r11,r7,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
loc_82ACEF74:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82acf00c
	if (!cr6.eq) goto loc_82ACF00C;
	// lhz r30,0(r4)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// li r28,1
	ctx.r28.s64 = 1;
loc_82ACEF88:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82acec98
	ctx.lr = 0x82ACEF94;
	sub_82ACEC98(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, xer);
	// blt cr6,0x82acefac
	if (cr6.lt) goto loc_82ACEFAC;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82ACEFAC:
	// add r10,r29,r11
	ctx.r10.u64 = ctx.r29.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r10,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r10.u8);
	// subf r30,r11,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r11.s64;
	// bl 0x82aced00
	ctx.lr = 0x82ACEFC0;
	sub_82ACED00(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82acf004
	if (cr6.eq) goto loc_82ACF004;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq cr6,0x82acf00c
	if (cr6.eq) goto loc_82ACF00C;
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// stb r28,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r28.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// stb r10,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r10.u8);
	// cmplwi cr6,r10,12
	cr6.compare<uint32_t>(ctx.r10.u32, 12, xer);
	// ble cr6,0x82acf004
	if (!cr6.gt) goto loc_82ACF004;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// stb r28,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r28.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
loc_82ACF004:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bgt cr6,0x82acef88
	if (cr6.gt) goto loc_82ACEF88;
loc_82ACF00C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ACF018"))) PPC_WEAK_FUNC(sub_82ACF018);
PPC_FUNC_IMPL(__imp__sub_82ACF018) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82ACF020;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// lhz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplw cr6,r7,r6
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, xer);
	// beq cr6,0x82acf03c
	if (cr6.eq) goto loc_82ACF03C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82acf068
	goto loc_82ACF068;
loc_82ACF03C:
	// lbz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// lbz r10,2(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82acf054
	if (cr6.eq) goto loc_82ACF054;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82acf068
	goto loc_82ACF068;
loc_82ACF054:
	// lbz r11,3(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// lbz r10,3(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r11,r8,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_82ACF068:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82acf26c
	if (!cr6.eq) goto loc_82ACF26C;
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// addi r8,r11,17144
	ctx.r8.s64 = ctx.r11.s64 + 17144;
	// lhz r10,17144(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 17144);
	// lbz r9,3(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 3);
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// lbz r8,2(r8)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + 2);
	// beq cr6,0x82acf098
	if (cr6.eq) goto loc_82ACF098;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82acf0c4
	goto loc_82ACF0C4;
loc_82ACF098:
	// lbz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// clrlwi r5,r8,24
	ctx.r5.u64 = ctx.r8.u32 & 0xFF;
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, xer);
	// beq cr6,0x82acf0b0
	if (cr6.eq) goto loc_82ACF0B0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82acf0c4
	goto loc_82ACF0C4;
loc_82ACF0B0:
	// lbz r11,3(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// clrlwi r5,r9,24
	ctx.r5.u64 = ctx.r9.u32 & 0xFF;
	// subf r11,r11,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r11.s64;
	// cntlzw r5,r11
	ctx.r5.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r5,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
loc_82ACF0C4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82acf26c
	if (!cr6.eq) goto loc_82ACF26C;
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// bne cr6,0x82acf104
	if (!cr6.eq) goto loc_82ACF104;
	// lbz r11,2(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82acf0f0
	if (cr6.eq) goto loc_82ACF0F0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82acf104
	goto loc_82ACF104;
loc_82ACF0F0:
	// lbz r11,3(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r11,r8,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_82ACF104:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82acf26c
	if (!cr6.eq) goto loc_82ACF26C;
	// cmplw cr6,r7,r6
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, xer);
	// beq cr6,0x82acf128
	if (cr6.eq) goto loc_82ACF128;
	// subfc r11,r6,r7
	xer.ca = ctx.r7.u32 >= ctx.r6.u32;
	ctx.r11.s64 = ctx.r7.s64 - ctx.r6.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	// b 0x82acf15c
	goto loc_82ACF15C;
loc_82ACF128:
	// lbz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// lbz r10,2(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82acf148
	if (cr6.eq) goto loc_82ACF148;
	// subfc r11,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	// b 0x82acf15c
	goto loc_82ACF15C;
loc_82ACF148:
	// lbz r11,3(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// lbz r10,3(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// subfc r9,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r5,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r5,31
	ctx.r11.u64 = ctx.r5.u32 & 0x1;
loc_82ACF15C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// bne cr6,0x82acf170
	if (!cr6.eq) goto loc_82ACF170;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82ACF170:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r6
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, xer);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// beq cr6,0x82acf190
	if (cr6.eq) goto loc_82ACF190;
	// subfc r11,r7,r6
	xer.ca = ctx.r6.u32 >= ctx.r7.u32;
	ctx.r11.s64 = ctx.r6.s64 - ctx.r7.s64;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r8,31
	ctx.r11.u64 = ctx.r8.u32 & 0x1;
	// b 0x82acf1c4
	goto loc_82ACF1C4;
loc_82ACF190:
	// lbz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// lbz r10,2(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82acf1b0
	if (cr6.eq) goto loc_82ACF1B0;
	// subfc r11,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r8,31
	ctx.r11.u64 = ctx.r8.u32 & 0x1;
	// b 0x82acf1c4
	goto loc_82ACF1C4;
loc_82ACF1B0:
	// lbz r11,3(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// lbz r10,3(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// subfc r8,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
loc_82ACF1C4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// bne cr6,0x82acf1d8
	if (!cr6.eq) goto loc_82ACF1D8;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82ACF1D8:
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,1
	ctx.r28.s64 = 1;
	// rlwinm r30,r31,16,16,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 16) & 0xFFFF;
loc_82ACF1E8:
	// rlwinm r11,r9,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// beq cr6,0x82acf204
	if (cr6.eq) goto loc_82ACF204;
	// subfc r11,r30,r11
	xer.ca = ctx.r11.u32 >= ctx.r30.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	// b 0x82acf238
	goto loc_82ACF238;
loc_82ACF204:
	// rlwinm r11,r31,24,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 24) & 0xFF;
	// rlwinm r10,r9,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x82acf224
	if (cr6.eq) goto loc_82ACF224;
	// subfc r11,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	// b 0x82acf238
	goto loc_82ACF238;
loc_82ACF224:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// subfc r9,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
loc_82ACF238:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82acf260
	if (cr6.eq) goto loc_82ACF260;
	// sth r28,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r28.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82acef18
	ctx.lr = 0x82ACF254;
	sub_82ACEF18(ctx, base);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// b 0x82acf1e8
	goto loc_82ACF1E8;
loc_82ACF260:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82ACF26C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82ACF278"))) PPC_WEAK_FUNC(sub_82ACF278);
PPC_FUNC_IMPL(__imp__sub_82ACF278) {
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
	// blt cr6,0x82acf2a0
	if (cr6.lt) goto loc_82ACF2A0;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82acf2a4
	goto loc_82ACF2A4;
loc_82ACF2A0:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82ACF2A4:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,3240
	ctx.r4.s64 = 3240;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82ACF2C0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82acf2d8
	if (cr6.eq) goto loc_82ACF2D8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82aced80
	ctx.lr = 0x82ACF2D4;
	sub_82ACED80(ctx, base);
	// b 0x82acf2dc
	goto loc_82ACF2DC;
loc_82ACF2D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82ACF2DC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82ACF2F4"))) PPC_WEAK_FUNC(sub_82ACF2F4);
PPC_FUNC_IMPL(__imp__sub_82ACF2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82ACF2F8"))) PPC_WEAK_FUNC(sub_82ACF2F8);
PPC_FUNC_IMPL(__imp__sub_82ACF2F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x82ACF300;
	__savegprlr_14(ctx, base);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,641
	ctx.r10.s64 = 42008576;
	// addi r29,r11,-23446
	ctx.r29.s64 = ctx.r11.s64 + -23446;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// ori r3,r10,88
	ctx.r3.u64 = ctx.r10.u64 | 88;
	// li r4,67
	ctx.r4.s64 = 67;
	// addi r11,r29,78
	ctx.r11.s64 = ctx.r29.s64 + 78;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// addi r10,r29,98
	ctx.r10.s64 = ctx.r29.s64 + 98;
	// stw r4,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// lis r9,25
	ctx.r9.s64 = 1638400;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r3,r29,130
	ctx.r3.s64 = ctx.r29.s64 + 130;
	// stw r10,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r10.u32);
	// ori r10,r9,622
	ctx.r10.u64 = ctx.r9.u64 | 622;
	// lis r7,930
	ctx.r7.s64 = 60948480;
	// stw r3,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r3.u32);
	// addi r4,r29,114
	ctx.r4.s64 = ctx.r29.s64 + 114;
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// li r11,68
	ctx.r11.s64 = 68;
	// lis r8,930
	ctx.r8.s64 = 60948480;
	// stw r4,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r4.u32);
	// lis r6,930
	ctx.r6.s64 = 60948480;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// lis r5,26
	ctx.r5.s64 = 1703936;
	// ori r3,r7,96
	ctx.r3.u64 = ctx.r7.u64 | 96;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r3,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r3.u32);
	// li r9,69
	ctx.r9.s64 = 69;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// ori r8,r8,48
	ctx.r8.u64 = ctx.r8.u64 | 48;
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// li r4,70
	ctx.r4.s64 = 70;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// li r7,71
	ctx.r7.s64 = 71;
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// addi r11,r29,146
	ctx.r11.s64 = ctx.r29.s64 + 146;
	// stb r31,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r31.u8);
	// addi r10,r29,162
	ctx.r10.s64 = ctx.r29.s64 + 162;
	// stb r30,141(r1)
	PPC_STORE_U8(ctx.r1.u32 + 141, ctx.r30.u8);
	// ori r6,r6,97
	ctx.r6.u64 = ctx.r6.u64 | 97;
	// stw r30,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r30.u32);
	// li r28,72
	ctx.r28.s64 = 72;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// ori r5,r5,564
	ctx.r5.u64 = ctx.r5.u64 | 564;
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// addi r27,r26,1544
	ctx.r27.s64 = ctx.r26.s64 + 1544;
	// stb r31,172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 172, ctx.r31.u8);
	// stb r30,173(r1)
	PPC_STORE_U8(ctx.r1.u32 + 173, ctx.r30.u8);
	// stw r9,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r9.u32);
	// stw r8,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r8.u32);
	// stw r30,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r30.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r31.u32);
	// stw r31,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r31.u32);
	// stb r31,204(r1)
	PPC_STORE_U8(ctx.r1.u32 + 204, ctx.r31.u8);
	// stb r30,205(r1)
	PPC_STORE_U8(ctx.r1.u32 + 205, ctx.r30.u8);
	// stw r4,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r4.u32);
	// stw r30,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r30.u32);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// stw r31,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r31.u32);
	// stw r31,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r31.u32);
	// stb r31,236(r1)
	PPC_STORE_U8(ctx.r1.u32 + 236, ctx.r31.u8);
	// stb r30,237(r1)
	PPC_STORE_U8(ctx.r1.u32 + 237, ctx.r30.u8);
	// stw r7,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r7.u32);
	// stw r6,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r6.u32);
	// stw r11,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r11.u32);
	// stw r30,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r30.u32);
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// stw r31,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r31.u32);
	// stw r31,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r31.u32);
	// stb r31,268(r1)
	PPC_STORE_U8(ctx.r1.u32 + 268, ctx.r31.u8);
	// stb r30,269(r1)
	PPC_STORE_U8(ctx.r1.u32 + 269, ctx.r30.u8);
	// stw r28,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r28.u32);
	// stw r5,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r5.u32);
	// stw r30,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r30.u32);
	// stw r10,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r10.u32);
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r31.u32);
	// stw r31,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r31.u32);
	// stw r31,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r31.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stb r31,300(r1)
	PPC_STORE_U8(ctx.r1.u32 + 300, ctx.r31.u8);
	// li r5,192
	ctx.r5.s64 = 192;
	// stb r30,301(r1)
	PPC_STORE_U8(ctx.r1.u32 + 301, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831ce980
	ctx.lr = 0x82ACF464;
	sub_831CE980(ctx, base);
	// lis r3,25
	ctx.r3.s64 = 1638400;
	// addi r10,r29,182
	ctx.r10.s64 = ctx.r29.s64 + 182;
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// addi r9,r29,198
	ctx.r9.s64 = ctx.r29.s64 + 198;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// lis r4,26
	ctx.r4.s64 = 1703936;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// lis r11,641
	ctx.r11.s64 = 42008576;
	// stw r9,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r9.u32);
	// ori r5,r3,133
	ctx.r5.u64 = ctx.r3.u64 | 133;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// ori r7,r4,552
	ctx.r7.u64 = ctx.r4.u64 | 552;
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// li r8,74
	ctx.r8.s64 = 74;
	// stw r5,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// li r6,76
	ctx.r6.s64 = 76;
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// addi r3,r29,210
	ctx.r3.s64 = ctx.r29.s64 + 210;
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// li r10,77
	ctx.r10.s64 = 77;
	// stb r31,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r31.u8);
	// ori r9,r11,157
	ctx.r9.u64 = ctx.r11.u64 | 157;
	// stw r3,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r3.u32);
	// stb r30,141(r1)
	PPC_STORE_U8(ctx.r1.u32 + 141, ctx.r30.u8);
	// addi r22,r26,1736
	ctx.r22.s64 = ctx.r26.s64 + 1736;
	// stw r6,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r6.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r30,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r30.u32);
	// li r5,96
	ctx.r5.s64 = 96;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// stb r31,172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 172, ctx.r31.u8);
	// stb r30,173(r1)
	PPC_STORE_U8(ctx.r1.u32 + 173, ctx.r30.u8);
	// stw r10,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// stw r9,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r9.u32);
	// stw r30,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r30.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r31.u32);
	// stw r31,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r31.u32);
	// stb r31,204(r1)
	PPC_STORE_U8(ctx.r1.u32 + 204, ctx.r31.u8);
	// stb r30,205(r1)
	PPC_STORE_U8(ctx.r1.u32 + 205, ctx.r30.u8);
	// bl 0x831ce980
	ctx.lr = 0x82ACF514;
	sub_831CE980(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// lis r8,108
	ctx.r8.s64 = 7077888;
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// addi r20,r26,1832
	ctx.r20.s64 = ctx.r26.s64 + 1832;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// addi r7,r29,226
	ctx.r7.s64 = ctx.r29.s64 + 226;
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// li r6,10
	ctx.r6.s64 = 10;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// ori r5,r8,140
	ctx.r5.u64 = ctx.r8.u64 | 140;
	// stw r7,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
	// stw r6,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// stw r5,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
	// addi r10,r20,-4
	ctx.r10.s64 = ctx.r20.s64 + -4;
	// stb r31,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r31.u8);
	// stb r30,141(r1)
	PPC_STORE_U8(ctx.r1.u32 + 141, ctx.r30.u8);
loc_82ACF560:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82acf560
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82ACF560;
	// lis r11,25
	ctx.r11.s64 = 1638400;
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// lis r10,25
	ctx.r10.s64 = 1638400;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// ori r7,r11,115
	ctx.r7.u64 = ctx.r11.u64 | 115;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// addi r9,r29,238
	ctx.r9.s64 = ctx.r29.s64 + 238;
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// addi r8,r29,246
	ctx.r8.s64 = ctx.r29.s64 + 246;
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// li r5,11
	ctx.r5.s64 = 11;
	// stw r8,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r8.u32);
	// ori r11,r10,252
	ctx.r11.u64 = ctx.r10.u64 | 252;
	// stw r6,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// stw r5,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r5.u32);
	// addi r3,r26,1864
	ctx.r3.s64 = ctx.r26.s64 + 1864;
	// stb r31,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r31.u8);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stb r30,141(r1)
	PPC_STORE_U8(ctx.r1.u32 + 141, ctx.r30.u8);
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// stw r30,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r30.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// stb r31,172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 172, ctx.r31.u8);
	// stb r30,173(r1)
	PPC_STORE_U8(ctx.r1.u32 + 173, ctx.r30.u8);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// bl 0x831ce980
	ctx.lr = 0x82ACF5E8;
	sub_831CE980(ctx, base);
	// li r10,8
	ctx.r10.s64 = 8;
	// lis r8,25
	ctx.r8.s64 = 1638400;
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// addi r11,r26,1928
	ctx.r11.s64 = ctx.r26.s64 + 1928;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// addi r7,r29,258
	ctx.r7.s64 = ctx.r29.s64 + 258;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r6,12
	ctx.r6.s64 = 12;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// ori r5,r8,41
	ctx.r5.u64 = ctx.r8.u64 | 41;
	// stw r7,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
	// stw r6,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// stw r5,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// stb r31,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r31.u8);
	// stb r30,141(r1)
	PPC_STORE_U8(ctx.r1.u32 + 141, ctx.r30.u8);
loc_82ACF638:
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82acf638
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82ACF638;
	// addi r6,r29,270
	ctx.r6.s64 = ctx.r29.s64 + 270;
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// addi r3,r29,302
	ctx.r3.s64 = ctx.r29.s64 + 302;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stw r6,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r6.u32);
	// lis r10,930
	ctx.r10.s64 = 60948480;
	// addi r5,r29,278
	ctx.r5.s64 = ctx.r29.s64 + 278;
	// stw r3,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r3.u32);
	// lis r11,641
	ctx.r11.s64 = 42008576;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// lis r9,641
	ctx.r9.s64 = 42008576;
	// stw r5,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r5.u32);
	// addi r4,r29,290
	ctx.r4.s64 = ctx.r29.s64 + 290;
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// li r6,86
	ctx.r6.s64 = 86;
	// stb r31,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r31.u8);
	// lis r8,641
	ctx.r8.s64 = 42008576;
	// stw r4,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r4.u32);
	// lis r7,29
	ctx.r7.s64 = 1900544;
	// stw r6,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// ori r3,r10,9
	ctx.r3.u64 = ctx.r10.u64 | 9;
	// stb r30,141(r1)
	PPC_STORE_U8(ctx.r1.u32 + 141, ctx.r30.u8);
	// ori r5,r11,145
	ctx.r5.u64 = ctx.r11.u64 | 145;
	// stw r30,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r30.u32);
	// ori r10,r9,274
	ctx.r10.u64 = ctx.r9.u64 | 274;
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r5,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
	// li r11,18
	ctx.r11.s64 = 18;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// li r9,19
	ctx.r9.s64 = 19;
	// stw r4,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r4.u32);
	// ori r8,r8,275
	ctx.r8.u64 = ctx.r8.u64 | 275;
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// li r6,87
	ctx.r6.s64 = 87;
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// ori r7,r7,347
	ctx.r7.u64 = ctx.r7.u64 | 347;
	// stb r31,172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 172, ctx.r31.u8);
	// addi r28,r29,310
	ctx.r28.s64 = ctx.r29.s64 + 310;
	// stb r30,173(r1)
	PPC_STORE_U8(ctx.r1.u32 + 173, ctx.r30.u8);
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// addi r25,r26,1960
	ctx.r25.s64 = ctx.r26.s64 + 1960;
	// stw r10,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r30,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r30.u32);
	// li r5,160
	ctx.r5.s64 = 160;
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r31.u32);
	// stw r31,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r31.u32);
	// stb r31,204(r1)
	PPC_STORE_U8(ctx.r1.u32 + 204, ctx.r31.u8);
	// stb r30,205(r1)
	PPC_STORE_U8(ctx.r1.u32 + 205, ctx.r30.u8);
	// stw r9,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r9.u32);
	// stw r8,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r8.u32);
	// stw r30,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r30.u32);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// stw r31,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r31.u32);
	// stw r31,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r31.u32);
	// stb r31,236(r1)
	PPC_STORE_U8(ctx.r1.u32 + 236, ctx.r31.u8);
	// stb r30,237(r1)
	PPC_STORE_U8(ctx.r1.u32 + 237, ctx.r30.u8);
	// stw r6,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r6.u32);
	// stw r7,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r7.u32);
	// stw r30,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r30.u32);
	// stw r28,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r28.u32);
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// stw r31,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r31.u32);
	// stw r31,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r31.u32);
	// stb r31,268(r1)
	PPC_STORE_U8(ctx.r1.u32 + 268, ctx.r31.u8);
	// stb r30,269(r1)
	PPC_STORE_U8(ctx.r1.u32 + 269, ctx.r30.u8);
	// bl 0x831ce980
	ctx.lr = 0x82ACF75C;
	sub_831CE980(ctx, base);
	// lis r3,641
	ctx.r3.s64 = 42008576;
	// addi r6,r29,322
	ctx.r6.s64 = ctx.r29.s64 + 322;
	// addi r5,r29,334
	ctx.r5.s64 = ctx.r29.s64 + 334;
	// li r4,91
	ctx.r4.s64 = 91;
	// stw r6,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r6.u32);
	// ori r11,r3,150
	ctx.r11.u64 = ctx.r3.u64 | 150;
	// stw r5,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r5.u32);
	// stw r4,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// lis r10,641
	ctx.r10.s64 = 42008576;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r9,96
	ctx.r9.s64 = 96;
	// ori r8,r10,271
	ctx.r8.u64 = ctx.r10.u64 | 271;
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// addi r24,r26,2120
	ctx.r24.s64 = ctx.r26.s64 + 2120;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// stb r31,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r31.u8);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stb r30,141(r1)
	PPC_STORE_U8(ctx.r1.u32 + 141, ctx.r30.u8);
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// stw r8,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r8.u32);
	// stw r30,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r30.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// stb r31,172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 172, ctx.r31.u8);
	// stb r30,173(r1)
	PPC_STORE_U8(ctx.r1.u32 + 173, ctx.r30.u8);
	// bl 0x831ce980
	ctx.lr = 0x82ACF7D8;
	sub_831CE980(ctx, base);
	// li r11,35
	ctx.r11.s64 = 35;
	// lis r6,16
	ctx.r6.s64 = 1048576;
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// lis r7,25
	ctx.r7.s64 = 1638400;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lis r4,26
	ctx.r4.s64 = 1703936;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// ori r11,r6,37
	ctx.r11.u64 = ctx.r6.u64 | 37;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// addi r3,r29,342
	ctx.r3.s64 = ctx.r29.s64 + 342;
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// addi r9,r29,354
	ctx.r9.s64 = ctx.r29.s64 + 354;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// ori r10,r7,410
	ctx.r10.u64 = ctx.r7.u64 | 410;
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// ori r6,r4,307
	ctx.r6.u64 = ctx.r4.u64 | 307;
	// stw r9,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r9.u32);
	// lis r5,26
	ctx.r5.s64 = 1703936;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// addi r8,r29,366
	ctx.r8.s64 = ctx.r29.s64 + 366;
	// stb r31,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r31.u8);
	// lis r4,509
	ctx.r4.s64 = 33357824;
	// stb r30,141(r1)
	PPC_STORE_U8(ctx.r1.u32 + 141, ctx.r30.u8);
	// li r3,15
	ctx.r3.s64 = 15;
	// stw r8,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r8.u32);
	// ori r9,r5,556
	ctx.r9.u64 = ctx.r5.u64 | 556;
	// stw r30,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r30.u32);
	// ori r11,r4,152
	ctx.r11.u64 = ctx.r4.u64 | 152;
	// stw r3,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
	// addi r7,r29,382
	ctx.r7.s64 = ctx.r29.s64 + 382;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// li r10,62
	ctx.r10.s64 = 62;
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// li r8,39
	ctx.r8.s64 = 39;
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// stb r31,172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 172, ctx.r31.u8);
	// addi r3,r29,394
	ctx.r3.s64 = ctx.r29.s64 + 394;
	// stb r30,173(r1)
	PPC_STORE_U8(ctx.r1.u32 + 173, ctx.r30.u8);
	// stw r10,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// addi r23,r26,2184
	ctx.r23.s64 = ctx.r26.s64 + 2184;
	// stw r9,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r9.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r30,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r30.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r31.u32);
	// stw r31,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r31.u32);
	// stb r31,204(r1)
	PPC_STORE_U8(ctx.r1.u32 + 204, ctx.r31.u8);
	// stb r30,205(r1)
	PPC_STORE_U8(ctx.r1.u32 + 205, ctx.r30.u8);
	// stw r8,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r8.u32);
	// stw r6,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r6.u32);
	// stw r30,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r30.u32);
	// stw r7,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r7.u32);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// stw r31,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r31.u32);
	// stw r31,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r31.u32);
	// stb r31,236(r1)
	PPC_STORE_U8(ctx.r1.u32 + 236, ctx.r31.u8);
	// stb r30,237(r1)
	PPC_STORE_U8(ctx.r1.u32 + 237, ctx.r30.u8);
	// stw r5,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r5.u32);
	// stw r11,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r11.u32);
	// stw r30,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r30.u32);
	// stw r3,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r3.u32);
	// li r5,160
	ctx.r5.s64 = 160;
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r31,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r31.u32);
	// stw r31,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r31.u32);
	// stb r31,268(r1)
	PPC_STORE_U8(ctx.r1.u32 + 268, ctx.r31.u8);
	// stb r30,269(r1)
	PPC_STORE_U8(ctx.r1.u32 + 269, ctx.r30.u8);
	// bl 0x831ce980
	ctx.lr = 0x82ACF8F0;
	sub_831CE980(ctx, base);
	// lis r10,75
	ctx.r10.s64 = 4915200;
	// lis r9,26
	ctx.r9.s64 = 1703936;
	// stw r22,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r22.u32);
	// ori r5,r10,21
	ctx.r5.u64 = ctx.r10.u64 | 21;
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// ori r10,r9,18
	ctx.r10.u64 = ctx.r9.u64 | 18;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// lis r8,600
	ctx.r8.s64 = 39321600;
	// stw r5,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
	// li r6,49
	ctx.r6.s64 = 49;
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// addi r4,r29,406
	ctx.r4.s64 = ctx.r29.s64 + 406;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// addi r3,r29,418
	ctx.r3.s64 = ctx.r29.s64 + 418;
	// stw r6,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// li r11,50
	ctx.r11.s64 = 50;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// li r9,26
	ctx.r9.s64 = 26;
	// stw r3,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r3.u32);
	// lis r7,26
	ctx.r7.s64 = 1703936;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// ori r10,r8,2
	ctx.r10.u64 = ctx.r8.u64 | 2;
	// stw r9,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r9.u32);
	// li r28,2
	ctx.r28.s64 = 2;
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// lis r6,26
	ctx.r6.s64 = 1703936;
	// stb r31,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r31.u8);
	// addi r5,r29,430
	ctx.r5.s64 = ctx.r29.s64 + 430;
	// stb r30,141(r1)
	PPC_STORE_U8(ctx.r1.u32 + 141, ctx.r30.u8);
	// addi r4,r29,-199
	ctx.r4.s64 = ctx.r29.s64 + -199;
	// stw r30,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r30.u32);
	// addi r3,r29,-168
	ctx.r3.s64 = ctx.r29.s64 + -168;
	// stw r5,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r5.u32);
	// li r11,78
	ctx.r11.s64 = 78;
	// stw r4,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r4.u32);
	// li r8,120
	ctx.r8.s64 = 120;
	// stw r3,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r3.u32);
	// ori r7,r7,70
	ctx.r7.u64 = ctx.r7.u64 | 70;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// li r14,6
	ctx.r14.s64 = 6;
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// stb r31,172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 172, ctx.r31.u8);
	// addi r22,r26,2344
	ctx.r22.s64 = ctx.r26.s64 + 2344;
	// stb r30,173(r1)
	PPC_STORE_U8(ctx.r1.u32 + 173, ctx.r30.u8);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r6,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r6.u32);
	// li r5,160
	ctx.r5.s64 = 160;
	// stw r30,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r30.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r31.u32);
	// stw r31,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r31.u32);
	// stb r31,204(r1)
	PPC_STORE_U8(ctx.r1.u32 + 204, ctx.r31.u8);
	// stb r30,205(r1)
	PPC_STORE_U8(ctx.r1.u32 + 205, ctx.r30.u8);
	// stw r11,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
	// stw r10,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r10.u32);
	// stw r28,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r28.u32);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// stw r27,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r27.u32);
	// stw r14,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r14.u32);
	// stb r31,236(r1)
	PPC_STORE_U8(ctx.r1.u32 + 236, ctx.r31.u8);
	// stb r30,237(r1)
	PPC_STORE_U8(ctx.r1.u32 + 237, ctx.r30.u8);
	// stw r8,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r8.u32);
	// stw r7,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r7.u32);
	// stw r28,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r28.u32);
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// stw r9,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r9.u32);
	// stb r31,268(r1)
	PPC_STORE_U8(ctx.r1.u32 + 268, ctx.r31.u8);
	// stb r30,269(r1)
	PPC_STORE_U8(ctx.r1.u32 + 269, ctx.r30.u8);
	// bl 0x831ce980
	ctx.lr = 0x82ACFA10;
	sub_831CE980(ctx, base);
	// addi r11,r29,446
	ctx.r11.s64 = ctx.r29.s64 + 446;
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// addi r10,r29,458
	ctx.r10.s64 = ctx.r29.s64 + 458;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// addi r9,r29,470
	ctx.r9.s64 = ctx.r29.s64 + 470;
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// lis r8,109
	ctx.r8.s64 = 7143424;
	// stw r10,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r10.u32);
	// lis r7,3
	ctx.r7.s64 = 196608;
	// stw r9,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r9.u32);
	// ori r11,r8,5
	ctx.r11.u64 = ctx.r8.u64 | 5;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// ori r9,r7,2
	ctx.r9.u64 = ctx.r7.u64 | 2;
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// lis r6,641
	ctx.r6.s64 = 42008576;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r29,438
	ctx.r3.s64 = ctx.r29.s64 + 438;
	// stw r9,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
	// li r10,54
	ctx.r10.s64 = 54;
	// stb r31,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r31.u8);
	// lis r5,2
	ctx.r5.s64 = 131072;
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// lis r4,641
	ctx.r4.s64 = 42008576;
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// ori r7,r6,35
	ctx.r7.u64 = ctx.r6.u64 | 35;
	// stb r30,141(r1)
	PPC_STORE_U8(ctx.r1.u32 + 141, ctx.r30.u8);
	// ori r11,r5,141
	ctx.r11.u64 = ctx.r5.u64 | 141;
	// stw r30,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r30.u32);
	// ori r27,r4,3
	ctx.r27.u64 = ctx.r4.u64 | 3;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// li r3,53
	ctx.r3.s64 = 53;
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// li r8,93
	ctx.r8.s64 = 93;
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// li r6,56
	ctx.r6.s64 = 56;
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// addi r10,r29,482
	ctx.r10.s64 = ctx.r29.s64 + 482;
	// stb r31,172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 172, ctx.r31.u8);
	// li r9,97
	ctx.r9.s64 = 97;
	// stb r30,173(r1)
	PPC_STORE_U8(ctx.r1.u32 + 173, ctx.r30.u8);
	// stw r8,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r8.u32);
	// addi r21,r26,2504
	ctx.r21.s64 = ctx.r26.s64 + 2504;
	// stw r7,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r7.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r30,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r30.u32);
	// li r5,160
	ctx.r5.s64 = 160;
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r31.u32);
	// stw r31,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r31.u32);
	// stb r31,204(r1)
	PPC_STORE_U8(ctx.r1.u32 + 204, ctx.r31.u8);
	// stb r30,205(r1)
	PPC_STORE_U8(ctx.r1.u32 + 205, ctx.r30.u8);
	// stw r6,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r6.u32);
	// stw r11,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r11.u32);
	// stw r30,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r30.u32);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// stw r31,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r31.u32);
	// stw r31,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r31.u32);
	// stb r31,236(r1)
	PPC_STORE_U8(ctx.r1.u32 + 236, ctx.r31.u8);
	// stb r30,237(r1)
	PPC_STORE_U8(ctx.r1.u32 + 237, ctx.r30.u8);
	// stw r10,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r10.u32);
	// stw r9,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r9.u32);
	// stw r27,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r27.u32);
	// stw r30,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r30.u32);
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// stw r31,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r31.u32);
	// stw r31,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r31.u32);
	// stb r31,268(r1)
	PPC_STORE_U8(ctx.r1.u32 + 268, ctx.r31.u8);
	// stb r30,269(r1)
	PPC_STORE_U8(ctx.r1.u32 + 269, ctx.r30.u8);
	// bl 0x831ce980
	ctx.lr = 0x82ACFB28;
	sub_831CE980(ctx, base);
	// lis r8,25
	ctx.r8.s64 = 1638400;
	// li r27,5
	ctx.r27.s64 = 5;
	// stw r20,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r20.u32);
	// ori r15,r8,582
	ctx.r15.u64 = ctx.r8.u64 | 582;
	// stw r25,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r25.u32);
	// lis r7,60
	ctx.r7.s64 = 3932160;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// lis r6,29
	ctx.r6.s64 = 1900544;
	// lis r5,26
	ctx.r5.s64 = 1703936;
	// lis r4,26
	ctx.r4.s64 = 1703936;
	// lis r3,26
	ctx.r3.s64 = 1703936;
	// addi r11,r29,-167
	ctx.r11.s64 = ctx.r29.s64 + -167;
	// stw r15,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r15.u32);
	// addi r10,r29,-137
	ctx.r10.s64 = ctx.r29.s64 + -137;
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// addi r9,r29,-136
	ctx.r9.s64 = ctx.r29.s64 + -136;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// ori r16,r7,81
	ctx.r16.u64 = ctx.r7.u64 | 81;
	// stw r10,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r10.u32);
	// ori r17,r6,33
	ctx.r17.u64 = ctx.r6.u64 | 33;
	// stw r9,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r9.u32);
	// ori r18,r5,555
	ctx.r18.u64 = ctx.r5.u64 | 555;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// ori r19,r4,557
	ctx.r19.u64 = ctx.r4.u64 | 557;
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// ori r20,r3,520
	ctx.r20.u64 = ctx.r3.u64 | 520;
	// stb r31,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r31.u8);
	// li r8,95
	ctx.r8.s64 = 95;
	// stb r30,141(r1)
	PPC_STORE_U8(ctx.r1.u32 + 141, ctx.r30.u8);
	// addi r7,r29,-135
	ctx.r7.s64 = ctx.r29.s64 + -135;
	// stw r16,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r16.u32);
	// addi r6,r29,-117
	ctx.r6.s64 = ctx.r29.s64 + -117;
	// stw r8,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r8.u32);
	// addi r11,r29,-116
	ctx.r11.s64 = ctx.r29.s64 + -116;
	// stw r28,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r28.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// li r9,7
	ctx.r9.s64 = 7;
	// stw r27,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r27.u32);
	// stb r31,172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 172, ctx.r31.u8);
	// addi r3,r26,2664
	ctx.r3.s64 = ctx.r26.s64 + 2664;
	// stb r30,173(r1)
	PPC_STORE_U8(ctx.r1.u32 + 173, ctx.r30.u8);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r27,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r27.u32);
	// li r5,192
	ctx.r5.s64 = 192;
	// stw r17,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r17.u32);
	// stw r28,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r28.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stw r24,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r24.u32);
	// stw r28,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r28.u32);
	// stb r31,204(r1)
	PPC_STORE_U8(ctx.r1.u32 + 204, ctx.r31.u8);
	// stw r7,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r7.u32);
	// stw r23,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r23.u32);
	// stb r30,205(r1)
	PPC_STORE_U8(ctx.r1.u32 + 205, ctx.r30.u8);
	// stw r10,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r10.u32);
	// stw r18,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r18.u32);
	// stw r28,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r28.u32);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// stw r27,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r27.u32);
	// stb r31,236(r1)
	PPC_STORE_U8(ctx.r1.u32 + 236, ctx.r31.u8);
	// stb r30,237(r1)
	PPC_STORE_U8(ctx.r1.u32 + 237, ctx.r30.u8);
	// stw r14,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r14.u32);
	// stw r19,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r19.u32);
	// stw r28,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r28.u32);
	// stw r6,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r6.u32);
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// stw r22,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r22.u32);
	// stw r27,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r27.u32);
	// stb r31,268(r1)
	PPC_STORE_U8(ctx.r1.u32 + 268, ctx.r31.u8);
	// stb r30,269(r1)
	PPC_STORE_U8(ctx.r1.u32 + 269, ctx.r30.u8);
	// stw r9,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r9.u32);
	// stw r20,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r20.u32);
	// stw r28,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r28.u32);
	// stw r11,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r11.u32);
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r31.u32);
	// stw r21,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r21.u32);
	// stw r27,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r27.u32);
	// stb r31,300(r1)
	PPC_STORE_U8(ctx.r1.u32 + 300, ctx.r31.u8);
	// stb r30,301(r1)
	PPC_STORE_U8(ctx.r1.u32 + 301, ctx.r30.u8);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// bl 0x831ce980
	ctx.lr = 0x82ACFC6C;
	sub_831CE980(ctx, base);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r7,r29,-115
	ctx.r7.s64 = ctx.r29.s64 + -115;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// addi r6,r29,-45
	ctx.r6.s64 = ctx.r29.s64 + -45;
	// stw r15,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r15.u32);
	// addi r11,r29,-44
	ctx.r11.s64 = ctx.r29.s64 + -44;
	// stw r7,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
	// addi r10,r29,-43
	ctx.r10.s64 = ctx.r29.s64 + -43;
	// stw r8,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r8.u32);
	// addi r9,r29,-33
	ctx.r9.s64 = ctx.r29.s64 + -33;
	// addi r8,r29,-32
	ctx.r8.s64 = ctx.r29.s64 + -32;
	// li r5,3
	ctx.r5.s64 = 3;
	// stw r6,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r6.u32);
	// li r4,7
	ctx.r4.s64 = 7;
	// stw r11,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r7,95
	ctx.r7.s64 = 95;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// addi r3,r26,2856
	ctx.r3.s64 = ctx.r26.s64 + 2856;
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// li r5,192
	ctx.r5.s64 = 192;
	// stw r28,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r28.u32);
	// stb r31,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r31.u8);
	// stb r30,141(r1)
	PPC_STORE_U8(ctx.r1.u32 + 141, ctx.r30.u8);
	// stw r7,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r7.u32);
	// stw r16,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r16.u32);
	// stw r28,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r28.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stw r25,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r25.u32);
	// stw r27,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r27.u32);
	// stb r31,172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 172, ctx.r31.u8);
	// stb r30,173(r1)
	PPC_STORE_U8(ctx.r1.u32 + 173, ctx.r30.u8);
	// stw r27,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r27.u32);
	// stw r17,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r17.u32);
	// stw r28,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r28.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stw r24,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r24.u32);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r28,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r28.u32);
	// stb r31,204(r1)
	PPC_STORE_U8(ctx.r1.u32 + 204, ctx.r31.u8);
	// stb r30,205(r1)
	PPC_STORE_U8(ctx.r1.u32 + 205, ctx.r30.u8);
	// stw r6,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r6.u32);
	// stw r18,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r18.u32);
	// stw r28,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r28.u32);
	// stw r10,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r10.u32);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// stw r23,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r23.u32);
	// stw r27,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r27.u32);
	// stb r31,236(r1)
	PPC_STORE_U8(ctx.r1.u32 + 236, ctx.r31.u8);
	// stb r30,237(r1)
	PPC_STORE_U8(ctx.r1.u32 + 237, ctx.r30.u8);
	// stw r14,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r14.u32);
	// stw r19,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r19.u32);
	// stw r28,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r28.u32);
	// stw r9,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r9.u32);
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// stw r22,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r22.u32);
	// stw r27,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r27.u32);
	// stb r31,268(r1)
	PPC_STORE_U8(ctx.r1.u32 + 268, ctx.r31.u8);
	// stb r30,269(r1)
	PPC_STORE_U8(ctx.r1.u32 + 269, ctx.r30.u8);
	// stw r11,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r11.u32);
	// stw r20,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r20.u32);
	// stw r28,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r28.u32);
	// stw r8,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r8.u32);
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r31.u32);
	// stw r21,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r21.u32);
	// stw r27,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r27.u32);
	// stb r31,300(r1)
	PPC_STORE_U8(ctx.r1.u32 + 300, ctx.r31.u8);
	// stb r30,301(r1)
	PPC_STORE_U8(ctx.r1.u32 + 301, ctx.r30.u8);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// bl 0x831ce980
	ctx.lr = 0x82ACFD90;
	sub_831CE980(ctx, base);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r9,r29,-31
	ctx.r9.s64 = ctx.r29.s64 + -31;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// addi r8,r29,-13
	ctx.r8.s64 = ctx.r29.s64 + -13;
	// stw r15,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r15.u32);
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// addi r7,r29,-12
	ctx.r7.s64 = ctx.r29.s64 + -12;
	// stw r8,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r8.u32);
	// addi r6,r29,-11
	ctx.r6.s64 = ctx.r29.s64 + -11;
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// li r10,95
	ctx.r10.s64 = 95;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// stb r31,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r31.u8);
	// stw r29,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r29.u32);
	// stb r30,141(r1)
	PPC_STORE_U8(ctx.r1.u32 + 141, ctx.r30.u8);
	// stw r16,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r16.u32);
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r28,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r28.u32);
	// li r8,7
	ctx.r8.s64 = 7;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// addi r29,r26,3048
	ctx.r29.s64 = ctx.r26.s64 + 3048;
	// stw r25,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r25.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r27,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r27.u32);
	// li r5,192
	ctx.r5.s64 = 192;
	// stb r31,172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 172, ctx.r31.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r30,173(r1)
	PPC_STORE_U8(ctx.r1.u32 + 173, ctx.r30.u8);
	// stw r27,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r27.u32);
	// stw r7,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r7.u32);
	// stw r17,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r17.u32);
	// stw r28,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r28.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stw r24,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r24.u32);
	// stw r28,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r28.u32);
	// stb r31,204(r1)
	PPC_STORE_U8(ctx.r1.u32 + 204, ctx.r31.u8);
	// stb r30,205(r1)
	PPC_STORE_U8(ctx.r1.u32 + 205, ctx.r30.u8);
	// stw r9,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r9.u32);
	// stw r18,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r18.u32);
	// stw r28,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r28.u32);
	// stw r6,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r6.u32);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// stw r23,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r23.u32);
	// stw r27,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r27.u32);
	// stb r31,236(r1)
	PPC_STORE_U8(ctx.r1.u32 + 236, ctx.r31.u8);
	// stb r30,237(r1)
	PPC_STORE_U8(ctx.r1.u32 + 237, ctx.r30.u8);
	// stw r14,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r14.u32);
	// stw r19,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r19.u32);
	// stw r28,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r28.u32);
	// stw r11,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r11.u32);
	// stw r22,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r22.u32);
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// stw r27,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r27.u32);
	// stb r31,268(r1)
	PPC_STORE_U8(ctx.r1.u32 + 268, ctx.r31.u8);
	// stb r30,269(r1)
	PPC_STORE_U8(ctx.r1.u32 + 269, ctx.r30.u8);
	// stw r8,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r8.u32);
	// stw r20,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r20.u32);
	// stw r28,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r28.u32);
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r31.u32);
	// stw r21,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r21.u32);
	// stw r27,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r27.u32);
	// stb r31,300(r1)
	PPC_STORE_U8(ctx.r1.u32 + 300, ctx.r31.u8);
	// stb r30,301(r1)
	PPC_STORE_U8(ctx.r1.u32 + 301, ctx.r30.u8);
	// bl 0x831ce980
	ctx.lr = 0x82ACFEA0;
	sub_831CE980(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82ACFEA4;
	sub_831156E8(ctx, base);
	// lwz r7,48(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r11,1532(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1532);
	// addis r10,r7,222
	ctx.r10.s64 = ctx.r7.s64 + 14548992;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// addi r10,r10,26340
	ctx.r10.s64 = ctx.r10.s64 + 26340;
	// beq cr6,0x82acfed0
	if (cr6.eq) goto loc_82ACFED0;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// stw r14,164(r26)
	PPC_STORE_U32(ctx.r26.u32 + 164, ctx.r14.u32);
	// bne cr6,0x82acfefc
	if (!cr6.eq) goto loc_82ACFEFC;
	// stw r29,160(r26)
	PPC_STORE_U32(ctx.r26.u32 + 160, ctx.r29.u32);
	// b 0x82acff04
	goto loc_82ACFF04;
loc_82ACFED0:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82acfef8
	if (cr6.eq) goto loc_82ACFEF8;
	// lwz r11,3932(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3932);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x82acfeec
	if (cr6.eq) goto loc_82ACFEEC;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x82acfef8
	if (!cr6.eq) goto loc_82ACFEF8;
loc_82ACFEEC:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r14,164(r26)
	PPC_STORE_U32(ctx.r26.u32 + 164, ctx.r14.u32);
	// b 0x82acff00
	goto loc_82ACFF00;
loc_82ACFEF8:
	// stw r14,164(r26)
	PPC_STORE_U32(ctx.r26.u32 + 164, ctx.r14.u32);
loc_82ACFEFC:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82ACFF00:
	// stw r11,160(r26)
	PPC_STORE_U32(ctx.r26.u32 + 160, ctx.r11.u32);
loc_82ACFF04:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r26,140
	ctx.r3.s64 = ctx.r26.s64 + 140;
	// bl 0x82c12de8
	ctx.lr = 0x82ACFF10;
	sub_82C12DE8(ctx, base);
	// lwz r11,164(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 164);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// ble cr6,0x82acffb4
	if (!cr6.gt) goto loc_82ACFFB4;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_82ACFF34:
	// lwz r11,160(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 160);
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x82acff9c
	if (!cr6.gt) goto loc_82ACFF9C;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82ACFF50:
	// lwz r11,160(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 160);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x82acff80
	if (!cr6.gt) goto loc_82ACFF80;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83546fd8
	ctx.lr = 0x82ACFF80;
	sub_83546FD8(ctx, base);
loc_82ACFF80:
	// lwz r11,160(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 160);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplw cr6,r27,r10
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, xer);
	// blt cr6,0x82acff50
	if (cr6.lt) goto loc_82ACFF50;
loc_82ACFF9C:
	// lwz r11,164(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 164);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r29,r29,32
	ctx.r29.s64 = ctx.r29.s64 + 32;
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, xer);
	// blt cr6,0x82acff34
	if (cr6.lt) goto loc_82ACFF34;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_82ACFFB4:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// srawi. r8,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 3;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82acfff0
	if (cr0.eq) goto loc_82ACFFF0;
	// addi r11,r4,-4
	ctx.r11.s64 = ctx.r4.s64 + -4;
	// addi r10,r26,96
	ctx.r10.s64 = ctx.r26.s64 + 96;
loc_82ACFFCC:
	// cmplwi cr6,r31,4
	cr6.compare<uint32_t>(ctx.r31.u32, 4, xer);
	// bge cr6,0x82acfff0
	if (!cr6.lt) goto loc_82ACFFF0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r8
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r8.u32, xer);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwzu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// blt cr6,0x82acffcc
	if (cr6.lt) goto loc_82ACFFCC;
loc_82ACFFF0:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82ad0004
	if (cr6.eq) goto loc_82AD0004;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825952b8
	ctx.lr = 0x82AD0004;
	sub_825952B8(ctx, base);
loc_82AD0004:
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD000C"))) PPC_WEAK_FUNC(sub_82AD000C);
PPC_FUNC_IMPL(__imp__sub_82AD000C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AD0010"))) PPC_WEAK_FUNC(sub_82AD0010);
PPC_FUNC_IMPL(__imp__sub_82AD0010) {
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
	// bl 0x82d19a78
	ctx.lr = 0x82AD002C;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,-9620(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9620);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AD0048;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ad0098
	if (cr6.eq) goto loc_82AD0098;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-23445
	ctx.r4.s64 = ctx.r11.s64 + -23445;
	// bl 0x837b0c10
	ctx.lr = 0x82AD0064;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,192(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d334b0
	ctx.lr = 0x82AD0078;
	sub_82D334B0(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82ad0098
	if (cr6.lt) goto loc_82AD0098;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82AD0098;
	sub_825952B8(ctx, base);
loc_82AD0098:
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

__attribute__((alias("__imp__sub_82AD00B0"))) PPC_WEAK_FUNC(sub_82AD00B0);
PPC_FUNC_IMPL(__imp__sub_82AD00B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82AD00B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82c13c38
	ctx.lr = 0x82AD00C4;
	sub_82C13C38(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ad020c
	if (cr6.eq) goto loc_82AD020C;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// lwz r10,25360(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25360);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ad05a0
	if (!cr6.eq) goto loc_82AD05A0;
	// bl 0x831156e8
	ctx.lr = 0x82AD00E4;
	sub_831156E8(ctx, base);
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x831156e8
	ctx.lr = 0x82AD00EC;
	sub_831156E8(ctx, base);
	// addis r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 12582912;
	// addi r3,r3,-10964
	ctx.r3.s64 = ctx.r3.s64 + -10964;
	// bl 0x83126788
	ctx.lr = 0x82AD00F8;
	sub_83126788(ctx, base);
	// lis r11,194
	ctx.r11.s64 = 12713984;
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// ori r9,r11,52144
	ctx.r9.u64 = ctx.r11.u64 | 52144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhzx r8,r31,r9
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + ctx.r9.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lwz r11,-9536(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9536);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82aceb48
	ctx.lr = 0x82AD0120;
	sub_82ACEB48(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// blt cr6,0x82ad0218
	if (cr6.lt) goto loc_82AD0218;
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// bgt cr6,0x82ad0218
	if (cr6.gt) goto loc_82AD0218;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ad0218
	if (cr6.eq) goto loc_82AD0218;
	// lbz r11,1541(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1541);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ad0218
	if (!cr6.eq) goto loc_82AD0218;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x831525a0
	ctx.lr = 0x82AD0158;
	sub_831525A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ad0218
	if (cr6.eq) goto loc_82AD0218;
	// lwz r11,192(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 192);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// xor r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	// rlwinm r9,r10,0,0,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82ad0190
	if (!cr6.eq) goto loc_82AD0190;
	// xor r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r4.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ad0194
	if (cr6.eq) goto loc_82AD0194;
loc_82AD0190:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AD0194:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lis r29,631
	ctx.r29.s64 = 41353216;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ad01ac
	if (cr6.eq) goto loc_82AD01AC;
	// ori r29,r29,635
	ctx.r29.u64 = ctx.r29.u64 | 635;
	// b 0x82ad01b0
	goto loc_82AD01B0;
loc_82AD01AC:
	// ori r29,r29,634
	ctx.r29.u64 = ctx.r29.u64 | 634;
loc_82AD01B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8311c148
	ctx.lr = 0x82AD01B8;
	sub_8311C148(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-23684
	ctx.r11.s64 = ctx.r11.s64 + -23684;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,243
	ctx.r4.s64 = ctx.r11.s64 + 243;
	// bl 0x837b0c10
	ctx.lr = 0x82AD01D0;
	sub_837B0C10(ctx, base);
	// addi r5,r31,4
	ctx.r5.s64 = ctx.r31.s64 + 4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82d042a8
	ctx.lr = 0x82AD01E0;
	sub_82D042A8(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82ad01f4
	if (!cr6.lt) goto loc_82AD01F4;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_82AD01F4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c15058
	ctx.lr = 0x82AD01FC;
	sub_82C15058(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r11,1508(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1508, ctx.r11.u32);
	// bl 0x8387e8e0
	ctx.lr = 0x82AD020C;
	sub_8387E8E0(ctx, base);
loc_82AD020C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82AD0218:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,64
	cr6.compare<int32_t>(ctx.r11.s32, 64, xer);
	// bgt cr6,0x82ad03c0
	if (cr6.gt) goto loc_82AD03C0;
	// beq cr6,0x82ad03a4
	if (cr6.eq) goto loc_82AD03A4;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgt cr6,0x82ad05a0
	if (cr6.gt) goto loc_82AD05A0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82ad0250
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82AD0250;
	// bdzf 4*cr6+eq,0x82ad0284
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82AD0284;
	// bdzf 4*cr6+eq,0x82ad0250
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82AD0250;
	// bdzf 4*cr6+eq,0x82ad05a0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82AD05A0;
	// bne cr6,0x82ad0284
	if (!cr6.eq) goto loc_82AD0284;
loc_82AD0250:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c134b0
	ctx.lr = 0x82AD0258;
	sub_82C134B0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r3,1508(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1508, ctx.r3.u32);
	// bne cr6,0x82ad020c
	if (!cr6.eq) goto loc_82AD020C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c13610
	ctx.lr = 0x82AD026C;
	sub_82C13610(ctx, base);
	// stw r3,1508(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1508, ctx.r3.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82ad05a0
	if (cr6.eq) goto loc_82AD05A0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82AD0284:
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x8314d470
	ctx.lr = 0x82AD0298;
	sub_8314D470(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ad0354
	if (cr6.eq) goto loc_82AD0354;
	// lis r11,228
	ctx.r11.s64 = 14942208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r10,r11,42280
	ctx.r10.u64 = ctx.r11.u64 | 42280;
	// ldx r4,r31,r10
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + ctx.r10.u32);
	// bl 0x8311bf98
	ctx.lr = 0x82AD02B8;
	sub_8311BF98(ctx, base);
	// lwz r9,180(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// rlwinm r8,r9,0,4,5
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xC000000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82ad0354
	if (!cr6.eq) goto loc_82AD0354;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ad0354
	if (!cr6.eq) goto loc_82AD0354;
	// lis r11,6
	ctx.r11.s64 = 393216;
	// addis r10,r31,222
	ctx.r10.s64 = ctx.r31.s64 + 14548992;
	// ori r9,r11,50744
	ctx.r9.u64 = ctx.r11.u64 | 50744;
	// addi r10,r10,-8464
	ctx.r10.s64 = ctx.r10.s64 + -8464;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ldx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x8311bf98
	ctx.lr = 0x82AD02F0;
	sub_8311BF98(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r7,176(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 176);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// bl 0x8319dc20
	ctx.lr = 0x82AD0304;
	sub_8319DC20(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82acebe8
	ctx.lr = 0x82AD0310;
	sub_82ACEBE8(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82ad0354
	if (cr6.eq) goto loc_82AD0354;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82acf018
	ctx.lr = 0x82AD0328;
	sub_82ACF018(ctx, base);
	// cmplwi cr6,r3,30
	cr6.compare<uint32_t>(ctx.r3.u32, 30, xer);
	// bge cr6,0x82ad0354
	if (!cr6.lt) goto loc_82AD0354;
	// lis r4,631
	ctx.r4.s64 = 41353216;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,620
	ctx.r4.u64 = ctx.r4.u64 | 620;
	// bl 0x82c133d0
	ctx.lr = 0x82AD0340;
	sub_82C133D0(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,1508(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1508, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82AD0354:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(ctx.r11.s32, 13, xer);
	// bne cr6,0x82ad05a0
	if (!cr6.eq) goto loc_82AD05A0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c134b0
	ctx.lr = 0x82AD0368;
	sub_82C134B0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r3,1508(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1508, ctx.r3.u32);
	// bne cr6,0x82ad020c
	if (!cr6.eq) goto loc_82AD020C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c13610
	ctx.lr = 0x82AD037C;
	sub_82C13610(ctx, base);
	// stw r3,1508(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1508, ctx.r3.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82ad020c
	if (!cr6.eq) goto loc_82AD020C;
	// lis r11,220
	ctx.r11.s64 = 14417920;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r9,r11,46752
	ctx.r9.u64 = ctx.r11.u64 | 46752;
	// li r3,1
	ctx.r3.s64 = 1;
	// stbx r10,r31,r9
	PPC_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r10.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82AD03A4:
	// lwz r31,192(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 192);
	// bl 0x8311e3d0
	ctx.lr = 0x82AD03AC;
	sub_8311E3D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8311d7b0
	ctx.lr = 0x82AD03B4;
	sub_8311D7B0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82AD03C0:
	// cmpwi cr6,r11,69
	cr6.compare<int32_t>(ctx.r11.s32, 69, xer);
	// beq cr6,0x82ad0588
	if (cr6.eq) goto loc_82AD0588;
	// cmpwi cr6,r11,93
	cr6.compare<int32_t>(ctx.r11.s32, 93, xer);
	// beq cr6,0x82ad0564
	if (cr6.eq) goto loc_82AD0564;
	// cmpwi cr6,r11,96
	cr6.compare<int32_t>(ctx.r11.s32, 96, xer);
	// bne cr6,0x82ad05a0
	if (!cr6.eq) goto loc_82AD05A0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-23684
	ctx.r3.s64 = ctx.r11.s64 + -23684;
	// bl 0x831525a0
	ctx.lr = 0x82AD03E4;
	sub_831525A0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ad0414
	if (!cr6.eq) goto loc_82AD0414;
	// lis r4,631
	ctx.r4.s64 = 41353216;
	// ori r4,r4,617
	ctx.r4.u64 = ctx.r4.u64 | 617;
	// bl 0x82c13378
	ctx.lr = 0x82AD0400;
	sub_82C13378(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,1508(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1508, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82AD0414:
	// bl 0x82aceab8
	ctx.lr = 0x82AD0418;
	sub_82ACEAB8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ad0448
	if (cr6.eq) goto loc_82AD0448;
	// lis r4,631
	ctx.r4.s64 = 41353216;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,618
	ctx.r4.u64 = ctx.r4.u64 | 618;
	// bl 0x82c13378
	ctx.lr = 0x82AD0434;
	sub_82C13378(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,1508(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1508, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82AD0448:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8319dc20
	ctx.lr = 0x82AD0450;
	sub_8319DC20(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8319dc20
	ctx.lr = 0x82AD0458;
	sub_8319DC20(ctx, base);
	// addis r29,r31,221
	ctx.r29.s64 = ctx.r31.s64 + 14483456;
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// addi r29,r29,-18804
	ctx.r29.s64 = ctx.r29.s64 + -18804;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r9,r10,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x82ad0490
	if (!cr6.eq) goto loc_82AD0490;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x8319dc20
	ctx.lr = 0x82AD047C;
	sub_8319DC20(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lbz r10,2(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// rlwinm r9,r11,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x82ad0540
	if (cr6.eq) goto loc_82AD0540;
loc_82AD0490:
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8319df40
	ctx.lr = 0x82AD04A4;
	sub_8319DF40(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x82ad0540
	if (cr6.eq) goto loc_82AD0540;
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x8319df40
	ctx.lr = 0x82AD04C4;
	sub_8319DF40(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x82ad0540
	if (cr6.eq) goto loc_82AD0540;
	// lis r11,228
	ctx.r11.s64 = 14942208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r10,r11,42280
	ctx.r10.u64 = ctx.r11.u64 | 42280;
	// ldx r4,r31,r10
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + ctx.r10.u32);
	// bl 0x8311bf98
	ctx.lr = 0x82AD04E4;
	sub_8311BF98(ctx, base);
	// li r9,20
	ctx.r9.s64 = 20;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83120738
	ctx.lr = 0x82AD04FC;
	sub_83120738(ctx, base);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r7,37
	cr6.compare<uint32_t>(ctx.r7.u32, 37, xer);
	// blt cr6,0x82ad0530
	if (cr6.lt) goto loc_82AD0530;
	// lis r4,631
	ctx.r4.s64 = 41353216;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,641
	ctx.r4.u64 = ctx.r4.u64 | 641;
	// bl 0x82c13378
	ctx.lr = 0x82AD051C;
	sub_82C13378(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,1508(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1508, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82AD0530:
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// rlwinm r10,r11,0,4,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ad05a0
	if (cr6.eq) goto loc_82AD05A0;
loc_82AD0540:
	// lis r4,631
	ctx.r4.s64 = 41353216;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,617
	ctx.r4.u64 = ctx.r4.u64 | 617;
	// bl 0x82c13378
	ctx.lr = 0x82AD0550;
	sub_82C13378(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,1508(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1508, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82AD0564:
	// lis r4,631
	ctx.r4.s64 = 41353216;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,636
	ctx.r4.u64 = ctx.r4.u64 | 636;
	// bl 0x82c133d0
	ctx.lr = 0x82AD0574;
	sub_82C133D0(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,1508(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1508, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82AD0588:
	// addis r11,r31,221
	ctx.r11.s64 = ctx.r31.s64 + 14483456;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r11,-26512
	ctx.r11.s64 = ctx.r11.s64 + -26512;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,1292(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1292, ctx.r10.u32);
	// stw r9,1296(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1296, ctx.r9.u32);
loc_82AD05A0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD05AC"))) PPC_WEAK_FUNC(sub_82AD05AC);
PPC_FUNC_IMPL(__imp__sub_82AD05AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AD05B0"))) PPC_WEAK_FUNC(sub_82AD05B0);
PPC_FUNC_IMPL(__imp__sub_82AD05B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82AD05B8;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1508(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1508);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bgt cr6,0x82ad0710
	if (cr6.gt) goto loc_82AD0710;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82ad065c
	if (cr6.eq) goto loc_82AD065C;
	// bdz 0x82ad0710
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82AD0710;
	// bdz 0x82ad0710
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82AD0710;
	// bdz 0x82ad0710
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82AD0710;
	// bdz 0x82ad0710
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82AD0710;
	// bdz 0x82ad0710
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82AD0710;
	// bdz 0x82ad0604
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82AD0604;
	// bdz 0x82ad065c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82AD065C;
	// b 0x82ad069c
	goto loc_82AD069C;
loc_82AD0604:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ad0710
	if (!cr6.eq) goto loc_82AD0710;
	// lwz r3,1536(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1536);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ad0640
	if (!cr6.eq) goto loc_82AD0640;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-22952
	ctx.r3.s64 = ctx.r11.s64 + -22952;
	// bl 0x82c1cb18
	ctx.lr = 0x82AD0628;
	sub_82C1CB18(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r10,1536(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1536, ctx.r10.u32);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// bl 0x83103100
	ctx.lr = 0x82AD063C;
	sub_83103100(ctx, base);
	// b 0x82ad0644
	goto loc_82AD0644;
loc_82AD0640:
	// bl 0x82c1cf50
	ctx.lr = 0x82AD0644;
	sub_82C1CF50(ctx, base);
loc_82AD0644:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r11,1540(r28)
	PPC_STORE_U8(ctx.r28.u32 + 1540, ctx.r11.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d199d0
	ctx.lr = 0x82AD0658;
	sub_82D199D0(ctx, base);
	// b 0x82ad0710
	goto loc_82AD0710;
loc_82AD065C:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ad0710
	if (!cr6.eq) goto loc_82AD0710;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c13c38
	ctx.lr = 0x82AD0670;
	sub_82C13C38(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ad0710
	if (cr6.eq) goto loc_82AD0710;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82ad0710
	if (!cr6.eq) goto loc_82AD0710;
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82AD0694;
	sub_82D20DA8(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x82ad0710
	goto loc_82AD0710;
loc_82AD069C:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ad0710
	if (!cr6.eq) goto loc_82AD0710;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r27,1508(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1508, ctx.r27.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r11,1541(r28)
	PPC_STORE_U8(ctx.r28.u32 + 1541, ctx.r11.u8);
	// bl 0x82c13c38
	ctx.lr = 0x82AD06BC;
	sub_82C13C38(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ad0710
	if (cr6.eq) goto loc_82AD0710;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82ad0710
	if (!cr6.eq) goto loc_82AD0710;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,320(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 320);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AD06E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82ad070c
	if (cr6.eq) goto loc_82AD070C;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82AD0704;
	sub_82D20DA8(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x82ad0710
	goto loc_82AD0710;
loc_82AD070C:
	// stb r27,1541(r28)
	PPC_STORE_U8(ctx.r28.u32 + 1541, ctx.r27.u8);
loc_82AD0710:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ad0790
	if (cr6.eq) goto loc_82AD0790;
	// bl 0x82f06520
	ctx.lr = 0x82AD0720;
	sub_82F06520(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ad0790
	if (cr6.eq) goto loc_82AD0790;
	// lwz r11,172(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 172);
	// addi r31,r28,172
	ctx.r31.s64 = ctx.r28.s64 + 172;
	// lwz r10,176(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 176);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r8,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 3;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82ad0790
	if (cr0.eq) goto loc_82AD0790;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_82AD0748:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r26,4(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r25,0(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82f06520
	ctx.lr = 0x82AD075C;
	sub_82F06520(ctx, base);
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// bl 0x83546fd8
	ctx.lr = 0x82AD0770;
	sub_83546FD8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 3;
	// cmplw cr6,r30,r8
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, xer);
	// blt cr6,0x82ad0748
	if (cr6.lt) goto loc_82AD0748;
loc_82AD0790:
	// stw r27,1508(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1508, ctx.r27.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD079C"))) PPC_WEAK_FUNC(sub_82AD079C);
PPC_FUNC_IMPL(__imp__sub_82AD079C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AD07A0"))) PPC_WEAK_FUNC(sub_82AD07A0);
PPC_FUNC_IMPL(__imp__sub_82AD07A0) {
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
	// lhz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// bl 0x831156e8
	ctx.lr = 0x82AD07B8;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r31,511
	cr6.compare<uint32_t>(ctx.r31.u32, 511, xer);
	// addis r11,r11,221
	ctx.r11.s64 = ctx.r11.s64 + 14483456;
	// addi r11,r11,-26512
	ctx.r11.s64 = ctx.r11.s64 + -26512;
	// ble cr6,0x82ad07e8
	if (!cr6.gt) goto loc_82AD07E8;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r10,7700(r11)
	PPC_STORE_U16(ctx.r11.u32 + 7700, ctx.r10.u16);
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
loc_82AD07E8:
	// sth r31,7700(r11)
	PPC_STORE_U16(ctx.r11.u32 + 7700, ctx.r31.u16);
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

__attribute__((alias("__imp__sub_82AD0800"))) PPC_WEAK_FUNC(sub_82AD0800);
PPC_FUNC_IMPL(__imp__sub_82AD0800) {
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
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82beaf70
	ctx.lr = 0x82AD081C;
	sub_82BEAF70(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lis r8,-32083
	ctx.r8.s64 = -2102591488;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r10,-22064
	ctx.r7.s64 = ctx.r10.s64 + -22064;
	// addi r6,r9,-17088
	ctx.r6.s64 = ctx.r9.s64 + -17088;
	// stb r11,120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 120, ctx.r11.u8);
	// addi r5,r8,1952
	ctx.r5.s64 = ctx.r8.s64 + 1952;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// stw r6,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r6.u32);
	// stb r11,121(r31)
	PPC_STORE_U8(ctx.r31.u32 + 121, ctx.r11.u8);
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// stb r11,117(r31)
	PPC_STORE_U8(ctx.r31.u32 + 117, ctx.r11.u8);
	// stb r11,118(r31)
	PPC_STORE_U8(ctx.r31.u32 + 118, ctx.r11.u8);
	// stb r11,163(r4)
	PPC_STORE_U8(ctx.r4.u32 + 163, ctx.r11.u8);
	// stw r5,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r5.u32);
	// bl 0x82efe980
	ctx.lr = 0x82AD0864;
	sub_82EFE980(ctx, base);
	// bl 0x830ff290
	ctx.lr = 0x82AD0868;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82AD086C;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,12
	cr6.compare<uint32_t>(ctx.r3.u32, 12, xer);
	// lis r4,269
	ctx.r4.s64 = 17629184;
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82ad0888
	if (!cr6.eq) goto loc_82AD0888;
	// ori r4,r4,158
	ctx.r4.u64 = ctx.r4.u64 | 158;
	// b 0x82ad088c
	goto loc_82AD088C;
loc_82AD0888:
	// ori r4,r4,76
	ctx.r4.u64 = ctx.r4.u64 | 76;
loc_82AD088C:
	// bl 0x82d21730
	ctx.lr = 0x82AD0890;
	sub_82D21730(ctx, base);
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

__attribute__((alias("__imp__sub_82AD08A8"))) PPC_WEAK_FUNC(sub_82AD08A8);
PPC_FUNC_IMPL(__imp__sub_82AD08A8) {
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
	// bl 0x82d17d90
	ctx.lr = 0x82AD08C0;
	sub_82D17D90(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ad08dc
	if (!cr6.eq) goto loc_82AD08DC;
	// lbz r11,121(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 121);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ad08dc
	if (cr6.eq) goto loc_82AD08DC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,120(r31)
	PPC_STORE_U8(ctx.r31.u32 + 120, ctx.r11.u8);
loc_82AD08DC:
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

__attribute__((alias("__imp__sub_82AD08F0"))) PPC_WEAK_FUNC(sub_82AD08F0);
PPC_FUNC_IMPL(__imp__sub_82AD08F0) {
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
	// lwz r11,124(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82ad0964
	if (cr6.lt) goto loc_82AD0964;
	// beq cr6,0x82ad092c
	if (cr6.eq) goto loc_82AD092C;
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
loc_82AD092C:
	// bl 0x82efe820
	ctx.lr = 0x82AD0930;
	sub_82EFE820(ctx, base);
	// li r4,48
	ctx.r4.s64 = 48;
	// bl 0x82efe8d8
	ctx.lr = 0x82AD0938;
	sub_82EFE8D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ad0978
	if (cr6.eq) goto loc_82AD0978;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
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
loc_82AD0964:
	// bl 0x82efe820
	ctx.lr = 0x82AD0968;
	sub_82EFE820(ctx, base);
	// li r4,48
	ctx.r4.s64 = 48;
	// bl 0x82efe830
	ctx.lr = 0x82AD0970;
	sub_82EFE830(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
loc_82AD0978:
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

__attribute__((alias("__imp__sub_82AD0990"))) PPC_WEAK_FUNC(sub_82AD0990);
PPC_FUNC_IMPL(__imp__sub_82AD0990) {
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
	// bl 0x831156e8
	ctx.lr = 0x82AD09AC;
	sub_831156E8(ctx, base);
	// lis r11,220
	ctx.r11.s64 = 14417920;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ori r9,r11,46724
	ctx.r9.u64 = ctx.r11.u64 | 46724;
	// lhzx r30,r10,r9
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r30,65535
	cr6.compare<uint32_t>(ctx.r30.u32, 65535, xer);
	// beq cr6,0x82ad09e4
	if (cr6.eq) goto loc_82AD09E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d199f0
	ctx.lr = 0x82AD09CC;
	sub_82D199F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ad09e4
	if (cr6.eq) goto loc_82AD09E4;
	// clrlwi r4,r30,16
	ctx.r4.u64 = ctx.r30.u32 & 0xFFFF;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82c1e9c8
	ctx.lr = 0x82AD09E4;
	sub_82C1E9C8(ctx, base);
loc_82AD09E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82beba70
	ctx.lr = 0x82AD09EC;
	sub_82BEBA70(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD0A04"))) PPC_WEAK_FUNC(sub_82AD0A04);
PPC_FUNC_IMPL(__imp__sub_82AD0A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AD0A08"))) PPC_WEAK_FUNC(sub_82AD0A08);
PPC_FUNC_IMPL(__imp__sub_82AD0A08) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-22064
	ctx.r9.s64 = ctx.r11.s64 + -22064;
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
	// bl 0x82efead8
	ctx.lr = 0x82AD0A40;
	sub_82EFEAD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82beb058
	ctx.lr = 0x82AD0A48;
	sub_82BEB058(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82ad0a60
	if (cr6.eq) goto loc_82AD0A60;
	// bl 0x82416268
	ctx.lr = 0x82AD0A5C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82AD0A60:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD0A78"))) PPC_WEAK_FUNC(sub_82AD0A78);
PPC_FUNC_IMPL(__imp__sub_82AD0A78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82AD0A80;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x82AD0A90;
	sub_831156E8(ctx, base);
	// lis r11,236
	ctx.r11.s64 = 15466496;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ori r9,r11,5128
	ctx.r9.u64 = ctx.r11.u64 | 5128;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x82ad0ab4
	if (cr6.eq) goto loc_82AD0AB4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82beba78
	ctx.lr = 0x82AD0AB4;
	sub_82BEBA78(ctx, base);
loc_82AD0AB4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82beb868
	ctx.lr = 0x82AD0AC0;
	sub_82BEB868(ctx, base);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lbz r11,159(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 159);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ad0c50
	if (cr6.eq) goto loc_82AD0C50;
	// lis r11,-31751
	ctx.r11.s64 = -2080833536;
	// lwz r10,25360(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25360);
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// beq cr6,0x82ad0c80
	if (cr6.eq) goto loc_82AD0C80;
	// lwz r11,25360(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25360);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// beq cr6,0x82ad0c80
	if (cr6.eq) goto loc_82AD0C80;
	// bl 0x82c1edb8
	ctx.lr = 0x82AD0AF0;
	sub_82C1EDB8(ctx, base);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82c1edb8
	ctx.lr = 0x82AD0AFC;
	sub_82C1EDB8(ctx, base);
	// sth r3,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r3.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8314d8e0
	ctx.lr = 0x82AD0B0C;
	sub_8314D8E0(ctx, base);
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r10,-9380(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -9380);
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm r8,r9,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82ad0b40
	if (!cr6.eq) goto loc_82AD0B40;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ad0b44
	if (cr6.eq) goto loc_82AD0B44;
loc_82AD0B40:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AD0B44:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ad0b54
	if (!cr6.eq) goto loc_82AD0B54;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_82AD0B54:
	// bl 0x830ff290
	ctx.lr = 0x82AD0B58;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82AD0B5C;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,13
	cr6.compare<uint32_t>(ctx.r3.u32, 13, xer);
	// bne cr6,0x82ad0bc0
	if (!cr6.eq) goto loc_82AD0BC0;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ad0bc0
	if (!cr6.eq) goto loc_82AD0BC0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r11,r11,-22168
	ctx.r11.s64 = ctx.r11.s64 + -22168;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r3,r11,-16
	ctx.r3.s64 = ctx.r11.s64 + -16;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2f6d8
	ctx.lr = 0x82AD0B90;
	sub_82D2F6D8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ad0c1c
	if (cr6.eq) goto loc_82AD0C1C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r11,-21760
	ctx.r4.s64 = ctx.r11.s64 + -21760;
	// bl 0x82d2ac30
	ctx.lr = 0x82AD0BAC;
	sub_82D2AC30(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82AD0BB8;
	sub_83103100(ctx, base);
	// stb r29,121(r31)
	PPC_STORE_U8(ctx.r31.u32 + 121, ctx.r29.u8);
	// b 0x82ad0c2c
	goto loc_82AD0C2C;
loc_82AD0BC0:
	// bl 0x830ff290
	ctx.lr = 0x82AD0BC4;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82AD0BC8;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,12
	cr6.compare<uint32_t>(ctx.r3.u32, 12, xer);
	// bne cr6,0x82ad0c24
	if (!cr6.eq) goto loc_82AD0C24;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ad0c24
	if (!cr6.eq) goto loc_82AD0C24;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r3,r11,-22168
	ctx.r3.s64 = ctx.r11.s64 + -22168;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2f6d8
	ctx.lr = 0x82AD0BF8;
	sub_82D2F6D8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ad0c1c
	if (cr6.eq) goto loc_82AD0C1C;
	// lis r4,269
	ctx.r4.s64 = 17629184;
	// ori r4,r4,159
	ctx.r4.u64 = ctx.r4.u64 | 159;
	// bl 0x82d2ada8
	ctx.lr = 0x82AD0C10;
	sub_82D2ADA8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82AD0C1C;
	sub_83103100(ctx, base);
loc_82AD0C1C:
	// stb r29,121(r31)
	PPC_STORE_U8(ctx.r31.u32 + 121, ctx.r29.u8);
	// b 0x82ad0c2c
	goto loc_82AD0C2C;
loc_82AD0C24:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,121(r31)
	PPC_STORE_U8(ctx.r31.u32 + 121, ctx.r11.u8);
loc_82AD0C2C:
	// lbz r11,121(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 121);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ad0c44
	if (!cr6.eq) goto loc_82AD0C44;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82beba78
	ctx.lr = 0x82AD0C44;
	sub_82BEBA78(ctx, base);
loc_82AD0C44:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82b36578
	ctx.lr = 0x82AD0C50;
	sub_82B36578(ctx, base);
loc_82AD0C50:
	// lbz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 120);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ad0c74
	if (cr6.eq) goto loc_82AD0C74;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82b36578
	ctx.lr = 0x82AD0C68;
	sub_82B36578(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82beba78
	ctx.lr = 0x82AD0C74;
	sub_82BEBA78(ctx, base);
loc_82AD0C74:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82AD0C80:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82beba78
	ctx.lr = 0x82AD0C8C;
	sub_82BEBA78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82b36578
	ctx.lr = 0x82AD0C98;
	sub_82B36578(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD0CA4"))) PPC_WEAK_FUNC(sub_82AD0CA4);
PPC_FUNC_IMPL(__imp__sub_82AD0CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AD0CA8"))) PPC_WEAK_FUNC(sub_82AD0CA8);
PPC_FUNC_IMPL(__imp__sub_82AD0CA8) {
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
	// li r11,27
	ctx.r11.s64 = 27;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82AD0CDC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ad0d20
	if (cr6.eq) goto loc_82AD0D20;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82ad0800
	ctx.lr = 0x82AD0CF0;
	sub_82AD0800(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ad0d04
	if (cr6.eq) goto loc_82AD0D04;
	// lwz r3,96(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// bl 0x82c807d8
	ctx.lr = 0x82AD0D04;
	sub_82C807D8(ctx, base);
loc_82AD0D04:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82AD0D08:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82AD0D20:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ad0d08
	goto loc_82AD0D08;
}

__attribute__((alias("__imp__sub_82AD0D28"))) PPC_WEAK_FUNC(sub_82AD0D28);
PPC_FUNC_IMPL(__imp__sub_82AD0D28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ad0d38
	if (cr6.lt) goto loc_82AD0D38;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82AD0D38:
	// lbz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// b 0x82ad0ca8
	sub_82AD0CA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD0D40"))) PPC_WEAK_FUNC(sub_82AD0D40);
PPC_FUNC_IMPL(__imp__sub_82AD0D40) {
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
	// bl 0x82c05078
	ctx.lr = 0x82AD0D58;
	sub_82C05078(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-20976
	ctx.r9.s64 = ctx.r11.s64 + -20976;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// lis r4,269
	ctx.r4.s64 = 17629184;
	// stw r7,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// ori r4,r4,59
	ctx.r4.u64 = ctx.r4.u64 | 59;
	// bl 0x82d21730
	ctx.lr = 0x82AD0D8C;
	sub_82D21730(ctx, base);
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

__attribute__((alias("__imp__sub_82AD0DA4"))) PPC_WEAK_FUNC(sub_82AD0DA4);
PPC_FUNC_IMPL(__imp__sub_82AD0DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AD0DA8"))) PPC_WEAK_FUNC(sub_82AD0DA8);
PPC_FUNC_IMPL(__imp__sub_82AD0DA8) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82c05d10
	ctx.lr = 0x82AD0DC4;
	sub_82C05D10(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82AD0DCC;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r31,r11,-21344
	ctx.r31.s64 = ctx.r11.s64 + -21344;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AD0DEC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82AD0DF4;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82AD0E0C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2b608
	ctx.lr = 0x82AD0E1C;
	sub_82D2B608(ctx, base);
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,507
	ctx.r4.u64 = ctx.r4.u64 | 507;
	// bl 0x82c04a20
	ctx.lr = 0x82AD0E2C;
	sub_82C04A20(ctx, base);
	// lis r4,700
	ctx.r4.s64 = 45875200;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,11
	ctx.r4.u64 = ctx.r4.u64 | 11;
	// bl 0x82c04a78
	ctx.lr = 0x82AD0E3C;
	sub_82C04A78(ctx, base);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,160(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 160);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AD0E58;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_82AD0E74"))) PPC_WEAK_FUNC(sub_82AD0E74);
PPC_FUNC_IMPL(__imp__sub_82AD0E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AD0E78"))) PPC_WEAK_FUNC(sub_82AD0E78);
PPC_FUNC_IMPL(__imp__sub_82AD0E78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82AD0E80;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82AD0E8C;
	sub_82D19A78(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r30,r11,-21076
	ctx.r30.s64 = ctx.r11.s64 + -21076;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,-84
	ctx.r4.s64 = ctx.r30.s64 + -84;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AD0EAC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82AD0EB4;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r30,-64
	ctx.r4.s64 = ctx.r30.s64 + -64;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82AD0ECC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82AD0EE0;
	sub_82D2B608(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82AD0EF0;
	sub_82D2AEC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82AD0EF8;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r30,-56
	ctx.r4.s64 = ctx.r30.s64 + -56;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82AD0F10;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d2b608
	ctx.lr = 0x82AD0F24;
	sub_82D2B608(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82AD0F34;
	sub_82D2AEC8(ctx, base);
	// bl 0x830ff290
	ctx.lr = 0x82AD0F38;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82AD0F3C;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,13
	cr6.compare<uint32_t>(ctx.r3.u32, 13, xer);
	// beq cr6,0x82ad0f9c
	if (cr6.eq) goto loc_82AD0F9C;
	// bl 0x830ff290
	ctx.lr = 0x82AD0F48;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82AD0F4C;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,12
	cr6.compare<uint32_t>(ctx.r3.u32, 12, xer);
	// beq cr6,0x82ad0f9c
	if (cr6.eq) goto loc_82AD0F9C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r30,-20
	ctx.r4.s64 = ctx.r30.s64 + -20;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AD0F70;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82AD0F88;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82AD0F94;
	sub_82D2AEC8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82AD0F9C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r30,-40
	ctx.r4.s64 = ctx.r30.s64 + -40;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AD0FB8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD0FC0"))) PPC_WEAK_FUNC(sub_82AD0FC0);
PPC_FUNC_IMPL(__imp__sub_82AD0FC0) {
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
	// bl 0x830ff290
	ctx.lr = 0x82AD0FD8;
	sub_830FF290(ctx, base);
	// bl 0x830ff290
	ctx.lr = 0x82AD0FDC;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,39
	cr6.compare<uint32_t>(ctx.r11.u32, 39, xer);
	// bne cr6,0x82ad1010
	if (!cr6.eq) goto loc_82AD1010;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-21068
	ctx.r5.s64 = ctx.r11.s64 + -21068;
	// bl 0x82d20da8
	ctx.lr = 0x82AD0FFC;
	sub_82D20DA8(ctx, base);
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
loc_82AD1010:
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82d19858
	ctx.lr = 0x82AD1018;
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

__attribute__((alias("__imp__sub_82AD102C"))) PPC_WEAK_FUNC(sub_82AD102C);
PPC_FUNC_IMPL(__imp__sub_82AD102C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AD1030"))) PPC_WEAK_FUNC(sub_82AD1030);
PPC_FUNC_IMPL(__imp__sub_82AD1030) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82AD1038;
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
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82AD105C;
	sub_82595718(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ad10b4
	if (cr6.eq) goto loc_82AD10B4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c05078
	ctx.lr = 0x82AD1074;
	sub_82C05078(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-20976
	ctx.r9.s64 = ctx.r11.s64 + -20976;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// lis r4,269
	ctx.r4.s64 = 17629184;
	// stw r7,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r7.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// ori r4,r4,59
	ctx.r4.u64 = ctx.r4.u64 | 59;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d21730
	ctx.lr = 0x82AD10A8;
	sub_82D21730(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82AD10B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD10C0"))) PPC_WEAK_FUNC(sub_82AD10C0);
PPC_FUNC_IMPL(__imp__sub_82AD10C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ad10d0
	if (cr6.lt) goto loc_82AD10D0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82AD10D0:
	// lbz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// b 0x82ad1030
	sub_82AD1030(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD10D8"))) PPC_WEAK_FUNC(sub_82AD10D8);
PPC_FUNC_IMPL(__imp__sub_82AD10D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x82AD10E0;
	__savegprlr_20(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// bl 0x82d19cd0
	ctx.lr = 0x82AD10F4;
	sub_82D19CD0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82c04c10
	ctx.lr = 0x82AD1104;
	sub_82C04C10(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82c1f4e0
	ctx.lr = 0x82AD110C;
	sub_82C1F4E0(ctx, base);
	// li r9,9
	ctx.r9.s64 = 9;
	// addi r10,r1,236
	ctx.r10.s64 = ctx.r1.s64 + 236;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82AD111C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82ad111c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82AD111C;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82c1f550
	ctx.lr = 0x82AD1130;
	sub_82C1F550(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x82ad13e8
	if (cr6.eq) goto loc_82AD13E8;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82AD1144;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r25,r11,-21184
	ctx.r25.s64 = ctx.r11.s64 + -21184;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r25,-152
	ctx.r4.s64 = ctx.r25.s64 + -152;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AD1164;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r23,0
	ctx.r23.s64 = 0;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// addi r27,r3,100
	ctx.r27.s64 = ctx.r3.s64 + 100;
	// li r28,-1
	ctx.r28.s64 = -1;
	// addi r26,r11,-9324
	ctx.r26.s64 = ctx.r11.s64 + -9324;
loc_82AD117C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwzx r4,r29,r26
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r26.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AD1194;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r1,244
	ctx.r31.s64 = ctx.r1.s64 + 244;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwzx r9,r29,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// cmpwi cr6,r9,-1
	cr6.compare<int32_t>(ctx.r9.s32, -1, xer);
	// bne cr6,0x82ad11b8
	if (!cr6.eq) goto loc_82AD11B8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82AD11B4;
	sub_82D2AEC8(ctx, base);
	// b 0x82ad11f0
	goto loc_82AD11F0;
loc_82AD11B8:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x82AD11C0;
	sub_82D2AEC8(ctx, base);
	// lwzx r31,r29,r31
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, xer);
	// ble cr6,0x82ad11d4
	if (!cr6.gt) goto loc_82AD11D4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82AD11D4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82aa38e0
	ctx.lr = 0x82AD11DC;
	sub_82AA38E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82d32c58
	ctx.lr = 0x82AD11F0;
	sub_82D32C58(ctx, base);
loc_82AD11F0:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r29,24
	cr6.compare<uint32_t>(ctx.r29.u32, 24, xer);
	// blt cr6,0x82ad117c
	if (cr6.lt) goto loc_82AD117C;
	// li r24,15
	ctx.r24.s64 = 15;
	// stw r23,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r23.u32);
	// stb r23,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r23.u8);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stw r24,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r24.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r24,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r24.u32);
	// stw r23,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r23.u32);
	// stb r23,204(r1)
	PPC_STORE_U8(ctx.r1.u32 + 204, ctx.r23.u8);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AD1230;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,272(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// beq cr6,0x82ad1248
	if (cr6.eq) goto loc_82AD1248;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82AD1248:
	// clrlwi r26,r11,24
	ctx.r26.u64 = ctx.r11.u32 & 0xFF;
	// li r25,2
	ctx.r25.s64 = 2;
	// cmplwi cr6,r26,1
	cr6.compare<uint32_t>(ctx.r26.u32, 1, xer);
	// bne cr6,0x82ad1310
	if (!cr6.eq) goto loc_82AD1310;
	// lwz r11,268(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stb r23,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r23.u8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x8315e518
	ctx.lr = 0x82AD1278;
	sub_8315E518(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8259cb28
	ctx.lr = 0x82AD128C;
	sub_8259CB28(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82ad12a8
	if (cr6.lt) goto loc_82AD12A8;
	// stw r25,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r25.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x82AD12A8;
	sub_825952B8(ctx, base);
loc_82AD12A8:
	// stw r24,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r24.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r23,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r23.u32);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// stb r23,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r23.u8);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stb r23,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r23.u8);
	// bl 0x8315e518
	ctx.lr = 0x82AD12C8;
	sub_8315E518(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,204
	ctx.r3.s64 = ctx.r1.s64 + 204;
	// bl 0x8259cb28
	ctx.lr = 0x82AD12DC;
	sub_8259CB28(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ad12f8
	if (cr6.lt) goto loc_82AD12F8;
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x82AD12F8;
	sub_825952B8(ctx, base);
loc_82AD12F8:
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// stw r24,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r24.u32);
	// stw r23,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r23.u32);
	// stb r23,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r23.u8);
	// ori r4,r4,10
	ctx.r4.u64 = ctx.r4.u64 | 10;
	// b 0x82ad1318
	goto loc_82AD1318;
loc_82AD1310:
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// ori r4,r4,11
	ctx.r4.u64 = ctx.r4.u64 | 11;
loc_82AD1318:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d29598
	ctx.lr = 0x82AD1320;
	sub_82D29598(ctx, base);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r29,r1,176
	ctx.r29.s64 = ctx.r1.s64 + 176;
	// addi r31,r11,-9332
	ctx.r31.s64 = ctx.r11.s64 + -9332;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
loc_82AD1330:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AD1348;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r26,1
	cr6.compare<uint32_t>(ctx.r26.u32, 1, xer);
	// li r5,2
	ctx.r5.s64 = 2;
	// bne cr6,0x82ad1378
	if (!cr6.eq) goto loc_82AD1378;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x82AD1360;
	sub_82D2AEC8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82AD1374;
	sub_82D291E0(ctx, base);
	// b 0x82ad1380
	goto loc_82AD1380;
loc_82AD1378:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82AD1380;
	sub_82D2AEC8(ctx, base);
loc_82AD1380:
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// bne 0x82ad1330
	if (!cr0.eq) goto loc_82AD1330;
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AD13AC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r1,232
	ctx.r31.s64 = ctx.r1.s64 + 232;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82AD13B4:
	// addi r31,r31,-28
	ctx.r31.s64 = ctx.r31.s64 + -28;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ad13d4
	if (cr6.lt) goto loc_82AD13D4;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// bl 0x825952b8
	ctx.lr = 0x82AD13D4;
	sub_825952B8(ctx, base);
loc_82AD13D4:
	// stw r24,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r24.u32);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r23,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r23.u32);
	// stb r23,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r23.u8);
	// bge 0x82ad13b4
	if (!cr0.lt) goto loc_82AD13B4;
loc_82AD13E8:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD13F0"))) PPC_WEAK_FUNC(sub_82AD13F0);
PPC_FUNC_IMPL(__imp__sub_82AD13F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r7,10400(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10400);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82ad1450
	if (cr6.eq) goto loc_82AD1450;
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_82AD1408:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// xor r6,r8,r11
	ctx.r6.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// rlwinm r5,r6,0,0,13
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82ad1430
	if (!cr6.eq) goto loc_82AD1430;
	// xor r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// clrlwi r6,r11,14
	ctx.r6.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82ad1434
	if (cr6.eq) goto loc_82AD1434;
loc_82AD1430:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AD1434:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ad1458
	if (!cr6.eq) goto loc_82AD1458;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// blt cr6,0x82ad1408
	if (cr6.lt) goto loc_82AD1408;
loc_82AD1450:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82AD1458:
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD1468"))) PPC_WEAK_FUNC(sub_82AD1468);
PPC_FUNC_IMPL(__imp__sub_82AD1468) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r7,2400(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2400);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82ad14c8
	if (cr6.eq) goto loc_82AD14C8;
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_82AD1480:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// xor r6,r8,r11
	ctx.r6.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// rlwinm r5,r6,0,0,13
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82ad14a8
	if (!cr6.eq) goto loc_82AD14A8;
	// xor r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// clrlwi r6,r11,14
	ctx.r6.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82ad14ac
	if (cr6.eq) goto loc_82AD14AC;
loc_82AD14A8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AD14AC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ad14d0
	if (!cr6.eq) goto loc_82AD14D0;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// blt cr6,0x82ad1480
	if (cr6.lt) goto loc_82AD1480;
loc_82AD14C8:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82AD14D0:
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD14E0"))) PPC_WEAK_FUNC(sub_82AD14E0);
PPC_FUNC_IMPL(__imp__sub_82AD14E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82AD14E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x82AD14F8;
	sub_831156E8(ctx, base);
	// lwz r29,48(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x831156e8
	ctx.lr = 0x82AD1500;
	sub_831156E8(ctx, base);
	// addis r28,r29,222
	ctx.r28.s64 = ctx.r29.s64 + 14548992;
	// lwz r30,52(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r28,r28,-8464
	ctx.r28.s64 = ctx.r28.s64 + -8464;
	// bl 0x830ff290
	ctx.lr = 0x82AD1510;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82AD1514;
	sub_830FFAA8(ctx, base);
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x82ad16b8
	if (cr6.gt) goto loc_82AD16B8;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82ad157c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82AD157C;
	// bdzf 4*cr6+eq,0x82ad15bc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82AD15BC;
	// bdzf 4*cr6+eq,0x82ad1668
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82AD1668;
	// bne cr6,0x82ad165c
	if (!cr6.eq) goto loc_82AD165C;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r10,-20632
	ctx.r5.s64 = ctx.r10.s64 + -20632;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x831178a0
	ctx.lr = 0x82AD1558;
	sub_831178A0(ctx, base);
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwimi r9,r8,0,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwimi r7,r6,0,14,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x3FFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFC0000);
	// stw r7,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r7.u32);
	// b 0x82ad16b8
	goto loc_82AD16B8;
loc_82AD157C:
	// bl 0x8311e3d0
	ctx.lr = 0x82AD1580;
	sub_8311E3D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ad16b8
	if (cr6.eq) goto loc_82AD16B8;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8311d640
	ctx.lr = 0x82AD1598;
	sub_8311D640(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwimi r10,r11,0,14,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwimi r9,r8,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
	// b 0x82ad16b8
	goto loc_82AD16B8;
loc_82AD15BC:
	// cmplwi cr6,r3,12
	cr6.compare<uint32_t>(ctx.r3.u32, 12, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82ad161c
	if (!cr6.eq) goto loc_82AD161C;
	// addis r10,r29,229
	ctx.r10.s64 = ctx.r29.s64 + 15007744;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-23248
	ctx.r10.s64 = ctx.r10.s64 + -23248;
loc_82AD15D4:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r8,43
	cr6.compare<int32_t>(ctx.r8.s32, 43, xer);
	// beq cr6,0x82ad15f4
	if (cr6.eq) goto loc_82AD15F4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// cmplwi cr6,r11,200
	cr6.compare<uint32_t>(ctx.r11.u32, 200, xer);
	// blt cr6,0x82ad15d4
	if (cr6.lt) goto loc_82AD15D4;
	// b 0x82ad15f8
	goto loc_82AD15F8;
loc_82AD15F4:
	// li r9,1
	ctx.r9.s64 = 1;
loc_82AD15F8:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ad1610
	if (cr6.eq) goto loc_82AD1610;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// b 0x82ad16b8
	goto loc_82AD16B8;
loc_82AD1610:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// b 0x82ad16b8
	goto loc_82AD16B8;
loc_82AD161C:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r10,-20632
	ctx.r5.s64 = ctx.r10.s64 + -20632;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x831178a0
	ctx.lr = 0x82AD1638;
	sub_831178A0(ctx, base);
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwimi r9,r8,0,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// rotlwi r6,r9,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwimi r6,r7,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r6.u32);
	// b 0x82ad16b8
	goto loc_82AD16B8;
loc_82AD165C:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// b 0x82ad16b8
	goto loc_82AD16B8;
loc_82AD1668:
	// addis r30,r30,5
	ctx.r30.s64 = ctx.r30.s64 + 327680;
	// addi r30,r30,14904
	ctx.r30.s64 = ctx.r30.s64 + 14904;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83123768
	ctx.lr = 0x82AD1678;
	sub_83123768(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x82ad16b8
	if (cr6.eq) goto loc_82AD16B8;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83123a08
	ctx.lr = 0x82AD1698;
	sub_83123A08(ctx, base);
	// lwz r10,796(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 796);
	// rlwinm r9,r10,0,16,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000;
	// cmplwi cr6,r9,8192
	cr6.compare<uint32_t>(ctx.r9.u32, 8192, xer);
	// bne cr6,0x82ad16b8
	if (!cr6.eq) goto loc_82AD16B8;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stb r10,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r10.u8);
loc_82AD16B8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x8311c148
	ctx.lr = 0x82AD16C4;
	sub_8311C148(ctx, base);
	// lwz r11,796(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 796);
	// rlwinm r10,r11,0,16,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD16DC"))) PPC_WEAK_FUNC(sub_82AD16DC);
PPC_FUNC_IMPL(__imp__sub_82AD16DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AD16E0"))) PPC_WEAK_FUNC(sub_82AD16E0);
PPC_FUNC_IMPL(__imp__sub_82AD16E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,20
	cr6.compare<uint32_t>(ctx.r4.u32, 20, xer);
	// bgt cr6,0x82ad173c
	if (cr6.gt) goto loc_82AD173C;
	// cmplwi cr6,r4,15
	cr6.compare<uint32_t>(ctx.r4.u32, 15, xer);
	// bge cr6,0x82ad1774
	if (!cr6.lt) goto loc_82AD1774;
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82ad172c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82AD172C;
	// bdzf 4*cr6+eq,0x82ad1780
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82AD1780;
	// bdzf 4*cr6+eq,0x82ad171c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82AD171C;
	// bdzf 4*cr6+eq,0x82ad1780
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82AD1780;
	// bdzf 4*cr6+eq,0x82ad1780
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82AD1780;
	// bne cr6,0x82ad1760
	if (!cr6.eq) goto loc_82AD1760;
loc_82AD171C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,105(r3)
	PPC_STORE_U8(ctx.r3.u32 + 105, ctx.r11.u8);
	// stb r11,106(r3)
	PPC_STORE_U8(ctx.r3.u32 + 106, ctx.r11.u8);
	// blr 
	return;
loc_82AD172C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,105(r3)
	PPC_STORE_U8(ctx.r3.u32 + 105, ctx.r11.u8);
	// stb r11,104(r3)
	PPC_STORE_U8(ctx.r3.u32 + 104, ctx.r11.u8);
	// blr 
	return;
loc_82AD173C:
	// cmplwi cr6,r4,48
	cr6.compare<uint32_t>(ctx.r4.u32, 48, xer);
	// bgt cr6,0x82ad176c
	if (cr6.gt) goto loc_82AD176C;
	// beq cr6,0x82ad171c
	if (cr6.eq) goto loc_82AD171C;
	// cmplwi cr6,r4,24
	cr6.compare<uint32_t>(ctx.r4.u32, 24, xer);
	// beq cr6,0x82ad1774
	if (cr6.eq) goto loc_82AD1774;
	// cmplwi cr6,r4,27
	cr6.compare<uint32_t>(ctx.r4.u32, 27, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// cmplwi cr6,r4,32
	cr6.compare<uint32_t>(ctx.r4.u32, 32, xer);
	// bgtlr cr6
	if (cr6.gt) return;
loc_82AD1760:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,106(r3)
	PPC_STORE_U8(ctx.r3.u32 + 106, ctx.r11.u8);
	// blr 
	return;
loc_82AD176C:
	// cmplwi cr6,r4,49
	cr6.compare<uint32_t>(ctx.r4.u32, 49, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_82AD1774:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,107(r3)
	PPC_STORE_U8(ctx.r3.u32 + 107, ctx.r11.u8);
	// stb r11,104(r3)
	PPC_STORE_U8(ctx.r3.u32 + 104, ctx.r11.u8);
loc_82AD1780:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD1784"))) PPC_WEAK_FUNC(sub_82AD1784);
PPC_FUNC_IMPL(__imp__sub_82AD1784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AD1788"))) PPC_WEAK_FUNC(sub_82AD1788);
PPC_FUNC_IMPL(__imp__sub_82AD1788) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82AD1790;
	__savegprlr_27(ctx, base);
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
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x8308e078
	ctx.lr = 0x82AD17AC;
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
	ctx.lr = 0x82AD17C4;
	sub_82D253F8(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// stb r28,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r28.u8);
	// lis r9,-31777
	ctx.r9.s64 = -2082537472;
	// addi r8,r11,-19840
	ctx.r8.s64 = ctx.r11.s64 + -19840;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r7,r10,-17088
	ctx.r7.s64 = ctx.r10.s64 + -17088;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stb r29,97(r31)
	PPC_STORE_U8(ctx.r31.u32 + 97, ctx.r29.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,-9076(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -9076);
	// stb r29,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r29.u8);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// bl 0x82ad14e0
	ctx.lr = 0x82AD1804;
	sub_82AD14E0(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// cntlzw r4,r6
	ctx.r4.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// addi r30,r5,-9172
	ctx.r30.s64 = ctx.r5.s64 + -9172;
	// rlwinm r11,r4,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r11.u8);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// rotlwi r9,r10,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lwzx r4,r9,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// bl 0x82d20ae0
	ctx.lr = 0x82AD1830;
	sub_82D20AE0(ctx, base);
	// lbz r8,96(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 96);
	// addi r7,r30,8
	ctx.r7.s64 = ctx.r30.s64 + 8;
	// rotlwi r6,r8,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r6,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// bl 0x82d23390
	ctx.lr = 0x82AD184C;
	sub_82D23390(ctx, base);
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ad1884
	if (cr6.eq) goto loc_82AD1884;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x82ad1884
	if (cr6.eq) goto loc_82AD1884;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// beq cr6,0x82ad1884
	if (cr6.eq) goto loc_82AD1884;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82AD1878;
	sub_82D19788(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,108(r31)
	PPC_STORE_U8(ctx.r31.u32 + 108, ctx.r11.u8);
	// b 0x82ad1894
	goto loc_82AD1894;
loc_82AD1884:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82AD1894;
	sub_82D19788(ctx, base);
loc_82AD1894:
	// li r9,4
	ctx.r9.s64 = 4;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r10,r31,104
	ctx.r10.s64 = ctx.r31.s64 + 104;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82AD18A4:
	// stbx r29,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r29.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82ad18a4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82AD18A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD18BC"))) PPC_WEAK_FUNC(sub_82AD18BC);
PPC_FUNC_IMPL(__imp__sub_82AD18BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AD18C0"))) PPC_WEAK_FUNC(sub_82AD18C0);
PPC_FUNC_IMPL(__imp__sub_82AD18C0) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,-19840
	ctx.r9.s64 = ctx.r11.s64 + -19840;
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
	ctx.lr = 0x82AD18F8;
	sub_82D25548(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82ad1910
	if (cr6.eq) goto loc_82AD1910;
	// bl 0x82416268
	ctx.lr = 0x82AD190C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82AD1910:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD1928"))) PPC_WEAK_FUNC(sub_82AD1928);
PPC_FUNC_IMPL(__imp__sub_82AD1928) {
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
	// clrlwi r30,r5,24
	ctx.r30.u64 = ctx.r5.u32 & 0xFF;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,11
	cr6.compare<uint32_t>(ctx.r30.u32, 11, xer);
	// bne cr6,0x82ad1970
	if (!cr6.eq) goto loc_82AD1970;
	// bl 0x82ad16e0
	ctx.lr = 0x82AD1950;
	sub_82AD16E0(ctx, base);
loc_82AD1950:
	// lis r3,108
	ctx.r3.s64 = 7077888;
	// ori r3,r3,98
	ctx.r3.u64 = ctx.r3.u64 | 98;
loc_82AD1958:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82AD1970:
	// cmplwi cr6,r30,12
	cr6.compare<uint32_t>(ctx.r30.u32, 12, xer);
	// bge cr6,0x82ad1950
	if (!cr6.lt) goto loc_82AD1950;
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// cmplwi cr6,r11,90
	cr6.compare<uint32_t>(ctx.r11.u32, 90, xer);
	// bgt cr6,0x82ad1de0
	if (cr6.gt) goto loc_82AD1DE0;
	// lis r12,-32083
	ctx.r12.s64 = -2102591488;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,6556
	ctx.r12.s64 = ctx.r12.s64 + 6556;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82AD1B08;
	case 1:
		goto loc_82AD1B38;
	case 2:
		goto loc_82AD1B68;
	case 3:
		goto loc_82AD1DC0;
	case 4:
		goto loc_82AD1B98;
	case 5:
		goto loc_82AD1B98;
	case 6:
		goto loc_82AD1DC0;
	case 7:
		goto loc_82AD1BC8;
	case 8:
		goto loc_82AD1DE0;
	case 9:
		goto loc_82AD1DE0;
	case 10:
		goto loc_82AD1DE0;
	case 11:
		goto loc_82AD1DE0;
	case 12:
		goto loc_82AD1DE0;
	case 13:
		goto loc_82AD1DE0;
	case 14:
		goto loc_82AD1C28;
	case 15:
		goto loc_82AD1C28;
	case 16:
		goto loc_82AD1C28;
	case 17:
		goto loc_82AD1C28;
	case 18:
		goto loc_82AD1C28;
	case 19:
		goto loc_82AD1C28;
	case 20:
		goto loc_82AD1DE0;
	case 21:
		goto loc_82AD1DE0;
	case 22:
		goto loc_82AD1DE0;
	case 23:
		goto loc_82AD1C28;
	case 24:
		goto loc_82AD1DE0;
	case 25:
		goto loc_82AD1DE0;
	case 26:
		goto loc_82AD1D90;
	case 27:
		goto loc_82AD1D50;
	case 28:
		goto loc_82AD1D50;
	case 29:
		goto loc_82AD1D50;
	case 30:
		goto loc_82AD1D50;
	case 31:
		goto loc_82AD1D50;
	case 32:
		goto loc_82AD1BF8;
	case 33:
		goto loc_82AD1CF0;
	case 34:
		goto loc_82AD1BF8;
	case 35:
		goto loc_82AD1D20;
	case 36:
		goto loc_82AD1DE0;
	case 37:
		goto loc_82AD1DE0;
	case 38:
		goto loc_82AD1DE0;
	case 39:
		goto loc_82AD1DE0;
	case 40:
		goto loc_82AD1DE0;
	case 41:
		goto loc_82AD1DE0;
	case 42:
		goto loc_82AD1DE0;
	case 43:
		goto loc_82AD1DE0;
	case 44:
		goto loc_82AD1DE0;
	case 45:
		goto loc_82AD1DE0;
	case 46:
		goto loc_82AD1DE0;
	case 47:
		goto loc_82AD1B98;
	case 48:
		goto loc_82AD1C28;
	case 49:
		goto loc_82AD1DE0;
	case 50:
		goto loc_82AD1DE0;
	case 51:
		goto loc_82AD1DE0;
	case 52:
		goto loc_82AD1DE0;
	case 53:
		goto loc_82AD1DC0;
	case 54:
		goto loc_82AD1DC0;
	case 55:
		goto loc_82AD1DE0;
	case 56:
		goto loc_82AD1DE0;
	case 57:
		goto loc_82AD1DE0;
	case 58:
		goto loc_82AD1DC0;
	case 59:
		goto loc_82AD1DC0;
	case 60:
		goto loc_82AD1DC0;
	case 61:
		goto loc_82AD1DC0;
	case 62:
		goto loc_82AD1DC0;
	case 63:
		goto loc_82AD1DE0;
	case 64:
		goto loc_82AD1DE0;
	case 65:
		goto loc_82AD1DE0;
	case 66:
		goto loc_82AD1DE0;
	case 67:
		goto loc_82AD1DE0;
	case 68:
		goto loc_82AD1DE0;
	case 69:
		goto loc_82AD1DC0;
	case 70:
		goto loc_82AD1DC0;
	case 71:
		goto loc_82AD1DC0;
	case 72:
		goto loc_82AD1DC0;
	case 73:
		goto loc_82AD1DC0;
	case 74:
		goto loc_82AD1DC0;
	case 75:
		goto loc_82AD1DC0;
	case 76:
		goto loc_82AD1DC0;
	case 77:
		goto loc_82AD1DC0;
	case 78:
		goto loc_82AD1DC0;
	case 79:
		goto loc_82AD1DC0;
	case 80:
		goto loc_82AD1DE0;
	case 81:
		goto loc_82AD1DC0;
	case 82:
		goto loc_82AD1DC0;
	case 83:
		goto loc_82AD1DC0;
	case 84:
		goto loc_82AD1DE0;
	case 85:
		goto loc_82AD1DE0;
	case 86:
		goto loc_82AD1DE0;
	case 87:
		goto loc_82AD1DE0;
	case 88:
		goto loc_82AD1DE0;
	case 89:
		goto loc_82AD1DE0;
	case 90:
		goto loc_82AD1B98;
	default:
		return;
	}
	// lwz r21,6920(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 6920);
	// lwz r21,6968(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 6968);
	// lwz r21,7016(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 7016);
	// lwz r21,7616(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 7616);
	// lwz r21,7064(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 7064);
	// lwz r21,7064(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 7064);
	// lwz r21,7616(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 7616);
	// lwz r21,7112(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 7112);
	// lwz r21,7648(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 7648);
	// lwz r21,7648(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 7648);
	// lwz r21,7648(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 7648);
	// lwz r21,7648(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 7648);
	// lwz r21,7648(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 7648);
	// lwz r21,7648(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 7648);
	// lwz r21,7208(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 7208);
	// lwz r21,7208(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 7208);
	// lwz r21,7208(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 7208);
	// lwz r21,7208(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 7208);
	// lwz r21,7208(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 7208);
	// lwz r21,7208(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 7208);
	// lwz r21,7648(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 7648);
	// lwz r21,7648(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 7648);
	// lwz r21,7648(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 7648);
	// lwz r21,7208(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 7208);
	// lwz r21,7648(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 7648);
	// lwz r21,7648(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 7648);
	// lwz r21,7568(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 7568);
	// lwz r21,7504(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 7504);
	// lwz r21,7504(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 7504);
	// lwz r21,7504(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 7504);
	// lwz r21,7504(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 7504);
	// lwz r21,7504(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 7504);
	// lwz r21,7160(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 7160);
	// lwz r21,7408(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 7408);
	// lwz r21,7160(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 7160);
	// lwz r21,7456(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 7456);
	// lwz r21,7648(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 7648);
	// lwz r21,7648(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 7648);
	// lwz r21,7648(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 7648);
	// lwz r21,7648(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 7648);
	// lwz r21,7648(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 7648);
	// lwz r21,7648(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 7648);
	// lwz r21,7648(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 7648);
	// lwz r21,7648(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 7648);
	// lwz r21,7648(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 7648);
	// lwz r21,7648(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 7648);
	// lwz r21,7648(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 7648);
	// lwz r21,7064(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 7064);
	// lwz r21,7208(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 7208);
	// lwz r21,7648(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 7648);
	// lwz r21,7648(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 7648);
	// lwz r21,7648(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 7648);
	// lwz r21,7648(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 7648);
	// lwz r21,7616(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 7616);
	// lwz r21,7616(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 7616);
	// lwz r21,7648(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 7648);
	// lwz r21,7648(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 7648);
	// lwz r21,7648(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 7648);
	// lwz r21,7616(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 7616);
	// lwz r21,7616(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 7616);
	// lwz r21,7616(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 7616);
	// lwz r21,7616(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 7616);
	// lwz r21,7616(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 7616);
	// lwz r21,7648(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 7648);
	// lwz r21,7648(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 7648);
	// lwz r21,7648(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 7648);
	// lwz r21,7648(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 7648);
	// lwz r21,7648(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 7648);
	// lwz r21,7648(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 7648);
	// lwz r21,7616(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 7616);
	// lwz r21,7616(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 7616);
	// lwz r21,7616(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 7616);
	// lwz r21,7616(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 7616);
	// lwz r21,7616(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 7616);
	// lwz r21,7616(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 7616);
	// lwz r21,7616(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 7616);
	// lwz r21,7616(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 7616);
	// lwz r21,7616(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 7616);
	// lwz r21,7616(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 7616);
	// lwz r21,7616(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 7616);
	// lwz r21,7648(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 7648);
	// lwz r21,7616(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 7616);
	// lwz r21,7616(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 7616);
	// lwz r21,7616(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 7616);
	// lwz r21,7648(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 7648);
	// lwz r21,7648(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 7648);
	// lwz r21,7648(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 7648);
	// lwz r21,7648(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 7648);
	// lwz r21,7648(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 7648);
	// lwz r21,7648(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 7648);
	// lwz r21,7064(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 7064);
loc_82AD1B08:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-19024
	ctx.r9.s64 = ctx.r11.s64 + -19024;
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
loc_82AD1B18:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r30
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, xer);
	// beq cr6,0x82ad1e10
	if (cr6.eq) goto loc_82AD1E10;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,12
	cr6.compare<uint32_t>(ctx.r10.u32, 12, xer);
	// blt cr6,0x82ad1b18
	if (cr6.lt) goto loc_82AD1B18;
	// b 0x82ad1950
	goto loc_82AD1950;
loc_82AD1B38:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-19080
	ctx.r9.s64 = ctx.r11.s64 + -19080;
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
loc_82AD1B48:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r30
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, xer);
	// beq cr6,0x82ad1e10
	if (cr6.eq) goto loc_82AD1E10;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,12
	cr6.compare<uint32_t>(ctx.r10.u32, 12, xer);
	// blt cr6,0x82ad1b48
	if (cr6.lt) goto loc_82AD1B48;
	// b 0x82ad1950
	goto loc_82AD1950;
loc_82AD1B68:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-19136
	ctx.r9.s64 = ctx.r11.s64 + -19136;
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
loc_82AD1B78:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r30
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, xer);
	// beq cr6,0x82ad1e10
	if (cr6.eq) goto loc_82AD1E10;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,12
	cr6.compare<uint32_t>(ctx.r10.u32, 12, xer);
	// blt cr6,0x82ad1b78
	if (cr6.lt) goto loc_82AD1B78;
	// b 0x82ad1950
	goto loc_82AD1950;
loc_82AD1B98:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-19192
	ctx.r9.s64 = ctx.r11.s64 + -19192;
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
loc_82AD1BA8:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r30
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, xer);
	// beq cr6,0x82ad1e10
	if (cr6.eq) goto loc_82AD1E10;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,12
	cr6.compare<uint32_t>(ctx.r10.u32, 12, xer);
	// blt cr6,0x82ad1ba8
	if (cr6.lt) goto loc_82AD1BA8;
	// b 0x82ad1950
	goto loc_82AD1950;
loc_82AD1BC8:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-19240
	ctx.r9.s64 = ctx.r11.s64 + -19240;
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
loc_82AD1BD8:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r30
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, xer);
	// beq cr6,0x82ad1e10
	if (cr6.eq) goto loc_82AD1E10;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,12
	cr6.compare<uint32_t>(ctx.r10.u32, 12, xer);
	// blt cr6,0x82ad1bd8
	if (cr6.lt) goto loc_82AD1BD8;
	// b 0x82ad1950
	goto loc_82AD1950;
loc_82AD1BF8:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-19288
	ctx.r9.s64 = ctx.r11.s64 + -19288;
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
loc_82AD1C08:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r30
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, xer);
	// beq cr6,0x82ad1e10
	if (cr6.eq) goto loc_82AD1E10;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,12
	cr6.compare<uint32_t>(ctx.r10.u32, 12, xer);
	// blt cr6,0x82ad1c08
	if (cr6.lt) goto loc_82AD1C08;
	// b 0x82ad1950
	goto loc_82AD1950;
loc_82AD1C28:
	// bl 0x831156e8
	ctx.lr = 0x82AD1C2C;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r31,48(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x8316ef18
	ctx.lr = 0x82AD1C44;
	sub_8316EF18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8311c338
	ctx.lr = 0x82AD1C50;
	sub_8311C338(ctx, base);
	// lwz r10,540(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 540);
	// rlwinm r11,r10,23,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0x7F;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,17
	cr6.compare<uint32_t>(ctx.r11.u32, 17, xer);
	// bge cr6,0x82ad1c90
	if (!cr6.lt) goto loc_82AD1C90;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r9,r11,-19328
	ctx.r9.s64 = ctx.r11.s64 + -19328;
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
loc_82AD1C70:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r30
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, xer);
	// beq cr6,0x82ad1e10
	if (cr6.eq) goto loc_82AD1E10;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,12
	cr6.compare<uint32_t>(ctx.r10.u32, 12, xer);
	// blt cr6,0x82ad1c70
	if (cr6.lt) goto loc_82AD1C70;
	// b 0x82ad1950
	goto loc_82AD1950;
loc_82AD1C90:
	// cmplwi cr6,r11,33
	cr6.compare<uint32_t>(ctx.r11.u32, 33, xer);
	// bge cr6,0x82ad1cc4
	if (!cr6.lt) goto loc_82AD1CC4;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r9,r11,-19376
	ctx.r9.s64 = ctx.r11.s64 + -19376;
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
loc_82AD1CA4:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r30
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, xer);
	// beq cr6,0x82ad1e10
	if (cr6.eq) goto loc_82AD1E10;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,12
	cr6.compare<uint32_t>(ctx.r10.u32, 12, xer);
	// blt cr6,0x82ad1ca4
	if (cr6.lt) goto loc_82AD1CA4;
	// b 0x82ad1950
	goto loc_82AD1950;
loc_82AD1CC4:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r9,r11,-19432
	ctx.r9.s64 = ctx.r11.s64 + -19432;
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
loc_82AD1CD0:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r30
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, xer);
	// beq cr6,0x82ad1e10
	if (cr6.eq) goto loc_82AD1E10;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,12
	cr6.compare<uint32_t>(ctx.r10.u32, 12, xer);
	// blt cr6,0x82ad1cd0
	if (cr6.lt) goto loc_82AD1CD0;
	// b 0x82ad1950
	goto loc_82AD1950;
loc_82AD1CF0:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-19472
	ctx.r9.s64 = ctx.r11.s64 + -19472;
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
loc_82AD1D00:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r30
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, xer);
	// beq cr6,0x82ad1e10
	if (cr6.eq) goto loc_82AD1E10;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,12
	cr6.compare<uint32_t>(ctx.r10.u32, 12, xer);
	// blt cr6,0x82ad1d00
	if (cr6.lt) goto loc_82AD1D00;
	// b 0x82ad1950
	goto loc_82AD1950;
loc_82AD1D20:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-19328
	ctx.r9.s64 = ctx.r11.s64 + -19328;
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
loc_82AD1D30:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r30
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, xer);
	// beq cr6,0x82ad1e10
	if (cr6.eq) goto loc_82AD1E10;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,12
	cr6.compare<uint32_t>(ctx.r10.u32, 12, xer);
	// blt cr6,0x82ad1d30
	if (cr6.lt) goto loc_82AD1D30;
	// b 0x82ad1950
	goto loc_82AD1950;
loc_82AD1D50:
	// cmplwi cr6,r30,8
	cr6.compare<uint32_t>(ctx.r30.u32, 8, xer);
	// bne cr6,0x82ad1d60
	if (!cr6.eq) goto loc_82AD1D60;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,97(r3)
	PPC_STORE_U8(ctx.r3.u32 + 97, ctx.r11.u8);
loc_82AD1D60:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-19488
	ctx.r9.s64 = ctx.r11.s64 + -19488;
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
loc_82AD1D70:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r30
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, xer);
	// beq cr6,0x82ad1e10
	if (cr6.eq) goto loc_82AD1E10;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,12
	cr6.compare<uint32_t>(ctx.r10.u32, 12, xer);
	// blt cr6,0x82ad1d70
	if (cr6.lt) goto loc_82AD1D70;
	// b 0x82ad1950
	goto loc_82AD1950;
loc_82AD1D90:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-19552
	ctx.r9.s64 = ctx.r11.s64 + -19552;
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
loc_82AD1DA0:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r30
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, xer);
	// beq cr6,0x82ad1e10
	if (cr6.eq) goto loc_82AD1E10;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,12
	cr6.compare<uint32_t>(ctx.r10.u32, 12, xer);
	// blt cr6,0x82ad1da0
	if (cr6.lt) goto loc_82AD1DA0;
	// b 0x82ad1950
	goto loc_82AD1950;
loc_82AD1DC0:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x82ad1dd4
	if (!cr6.eq) goto loc_82AD1DD4;
	// lis r3,930
	ctx.r3.s64 = 60948480;
	// ori r3,r3,32
	ctx.r3.u64 = ctx.r3.u64 | 32;
	// b 0x82ad1958
	goto loc_82AD1958;
loc_82AD1DD4:
	// lis r3,26
	ctx.r3.s64 = 1703936;
	// ori r3,r3,254
	ctx.r3.u64 = ctx.r3.u64 | 254;
	// b 0x82ad1958
	goto loc_82AD1958;
loc_82AD1DE0:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-19136
	ctx.r9.s64 = ctx.r11.s64 + -19136;
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
loc_82AD1DF0:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r30
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, xer);
	// beq cr6,0x82ad1e10
	if (cr6.eq) goto loc_82AD1E10;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,12
	cr6.compare<uint32_t>(ctx.r10.u32, 12, xer);
	// blt cr6,0x82ad1df0
	if (cr6.lt) goto loc_82AD1DF0;
	// b 0x82ad1950
	goto loc_82AD1950;
loc_82AD1E10:
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r11,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// b 0x82ad1958
	goto loc_82AD1958;
}

__attribute__((alias("__imp__sub_82AD1E1C"))) PPC_WEAK_FUNC(sub_82AD1E1C);
PPC_FUNC_IMPL(__imp__sub_82AD1E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AD1E20"))) PPC_WEAK_FUNC(sub_82AD1E20);
PPC_FUNC_IMPL(__imp__sub_82AD1E20) {
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
	// blt cr6,0x82ad1e48
	if (cr6.lt) goto loc_82AD1E48;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82ad1e4c
	goto loc_82AD1E4C;
loc_82AD1E48:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82AD1E4C:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,112
	ctx.r4.s64 = 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82AD1E68;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ad1e88
	if (cr6.eq) goto loc_82AD1E88;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ad1788
	ctx.lr = 0x82AD1E84;
	sub_82AD1788(ctx, base);
	// b 0x82ad1e8c
	goto loc_82AD1E8C;
loc_82AD1E88:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82AD1E8C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD1EA4"))) PPC_WEAK_FUNC(sub_82AD1EA4);
PPC_FUNC_IMPL(__imp__sub_82AD1EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AD1EA8"))) PPC_WEAK_FUNC(sub_82AD1EA8);
PPC_FUNC_IMPL(__imp__sub_82AD1EA8) {
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
	// blt cr6,0x82ad1ed0
	if (cr6.lt) goto loc_82AD1ED0;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82ad1ed4
	goto loc_82AD1ED4;
loc_82AD1ED0:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82AD1ED4:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,112
	ctx.r4.s64 = 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82AD1EF0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ad1f10
	if (cr6.eq) goto loc_82AD1F10;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ad1788
	ctx.lr = 0x82AD1F0C;
	sub_82AD1788(ctx, base);
	// b 0x82ad1f14
	goto loc_82AD1F14;
loc_82AD1F10:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82AD1F14:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD1F2C"))) PPC_WEAK_FUNC(sub_82AD1F2C);
PPC_FUNC_IMPL(__imp__sub_82AD1F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AD1F30"))) PPC_WEAK_FUNC(sub_82AD1F30);
PPC_FUNC_IMPL(__imp__sub_82AD1F30) {
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
	// blt cr6,0x82ad1f58
	if (cr6.lt) goto loc_82AD1F58;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82ad1f5c
	goto loc_82AD1F5C;
loc_82AD1F58:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82AD1F5C:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,112
	ctx.r4.s64 = 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82AD1F78;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ad1f98
	if (cr6.eq) goto loc_82AD1F98;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ad1788
	ctx.lr = 0x82AD1F94;
	sub_82AD1788(ctx, base);
	// b 0x82ad1f9c
	goto loc_82AD1F9C;
loc_82AD1F98:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82AD1F9C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD1FB4"))) PPC_WEAK_FUNC(sub_82AD1FB4);
PPC_FUNC_IMPL(__imp__sub_82AD1FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AD1FB8"))) PPC_WEAK_FUNC(sub_82AD1FB8);
PPC_FUNC_IMPL(__imp__sub_82AD1FB8) {
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
	// blt cr6,0x82ad1fe0
	if (cr6.lt) goto loc_82AD1FE0;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82ad1fe4
	goto loc_82AD1FE4;
loc_82AD1FE0:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82AD1FE4:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,112
	ctx.r4.s64 = 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82AD2000;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ad2020
	if (cr6.eq) goto loc_82AD2020;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ad1788
	ctx.lr = 0x82AD201C;
	sub_82AD1788(ctx, base);
	// b 0x82ad2024
	goto loc_82AD2024;
loc_82AD2020:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82AD2024:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD203C"))) PPC_WEAK_FUNC(sub_82AD203C);
PPC_FUNC_IMPL(__imp__sub_82AD203C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AD2040"))) PPC_WEAK_FUNC(sub_82AD2040);
PPC_FUNC_IMPL(__imp__sub_82AD2040) {
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
	// blt cr6,0x82ad2068
	if (cr6.lt) goto loc_82AD2068;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82ad206c
	goto loc_82AD206C;
loc_82AD2068:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82AD206C:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,112
	ctx.r4.s64 = 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82AD2088;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ad20a8
	if (cr6.eq) goto loc_82AD20A8;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82ad1788
	ctx.lr = 0x82AD20A4;
	sub_82AD1788(ctx, base);
	// b 0x82ad20ac
	goto loc_82AD20AC;
loc_82AD20A8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82AD20AC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD20C4"))) PPC_WEAK_FUNC(sub_82AD20C4);
PPC_FUNC_IMPL(__imp__sub_82AD20C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AD20C8"))) PPC_WEAK_FUNC(sub_82AD20C8);
PPC_FUNC_IMPL(__imp__sub_82AD20C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82AD20D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x82AD20E0;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addis r29,r11,5
	ctx.r29.s64 = ctx.r11.s64 + 327680;
	// addi r29,r29,14904
	ctx.r29.s64 = ctx.r29.s64 + 14904;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83123768
	ctx.lr = 0x82AD20F4;
	sub_83123768(ctx, base);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// beq cr6,0x82ad2138
	if (cr6.eq) goto loc_82AD2138;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83123a08
	ctx.lr = 0x82AD2114;
	sub_83123A08(ctx, base);
	// lwz r10,796(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 796);
	// rlwinm r9,r10,0,16,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000;
	// cmplwi cr6,r9,8192
	cr6.compare<uint32_t>(ctx.r9.u32, 8192, xer);
	// bne cr6,0x82ad2138
	if (!cr6.eq) goto loc_82AD2138;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ad1fb8
	ctx.lr = 0x82AD2130;
	sub_82AD1FB8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82AD2138:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ad1ea8
	ctx.lr = 0x82AD2144;
	sub_82AD1EA8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD214C"))) PPC_WEAK_FUNC(sub_82AD214C);
PPC_FUNC_IMPL(__imp__sub_82AD214C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AD2150"))) PPC_WEAK_FUNC(sub_82AD2150);
PPC_FUNC_IMPL(__imp__sub_82AD2150) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82ad2304
	if (cr6.eq) goto loc_82AD2304;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// subf r10,r11,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi. r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82ad21c0
	if (!cr0.eq) goto loc_82AD21C0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x82ad2304
	if (cr6.eq) goto loc_82AD2304;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplw cr6,r9,r9
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r9.u32, xer);
	// beq cr6,0x82ad2300
	if (cr6.eq) goto loc_82AD2300;
loc_82AD21A4:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne cr6,0x82ad21a4
	if (!cr6.eq) goto loc_82AD21A4;
	// b 0x82ad2300
	goto loc_82AD2300;
loc_82AD21C0:
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r7,r4,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r4.s64;
	// srawi r8,r7,2
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 2;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bgt cr6,0x82ad221c
	if (cr6.gt) goto loc_82AD221C;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x82ad21f8
	if (cr6.eq) goto loc_82AD21F8;
	// addi r10,r4,-4
	ctx.r10.s64 = ctx.r4.s64 + -4;
loc_82AD21E4:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bne cr6,0x82ad21e4
	if (!cr6.eq) goto loc_82AD21E4;
loc_82AD21F8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// srawi r7,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r6.u32);
	// b 0x82ad2304
	goto loc_82AD2304;
loc_82AD221C:
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf r7,r4,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r4.s64;
	// srawi r6,r7,2
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 2;
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// bgt cr6,0x82ad2290
	if (cr6.gt) goto loc_82AD2290;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x82ad2258
	if (cr6.eq) goto loc_82AD2258;
	// addi r10,r4,-4
	ctx.r10.s64 = ctx.r4.s64 + -4;
loc_82AD2244:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bne cr6,0x82ad2244
	if (!cr6.eq) goto loc_82AD2244;
loc_82AD2258:
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// beq cr6,0x82ad2300
	if (cr6.eq) goto loc_82AD2300;
loc_82AD226C:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ad227c
	if (cr6.eq) goto loc_82AD227C;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_82AD227C:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// bne cr6,0x82ad226c
	if (!cr6.eq) goto loc_82AD226C;
	// b 0x82ad2300
	goto loc_82AD2300;
loc_82AD2290:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82ad22a8
	if (cr6.eq) goto loc_82AD22A8;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82AD22A8;
	sub_825952B8(ctx, base);
loc_82AD22A8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r4,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 2;
	// bl 0x8378d6d8
	ctx.lr = 0x82AD22C0;
	sub_8378D6D8(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82ad2304
	if (cr6.eq) goto loc_82AD2304;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x82ad2300
	if (cr6.eq) goto loc_82AD2300;
loc_82AD22E0:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ad22f0
	if (cr6.eq) goto loc_82AD22F0;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
loc_82AD22F0:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x82ad22e0
	if (!cr6.eq) goto loc_82AD22E0;
loc_82AD2300:
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
loc_82AD2304:
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

__attribute__((alias("__imp__sub_82AD2320"))) PPC_WEAK_FUNC(sub_82AD2320);
PPC_FUNC_IMPL(__imp__sub_82AD2320) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82AD2328;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82AD2344;
	sub_82D33DB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r29,r3,100
	ctx.r29.s64 = ctx.r3.s64 + 100;
	// addi r30,r11,-20547
	ctx.r30.s64 = ctx.r11.s64 + -20547;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r4,r30,379
	ctx.r4.s64 = ctx.r30.s64 + 379;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AD236C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// ori r4,r4,318
	ctx.r4.u64 = ctx.r4.u64 | 318;
	// bl 0x82d29598
	ctx.lr = 0x82AD2378;
	sub_82D29598(ctx, base);
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r4,r30,387
	ctx.r4.s64 = ctx.r30.s64 + 387;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82AD2390;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x82ad23c0
	if (!cr6.eq) goto loc_82AD23C0;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// bne cr6,0x82ad23c0
	if (!cr6.eq) goto loc_82AD23C0;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// bne cr6,0x82ad23c0
	if (!cr6.eq) goto loc_82AD23C0;
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// ori r4,r4,98
	ctx.r4.u64 = ctx.r4.u64 | 98;
	// bl 0x82d29598
	ctx.lr = 0x82AD23B8;
	sub_82D29598(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82AD23C0:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x82AD23E4;
	sub_8259CC28(ctx, base);
	// lis r4,804
	ctx.r4.s64 = 52690944;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// ori r4,r4,40
	ctx.r4.u64 = ctx.r4.u64 | 40;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d042a8
	ctx.lr = 0x82AD2400;
	sub_82D042A8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82AD2414;
	sub_82D291E0(ctx, base);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82ad2434
	if (cr6.lt) goto loc_82AD2434;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82AD2434;
	sub_825952B8(ctx, base);
loc_82AD2434:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD243C"))) PPC_WEAK_FUNC(sub_82AD243C);
PPC_FUNC_IMPL(__imp__sub_82AD243C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AD2440"))) PPC_WEAK_FUNC(sub_82AD2440);
PPC_FUNC_IMPL(__imp__sub_82AD2440) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82AD2448;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82AD2464;
	sub_82D33DB0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82AD2470;
	sub_82D33DB0(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r29,r11,-20144
	ctx.r29.s64 = ctx.r11.s64 + -20144;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r29,-8
	ctx.r4.s64 = ctx.r29.s64 + -8;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AD2490;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(ctx.r31.u32, 2, xer);
	// bne cr6,0x82ad24a4
	if (!cr6.eq) goto loc_82AD24A4;
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// ori r4,r4,133
	ctx.r4.u64 = ctx.r4.u64 | 133;
	// b 0x82ad24ac
	goto loc_82AD24AC;
loc_82AD24A4:
	// lis r4,641
	ctx.r4.s64 = 42008576;
	// ori r4,r4,157
	ctx.r4.u64 = ctx.r4.u64 | 157;
loc_82AD24AC:
	// bl 0x82d29598
	ctx.lr = 0x82AD24B0;
	sub_82D29598(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// addi r4,r29,-402
	ctx.r4.s64 = ctx.r29.s64 + -402;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x82AD24D4;
	sub_8259CC28(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82AD24E0;
	sub_82D33DB0(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82AD24F8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,-1
	cr6.compare<int32_t>(ctx.r28.s32, -1, xer);
	// beq cr6,0x82ad2530
	if (cr6.eq) goto loc_82AD2530;
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// ori r4,r4,152
	ctx.r4.u64 = ctx.r4.u64 | 152;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d042a8
	ctx.lr = 0x82AD2518;
	sub_82D042A8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82AD252C;
	sub_82D291E0(ctx, base);
	// b 0x82ad2540
	goto loc_82AD2540;
loc_82AD2530:
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,98
	ctx.r4.u64 = ctx.r4.u64 | 98;
	// bl 0x82d29598
	ctx.lr = 0x82AD2540;
	sub_82D29598(ctx, base);
loc_82AD2540:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ad2560
	if (cr6.lt) goto loc_82AD2560;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82AD2560;
	sub_825952B8(ctx, base);
loc_82AD2560:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD2568"))) PPC_WEAK_FUNC(sub_82AD2568);
PPC_FUNC_IMPL(__imp__sub_82AD2568) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x82AD2570;
	__savegprlr_20(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r28.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r28,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r28.u32);
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// mr r21,r28
	ctx.r21.u64 = ctx.r28.u64;
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// mr r22,r28
	ctx.r22.u64 = ctx.r28.u64;
	// stw r28,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r28.u32);
	// mr r23,r28
	ctx.r23.u64 = ctx.r28.u64;
	// stw r28,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r28.u32);
	// mr r24,r28
	ctx.r24.u64 = ctx.r28.u64;
	// stw r28,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r28.u32);
	// mr r25,r28
	ctx.r25.u64 = ctx.r28.u64;
	// stw r28,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r28.u32);
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// stw r28,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r28.u32);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// stw r28,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r28.u32);
	// stw r28,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r28.u32);
	// stw r28,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r28.u32);
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// stw r28,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r28.u32);
	// stw r28,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r28.u32);
	// stw r28,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r28.u32);
	// stw r28,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r28.u32);
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi. r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82ad276c
	if (cr0.eq) goto loc_82AD276C;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82AD2608:
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// lwz r10,4(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, xer);
	// ble cr6,0x82ad29b0
	if (!cr6.gt) goto loc_82AD29B0;
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(ctx.r11.u32, 20, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bgt cr6,0x82ad266c
	if (cr6.gt) goto loc_82AD266C;
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(ctx.r11.u32, 15, xer);
	// bge cr6,0x82ad26b8
	if (!cr6.lt) goto loc_82AD26B8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bgt cr6,0x82ad2728
	if (cr6.gt) goto loc_82AD2728;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82ad26a0
	if (cr6.eq) goto loc_82AD26A0;
	// bdz 0x82ad26a8
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82AD26A8;
	// bdz 0x82ad2710
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82AD2710;
	// bdz 0x82ad2718
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82AD2718;
	// bdz 0x82ad26a8
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82AD26A8;
	// bdz 0x82ad2710
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82AD2710;
	// bdz 0x82ad2718
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82AD2718;
	// b 0x82ad26a8
	goto loc_82AD26A8;
loc_82AD266C:
	// cmplwi cr6,r11,80
	cr6.compare<uint32_t>(ctx.r11.u32, 80, xer);
	// bgt cr6,0x82ad26c0
	if (cr6.gt) goto loc_82AD26C0;
	// cmplwi cr6,r11,73
	cr6.compare<uint32_t>(ctx.r11.u32, 73, xer);
	// bge cr6,0x82ad2720
	if (!cr6.lt) goto loc_82AD2720;
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(ctx.r11.u32, 48, xer);
	// bgt cr6,0x82ad26b0
	if (cr6.gt) goto loc_82AD26B0;
	// beq cr6,0x82ad26a8
	if (cr6.eq) goto loc_82AD26A8;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// beq cr6,0x82ad26b8
	if (cr6.eq) goto loc_82AD26B8;
	// cmplwi cr6,r11,26
	cr6.compare<uint32_t>(ctx.r11.u32, 26, xer);
	// ble cr6,0x82ad2728
	if (!cr6.gt) goto loc_82AD2728;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bgt cr6,0x82ad2728
	if (cr6.gt) goto loc_82AD2728;
loc_82AD26A0:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// b 0x82ad272c
	goto loc_82AD272C;
loc_82AD26A8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// b 0x82ad272c
	goto loc_82AD272C;
loc_82AD26B0:
	// cmplwi cr6,r11,49
	cr6.compare<uint32_t>(ctx.r11.u32, 49, xer);
	// bne cr6,0x82ad2728
	if (!cr6.eq) goto loc_82AD2728;
loc_82AD26B8:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// b 0x82ad272c
	goto loc_82AD272C;
loc_82AD26C0:
	// addi r11,r11,-82
	ctx.r11.s64 = ctx.r11.s64 + -82;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// bgt cr6,0x82ad2728
	if (cr6.gt) goto loc_82AD2728;
	// lis r12,-32083
	ctx.r12.s64 = -2102591488;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,9956
	ctx.r12.s64 = ctx.r12.s64 + 9956;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82AD2720;
	case 1:
		goto loc_82AD2720;
	case 2:
		goto loc_82AD2720;
	case 3:
		goto loc_82AD2728;
	case 4:
		goto loc_82AD2728;
	case 5:
		goto loc_82AD2728;
	case 6:
		goto loc_82AD2728;
	case 7:
		goto loc_82AD2728;
	case 8:
		goto loc_82AD2728;
	case 9:
		goto loc_82AD2710;
	case 10:
		goto loc_82AD2718;
	default:
		return;
	}
	// lwz r21,10016(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 10016);
	// lwz r21,10016(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 10016);
	// lwz r21,10016(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 10016);
	// lwz r21,10024(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 10024);
	// lwz r21,10024(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 10024);
	// lwz r21,10024(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 10024);
	// lwz r21,10024(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 10024);
	// lwz r21,10024(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 10024);
	// lwz r21,10024(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 10024);
	// lwz r21,10000(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 10000);
	// lwz r21,10008(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 10008);
loc_82AD2710:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// b 0x82ad272c
	goto loc_82AD272C;
loc_82AD2718:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// b 0x82ad272c
	goto loc_82AD272C;
loc_82AD2720:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// b 0x82ad272c
	goto loc_82AD272C;
loc_82AD2728:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
loc_82AD272C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x835977d8
	ctx.lr = 0x82AD2734;
	sub_835977D8(ctx, base);
	// lwz r11,4(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// lwz r10,0(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r31,r8
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r8.u32, xer);
	// blt cr6,0x82ad2608
	if (cr6.lt) goto loc_82AD2608;
	// lwz r21,112(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r22,128(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r23,144(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r24,160(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r25,176(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r26,192(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
loc_82AD276C:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// subf r10,r21,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r21.s64;
	// srawi r29,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r29.s64 = ctx.r10.s32 >> 2;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82ad27ac
	if (cr6.eq) goto loc_82AD27AC;
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, xer);
	// ble cr6,0x82ad29bc
	if (!cr6.gt) goto loc_82AD29BC;
loc_82AD2790:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x835977d8
	ctx.lr = 0x82AD279C;
	sub_835977D8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r31
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, xer);
	// bgt cr6,0x82ad2790
	if (cr6.gt) goto loc_82AD2790;
loc_82AD27AC:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// subf r10,r22,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r22.s64;
	// srawi r29,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r29.s64 = ctx.r10.s32 >> 2;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82ad27ec
	if (cr6.eq) goto loc_82AD27EC;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, xer);
	// ble cr6,0x82ad29c8
	if (!cr6.gt) goto loc_82AD29C8;
loc_82AD27D0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x835977d8
	ctx.lr = 0x82AD27DC;
	sub_835977D8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r31
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, xer);
	// bgt cr6,0x82ad27d0
	if (cr6.gt) goto loc_82AD27D0;
loc_82AD27EC:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// subf r10,r23,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r23.s64;
	// srawi r29,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r29.s64 = ctx.r10.s32 >> 2;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82ad282c
	if (cr6.eq) goto loc_82AD282C;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, xer);
	// ble cr6,0x82ad29d4
	if (!cr6.gt) goto loc_82AD29D4;
loc_82AD2810:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x835977d8
	ctx.lr = 0x82AD281C;
	sub_835977D8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r31
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, xer);
	// bgt cr6,0x82ad2810
	if (cr6.gt) goto loc_82AD2810;
loc_82AD282C:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// subf r10,r24,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r24.s64;
	// srawi r29,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r29.s64 = ctx.r10.s32 >> 2;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82ad286c
	if (cr6.eq) goto loc_82AD286C;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, xer);
	// ble cr6,0x82ad29e0
	if (!cr6.gt) goto loc_82AD29E0;
loc_82AD2850:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x835977d8
	ctx.lr = 0x82AD285C;
	sub_835977D8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r31
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, xer);
	// bgt cr6,0x82ad2850
	if (cr6.gt) goto loc_82AD2850;
loc_82AD286C:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// subf r10,r25,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r25.s64;
	// srawi r29,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r29.s64 = ctx.r10.s32 >> 2;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82ad28ac
	if (cr6.eq) goto loc_82AD28AC;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, xer);
	// ble cr6,0x82ad29ec
	if (!cr6.gt) goto loc_82AD29EC;
loc_82AD2890:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x835977d8
	ctx.lr = 0x82AD289C;
	sub_835977D8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r31
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, xer);
	// bgt cr6,0x82ad2890
	if (cr6.gt) goto loc_82AD2890;
loc_82AD28AC:
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// subf r10,r26,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r26.s64;
	// srawi r29,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r29.s64 = ctx.r10.s32 >> 2;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82ad28ec
	if (cr6.eq) goto loc_82AD28EC;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, xer);
	// ble cr6,0x82ad29f8
	if (!cr6.gt) goto loc_82AD29F8;
loc_82AD28D0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x835977d8
	ctx.lr = 0x82AD28DC;
	sub_835977D8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r31
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, xer);
	// bgt cr6,0x82ad28d0
	if (cr6.gt) goto loc_82AD28D0;
loc_82AD28EC:
	// li r31,2
	ctx.r31.s64 = 2;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x82ad2908
	if (cr6.eq) goto loc_82AD2908;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x82AD2908;
	sub_825952B8(ctx, base);
loc_82AD2908:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x82ad2920
	if (cr6.eq) goto loc_82AD2920;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825952b8
	ctx.lr = 0x82AD2920;
	sub_825952B8(ctx, base);
loc_82AD2920:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x82ad2938
	if (cr6.eq) goto loc_82AD2938;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x825952b8
	ctx.lr = 0x82AD2938;
	sub_825952B8(ctx, base);
loc_82AD2938:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x82ad2950
	if (cr6.eq) goto loc_82AD2950;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825952b8
	ctx.lr = 0x82AD2950;
	sub_825952B8(ctx, base);
loc_82AD2950:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// beq cr6,0x82ad2968
	if (cr6.eq) goto loc_82AD2968;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x825952b8
	ctx.lr = 0x82AD2968;
	sub_825952B8(ctx, base);
loc_82AD2968:
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// beq cr6,0x82ad2980
	if (cr6.eq) goto loc_82AD2980;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x825952b8
	ctx.lr = 0x82AD2980;
	sub_825952B8(ctx, base);
loc_82AD2980:
	// lwz r4,0(r20)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82ad2998
	if (cr6.eq) goto loc_82AD2998;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x825952b8
	ctx.lr = 0x82AD2998;
	sub_825952B8(ctx, base);
loc_82AD2998:
	// stw r28,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r28.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r28,4(r20)
	PPC_STORE_U32(ctx.r20.u32 + 4, ctx.r28.u32);
	// stw r28,8(r20)
	PPC_STORE_U32(ctx.r20.u32 + 8, ctx.r28.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_82AD29B0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82AD29BC;
	sub_831CC188(ctx, base);
loc_82AD29BC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82AD29C8;
	sub_831CC188(ctx, base);
loc_82AD29C8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82AD29D4;
	sub_831CC188(ctx, base);
loc_82AD29D4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82AD29E0;
	sub_831CC188(ctx, base);
loc_82AD29E0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82AD29EC;
	sub_831CC188(ctx, base);
loc_82AD29EC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82AD29F8;
	sub_831CC188(ctx, base);
loc_82AD29F8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82AD2A04;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82AD2A04"))) PPC_WEAK_FUNC(sub_82AD2A04);
PPC_FUNC_IMPL(__imp__sub_82AD2A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AD2A08"))) PPC_WEAK_FUNC(sub_82AD2A08);
PPC_FUNC_IMPL(__imp__sub_82AD2A08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab4
	ctx.lr = 0x82AD2A10;
	__savegprlr_15(ctx, base);
	// stwu r1,-1680(r1)
	ea = -1680 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,100(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r27.u32);
	// bl 0x831977b8
	ctx.lr = 0x82AD2A38;
	sub_831977B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82ad2150
	ctx.lr = 0x82AD2A44;
	sub_82AD2150(ctx, base);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r15,2
	ctx.r15.s64 = 2;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82ad2a60
	if (cr6.eq) goto loc_82AD2A60;
	// stw r15,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r15.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x825952b8
	ctx.lr = 0x82AD2A60;
	sub_825952B8(ctx, base);
loc_82AD2A60:
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// stw r27,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r27.u32);
	// bl 0x82d19a78
	ctx.lr = 0x82AD2A74;
	sub_82D19A78(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r25,r11,-20545
	ctx.r25.s64 = ctx.r11.s64 + -20545;
	// addi r4,r25,409
	ctx.r4.s64 = ctx.r25.s64 + 409;
	// bl 0x82d2f098
	ctx.lr = 0x82AD2A84;
	sub_82D2F098(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ad2ab0
	if (!cr6.eq) goto loc_82AD2AB0;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82ad2e88
	if (cr6.eq) goto loc_82AD2E88;
	// stw r15,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r15.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x825952b8
	ctx.lr = 0x82AD2AA8;
	sub_825952B8(ctx, base);
	// addi r1,r1,1680
	ctx.r1.s64 = ctx.r1.s64 + 1680;
	// b 0x831cdb04
	__restgprlr_15(ctx, base);
	return;
loc_82AD2AB0:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82a8e3a8
	ctx.lr = 0x82AD2ABC;
	sub_82A8E3A8(ctx, base);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82ad2568
	ctx.lr = 0x82AD2ACC;
	sub_82AD2568(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// mr r22,r27
	ctx.r22.u64 = ctx.r27.u64;
	// bl 0x82d33c10
	ctx.lr = 0x82AD2AD8;
	sub_82D33C10(ctx, base);
	// lwz r17,208(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ad2e58
	if (cr6.eq) goto loc_82AD2E58;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lwz r18,212(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lis r10,108
	ctx.r10.s64 = 7077888;
	// mr r19,r17
	ctx.r19.u64 = ctx.r17.u64;
	// li r16,15
	ctx.r16.s64 = 15;
	// ori r23,r10,98
	ctx.r23.u64 = ctx.r10.u64 | 98;
	// addi r20,r11,-9028
	ctx.r20.s64 = ctx.r11.s64 + -9028;
loc_82AD2B00:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82AD2B0C;
	sub_82D33DB0(ctx, base);
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// addi r4,r25,425
	ctx.r4.s64 = ctx.r25.s64 + 425;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AD2B28;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r4,r25,437
	ctx.r4.s64 = ctx.r25.s64 + 437;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82AD2B44;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x82ad2e40
	if (cr6.eq) goto loc_82AD2E40;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r25,445
	ctx.r4.s64 = ctx.r25.s64 + 445;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AD2B68;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ad2e40
	if (cr6.eq) goto loc_82AD2E40;
	// subf r11,r17,r18
	ctx.r11.s64 = ctx.r18.s64 - ctx.r17.s64;
	// srawi. r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x82ad2dd4
	if (cr0.eq) goto loc_82AD2DD4;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r10,r22
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r22.u32, xer);
	// blt cr6,0x82ad2dd4
	if (cr6.lt) goto loc_82AD2DD4;
	// cmplw cr6,r11,r22
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, xer);
	// ble cr6,0x82ad2e90
	if (!cr6.gt) goto loc_82AD2E90;
	// lwz r31,0(r19)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// cmplwi cr6,r31,45
	cr6.compare<uint32_t>(ctx.r31.u32, 45, xer);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// beq cr6,0x82ad2bec
	if (cr6.eq) goto loc_82AD2BEC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82aa38e0
	ctx.lr = 0x82AD2BAC;
	sub_82AA38E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82d32c58
	ctx.lr = 0x82AD2BC0;
	sub_82D32C58(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,100(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 100);
	// bl 0x83198728
	ctx.lr = 0x82AD2BCC;
	sub_83198728(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82ad1928
	ctx.lr = 0x82AD2BDC;
	sub_82AD1928(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d29598
	ctx.lr = 0x82AD2BE8;
	sub_82D29598(ctx, base);
	// b 0x82ad2d68
	goto loc_82AD2D68;
loc_82AD2BEC:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82AD2BF8;
	sub_82D2AEC8(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d29598
	ctx.lr = 0x82AD2C04;
	sub_82D29598(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82AD2C08;
	sub_831156E8(ctx, base);
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r4,100(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 100);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8311c148
	ctx.lr = 0x82AD2C18;
	sub_8311C148(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// li r5,1312
	ctx.r5.s64 = 1312;
	// bl 0x831ce980
	ctx.lr = 0x82AD2C28;
	sub_831CE980(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8316b780
	ctx.lr = 0x82AD2C34;
	sub_8316B780(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8311c338
	ctx.lr = 0x82AD2C40;
	sub_8311C338(ctx, base);
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// addi r10,r1,768
	ctx.r10.s64 = ctx.r1.s64 + 768;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_82AD2C50:
	// lhz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r6,r8
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, xer);
	// beq cr6,0x82ad2d9c
	if (cr6.eq) goto loc_82AD2D9C;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r9,15
	cr6.compare<uint32_t>(ctx.r9.u32, 15, xer);
	// blt cr6,0x82ad2c50
	if (cr6.lt) goto loc_82AD2C50;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
loc_82AD2C70:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ad2d68
	if (cr6.eq) goto loc_82AD2D68;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r9,r1,768
	ctx.r9.s64 = ctx.r1.s64 + 768;
loc_82AD2C88:
	// lhz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// cmplw cr6,r6,r8
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, xer);
	// beq cr6,0x82ad2da4
	if (cr6.eq) goto loc_82AD2DA4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// cmplwi cr6,r10,15
	cr6.compare<uint32_t>(ctx.r10.u32, 15, xer);
	// blt cr6,0x82ad2c88
	if (cr6.lt) goto loc_82AD2C88;
	// addi r10,r1,768
	ctx.r10.s64 = ctx.r1.s64 + 768;
loc_82AD2CA8:
	// lbz r29,4(r10)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r9,r1,768
	ctx.r9.s64 = ctx.r1.s64 + 768;
loc_82AD2CB8:
	// lhz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// cmplw cr6,r6,r8
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, xer);
	// beq cr6,0x82ad2db4
	if (cr6.eq) goto loc_82AD2DB4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// cmplwi cr6,r10,15
	cr6.compare<uint32_t>(ctx.r10.u32, 15, xer);
	// blt cr6,0x82ad2cb8
	if (cr6.lt) goto loc_82AD2CB8;
	// addi r10,r1,768
	ctx.r10.s64 = ctx.r1.s64 + 768;
loc_82AD2CD8:
	// lbz r30,5(r10)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// addi r11,r1,768
	ctx.r11.s64 = ctx.r1.s64 + 768;
loc_82AD2CE8:
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// beq cr6,0x82ad2dc4
	if (cr6.eq) goto loc_82AD2DC4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplwi cr6,r10,15
	cr6.compare<uint32_t>(ctx.r10.u32, 15, xer);
	// blt cr6,0x82ad2ce8
	if (cr6.lt) goto loc_82AD2CE8;
	// addi r11,r1,768
	ctx.r11.s64 = ctx.r1.s64 + 768;
loc_82AD2D08:
	// lbz r31,6(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x82ad2d24
	if (!cr6.eq) goto loc_82AD2D24;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x82ad2d24
	if (!cr6.eq) goto loc_82AD2D24;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82ad2d68
	if (cr6.eq) goto loc_82AD2D68;
loc_82AD2D24:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x837b0c10
	ctx.lr = 0x82AD2D30;
	sub_837B0C10(ctx, base);
	// lis r4,804
	ctx.r4.s64 = 52690944;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// ori r4,r4,40
	ctx.r4.u64 = ctx.r4.u64 | 40;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82d042a8
	ctx.lr = 0x82AD2D4C;
	sub_82D042A8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82AD2D60;
	sub_82D291E0(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x82AD2D68;
	sub_8387E8E0(ctx, base);
loc_82AD2D68:
	// stb r27,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r27.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8315d6c8
	ctx.lr = 0x82AD2D7C;
	sub_8315D6C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82d291e0
	ctx.lr = 0x82AD2D90;
	sub_82D291E0(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x82AD2D98;
	sub_8387E8E0(ctx, base);
	// b 0x82ad2e40
	goto loc_82AD2E40;
loc_82AD2D9C:
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x82ad2c70
	goto loc_82AD2C70;
loc_82AD2DA4:
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r1,768
	ctx.r10.s64 = ctx.r1.s64 + 768;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// b 0x82ad2ca8
	goto loc_82AD2CA8;
loc_82AD2DB4:
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r1,768
	ctx.r10.s64 = ctx.r1.s64 + 768;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// b 0x82ad2cd8
	goto loc_82AD2CD8;
loc_82AD2DC4:
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r1,768
	ctx.r11.s64 = ctx.r1.s64 + 768;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82ad2d08
	goto loc_82AD2D08;
loc_82AD2DD4:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d29598
	ctx.lr = 0x82AD2DE0;
	sub_82D29598(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d29598
	ctx.lr = 0x82AD2DEC;
	sub_82D29598(ctx, base);
	// lwz r11,20(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ad2e00
	if (cr6.lt) goto loc_82AD2E00;
	// lwz r4,0(r20)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// b 0x82ad2e04
	goto loc_82AD2E04;
loc_82AD2E00:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
loc_82AD2E04:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x837b0c10
	ctx.lr = 0x82AD2E0C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d32958
	ctx.lr = 0x82AD2E18;
	sub_82D32958(ctx, base);
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ad2e34
	if (cr6.lt) goto loc_82AD2E34;
	// stw r15,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r15.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x825952b8
	ctx.lr = 0x82AD2E34;
	sub_825952B8(ctx, base);
loc_82AD2E34:
	// stw r16,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r16.u32);
	// stw r27,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r27.u32);
	// stb r27,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r27.u8);
loc_82AD2E40:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r19,r19,4
	ctx.r19.s64 = ctx.r19.s64 + 4;
	// bl 0x82d33c10
	ctx.lr = 0x82AD2E50;
	sub_82D33C10(ctx, base);
	// cmplw cr6,r22,r3
	cr6.compare<uint32_t>(ctx.r22.u32, ctx.r3.u32, xer);
	// blt cr6,0x82ad2b00
	if (cr6.lt) goto loc_82AD2B00;
loc_82AD2E58:
	// cmplwi cr6,r17,0
	cr6.compare<uint32_t>(ctx.r17.u32, 0, xer);
	// beq cr6,0x82ad2e70
	if (cr6.eq) goto loc_82AD2E70;
	// stw r15,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r15.u32);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825952b8
	ctx.lr = 0x82AD2E70;
	sub_825952B8(ctx, base);
loc_82AD2E70:
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82ad2e88
	if (cr6.eq) goto loc_82AD2E88;
	// stw r15,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r15.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825952b8
	ctx.lr = 0x82AD2E88;
	sub_825952B8(ctx, base);
loc_82AD2E88:
	// addi r1,r1,1680
	ctx.r1.s64 = ctx.r1.s64 + 1680;
	// b 0x831cdb04
	__restgprlr_15(ctx, base);
	return;
loc_82AD2E90:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82AD2E9C;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82AD2E9C"))) PPC_WEAK_FUNC(sub_82AD2E9C);
PPC_FUNC_IMPL(__imp__sub_82AD2E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AD2EA0"))) PPC_WEAK_FUNC(sub_82AD2EA0);
PPC_FUNC_IMPL(__imp__sub_82AD2EA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab8
	ctx.lr = 0x82AD2EA8;
	__savegprlr_16(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,100(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// li r22,0
	ctx.r22.s64 = 0;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r22,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r22.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r22,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r22.u32);
	// stw r22,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r22.u32);
	// bl 0x831977b8
	ctx.lr = 0x82AD2ED0;
	sub_831977B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82ad2150
	ctx.lr = 0x82AD2EDC;
	sub_82AD2150(ctx, base);
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r16,2
	ctx.r16.s64 = 2;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82ad2ef8
	if (cr6.eq) goto loc_82AD2EF8;
	// stw r16,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r16.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825952b8
	ctx.lr = 0x82AD2EF8;
	sub_825952B8(ctx, base);
loc_82AD2EF8:
	// stw r22,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r22.u32);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// stw r22,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r22.u32);
	// stw r22,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r22.u32);
	// bl 0x82d19a78
	ctx.lr = 0x82AD2F0C;
	sub_82D19A78(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r23,r11,-19940
	ctx.r23.s64 = ctx.r11.s64 + -19940;
	// addi r4,r23,-148
	ctx.r4.s64 = ctx.r23.s64 + -148;
	// bl 0x82d2f098
	ctx.lr = 0x82AD2F1C;
	sub_82D2F098(ctx, base);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ad2f48
	if (!cr6.eq) goto loc_82AD2F48;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82ad33c8
	if (cr6.eq) goto loc_82AD33C8;
	// stw r16,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r16.u32);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x825952b8
	ctx.lr = 0x82AD2F40;
	sub_825952B8(ctx, base);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
loc_82AD2F48:
	// lbz r11,104(r20)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r20.u32 + 104);
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ad2f5c
	if (cr6.eq) goto loc_82AD2F5C;
	// li r31,1
	ctx.r31.s64 = 1;
loc_82AD2F5C:
	// lbz r11,105(r20)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r20.u32 + 105);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ad2f6c
	if (cr6.eq) goto loc_82AD2F6C;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82AD2F6C:
	// lbz r11,106(r20)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r20.u32 + 106);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ad2f7c
	if (cr6.eq) goto loc_82AD2F7C;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82AD2F7C:
	// lbz r11,107(r20)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r20.u32 + 107);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ad2f8c
	if (cr6.eq) goto loc_82AD2F8C;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82AD2F8C:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r30,128(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// subf r10,r30,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r30.s64;
	// srawi r19,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r19.s64 = ctx.r10.s32 >> 2;
	// bl 0x83198688
	ctx.lr = 0x82AD2FA0;
	sub_83198688(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82ad2ff4
	if (cr6.eq) goto loc_82AD2FF4;
	// cmpwi cr6,r19,0
	cr6.compare<int32_t>(ctx.r19.s32, 0, xer);
	// bne cr6,0x82ad3008
	if (!cr6.eq) goto loc_82AD3008;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82AD2FBC;
	sub_82D19A78(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r23,-132
	ctx.r4.s64 = ctx.r23.s64 + -132;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AD2FD4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82ad33c8
	if (cr6.eq) goto loc_82AD33C8;
	// stw r16,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r16.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825952b8
	ctx.lr = 0x82AD2FEC;
	sub_825952B8(ctx, base);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
loc_82AD2FF4:
	// add r19,r19,r31
	ctx.r19.u64 = ctx.r19.u64 + ctx.r31.u64;
	// cmplwi cr6,r19,4
	cr6.compare<uint32_t>(ctx.r19.u32, 4, xer);
	// ble cr6,0x82ad3008
	if (!cr6.gt) goto loc_82AD3008;
	// li r19,4
	ctx.r19.s64 = 4;
	// b 0x82ad3010
	goto loc_82AD3010;
loc_82AD3008:
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(ctx.r19.u32, 0, xer);
	// beq cr6,0x82ad3044
	if (cr6.eq) goto loc_82AD3044;
loc_82AD3010:
	// addi r5,r23,-104
	ctx.r5.s64 = ctx.r23.s64 + -104;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x831d0b08
	ctx.lr = 0x82AD3024;
	sub_831D0B08(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82AD302C;
	sub_82D19A78(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AD3044;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82AD3044:
	// lbz r11,97(r20)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r20.u32 + 97);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ad3190
	if (cr6.eq) goto loc_82AD3190;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// li r19,1
	ctx.r19.s64 = 1;
	// bl 0x82d19a78
	ctx.lr = 0x82AD305C;
	sub_82D19A78(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r23,-80
	ctx.r4.s64 = ctx.r23.s64 + -80;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AD3074;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82AD3074:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82a8e3a8
	ctx.lr = 0x82AD3080;
	sub_82A8E3A8(ctx, base);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82ad2568
	ctx.lr = 0x82AD3090;
	sub_82AD2568(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82ad2150
	ctx.lr = 0x82AD309C;
	sub_82AD2150(ctx, base);
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82ad30b4
	if (cr6.eq) goto loc_82AD30B4;
	// stw r16,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r16.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x825952b8
	ctx.lr = 0x82AD30B4;
	sub_825952B8(ctx, base);
loc_82AD30B4:
	// stw r22,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r22.u32);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// stw r22,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r22.u32);
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// stw r22,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r22.u32);
	// bl 0x82d33c10
	ctx.lr = 0x82AD30CC;
	sub_82D33C10(ctx, base);
	// lwz r18,128(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ad33b0
	if (cr6.eq) goto loc_82AD33B0;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lwz r21,132(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r24,r17,100
	ctx.r24.s64 = ctx.r17.s64 + 100;
	// mr r26,r18
	ctx.r26.u64 = ctx.r18.u64;
	// addi r25,r11,-9028
	ctx.r25.s64 = ctx.r11.s64 + -9028;
loc_82AD30EC:
	// addi r5,r23,-28
	ctx.r5.s64 = ctx.r23.s64 + -28;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x831d0b08
	ctx.lr = 0x82AD3100;
	sub_831D0B08(ctx, base);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AD3118;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// addi r4,r23,-12
	ctx.r4.s64 = ctx.r23.s64 + -12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,100(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82AD3138;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ad32ac
	if (cr6.eq) goto loc_82AD32AC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AD315C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ad32cc
	if (cr6.eq) goto loc_82AD32CC;
	// lbz r11,97(r20)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r20.u32 + 97);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ad32ec
	if (!cr6.eq) goto loc_82AD32EC;
	// cmplw cr6,r19,r27
	cr6.compare<uint32_t>(ctx.r19.u32, ctx.r27.u32, xer);
	// bgt cr6,0x82ad31d8
	if (cr6.gt) goto loc_82AD31D8;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82AD318C;
	sub_82D2AEC8(ctx, base);
	// b 0x82ad3290
	goto loc_82AD3290;
loc_82AD3190:
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(ctx.r19.u32, 0, xer);
	// bne cr6,0x82ad3074
	if (!cr6.eq) goto loc_82AD3074;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82AD31A0;
	sub_82D19A78(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r23,-56
	ctx.r4.s64 = ctx.r23.s64 + -56;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AD31B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82ad33c8
	if (cr6.eq) goto loc_82AD33C8;
	// stw r16,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r16.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x825952b8
	ctx.lr = 0x82AD31D0;
	sub_825952B8(ctx, base);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
loc_82AD31D8:
	// subf r11,r18,r21
	ctx.r11.s64 = ctx.r21.s64 - ctx.r18.s64;
	// srawi r10,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r10,r27
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, xer);
	// ble cr6,0x82ad324c
	if (!cr6.gt) goto loc_82AD324C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8316b780
	ctx.lr = 0x82AD31F4;
	sub_8316B780(ctx, base);
	// bl 0x83740bd8
	ctx.lr = 0x82AD31F8;
	sub_83740BD8(ctx, base);
	// bl 0x83741af0
	ctx.lr = 0x82AD31FC;
	sub_83741AF0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82aa38e0
	ctx.lr = 0x82AD320C;
	sub_82AA38E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82d32c58
	ctx.lr = 0x82AD3220;
	sub_82D32C58(ctx, base);
	// stb r22,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r22.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8315d6c8
	ctx.lr = 0x82AD3234;
	sub_8315D6C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82d291e0
	ctx.lr = 0x82AD3248;
	sub_82D291E0(ctx, base);
	// b 0x82ad3288
	goto loc_82AD3288;
loc_82AD324C:
	// lis r4,641
	ctx.r4.s64 = 42008576;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,241
	ctx.r4.u64 = ctx.r4.u64 | 241;
	// bl 0x82d29598
	ctx.lr = 0x82AD325C;
	sub_82D29598(ctx, base);
	// lwz r11,20(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ad3270
	if (cr6.lt) goto loc_82AD3270;
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// b 0x82ad3274
	goto loc_82AD3274;
loc_82AD3270:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_82AD3274:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x837b0c10
	ctx.lr = 0x82AD327C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d32958
	ctx.lr = 0x82AD3288;
	sub_82D32958(ctx, base);
loc_82AD3288:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x82AD3290;
	sub_8387E8E0(ctx, base);
loc_82AD3290:
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// bl 0x82d33c10
	ctx.lr = 0x82AD32A0;
	sub_82D33C10(ctx, base);
	// cmplw cr6,r27,r3
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r3.u32, xer);
	// blt cr6,0x82ad30ec
	if (cr6.lt) goto loc_82AD30EC;
	// b 0x82ad33b0
	goto loc_82AD33B0;
loc_82AD32AC:
	// cmplwi cr6,r18,0
	cr6.compare<uint32_t>(ctx.r18.u32, 0, xer);
	// beq cr6,0x82ad33c8
	if (cr6.eq) goto loc_82AD33C8;
	// stw r16,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r16.u32);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// bl 0x825952b8
	ctx.lr = 0x82AD32C4;
	sub_825952B8(ctx, base);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
loc_82AD32CC:
	// cmplwi cr6,r18,0
	cr6.compare<uint32_t>(ctx.r18.u32, 0, xer);
	// beq cr6,0x82ad33c8
	if (cr6.eq) goto loc_82AD33C8;
	// stw r16,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r16.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// bl 0x825952b8
	ctx.lr = 0x82AD32E4;
	sub_825952B8(ctx, base);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
loc_82AD32EC:
	// li r11,27
	ctx.r11.s64 = 27;
	// stb r22,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r22.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8315d6c8
	ctx.lr = 0x82AD3308;
	sub_8315D6C8(ctx, base);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82ad331c
	if (cr6.lt) goto loc_82AD331C;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82ad3320
	goto loc_82AD3320;
loc_82AD331C:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82AD3320:
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x837b0c10
	ctx.lr = 0x82AD3328;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82AD333C;
	sub_82D291E0(ctx, base);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ad3358
	if (cr6.lt) goto loc_82AD3358;
	// stw r16,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r16.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x825952b8
	ctx.lr = 0x82AD3358;
	sub_825952B8(ctx, base);
loc_82AD3358:
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// li r31,15
	ctx.r31.s64 = 15;
	// stw r22,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r22.u32);
	// stw r31,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r22,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r22.u8);
	// blt cr6,0x82ad3384
	if (cr6.lt) goto loc_82AD3384;
	// stw r16,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r16.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,256(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x825952b8
	ctx.lr = 0x82AD3384;
	sub_825952B8(ctx, base);
loc_82AD3384:
	// stw r31,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r31.u32);
	// li r4,27
	ctx.r4.s64 = 27;
	// stw r22,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r22.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r22,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r22.u8);
	// bl 0x82aa38e0
	ctx.lr = 0x82AD339C;
	sub_82AA38E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,27
	ctx.r4.s64 = 27;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82d32c58
	ctx.lr = 0x82AD33B0;
	sub_82D32C58(ctx, base);
loc_82AD33B0:
	// cmplwi cr6,r18,0
	cr6.compare<uint32_t>(ctx.r18.u32, 0, xer);
	// beq cr6,0x82ad33c8
	if (cr6.eq) goto loc_82AD33C8;
	// stw r16,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r16.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// bl 0x825952b8
	ctx.lr = 0x82AD33C8;
	sub_825952B8(ctx, base);
loc_82AD33C8:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD33D0"))) PPC_WEAK_FUNC(sub_82AD33D0);
PPC_FUNC_IMPL(__imp__sub_82AD33D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82AD33D8;
	__savegprlr_22(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82AD33E4;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r24,r26,100
	ctx.r24.s64 = ctx.r26.s64 + 100;
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// lwz r22,48(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x8314dfc8
	ctx.lr = 0x82AD3400;
	sub_8314DFC8(ctx, base);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// sth r3,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r3.u16);
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// bne cr6,0x82ad3414
	if (!cr6.eq) goto loc_82AD3414;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82AD3414:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r4,0(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// bl 0x8311c148
	ctx.lr = 0x82AD3420;
	sub_8311C148(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82AD342C;
	sub_82D19A78(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r31,r11,-20160
	ctx.r31.s64 = ctx.r11.s64 + -20160;
	// addi r4,r31,-56
	ctx.r4.s64 = ctx.r31.s64 + -56;
	// bl 0x82d2f098
	ctx.lr = 0x82AD343C;
	sub_82D2F098(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ad3810
	if (cr6.eq) goto loc_82AD3810;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d33db0
	ctx.lr = 0x82AD3450;
	sub_82D33DB0(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r31,-40
	ctx.r4.s64 = ctx.r31.s64 + -40;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AD3468;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82AD3478;
	sub_82D33DB0(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82AD3490;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r4,r31,-469
	ctx.r4.s64 = ctx.r31.s64 + -469;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x837b0c10
	ctx.lr = 0x82AD34A0;
	sub_837B0C10(ctx, base);
	// clrlwi r7,r29,24
	ctx.r7.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82ad36f4
	if (!cr6.eq) goto loc_82AD36F4;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lhz r4,82(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// bl 0x8311c338
	ctx.lr = 0x82AD34B8;
	sub_8311C338(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r31,-438
	ctx.r4.s64 = ctx.r31.s64 + -438;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x837b0c10
	ctx.lr = 0x82AD34C8;
	sub_837B0C10(ctx, base);
	// stb r23,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r23.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x83125548
	ctx.lr = 0x82AD34DC;
	sub_83125548(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8259cb28
	ctx.lr = 0x82AD34F0;
	sub_8259CB28(ctx, base);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x8387e8e0
	ctx.lr = 0x82AD34F8;
	sub_8387E8E0(ctx, base);
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82ad350c
	if (!cr6.lt) goto loc_82AD350C;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
loc_82AD350C:
	// lis r4,26
	ctx.r4.s64 = 1703936;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// ori r4,r4,320
	ctx.r4.u64 = ctx.r4.u64 | 320;
	// bl 0x82d042a8
	ctx.lr = 0x82AD351C;
	sub_82D042A8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82AD3530;
	sub_82D291E0(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,82
	ctx.r3.s64 = ctx.r1.s64 + 82;
	// bl 0x8314b7f8
	ctx.lr = 0x82AD353C;
	sub_8314B7F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x82ad355c
	if (!cr6.eq) goto loc_82AD355C;
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// ori r4,r4,98
	ctx.r4.u64 = ctx.r4.u64 | 98;
	// bl 0x82d29598
	ctx.lr = 0x82AD3558;
	sub_82D29598(ctx, base);
	// b 0x82ad36ac
	goto loc_82AD36AC;
loc_82AD355C:
	// addi r4,r31,-437
	ctx.r4.s64 = ctx.r31.s64 + -437;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x837b0c10
	ctx.lr = 0x82AD3568;
	sub_837B0C10(ctx, base);
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// ori r4,r4,152
	ctx.r4.u64 = ctx.r4.u64 | 152;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82d042a8
	ctx.lr = 0x82AD357C;
	sub_82D042A8(ctx, base);
	// addi r30,r28,544
	ctx.r30.s64 = ctx.r28.s64 + 544;
	// lhz r9,82(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82AD358C:
	// lhz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// beq cr6,0x82ad35ac
	if (cr6.eq) goto loc_82AD35AC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(ctx.r11.u32, 15, xer);
	// blt cr6,0x82ad358c
	if (cr6.lt) goto loc_82AD358C;
	// b 0x82ad35b8
	goto loc_82AD35B8;
loc_82AD35AC:
	// addi r11,r11,34
	ctx.r11.s64 = ctx.r11.s64 + 34;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
loc_82AD35B8:
	// addi r4,r31,-407
	ctx.r4.s64 = ctx.r31.s64 + -407;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x837b0c10
	ctx.lr = 0x82AD35C4;
	sub_837B0C10(ctx, base);
	// lis r4,804
	ctx.r4.s64 = 52690944;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// ori r4,r4,40
	ctx.r4.u64 = ctx.r4.u64 | 40;
	// lbz r28,4(r30)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// lbz r29,6(r30)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r30.u32 + 6);
	// lbz r30,5(r30)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r30.u32 + 5);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bl 0x82d042a8
	ctx.lr = 0x82AD35EC;
	sub_82D042A8(ctx, base);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x82ad3618
	if (!cr6.eq) goto loc_82AD3618;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x82ad3618
	if (!cr6.eq) goto loc_82AD3618;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x82ad3618
	if (!cr6.eq) goto loc_82AD3618;
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// ori r4,r4,98
	ctx.r4.u64 = ctx.r4.u64 | 98;
	// bl 0x82d29598
	ctx.lr = 0x82AD3614;
	sub_82D29598(ctx, base);
	// b 0x82ad369c
	goto loc_82AD369C;
loc_82AD3618:
	// addi r4,r31,-406
	ctx.r4.s64 = ctx.r31.s64 + -406;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x837b0c10
	ctx.lr = 0x82AD3624;
	sub_837B0C10(ctx, base);
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r6,208(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82ad3638
	if (!cr6.lt) goto loc_82AD3638;
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
loc_82AD3638:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82ad364c
	if (!cr6.lt) goto loc_82AD364C;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
loc_82AD364C:
	// lis r4,562
	ctx.r4.s64 = 36831232;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// ori r4,r4,36
	ctx.r4.u64 = ctx.r4.u64 | 36;
	// bl 0x82d042a8
	ctx.lr = 0x82AD365C;
	sub_82D042A8(ctx, base);
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r4,272(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82ad3670
	if (!cr6.lt) goto loc_82AD3670;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
loc_82AD3670:
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x837b0c10
	ctx.lr = 0x82AD3678;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82AD368C;
	sub_82D291E0(ctx, base);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x8387e8e0
	ctx.lr = 0x82AD3694;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x8387e8e0
	ctx.lr = 0x82AD369C;
	sub_8387E8E0(ctx, base);
loc_82AD369C:
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8387e8e0
	ctx.lr = 0x82AD36A4;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x82AD36AC;
	sub_8387E8E0(ctx, base);
loc_82AD36AC:
	// stw r23,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r23.u32);
	// addi r7,r26,108
	ctx.r7.s64 = ctx.r26.s64 + 108;
	// stw r23,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r23.u32);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83152ac0
	ctx.lr = 0x82AD36D0;
	sub_83152AC0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r7,92(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82ad2320
	ctx.lr = 0x82AD36EC;
	sub_82AD2320(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// b 0x82ad37b8
	goto loc_82AD37B8;
loc_82AD36F4:
	// addi r4,r31,-405
	ctx.r4.s64 = ctx.r31.s64 + -405;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x837b0c10
	ctx.lr = 0x82AD3700;
	sub_837B0C10(ctx, base);
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// ori r4,r4,55
	ctx.r4.u64 = ctx.r4.u64 | 55;
	// bl 0x82d042a8
	ctx.lr = 0x82AD3710;
	sub_82D042A8(ctx, base);
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r5,240(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82ad3724
	if (!cr6.lt) goto loc_82AD3724;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
loc_82AD3724:
	// lis r4,26
	ctx.r4.s64 = 1703936;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// ori r4,r4,320
	ctx.r4.u64 = ctx.r4.u64 | 320;
	// bl 0x82d042a8
	ctx.lr = 0x82AD3734;
	sub_82D042A8(ctx, base);
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// ori r4,r4,98
	ctx.r4.u64 = ctx.r4.u64 | 98;
	// bl 0x82d29598
	ctx.lr = 0x82AD3744;
	sub_82D29598(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82AD3758;
	sub_82D291E0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82AD3764;
	sub_82D33DB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r3,100
	ctx.r29.s64 = ctx.r3.s64 + 100;
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AD3784;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// ori r4,r4,318
	ctx.r4.u64 = ctx.r4.u64 | 318;
	// bl 0x82d29598
	ctx.lr = 0x82AD3790;
	sub_82D29598(ctx, base);
	// lwz r9,100(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82AD37A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// ori r4,r4,98
	ctx.r4.u64 = ctx.r4.u64 | 98;
	// bl 0x82d29598
	ctx.lr = 0x82AD37B4;
	sub_82D29598(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
loc_82AD37B8:
	// bl 0x8387e8e0
	ctx.lr = 0x82AD37BC;
	sub_8387E8E0(ctx, base);
	// addis r3,r22,205
	ctx.r3.s64 = ctx.r22.s64 + 13434880;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r3,-31540
	ctx.r3.s64 = ctx.r3.s64 + -31540;
	// bl 0x82ad13f0
	ctx.lr = 0x82AD37CC;
	sub_82AD13F0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82ad2440
	ctx.lr = 0x82AD37E0;
	sub_82AD2440(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82ad2a08
	ctx.lr = 0x82AD37E8;
	sub_82AD2A08(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82ad2ea0
	ctx.lr = 0x82AD37F0;
	sub_82AD2EA0(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ad3810
	if (cr6.lt) goto loc_82AD3810;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82AD3810;
	sub_825952B8(ctx, base);
loc_82AD3810:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD3818"))) PPC_WEAK_FUNC(sub_82AD3818);
PPC_FUNC_IMPL(__imp__sub_82AD3818) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82AD3820;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82AD382C;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r28,48(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x82d19a78
	ctx.lr = 0x82AD383C;
	sub_82D19A78(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r4,r10,-20184
	ctx.r4.s64 = ctx.r10.s64 + -20184;
	// bl 0x82d2f098
	ctx.lr = 0x82AD3848;
	sub_82D2F098(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ad38d0
	if (cr6.eq) goto loc_82AD38D0;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r29,r31,100
	ctx.r29.s64 = ctx.r31.s64 + 100;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r7,r31,108
	ctx.r7.s64 = ctx.r31.s64 + 108;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83152ac0
	ctx.lr = 0x82AD3880;
	sub_83152AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82ad2320
	ctx.lr = 0x82AD389C;
	sub_82AD2320(ctx, base);
	// addis r3,r28,205
	ctx.r3.s64 = ctx.r28.s64 + 13434880;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r3,-21136
	ctx.r3.s64 = ctx.r3.s64 + -21136;
	// bl 0x82ad1468
	ctx.lr = 0x82AD38AC;
	sub_82AD1468(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ad2440
	ctx.lr = 0x82AD38C0;
	sub_82AD2440(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ad2a08
	ctx.lr = 0x82AD38C8;
	sub_82AD2A08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ad2ea0
	ctx.lr = 0x82AD38D0;
	sub_82AD2EA0(ctx, base);
loc_82AD38D0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD38D8"))) PPC_WEAK_FUNC(sub_82AD38D8);
PPC_FUNC_IMPL(__imp__sub_82AD38D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82AD38E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82AD38EC;
	sub_82D19A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,2
	ctx.r6.s64 = 2;
	// bl 0x82d2b608
	ctx.lr = 0x82AD38FC;
	sub_82D2B608(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83102db0
	ctx.lr = 0x82AD3908;
	sub_83102DB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82AD3910;
	sub_82D19A78(ctx, base);
	// bl 0x83574c00
	ctx.lr = 0x82AD3914;
	sub_83574C00(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d44fa8
	ctx.lr = 0x82AD391C;
	sub_82D44FA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82AD3924;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// li r4,9
	ctx.r4.s64 = 9;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d2d510
	ctx.lr = 0x82AD3934;
	sub_82D2D510(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ad3a24
	if (cr6.eq) goto loc_82AD3A24;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d30530
	ctx.lr = 0x82AD3948;
	sub_82D30530(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82AD394C;
	sub_831156E8(ctx, base);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x8311c148
	ctx.lr = 0x82AD3958;
	sub_8311C148(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d30450
	ctx.lr = 0x82AD3968;
	sub_82D30450(ctx, base);
	// lis r10,-31758
	ctx.r10.s64 = -2081292288;
	// lwz r11,-13896(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13896);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82ad399c
	if (!cr6.eq) goto loc_82AD399C;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r9,1
	ctx.r9.s64 = 1;
	// cmpwi cr6,r8,1
	cr6.compare<int32_t>(ctx.r8.s32, 1, xer);
	// beq cr6,0x82ad3998
	if (cr6.eq) goto loc_82AD3998;
	// stb r9,57(r11)
	PPC_STORE_U8(ctx.r11.u32 + 57, ctx.r9.u8);
	// lwz r11,-13896(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13896);
loc_82AD3998:
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
loc_82AD399C:
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82AD39A8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82a990c8
	ctx.lr = 0x82AD39B4;
	sub_82A990C8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82ad39d4
	if (cr6.lt) goto loc_82AD39D4;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82AD39D4;
	sub_825952B8(ctx, base);
loc_82AD39D4:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lis r4,700
	ctx.r4.s64 = 45875200;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// ori r4,r4,736
	ctx.r4.u64 = ctx.r4.u64 | 736;
	// bl 0x82d303d0
	ctx.lr = 0x82AD39F8;
	sub_82D303D0(ctx, base);
	// lbz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82ad3a1c
	if (cr6.lt) goto loc_82AD3A1C;
	// bne cr6,0x82ad3a24
	if (!cr6.eq) goto loc_82AD3A24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ad3818
	ctx.lr = 0x82AD3A10;
	sub_82AD3818(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82AD3A1C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ad33d0
	ctx.lr = 0x82AD3A24;
	sub_82AD33D0(ctx, base);
loc_82AD3A24:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD3A30"))) PPC_WEAK_FUNC(sub_82AD3A30);
PPC_FUNC_IMPL(__imp__sub_82AD3A30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r11,r11,-8296
	ctx.r11.s64 = ctx.r11.s64 + -8296;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ad3a54
	if (!cr6.eq) goto loc_82AD3A54;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x82ad3a7c
	goto loc_82AD3A7C;
loc_82AD3A54:
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x82ad3a74
	if (!cr6.eq) goto loc_82AD3A74;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82ad3a78
	if (cr6.eq) goto loc_82AD3A78;
loc_82AD3A74:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AD3A78:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82AD3A7C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ad3af0
	if (!cr6.eq) goto loc_82AD3AF0;
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r3,36
	ctx.r10.s64 = ctx.r3.s64 + 36;
loc_82AD3A94:
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82ad3aac
	if (!cr6.eq) goto loc_82AD3AAC;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cntlzw r7,r11
	ctx.r7.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r7,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// b 0x82ad3ad4
	goto loc_82AD3AD4;
loc_82AD3AAC:
	// lhz r6,-4(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + -4);
	// lhz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplw cr6,r6,r7
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, xer);
	// bne cr6,0x82ad3acc
	if (!cr6.eq) goto loc_82AD3ACC;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82ad3ad0
	if (cr6.eq) goto loc_82AD3AD0;
loc_82AD3ACC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AD3AD0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82AD3AD4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ad3af8
	if (!cr6.eq) goto loc_82AD3AF8;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 + 28;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82ad3a94
	if (cr6.lt) goto loc_82AD3A94;
loc_82AD3AF0:
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// blr 
	return;
loc_82AD3AF8:
	// mulli r11,r9,28
	ctx.r11.s64 = ctx.r9.s64 * 28;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD3B08"))) PPC_WEAK_FUNC(sub_82AD3B08);
PPC_FUNC_IMPL(__imp__sub_82AD3B08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// std r4,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
	// lhz r6,24(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 24);
	// addi r11,r11,-8296
	ctx.r11.s64 = ctx.r11.s64 + -8296;
	// lwz r7,28(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ad3b34
	if (!cr6.eq) goto loc_82AD3B34;
	// cntlzw r11,r7
	ctx.r11.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x82ad3b58
	goto loc_82AD3B58;
loc_82AD3B34:
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// clrlwi r9,r6,16
	ctx.r9.u64 = ctx.r6.u32 & 0xFFFF;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x82ad3b50
	if (!cr6.eq) goto loc_82AD3B50;
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82ad3b54
	if (cr6.eq) goto loc_82AD3B54;
loc_82AD3B50:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AD3B54:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82AD3B58:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ad3be8
	if (!cr6.eq) goto loc_82AD3BE8;
	// addis r8,r3,5
	ctx.r8.s64 = ctx.r3.s64 + 327680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r8,-27668
	ctx.r8.s64 = ctx.r8.s64 + -27668;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_82AD3B74:
	// cmplwi cr6,r10,50
	cr6.compare<uint32_t>(ctx.r10.u32, 50, xer);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// bge cr6,0x82ad3b84
	if (!cr6.lt) goto loc_82AD3B84;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82AD3B84:
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// bne cr6,0x82ad3ba4
	if (!cr6.eq) goto loc_82AD3BA4;
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// cntlzw r5,r11
	ctx.r5.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r5,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// b 0x82ad3bcc
	goto loc_82AD3BCC;
loc_82AD3BA4:
	// lhz r4,-16(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// clrlwi r5,r6,16
	ctx.r5.u64 = ctx.r6.u32 & 0xFFFF;
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// bne cr6,0x82ad3bc4
	if (!cr6.eq) goto loc_82AD3BC4;
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82ad3bc8
	if (cr6.eq) goto loc_82AD3BC8;
loc_82AD3BC4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AD3BC8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82AD3BCC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ad3bf0
	if (!cr6.eq) goto loc_82AD3BF0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,516
	ctx.r9.s64 = ctx.r9.s64 + 516;
	// cmplwi cr6,r10,50
	cr6.compare<uint32_t>(ctx.r10.u32, 50, xer);
	// blt cr6,0x82ad3b74
	if (cr6.lt) goto loc_82AD3B74;
loc_82AD3BE8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82AD3BF0:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD3BF8"))) PPC_WEAK_FUNC(sub_82AD3BF8);
PPC_FUNC_IMPL(__imp__sub_82AD3BF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// std r4,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
	// lhz r5,24(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 24);
	// addi r11,r11,-8296
	ctx.r11.s64 = ctx.r11.s64 + -8296;
	// lwz r6,28(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ad3c24
	if (!cr6.eq) goto loc_82AD3C24;
	// cntlzw r11,r6
	ctx.r11.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x82ad3c48
	goto loc_82AD3C48;
loc_82AD3C24:
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// clrlwi r9,r5,16
	ctx.r9.u64 = ctx.r5.u32 & 0xFFFF;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x82ad3c40
	if (!cr6.eq) goto loc_82AD3C40;
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82ad3c44
	if (cr6.eq) goto loc_82AD3C44;
loc_82AD3C40:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AD3C44:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82AD3C48:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ad3c60
	if (cr6.eq) goto loc_82AD3C60;
	// addis r3,r3,5
	ctx.r3.s64 = ctx.r3.s64 + 327680;
	// addi r3,r3,940
	ctx.r3.s64 = ctx.r3.s64 + 940;
	// blr 
	return;
loc_82AD3C60:
	// lis r11,5
	ctx.r11.s64 = 327680;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r8,r11,940
	ctx.r8.u64 = ctx.r11.u64 | 940;
	// add r7,r3,r8
	ctx.r7.u64 = ctx.r3.u64 + ctx.r8.u64;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
loc_82AD3C74:
	// ld r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// bne cr6,0x82ad3c94
	if (!cr6.eq) goto loc_82AD3C94;
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// cntlzw r4,r11
	ctx.r4.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r4,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// b 0x82ad3cbc
	goto loc_82AD3CBC;
loc_82AD3C94:
	// lhz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// clrlwi r4,r5,16
	ctx.r4.u64 = ctx.r5.u32 & 0xFFFF;
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, xer);
	// bne cr6,0x82ad3cb4
	if (!cr6.eq) goto loc_82AD3CB4;
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82ad3cb8
	if (cr6.eq) goto loc_82AD3CB8;
loc_82AD3CB4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AD3CB8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82AD3CBC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ad3ce0
	if (!cr6.eq) goto loc_82AD3CE0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,192
	ctx.r9.s64 = ctx.r9.s64 + 192;
	// cmplwi cr6,r10,50
	cr6.compare<uint32_t>(ctx.r10.u32, 50, xer);
	// blt cr6,0x82ad3c74
	if (cr6.lt) goto loc_82AD3C74;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// blr 
	return;
loc_82AD3CE0:
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r3,r10,r8
	ctx.r3.u64 = ctx.r10.u64 + ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD3CF8"))) PPC_WEAK_FUNC(sub_82AD3CF8);
PPC_FUNC_IMPL(__imp__sub_82AD3CF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// std r4,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
	// lhz r7,24(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 24);
	// addi r11,r11,-8296
	ctx.r11.s64 = ctx.r11.s64 + -8296;
	// lwz r8,28(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ad3d24
	if (!cr6.eq) goto loc_82AD3D24;
	// cntlzw r11,r8
	ctx.r11.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x82ad3d48
	goto loc_82AD3D48;
loc_82AD3D24:
	// lhz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// clrlwi r9,r7,16
	ctx.r9.u64 = ctx.r7.u32 & 0xFFFF;
	// cmplw cr6,r9,r6
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, xer);
	// bne cr6,0x82ad3d40
	if (!cr6.eq) goto loc_82AD3D40;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82ad3d44
	if (cr6.eq) goto loc_82AD3D44;
loc_82AD3D40:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AD3D44:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82AD3D48:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ad3dc4
	if (!cr6.eq) goto loc_82AD3DC4;
	// addis r10,r3,5
	ctx.r10.s64 = ctx.r3.s64 + 327680;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,940
	ctx.r10.s64 = ctx.r10.s64 + 940;
loc_82AD3D60:
	// ld r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// bne cr6,0x82ad3d80
	if (!cr6.eq) goto loc_82AD3D80;
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// cntlzw r6,r11
	ctx.r6.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r6,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// b 0x82ad3da8
	goto loc_82AD3DA8;
loc_82AD3D80:
	// lhz r5,-16(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// clrlwi r6,r7,16
	ctx.r6.u64 = ctx.r7.u32 & 0xFFFF;
	// cmplw cr6,r5,r6
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, xer);
	// bne cr6,0x82ad3da0
	if (!cr6.eq) goto loc_82AD3DA0;
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82ad3da4
	if (cr6.eq) goto loc_82AD3DA4;
loc_82AD3DA0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AD3DA4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82AD3DA8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ad3dcc
	if (!cr6.eq) goto loc_82AD3DCC;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,192
	ctx.r10.s64 = ctx.r10.s64 + 192;
	// cmplwi cr6,r9,50
	cr6.compare<uint32_t>(ctx.r9.u32, 50, xer);
	// blt cr6,0x82ad3d60
	if (cr6.lt) goto loc_82AD3D60;
loc_82AD3DC4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82AD3DCC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD3DD4"))) PPC_WEAK_FUNC(sub_82AD3DD4);
PPC_FUNC_IMPL(__imp__sub_82AD3DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AD3DD8"))) PPC_WEAK_FUNC(sub_82AD3DD8);
PPC_FUNC_IMPL(__imp__sub_82AD3DD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addis r10,r3,214
	ctx.r10.s64 = ctx.r3.s64 + 14024704;
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,10912
	ctx.r10.s64 = ctx.r10.s64 + 10912;
loc_82AD3DE8:
	// ld r11,-16(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + -16);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// bne cr6,0x82ad3e08
	if (!cr6.eq) goto loc_82AD3E08;
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// cntlzw r7,r11
	ctx.r7.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r7,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// b 0x82ad3e30
	goto loc_82AD3E30;
loc_82AD3E08:
	// lhz r6,-16(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// lhz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplw cr6,r6,r7
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, xer);
	// bne cr6,0x82ad3e28
	if (!cr6.eq) goto loc_82AD3E28;
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82ad3e2c
	if (cr6.eq) goto loc_82AD3E2C;
loc_82AD3E28:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AD3E2C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82AD3E30:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ad3e4c
	if (cr6.eq) goto loc_82AD3E4C;
	// lhz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// clrlwi r7,r11,30
	ctx.r7.u64 = ctx.r11.u32 & 0x3;
	// cmplw cr6,r7,r5
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, xer);
	// beq cr6,0x82ad3e68
	if (cr6.eq) goto loc_82AD3E68;
loc_82AD3E4C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,5852
	ctx.r10.s64 = ctx.r10.s64 + 5852;
	// cmplwi cr6,r9,72
	cr6.compare<uint32_t>(ctx.r9.u32, 72, xer);
	// blt cr6,0x82ad3de8
	if (cr6.lt) goto loc_82AD3DE8;
	// addis r3,r3,214
	ctx.r3.s64 = ctx.r3.s64 + 14024704;
	// addi r3,r3,10896
	ctx.r3.s64 = ctx.r3.s64 + 10896;
	// blr 
	return;
loc_82AD3E68:
	// mulli r11,r9,5852
	ctx.r11.s64 = ctx.r9.s64 * 5852;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addis r3,r11,214
	ctx.r3.s64 = ctx.r11.s64 + 14024704;
	// addi r3,r3,10896
	ctx.r3.s64 = ctx.r3.s64 + 10896;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD3E7C"))) PPC_WEAK_FUNC(sub_82AD3E7C);
PPC_FUNC_IMPL(__imp__sub_82AD3E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AD3E80"))) PPC_WEAK_FUNC(sub_82AD3E80);
PPC_FUNC_IMPL(__imp__sub_82AD3E80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addis r10,r3,214
	ctx.r10.s64 = ctx.r3.s64 + 14024704;
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,10912
	ctx.r10.s64 = ctx.r10.s64 + 10912;
loc_82AD3E90:
	// ld r11,-16(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + -16);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// bne cr6,0x82ad3eb0
	if (!cr6.eq) goto loc_82AD3EB0;
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// cntlzw r7,r11
	ctx.r7.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r7,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// b 0x82ad3ed8
	goto loc_82AD3ED8;
loc_82AD3EB0:
	// lhz r6,-16(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// lhz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplw cr6,r6,r7
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, xer);
	// bne cr6,0x82ad3ed0
	if (!cr6.eq) goto loc_82AD3ED0;
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82ad3ed4
	if (cr6.eq) goto loc_82AD3ED4;
loc_82AD3ED0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AD3ED4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82AD3ED8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ad3ef4
	if (cr6.eq) goto loc_82AD3EF4;
	// lhz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// clrlwi r7,r11,30
	ctx.r7.u64 = ctx.r11.u32 & 0x3;
	// cmplw cr6,r7,r5
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, xer);
	// beq cr6,0x82ad3f0c
	if (cr6.eq) goto loc_82AD3F0C;
loc_82AD3EF4:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,5852
	ctx.r10.s64 = ctx.r10.s64 + 5852;
	// cmplwi cr6,r9,72
	cr6.compare<uint32_t>(ctx.r9.u32, 72, xer);
	// blt cr6,0x82ad3e90
	if (cr6.lt) goto loc_82AD3E90;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82AD3F0C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD3F14"))) PPC_WEAK_FUNC(sub_82AD3F14);
PPC_FUNC_IMPL(__imp__sub_82AD3F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AD3F18"))) PPC_WEAK_FUNC(sub_82AD3F18);
PPC_FUNC_IMPL(__imp__sub_82AD3F18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82AD3F20;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82ad3f44
	if (!cr6.eq) goto loc_82AD3F44;
loc_82AD3F38:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82AD3F44:
	// bl 0x830ff290
	ctx.lr = 0x82AD3F48;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82AD3F4C;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,21
	cr6.compare<uint32_t>(ctx.r3.u32, 21, xer);
	// bne cr6,0x82ad41f0
	if (!cr6.eq) goto loc_82AD41F0;
	// bl 0x82d86078
	ctx.lr = 0x82AD3F58;
	sub_82D86078(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ad3f38
	if (cr6.eq) goto loc_82AD3F38;
	// lwz r11,96(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 96);
	// cmpwi cr6,r11,29
	cr6.compare<int32_t>(ctx.r11.s32, 29, xer);
	// bne cr6,0x82ad3fd4
	if (!cr6.eq) goto loc_82AD3FD4;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x82AD3F78;
	sub_82DAB6D0(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x82AD3F7C;
	sub_825832E0(ctx, base);
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ad3f94
	if (!cr6.eq) goto loc_82AD3F94;
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x82ad3fb4
	goto loc_82AD3FB4;
loc_82AD3F94:
	// lhz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r23.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ad3fac
	if (!cr6.eq) goto loc_82AD3FAC;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82ad3fb0
	if (cr6.eq) goto loc_82AD3FB0;
loc_82AD3FAC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AD3FB0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82AD3FB4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r6,2
	ctx.r6.s64 = 2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bne cr6,0x82ad4018
	if (!cr6.eq) goto loc_82AD4018;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82ad401c
	goto loc_82AD401C;
loc_82AD3FD4:
	// cmpwi cr6,r11,30
	cr6.compare<int32_t>(ctx.r11.s32, 30, xer);
	// bne cr6,0x82ad4020
	if (!cr6.eq) goto loc_82AD4020;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d8bb28
	ctx.lr = 0x82AD3FE4;
	sub_82D8BB28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ad4020
	if (cr6.eq) goto loc_82AD4020;
	// lwz r3,116(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 116);
	// bl 0x831f8200
	ctx.lr = 0x82AD3FF8;
	sub_831F8200(ctx, base);
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82ad401c
	if (cr6.eq) goto loc_82AD401C;
loc_82AD4018:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82AD401C:
	// bl 0x82d2b608
	ctx.lr = 0x82AD4020;
	sub_82D2B608(ctx, base);
loc_82AD4020:
	// lwz r3,116(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x82AD4028;
	sub_825832D8(ctx, base);
	// bl 0x83102db0
	ctx.lr = 0x82AD402C;
	sub_83102DB0(ctx, base);
	// lwz r11,96(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 96);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,34
	cr6.compare<int32_t>(ctx.r11.s32, 34, xer);
	// beq cr6,0x82ad41f0
	if (cr6.eq) goto loc_82AD41F0;
	// lwz r10,100(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r30,r28,100
	ctx.r30.s64 = ctx.r28.s64 + 100;
	// addi r27,r11,-8340
	ctx.r27.s64 = ctx.r11.s64 + -8340;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r4,-4(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AD4060;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r29,r11,-17396
	ctx.r29.s64 = ctx.r11.s64 + -17396;
	// beq cr6,0x82ad4194
	if (cr6.eq) goto loc_82AD4194;
	// lwz r3,116(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x82AD407C;
	sub_825832D8(ctx, base);
	// bl 0x82d99c10
	ctx.lr = 0x82AD4080;
	sub_82D99C10(ctx, base);
	// bl 0x825832f0
	ctx.lr = 0x82AD4084;
	sub_825832F0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ad40bc
	if (!cr6.eq) goto loc_82AD40BC;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r11,r9,-17396
	ctx.r11.s64 = ctx.r9.s64 + -17396;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-148
	ctx.r4.s64 = ctx.r11.s64 + -148;
	// lwz r8,72(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82AD40B0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82AD40BC:
	// lwz r4,4(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// bl 0x82d98cb0
	ctx.lr = 0x82AD40C4;
	sub_82D98CB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ad4104
	if (cr6.eq) goto loc_82AD4104;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r29,-132
	ctx.r4.s64 = ctx.r29.s64 + -132;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AD40EC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r29,-112
	ctx.r4.s64 = ctx.r29.s64 + -112;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// b 0x82ad4114
	goto loc_82AD4114;
loc_82AD4104:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r29,-88
	ctx.r4.s64 = ctx.r29.s64 + -88;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82AD4114:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x82AD411C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,96(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 96);
	// cmpwi cr6,r11,35
	cr6.compare<int32_t>(ctx.r11.s32, 35, xer);
	// beq cr6,0x82ad4130
	if (cr6.eq) goto loc_82AD4130;
	// cmpwi cr6,r11,36
	cr6.compare<int32_t>(ctx.r11.s32, 36, xer);
	// bne cr6,0x82ad4194
	if (!cr6.eq) goto loc_82AD4194;
loc_82AD4130:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,4(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// bl 0x82d9a868
	ctx.lr = 0x82AD413C;
	sub_82D9A868(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ad417c
	if (cr6.eq) goto loc_82AD417C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r29,-72
	ctx.r4.s64 = ctx.r29.s64 + -72;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AD4164;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r29,-52
	ctx.r4.s64 = ctx.r29.s64 + -52;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// b 0x82ad418c
	goto loc_82AD418C;
loc_82AD417C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r29,-28
	ctx.r4.s64 = ctx.r29.s64 + -28;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82AD418C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x82AD4194;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82AD4194:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82AD41AC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ad41f0
	if (cr6.eq) goto loc_82AD41F0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,4(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// bl 0x82d9a868
	ctx.lr = 0x82AD41C4;
	sub_82D9A868(ctx, base);
	// lbz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 116);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r29,-12
	ctx.r4.s64 = ctx.r29.s64 + -12;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bne cr6,0x82ad41e8
	if (!cr6.eq) goto loc_82AD41E8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_82AD41E8:
	// li r5,1
	ctx.r5.s64 = 1;
	// bctrl 
	ctx.lr = 0x82AD41F0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82AD41F0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD41FC"))) PPC_WEAK_FUNC(sub_82AD41FC);
PPC_FUNC_IMPL(__imp__sub_82AD41FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AD4200"))) PPC_WEAK_FUNC(sub_82AD4200);
PPC_FUNC_IMPL(__imp__sub_82AD4200) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82AD4208;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r3,r11,-17252
	ctx.r3.s64 = ctx.r11.s64 + -17252;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2fa90
	ctx.lr = 0x82AD422C;
	sub_82D2FA90(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d2ada8
	ctx.lr = 0x82AD4238;
	sub_82D2ADA8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82AD4244;
	sub_83103100(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD424C"))) PPC_WEAK_FUNC(sub_82AD424C);
PPC_FUNC_IMPL(__imp__sub_82AD424C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AD4250"))) PPC_WEAK_FUNC(sub_82AD4250);
PPC_FUNC_IMPL(__imp__sub_82AD4250) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82AD4258;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r3,r11,-17236
	ctx.r3.s64 = ctx.r11.s64 + -17236;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2fa90
	ctx.lr = 0x82AD427C;
	sub_82D2FA90(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d2aab0
	ctx.lr = 0x82AD4288;
	sub_82D2AAB0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82AD4294;
	sub_83103100(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD429C"))) PPC_WEAK_FUNC(sub_82AD429C);
PPC_FUNC_IMPL(__imp__sub_82AD429C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AD42A0"))) PPC_WEAK_FUNC(sub_82AD42A0);
PPC_FUNC_IMPL(__imp__sub_82AD42A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82AD42A8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lwz r7,96(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r8,r11,-8192
	ctx.r8.s64 = ctx.r11.s64 + -8192;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82AD42C8:
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r7,r6
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, xer);
	// beq cr6,0x82ad42f0
	if (cr6.eq) goto loc_82AD42F0;
	// addi r10,r10,44
	ctx.r10.s64 = ctx.r10.s64 + 44;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
	// cmplwi cr6,r10,1672
	cr6.compare<uint32_t>(ctx.r10.u32, 1672, xer);
	// blt cr6,0x82ad42c8
	if (cr6.lt) goto loc_82AD42C8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82AD42F0:
	// mulli r30,r9,44
	ctx.r30.s64 = ctx.r9.s64 * 44;
	// addi r29,r8,4
	ctx.r29.s64 = ctx.r8.s64 + 4;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwzx r11,r30,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,25
	cr6.compare<int32_t>(ctx.r10.s32, 25, xer);
	// beq cr6,0x82ad4358
	if (cr6.eq) goto loc_82AD4358;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82AD4310:
	// bl 0x830ff290
	ctx.lr = 0x82AD4314;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82AD4318;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,13
	cr6.compare<uint32_t>(ctx.r3.u32, 13, xer);
	// bne cr6,0x82ad4330
	if (!cr6.eq) goto loc_82AD4330;
	// lwzx r11,r30,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmpwi cr6,r10,6
	cr6.compare<int32_t>(ctx.r10.s32, 6, xer);
	// beq cr6,0x82ad4340
	if (cr6.eq) goto loc_82AD4340;
loc_82AD4330:
	// lwzx r11,r30,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82c0de78
	ctx.lr = 0x82AD4340;
	sub_82C0DE78(ctx, base);
loc_82AD4340:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lwzx r11,r30,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// rlwinm r31,r28,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmpwi cr6,r10,25
	cr6.compare<int32_t>(ctx.r10.s32, 25, xer);
	// bne cr6,0x82ad4310
	if (!cr6.eq) goto loc_82AD4310;
loc_82AD4358:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD4360"))) PPC_WEAK_FUNC(sub_82AD4360);
PPC_FUNC_IMPL(__imp__sub_82AD4360) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82AD4368;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lwz r7,96(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r8,r11,-8192
	ctx.r8.s64 = ctx.r11.s64 + -8192;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82AD4388:
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r7,r6
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, xer);
	// beq cr6,0x82ad43b0
	if (cr6.eq) goto loc_82AD43B0;
	// addi r10,r10,44
	ctx.r10.s64 = ctx.r10.s64 + 44;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
	// cmplwi cr6,r10,1672
	cr6.compare<uint32_t>(ctx.r10.u32, 1672, xer);
	// blt cr6,0x82ad4388
	if (cr6.lt) goto loc_82AD4388;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82AD43B0:
	// mulli r30,r9,44
	ctx.r30.s64 = ctx.r9.s64 * 44;
	// addi r29,r8,12
	ctx.r29.s64 = ctx.r8.s64 + 12;
	// lwzx r11,r30,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ad4424
	if (cr6.eq) goto loc_82AD4424;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82AD43C8:
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,17
	cr6.compare<int32_t>(ctx.r11.s32, 17, xer);
	// beq cr6,0x82ad4424
	if (cr6.eq) goto loc_82AD4424;
	// bl 0x830ff290
	ctx.lr = 0x82AD43D8;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82AD43DC;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,13
	cr6.compare<uint32_t>(ctx.r3.u32, 13, xer);
	// bne cr6,0x82ad4404
	if (!cr6.eq) goto loc_82AD4404;
	// lwzx r11,r30,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// beq cr6,0x82ad4424
	if (cr6.eq) goto loc_82AD4424;
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// beq cr6,0x82ad4424
	if (cr6.eq) goto loc_82AD4424;
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// beq cr6,0x82ad4424
	if (cr6.eq) goto loc_82AD4424;
loc_82AD4404:
	// lwzx r11,r30,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82c0de80
	ctx.lr = 0x82AD4414;
	sub_82C0DE80(ctx, base);
	// lwzx r11,r30,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ad43c8
	if (!cr6.eq) goto loc_82AD43C8;
loc_82AD4424:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD442C"))) PPC_WEAK_FUNC(sub_82AD442C);
PPC_FUNC_IMPL(__imp__sub_82AD442C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AD4430"))) PPC_WEAK_FUNC(sub_82AD4430);
PPC_FUNC_IMPL(__imp__sub_82AD4430) {
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
	// bl 0x830ff290
	ctx.lr = 0x82AD4448;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82AD444C;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,12
	cr6.compare<uint32_t>(ctx.r3.u32, 12, xer);
	// bne cr6,0x82ad4464
	if (!cr6.eq) goto loc_82AD4464;
	// lwz r3,288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ad4464
	if (cr6.eq) goto loc_82AD4464;
	// bl 0x82c1f958
	ctx.lr = 0x82AD4464;
	sub_82C1F958(ctx, base);
loc_82AD4464:
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

__attribute__((alias("__imp__sub_82AD4478"))) PPC_WEAK_FUNC(sub_82AD4478);
PPC_FUNC_IMPL(__imp__sub_82AD4478) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r4,12
	ctx.r11.s64 = ctx.r4.s64 + 12;
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// lwz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// lwz r6,8(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// lwz r5,12(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
loc_82AD44A8:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82ad44a8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82AD44A8;
	// lwz r8,36(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r4,92
	ctx.r11.s64 = ctx.r4.s64 + 92;
	// addi r10,r3,92
	ctx.r10.s64 = ctx.r3.s64 + 92;
	// stw r8,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r8.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// lwz r7,40(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// stw r7,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r7.u32);
	// lwz r6,44(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// stw r6,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r6.u32);
	// lwz r5,48(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// stw r5,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r5.u32);
	// lbz r9,52(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 52);
	// stb r9,52(r3)
	PPC_STORE_U8(ctx.r3.u32 + 52, ctx.r9.u8);
	// lbz r8,53(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 53);
	// stb r8,53(r3)
	PPC_STORE_U8(ctx.r3.u32 + 53, ctx.r8.u8);
	// lbz r7,54(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 54);
	// stb r7,54(r3)
	PPC_STORE_U8(ctx.r3.u32 + 54, ctx.r7.u8);
	// lbz r6,55(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 55);
	// stb r6,55(r3)
	PPC_STORE_U8(ctx.r3.u32 + 55, ctx.r6.u8);
	// lbz r5,56(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 56);
	// stb r5,56(r3)
	PPC_STORE_U8(ctx.r3.u32 + 56, ctx.r5.u8);
	// lbz r9,57(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 57);
	// stb r9,57(r3)
	PPC_STORE_U8(ctx.r3.u32 + 57, ctx.r9.u8);
	// lbz r8,58(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 58);
	// stb r8,58(r3)
	PPC_STORE_U8(ctx.r3.u32 + 58, ctx.r8.u8);
	// lbz r7,59(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 59);
	// stb r7,59(r3)
	PPC_STORE_U8(ctx.r3.u32 + 59, ctx.r7.u8);
	// lbz r6,60(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 60);
	// stb r6,60(r3)
	PPC_STORE_U8(ctx.r3.u32 + 60, ctx.r6.u8);
	// lbz r5,61(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 61);
	// stb r5,61(r3)
	PPC_STORE_U8(ctx.r3.u32 + 61, ctx.r5.u8);
	// lbz r9,62(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 62);
	// stb r9,62(r3)
	PPC_STORE_U8(ctx.r3.u32 + 62, ctx.r9.u8);
	// lbz r8,63(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 63);
	// stb r8,63(r3)
	PPC_STORE_U8(ctx.r3.u32 + 63, ctx.r8.u8);
	// lbz r7,64(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 64);
	// stb r7,64(r3)
	PPC_STORE_U8(ctx.r3.u32 + 64, ctx.r7.u8);
	// lbz r6,65(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 65);
	// stb r6,65(r3)
	PPC_STORE_U8(ctx.r3.u32 + 65, ctx.r6.u8);
	// lbz r5,66(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 66);
	// stb r5,66(r3)
	PPC_STORE_U8(ctx.r3.u32 + 66, ctx.r5.u8);
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
	// lwz r9,88(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	// stw r9,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r9.u32);
	// lwz r8,92(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	// stw r8,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r8.u32);
loc_82AD4594:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82ad4594
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82AD4594;
	// lbz r8,116(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 116);
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r10,r3,120
	ctx.r10.s64 = ctx.r3.s64 + 120;
	// addi r11,r4,116
	ctx.r11.s64 = ctx.r4.s64 + 116;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// stb r8,116(r3)
	PPC_STORE_U8(ctx.r3.u32 + 116, ctx.r8.u8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82AD45BC:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82ad45bc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82AD45BC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD45CC"))) PPC_WEAK_FUNC(sub_82AD45CC);
PPC_FUNC_IMPL(__imp__sub_82AD45CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AD45D0"))) PPC_WEAK_FUNC(sub_82AD45D0);
PPC_FUNC_IMPL(__imp__sub_82AD45D0) {
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
	// beq cr6,0x82ad4624
	if (cr6.eq) goto loc_82AD4624;
	// lis r11,2340
	ctx.r11.s64 = 153354240;
	// ori r10,r11,37449
	ctx.r10.u64 = ctx.r11.u64 | 37449;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82ad4608
	if (cr6.gt) goto loc_82AD4608;
	// mulli r3,r4,28
	ctx.r3.s64 = ctx.r4.s64 * 28;
	// bl 0x82416260
	ctx.lr = 0x82AD4600;
	sub_82416260(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82ad4624
	if (!cr6.eq) goto loc_82AD4624;
loc_82AD4608:
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
	ctx.lr = 0x82AD4624;
	sub_8246B850(ctx, base);
loc_82AD4624:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD4634"))) PPC_WEAK_FUNC(sub_82AD4634);
PPC_FUNC_IMPL(__imp__sub_82AD4634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AD4638"))) PPC_WEAK_FUNC(sub_82AD4638);
PPC_FUNC_IMPL(__imp__sub_82AD4638) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82AD4640;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,296(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 296);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ad4668
	if (!cr6.eq) goto loc_82AD4668;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,-17180
	ctx.r3.s64 = ctx.r11.s64 + -17180;
	// bl 0x82c00618
	ctx.lr = 0x82AD4664;
	sub_82C00618(ctx, base);
	// stw r3,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r3.u32);
loc_82AD4668:
	// lwz r11,296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ad4a78
	if (cr6.eq) goto loc_82AD4A78;
	// bl 0x831156e8
	ctx.lr = 0x82AD4678;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r27,48(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x82c0b6e0
	ctx.lr = 0x82AD468C;
	sub_82C0B6E0(ctx, base);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// li r28,1
	ctx.r28.s64 = 1;
	// addi r29,r11,-8296
	ctx.r29.s64 = ctx.r11.s64 + -8296;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ad46b8
	if (!cr6.eq) goto loc_82AD46B8;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x82ad46e0
	goto loc_82AD46E0;
loc_82AD46B8:
	// lhz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// lhz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x82ad46d8
	if (!cr6.eq) goto loc_82AD46D8;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// beq cr6,0x82ad46dc
	if (cr6.eq) goto loc_82AD46DC;
loc_82AD46D8:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82AD46DC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82AD46E0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ad4704
	if (cr6.eq) goto loc_82AD4704;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c0b698
	ctx.lr = 0x82AD46FC;
	sub_82C0B698(ctx, base);
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
loc_82AD4704:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,296(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// bl 0x83103100
	ctx.lr = 0x82AD4710;
	sub_83103100(ctx, base);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,296(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// addi r10,r11,-8332
	ctx.r10.s64 = ctx.r11.s64 + -8332;
	// lwz r4,-8332(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8332);
	// lwz r5,-4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// bl 0x82bff970
	ctx.lr = 0x82AD472C;
	sub_82BFF970(ctx, base);
	// lwz r10,296(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// li r30,108
	ctx.r30.s64 = 108;
	// lwz r11,76(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// lwz r9,80(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw. r7,r8,r30
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r30.s32);
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x82ad4754
	if (!cr0.eq) goto loc_82AD4754;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82AD4754;
	sub_831CC188(ctx, base);
loc_82AD4754:
	// li r10,20
	ctx.r10.s64 = 20;
	// stw r10,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
	// lwz r11,296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// addi r11,r11,76
	ctx.r11.s64 = ctx.r11.s64 + 76;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// divw. r7,r8,r30
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r30.s32);
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x82ad4784
	if (!cr0.eq) goto loc_82AD4784;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82AD4784;
	sub_831CC188(ctx, base);
loc_82AD4784:
	// li r9,25
	ctx.r9.s64 = 25;
	// stw r9,92(r10)
	PPC_STORE_U32(ctx.r10.u32 + 92, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// divw. r6,r7,r30
	ctx.r6.s32 = PPCDivide(ctx.r7.s32, ctx.r30.s32);
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne 0x82ad47ac
	if (!cr0.eq) goto loc_82AD47AC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82AD47AC;
	sub_831CC188(ctx, base);
loc_82AD47AC:
	// stb r28,99(r10)
	PPC_STORE_U8(ctx.r10.u32 + 99, ctx.r28.u8);
	// lwz r10,296(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// lwz r11,76(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// lwz r10,80(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw. r8,r9,r30
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r30.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82ad47d4
	if (!cr0.eq) goto loc_82AD47D4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82AD47D4;
	sub_831CC188(ctx, base);
loc_82AD47D4:
	// stw r26,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r26.u32);
	// lwz r11,296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw. r8,r9,r30
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r30.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82ad47fc
	if (!cr0.eq) goto loc_82AD47FC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82AD47FC;
	sub_831CC188(ctx, base);
loc_82AD47FC:
	// stw r28,88(r10)
	PPC_STORE_U32(ctx.r10.u32 + 88, ctx.r28.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ad481c
	if (!cr6.eq) goto loc_82AD481C;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x82ad4844
	goto loc_82AD4844;
loc_82AD481C:
	// lhz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// lhz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x82ad483c
	if (!cr6.eq) goto loc_82AD483C;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// beq cr6,0x82ad4840
	if (cr6.eq) goto loc_82AD4840;
loc_82AD483C:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82AD4840:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82AD4844:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ad48a4
	if (!cr6.eq) goto loc_82AD48A4;
	// lwz r10,296(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lwz r11,76(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// lwz r10,80(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw. r7,r8,r30
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r30.s32);
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x82ad4878
	if (!cr0.eq) goto loc_82AD4878;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82AD4878;
	sub_831CC188(ctx, base);
loc_82AD4878:
	// std r9,60(r11)
	PPC_STORE_U64(ctx.r11.u32 + 60, ctx.r9.u64);
	// lwz r11,296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw. r8,r9,r30
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r30.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82ad48a0
	if (!cr0.eq) goto loc_82AD48A0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82AD48A0;
	sub_831CC188(ctx, base);
loc_82AD48A0:
	// stw r26,80(r10)
	PPC_STORE_U32(ctx.r10.u32 + 80, ctx.r26.u32);
loc_82AD48A4:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(ctx.r11.s32, 12, xer);
	// beq cr6,0x82ad4938
	if (cr6.eq) goto loc_82AD4938;
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(ctx.r11.s32, 13, xer);
	// beq cr6,0x82ad4938
	if (cr6.eq) goto loc_82AD4938;
	// cmpwi cr6,r11,14
	cr6.compare<int32_t>(ctx.r11.s32, 14, xer);
	// beq cr6,0x82ad4938
	if (cr6.eq) goto loc_82AD4938;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c0ac50
	ctx.lr = 0x82AD48D0;
	sub_82C0AC50(ctx, base);
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,-8248(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8248);
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm r8,r9,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82ad4900
	if (!cr6.eq) goto loc_82AD4900;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ad4904
	if (cr6.eq) goto loc_82AD4904;
loc_82AD4900:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82AD4904:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ad4960
	if (!cr6.eq) goto loc_82AD4960;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c0ac50
	ctx.lr = 0x82AD491C;
	sub_82C0AC50(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8311c148
	ctx.lr = 0x82AD492C;
	sub_8311C148(ctx, base);
	// lwz r10,796(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 796);
	// rlwinm r29,r10,19,29,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x7;
	// b 0x82ad4960
	goto loc_82AD4960;
loc_82AD4938:
	// lwz r11,296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw. r8,r9,r30
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r30.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82ad495c
	if (!cr0.eq) goto loc_82AD495C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82AD495C;
	sub_831CC188(ctx, base);
loc_82AD495C:
	// stw r28,56(r10)
	PPC_STORE_U32(ctx.r10.u32 + 56, ctx.r28.u32);
loc_82AD4960:
	// lwz r11,296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw. r8,r9,r30
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r30.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82ad4984
	if (!cr0.eq) goto loc_82AD4984;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82AD4984;
	sub_831CC188(ctx, base);
loc_82AD4984:
	// stw r29,56(r10)
	PPC_STORE_U32(ctx.r10.u32 + 56, ctx.r29.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x8311bf98
	ctx.lr = 0x82AD4994;
	sub_8311BF98(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83120738
	ctx.lr = 0x82AD49A8;
	sub_83120738(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82ad49dc
	if (!cr6.eq) goto loc_82AD49DC;
	// lwz r11,296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw. r8,r9,r30
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r30.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82ad49d8
	if (!cr0.eq) goto loc_82AD49D8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82AD49D8;
	sub_831CC188(ctx, base);
loc_82AD49D8:
	// stb r28,72(r10)
	PPC_STORE_U8(ctx.r10.u32 + 72, ctx.r28.u8);
loc_82AD49DC:
	// bl 0x83763ef8
	ctx.lr = 0x82AD49E0;
	sub_83763EF8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x830ff290
	ctx.lr = 0x82AD49E8;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ad4a44
	if (!cr6.eq) goto loc_82AD4A44;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82ad4a44
	if (cr6.eq) goto loc_82AD4A44;
	// lbz r11,209(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 209);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ad4a44
	if (cr6.eq) goto loc_82AD4A44;
	// lwz r11,296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw. r8,r9,r30
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r30.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82ad4a2c
	if (!cr0.eq) goto loc_82AD4A2C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82AD4A2C;
	sub_831CC188(ctx, base);
loc_82AD4A2C:
	// stb r28,96(r10)
	PPC_STORE_U8(ctx.r10.u32 + 96, ctx.r28.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,296(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// bl 0x82bff800
	ctx.lr = 0x82AD4A3C;
	sub_82BFF800(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82AD4A44:
	// lwz r11,296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw. r8,r9,r30
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r30.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82ad4a68
	if (!cr0.eq) goto loc_82AD4A68;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82AD4A68;
	sub_831CC188(ctx, base);
loc_82AD4A68:
	// stb r26,96(r10)
	PPC_STORE_U8(ctx.r10.u32 + 96, ctx.r26.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,296(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// bl 0x82bff800
	ctx.lr = 0x82AD4A78;
	sub_82BFF800(ctx, base);
loc_82AD4A78:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD4A80"))) PPC_WEAK_FUNC(sub_82AD4A80);
PPC_FUNC_IMPL(__imp__sub_82AD4A80) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82c0b6e0
	ctx.lr = 0x82AD4AA4;
	sub_82C0B6E0(ctx, base);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r30,r11,-8296
	ctx.r30.s64 = ctx.r11.s64 + -8296;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ad4ac8
	if (!cr6.eq) goto loc_82AD4AC8;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x82ad4af0
	goto loc_82AD4AF0;
loc_82AD4AC8:
	// lhz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// lhz r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x82ad4ae8
	if (!cr6.eq) goto loc_82AD4AE8;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82ad4aec
	if (cr6.eq) goto loc_82AD4AEC;
loc_82AD4AE8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AD4AEC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82AD4AF0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ad4b64
	if (cr6.eq) goto loc_82AD4B64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82c0b698
	ctx.lr = 0x82AD4B0C;
	sub_82C0B698(ctx, base);
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// bne cr6,0x82ad4b30
	if (!cr6.eq) goto loc_82AD4B30;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x82ad4b58
	goto loc_82AD4B58;
loc_82AD4B30:
	// lhz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// lhz r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x82ad4b50
	if (!cr6.eq) goto loc_82AD4B50;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82ad4b54
	if (cr6.eq) goto loc_82AD4B54;
loc_82AD4B50:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AD4B54:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82AD4B58:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ad51bc
	if (!cr6.eq) goto loc_82AD51BC;
loc_82AD4B64:
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// addi r30,r31,236
	ctx.r30.s64 = ctx.r31.s64 + 236;
	// lwz r10,240(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// lwz r4,292(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lwz r3,276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// srawi r5,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 2;
	// bl 0x82c10c08
	ctx.lr = 0x82AD4B84;
	sub_82C10C08(ctx, base);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r7,320(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 320);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82AD4B9C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// bl 0x82c10c90
	ctx.lr = 0x82AD4BA8;
	sub_82C10C90(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// lwz r3,276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// bl 0x82c12cb8
	ctx.lr = 0x82AD4BB8;
	sub_82C12CB8(ctx, base);
	// lwz r5,236(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// lwz r6,240(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// lwz r4,292(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// subf r11,r5,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r5.s64;
	// lwz r3,280(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// srawi r5,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 2;
	// bl 0x82be5308
	ctx.lr = 0x82AD4BD4;
	sub_82BE5308(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r9,320(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 320);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AD4BEC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,280(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// bl 0x82c10c90
	ctx.lr = 0x82AD4BF8;
	sub_82C10C90(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,280(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// bl 0x82be53d8
	ctx.lr = 0x82AD4C08;
	sub_82BE53D8(ctx, base);
	// lwz r3,284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ad4c3c
	if (cr6.eq) goto loc_82AD4C3C;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,292(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r5,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 2;
	// bl 0x82c0fe20
	ctx.lr = 0x82AD4C2C;
	sub_82C0FE20(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// lwz r3,284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// bl 0x82c106e0
	ctx.lr = 0x82AD4C3C;
	sub_82C106E0(ctx, base);
loc_82AD4C3C:
	// lwz r3,288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ad4c70
	if (cr6.eq) goto loc_82AD4C70;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,292(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r5,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 2;
	// bl 0x82c1f8d8
	ctx.lr = 0x82AD4C60;
	sub_82C1F8D8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// lwz r3,288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// bl 0x82c202e0
	ctx.lr = 0x82AD4C70;
	sub_82C202E0(ctx, base);
loc_82AD4C70:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,292(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r7,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82ad4c98
	if (cr6.gt) goto loc_82AD4C98;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82AD4C98;
	sub_831CC188(ctx, base);
loc_82AD4C98:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(ctx.r11.u32, 9, xer);
	// bgt cr6,0x82ad51bc
	if (cr6.gt) goto loc_82AD51BC;
	// lis r12,-32083
	ctx.r12.s64 = -2102591488;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,19648
	ctx.r12.s64 = ctx.r12.s64 + 19648;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82AD4CE8;
	case 1:
		goto loc_82AD4D4C;
	case 2:
		goto loc_82AD4DD0;
	case 3:
		goto loc_82AD4E54;
	case 4:
		goto loc_82AD4ED8;
	case 5:
		goto loc_82AD4F5C;
	case 6:
		goto loc_82AD4FE0;
	case 7:
		goto loc_82AD5064;
	case 8:
		goto loc_82AD5154;
	case 9:
		goto loc_82AD50E8;
	default:
		return;
	}
	// lwz r21,19688(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 19688);
	// lwz r21,19788(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 19788);
	// lwz r21,19920(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 19920);
	// lwz r21,20052(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 20052);
	// lwz r21,20184(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 20184);
	// lwz r21,20316(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 20316);
	// lwz r21,20448(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 20448);
	// lwz r21,20580(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 20580);
	// lwz r21,20820(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 20820);
	// lwz r21,20712(r13)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 20712);
loc_82AD4CE8:
	// lwz r3,276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// bl 0x82d19a68
	ctx.lr = 0x82AD4CF0;
	sub_82D19A68(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d2aec8
	ctx.lr = 0x82AD4CFC;
	sub_82D2AEC8(ctx, base);
	// lwz r3,280(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// bl 0x82d19a68
	ctx.lr = 0x82AD4D04;
	sub_82D19A68(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d2aec8
	ctx.lr = 0x82AD4D10;
	sub_82D2AEC8(ctx, base);
	// lwz r3,284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ad4d2c
	if (cr6.eq) goto loc_82AD4D2C;
	// bl 0x82d19a68
	ctx.lr = 0x82AD4D20;
	sub_82D19A68(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d2aec8
	ctx.lr = 0x82AD4D2C;
	sub_82D2AEC8(ctx, base);
loc_82AD4D2C:
	// lwz r3,288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ad51bc
	if (cr6.eq) goto loc_82AD51BC;
	// bl 0x82d19a68
	ctx.lr = 0x82AD4D3C;
	sub_82D19A68(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d2aec8
	ctx.lr = 0x82AD4D48;
	sub_82D2AEC8(ctx, base);
	// b 0x82ad51bc
	goto loc_82AD51BC;
loc_82AD4D4C:
	// lwz r3,276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// bl 0x82d19a68
	ctx.lr = 0x82AD4D54;
	sub_82D19A68(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d2aec8
	ctx.lr = 0x82AD4D60;
	sub_82D2AEC8(ctx, base);
	// lwz r3,280(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// bl 0x82d19a68
	ctx.lr = 0x82AD4D68;
	sub_82D19A68(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d2aec8
	ctx.lr = 0x82AD4D74;
	sub_82D2AEC8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,280(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,296(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 296);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AD4D94;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ad4db0
	if (cr6.eq) goto loc_82AD4DB0;
	// bl 0x82d19a68
	ctx.lr = 0x82AD4DA4;
	sub_82D19A68(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d2aec8
	ctx.lr = 0x82AD4DB0;
	sub_82D2AEC8(ctx, base);
loc_82AD4DB0:
	// lwz r3,288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ad51bc
	if (cr6.eq) goto loc_82AD51BC;
	// bl 0x82d19a68
	ctx.lr = 0x82AD4DC0;
	sub_82D19A68(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d2aec8
	ctx.lr = 0x82AD4DCC;
	sub_82D2AEC8(ctx, base);
	// b 0x82ad51bc
	goto loc_82AD51BC;
loc_82AD4DD0:
	// lwz r3,276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// bl 0x82d19a68
	ctx.lr = 0x82AD4DD8;
	sub_82D19A68(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d2aec8
	ctx.lr = 0x82AD4DE4;
	sub_82D2AEC8(ctx, base);
	// lwz r3,280(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// bl 0x82d19a68
	ctx.lr = 0x82AD4DEC;
	sub_82D19A68(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d2aec8
	ctx.lr = 0x82AD4DF8;
	sub_82D2AEC8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r3,280(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,296(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 296);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AD4E18;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ad4e34
	if (cr6.eq) goto loc_82AD4E34;
	// bl 0x82d19a68
	ctx.lr = 0x82AD4E28;
	sub_82D19A68(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d2aec8
	ctx.lr = 0x82AD4E34;
	sub_82D2AEC8(ctx, base);
loc_82AD4E34:
	// lwz r3,288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ad51bc
	if (cr6.eq) goto loc_82AD51BC;
	// bl 0x82d19a68
	ctx.lr = 0x82AD4E44;
	sub_82D19A68(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d2aec8
	ctx.lr = 0x82AD4E50;
	sub_82D2AEC8(ctx, base);
	// b 0x82ad51bc
	goto loc_82AD51BC;
loc_82AD4E54:
	// lwz r3,276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// bl 0x82d19a68
	ctx.lr = 0x82AD4E5C;
	sub_82D19A68(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d2aec8
	ctx.lr = 0x82AD4E68;
	sub_82D2AEC8(ctx, base);
	// lwz r3,280(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// bl 0x82d19a68
	ctx.lr = 0x82AD4E70;
	sub_82D19A68(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d2aec8
	ctx.lr = 0x82AD4E7C;
	sub_82D2AEC8(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r3,280(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,296(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 296);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AD4E9C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ad4eb8
	if (cr6.eq) goto loc_82AD4EB8;
	// bl 0x82d19a68
	ctx.lr = 0x82AD4EAC;
	sub_82D19A68(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d2aec8
	ctx.lr = 0x82AD4EB8;
	sub_82D2AEC8(ctx, base);
loc_82AD4EB8:
	// lwz r3,288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ad51bc
	if (cr6.eq) goto loc_82AD51BC;
	// bl 0x82d19a68
	ctx.lr = 0x82AD4EC8;
	sub_82D19A68(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d2aec8
	ctx.lr = 0x82AD4ED4;
	sub_82D2AEC8(ctx, base);
	// b 0x82ad51bc
	goto loc_82AD51BC;
loc_82AD4ED8:
	// lwz r3,276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// bl 0x82d19a68
	ctx.lr = 0x82AD4EE0;
	sub_82D19A68(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d2aec8
	ctx.lr = 0x82AD4EEC;
	sub_82D2AEC8(ctx, base);
	// lwz r3,280(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// bl 0x82d19a68
	ctx.lr = 0x82AD4EF4;
	sub_82D19A68(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d2aec8
	ctx.lr = 0x82AD4F00;
	sub_82D2AEC8(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// lwz r3,280(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,296(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 296);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AD4F20;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ad4f3c
	if (cr6.eq) goto loc_82AD4F3C;
	// bl 0x82d19a68
	ctx.lr = 0x82AD4F30;
	sub_82D19A68(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d2aec8
	ctx.lr = 0x82AD4F3C;
	sub_82D2AEC8(ctx, base);
loc_82AD4F3C:
	// lwz r3,288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ad51bc
	if (cr6.eq) goto loc_82AD51BC;
	// bl 0x82d19a68
	ctx.lr = 0x82AD4F4C;
	sub_82D19A68(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d2aec8
	ctx.lr = 0x82AD4F58;
	sub_82D2AEC8(ctx, base);
	// b 0x82ad51bc
	goto loc_82AD51BC;
loc_82AD4F5C:
	// lwz r3,276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// bl 0x82d19a68
	ctx.lr = 0x82AD4F64;
	sub_82D19A68(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d2aec8
	ctx.lr = 0x82AD4F70;
	sub_82D2AEC8(ctx, base);
	// lwz r3,280(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// bl 0x82d19a68
	ctx.lr = 0x82AD4F78;
	sub_82D19A68(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d2aec8
	ctx.lr = 0x82AD4F84;
	sub_82D2AEC8(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// lwz r3,280(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,296(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 296);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AD4FA4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ad4fc0
	if (cr6.eq) goto loc_82AD4FC0;
	// bl 0x82d19a68
	ctx.lr = 0x82AD4FB4;
	sub_82D19A68(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d2aec8
	ctx.lr = 0x82AD4FC0;
	sub_82D2AEC8(ctx, base);
loc_82AD4FC0:
	// lwz r3,288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ad51bc
	if (cr6.eq) goto loc_82AD51BC;
	// bl 0x82d19a68
	ctx.lr = 0x82AD4FD0;
	sub_82D19A68(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d2aec8
	ctx.lr = 0x82AD4FDC;
	sub_82D2AEC8(ctx, base);
	// b 0x82ad51bc
	goto loc_82AD51BC;
loc_82AD4FE0:
	// lwz r3,276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// bl 0x82d19a68
	ctx.lr = 0x82AD4FE8;
	sub_82D19A68(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d2aec8
	ctx.lr = 0x82AD4FF4;
	sub_82D2AEC8(ctx, base);
	// lwz r3,280(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// bl 0x82d19a68
	ctx.lr = 0x82AD4FFC;
	sub_82D19A68(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d2aec8
	ctx.lr = 0x82AD5008;
	sub_82D2AEC8(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// lwz r3,280(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,296(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 296);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AD5028;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ad5044
	if (cr6.eq) goto loc_82AD5044;
	// bl 0x82d19a68
	ctx.lr = 0x82AD5038;
	sub_82D19A68(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d2aec8
	ctx.lr = 0x82AD5044;
	sub_82D2AEC8(ctx, base);
loc_82AD5044:
	// lwz r3,288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ad51bc
	if (cr6.eq) goto loc_82AD51BC;
	// bl 0x82d19a68
	ctx.lr = 0x82AD5054;
	sub_82D19A68(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d2aec8
	ctx.lr = 0x82AD5060;
	sub_82D2AEC8(ctx, base);
	// b 0x82ad51bc
	goto loc_82AD51BC;
loc_82AD5064:
	// lwz r3,276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// bl 0x82d19a68
	ctx.lr = 0x82AD506C;
	sub_82D19A68(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d2aec8
	ctx.lr = 0x82AD5078;
	sub_82D2AEC8(ctx, base);
	// lwz r3,280(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// bl 0x82d19a68
	ctx.lr = 0x82AD5080;
	sub_82D19A68(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d2aec8
	ctx.lr = 0x82AD508C;
	sub_82D2AEC8(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// lwz r3,280(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,296(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 296);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82AD50AC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ad50c8
	if (cr6.eq) goto loc_82AD50C8;
	// bl 0x82d19a68
	ctx.lr = 0x82AD50BC;
	sub_82D19A68(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d2aec8
	ctx.lr = 0x82AD50C8;
	sub_82D2AEC8(ctx, base);
loc_82AD50C8:
	// lwz r3,288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ad51bc
	if (cr6.eq) goto loc_82AD51BC;
	// bl 0x82d19a68
	ctx.lr = 0x82AD50D8;
	sub_82D19A68(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d2aec8
	ctx.lr = 0x82AD50E4;
	sub_82D2AEC8(ctx, base);
	// b 0x82ad51bc
	goto loc_82AD51BC;
loc_82AD50E8:
	// lwz r3,276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// bl 0x82d19a68
	ctx.lr = 0x82AD50F0;
	sub_82D19A68(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d2aec8
	ctx.lr = 0x82AD50FC;
	sub_82D2AEC8(ctx, base);
	// lwz r3,280(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// bl 0x82d19a68
	ctx.lr = 0x82AD5104;
	sub_82D19A68(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d2aec8
	ctx.lr = 0x82AD5110;
	sub_82D2AEC8(ctx, base);
	// lwz r3,284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ad5134
	if (cr6.eq) goto loc_82AD5134;
	// bl 0x82d19a68
	ctx.lr = 0x82AD5120;
	sub_82D19A68(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d2aec8
	ctx.lr = 0x82AD512C;
	sub_82D2AEC8(ctx, base);
	// lwz r3,284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// bl 0x82c0ff08
	ctx.lr = 0x82AD5134;
	sub_82C0FF08(ctx, base);
loc_82AD5134:
	// lwz r3,288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ad51bc
	if (cr6.eq) goto loc_82AD51BC;
	// bl 0x82d19a68
	ctx.lr = 0x82AD5144;
	sub_82D19A68(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d2aec8
	ctx.lr = 0x82AD5150;
	sub_82D2AEC8(ctx, base);
	// b 0x82ad51bc
	goto loc_82AD51BC;
loc_82AD5154:
	// lwz r3,276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// bl 0x82d19a68
	ctx.lr = 0x82AD515C;
	sub_82D19A68(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d2aec8
	ctx.lr = 0x82AD5168;
	sub_82D2AEC8(ctx, base);
	// lwz r3,280(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// bl 0x82d19a68
	ctx.lr = 0x82AD5170;
	sub_82D19A68(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d2aec8
	ctx.lr = 0x82AD517C;
	sub_82D2AEC8(ctx, base);
	// lwz r3,284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ad5198
	if (cr6.eq) goto loc_82AD5198;
	// bl 0x82d19a68
	ctx.lr = 0x82AD518C;
	sub_82D19A68(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d2aec8
	ctx.lr = 0x82AD5198;
	sub_82D2AEC8(ctx, base);
loc_82AD5198:
	// lwz r3,288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ad51bc
	if (cr6.eq) goto loc_82AD51BC;
	// bl 0x82d19a68
	ctx.lr = 0x82AD51A8;
	sub_82D19A68(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d2aec8
	ctx.lr = 0x82AD51B4;
	sub_82D2AEC8(ctx, base);
	// lwz r3,288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// bl 0x82c1fb18
	ctx.lr = 0x82AD51BC;
	sub_82C1FB18(ctx, base);
loc_82AD51BC:
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

__attribute__((alias("__imp__sub_82AD51D4"))) PPC_WEAK_FUNC(sub_82AD51D4);
PPC_FUNC_IMPL(__imp__sub_82AD51D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AD51D8"))) PPC_WEAK_FUNC(sub_82AD51D8);
PPC_FUNC_IMPL(__imp__sub_82AD51D8) {
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
	// bl 0x82ad4478
	ctx.lr = 0x82AD51F8;
	sub_82AD4478(ctx, base);
	// lwz r11,144(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// lwz r10,148(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
	// lwz r9,152(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// stw r9,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r9.u32);
	// lwz r8,156(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// stw r8,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD5234"))) PPC_WEAK_FUNC(sub_82AD5234);
PPC_FUNC_IMPL(__imp__sub_82AD5234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AD5238"))) PPC_WEAK_FUNC(sub_82AD5238);
PPC_FUNC_IMPL(__imp__sub_82AD5238) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82AD5240;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x83102db0
	ctx.lr = 0x82AD524C;
	sub_83102DB0(ctx, base);
	// lwz r11,96(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// cmpwi cr6,r11,15
	cr6.compare<int32_t>(ctx.r11.s32, 15, xer);
	// bne cr6,0x82ad5324
	if (!cr6.eq) goto loc_82AD5324;
	// bl 0x831156e8
	ctx.lr = 0x82AD525C;
	sub_831156E8(ctx, base);
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addis r30,r10,209
	ctx.r30.s64 = ctx.r10.s64 + 13697024;
	// lwz r11,24080(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24080);
	// addi r30,r30,320
	ctx.r30.s64 = ctx.r30.s64 + 320;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ad5280
	if (cr6.eq) goto loc_82AD5280;
	// li r3,324
	ctx.r3.s64 = 324;
	// bl 0x82d84728
	ctx.lr = 0x82AD5280;
	sub_82D84728(ctx, base);
loc_82AD5280:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c0b6e0
	ctx.lr = 0x82AD528C;
	sub_82C0B6E0(ctx, base);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r11,r11,-8296
	ctx.r11.s64 = ctx.r11.s64 + -8296;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82ad52b0
	if (!cr6.eq) goto loc_82AD52B0;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x82ad52d8
	goto loc_82AD52D8;
loc_82AD52B0:
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x82ad52d0
	if (!cr6.eq) goto loc_82AD52D0;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82ad52d4
	if (cr6.eq) goto loc_82AD52D4;
loc_82AD52D0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AD52D4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82AD52D8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ad531c
	if (!cr6.eq) goto loc_82AD531C;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82ad531c
	if (cr6.eq) goto loc_82AD531C;
	// ld r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82ad3cf8
	ctx.lr = 0x82AD52FC;
	sub_82AD3CF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ad531c
	if (cr6.eq) goto loc_82AD531C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ad3bf8
	ctx.lr = 0x82AD5314;
	sub_82AD3BF8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831a5d80
	ctx.lr = 0x82AD531C;
	sub_831A5D80(ctx, base);
loc_82AD531C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ad4a80
	ctx.lr = 0x82AD5324;
	sub_82AD4A80(ctx, base);
loc_82AD5324:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD532C"))) PPC_WEAK_FUNC(sub_82AD532C);
PPC_FUNC_IMPL(__imp__sub_82AD532C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AD5330"))) PPC_WEAK_FUNC(sub_82AD5330);
PPC_FUNC_IMPL(__imp__sub_82AD5330) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bne cr6,0x82ad536c
	if (!cr6.eq) goto loc_82AD536C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82ad53ac
	goto loc_82AD53AC;
loc_82AD536C:
	// lis r11,2340
	ctx.r11.s64 = 153354240;
	// ori r10,r11,37449
	ctx.r10.u64 = ctx.r11.u64 | 37449;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// ble cr6,0x82ad5388
	if (!cr6.gt) goto loc_82AD5388;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x82AD5388;
	sub_831CC150(ctx, base);
loc_82AD5388:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x82ad45d0
	ctx.lr = 0x82AD5394;
	sub_82AD45D0(ctx, base);
	// mulli r11,r30,28
	ctx.r11.s64 = ctx.r30.s64 * 28;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82AD53AC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD53C4"))) PPC_WEAK_FUNC(sub_82AD53C4);
PPC_FUNC_IMPL(__imp__sub_82AD53C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AD53C8"))) PPC_WEAK_FUNC(sub_82AD53C8);
PPC_FUNC_IMPL(__imp__sub_82AD53C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82AD53D0;
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
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82ad54c0
	if (cr6.eq) goto loc_82AD54C0;
	// addi r29,r3,8
	ctx.r29.s64 = ctx.r3.s64 + 8;
	// cmplw cr6,r29,r4
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r4.u32, xer);
	// beq cr6,0x82ad54c0
	if (cr6.eq) goto loc_82AD54C0;
	// addi r26,r29,-8
	ctx.r26.s64 = ctx.r29.s64 + -8;
loc_82AD53F8:
	// ld r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bctrl 
	ctx.lr = 0x82AD5414;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82ad5454
	if (cr6.eq) goto loc_82AD5454;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplw cr6,r28,r29
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r29.u32, xer);
	// beq cr6,0x82ad5448
	if (cr6.eq) goto loc_82AD5448;
loc_82AD542C:
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// bne cr6,0x82ad542c
	if (!cr6.eq) goto loc_82AD542C;
loc_82AD5448:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r11.u64);
	// b 0x82ad54b0
	goto loc_82AD54B0;
loc_82AD5454:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// bctrl 
	ctx.lr = 0x82AD5468;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ad54a8
	if (cr6.eq) goto loc_82AD54A8;
loc_82AD5474:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// addi r31,r31,-8
	ctx.r31.s64 = ctx.r31.s64 + -8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82AD549C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82ad5474
	if (!cr6.eq) goto loc_82AD5474;
loc_82AD54A8:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r11.u64);
loc_82AD54B0:
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// addi r26,r26,8
	ctx.r26.s64 = ctx.r26.s64 + 8;
	// cmplw cr6,r29,r25
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r25.u32, xer);
	// bne cr6,0x82ad53f8
	if (!cr6.eq) goto loc_82AD53F8;
loc_82AD54C0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD54C8"))) PPC_WEAK_FUNC(sub_82AD54C8);
PPC_FUNC_IMPL(__imp__sub_82AD54C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82AD54D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82AD54F4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ad5518
	if (cr6.eq) goto loc_82AD5518;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// std r10,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r10.u64);
loc_82AD5518:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r28
	ctr.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x82AD5528;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ad554c
	if (cr6.eq) goto loc_82AD554C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ld r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r9,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r9.u32);
	// std r10,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
loc_82AD554C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r28
	ctr.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82AD555C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ad5580
	if (cr6.eq) goto loc_82AD5580;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// std r10,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r10.u64);
loc_82AD5580:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD5588"))) PPC_WEAK_FUNC(sub_82AD5588);
PPC_FUNC_IMPL(__imp__sub_82AD5588) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82AD5590;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,28
	cr6.compare<int32_t>(ctx.r11.s32, 28, xer);
	// beq cr6,0x82ad5664
	if (cr6.eq) goto loc_82AD5664;
	// cmpwi cr6,r11,30
	cr6.compare<int32_t>(ctx.r11.s32, 30, xer);
	// beq cr6,0x82ad5664
	if (cr6.eq) goto loc_82AD5664;
	// cmpwi cr6,r11,15
	cr6.compare<int32_t>(ctx.r11.s32, 15, xer);
	// bne cr6,0x82ad562c
	if (!cr6.eq) goto loc_82AD562C;
	// bl 0x831156e8
	ctx.lr = 0x82AD55B8;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r31,140(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 140);
	// addi r28,r29,140
	ctx.r28.s64 = ctx.r29.s64 + 140;
	// lwz r10,144(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 144);
	// addis r30,r11,209
	ctx.r30.s64 = ctx.r11.s64 + 13697024;
	// addi r30,r30,320
	ctx.r30.s64 = ctx.r30.s64 + 320;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x82ad562c
	if (cr6.eq) goto loc_82AD562C;
loc_82AD55D8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// bl 0x82ad3b08
	ctx.lr = 0x82AD55E4;
	sub_82AD3B08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ad561c
	if (cr6.eq) goto loc_82AD561C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// bl 0x82a671c0
	ctx.lr = 0x82AD55FC;
	sub_82A671C0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ad561c
	if (cr6.eq) goto loc_82AD561C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r27,424(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 424);
	// bl 0x831a3760
	ctx.lr = 0x82AD5614;
	sub_831A3760(ctx, base);
	// cmpw cr6,r27,r3
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r3.s32, xer);
	// bne cr6,0x82ad5648
	if (!cr6.eq) goto loc_82AD5648;
loc_82AD561C:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x82ad55d8
	if (!cr6.eq) goto loc_82AD55D8;
loc_82AD562C:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r11,-17580
	ctx.r5.s64 = ctx.r11.s64 + -17580;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82AD5640;
	sub_82D20DA8(ctx, base);
loc_82AD5640:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82AD5648:
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// lwz r11,24080(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24080);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82ad562c
	if (cr6.eq) goto loc_82AD562C;
	// li r3,324
	ctx.r3.s64 = 324;
	// bl 0x82d84728
	ctx.lr = 0x82AD5660;
	sub_82D84728(ctx, base);
	// b 0x82ad562c
	goto loc_82AD562C;
loc_82AD5664:
	// lwz r11,192(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 192);
	// lwz r10,188(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 188);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r8,r9,0,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x82ad568c
	if (cr6.eq) goto loc_82AD568C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c0c038
	ctx.lr = 0x82AD5684;
	sub_82C0C038(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82AD568C:
	// bl 0x82d86078
	ctx.lr = 0x82AD5690;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82ad5640
	if (cr6.eq) goto loc_82AD5640;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x82AD56A0;
	sub_82DAB6D0(ctx, base);
	// lwz r11,96(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,28
	cr6.compare<int32_t>(ctx.r11.s32, 28, xer);
	// bne cr6,0x82ad56cc
	if (!cr6.eq) goto loc_82AD56CC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c0b6e0
	ctx.lr = 0x82AD56BC;
	sub_82C0B6E0(ctx, base);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832f8
	ctx.lr = 0x82AD56C8;
	sub_825832F8(ctx, base);
	// b 0x82ad562c
	goto loc_82AD562C;
loc_82AD56CC:
	// cmpwi cr6,r11,30
	cr6.compare<int32_t>(ctx.r11.s32, 30, xer);
	// bne cr6,0x82ad562c
	if (!cr6.eq) goto loc_82AD562C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d97738
	ctx.lr = 0x82AD56DC;
	sub_82D97738(ctx, base);
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// bgt cr6,0x82ad562c
	if (cr6.gt) goto loc_82AD562C;
	// mtctr r3
	ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82ad5718
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82AD5718;
	// bdzf 4*cr6+eq,0x82ad5738
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82AD5738;
	// bne cr6,0x82ad5758
	if (!cr6.eq) goto loc_82AD5758;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-17580
	ctx.r11.s64 = ctx.r11.s64 + -17580;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r5,r11,-68
	ctx.r5.s64 = ctx.r11.s64 + -68;
	// bl 0x82d20da8
	ctx.lr = 0x82AD5710;
	sub_82D20DA8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82AD5718:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-17580
	ctx.r11.s64 = ctx.r11.s64 + -17580;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r5,r11,-52
	ctx.r5.s64 = ctx.r11.s64 + -52;
	// bl 0x82d20da8
	ctx.lr = 0x82AD5730;
	sub_82D20DA8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82AD5738:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-17580
	ctx.r11.s64 = ctx.r11.s64 + -17580;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r5,r11,-36
	ctx.r5.s64 = ctx.r11.s64 + -36;
	// bl 0x82d20da8
	ctx.lr = 0x82AD5750;
	sub_82D20DA8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82AD5758:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-17580
	ctx.r11.s64 = ctx.r11.s64 + -17580;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r5,r11,-16
	ctx.r5.s64 = ctx.r11.s64 + -16;
	// bl 0x82d20da8
	ctx.lr = 0x82AD5770;
	sub_82D20DA8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD5778"))) PPC_WEAK_FUNC(sub_82AD5778);
PPC_FUNC_IMPL(__imp__sub_82AD5778) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,292(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82ad57a0
	if (!cr6.eq) goto loc_82AD57A0;
	// lwz r11,240(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	// lwz r10,236(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 2;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// stw r8,292(r3)
	PPC_STORE_U32(ctx.r3.u32 + 292, ctx.r8.u32);
	// b 0x82ad57a8
	goto loc_82AD57A8;
loc_82AD57A0:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,292(r3)
	PPC_STORE_U32(ctx.r3.u32 + 292, ctx.r11.u32);
loc_82AD57A8:
	// lwz r11,240(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	// lwz r10,236(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	// lwz r9,292(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r7,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// b 0x82ad4a80
	sub_82AD4A80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD57C8"))) PPC_WEAK_FUNC(sub_82AD57C8);
PPC_FUNC_IMPL(__imp__sub_82AD57C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AD57CC"))) PPC_WEAK_FUNC(sub_82AD57CC);
PPC_FUNC_IMPL(__imp__sub_82AD57CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AD57D0"))) PPC_WEAK_FUNC(sub_82AD57D0);
PPC_FUNC_IMPL(__imp__sub_82AD57D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r9,236(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	// addi r11,r3,236
	ctx.r11.s64 = ctx.r3.s64 + 236;
	// lwz r8,240(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	// lwz r10,292(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// srawi r9,r7,2
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 2;
	// addi r6,r9,-1
	ctx.r6.s64 = ctx.r9.s64 + -1;
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// blt cr6,0x82ad57fc
	if (cr6.lt) goto loc_82AD57FC;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82ad5800
	goto loc_82AD5800;
loc_82AD57FC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_82AD5800:
	// stw r10,292(r3)
	PPC_STORE_U32(ctx.r3.u32 + 292, ctx.r10.u32);
	// lwz r8,292(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r7,r9,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r6,r7,2
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 2;
	// cmplw cr6,r8,r6
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// b 0x82ad4a80
	sub_82AD4A80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AD5824"))) PPC_WEAK_FUNC(sub_82AD5824);
PPC_FUNC_IMPL(__imp__sub_82AD5824) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

