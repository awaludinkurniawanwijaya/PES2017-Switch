#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_836AA628"))) PPC_WEAK_FUNC(sub_836AA628);
PPC_FUNC_IMPL(__imp__sub_836AA628) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x836aa638
	sub_836AA638(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836AA630"))) PPC_WEAK_FUNC(sub_836AA630);
PPC_FUNC_IMPL(__imp__sub_836AA630) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-312
	ctx.r3.s64 = ctx.r3.s64 + -312;
	// b 0x836aa638
	sub_836AA638(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836AA638"))) PPC_WEAK_FUNC(sub_836AA638);
PPC_FUNC_IMPL(__imp__sub_836AA638) {
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
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r7,r11,-7900
	ctx.r7.s64 = ctx.r11.s64 + -7900;
	// addi r6,r10,-7912
	ctx.r6.s64 = ctx.r10.s64 + -7912;
	// addi r5,r9,-7916
	ctx.r5.s64 = ctx.r9.s64 + -7916;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r8,-7884
	ctx.r4.s64 = ctx.r8.s64 + -7884;
	// stw r6,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r6.u32);
	// stw r5,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r4.u32);
	// bl 0x82eaf978
	ctx.lr = 0x836AA688;
	sub_82EAF978(ctx, base);
	// clrlwi r3,r30,31
	ctx.r3.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x836aa6a8
	if (cr6.eq) goto loc_836AA6A8;
	// bl 0x82595188
	ctx.lr = 0x836AA698;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x836AA6A8;
	sub_825952B8(ctx, base);
loc_836AA6A8:
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

__attribute__((alias("__imp__sub_836AA6C4"))) PPC_WEAK_FUNC(sub_836AA6C4);
PPC_FUNC_IMPL(__imp__sub_836AA6C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836AA6C8"))) PPC_WEAK_FUNC(sub_836AA6C8);
PPC_FUNC_IMPL(__imp__sub_836AA6C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x836AA6D0;
	__savegprlr_27(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// rotlwi r8,r31,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r10,133
	ctx.r10.s64 = 133;
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stb r10,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r10.u8);
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// bge cr6,0x836aa710
	if (!cr6.lt) goto loc_836AA710;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e745e0
	ctx.lr = 0x836AA710;
	sub_82E745E0(ctx, base);
loc_836AA710:
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// li r30,15
	ctx.r30.s64 = 15;
	// addi r27,r11,-7748
	ctx.r27.s64 = ctx.r11.s64 + -7748;
	// li r5,5
	ctx.r5.s64 = 5;
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r4,r27,-32
	ctx.r4.s64 = ctx.r27.s64 + -32;
	// stbx r7,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u8);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r6.u32);
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836AA758;
	sub_82472FC0(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836AA764;
	sub_82E74C08(ctx, base);
	// lwz r5,308(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x836aa778
	if (cr6.lt) goto loc_836AA778;
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82416268
	ctx.lr = 0x836AA778;
	sub_82416268(ctx, base);
loc_836AA778:
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// addi r4,r28,20
	ctx.r4.s64 = ctx.r28.s64 + 20;
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// blt cr6,0x836aa798
	if (cr6.lt) goto loc_836AA798;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836AA798:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
loc_836AA7A8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836aa7a8
	if (!cr6.eq) goto loc_836AA7A8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836AA7CC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836AA7D8;
	sub_82E74C08(ctx, base);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836aa7ec
	if (cr6.lt) goto loc_836AA7EC;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x836AA7EC;
	sub_82416268(ctx, base);
loc_836AA7EC:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// addi r4,r27,-24
	ctx.r4.s64 = ctx.r27.s64 + -24;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836AA814;
	sub_82472FC0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836AA820;
	sub_82E74C08(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836aa834
	if (cr6.lt) goto loc_836AA834;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x836AA834;
	sub_82416268(ctx, base);
loc_836AA834:
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// lwz r4,48(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// bl 0x82e746c0
	ctx.lr = 0x836AA84C;
	sub_82E746C0(ctx, base);
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// addi r4,r27,-16
	ctx.r4.s64 = ctx.r27.s64 + -16;
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82472fc0
	ctx.lr = 0x836AA868;
	sub_82472FC0(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836AA874;
	sub_82E74C08(ctx, base);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836aa888
	if (cr6.lt) goto loc_836AA888;
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82416268
	ctx.lr = 0x836AA888;
	sub_82416268(ctx, base);
loc_836AA888:
	// lwz r11,136(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 136);
	// addi r4,r28,116
	ctx.r4.s64 = ctx.r28.s64 + 116;
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// blt cr6,0x836aa8a8
	if (cr6.lt) goto loc_836AA8A8;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836AA8A8:
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
loc_836AA8B8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836aa8b8
	if (!cr6.eq) goto loc_836AA8B8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836AA8DC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836AA8E8;
	sub_82E74C08(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836aa8fc
	if (cr6.lt) goto loc_836AA8FC;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x836AA8FC;
	sub_82416268(ctx, base);
loc_836AA8FC:
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// addi r4,r27,-8
	ctx.r4.s64 = ctx.r27.s64 + -8;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836AA924;
	sub_82472FC0(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836AA930;
	sub_82E74C08(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836aa944
	if (cr6.lt) goto loc_836AA944;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82416268
	ctx.lr = 0x836AA944;
	sub_82416268(ctx, base);
loc_836AA944:
	// lwz r11,164(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 164);
	// addi r4,r28,144
	ctx.r4.s64 = ctx.r28.s64 + 144;
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// blt cr6,0x836aa964
	if (cr6.lt) goto loc_836AA964;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836AA964:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
loc_836AA974:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836aa974
	if (!cr6.eq) goto loc_836AA974;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836AA998;
	sub_82472FC0(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836AA9A4;
	sub_82E74C08(ctx, base);
	// lwz r10,276(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836aa9b8
	if (cr6.lt) goto loc_836AA9B8;
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x82416268
	ctx.lr = 0x836AA9B8;
	sub_82416268(ctx, base);
loc_836AA9B8:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836AA9E0;
	sub_82472FC0(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836AA9EC;
	sub_82E74C08(ctx, base);
	// lwz r11,340(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836aaa00
	if (cr6.lt) goto loc_836AAA00;
	// lwz r3,320(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x82416268
	ctx.lr = 0x836AAA00;
	sub_82416268(ctx, base);
loc_836AAA00:
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// lwz r4,172(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 172);
	// bl 0x82e746c0
	ctx.lr = 0x836AAA18;
	sub_82E746C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836AAA24"))) PPC_WEAK_FUNC(sub_836AAA24);
PPC_FUNC_IMPL(__imp__sub_836AAA24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836AAA28"))) PPC_WEAK_FUNC(sub_836AAA28);
PPC_FUNC_IMPL(__imp__sub_836AAA28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x836AAA30;
	__savegprlr_26(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
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
	// stw r30,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x83691bb8
	ctx.lr = 0x836AAA58;
	sub_83691BB8(ctx, base);
	// lwz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x836aac9c
	if (!cr6.lt) goto loc_836AAC9C;
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
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r26,r11,-7728
	ctx.r26.s64 = ctx.r11.s64 + -7728;
loc_836AAA90:
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
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
	// lwz r5,232(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// lwz r4,236(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// bl 0x82472fc0
	ctx.lr = 0x836AAAC4;
	sub_82472FC0(ctx, base);
	// addi r6,r26,-16
	ctx.r6.s64 = ctx.r26.s64 + -16;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836AAADC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836aab70
	if (!cr6.eq) goto loc_836AAB70;
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,264(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// lwz r4,268(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// bl 0x82472fc0
	ctx.lr = 0x836AAB14;
	sub_82472FC0(ctx, base);
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x836aab28
	if (!cr6.lt) goto loc_836AAB28;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
loc_836AAB28:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836AAB2C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836aab2c
	if (!cr6.eq) goto loc_836AAB2C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,20
	ctx.r3.s64 = ctx.r28.s64 + 20;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836AAB50;
	sub_824208C8(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836aab64
	if (cr6.lt) goto loc_836AAB64;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82416268
	ctx.lr = 0x836AAB64;
	sub_82416268(ctx, base);
loc_836AAB64:
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
loc_836AAB70:
	// addi r6,r26,-8
	ctx.r6.s64 = ctx.r26.s64 + -8;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836AAB88;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836aabc4
	if (!cr6.eq) goto loc_836AABC4;
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// lwz r8,240(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x836aabbc
	if (!cr6.eq) goto loc_836AABBC;
	// ld r11,248(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 248);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836aabc0
	goto loc_836AABC0;
loc_836AABBC:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_836AABC0:
	// stw r11,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r11.u32);
loc_836AABC4:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836AABDC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836aac70
	if (!cr6.eq) goto loc_836AAC70;
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
	// ld r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// lwz r5,216(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r4,220(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// bl 0x82472fc0
	ctx.lr = 0x836AAC14;
	sub_82472FC0(ctx, base);
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x836aac28
	if (!cr6.lt) goto loc_836AAC28;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_836AAC28:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836AAC2C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836aac2c
	if (!cr6.eq) goto loc_836AAC2C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,116
	ctx.r3.s64 = ctx.r28.s64 + 116;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836AAC50;
	sub_824208C8(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836aac64
	if (cr6.lt) goto loc_836AAC64;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82416268
	ctx.lr = 0x836AAC64;
	sub_82416268(ctx, base);
loc_836AAC64:
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
loc_836AAC70:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836aac84
	if (cr6.lt) goto loc_836AAC84;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82416268
	ctx.lr = 0x836AAC84;
	sub_82416268(ctx, base);
loc_836AAC84:
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
	// bne 0x836aaa90
	if (!cr0.eq) goto loc_836AAA90;
loc_836AAC9C:
	// lwz r31,192(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x836aacb8
	if (cr6.eq) goto loc_836AACB8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x836AACB0;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x836AACB8;
	sub_82416268(ctx, base);
loc_836AACB8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836AACC4"))) PPC_WEAK_FUNC(sub_836AACC4);
PPC_FUNC_IMPL(__imp__sub_836AACC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836AACC8"))) PPC_WEAK_FUNC(sub_836AACC8);
PPC_FUNC_IMPL(__imp__sub_836AACC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x836AACD0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d95768
	ctx.lr = 0x836AACDC;
	sub_82D95768(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r29,r11,-7832
	ctx.r29.s64 = ctx.r11.s64 + -7832;
	// li r5,17
	ctx.r5.s64 = 17;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824208c8
	ctx.lr = 0x836AACF4;
	sub_824208C8(ctx, base);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// addi r7,r10,-7620
	ctx.r7.s64 = ctx.r10.s64 + -7620;
	// addi r5,r8,-7636
	ctx.r5.s64 = ctx.r8.s64 + -7636;
	// addi r6,r9,-7632
	ctx.r6.s64 = ctx.r9.s64 + -7632;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r5,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r5.u32);
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r6,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r6.u32);
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// stw r28,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r28.u32);
	// addi r4,r29,20
	ctx.r4.s64 = ctx.r29.s64 + 20;
	// stb r30,316(r31)
	PPC_STORE_U8(ctx.r31.u32 + 316, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836AAD3C;
	sub_824208C8(ctx, base);
	// stw r28,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r28.u32);
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// stb r30,344(r31)
	PPC_STORE_U8(ctx.r31.u32 + 344, ctx.r30.u8);
	// addi r4,r29,36
	ctx.r4.s64 = ctx.r29.s64 + 36;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836AAD58;
	sub_824208C8(ctx, base);
	// stw r30,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836AAD68"))) PPC_WEAK_FUNC(sub_836AAD68);
PPC_FUNC_IMPL(__imp__sub_836AAD68) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x836aae10
	sub_836AAE10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836AAD70"))) PPC_WEAK_FUNC(sub_836AAD70);
PPC_FUNC_IMPL(__imp__sub_836AAD70) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x836aae10
	sub_836AAE10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836AAD78"))) PPC_WEAK_FUNC(sub_836AAD78);
PPC_FUNC_IMPL(__imp__sub_836AAD78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x836AAD80;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// addi r8,r11,-7620
	ctx.r8.s64 = ctx.r11.s64 + -7620;
	// addi r7,r10,-7632
	ctx.r7.s64 = ctx.r10.s64 + -7632;
	// addi r6,r9,-7636
	ctx.r6.s64 = ctx.r9.s64 + -7636;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r6,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r6.u32);
	// addi r30,r3,344
	ctx.r30.s64 = ctx.r3.s64 + 344;
	// lwz r5,364(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 364);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x836aadc4
	if (cr6.lt) goto loc_836AADC4;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836AADC4;
	sub_8386D088(ctx, base);
loc_836AADC4:
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r28,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r28.u32);
	// addi r31,r29,316
	ctx.r31.s64 = ctx.r29.s64 + 316;
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// stb r28,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r28.u8);
	// lwz r11,336(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836aadf0
	if (cr6.lt) goto loc_836AADF0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836AADF0;
	sub_8386D088(ctx, base);
loc_836AADF0:
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// bl 0x82b6a590
	ctx.lr = 0x836AAE04;
	sub_82B6A590(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836AAE0C"))) PPC_WEAK_FUNC(sub_836AAE0C);
PPC_FUNC_IMPL(__imp__sub_836AAE0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836AAE10"))) PPC_WEAK_FUNC(sub_836AAE10);
PPC_FUNC_IMPL(__imp__sub_836AAE10) {
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
	// bl 0x836aad78
	ctx.lr = 0x836AAE30;
	sub_836AAD78(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836aae50
	if (cr6.eq) goto loc_836AAE50;
	// bl 0x82595188
	ctx.lr = 0x836AAE40;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x836AAE50;
	sub_825952B8(ctx, base);
loc_836AAE50:
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

__attribute__((alias("__imp__sub_836AAE6C"))) PPC_WEAK_FUNC(sub_836AAE6C);
PPC_FUNC_IMPL(__imp__sub_836AAE6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836AAE70"))) PPC_WEAK_FUNC(sub_836AAE70);
PPC_FUNC_IMPL(__imp__sub_836AAE70) {
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
	// bl 0x82eaf8d8
	ctx.lr = 0x836AAE88;
	sub_82EAF8D8(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r4,r11,-7832
	ctx.r4.s64 = ctx.r11.s64 + -7832;
	// li r5,17
	ctx.r5.s64 = 17;
	// bl 0x824208c8
	ctx.lr = 0x836AAE9C;
	sub_824208C8(ctx, base);
	// lis r7,-32216
	ctx.r7.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// addi r3,r7,-7572
	ctx.r3.s64 = ctx.r7.s64 + -7572;
	// addi r6,r10,-7588
	ctx.r6.s64 = ctx.r10.s64 + -7588;
	// addi r5,r9,-7600
	ctx.r5.s64 = ctx.r9.s64 + -7600;
	// stw r3,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r3.u32);
	// addi r4,r8,-7604
	ctx.r4.s64 = ctx.r8.s64 + -7604;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// stw r5,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r4.u32);
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

__attribute__((alias("__imp__sub_836AAEE4"))) PPC_WEAK_FUNC(sub_836AAEE4);
PPC_FUNC_IMPL(__imp__sub_836AAEE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836AAEE8"))) PPC_WEAK_FUNC(sub_836AAEE8);
PPC_FUNC_IMPL(__imp__sub_836AAEE8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x836aaf00
	sub_836AAF00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836AAEF0"))) PPC_WEAK_FUNC(sub_836AAEF0);
PPC_FUNC_IMPL(__imp__sub_836AAEF0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-312
	ctx.r3.s64 = ctx.r3.s64 + -312;
	// b 0x836aaf00
	sub_836AAF00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836AAEF8"))) PPC_WEAK_FUNC(sub_836AAEF8);
PPC_FUNC_IMPL(__imp__sub_836AAEF8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x836aaf00
	sub_836AAF00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836AAF00"))) PPC_WEAK_FUNC(sub_836AAF00);
PPC_FUNC_IMPL(__imp__sub_836AAF00) {
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
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r7,r11,-7588
	ctx.r7.s64 = ctx.r11.s64 + -7588;
	// addi r6,r10,-7600
	ctx.r6.s64 = ctx.r10.s64 + -7600;
	// addi r5,r9,-7604
	ctx.r5.s64 = ctx.r9.s64 + -7604;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r8,-7572
	ctx.r4.s64 = ctx.r8.s64 + -7572;
	// stw r6,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r6.u32);
	// stw r5,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r4.u32);
	// bl 0x82eaf978
	ctx.lr = 0x836AAF50;
	sub_82EAF978(ctx, base);
	// clrlwi r3,r30,31
	ctx.r3.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x836aaf70
	if (cr6.eq) goto loc_836AAF70;
	// bl 0x82595188
	ctx.lr = 0x836AAF60;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x836AAF70;
	sub_825952B8(ctx, base);
loc_836AAF70:
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

__attribute__((alias("__imp__sub_836AAF8C"))) PPC_WEAK_FUNC(sub_836AAF8C);
PPC_FUNC_IMPL(__imp__sub_836AAF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836AAF90"))) PPC_WEAK_FUNC(sub_836AAF90);
PPC_FUNC_IMPL(__imp__sub_836AAF90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x836AAF98;
	__savegprlr_27(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// rotlwi r8,r31,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r10,133
	ctx.r10.s64 = 133;
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stb r10,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r10.u8);
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// bge cr6,0x836aafd8
	if (!cr6.lt) goto loc_836AAFD8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e745e0
	ctx.lr = 0x836AAFD8;
	sub_82E745E0(ctx, base);
loc_836AAFD8:
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// li r30,15
	ctx.r30.s64 = 15;
	// addi r27,r11,-7436
	ctx.r27.s64 = ctx.r11.s64 + -7436;
	// li r5,5
	ctx.r5.s64 = 5;
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r4,r27,-32
	ctx.r4.s64 = ctx.r27.s64 + -32;
	// stbx r7,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u8);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r6.u32);
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836AB020;
	sub_82472FC0(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836AB02C;
	sub_82E74C08(ctx, base);
	// lwz r5,308(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x836ab040
	if (cr6.lt) goto loc_836AB040;
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82416268
	ctx.lr = 0x836AB040;
	sub_82416268(ctx, base);
loc_836AB040:
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// addi r4,r28,20
	ctx.r4.s64 = ctx.r28.s64 + 20;
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// blt cr6,0x836ab060
	if (cr6.lt) goto loc_836AB060;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836AB060:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
loc_836AB070:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836ab070
	if (!cr6.eq) goto loc_836AB070;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836AB094;
	sub_82472FC0(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836AB0A0;
	sub_82E74C08(ctx, base);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836ab0b4
	if (cr6.lt) goto loc_836AB0B4;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x836AB0B4;
	sub_82416268(ctx, base);
loc_836AB0B4:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// addi r4,r27,-24
	ctx.r4.s64 = ctx.r27.s64 + -24;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836AB0DC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836AB0E8;
	sub_82E74C08(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836ab0fc
	if (cr6.lt) goto loc_836AB0FC;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x836AB0FC;
	sub_82416268(ctx, base);
loc_836AB0FC:
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// lwz r4,48(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// bl 0x82e746c0
	ctx.lr = 0x836AB114;
	sub_82E746C0(ctx, base);
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// addi r4,r27,-16
	ctx.r4.s64 = ctx.r27.s64 + -16;
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82472fc0
	ctx.lr = 0x836AB130;
	sub_82472FC0(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836AB13C;
	sub_82E74C08(ctx, base);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836ab150
	if (cr6.lt) goto loc_836AB150;
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82416268
	ctx.lr = 0x836AB150;
	sub_82416268(ctx, base);
loc_836AB150:
	// lwz r11,136(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 136);
	// addi r4,r28,116
	ctx.r4.s64 = ctx.r28.s64 + 116;
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// blt cr6,0x836ab170
	if (cr6.lt) goto loc_836AB170;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836AB170:
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
loc_836AB180:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836ab180
	if (!cr6.eq) goto loc_836AB180;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836AB1A4;
	sub_82472FC0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836AB1B0;
	sub_82E74C08(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836ab1c4
	if (cr6.lt) goto loc_836AB1C4;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x836AB1C4;
	sub_82416268(ctx, base);
loc_836AB1C4:
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// addi r4,r27,-8
	ctx.r4.s64 = ctx.r27.s64 + -8;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836AB1EC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836AB1F8;
	sub_82E74C08(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836ab20c
	if (cr6.lt) goto loc_836AB20C;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82416268
	ctx.lr = 0x836AB20C;
	sub_82416268(ctx, base);
loc_836AB20C:
	// lwz r11,164(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 164);
	// addi r4,r28,144
	ctx.r4.s64 = ctx.r28.s64 + 144;
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// blt cr6,0x836ab22c
	if (cr6.lt) goto loc_836AB22C;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836AB22C:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
loc_836AB23C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836ab23c
	if (!cr6.eq) goto loc_836AB23C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836AB260;
	sub_82472FC0(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836AB26C;
	sub_82E74C08(ctx, base);
	// lwz r10,276(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836ab280
	if (cr6.lt) goto loc_836AB280;
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x82416268
	ctx.lr = 0x836AB280;
	sub_82416268(ctx, base);
loc_836AB280:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836AB2A8;
	sub_82472FC0(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836AB2B4;
	sub_82E74C08(ctx, base);
	// lwz r11,340(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836ab2c8
	if (cr6.lt) goto loc_836AB2C8;
	// lwz r3,320(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x82416268
	ctx.lr = 0x836AB2C8;
	sub_82416268(ctx, base);
loc_836AB2C8:
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// lwz r4,172(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 172);
	// bl 0x82e746c0
	ctx.lr = 0x836AB2E0;
	sub_82E746C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836AB2EC"))) PPC_WEAK_FUNC(sub_836AB2EC);
PPC_FUNC_IMPL(__imp__sub_836AB2EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836AB2F0"))) PPC_WEAK_FUNC(sub_836AB2F0);
PPC_FUNC_IMPL(__imp__sub_836AB2F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x836AB2F8;
	__savegprlr_26(ctx, base);
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x83691bb8
	ctx.lr = 0x836AB320;
	sub_83691BB8(ctx, base);
	// lwz r10,248(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// lwz r11,252(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x836ab860
	if (!cr6.lt) goto loc_836AB860;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r30,r11,16
	ctx.r30.s64 = ctx.r11.s64 + 16;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// li r28,15
	ctx.r28.s64 = 15;
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r26,r11,1
	ctx.r26.s64 = ctx.r11.s64 + 1;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r27,r11,-7288
	ctx.r27.s64 = ctx.r11.s64 + -7288;
loc_836AB358:
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// addi r11,r1,320
	ctx.r11.s64 = ctx.r1.s64 + 320;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// addi r10,r30,-16
	ctx.r10.s64 = ctx.r30.s64 + -16;
	// ld r9,-8(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + -8);
	// ld r8,-16(r30)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r30.u32 + -16);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,328(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// lwz r4,332(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// bl 0x82472fc0
	ctx.lr = 0x836AB38C;
	sub_82472FC0(ctx, base);
	// addi r6,r27,-136
	ctx.r6.s64 = ctx.r27.s64 + -136;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836AB3A4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836ab438
	if (!cr6.eq) goto loc_836AB438;
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// addi r11,r1,288
	ctx.r11.s64 = ctx.r1.s64 + 288;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// ld r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// ld r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,296(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	// lwz r4,300(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// bl 0x82472fc0
	ctx.lr = 0x836AB3DC;
	sub_82472FC0(ctx, base);
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x836ab3f0
	if (!cr6.lt) goto loc_836AB3F0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_836AB3F0:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836AB3F4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836ab3f4
	if (!cr6.eq) goto loc_836AB3F4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r29,20
	ctx.r3.s64 = ctx.r29.s64 + 20;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836AB418;
	sub_824208C8(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836ab42c
	if (cr6.lt) goto loc_836AB42C;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82416268
	ctx.lr = 0x836AB42C;
	sub_82416268(ctx, base);
loc_836AB42C:
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
loc_836AB438:
	// addi r6,r27,-128
	ctx.r6.s64 = ctx.r27.s64 + -128;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836AB450;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836ab48c
	if (!cr6.eq) goto loc_836AB48C;
	// ld r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// addi r10,r1,304
	ctx.r10.s64 = ctx.r1.s64 + 304;
	// ld r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// lwz r8,304(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x836ab484
	if (!cr6.eq) goto loc_836AB484;
	// ld r11,312(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 312);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836ab488
	goto loc_836AB488;
loc_836AB484:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_836AB488:
	// stw r11,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r11.u32);
loc_836AB48C:
	// addi r6,r27,-120
	ctx.r6.s64 = ctx.r27.s64 + -120;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836AB4A4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836ab538
	if (!cr6.eq) goto loc_836AB538;
	// stw r28,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r28.u32);
	// addi r11,r1,336
	ctx.r11.s64 = ctx.r1.s64 + 336;
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stb r31,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r31.u8);
	// ld r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// ld r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// lwz r5,344(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	// lwz r4,348(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// bl 0x82472fc0
	ctx.lr = 0x836AB4DC;
	sub_82472FC0(ctx, base);
	// lwz r8,228(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x836ab4f0
	if (!cr6.lt) goto loc_836AB4F0;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
loc_836AB4F0:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836AB4F4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836ab4f4
	if (!cr6.eq) goto loc_836AB4F4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r29,116
	ctx.r3.s64 = ctx.r29.s64 + 116;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836AB518;
	sub_824208C8(ctx, base);
	// lwz r10,228(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836ab52c
	if (cr6.lt) goto loc_836AB52C;
	// lwz r3,208(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x82416268
	ctx.lr = 0x836AB52C;
	sub_82416268(ctx, base);
loc_836AB52C:
	// stw r28,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r28.u32);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// stb r31,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r31.u8);
loc_836AB538:
	// addi r6,r27,-112
	ctx.r6.s64 = ctx.r27.s64 + -112;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,15
	ctx.r7.s64 = 15;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836AB550;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836ab58c
	if (!cr6.eq) goto loc_836AB58C;
	// ld r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// addi r10,r1,368
	ctx.r10.s64 = ctx.r1.s64 + 368;
	// ld r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,368(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x836ab584
	if (!cr6.eq) goto loc_836AB584;
	// ld r11,376(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 376);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836ab588
	goto loc_836AB588;
loc_836AB584:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_836AB588:
	// stw r11,148(r29)
	PPC_STORE_U32(ctx.r29.u32 + 148, ctx.r11.u32);
loc_836AB58C:
	// addi r6,r27,-96
	ctx.r6.s64 = ctx.r27.s64 + -96;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,20
	ctx.r7.s64 = 20;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836AB5A4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836ab638
	if (!cr6.eq) goto loc_836AB638;
	// stw r28,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r28.u32);
	// addi r11,r1,400
	ctx.r11.s64 = ctx.r1.s64 + 400;
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
	// ld r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// ld r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// lwz r5,408(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 408);
	// lwz r4,412(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 412);
	// bl 0x82472fc0
	ctx.lr = 0x836AB5DC;
	sub_82472FC0(ctx, base);
	// lwz r8,196(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x836ab5f0
	if (!cr6.lt) goto loc_836AB5F0;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
loc_836AB5F0:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836AB5F4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836ab5f4
	if (!cr6.eq) goto loc_836AB5F4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r29,152
	ctx.r3.s64 = ctx.r29.s64 + 152;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836AB618;
	sub_824208C8(ctx, base);
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836ab62c
	if (cr6.lt) goto loc_836AB62C;
	// lwz r3,176(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x82416268
	ctx.lr = 0x836AB62C;
	sub_82416268(ctx, base);
loc_836AB62C:
	// stw r28,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r28.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
loc_836AB638:
	// addi r6,r27,-72
	ctx.r6.s64 = ctx.r27.s64 + -72;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,21
	ctx.r7.s64 = 21;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836AB650;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836ab6e4
	if (!cr6.eq) goto loc_836AB6E4;
	// stw r28,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r28.u32);
	// addi r11,r1,432
	ctx.r11.s64 = ctx.r1.s64 + 432;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// ld r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// ld r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,440(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 440);
	// lwz r4,444(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 444);
	// bl 0x82472fc0
	ctx.lr = 0x836AB688;
	sub_82472FC0(ctx, base);
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x836ab69c
	if (!cr6.lt) goto loc_836AB69C;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
loc_836AB69C:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836AB6A0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836ab6a0
	if (!cr6.eq) goto loc_836AB6A0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r29,180
	ctx.r3.s64 = ctx.r29.s64 + 180;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836AB6C4;
	sub_824208C8(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836ab6d8
	if (cr6.lt) goto loc_836AB6D8;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82416268
	ctx.lr = 0x836AB6D8;
	sub_82416268(ctx, base);
loc_836AB6D8:
	// stw r28,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r28.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
loc_836AB6E4:
	// addi r6,r27,-48
	ctx.r6.s64 = ctx.r27.s64 + -48;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,13
	ctx.r7.s64 = 13;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836AB6FC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836ab738
	if (!cr6.eq) goto loc_836AB738;
	// ld r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// addi r10,r1,416
	ctx.r10.s64 = ctx.r1.s64 + 416;
	// ld r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,416(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x836ab730
	if (!cr6.eq) goto loc_836AB730;
	// ld r11,424(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 424);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836ab734
	goto loc_836AB734;
loc_836AB730:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_836AB734:
	// stw r11,208(r29)
	PPC_STORE_U32(ctx.r29.u32 + 208, ctx.r11.u32);
loc_836AB738:
	// addi r6,r27,-32
	ctx.r6.s64 = ctx.r27.s64 + -32;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,14
	ctx.r7.s64 = 14;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836AB750;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836ab78c
	if (!cr6.eq) goto loc_836AB78C;
	// ld r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// addi r10,r1,272
	ctx.r10.s64 = ctx.r1.s64 + 272;
	// ld r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// lwz r8,272(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x836ab784
	if (!cr6.eq) goto loc_836AB784;
	// ld r11,280(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 280);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836ab788
	goto loc_836AB788;
loc_836AB784:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_836AB788:
	// stw r11,212(r29)
	PPC_STORE_U32(ctx.r29.u32 + 212, ctx.r11.u32);
loc_836AB78C:
	// addi r6,r27,-16
	ctx.r6.s64 = ctx.r27.s64 + -16;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,14
	ctx.r7.s64 = 14;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836AB7A4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836ab7e0
	if (!cr6.eq) goto loc_836AB7E0;
	// ld r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// addi r10,r1,384
	ctx.r10.s64 = ctx.r1.s64 + 384;
	// ld r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// lwz r8,384(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x836ab7d8
	if (!cr6.eq) goto loc_836AB7D8;
	// ld r11,392(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 392);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836ab7dc
	goto loc_836AB7DC;
loc_836AB7D8:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_836AB7DC:
	// stw r11,216(r29)
	PPC_STORE_U32(ctx.r29.u32 + 216, ctx.r11.u32);
loc_836AB7E0:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,18
	ctx.r7.s64 = 18;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836AB7F8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836ab834
	if (!cr6.eq) goto loc_836AB834;
	// ld r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// addi r10,r1,352
	ctx.r10.s64 = ctx.r1.s64 + 352;
	// ld r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,352(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x836ab82c
	if (!cr6.eq) goto loc_836AB82C;
	// ld r11,360(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 360);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836ab830
	goto loc_836AB830;
loc_836AB82C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_836AB830:
	// stw r11,220(r29)
	PPC_STORE_U32(ctx.r29.u32 + 220, ctx.r11.u32);
loc_836AB834:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836ab848
	if (cr6.lt) goto loc_836AB848;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82416268
	ctx.lr = 0x836AB848;
	sub_82416268(ctx, base);
loc_836AB848:
	// addic. r26,r26,-1
	xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	cr0.compare<int32_t>(ctx.r26.s32, 0, xer);
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// bne 0x836ab358
	if (!cr0.eq) goto loc_836AB358;
loc_836AB860:
	// lwz r31,256(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x836ab87c
	if (cr6.eq) goto loc_836AB87C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x836AB874;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x836AB87C;
	sub_82416268(ctx, base);
loc_836AB87C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836AB888"))) PPC_WEAK_FUNC(sub_836AB888);
PPC_FUNC_IMPL(__imp__sub_836AB888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x836AB890;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d95768
	ctx.lr = 0x836AB89C;
	sub_82D95768(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r29,r11,-7520
	ctx.r29.s64 = ctx.r11.s64 + -7520;
	// li r5,17
	ctx.r5.s64 = 17;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824208c8
	ctx.lr = 0x836AB8B4;
	sub_824208C8(ctx, base);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// addi r7,r10,-7168
	ctx.r7.s64 = ctx.r10.s64 + -7168;
	// addi r5,r8,-7184
	ctx.r5.s64 = ctx.r8.s64 + -7184;
	// addi r6,r9,-7180
	ctx.r6.s64 = ctx.r9.s64 + -7180;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r5,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r5.u32);
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r6,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r6.u32);
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// stw r28,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r28.u32);
	// addi r4,r29,20
	ctx.r4.s64 = ctx.r29.s64 + 20;
	// stb r30,316(r31)
	PPC_STORE_U8(ctx.r31.u32 + 316, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836AB8FC;
	sub_824208C8(ctx, base);
	// stw r28,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r28.u32);
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// stb r30,344(r31)
	PPC_STORE_U8(ctx.r31.u32 + 344, ctx.r30.u8);
	// addi r4,r29,36
	ctx.r4.s64 = ctx.r29.s64 + 36;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836AB918;
	sub_824208C8(ctx, base);
	// stw r30,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836AB928"))) PPC_WEAK_FUNC(sub_836AB928);
PPC_FUNC_IMPL(__imp__sub_836AB928) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x836ab9d0
	sub_836AB9D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836AB930"))) PPC_WEAK_FUNC(sub_836AB930);
PPC_FUNC_IMPL(__imp__sub_836AB930) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x836ab9d0
	sub_836AB9D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836AB938"))) PPC_WEAK_FUNC(sub_836AB938);
PPC_FUNC_IMPL(__imp__sub_836AB938) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x836AB940;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// addi r8,r11,-7168
	ctx.r8.s64 = ctx.r11.s64 + -7168;
	// addi r7,r10,-7180
	ctx.r7.s64 = ctx.r10.s64 + -7180;
	// addi r6,r9,-7184
	ctx.r6.s64 = ctx.r9.s64 + -7184;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r6,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r6.u32);
	// addi r30,r3,344
	ctx.r30.s64 = ctx.r3.s64 + 344;
	// lwz r5,364(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 364);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x836ab984
	if (cr6.lt) goto loc_836AB984;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836AB984;
	sub_8386D088(ctx, base);
loc_836AB984:
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r28,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r28.u32);
	// addi r31,r29,316
	ctx.r31.s64 = ctx.r29.s64 + 316;
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// stb r28,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r28.u8);
	// lwz r11,336(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836ab9b0
	if (cr6.lt) goto loc_836AB9B0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836AB9B0;
	sub_8386D088(ctx, base);
loc_836AB9B0:
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// bl 0x82b6a590
	ctx.lr = 0x836AB9C4;
	sub_82B6A590(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836AB9CC"))) PPC_WEAK_FUNC(sub_836AB9CC);
PPC_FUNC_IMPL(__imp__sub_836AB9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836AB9D0"))) PPC_WEAK_FUNC(sub_836AB9D0);
PPC_FUNC_IMPL(__imp__sub_836AB9D0) {
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
	// bl 0x836ab938
	ctx.lr = 0x836AB9F0;
	sub_836AB938(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836aba10
	if (cr6.eq) goto loc_836ABA10;
	// bl 0x82595188
	ctx.lr = 0x836ABA00;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x836ABA10;
	sub_825952B8(ctx, base);
loc_836ABA10:
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

__attribute__((alias("__imp__sub_836ABA2C"))) PPC_WEAK_FUNC(sub_836ABA2C);
PPC_FUNC_IMPL(__imp__sub_836ABA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836ABA30"))) PPC_WEAK_FUNC(sub_836ABA30);
PPC_FUNC_IMPL(__imp__sub_836ABA30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x836ABA38;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82eaf8d8
	ctx.lr = 0x836ABA44;
	sub_82EAF8D8(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r29,r11,-7520
	ctx.r29.s64 = ctx.r11.s64 + -7520;
	// li r5,17
	ctx.r5.s64 = 17;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824208c8
	ctx.lr = 0x836ABA5C;
	sub_824208C8(ctx, base);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// lis r7,-32216
	ctx.r7.s64 = -2111307776;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r5,r9,-7144
	ctx.r5.s64 = ctx.r9.s64 + -7144;
	// addi r4,r8,-7148
	ctx.r4.s64 = ctx.r8.s64 + -7148;
	// stw r30,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r30.u32);
	// addi r3,r7,-7152
	ctx.r3.s64 = ctx.r7.s64 + -7152;
	// stw r5,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r5.u32);
	// addi r6,r10,-7132
	ctx.r6.s64 = ctx.r10.s64 + -7132;
	// stw r4,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r4.u32);
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r3,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r3.u32);
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// addi r3,r31,352
	ctx.r3.s64 = ctx.r31.s64 + 352;
	// stw r28,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r28.u32);
	// addi r4,r29,88
	ctx.r4.s64 = ctx.r29.s64 + 88;
	// stw r30,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r30.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stb r30,352(r31)
	PPC_STORE_U8(ctx.r31.u32 + 352, ctx.r30.u8);
	// bl 0x824208c8
	ctx.lr = 0x836ABAB4;
	sub_824208C8(ctx, base);
	// stw r28,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r28.u32);
	// stw r30,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r30.u32);
	// addi r3,r31,380
	ctx.r3.s64 = ctx.r31.s64 + 380;
	// stb r30,380(r31)
	PPC_STORE_U8(ctx.r31.u32 + 380, ctx.r30.u8);
	// addi r4,r29,92
	ctx.r4.s64 = ctx.r29.s64 + 92;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x824208c8
	ctx.lr = 0x836ABAD0;
	sub_824208C8(ctx, base);
	// stw r30,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r30.u32);
	// stw r30,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r30.u32);
	// stw r30,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836ABAEC"))) PPC_WEAK_FUNC(sub_836ABAEC);
PPC_FUNC_IMPL(__imp__sub_836ABAEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836ABAF0"))) PPC_WEAK_FUNC(sub_836ABAF0);
PPC_FUNC_IMPL(__imp__sub_836ABAF0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x836abba8
	sub_836ABBA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836ABAF8"))) PPC_WEAK_FUNC(sub_836ABAF8);
PPC_FUNC_IMPL(__imp__sub_836ABAF8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-312
	ctx.r3.s64 = ctx.r3.s64 + -312;
	// b 0x836abba8
	sub_836ABBA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836ABB00"))) PPC_WEAK_FUNC(sub_836ABB00);
PPC_FUNC_IMPL(__imp__sub_836ABB00) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x836abba8
	sub_836ABBA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836ABB08"))) PPC_WEAK_FUNC(sub_836ABB08);
PPC_FUNC_IMPL(__imp__sub_836ABB08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x836ABB10;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// addi r7,r11,-7132
	ctx.r7.s64 = ctx.r11.s64 + -7132;
	// addi r6,r10,-7144
	ctx.r6.s64 = ctx.r10.s64 + -7144;
	// addi r5,r9,-7148
	ctx.r5.s64 = ctx.r9.s64 + -7148;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r8,-7152
	ctx.r4.s64 = ctx.r8.s64 + -7152;
	// stw r6,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r6.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r5,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r5.u32);
	// addi r30,r3,380
	ctx.r30.s64 = ctx.r3.s64 + 380;
	// stw r4,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r4.u32);
	// lwz r3,400(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 400);
	// cmplwi cr6,r3,16
	cr6.compare<uint32_t>(ctx.r3.u32, 16, xer);
	// blt cr6,0x836abb60
	if (cr6.lt) goto loc_836ABB60;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836ABB60;
	sub_8386D088(ctx, base);
loc_836ABB60:
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r28,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r28.u32);
	// addi r31,r29,352
	ctx.r31.s64 = ctx.r29.s64 + 352;
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// stb r28,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r28.u8);
	// lwz r11,372(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 372);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836abb8c
	if (cr6.lt) goto loc_836ABB8C;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836ABB8C;
	sub_8386D088(ctx, base);
loc_836ABB8C:
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// bl 0x82eaf978
	ctx.lr = 0x836ABBA0;
	sub_82EAF978(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836ABBA8"))) PPC_WEAK_FUNC(sub_836ABBA8);
PPC_FUNC_IMPL(__imp__sub_836ABBA8) {
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
	// bl 0x836abb08
	ctx.lr = 0x836ABBC8;
	sub_836ABB08(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836abbe8
	if (cr6.eq) goto loc_836ABBE8;
	// bl 0x82595188
	ctx.lr = 0x836ABBD8;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x836ABBE8;
	sub_825952B8(ctx, base);
loc_836ABBE8:
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

__attribute__((alias("__imp__sub_836ABC04"))) PPC_WEAK_FUNC(sub_836ABC04);
PPC_FUNC_IMPL(__imp__sub_836ABC04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836ABC08"))) PPC_WEAK_FUNC(sub_836ABC08);
PPC_FUNC_IMPL(__imp__sub_836ABC08) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stb r30,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r30.u8);
	// addi r4,r10,27936
	ctx.r4.s64 = ctx.r10.s64 + 27936;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x824208c8
	ctx.lr = 0x836ABC44;
	sub_824208C8(ctx, base);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// li r4,10
	ctx.r4.s64 = 10;
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// std r30,72(r31)
	PPC_STORE_U64(ctx.r31.u32 + 72, ctx.r30.u64);
	// bl 0x8362ad38
	ctx.lr = 0x836ABC80;
	sub_8362AD38(ctx, base);
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

__attribute__((alias("__imp__sub_836ABC9C"))) PPC_WEAK_FUNC(sub_836ABC9C);
PPC_FUNC_IMPL(__imp__sub_836ABC9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836ABCA0"))) PPC_WEAK_FUNC(sub_836ABCA0);
PPC_FUNC_IMPL(__imp__sub_836ABCA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x836ABCA8;
	__savegprlr_27(ctx, base);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r28,r3,4
	ctx.r28.s64 = ctx.r3.s64 + 4;
	// rotlwi r8,r31,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r10,134
	ctx.r10.s64 = 134;
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stb r10,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r10.u8);
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// bge cr6,0x836abce8
	if (!cr6.lt) goto loc_836ABCE8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e745e0
	ctx.lr = 0x836ABCE8;
	sub_82E745E0(ctx, base);
loc_836ABCE8:
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// li r30,15
	ctx.r30.s64 = 15;
	// addi r27,r11,-6968
	ctx.r27.s64 = ctx.r11.s64 + -6968;
	// li r5,5
	ctx.r5.s64 = 5;
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r4,r27,-36
	ctx.r4.s64 = ctx.r27.s64 + -36;
	// stbx r7,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u8);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r6.u32);
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836ABD30;
	sub_82472FC0(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836ABD3C;
	sub_82E74C08(ctx, base);
	// lwz r5,244(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x836abd50
	if (cr6.lt) goto loc_836ABD50;
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82416268
	ctx.lr = 0x836ABD50;
	sub_82416268(ctx, base);
loc_836ABD50:
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// addi r4,r29,20
	ctx.r4.s64 = ctx.r29.s64 + 20;
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// blt cr6,0x836abd70
	if (cr6.lt) goto loc_836ABD70;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836ABD70:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
loc_836ABD80:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836abd80
	if (!cr6.eq) goto loc_836ABD80;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836ABDA4;
	sub_82472FC0(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836ABDB0;
	sub_82E74C08(ctx, base);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836abdc4
	if (cr6.lt) goto loc_836ABDC4;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x836ABDC4;
	sub_82416268(ctx, base);
loc_836ABDC4:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// addi r4,r27,-28
	ctx.r4.s64 = ctx.r27.s64 + -28;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836ABDEC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836ABDF8;
	sub_82E74C08(ctx, base);
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836abe0c
	if (cr6.lt) goto loc_836ABE0C;
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82416268
	ctx.lr = 0x836ABE0C;
	sub_82416268(ctx, base);
loc_836ABE0C:
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// lwz r4,48(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// bl 0x82e746c0
	ctx.lr = 0x836ABE24;
	sub_82E746C0(ctx, base);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// addi r4,r27,-20
	ctx.r4.s64 = ctx.r27.s64 + -20;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82472fc0
	ctx.lr = 0x836ABE40;
	sub_82472FC0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836ABE4C;
	sub_82E74C08(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836abe60
	if (cr6.lt) goto loc_836ABE60;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x836ABE60;
	sub_82416268(ctx, base);
loc_836ABE60:
	// lwz r11,136(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// addi r4,r29,116
	ctx.r4.s64 = ctx.r29.s64 + 116;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// blt cr6,0x836abe80
	if (cr6.lt) goto loc_836ABE80;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836ABE80:
	// stw r30,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
loc_836ABE90:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836abe90
	if (!cr6.eq) goto loc_836ABE90;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836ABEB4;
	sub_82472FC0(ctx, base);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836ABEC0;
	sub_82E74C08(ctx, base);
	// lwz r10,372(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836abed4
	if (cr6.lt) goto loc_836ABED4;
	// lwz r3,352(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// bl 0x82416268
	ctx.lr = 0x836ABED4;
	sub_82416268(ctx, base);
loc_836ABED4:
	// stw r30,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r30.u32);
	// addi r4,r27,-12
	ctx.r4.s64 = ctx.r27.s64 + -12;
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836ABEFC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836ABF08;
	sub_82E74C08(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836abf1c
	if (cr6.lt) goto loc_836ABF1C;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x836ABF1C;
	sub_82416268(ctx, base);
loc_836ABF1C:
	// lwz r11,164(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 164);
	// addi r4,r29,144
	ctx.r4.s64 = ctx.r29.s64 + 144;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// blt cr6,0x836abf3c
	if (cr6.lt) goto loc_836ABF3C;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836ABF3C:
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
loc_836ABF4C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836abf4c
	if (!cr6.eq) goto loc_836ABF4C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836ABF70;
	sub_82472FC0(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836ABF7C;
	sub_82E74C08(ctx, base);
	// lwz r10,212(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836abf90
	if (cr6.lt) goto loc_836ABF90;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82416268
	ctx.lr = 0x836ABF90;
	sub_82416268(ctx, base);
loc_836ABF90:
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// addi r4,r27,-4
	ctx.r4.s64 = ctx.r27.s64 + -4;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836ABFB8;
	sub_82472FC0(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836ABFC4;
	sub_82E74C08(ctx, base);
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836abfd8
	if (cr6.lt) goto loc_836ABFD8;
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x82416268
	ctx.lr = 0x836ABFD8;
	sub_82416268(ctx, base);
loc_836ABFD8:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// lwz r4,172(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 172);
	// bl 0x82e746c0
	ctx.lr = 0x836ABFF0;
	sub_82E746C0(ctx, base);
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// li r5,13
	ctx.r5.s64 = 13;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82472fc0
	ctx.lr = 0x836AC00C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836AC018;
	sub_82E74C08(ctx, base);
	// lwz r11,340(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836ac02c
	if (cr6.lt) goto loc_836AC02C;
	// lwz r3,320(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x82416268
	ctx.lr = 0x836AC02C;
	sub_82416268(ctx, base);
loc_836AC02C:
	// lwz r11,196(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 196);
	// addi r4,r29,176
	ctx.r4.s64 = ctx.r29.s64 + 176;
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// blt cr6,0x836ac04c
	if (cr6.lt) goto loc_836AC04C;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836AC04C:
	// stw r30,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r31.u32);
	// stb r31,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r31.u8);
loc_836AC05C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836ac05c
	if (!cr6.eq) goto loc_836AC05C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836AC080;
	sub_82472FC0(ctx, base);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836AC08C;
	sub_82E74C08(ctx, base);
	// lwz r10,404(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836ac0a0
	if (cr6.lt) goto loc_836AC0A0;
	// lwz r3,384(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// bl 0x82416268
	ctx.lr = 0x836AC0A0;
	sub_82416268(ctx, base);
loc_836AC0A0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836AC0AC"))) PPC_WEAK_FUNC(sub_836AC0AC);
PPC_FUNC_IMPL(__imp__sub_836AC0AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836AC0B0"))) PPC_WEAK_FUNC(sub_836AC0B0);
PPC_FUNC_IMPL(__imp__sub_836AC0B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x836AC0B8;
	__savegprlr_14(ctx, base);
	// stwu r1,-1984(r1)
	ea = -1984 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// stw r25,1040(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1040, ctx.r25.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r25,1056(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1056, ctx.r25.u32);
	// addi r3,r1,1040
	ctx.r3.s64 = ctx.r1.s64 + 1040;
	// bl 0x83691bb8
	ctx.lr = 0x836AC0E0;
	sub_83691BB8(ctx, base);
	// lwz r10,1048(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1048);
	// lwz r11,1052(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1052);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r14,r11
	ctx.r14.u64 = ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r10,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r10.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x836ad7b4
	if (!cr6.lt) goto loc_836AD7B4;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r7,11
	ctx.r7.s64 = 720896;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32204
	ctx.r8.s64 = -2110521344;
	// addi r6,r10,-316
	ctx.r6.s64 = ctx.r10.s64 + -316;
	// li r21,15
	ctx.r21.s64 = 15;
	// li r20,4
	ctx.r20.s64 = 4;
	// stw r6,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r6.u32);
	// ori r16,r7,1
	ctx.r16.u64 = ctx.r7.u64 | 1;
	// addi r17,r11,-6504
	ctx.r17.s64 = ctx.r11.s64 + -6504;
	// addi r18,r9,8980
	ctx.r18.s64 = ctx.r9.s64 + 8980;
	// addi r19,r8,26164
	ctx.r19.s64 = ctx.r8.s64 + 26164;
loc_836AC134:
	// stw r21,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r21.u32);
	// addi r11,r1,1440
	ctx.r11.s64 = ctx.r1.s64 + 1440;
	// stw r25,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r25.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r25,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r25.u8);
	// ld r10,8(r14)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r14.u32 + 8);
	// ld r9,0(r14)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r14.u32 + 0);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// lwz r5,1448(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1448);
	// lwz r4,1452(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1452);
	// bl 0x82472fc0
	ctx.lr = 0x836AC164;
	sub_82472FC0(ctx, base);
	// addi r6,r17,-416
	ctx.r6.s64 = ctx.r17.s64 + -416;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x836AC17C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836ac214
	if (!cr6.eq) goto loc_836AC214;
	// stb r25,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r25.u8);
	// addi r11,r1,1200
	ctx.r11.s64 = ctx.r1.s64 + 1200;
	// stw r21,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r21.u32);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// stw r25,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r25.u32);
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
	// lwz r4,1212(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1212);
	// lwz r5,1208(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1208);
	// bl 0x82472fc0
	ctx.lr = 0x836AC1B8;
	sub_82472FC0(ctx, base);
	// lwz r7,340(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r4,320(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x836ac1cc
	if (!cr6.lt) goto loc_836AC1CC;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
loc_836AC1CC:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836AC1D0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836ac1d0
	if (!cr6.eq) goto loc_836AC1D0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r15,20
	ctx.r3.s64 = ctx.r15.s64 + 20;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836AC1F4;
	sub_824208C8(ctx, base);
	// lwz r10,340(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836ac208
	if (cr6.lt) goto loc_836AC208;
	// lwz r3,320(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x82416268
	ctx.lr = 0x836AC208;
	sub_82416268(ctx, base);
loc_836AC208:
	// stw r21,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r21.u32);
	// stw r25,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r25.u32);
	// stb r25,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r25.u8);
loc_836AC214:
	// addi r6,r17,-408
	ctx.r6.s64 = ctx.r17.s64 + -408;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x836AC22C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836ac26c
	if (!cr6.eq) goto loc_836AC26C;
	// ld r9,24(r14)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r14.u32 + 24);
	// addi r10,r1,1552
	ctx.r10.s64 = ctx.r1.s64 + 1552;
	// ld r11,16(r14)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r14.u32 + 16);
	// addi r8,r14,16
	ctx.r8.s64 = ctx.r14.s64 + 16;
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// lwz r7,1552(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1552);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x836ac264
	if (!cr6.eq) goto loc_836AC264;
	// ld r11,1560(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1560);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836ac268
	goto loc_836AC268;
loc_836AC264:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_836AC268:
	// stw r11,48(r15)
	PPC_STORE_U32(ctx.r15.u32 + 48, ctx.r11.u32);
loc_836AC26C:
	// addi r6,r17,-400
	ctx.r6.s64 = ctx.r17.s64 + -400;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x836AC284;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836ac31c
	if (!cr6.eq) goto loc_836AC31C;
	// stw r21,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r21.u32);
	// addi r11,r1,1232
	ctx.r11.s64 = ctx.r1.s64 + 1232;
	// stw r25,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r25.u32);
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// stb r25,480(r1)
	PPC_STORE_U8(ctx.r1.u32 + 480, ctx.r25.u8);
	// addi r10,r14,16
	ctx.r10.s64 = ctx.r14.s64 + 16;
	// ld r8,24(r14)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r14.u32 + 24);
	// ld r9,16(r14)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r14.u32 + 16);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r4,1244(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1244);
	// lwz r5,1240(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1240);
	// bl 0x82472fc0
	ctx.lr = 0x836AC2C0;
	sub_82472FC0(ctx, base);
	// lwz r7,500(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 500);
	// lwz r4,480(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 480);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x836ac2d4
	if (!cr6.lt) goto loc_836AC2D4;
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
loc_836AC2D4:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836AC2D8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836ac2d8
	if (!cr6.eq) goto loc_836AC2D8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r15,116
	ctx.r3.s64 = ctx.r15.s64 + 116;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836AC2FC;
	sub_824208C8(ctx, base);
	// lwz r10,500(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 500);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836ac310
	if (cr6.lt) goto loc_836AC310;
	// lwz r3,480(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 480);
	// bl 0x82416268
	ctx.lr = 0x836AC310;
	sub_82416268(ctx, base);
loc_836AC310:
	// stw r21,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r21.u32);
	// stw r25,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r25.u32);
	// stb r25,480(r1)
	PPC_STORE_U8(ctx.r1.u32 + 480, ctx.r25.u8);
loc_836AC31C:
	// addi r6,r17,-392
	ctx.r6.s64 = ctx.r17.s64 + -392;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x836AC334;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836ac3cc
	if (!cr6.eq) goto loc_836AC3CC;
	// stw r25,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r25.u32);
	// addi r11,r1,1456
	ctx.r11.s64 = ctx.r1.s64 + 1456;
	// stb r25,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r25.u8);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// stw r21,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r21.u32);
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
	// lwz r5,1464(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1464);
	// lwz r4,1468(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1468);
	// bl 0x82472fc0
	ctx.lr = 0x836AC370;
	sub_82472FC0(ctx, base);
	// lwz r7,372(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r4,352(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x836ac384
	if (!cr6.lt) goto loc_836AC384;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
loc_836AC384:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836AC388:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836ac388
	if (!cr6.eq) goto loc_836AC388;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r15,148
	ctx.r3.s64 = ctx.r15.s64 + 148;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836AC3AC;
	sub_824208C8(ctx, base);
	// lwz r10,372(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836ac3c0
	if (cr6.lt) goto loc_836AC3C0;
	// lwz r3,352(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// bl 0x82416268
	ctx.lr = 0x836AC3C0;
	sub_82416268(ctx, base);
loc_836AC3C0:
	// stw r21,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r21.u32);
	// stw r25,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r25.u32);
	// stb r25,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r25.u8);
loc_836AC3CC:
	// addi r6,r17,-384
	ctx.r6.s64 = ctx.r17.s64 + -384;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x836AC3E4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836ac41c
	if (!cr6.eq) goto loc_836AC41C;
	// ld r11,16(r14)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r14.u32 + 16);
	// addi r10,r1,1264
	ctx.r10.s64 = ctx.r1.s64 + 1264;
	// ld r9,24(r14)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r14.u32 + 24);
	// addi r8,r14,16
	ctx.r8.s64 = ctx.r14.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,1264(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1264);
	// ld r11,1272(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1272);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// beq cr6,0x836ac418
	if (cr6.eq) goto loc_836AC418;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_836AC418:
	// std r11,176(r15)
	PPC_STORE_U64(ctx.r15.u32 + 176, ctx.r11.u64);
loc_836AC41C:
	// addi r6,r17,-376
	ctx.r6.s64 = ctx.r17.s64 + -376;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x836AC434;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836ac4cc
	if (!cr6.eq) goto loc_836AC4CC;
	// stw r21,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r21.u32);
	// addi r11,r1,1616
	ctx.r11.s64 = ctx.r1.s64 + 1616;
	// stw r25,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r25.u32);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// stb r25,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r25.u8);
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
	// lwz r5,1624(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1624);
	// lwz r4,1628(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1628);
	// bl 0x82472fc0
	ctx.lr = 0x836AC470;
	sub_82472FC0(ctx, base);
	// lwz r7,404(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// lwz r4,384(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x836ac484
	if (!cr6.lt) goto loc_836AC484;
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
loc_836AC484:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836AC488:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836ac488
	if (!cr6.eq) goto loc_836AC488;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r15,184
	ctx.r3.s64 = ctx.r15.s64 + 184;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836AC4AC;
	sub_824208C8(ctx, base);
	// lwz r10,404(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836ac4c0
	if (cr6.lt) goto loc_836AC4C0;
	// lwz r3,384(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// bl 0x82416268
	ctx.lr = 0x836AC4C0;
	sub_82416268(ctx, base);
loc_836AC4C0:
	// stw r21,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r21.u32);
	// stw r25,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r25.u32);
	// stb r25,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r25.u8);
loc_836AC4CC:
	// addi r6,r17,-364
	ctx.r6.s64 = ctx.r17.s64 + -364;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x836AC4E4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836acbd8
	if (!cr6.eq) goto loc_836ACBD8;
	// stw r25,1008(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1008, ctx.r25.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r25,1024(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1024, ctx.r25.u32);
	// addi r3,r1,1008
	ctx.r3.s64 = ctx.r1.s64 + 1008;
	// lwz r5,24(r14)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r14.u32 + 24);
	// lwz r4,28(r14)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r14.u32 + 28);
	// bl 0x83691bb8
	ctx.lr = 0x836AC508;
	sub_83691BB8(ctx, base);
	// lwz r10,1016(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1016);
	// lwz r11,1020(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1020);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x836acbbc
	if (!cr6.lt) goto loc_836ACBBC;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r23,r11,28
	ctx.r23.s64 = ctx.r11.s64 + 28;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r22,r11,1
	ctx.r22.s64 = ctx.r11.s64 + 1;
loc_836AC534:
	// stw r21,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r21.u32);
	// addi r11,r1,1296
	ctx.r11.s64 = ctx.r1.s64 + 1296;
	// stw r25,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r25.u32);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// stb r25,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r25.u8);
	// addi r10,r23,-28
	ctx.r10.s64 = ctx.r23.s64 + -28;
	// ld r9,-28(r23)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r23.u32 + -28);
	// ld r8,-20(r23)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r23.u32 + -20);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r5,1304(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1304);
	// lwz r4,1308(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1308);
	// bl 0x82472fc0
	ctx.lr = 0x836AC568;
	sub_82472FC0(ctx, base);
	// addi r6,r17,-356
	ctx.r6.s64 = ctx.r17.s64 + -356;
	// lwz r5,288(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// li r7,7
	ctx.r7.s64 = 7;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x827a8810
	ctx.lr = 0x836AC580;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836ac8c8
	if (!cr6.eq) goto loc_836AC8C8;
	// stw r25,896(r1)
	PPC_STORE_U32(ctx.r1.u32 + 896, ctx.r25.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r25,912(r1)
	PPC_STORE_U32(ctx.r1.u32 + 912, ctx.r25.u32);
	// addi r3,r1,896
	ctx.r3.s64 = ctx.r1.s64 + 896;
	// lwz r5,-4(r23)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r23.u32 + -4);
	// lwz r4,0(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// bl 0x83691bb8
	ctx.lr = 0x836AC5A4;
	sub_83691BB8(ctx, base);
	// lwz r10,904(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 904);
	// lwz r11,908(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 908);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x836ac8ac
	if (!cr6.lt) goto loc_836AC8AC;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r26,r11,16
	ctx.r26.s64 = ctx.r11.s64 + 16;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r24,r11,1
	ctx.r24.s64 = ctx.r11.s64 + 1;
loc_836AC5D0:
	// stw r21,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r21.u32);
	// addi r11,r1,1488
	ctx.r11.s64 = ctx.r1.s64 + 1488;
	// stw r25,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r25.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stb r25,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r25.u8);
	// addi r10,r26,-16
	ctx.r10.s64 = ctx.r26.s64 + -16;
	// ld r9,-16(r26)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r26.u32 + -16);
	// ld r8,-8(r26)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r26.u32 + -8);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r4,1500(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1500);
	// lwz r5,1496(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1496);
	// bl 0x82472fc0
	ctx.lr = 0x836AC604;
	sub_82472FC0(ctx, base);
	// addi r6,r17,-348
	ctx.r6.s64 = ctx.r17.s64 + -348;
	// lwz r5,256(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x827a8810
	ctx.lr = 0x836AC61C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836ac6b0
	if (!cr6.eq) goto loc_836AC6B0;
	// stw r21,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r21.u32);
	// addi r11,r1,1328
	ctx.r11.s64 = ctx.r1.s64 + 1328;
	// stw r25,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r25.u32);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// stb r25,448(r1)
	PPC_STORE_U8(ctx.r1.u32 + 448, ctx.r25.u8);
	// ld r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r26.u32 + 0);
	// ld r9,8(r26)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r26.u32 + 8);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,1336(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1336);
	// lwz r4,1340(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1340);
	// bl 0x82472fc0
	ctx.lr = 0x836AC654;
	sub_82472FC0(ctx, base);
	// lwz r8,468(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// lwz r4,448(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x836ac668
	if (!cr6.lt) goto loc_836AC668;
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
loc_836AC668:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836AC66C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836ac66c
	if (!cr6.eq) goto loc_836AC66C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r15,216
	ctx.r3.s64 = ctx.r15.s64 + 216;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836AC690;
	sub_824208C8(ctx, base);
	// lwz r10,468(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836ac6a4
	if (cr6.lt) goto loc_836AC6A4;
	// lwz r3,448(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// bl 0x82416268
	ctx.lr = 0x836AC6A4;
	sub_82416268(ctx, base);
loc_836AC6A4:
	// stw r21,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r21.u32);
	// stw r25,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r25.u32);
	// stb r25,448(r1)
	PPC_STORE_U8(ctx.r1.u32 + 448, ctx.r25.u8);
loc_836AC6B0:
	// addi r6,r17,-340
	ctx.r6.s64 = ctx.r17.s64 + -340;
	// lwz r5,256(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x827a8810
	ctx.lr = 0x836AC6C8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836ac718
	if (!cr6.eq) goto loc_836AC718;
	// ld r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r26.u32 + 0);
	// addi r10,r1,976
	ctx.r10.s64 = ctx.r1.s64 + 976;
	// ld r9,8(r26)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r26.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r11,976(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 976);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x836ac6fc
	if (!cr6.eq) goto loc_836AC6FC;
	// ld r11,984(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 984);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836ac714
	goto loc_836AC714;
loc_836AC6FC:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x836ac710
	if (!cr6.eq) goto loc_836AC710;
	// ld r11,984(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 984);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// b 0x836ac714
	goto loc_836AC714;
loc_836AC710:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_836AC714:
	// stw r11,244(r15)
	PPC_STORE_U32(ctx.r15.u32 + 244, ctx.r11.u32);
loc_836AC718:
	// addi r6,r17,-332
	ctx.r6.s64 = ctx.r17.s64 + -332;
	// lwz r5,256(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x827a8810
	ctx.lr = 0x836AC730;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836ac880
	if (!cr6.eq) goto loc_836AC880;
	// addi r31,r15,248
	ctx.r31.s64 = ctx.r15.s64 + 248;
	// stw r19,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r19.u32);
	// stw r20,780(r1)
	PPC_STORE_U32(ctx.r1.u32 + 780, ctx.r20.u32);
	// addi r4,r1,180
	ctx.r4.s64 = ctx.r1.s64 + 180;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// stw r31,772(r1)
	PPC_STORE_U32(ctx.r1.u32 + 772, ctx.r31.u32);
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// stw r20,784(r1)
	PPC_STORE_U32(ctx.r1.u32 + 784, ctx.r20.u32);
	// stw r30,768(r1)
	PPC_STORE_U32(ctx.r1.u32 + 768, ctx.r30.u32);
	// addi r3,r1,768
	ctx.r3.s64 = ctx.r1.s64 + 768;
	// stw r29,776(r1)
	PPC_STORE_U32(ctx.r1.u32 + 776, ctx.r29.u32);
	// bl 0x8247b7d8
	ctx.lr = 0x836AC768;
	sub_8247B7D8(ctx, base);
	// lwz r3,256(r15)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r15.u32 + 256);
	// stw r25,248(r15)
	PPC_STORE_U32(ctx.r15.u32 + 248, ctx.r25.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x836ac788
	if (cr6.eq) goto loc_836AC788;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// bl 0x8247b268
	ctx.lr = 0x836AC780;
	sub_8247B268(ctx, base);
	// stw r25,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r25.u32);
	// stw r25,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r25.u32);
loc_836AC788:
	// stw r18,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r18.u32);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// add r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, xer);
	// bge cr6,0x836ac880
	if (!cr6.lt) goto loc_836AC880;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
loc_836AC7AC:
	// ld r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// addi r10,r1,992
	ctx.r10.s64 = ctx.r1.s64 + 992;
	// ld r9,8(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r11,992(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 992);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x836ac7d8
	if (!cr6.eq) goto loc_836AC7D8;
	// ld r11,1000(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1000);
	// rotlwi r29,r11,0
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836ac7f0
	goto loc_836AC7F0;
loc_836AC7D8:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x836ac7ec
	if (!cr6.eq) goto loc_836AC7EC;
	// ld r11,1000(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1000);
	// extsw r29,r11
	ctx.r29.s64 = ctx.r11.s32;
	// b 0x836ac7f0
	goto loc_836AC7F0;
loc_836AC7EC:
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_836AC7F0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x836ac850
	if (cr6.lt) goto loc_836AC850;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x836ac840
	if (!cr6.gt) goto loc_836AC840;
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// stw r31,708(r1)
	PPC_STORE_U32(ctx.r1.u32 + 708, ctx.r31.u32);
	// stw r30,712(r1)
	PPC_STORE_U32(ctx.r1.u32 + 712, ctx.r30.u32);
	// addi r6,r1,172
	ctx.r6.s64 = ctx.r1.s64 + 172;
	// stw r11,704(r1)
	PPC_STORE_U32(ctx.r1.u32 + 704, ctx.r11.u32);
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// stw r20,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, ctx.r20.u32);
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// stw r20,720(r1)
	PPC_STORE_U32(ctx.r1.u32 + 720, ctx.r20.u32);
	// stw r19,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r19.u32);
	// bl 0x8247b270
	ctx.lr = 0x836AC838;
	sub_8247B270(ctx, base);
	// stw r18,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r18.u32);
	// b 0x836ac844
	goto loc_836AC844;
loc_836AC840:
	// li r3,1
	ctx.r3.s64 = 1;
loc_836AC844:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836ac874
	if (cr6.eq) goto loc_836AC874;
loc_836AC850:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x836ac868
	if (cr0.eq) goto loc_836AC868;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
loc_836AC868:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_836AC874:
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// cmplw cr6,r28,r27
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, xer);
	// blt cr6,0x836ac7ac
	if (cr6.lt) goto loc_836AC7AC;
loc_836AC880:
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836ac894
	if (cr6.lt) goto loc_836AC894;
	// lwz r3,240(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x82416268
	ctx.lr = 0x836AC894;
	sub_82416268(ctx, base);
loc_836AC894:
	// addic. r24,r24,-1
	xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	cr0.compare<int32_t>(ctx.r24.s32, 0, xer);
	// stw r21,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r21.u32);
	// stw r25,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r25.u32);
	// addi r26,r26,32
	ctx.r26.s64 = ctx.r26.s64 + 32;
	// stb r25,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r25.u8);
	// bne 0x836ac5d0
	if (!cr0.eq) goto loc_836AC5D0;
loc_836AC8AC:
	// lwz r31,912(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 912);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x836ac8c8
	if (cr6.eq) goto loc_836AC8C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x836AC8C0;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x836AC8C8;
	sub_82416268(ctx, base);
loc_836AC8C8:
	// addi r6,r17,-324
	ctx.r6.s64 = ctx.r17.s64 + -324;
	// lwz r5,288(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// li r7,3
	ctx.r7.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x827a8810
	ctx.lr = 0x836AC8E0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836aca2c
	if (!cr6.eq) goto loc_836ACA2C;
	// addi r31,r15,264
	ctx.r31.s64 = ctx.r15.s64 + 264;
	// stw r19,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r19.u32);
	// stw r20,748(r1)
	PPC_STORE_U32(ctx.r1.u32 + 748, ctx.r20.u32);
	// addi r4,r1,188
	ctx.r4.s64 = ctx.r1.s64 + 188;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// stw r31,740(r1)
	PPC_STORE_U32(ctx.r1.u32 + 740, ctx.r31.u32);
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// stw r20,752(r1)
	PPC_STORE_U32(ctx.r1.u32 + 752, ctx.r20.u32);
	// stw r30,736(r1)
	PPC_STORE_U32(ctx.r1.u32 + 736, ctx.r30.u32);
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// stw r29,744(r1)
	PPC_STORE_U32(ctx.r1.u32 + 744, ctx.r29.u32);
	// bl 0x8247b7d8
	ctx.lr = 0x836AC918;
	sub_8247B7D8(ctx, base);
	// lwz r3,272(r15)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r15.u32 + 272);
	// stw r25,264(r15)
	PPC_STORE_U32(ctx.r15.u32 + 264, ctx.r25.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x836ac938
	if (cr6.eq) goto loc_836AC938;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// bl 0x8247b268
	ctx.lr = 0x836AC930;
	sub_8247B268(ctx, base);
	// stw r25,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r25.u32);
	// stw r25,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r25.u32);
loc_836AC938:
	// stw r18,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r18.u32);
	// lwz r11,-4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + -4);
	// lwz r29,0(r23)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r27,r11,r29
	ctx.r27.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplw cr6,r29,r27
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, xer);
	// bge cr6,0x836aca2c
	if (!cr6.lt) goto loc_836ACA2C;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
loc_836AC958:
	// ld r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// addi r10,r1,1104
	ctx.r10.s64 = ctx.r1.s64 + 1104;
	// ld r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r29.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r11,1104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1104);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x836ac984
	if (!cr6.eq) goto loc_836AC984;
	// ld r11,1112(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1112);
	// rotlwi r28,r11,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836ac99c
	goto loc_836AC99C;
loc_836AC984:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x836ac998
	if (!cr6.eq) goto loc_836AC998;
	// ld r11,1112(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1112);
	// extsw r28,r11
	ctx.r28.s64 = ctx.r11.s32;
	// b 0x836ac99c
	goto loc_836AC99C;
loc_836AC998:
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
loc_836AC99C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x836ac9fc
	if (cr6.lt) goto loc_836AC9FC;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x836ac9ec
	if (!cr6.gt) goto loc_836AC9EC;
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// stw r31,804(r1)
	PPC_STORE_U32(ctx.r1.u32 + 804, ctx.r31.u32);
	// stw r30,808(r1)
	PPC_STORE_U32(ctx.r1.u32 + 808, ctx.r30.u32);
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// stw r11,800(r1)
	PPC_STORE_U32(ctx.r1.u32 + 800, ctx.r11.u32);
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// stw r20,812(r1)
	PPC_STORE_U32(ctx.r1.u32 + 812, ctx.r20.u32);
	// addi r3,r1,800
	ctx.r3.s64 = ctx.r1.s64 + 800;
	// stw r20,816(r1)
	PPC_STORE_U32(ctx.r1.u32 + 816, ctx.r20.u32);
	// stw r19,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r19.u32);
	// bl 0x8247b270
	ctx.lr = 0x836AC9E4;
	sub_8247B270(ctx, base);
	// stw r18,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r18.u32);
	// b 0x836ac9f0
	goto loc_836AC9F0;
loc_836AC9EC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_836AC9F0:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836aca20
	if (cr6.eq) goto loc_836ACA20;
loc_836AC9FC:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x836aca14
	if (cr0.eq) goto loc_836ACA14;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
loc_836ACA14:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_836ACA20:
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// cmplw cr6,r29,r27
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, xer);
	// blt cr6,0x836ac958
	if (cr6.lt) goto loc_836AC958;
loc_836ACA2C:
	// addi r6,r17,-320
	ctx.r6.s64 = ctx.r17.s64 + -320;
	// lwz r5,288(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x827a8810
	ctx.lr = 0x836ACA44;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836acb90
	if (!cr6.eq) goto loc_836ACB90;
	// addi r31,r15,280
	ctx.r31.s64 = ctx.r15.s64 + 280;
	// stw r19,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r19.u32);
	// stw r20,876(r1)
	PPC_STORE_U32(ctx.r1.u32 + 876, ctx.r20.u32);
	// addi r4,r1,196
	ctx.r4.s64 = ctx.r1.s64 + 196;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// stw r31,868(r1)
	PPC_STORE_U32(ctx.r1.u32 + 868, ctx.r31.u32);
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// stw r20,880(r1)
	PPC_STORE_U32(ctx.r1.u32 + 880, ctx.r20.u32);
	// stw r30,864(r1)
	PPC_STORE_U32(ctx.r1.u32 + 864, ctx.r30.u32);
	// addi r3,r1,864
	ctx.r3.s64 = ctx.r1.s64 + 864;
	// stw r29,872(r1)
	PPC_STORE_U32(ctx.r1.u32 + 872, ctx.r29.u32);
	// bl 0x8247b7d8
	ctx.lr = 0x836ACA7C;
	sub_8247B7D8(ctx, base);
	// lwz r3,288(r15)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r15.u32 + 288);
	// stw r25,280(r15)
	PPC_STORE_U32(ctx.r15.u32 + 280, ctx.r25.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x836aca9c
	if (cr6.eq) goto loc_836ACA9C;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// bl 0x8247b268
	ctx.lr = 0x836ACA94;
	sub_8247B268(ctx, base);
	// stw r25,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r25.u32);
	// stw r25,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r25.u32);
loc_836ACA9C:
	// stw r18,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r18.u32);
	// lwz r29,0(r23)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r11,-4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + -4);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r27,r11,r29
	ctx.r27.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplw cr6,r29,r27
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, xer);
	// bge cr6,0x836acb90
	if (!cr6.lt) goto loc_836ACB90;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
loc_836ACABC:
	// ld r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// addi r10,r1,928
	ctx.r10.s64 = ctx.r1.s64 + 928;
	// ld r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r29.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r11,928(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 928);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x836acae8
	if (!cr6.eq) goto loc_836ACAE8;
	// ld r11,936(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 936);
	// rotlwi r28,r11,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836acb00
	goto loc_836ACB00;
loc_836ACAE8:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x836acafc
	if (!cr6.eq) goto loc_836ACAFC;
	// ld r11,936(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 936);
	// extsw r28,r11
	ctx.r28.s64 = ctx.r11.s32;
	// b 0x836acb00
	goto loc_836ACB00;
loc_836ACAFC:
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
loc_836ACB00:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x836acb60
	if (cr6.lt) goto loc_836ACB60;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x836acb50
	if (!cr6.gt) goto loc_836ACB50;
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// stw r31,836(r1)
	PPC_STORE_U32(ctx.r1.u32 + 836, ctx.r31.u32);
	// stw r30,840(r1)
	PPC_STORE_U32(ctx.r1.u32 + 840, ctx.r30.u32);
	// addi r6,r1,184
	ctx.r6.s64 = ctx.r1.s64 + 184;
	// stw r11,832(r1)
	PPC_STORE_U32(ctx.r1.u32 + 832, ctx.r11.u32);
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// stw r20,844(r1)
	PPC_STORE_U32(ctx.r1.u32 + 844, ctx.r20.u32);
	// addi r3,r1,832
	ctx.r3.s64 = ctx.r1.s64 + 832;
	// stw r20,848(r1)
	PPC_STORE_U32(ctx.r1.u32 + 848, ctx.r20.u32);
	// stw r19,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r19.u32);
	// bl 0x8247b270
	ctx.lr = 0x836ACB48;
	sub_8247B270(ctx, base);
	// stw r18,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r18.u32);
	// b 0x836acb54
	goto loc_836ACB54;
loc_836ACB50:
	// li r3,1
	ctx.r3.s64 = 1;
loc_836ACB54:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836acb84
	if (cr6.eq) goto loc_836ACB84;
loc_836ACB60:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x836acb78
	if (cr0.eq) goto loc_836ACB78;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
loc_836ACB78:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_836ACB84:
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// cmplw cr6,r29,r27
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, xer);
	// blt cr6,0x836acabc
	if (cr6.lt) goto loc_836ACABC;
loc_836ACB90:
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836acba4
	if (cr6.lt) goto loc_836ACBA4;
	// lwz r3,272(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// bl 0x82416268
	ctx.lr = 0x836ACBA4;
	sub_82416268(ctx, base);
loc_836ACBA4:
	// addic. r22,r22,-1
	xer.ca = ctx.r22.u32 > 0;
	ctx.r22.s64 = ctx.r22.s64 + -1;
	cr0.compare<int32_t>(ctx.r22.s32, 0, xer);
	// stw r21,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r21.u32);
	// stw r25,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r25.u32);
	// addi r23,r23,32
	ctx.r23.s64 = ctx.r23.s64 + 32;
	// stb r25,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r25.u8);
	// bne 0x836ac534
	if (!cr0.eq) goto loc_836AC534;
loc_836ACBBC:
	// lwz r31,1024(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1024);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x836acbd8
	if (cr6.eq) goto loc_836ACBD8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x836ACBD0;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x836ACBD8;
	sub_82416268(ctx, base);
loc_836ACBD8:
	// addi r6,r17,-308
	ctx.r6.s64 = ctx.r17.s64 + -308;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,13
	ctx.r7.s64 = 13;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x836ACBF0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836ad784
	if (!cr6.eq) goto loc_836AD784;
	// stw r25,944(r1)
	PPC_STORE_U32(ctx.r1.u32 + 944, ctx.r25.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r25,960(r1)
	PPC_STORE_U32(ctx.r1.u32 + 960, ctx.r25.u32);
	// addi r3,r1,944
	ctx.r3.s64 = ctx.r1.s64 + 944;
	// lwz r5,24(r14)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r14.u32 + 24);
	// lwz r4,28(r14)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r14.u32 + 28);
	// bl 0x83691bb8
	ctx.lr = 0x836ACC14;
	sub_83691BB8(ctx, base);
	// lwz r10,952(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 952);
	// lwz r11,956(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 956);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// add r24,r10,r11
	ctx.r24.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r24
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, xer);
	// bge cr6,0x836ad768
	if (!cr6.lt) goto loc_836AD768;
loc_836ACC30:
	// stw r21,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r21.u32);
	// addi r11,r1,1584
	ctx.r11.s64 = ctx.r1.s64 + 1584;
	// stw r25,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r25.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stb r25,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r25.u8);
	// ld r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r26.u32 + 0);
	// ld r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r26.u32 + 8);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// lwz r5,1592(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1592);
	// lwz r4,1596(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1596);
	// bl 0x82472fc0
	ctx.lr = 0x836ACC60;
	sub_82472FC0(ctx, base);
	// addi r6,r17,-292
	ctx.r6.s64 = ctx.r17.s64 + -292;
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x827a8810
	ctx.lr = 0x836ACC78;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836acd10
	if (!cr6.eq) goto loc_836ACD10;
	// stw r21,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r21.u32);
	// addi r11,r1,1360
	ctx.r11.s64 = ctx.r1.s64 + 1360;
	// stw r25,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r25.u32);
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// stb r25,512(r1)
	PPC_STORE_U8(ctx.r1.u32 + 512, ctx.r25.u8);
	// addi r10,r26,16
	ctx.r10.s64 = ctx.r26.s64 + 16;
	// ld r9,16(r26)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r26.u32 + 16);
	// ld r8,24(r26)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r26.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r4,1372(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1372);
	// lwz r5,1368(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1368);
	// bl 0x82472fc0
	ctx.lr = 0x836ACCB4;
	sub_82472FC0(ctx, base);
	// lwz r7,532(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 532);
	// lwz r4,512(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 512);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x836accc8
	if (!cr6.lt) goto loc_836ACCC8;
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
loc_836ACCC8:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836ACCCC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836acccc
	if (!cr6.eq) goto loc_836ACCCC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r15,296
	ctx.r3.s64 = ctx.r15.s64 + 296;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836ACCF0;
	sub_824208C8(ctx, base);
	// lwz r10,532(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 532);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836acd04
	if (cr6.lt) goto loc_836ACD04;
	// lwz r3,512(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 512);
	// bl 0x82416268
	ctx.lr = 0x836ACD04;
	sub_82416268(ctx, base);
loc_836ACD04:
	// stw r21,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r21.u32);
	// stw r25,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r25.u32);
	// stb r25,512(r1)
	PPC_STORE_U8(ctx.r1.u32 + 512, ctx.r25.u8);
loc_836ACD10:
	// addi r6,r17,-280
	ctx.r6.s64 = ctx.r17.s64 + -280;
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r7,14
	ctx.r7.s64 = 14;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x827a8810
	ctx.lr = 0x836ACD28;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836acd68
	if (!cr6.eq) goto loc_836ACD68;
	// ld r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r26.u32 + 16);
	// addi r10,r1,1520
	ctx.r10.s64 = ctx.r1.s64 + 1520;
	// ld r9,24(r26)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r26.u32 + 24);
	// addi r8,r26,16
	ctx.r8.s64 = ctx.r26.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,1520(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1520);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x836acd60
	if (!cr6.eq) goto loc_836ACD60;
	// ld r11,1528(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1528);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836acd64
	goto loc_836ACD64;
loc_836ACD60:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_836ACD64:
	// stw r11,324(r15)
	PPC_STORE_U32(ctx.r15.u32 + 324, ctx.r11.u32);
loc_836ACD68:
	// addi r6,r17,-264
	ctx.r6.s64 = ctx.r17.s64 + -264;
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r7,15
	ctx.r7.s64 = 15;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x827a8810
	ctx.lr = 0x836ACD80;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836acdc0
	if (!cr6.eq) goto loc_836ACDC0;
	// ld r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r26.u32 + 16);
	// addi r10,r1,1392
	ctx.r10.s64 = ctx.r1.s64 + 1392;
	// ld r9,24(r26)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r26.u32 + 24);
	// addi r8,r26,16
	ctx.r8.s64 = ctx.r26.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,1392(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1392);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x836acdb8
	if (!cr6.eq) goto loc_836ACDB8;
	// ld r11,1400(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1400);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836acdbc
	goto loc_836ACDBC;
loc_836ACDB8:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_836ACDBC:
	// stw r11,328(r15)
	PPC_STORE_U32(ctx.r15.u32 + 328, ctx.r11.u32);
loc_836ACDC0:
	// addi r6,r17,-248
	ctx.r6.s64 = ctx.r17.s64 + -248;
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r7,26
	ctx.r7.s64 = 26;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x827a8810
	ctx.lr = 0x836ACDD8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836ace18
	if (!cr6.eq) goto loc_836ACE18;
	// ld r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r26.u32 + 16);
	// addi r10,r1,1648
	ctx.r10.s64 = ctx.r1.s64 + 1648;
	// ld r9,24(r26)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r26.u32 + 24);
	// addi r8,r26,16
	ctx.r8.s64 = ctx.r26.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,1648(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1648);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x836ace10
	if (!cr6.eq) goto loc_836ACE10;
	// ld r11,1656(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1656);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836ace14
	goto loc_836ACE14;
loc_836ACE10:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_836ACE14:
	// stw r11,332(r15)
	PPC_STORE_U32(ctx.r15.u32 + 332, ctx.r11.u32);
loc_836ACE18:
	// addi r6,r17,-220
	ctx.r6.s64 = ctx.r17.s64 + -220;
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r7,15
	ctx.r7.s64 = 15;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x827a8810
	ctx.lr = 0x836ACE30;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836ace70
	if (!cr6.eq) goto loc_836ACE70;
	// ld r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r26.u32 + 16);
	// addi r10,r1,1168
	ctx.r10.s64 = ctx.r1.s64 + 1168;
	// ld r9,24(r26)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r26.u32 + 24);
	// addi r8,r26,16
	ctx.r8.s64 = ctx.r26.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,1168(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1168);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x836ace68
	if (!cr6.eq) goto loc_836ACE68;
	// ld r11,1176(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1176);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836ace6c
	goto loc_836ACE6C;
loc_836ACE68:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_836ACE6C:
	// stw r11,336(r15)
	PPC_STORE_U32(ctx.r15.u32 + 336, ctx.r11.u32);
loc_836ACE70:
	// addi r6,r17,-204
	ctx.r6.s64 = ctx.r17.s64 + -204;
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r7,12
	ctx.r7.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x827a8810
	ctx.lr = 0x836ACE88;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836ad0f8
	if (!cr6.eq) goto loc_836AD0F8;
	// stw r25,1072(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1072, ctx.r25.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r25,1088(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1088, ctx.r25.u32);
	// addi r3,r1,1072
	ctx.r3.s64 = ctx.r1.s64 + 1072;
	// lwz r5,24(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// lwz r4,28(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	// bl 0x83691bb8
	ctx.lr = 0x836ACEAC;
	sub_83691BB8(ctx, base);
	// lwz r10,1080(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1080);
	// lwz r11,1084(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1084);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x836ad0dc
	if (!cr6.lt) goto loc_836AD0DC;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
loc_836ACED8:
	// stw r21,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r21.u32);
	// addi r11,r1,1184
	ctx.r11.s64 = ctx.r1.s64 + 1184;
	// stw r25,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r25.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stb r25,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r25.u8);
	// addi r10,r31,-16
	ctx.r10.s64 = ctx.r31.s64 + -16;
	// ld r9,-16(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + -16);
	// ld r8,-8(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + -8);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r4,1196(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1196);
	// lwz r5,1192(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1192);
	// bl 0x82472fc0
	ctx.lr = 0x836ACF0C;
	sub_82472FC0(ctx, base);
	// addi r6,r17,-188
	ctx.r6.s64 = ctx.r17.s64 + -188;
	// lwz r5,224(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// li r7,9
	ctx.r7.s64 = 9;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x827a8810
	ctx.lr = 0x836ACF24;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836acf60
	if (!cr6.eq) goto loc_836ACF60;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,1216
	ctx.r10.s64 = ctx.r1.s64 + 1216;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,1216(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1216);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x836acf58
	if (!cr6.eq) goto loc_836ACF58;
	// ld r11,1224(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1224);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836acf5c
	goto loc_836ACF5C;
loc_836ACF58:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_836ACF5C:
	// stw r11,340(r15)
	PPC_STORE_U32(ctx.r15.u32 + 340, ctx.r11.u32);
loc_836ACF60:
	// addi r6,r17,-176
	ctx.r6.s64 = ctx.r17.s64 + -176;
	// lwz r5,224(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// li r7,10
	ctx.r7.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x827a8810
	ctx.lr = 0x836ACF78;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836acfb4
	if (!cr6.eq) goto loc_836ACFB4;
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// addi r10,r1,1248
	ctx.r10.s64 = ctx.r1.s64 + 1248;
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// lwz r8,1248(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1248);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x836acfac
	if (!cr6.eq) goto loc_836ACFAC;
	// ld r11,1256(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1256);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836acfb0
	goto loc_836ACFB0;
loc_836ACFAC:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_836ACFB0:
	// stw r11,344(r15)
	PPC_STORE_U32(ctx.r15.u32 + 344, ctx.r11.u32);
loc_836ACFB4:
	// addi r6,r17,-164
	ctx.r6.s64 = ctx.r17.s64 + -164;
	// lwz r5,224(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// li r7,10
	ctx.r7.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x827a8810
	ctx.lr = 0x836ACFCC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836ad008
	if (!cr6.eq) goto loc_836AD008;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,1280
	ctx.r10.s64 = ctx.r1.s64 + 1280;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,1280(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1280);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x836ad000
	if (!cr6.eq) goto loc_836AD000;
	// ld r11,1288(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1288);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836ad004
	goto loc_836AD004;
loc_836AD000:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_836AD004:
	// stw r11,348(r15)
	PPC_STORE_U32(ctx.r15.u32 + 348, ctx.r11.u32);
loc_836AD008:
	// addi r6,r17,-152
	ctx.r6.s64 = ctx.r17.s64 + -152;
	// lwz r5,224(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// li r7,9
	ctx.r7.s64 = 9;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x827a8810
	ctx.lr = 0x836AD020;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836ad05c
	if (!cr6.eq) goto loc_836AD05C;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,1312
	ctx.r10.s64 = ctx.r1.s64 + 1312;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,1312(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1312);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x836ad054
	if (!cr6.eq) goto loc_836AD054;
	// ld r11,1320(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1320);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836ad058
	goto loc_836AD058;
loc_836AD054:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_836AD058:
	// stw r11,352(r15)
	PPC_STORE_U32(ctx.r15.u32 + 352, ctx.r11.u32);
loc_836AD05C:
	// addi r6,r17,-140
	ctx.r6.s64 = ctx.r17.s64 + -140;
	// lwz r5,224(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x827a8810
	ctx.lr = 0x836AD074;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836ad0b0
	if (!cr6.eq) goto loc_836AD0B0;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,1344
	ctx.r10.s64 = ctx.r1.s64 + 1344;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,1344(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1344);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x836ad0a8
	if (!cr6.eq) goto loc_836AD0A8;
	// ld r11,1352(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1352);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836ad0ac
	goto loc_836AD0AC;
loc_836AD0A8:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_836AD0AC:
	// stw r11,356(r15)
	PPC_STORE_U32(ctx.r15.u32 + 356, ctx.r11.u32);
loc_836AD0B0:
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836ad0c4
	if (cr6.lt) goto loc_836AD0C4;
	// lwz r3,208(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x82416268
	ctx.lr = 0x836AD0C4;
	sub_82416268(ctx, base);
loc_836AD0C4:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r21,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r21.u32);
	// stw r25,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r25.u32);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// stb r25,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r25.u8);
	// bne 0x836aced8
	if (!cr0.eq) goto loc_836ACED8;
loc_836AD0DC:
	// lwz r31,1088(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1088);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x836ad0f8
	if (cr6.eq) goto loc_836AD0F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x836AD0F0;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x836AD0F8;
	sub_82416268(ctx, base);
loc_836AD0F8:
	// addi r6,r17,-132
	ctx.r6.s64 = ctx.r17.s64 + -132;
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r7,18
	ctx.r7.s64 = 18;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x827a8810
	ctx.lr = 0x836AD110;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836ad73c
	if (!cr6.eq) goto loc_836AD73C;
	// lwz r11,304(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// addi r28,r15,360
	ctx.r28.s64 = ctx.r15.s64 + 360;
	// li r10,8
	ctx.r10.s64 = 8;
	// li r9,156
	ctx.r9.s64 = 156;
	// stw r28,676(r1)
	PPC_STORE_U32(ctx.r1.u32 + 676, ctx.r28.u32);
	// addi r31,r28,8
	ctx.r31.s64 = ctx.r28.s64 + 8;
	// stw r10,684(r1)
	PPC_STORE_U32(ctx.r1.u32 + 684, ctx.r10.u32);
	// addi r30,r28,4
	ctx.r30.s64 = ctx.r28.s64 + 4;
	// stw r9,688(r1)
	PPC_STORE_U32(ctx.r1.u32 + 688, ctx.r9.u32);
	// stw r31,672(r1)
	PPC_STORE_U32(ctx.r1.u32 + 672, ctx.r31.u32);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// stw r30,680(r1)
	PPC_STORE_U32(ctx.r1.u32 + 680, ctx.r30.u32);
	// bl 0x8247b7d8
	ctx.lr = 0x836AD154;
	sub_8247B7D8(ctx, base);
	// lwz r3,368(r15)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r15.u32 + 368);
	// stw r25,360(r15)
	PPC_STORE_U32(ctx.r15.u32 + 360, ctx.r25.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x836ad174
	if (cr6.eq) goto loc_836AD174;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// bl 0x8247b268
	ctx.lr = 0x836AD16C;
	sub_8247B268(ctx, base);
	// stw r25,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r25.u32);
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
loc_836AD174:
	// stw r18,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r18.u32);
	// lwz r10,24(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// lwz r11,28(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x836ad73c
	if (!cr6.lt) goto loc_836AD73C;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r29,r11,12
	ctx.r29.s64 = ctx.r11.s64 + 12;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// addi r27,r11,1
	ctx.r27.s64 = ctx.r11.s64 + 1;
loc_836AD1A4:
	// addi r3,r1,1664
	ctx.r3.s64 = ctx.r1.s64 + 1664;
	// bl 0x8362ae40
	ctx.lr = 0x836AD1AC;
	sub_8362AE40(ctx, base);
	// stw r25,1120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1120, ctx.r25.u32);
	// stw r25,1136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1136, ctx.r25.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,1120
	ctx.r3.s64 = ctx.r1.s64 + 1120;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r5,-4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// bl 0x83691bb8
	ctx.lr = 0x836AD1C8;
	sub_83691BB8(ctx, base);
	// lwz r10,1128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1128);
	// lwz r11,1132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1132);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x836ad700
	if (!cr6.lt) goto loc_836AD700;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
loc_836AD1F4:
	// stw r21,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r21.u32);
	// addi r11,r1,1376
	ctx.r11.s64 = ctx.r1.s64 + 1376;
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r25,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r25.u8);
	// addi r10,r31,-16
	ctx.r10.s64 = ctx.r31.s64 + -16;
	// ld r8,-8(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + -8);
	// ld r9,-16(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + -16);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r5,1384(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1384);
	// lwz r4,1388(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1388);
	// bl 0x82472fc0
	ctx.lr = 0x836AD228;
	sub_82472FC0(ctx, base);
	// addi r6,r17,-112
	ctx.r6.s64 = ctx.r17.s64 + -112;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,14
	ctx.r7.s64 = 14;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836AD240;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836ad27c
	if (!cr6.eq) goto loc_836AD27C;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,1408
	ctx.r10.s64 = ctx.r1.s64 + 1408;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,1408(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1408);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x836ad274
	if (!cr6.eq) goto loc_836AD274;
	// ld r11,1416(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1416);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836ad278
	goto loc_836AD278;
loc_836AD274:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_836AD278:
	// stw r11,1664(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1664, ctx.r11.u32);
loc_836AD27C:
	// addi r6,r17,-96
	ctx.r6.s64 = ctx.r17.s64 + -96;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,13
	ctx.r7.s64 = 13;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836AD294;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836ad2d0
	if (!cr6.eq) goto loc_836AD2D0;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,1152
	ctx.r10.s64 = ctx.r1.s64 + 1152;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,1152(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1152);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x836ad2c8
	if (!cr6.eq) goto loc_836AD2C8;
	// ld r11,1160(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1160);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836ad2cc
	goto loc_836AD2CC;
loc_836AD2C8:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_836AD2CC:
	// stw r11,1668(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1668, ctx.r11.u32);
loc_836AD2D0:
	// addi r6,r17,-80
	ctx.r6.s64 = ctx.r17.s64 + -80;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,10
	ctx.r7.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836AD2E8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836ad324
	if (!cr6.eq) goto loc_836AD324;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,1472
	ctx.r10.s64 = ctx.r1.s64 + 1472;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,1472(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1472);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x836ad31c
	if (!cr6.eq) goto loc_836AD31C;
	// ld r11,1480(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1480);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836ad320
	goto loc_836AD320;
loc_836AD31C:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_836AD320:
	// stw r11,1672(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1672, ctx.r11.u32);
loc_836AD324:
	// addi r6,r17,-68
	ctx.r6.s64 = ctx.r17.s64 + -68;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,10
	ctx.r7.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836AD33C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836ad378
	if (!cr6.eq) goto loc_836AD378;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,1504
	ctx.r10.s64 = ctx.r1.s64 + 1504;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,1504(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1504);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x836ad370
	if (!cr6.eq) goto loc_836AD370;
	// ld r11,1512(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1512);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836ad374
	goto loc_836AD374;
loc_836AD370:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_836AD374:
	// stw r11,1676(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1676, ctx.r11.u32);
loc_836AD378:
	// addi r6,r17,-56
	ctx.r6.s64 = ctx.r17.s64 + -56;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,10
	ctx.r7.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836AD390;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836ad424
	if (!cr6.eq) goto loc_836AD424;
	// stw r21,596(r1)
	PPC_STORE_U32(ctx.r1.u32 + 596, ctx.r21.u32);
	// addi r11,r1,1536
	ctx.r11.s64 = ctx.r1.s64 + 1536;
	// stw r25,592(r1)
	PPC_STORE_U32(ctx.r1.u32 + 592, ctx.r25.u32);
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// stb r25,576(r1)
	PPC_STORE_U8(ctx.r1.u32 + 576, ctx.r25.u8);
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// lwz r5,1544(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1544);
	// lwz r4,1548(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1548);
	// bl 0x82472fc0
	ctx.lr = 0x836AD3C8;
	sub_82472FC0(ctx, base);
	// lwz r8,596(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 596);
	// lwz r4,576(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 576);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x836ad3dc
	if (!cr6.lt) goto loc_836AD3DC;
	// addi r4,r1,576
	ctx.r4.s64 = ctx.r1.s64 + 576;
loc_836AD3DC:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836AD3E0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836ad3e0
	if (!cr6.eq) goto loc_836AD3E0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,1680
	ctx.r3.s64 = ctx.r1.s64 + 1680;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836AD404;
	sub_824208C8(ctx, base);
	// lwz r10,596(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 596);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836ad418
	if (cr6.lt) goto loc_836AD418;
	// lwz r3,576(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 576);
	// bl 0x82416268
	ctx.lr = 0x836AD418;
	sub_82416268(ctx, base);
loc_836AD418:
	// stw r21,596(r1)
	PPC_STORE_U32(ctx.r1.u32 + 596, ctx.r21.u32);
	// stw r25,592(r1)
	PPC_STORE_U32(ctx.r1.u32 + 592, ctx.r25.u32);
	// stb r25,576(r1)
	PPC_STORE_U8(ctx.r1.u32 + 576, ctx.r25.u8);
loc_836AD424:
	// addi r6,r17,-44
	ctx.r6.s64 = ctx.r17.s64 + -44;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,10
	ctx.r7.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836AD43C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836ad4d0
	if (!cr6.eq) goto loc_836AD4D0;
	// stw r21,660(r1)
	PPC_STORE_U32(ctx.r1.u32 + 660, ctx.r21.u32);
	// addi r11,r1,1568
	ctx.r11.s64 = ctx.r1.s64 + 1568;
	// stw r25,656(r1)
	PPC_STORE_U32(ctx.r1.u32 + 656, ctx.r25.u32);
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// stb r25,640(r1)
	PPC_STORE_U8(ctx.r1.u32 + 640, ctx.r25.u8);
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,1576(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1576);
	// lwz r4,1580(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1580);
	// bl 0x82472fc0
	ctx.lr = 0x836AD474;
	sub_82472FC0(ctx, base);
	// lwz r8,660(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 660);
	// lwz r4,640(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 640);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x836ad488
	if (!cr6.lt) goto loc_836AD488;
	// addi r4,r1,640
	ctx.r4.s64 = ctx.r1.s64 + 640;
loc_836AD488:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836AD48C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836ad48c
	if (!cr6.eq) goto loc_836AD48C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,1708
	ctx.r3.s64 = ctx.r1.s64 + 1708;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836AD4B0;
	sub_824208C8(ctx, base);
	// lwz r10,660(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 660);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836ad4c4
	if (cr6.lt) goto loc_836AD4C4;
	// lwz r3,640(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 640);
	// bl 0x82416268
	ctx.lr = 0x836AD4C4;
	sub_82416268(ctx, base);
loc_836AD4C4:
	// stw r21,660(r1)
	PPC_STORE_U32(ctx.r1.u32 + 660, ctx.r21.u32);
	// stw r25,656(r1)
	PPC_STORE_U32(ctx.r1.u32 + 656, ctx.r25.u32);
	// stb r25,640(r1)
	PPC_STORE_U8(ctx.r1.u32 + 640, ctx.r25.u8);
loc_836AD4D0:
	// addi r6,r17,-32
	ctx.r6.s64 = ctx.r17.s64 + -32;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,17
	ctx.r7.s64 = 17;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836AD4E8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836ad57c
	if (!cr6.eq) goto loc_836AD57C;
	// stw r21,628(r1)
	PPC_STORE_U32(ctx.r1.u32 + 628, ctx.r21.u32);
	// addi r11,r1,1600
	ctx.r11.s64 = ctx.r1.s64 + 1600;
	// stw r25,624(r1)
	PPC_STORE_U32(ctx.r1.u32 + 624, ctx.r25.u32);
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// stb r25,608(r1)
	PPC_STORE_U8(ctx.r1.u32 + 608, ctx.r25.u8);
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,1608(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1608);
	// lwz r4,1612(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1612);
	// bl 0x82472fc0
	ctx.lr = 0x836AD520;
	sub_82472FC0(ctx, base);
	// lwz r8,628(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 628);
	// lwz r4,608(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 608);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x836ad534
	if (!cr6.lt) goto loc_836AD534;
	// addi r4,r1,608
	ctx.r4.s64 = ctx.r1.s64 + 608;
loc_836AD534:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836AD538:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836ad538
	if (!cr6.eq) goto loc_836AD538;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,1736
	ctx.r3.s64 = ctx.r1.s64 + 1736;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836AD55C;
	sub_824208C8(ctx, base);
	// lwz r10,628(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 628);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836ad570
	if (cr6.lt) goto loc_836AD570;
	// lwz r3,608(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 608);
	// bl 0x82416268
	ctx.lr = 0x836AD570;
	sub_82416268(ctx, base);
loc_836AD570:
	// stw r21,628(r1)
	PPC_STORE_U32(ctx.r1.u32 + 628, ctx.r21.u32);
	// stw r25,624(r1)
	PPC_STORE_U32(ctx.r1.u32 + 624, ctx.r25.u32);
	// stb r25,608(r1)
	PPC_STORE_U8(ctx.r1.u32 + 608, ctx.r25.u8);
loc_836AD57C:
	// addi r6,r17,-12
	ctx.r6.s64 = ctx.r17.s64 + -12;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836AD594;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836ad628
	if (!cr6.eq) goto loc_836AD628;
	// stw r21,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r21.u32);
	// addi r11,r1,1632
	ctx.r11.s64 = ctx.r1.s64 + 1632;
	// stw r25,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r25.u32);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// stb r25,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r25.u8);
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,1640(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1640);
	// lwz r4,1644(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1644);
	// bl 0x82472fc0
	ctx.lr = 0x836AD5CC;
	sub_82472FC0(ctx, base);
	// lwz r8,436(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// lwz r4,416(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x836ad5e0
	if (!cr6.lt) goto loc_836AD5E0;
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
loc_836AD5E0:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836AD5E4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836ad5e4
	if (!cr6.eq) goto loc_836AD5E4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,1764
	ctx.r3.s64 = ctx.r1.s64 + 1764;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836AD608;
	sub_824208C8(ctx, base);
	// lwz r10,436(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836ad61c
	if (cr6.lt) goto loc_836AD61C;
	// lwz r3,416(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// bl 0x82416268
	ctx.lr = 0x836AD61C;
	sub_82416268(ctx, base);
loc_836AD61C:
	// stw r21,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r21.u32);
	// stw r25,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r25.u32);
	// stb r25,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r25.u8);
loc_836AD628:
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,15
	ctx.r7.s64 = 15;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836AD640;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836ad6d4
	if (!cr6.eq) goto loc_836AD6D4;
	// stw r21,564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 564, ctx.r21.u32);
	// addi r11,r1,1424
	ctx.r11.s64 = ctx.r1.s64 + 1424;
	// stw r25,560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 560, ctx.r25.u32);
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// stb r25,544(r1)
	PPC_STORE_U8(ctx.r1.u32 + 544, ctx.r25.u8);
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,1432(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1432);
	// lwz r4,1436(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1436);
	// bl 0x82472fc0
	ctx.lr = 0x836AD678;
	sub_82472FC0(ctx, base);
	// lwz r8,564(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 564);
	// lwz r4,544(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 544);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x836ad68c
	if (!cr6.lt) goto loc_836AD68C;
	// addi r4,r1,544
	ctx.r4.s64 = ctx.r1.s64 + 544;
loc_836AD68C:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836AD690:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836ad690
	if (!cr6.eq) goto loc_836AD690;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,1792
	ctx.r3.s64 = ctx.r1.s64 + 1792;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836AD6B4;
	sub_824208C8(ctx, base);
	// lwz r10,564(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 564);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836ad6c8
	if (cr6.lt) goto loc_836AD6C8;
	// lwz r3,544(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 544);
	// bl 0x82416268
	ctx.lr = 0x836AD6C8;
	sub_82416268(ctx, base);
loc_836AD6C8:
	// stw r21,564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 564, ctx.r21.u32);
	// stw r25,560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 560, ctx.r25.u32);
	// stb r25,544(r1)
	PPC_STORE_U8(ctx.r1.u32 + 544, ctx.r25.u8);
loc_836AD6D4:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836ad6e8
	if (cr6.lt) goto loc_836AD6E8;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82416268
	ctx.lr = 0x836AD6E8;
	sub_82416268(ctx, base);
loc_836AD6E8:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r21,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r21.u32);
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// stb r25,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r25.u8);
	// bne 0x836ad1f4
	if (!cr0.eq) goto loc_836AD1F4;
loc_836AD700:
	// addi r4,r1,1664
	ctx.r4.s64 = ctx.r1.s64 + 1664;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8362adb8
	ctx.lr = 0x836AD70C;
	sub_8362ADB8(ctx, base);
	// lwz r31,1136(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1136);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x836ad728
	if (cr6.eq) goto loc_836AD728;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x836AD720;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x836AD728;
	sub_82416268(ctx, base);
loc_836AD728:
	// addi r3,r1,1664
	ctx.r3.s64 = ctx.r1.s64 + 1664;
	// bl 0x82e35af0
	ctx.lr = 0x836AD730;
	sub_82E35AF0(ctx, base);
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// bne 0x836ad1a4
	if (!cr0.eq) goto loc_836AD1A4;
loc_836AD73C:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836ad750
	if (cr6.lt) goto loc_836AD750;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82416268
	ctx.lr = 0x836AD750;
	sub_82416268(ctx, base);
loc_836AD750:
	// addi r26,r26,32
	ctx.r26.s64 = ctx.r26.s64 + 32;
	// stw r21,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r21.u32);
	// stw r25,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r25.u32);
	// cmplw cr6,r26,r24
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r24.u32, xer);
	// stb r25,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r25.u8);
	// blt cr6,0x836acc30
	if (cr6.lt) goto loc_836ACC30;
loc_836AD768:
	// lwz r31,960(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 960);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x836ad784
	if (cr6.eq) goto loc_836AD784;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x836AD77C;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x836AD784;
	sub_82416268(ctx, base);
loc_836AD784:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836ad798
	if (cr6.lt) goto loc_836AD798;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82416268
	ctx.lr = 0x836AD798;
	sub_82416268(ctx, base);
loc_836AD798:
	// lwz r11,300(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// addi r14,r14,32
	ctx.r14.s64 = ctx.r14.s64 + 32;
	// stw r21,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r21.u32);
	// stw r25,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r25.u32);
	// cmplw cr6,r14,r11
	cr6.compare<uint32_t>(ctx.r14.u32, ctx.r11.u32, xer);
	// stb r25,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r25.u8);
	// blt cr6,0x836ac134
	if (cr6.lt) goto loc_836AC134;
loc_836AD7B4:
	// lwz r31,1056(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1056);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x836ad7d0
	if (cr6.eq) goto loc_836AD7D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x836AD7C8;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x836AD7D0;
	sub_82416268(ctx, base);
loc_836AD7D0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1984
	ctx.r1.s64 = ctx.r1.s64 + 1984;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836AD7DC"))) PPC_WEAK_FUNC(sub_836AD7DC);
PPC_FUNC_IMPL(__imp__sub_836AD7DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836AD7E0"))) PPC_WEAK_FUNC(sub_836AD7E0);
PPC_FUNC_IMPL(__imp__sub_836AD7E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x836AD7E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d95768
	ctx.lr = 0x836AD7F4;
	sub_82D95768(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r29,r11,-7064
	ctx.r29.s64 = ctx.r11.s64 + -7064;
	// li r5,21
	ctx.r5.s64 = 21;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824208c8
	ctx.lr = 0x836AD80C;
	sub_824208C8(ctx, base);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// addi r7,r10,-6388
	ctx.r7.s64 = ctx.r10.s64 + -6388;
	// addi r5,r8,-6404
	ctx.r5.s64 = ctx.r8.s64 + -6404;
	// addi r6,r9,-6400
	ctx.r6.s64 = ctx.r9.s64 + -6400;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r5,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r5.u32);
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r6,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r6.u32);
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// stw r28,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r28.u32);
	// addi r4,r29,24
	ctx.r4.s64 = ctx.r29.s64 + 24;
	// stb r30,316(r31)
	PPC_STORE_U8(ctx.r31.u32 + 316, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836AD854;
	sub_824208C8(ctx, base);
	// stw r28,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r28.u32);
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// stb r30,344(r31)
	PPC_STORE_U8(ctx.r31.u32 + 344, ctx.r30.u8);
	// addi r4,r29,40
	ctx.r4.s64 = ctx.r29.s64 + 40;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836AD870;
	sub_824208C8(ctx, base);
	// stw r30,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r30.u32);
	// stw r28,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r28.u32);
	// addi r3,r31,376
	ctx.r3.s64 = ctx.r31.s64 + 376;
	// stw r30,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r30.u32);
	// addi r4,r29,56
	ctx.r4.s64 = ctx.r29.s64 + 56;
	// stb r30,376(r31)
	PPC_STORE_U8(ctx.r31.u32 + 376, ctx.r30.u8);
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x824208c8
	ctx.lr = 0x836AD890;
	sub_824208C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836AD89C"))) PPC_WEAK_FUNC(sub_836AD89C);
PPC_FUNC_IMPL(__imp__sub_836AD89C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836AD8A0"))) PPC_WEAK_FUNC(sub_836AD8A0);
PPC_FUNC_IMPL(__imp__sub_836AD8A0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x836ad968
	sub_836AD968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836AD8A8"))) PPC_WEAK_FUNC(sub_836AD8A8);
PPC_FUNC_IMPL(__imp__sub_836AD8A8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x836ad968
	sub_836AD968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836AD8B0"))) PPC_WEAK_FUNC(sub_836AD8B0);
PPC_FUNC_IMPL(__imp__sub_836AD8B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x836AD8B8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// addi r8,r11,-6388
	ctx.r8.s64 = ctx.r11.s64 + -6388;
	// addi r7,r10,-6400
	ctx.r7.s64 = ctx.r10.s64 + -6400;
	// addi r6,r9,-6404
	ctx.r6.s64 = ctx.r9.s64 + -6404;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r6,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r6.u32);
	// addi r29,r3,376
	ctx.r29.s64 = ctx.r3.s64 + 376;
	// lwz r5,396(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 396);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x836ad8fc
	if (cr6.lt) goto loc_836AD8FC;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836AD8FC;
	sub_8386D088(ctx, base);
loc_836AD8FC:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// addi r31,r28,344
	ctx.r31.s64 = ctx.r28.s64 + 344;
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// stb r30,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r30.u8);
	// lwz r11,364(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 364);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836ad928
	if (cr6.lt) goto loc_836AD928;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836AD928;
	sub_8386D088(ctx, base);
loc_836AD928:
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// addi r29,r28,316
	ctx.r29.s64 = ctx.r28.s64 + 316;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// lwz r11,336(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 336);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836ad94c
	if (cr6.lt) goto loc_836AD94C;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836AD94C;
	sub_8386D088(ctx, base);
loc_836AD94C:
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// stb r30,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r30.u8);
	// bl 0x82b6a590
	ctx.lr = 0x836AD960;
	sub_82B6A590(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836AD968"))) PPC_WEAK_FUNC(sub_836AD968);
PPC_FUNC_IMPL(__imp__sub_836AD968) {
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
	// bl 0x836ad8b0
	ctx.lr = 0x836AD988;
	sub_836AD8B0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836ad9a8
	if (cr6.eq) goto loc_836AD9A8;
	// bl 0x82595188
	ctx.lr = 0x836AD998;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x836AD9A8;
	sub_825952B8(ctx, base);
loc_836AD9A8:
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

__attribute__((alias("__imp__sub_836AD9C4"))) PPC_WEAK_FUNC(sub_836AD9C4);
PPC_FUNC_IMPL(__imp__sub_836AD9C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836AD9C8"))) PPC_WEAK_FUNC(sub_836AD9C8);
PPC_FUNC_IMPL(__imp__sub_836AD9C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x836AD9D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82eaf8d8
	ctx.lr = 0x836AD9DC;
	sub_82EAF8D8(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r29,r11,-7064
	ctx.r29.s64 = ctx.r11.s64 + -7064;
	// li r5,21
	ctx.r5.s64 = 21;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824208c8
	ctx.lr = 0x836AD9F4;
	sub_824208C8(ctx, base);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// lis r7,-32216
	ctx.r7.s64 = -2111307776;
	// addi r5,r9,-6364
	ctx.r5.s64 = ctx.r9.s64 + -6364;
	// addi r4,r8,-6368
	ctx.r4.s64 = ctx.r8.s64 + -6368;
	// addi r3,r7,-6372
	ctx.r3.s64 = ctx.r7.s64 + -6372;
	// stw r5,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r5.u32);
	// addi r6,r10,-6352
	ctx.r6.s64 = ctx.r10.s64 + -6352;
	// stw r4,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r4.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r3,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r3.u32);
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// stw r30,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r30.u32);
	// addi r3,r31,348
	ctx.r3.s64 = ctx.r31.s64 + 348;
	// stw r28,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r28.u32);
	// addi r4,r29,112
	ctx.r4.s64 = ctx.r29.s64 + 112;
	// stb r30,348(r31)
	PPC_STORE_U8(ctx.r31.u32 + 348, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836ADA48;
	sub_824208C8(ctx, base);
	// std r30,376(r31)
	PPC_STORE_U64(ctx.r31.u32 + 376, ctx.r30.u64);
	// stw r28,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r28.u32);
	// addi r3,r31,384
	ctx.r3.s64 = ctx.r31.s64 + 384;
	// stw r30,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r30.u32);
	// addi r4,r29,128
	ctx.r4.s64 = ctx.r29.s64 + 128;
	// stb r30,384(r31)
	PPC_STORE_U8(ctx.r31.u32 + 384, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836ADA68;
	sub_824208C8(ctx, base);
	// addi r3,r31,416
	ctx.r3.s64 = ctx.r31.s64 + 416;
	// bl 0x835fe558
	ctx.lr = 0x836ADA70;
	sub_835FE558(ctx, base);
	// addi r3,r31,496
	ctx.r3.s64 = ctx.r31.s64 + 496;
	// bl 0x836abc08
	ctx.lr = 0x836ADA78;
	sub_836ABC08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836ADA84"))) PPC_WEAK_FUNC(sub_836ADA84);
PPC_FUNC_IMPL(__imp__sub_836ADA84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836ADA88"))) PPC_WEAK_FUNC(sub_836ADA88);
PPC_FUNC_IMPL(__imp__sub_836ADA88) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x836adba8
	sub_836ADBA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836ADA90"))) PPC_WEAK_FUNC(sub_836ADA90);
PPC_FUNC_IMPL(__imp__sub_836ADA90) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-312
	ctx.r3.s64 = ctx.r3.s64 + -312;
	// b 0x836adba8
	sub_836ADBA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836ADA98"))) PPC_WEAK_FUNC(sub_836ADA98);
PPC_FUNC_IMPL(__imp__sub_836ADA98) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x836adba8
	sub_836ADBA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836ADAA0"))) PPC_WEAK_FUNC(sub_836ADAA0);
PPC_FUNC_IMPL(__imp__sub_836ADAA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x836ADAA8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// addi r7,r11,-6352
	ctx.r7.s64 = ctx.r11.s64 + -6352;
	// addi r6,r10,-6364
	ctx.r6.s64 = ctx.r10.s64 + -6364;
	// addi r5,r9,-6368
	ctx.r5.s64 = ctx.r9.s64 + -6368;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r8,-6372
	ctx.r4.s64 = ctx.r8.s64 + -6372;
	// stw r6,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r6.u32);
	// stw r5,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r5.u32);
	// addi r28,r3,496
	ctx.r28.s64 = ctx.r3.s64 + 496;
	// stw r4,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r4.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r28,64
	ctx.r3.s64 = ctx.r28.s64 + 64;
	// bl 0x82e359e0
	ctx.lr = 0x836ADAEC;
	sub_82E359E0(ctx, base);
	// lwz r3,516(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 516);
	// cmplwi cr6,r3,16
	cr6.compare<uint32_t>(ctx.r3.u32, 16, xer);
	// blt cr6,0x836adb00
	if (cr6.lt) goto loc_836ADB00;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836ADB00;
	sub_8386D088(ctx, base);
loc_836ADB00:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r30,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r30.u32);
	// addi r31,r29,416
	ctx.r31.s64 = ctx.r29.s64 + 416;
	// stw r27,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r27.u32);
	// stb r30,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r30.u8);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x824238b8
	ctx.lr = 0x836ADB20;
	sub_824238B8(ctx, base);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x824238b8
	ctx.lr = 0x836ADB28;
	sub_824238B8(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x824238b8
	ctx.lr = 0x836ADB30;
	sub_824238B8(ctx, base);
	// lwz r11,436(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 436);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836adb44
	if (cr6.lt) goto loc_836ADB44;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836ADB44;
	sub_8386D088(ctx, base);
loc_836ADB44:
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// addi r28,r29,384
	ctx.r28.s64 = ctx.r29.s64 + 384;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// lwz r11,404(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 404);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836adb68
	if (cr6.lt) goto loc_836ADB68;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836ADB68;
	sub_8386D088(ctx, base);
loc_836ADB68:
	// stw r27,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r27.u32);
	// addi r31,r29,348
	ctx.r31.s64 = ctx.r29.s64 + 348;
	// stw r30,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r30.u32);
	// stb r30,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r30.u8);
	// lwz r11,368(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 368);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836adb8c
	if (cr6.lt) goto loc_836ADB8C;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836ADB8C;
	sub_8386D088(ctx, base);
loc_836ADB8C:
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// bl 0x82eaf978
	ctx.lr = 0x836ADBA0;
	sub_82EAF978(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836ADBA8"))) PPC_WEAK_FUNC(sub_836ADBA8);
PPC_FUNC_IMPL(__imp__sub_836ADBA8) {
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
	// bl 0x836adaa0
	ctx.lr = 0x836ADBC8;
	sub_836ADAA0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836adbe8
	if (cr6.eq) goto loc_836ADBE8;
	// bl 0x82595188
	ctx.lr = 0x836ADBD8;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x836ADBE8;
	sub_825952B8(ctx, base);
loc_836ADBE8:
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

__attribute__((alias("__imp__sub_836ADC04"))) PPC_WEAK_FUNC(sub_836ADC04);
PPC_FUNC_IMPL(__imp__sub_836ADC04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836ADC08"))) PPC_WEAK_FUNC(sub_836ADC08);
PPC_FUNC_IMPL(__imp__sub_836ADC08) {
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
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x836adc74
	if (!cr6.gt) goto loc_836ADC74;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// addi r8,r10,-6024
	ctx.r8.s64 = ctx.r10.s64 + -6024;
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// li r6,36
	ctx.r6.s64 = 36;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// lis r5,11
	ctx.r5.s64 = 720896;
	// stw r6,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8247b270
	ctx.lr = 0x836ADC64;
	sub_8247B270(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_836ADC74:
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

__attribute__((alias("__imp__sub_836ADC88"))) PPC_WEAK_FUNC(sub_836ADC88);
PPC_FUNC_IMPL(__imp__sub_836ADC88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x836ADC90;
	__savegprlr_27(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// rotlwi r8,r31,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r10,133
	ctx.r10.s64 = 133;
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stb r10,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r10.u8);
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// bge cr6,0x836adcd0
	if (!cr6.lt) goto loc_836ADCD0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e745e0
	ctx.lr = 0x836ADCD0;
	sub_82E745E0(ctx, base);
loc_836ADCD0:
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// li r30,15
	ctx.r30.s64 = 15;
	// addi r27,r11,-6196
	ctx.r27.s64 = ctx.r11.s64 + -6196;
	// li r5,5
	ctx.r5.s64 = 5;
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r4,r27,-32
	ctx.r4.s64 = ctx.r27.s64 + -32;
	// stbx r7,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u8);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r6.u32);
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836ADD18;
	sub_82472FC0(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836ADD24;
	sub_82E74C08(ctx, base);
	// lwz r5,308(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x836add38
	if (cr6.lt) goto loc_836ADD38;
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82416268
	ctx.lr = 0x836ADD38;
	sub_82416268(ctx, base);
loc_836ADD38:
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// addi r4,r28,20
	ctx.r4.s64 = ctx.r28.s64 + 20;
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// blt cr6,0x836add58
	if (cr6.lt) goto loc_836ADD58;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836ADD58:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
loc_836ADD68:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836add68
	if (!cr6.eq) goto loc_836ADD68;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836ADD8C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836ADD98;
	sub_82E74C08(ctx, base);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836addac
	if (cr6.lt) goto loc_836ADDAC;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x836ADDAC;
	sub_82416268(ctx, base);
loc_836ADDAC:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// addi r4,r27,-24
	ctx.r4.s64 = ctx.r27.s64 + -24;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836ADDD4;
	sub_82472FC0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836ADDE0;
	sub_82E74C08(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836addf4
	if (cr6.lt) goto loc_836ADDF4;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x836ADDF4;
	sub_82416268(ctx, base);
loc_836ADDF4:
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// lwz r4,48(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// bl 0x82e746c0
	ctx.lr = 0x836ADE0C;
	sub_82E746C0(ctx, base);
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// addi r4,r27,-16
	ctx.r4.s64 = ctx.r27.s64 + -16;
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82472fc0
	ctx.lr = 0x836ADE28;
	sub_82472FC0(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836ADE34;
	sub_82E74C08(ctx, base);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836ade48
	if (cr6.lt) goto loc_836ADE48;
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82416268
	ctx.lr = 0x836ADE48;
	sub_82416268(ctx, base);
loc_836ADE48:
	// lwz r11,136(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 136);
	// addi r4,r28,116
	ctx.r4.s64 = ctx.r28.s64 + 116;
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// blt cr6,0x836ade68
	if (cr6.lt) goto loc_836ADE68;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836ADE68:
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
loc_836ADE78:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836ade78
	if (!cr6.eq) goto loc_836ADE78;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836ADE9C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836ADEA8;
	sub_82E74C08(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836adebc
	if (cr6.lt) goto loc_836ADEBC;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x836ADEBC;
	sub_82416268(ctx, base);
loc_836ADEBC:
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// addi r4,r27,-8
	ctx.r4.s64 = ctx.r27.s64 + -8;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836ADEE4;
	sub_82472FC0(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836ADEF0;
	sub_82E74C08(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836adf04
	if (cr6.lt) goto loc_836ADF04;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82416268
	ctx.lr = 0x836ADF04;
	sub_82416268(ctx, base);
loc_836ADF04:
	// lwz r11,164(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 164);
	// addi r4,r28,144
	ctx.r4.s64 = ctx.r28.s64 + 144;
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// blt cr6,0x836adf24
	if (cr6.lt) goto loc_836ADF24;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836ADF24:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
loc_836ADF34:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836adf34
	if (!cr6.eq) goto loc_836ADF34;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836ADF58;
	sub_82472FC0(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836ADF64;
	sub_82E74C08(ctx, base);
	// lwz r10,276(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836adf78
	if (cr6.lt) goto loc_836ADF78;
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x82416268
	ctx.lr = 0x836ADF78;
	sub_82416268(ctx, base);
loc_836ADF78:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836ADFA0;
	sub_82472FC0(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836ADFAC;
	sub_82E74C08(ctx, base);
	// lwz r11,340(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836adfc0
	if (cr6.lt) goto loc_836ADFC0;
	// lwz r3,320(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x82416268
	ctx.lr = 0x836ADFC0;
	sub_82416268(ctx, base);
loc_836ADFC0:
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// lwz r4,172(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 172);
	// bl 0x82e746c0
	ctx.lr = 0x836ADFD8;
	sub_82E746C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836ADFE4"))) PPC_WEAK_FUNC(sub_836ADFE4);
PPC_FUNC_IMPL(__imp__sub_836ADFE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836ADFE8"))) PPC_WEAK_FUNC(sub_836ADFE8);
PPC_FUNC_IMPL(__imp__sub_836ADFE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x836ADFF0;
	__savegprlr_14(ctx, base);
	// stwu r1,-736(r1)
	ea = -736 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// stw r31,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r31.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r31,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r31.u32);
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x83691bb8
	ctx.lr = 0x836AE018;
	sub_83691BB8(ctx, base);
	// lwz r10,408(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 408);
	// lwz r11,412(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 412);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x836ae6b4
	if (!cr6.lt) goto loc_836AE6B4;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r22,r11,16
	ctx.r22.s64 = ctx.r11.s64 + 16;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// lis r7,11
	ctx.r7.s64 = 720896;
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// li r27,15
	ctx.r27.s64 = 15;
	// li r18,8
	ctx.r18.s64 = 8;
	// li r19,36
	ctx.r19.s64 = 36;
	// ori r16,r7,1
	ctx.r16.u64 = ctx.r7.u64 | 1;
	// addi r21,r11,-6116
	ctx.r21.s64 = ctx.r11.s64 + -6116;
	// addi r14,r10,27936
	ctx.r14.s64 = ctx.r10.s64 + 27936;
	// addi r17,r9,8980
	ctx.r17.s64 = ctx.r9.s64 + 8980;
	// addi r20,r8,-6024
	ctx.r20.s64 = ctx.r8.s64 + -6024;
loc_836AE07C:
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// addi r11,r1,512
	ctx.r11.s64 = ctx.r1.s64 + 512;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// addi r10,r22,-16
	ctx.r10.s64 = ctx.r22.s64 + -16;
	// ld r9,-8(r22)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r22.u32 + -8);
	// ld r8,-16(r22)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r22.u32 + -16);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,520(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 520);
	// lwz r4,524(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 524);
	// bl 0x82472fc0
	ctx.lr = 0x836AE0B0;
	sub_82472FC0(ctx, base);
	// addi r6,r21,-76
	ctx.r6.s64 = ctx.r21.s64 + -76;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x836AE0C8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836ae15c
	if (!cr6.eq) goto loc_836AE15C;
	// stw r27,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r27.u32);
	// addi r11,r1,496
	ctx.r11.s64 = ctx.r1.s64 + 496;
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stb r31,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r31.u8);
	// ld r9,8(r22)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r22.u32 + 8);
	// ld r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r22.u32 + 0);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,504(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 504);
	// lwz r4,508(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 508);
	// bl 0x82472fc0
	ctx.lr = 0x836AE100;
	sub_82472FC0(ctx, base);
	// lwz r8,228(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x836ae114
	if (!cr6.lt) goto loc_836AE114;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
loc_836AE114:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836AE118:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836ae118
	if (!cr6.eq) goto loc_836AE118;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r15,20
	ctx.r3.s64 = ctx.r15.s64 + 20;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836AE13C;
	sub_824208C8(ctx, base);
	// lwz r10,228(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836ae150
	if (cr6.lt) goto loc_836AE150;
	// lwz r3,208(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x82416268
	ctx.lr = 0x836AE150;
	sub_82416268(ctx, base);
loc_836AE150:
	// stw r27,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r27.u32);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// stb r31,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r31.u8);
loc_836AE15C:
	// addi r6,r21,-68
	ctx.r6.s64 = ctx.r21.s64 + -68;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x836AE174;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836ae1b0
	if (!cr6.eq) goto loc_836AE1B0;
	// ld r11,8(r22)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r22.u32 + 8);
	// addi r10,r1,528
	ctx.r10.s64 = ctx.r1.s64 + 528;
	// ld r9,0(r22)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r22.u32 + 0);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// lwz r8,528(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 528);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x836ae1a8
	if (!cr6.eq) goto loc_836AE1A8;
	// ld r11,536(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 536);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836ae1ac
	goto loc_836AE1AC;
loc_836AE1A8:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_836AE1AC:
	// stw r11,48(r15)
	PPC_STORE_U32(ctx.r15.u32 + 48, ctx.r11.u32);
loc_836AE1B0:
	// addi r6,r21,-60
	ctx.r6.s64 = ctx.r21.s64 + -60;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x836AE1C8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836ae25c
	if (!cr6.eq) goto loc_836AE25C;
	// stw r27,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r27.u32);
	// addi r11,r1,560
	ctx.r11.s64 = ctx.r1.s64 + 560;
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r31.u32);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// stb r31,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r31.u8);
	// ld r10,8(r22)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r22.u32 + 8);
	// ld r9,0(r22)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r22.u32 + 0);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// lwz r5,568(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 568);
	// lwz r4,572(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 572);
	// bl 0x82472fc0
	ctx.lr = 0x836AE200;
	sub_82472FC0(ctx, base);
	// lwz r8,292(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r4,272(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x836ae214
	if (!cr6.lt) goto loc_836AE214;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
loc_836AE214:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836AE218:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836ae218
	if (!cr6.eq) goto loc_836AE218;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r15,116
	ctx.r3.s64 = ctx.r15.s64 + 116;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836AE23C;
	sub_824208C8(ctx, base);
	// lwz r10,292(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836ae250
	if (cr6.lt) goto loc_836AE250;
	// lwz r3,272(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// bl 0x82416268
	ctx.lr = 0x836AE250;
	sub_82416268(ctx, base);
loc_836AE250:
	// stw r27,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r27.u32);
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r31.u32);
	// stb r31,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r31.u8);
loc_836AE25C:
	// addi r6,r21,-52
	ctx.r6.s64 = ctx.r21.s64 + -52;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,10
	ctx.r7.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x836AE274;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836ae2c4
	if (!cr6.eq) goto loc_836AE2C4;
	// ld r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r22.u32 + 0);
	// addi r10,r1,432
	ctx.r10.s64 = ctx.r1.s64 + 432;
	// ld r9,8(r22)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r22.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r11,432(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 432);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x836ae2a8
	if (!cr6.eq) goto loc_836AE2A8;
	// ld r11,440(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 440);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836ae2c0
	goto loc_836AE2C0;
loc_836AE2A8:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x836ae2bc
	if (!cr6.eq) goto loc_836AE2BC;
	// ld r11,440(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 440);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// b 0x836ae2c0
	goto loc_836AE2C0;
loc_836AE2BC:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_836AE2C0:
	// stw r11,148(r15)
	PPC_STORE_U32(ctx.r15.u32 + 148, ctx.r11.u32);
loc_836AE2C4:
	// addi r6,r21,-40
	ctx.r6.s64 = ctx.r21.s64 + -40;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,13
	ctx.r7.s64 = 13;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x836AE2DC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836ae680
	if (!cr6.eq) goto loc_836AE680;
	// addi r28,r15,152
	ctx.r28.s64 = ctx.r15.s64 + 152;
	// stw r20,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r20.u32);
	// stw r18,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r18.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r26,r28,8
	ctx.r26.s64 = ctx.r28.s64 + 8;
	// stw r28,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r28.u32);
	// addi r24,r28,4
	ctx.r24.s64 = ctx.r28.s64 + 4;
	// stw r19,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r19.u32);
	// stw r26,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r26.u32);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// stw r24,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r24.u32);
	// bl 0x8247b7d8
	ctx.lr = 0x836AE314;
	sub_8247B7D8(ctx, base);
	// lwz r3,160(r15)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r15.u32 + 160);
	// stw r31,152(r15)
	PPC_STORE_U32(ctx.r15.u32 + 152, ctx.r31.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x836ae334
	if (cr6.eq) goto loc_836AE334;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// bl 0x8247b268
	ctx.lr = 0x836AE32C;
	sub_8247B268(ctx, base);
	// stw r31,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r31.u32);
	// stw r31,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r31.u32);
loc_836AE334:
	// stw r17,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r17.u32);
	// lwz r11,8(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,12(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x836ae680
	if (!cr6.lt) goto loc_836AE680;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r25,r11,12
	ctx.r25.s64 = ctx.r11.s64 + 12;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// addi r23,r11,1
	ctx.r23.s64 = ctx.r11.s64 + 1;
loc_836AE364:
	// stw r27,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r27.u32);
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x824208c8
	ctx.lr = 0x836AE380;
	sub_824208C8(ctx, base);
	// stw r31,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r31.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// stw r31,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r31.u32);
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r5,-4(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + -4);
	// bl 0x83691bb8
	ctx.lr = 0x836AE3A4;
	sub_83691BB8(ctx, base);
	// lwz r10,376(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 376);
	// lwz r11,380(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x836ae584
	if (!cr6.lt) goto loc_836AE584;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r30,r11,16
	ctx.r30.s64 = ctx.r11.s64 + 16;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
loc_836AE3D0:
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r27.u32);
	// addi r11,r1,480
	ctx.r11.s64 = ctx.r1.s64 + 480;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// addi r10,r30,-16
	ctx.r10.s64 = ctx.r30.s64 + -16;
	// ld r9,-16(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + -16);
	// ld r8,-8(r30)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r30.u32 + -8);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r4,492(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 492);
	// lwz r5,488(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 488);
	// bl 0x82472fc0
	ctx.lr = 0x836AE404;
	sub_82472FC0(ctx, base);
	// addi r6,r21,-24
	ctx.r6.s64 = ctx.r21.s64 + -24;
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r7,13
	ctx.r7.s64 = 13;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x827a8810
	ctx.lr = 0x836AE41C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836ae4b0
	if (!cr6.eq) goto loc_836AE4B0;
	// stw r27,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r27.u32);
	// addi r11,r1,544
	ctx.r11.s64 = ctx.r1.s64 + 544;
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stb r31,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r31.u8);
	// ld r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// ld r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,552(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 552);
	// lwz r4,556(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 556);
	// bl 0x82472fc0
	ctx.lr = 0x836AE454;
	sub_82472FC0(ctx, base);
	// lwz r8,260(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x836ae468
	if (!cr6.lt) goto loc_836AE468;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
loc_836AE468:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836AE46C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836ae46c
	if (!cr6.eq) goto loc_836AE46C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836AE490;
	sub_824208C8(ctx, base);
	// lwz r10,260(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836ae4a4
	if (cr6.lt) goto loc_836AE4A4;
	// lwz r3,240(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x82416268
	ctx.lr = 0x836AE4A4;
	sub_82416268(ctx, base);
loc_836AE4A4:
	// stw r27,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r27.u32);
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// stb r31,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r31.u8);
loc_836AE4B0:
	// addi r6,r21,-8
	ctx.r6.s64 = ctx.r21.s64 + -8;
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x827a8810
	ctx.lr = 0x836AE4C8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836ae504
	if (!cr6.eq) goto loc_836AE504;
	// ld r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// addi r10,r1,448
	ctx.r10.s64 = ctx.r1.s64 + 448;
	// ld r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,448(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x836ae4fc
	if (!cr6.eq) goto loc_836AE4FC;
	// ld r11,456(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 456);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836ae500
	goto loc_836AE500;
loc_836AE4FC:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_836AE500:
	// stw r11,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
loc_836AE504:
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x827a8810
	ctx.lr = 0x836AE51C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836ae558
	if (!cr6.eq) goto loc_836AE558;
	// ld r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// addi r10,r1,464
	ctx.r10.s64 = ctx.r1.s64 + 464;
	// ld r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,464(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 464);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x836ae550
	if (!cr6.eq) goto loc_836AE550;
	// ld r11,472(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 472);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836ae554
	goto loc_836AE554;
loc_836AE550:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_836AE554:
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
loc_836AE558:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836ae56c
	if (cr6.lt) goto loc_836AE56C;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x836AE56C;
	sub_82416268(ctx, base);
loc_836AE56C:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r27.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// bne 0x836ae3d0
	if (!cr0.eq) goto loc_836AE3D0;
loc_836AE584:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x836ae5e0
	if (cr6.lt) goto loc_836AE5E0;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x836ae5d0
	if (!cr6.gt) goto loc_836AE5D0;
	// stw r26,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r26.u32);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// stw r28,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r28.u32);
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// stw r24,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r24.u32);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// stw r18,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r18.u32);
	// stw r19,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r19.u32);
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// bl 0x8247b270
	ctx.lr = 0x836AE5C8;
	sub_8247B270(ctx, base);
	// stw r17,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r17.u32);
	// b 0x836ae5d4
	goto loc_836AE5D4;
loc_836AE5D0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_836AE5D4:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836ae638
	if (cr6.eq) goto loc_836AE638;
loc_836AE5E0:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq 0x836ae62c
	if (cr0.eq) goto loc_836AE62C;
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82420558
	ctx.lr = 0x836AE61C;
	sub_82420558(ctx, base);
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// lwz r10,192(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// stw r10,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r10.u32);
loc_836AE62C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_836AE638:
	// lwz r30,384(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x836ae654
	if (cr6.eq) goto loc_836AE654;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839e56b8
	ctx.lr = 0x836AE64C;
	sub_839E56B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82416268
	ctx.lr = 0x836AE654;
	sub_82416268(ctx, base);
loc_836AE654:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836ae668
	if (cr6.lt) goto loc_836AE668;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x8386d088
	ctx.lr = 0x836AE668;
	sub_8386D088(ctx, base);
loc_836AE668:
	// addic. r23,r23,-1
	xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	cr0.compare<int32_t>(ctx.r23.s32, 0, xer);
	// stw r27,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r27.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// addi r25,r25,16
	ctx.r25.s64 = ctx.r25.s64 + 16;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// bne 0x836ae364
	if (!cr0.eq) goto loc_836AE364;
loc_836AE680:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836ae694
	if (cr6.lt) goto loc_836AE694;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x836AE694;
	sub_82416268(ctx, base);
loc_836AE694:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r22,r22,32
	ctx.r22.s64 = ctx.r22.s64 + 32;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bne 0x836ae07c
	if (!cr0.eq) goto loc_836AE07C;
loc_836AE6B4:
	// lwz r31,416(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x836ae6d0
	if (cr6.eq) goto loc_836AE6D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x836AE6C8;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x836AE6D0;
	sub_82416268(ctx, base);
loc_836AE6D0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836AE6DC"))) PPC_WEAK_FUNC(sub_836AE6DC);
PPC_FUNC_IMPL(__imp__sub_836AE6DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836AE6E0"))) PPC_WEAK_FUNC(sub_836AE6E0);
PPC_FUNC_IMPL(__imp__sub_836AE6E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x836AE6E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d95768
	ctx.lr = 0x836AE6F4;
	sub_82D95768(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r29,r11,-6288
	ctx.r29.s64 = ctx.r11.s64 + -6288;
	// li r5,27
	ctx.r5.s64 = 27;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824208c8
	ctx.lr = 0x836AE70C;
	sub_824208C8(ctx, base);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// addi r7,r10,-5992
	ctx.r7.s64 = ctx.r10.s64 + -5992;
	// addi r5,r8,-6008
	ctx.r5.s64 = ctx.r8.s64 + -6008;
	// addi r6,r9,-6004
	ctx.r6.s64 = ctx.r9.s64 + -6004;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r5,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r5.u32);
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r6,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r6.u32);
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// stw r28,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r28.u32);
	// addi r4,r29,28
	ctx.r4.s64 = ctx.r29.s64 + 28;
	// stb r30,316(r31)
	PPC_STORE_U8(ctx.r31.u32 + 316, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836AE754;
	sub_824208C8(ctx, base);
	// stw r28,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r28.u32);
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// stb r30,344(r31)
	PPC_STORE_U8(ctx.r31.u32 + 344, ctx.r30.u8);
	// addi r4,r29,44
	ctx.r4.s64 = ctx.r29.s64 + 44;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836AE770;
	sub_824208C8(ctx, base);
	// stw r30,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836AE780"))) PPC_WEAK_FUNC(sub_836AE780);
PPC_FUNC_IMPL(__imp__sub_836AE780) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x836ae828
	sub_836AE828(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836AE788"))) PPC_WEAK_FUNC(sub_836AE788);
PPC_FUNC_IMPL(__imp__sub_836AE788) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x836ae828
	sub_836AE828(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836AE790"))) PPC_WEAK_FUNC(sub_836AE790);
PPC_FUNC_IMPL(__imp__sub_836AE790) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x836AE798;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// addi r8,r11,-5992
	ctx.r8.s64 = ctx.r11.s64 + -5992;
	// addi r7,r10,-6004
	ctx.r7.s64 = ctx.r10.s64 + -6004;
	// addi r6,r9,-6008
	ctx.r6.s64 = ctx.r9.s64 + -6008;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r6,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r6.u32);
	// addi r30,r3,344
	ctx.r30.s64 = ctx.r3.s64 + 344;
	// lwz r5,364(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 364);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x836ae7dc
	if (cr6.lt) goto loc_836AE7DC;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836AE7DC;
	sub_8386D088(ctx, base);
loc_836AE7DC:
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r28,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r28.u32);
	// addi r31,r29,316
	ctx.r31.s64 = ctx.r29.s64 + 316;
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// stb r28,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r28.u8);
	// lwz r11,336(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836ae808
	if (cr6.lt) goto loc_836AE808;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836AE808;
	sub_8386D088(ctx, base);
loc_836AE808:
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// bl 0x82b6a590
	ctx.lr = 0x836AE81C;
	sub_82B6A590(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836AE824"))) PPC_WEAK_FUNC(sub_836AE824);
PPC_FUNC_IMPL(__imp__sub_836AE824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836AE828"))) PPC_WEAK_FUNC(sub_836AE828);
PPC_FUNC_IMPL(__imp__sub_836AE828) {
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
	// bl 0x836ae790
	ctx.lr = 0x836AE848;
	sub_836AE790(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836ae868
	if (cr6.eq) goto loc_836AE868;
	// bl 0x82595188
	ctx.lr = 0x836AE858;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x836AE868;
	sub_825952B8(ctx, base);
loc_836AE868:
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

__attribute__((alias("__imp__sub_836AE884"))) PPC_WEAK_FUNC(sub_836AE884);
PPC_FUNC_IMPL(__imp__sub_836AE884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836AE888"))) PPC_WEAK_FUNC(sub_836AE888);
PPC_FUNC_IMPL(__imp__sub_836AE888) {
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
	// bl 0x82eaf8d8
	ctx.lr = 0x836AE8A0;
	sub_82EAF8D8(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r4,r11,-6288
	ctx.r4.s64 = ctx.r11.s64 + -6288;
	// li r5,27
	ctx.r5.s64 = 27;
	// bl 0x824208c8
	ctx.lr = 0x836AE8B4;
	sub_824208C8(ctx, base);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// lis r7,-32216
	ctx.r7.s64 = -2111307776;
	// addi r6,r10,-5956
	ctx.r6.s64 = ctx.r10.s64 + -5956;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r8,-5972
	ctx.r4.s64 = ctx.r8.s64 + -5972;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// addi r5,r9,-5968
	ctx.r5.s64 = ctx.r9.s64 + -5968;
	// stw r11,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r11.u32);
	// addi r10,r7,-5976
	ctx.r10.s64 = ctx.r7.s64 + -5976;
	// stw r4,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r4.u32);
	// stw r5,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r5.u32);
	// addi r3,r31,352
	ctx.r3.s64 = ctx.r31.s64 + 352;
	// stw r10,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r10.u32);
	// li r4,12
	ctx.r4.s64 = 12;
	// stw r11,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r11.u32);
	// stw r11,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r11.u32);
	// std r11,360(r31)
	PPC_STORE_U64(ctx.r31.u32 + 360, ctx.r11.u64);
	// bl 0x836adc08
	ctx.lr = 0x836AE904;
	sub_836ADC08(ctx, base);
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

__attribute__((alias("__imp__sub_836AE91C"))) PPC_WEAK_FUNC(sub_836AE91C);
PPC_FUNC_IMPL(__imp__sub_836AE91C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836AE920"))) PPC_WEAK_FUNC(sub_836AE920);
PPC_FUNC_IMPL(__imp__sub_836AE920) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x836ae938
	sub_836AE938(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836AE928"))) PPC_WEAK_FUNC(sub_836AE928);
PPC_FUNC_IMPL(__imp__sub_836AE928) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x836ae938
	sub_836AE938(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836AE930"))) PPC_WEAK_FUNC(sub_836AE930);
PPC_FUNC_IMPL(__imp__sub_836AE930) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-312
	ctx.r3.s64 = ctx.r3.s64 + -312;
	// b 0x836ae938
	sub_836AE938(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836AE938"))) PPC_WEAK_FUNC(sub_836AE938);
PPC_FUNC_IMPL(__imp__sub_836AE938) {
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
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r7,r11,-5956
	ctx.r7.s64 = ctx.r11.s64 + -5956;
	// addi r6,r10,-5968
	ctx.r6.s64 = ctx.r10.s64 + -5968;
	// addi r5,r9,-5972
	ctx.r5.s64 = ctx.r9.s64 + -5972;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r8,-5976
	ctx.r4.s64 = ctx.r8.s64 + -5976;
	// stw r6,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r6.u32);
	// stw r5,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r5.u32);
	// addi r3,r3,352
	ctx.r3.s64 = ctx.r3.s64 + 352;
	// stw r4,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r4.u32);
	// bl 0x8369f838
	ctx.lr = 0x836AE98C;
	sub_8369F838(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eaf978
	ctx.lr = 0x836AE994;
	sub_82EAF978(ctx, base);
	// clrlwi r3,r30,31
	ctx.r3.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x836ae9b4
	if (cr6.eq) goto loc_836AE9B4;
	// bl 0x82595188
	ctx.lr = 0x836AE9A4;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x836AE9B4;
	sub_825952B8(ctx, base);
loc_836AE9B4:
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

__attribute__((alias("__imp__sub_836AE9D0"))) PPC_WEAK_FUNC(sub_836AE9D0);
PPC_FUNC_IMPL(__imp__sub_836AE9D0) {
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
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x836aea3c
	if (!cr6.gt) goto loc_836AEA3C;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// addi r8,r10,-5108
	ctx.r8.s64 = ctx.r10.s64 + -5108;
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// li r6,320
	ctx.r6.s64 = 320;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// lis r5,11
	ctx.r5.s64 = 720896;
	// stw r6,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8247b270
	ctx.lr = 0x836AEA2C;
	sub_8247B270(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_836AEA3C:
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

__attribute__((alias("__imp__sub_836AEA50"))) PPC_WEAK_FUNC(sub_836AEA50);
PPC_FUNC_IMPL(__imp__sub_836AEA50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x836AEA58;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,176
	ctx.r29.s64 = ctx.r3.s64 + 176;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535130
	ctx.lr = 0x836AEA6C;
	sub_82535130(ctx, base);
	// lwz r11,240(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	// addi r4,r30,220
	ctx.r4.s64 = ctx.r30.s64 + 220;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836aea80
	if (cr6.lt) goto loc_836AEA80;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836AEA80:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825346c8
	ctx.lr = 0x836AEA88;
	sub_825346C8(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r31,r11,-5792
	ctx.r31.s64 = ctx.r11.s64 + -5792;
	// addi r4,r31,-36
	ctx.r4.s64 = ctx.r31.s64 + -36;
	// bl 0x82536d88
	ctx.lr = 0x836AEA9C;
	sub_82536D88(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x825369e8
	ctx.lr = 0x836AEAA4;
	sub_825369E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535aa0
	ctx.lr = 0x836AEAAC;
	sub_82535AA0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,248(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	// bl 0x82534640
	ctx.lr = 0x836AEAB8;
	sub_82534640(ctx, base);
	// addi r4,r31,-28
	ctx.r4.s64 = ctx.r31.s64 + -28;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82536d88
	ctx.lr = 0x836AEAC4;
	sub_82536D88(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x825369e8
	ctx.lr = 0x836AEACC;
	sub_825369E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535aa0
	ctx.lr = 0x836AEAD4;
	sub_82535AA0(ctx, base);
	// lwz r10,336(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 336);
	// addi r11,r30,316
	ctx.r11.s64 = ctx.r30.s64 + 316;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836aeae8
	if (cr6.lt) goto loc_836AEAE8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_836AEAE8:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825346c8
	ctx.lr = 0x836AEAF4;
	sub_825346C8(ctx, base);
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82536d88
	ctx.lr = 0x836AEB00;
	sub_82536D88(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x825369e8
	ctx.lr = 0x836AEB08;
	sub_825369E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535aa0
	ctx.lr = 0x836AEB10;
	sub_82535AA0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,344(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 344);
	// bl 0x82534640
	ctx.lr = 0x836AEB1C;
	sub_82534640(ctx, base);
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82536d88
	ctx.lr = 0x836AEB28;
	sub_82536D88(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x825369e8
	ctx.lr = 0x836AEB30;
	sub_825369E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535aa0
	ctx.lr = 0x836AEB38;
	sub_82535AA0(ctx, base);
	// lwz r10,368(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 368);
	// addi r11,r30,348
	ctx.r11.s64 = ctx.r30.s64 + 348;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836aeb4c
	if (cr6.lt) goto loc_836AEB4C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_836AEB4C:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825346c8
	ctx.lr = 0x836AEB58;
	sub_825346C8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82536d88
	ctx.lr = 0x836AEB64;
	sub_82536D88(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x825369e8
	ctx.lr = 0x836AEB6C;
	sub_825369E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535aa0
	ctx.lr = 0x836AEB74;
	sub_82535AA0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836AEB80"))) PPC_WEAK_FUNC(sub_836AEB80);
PPC_FUNC_IMPL(__imp__sub_836AEB80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x836AEB88;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// addi r10,r11,-5108
	ctx.r10.s64 = ctx.r11.s64 + -5108;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// li r8,320
	ctx.r8.s64 = 320;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8247b7d8
	ctx.lr = 0x836AEBCC;
	sub_8247B7D8(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// beq cr6,0x836aebf4
	if (cr6.eq) goto loc_836AEBF4;
	// lis r4,11
	ctx.r4.s64 = 720896;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x8247b268
	ctx.lr = 0x836AEBEC;
	sub_8247B268(ctx, base);
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
loc_836AEBF4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836AEBFC"))) PPC_WEAK_FUNC(sub_836AEBFC);
PPC_FUNC_IMPL(__imp__sub_836AEBFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836AEC00"))) PPC_WEAK_FUNC(sub_836AEC00);
PPC_FUNC_IMPL(__imp__sub_836AEC00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x836AEC08;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,284(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r27,r3,264
	ctx.r27.s64 = ctx.r3.s64 + 264;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836aec28
	if (cr6.lt) goto loc_836AEC28;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836AEC28;
	sub_8386D088(ctx, base);
loc_836AEC28:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r31,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r31.u32);
	// addi r30,r29,236
	ctx.r30.s64 = ctx.r29.s64 + 236;
	// stw r28,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r28.u32);
	// stb r31,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r31.u8);
	// lwz r11,256(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 256);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836aec54
	if (cr6.lt) goto loc_836AEC54;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836AEC54;
	sub_8386D088(ctx, base);
loc_836AEC54:
	// stw r28,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r28.u32);
	// addi r27,r29,208
	ctx.r27.s64 = ctx.r29.s64 + 208;
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// lwz r11,228(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 228);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836aec78
	if (cr6.lt) goto loc_836AEC78;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836AEC78;
	sub_8386D088(ctx, base);
loc_836AEC78:
	// stw r28,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r28.u32);
	// addi r30,r29,180
	ctx.r30.s64 = ctx.r29.s64 + 180;
	// stw r31,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r31.u32);
	// stb r31,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r31.u8);
	// lwz r11,200(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 200);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836aec9c
	if (cr6.lt) goto loc_836AEC9C;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836AEC9C;
	sub_8386D088(ctx, base);
loc_836AEC9C:
	// stw r28,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r28.u32);
	// addi r27,r29,152
	ctx.r27.s64 = ctx.r29.s64 + 152;
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// lwz r11,172(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 172);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836aecc0
	if (cr6.lt) goto loc_836AECC0;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836AECC0;
	sub_8386D088(ctx, base);
loc_836AECC0:
	// stw r28,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r28.u32);
	// addi r30,r29,72
	ctx.r30.s64 = ctx.r29.s64 + 72;
	// stw r31,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r31.u32);
	// stb r31,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r31.u8);
	// addi r3,r30,64
	ctx.r3.s64 = ctx.r30.s64 + 64;
	// bl 0x824238b8
	ctx.lr = 0x836AECD8;
	sub_824238B8(ctx, base);
	// addi r3,r30,48
	ctx.r3.s64 = ctx.r30.s64 + 48;
	// bl 0x824238b8
	ctx.lr = 0x836AECE0;
	sub_824238B8(ctx, base);
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// bl 0x824238b8
	ctx.lr = 0x836AECE8;
	sub_824238B8(ctx, base);
	// lwz r11,92(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836aecfc
	if (cr6.lt) goto loc_836AECFC;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836AECFC;
	sub_8386D088(ctx, base);
loc_836AECFC:
	// stw r28,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r28.u32);
	// addi r27,r29,40
	ctx.r27.s64 = ctx.r29.s64 + 40;
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// lwz r11,60(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836aed20
	if (cr6.lt) goto loc_836AED20;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836AED20;
	sub_8386D088(ctx, base);
loc_836AED20:
	// stw r28,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r28.u32);
	// addi r30,r29,4
	ctx.r30.s64 = ctx.r29.s64 + 4;
	// stw r31,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r31.u32);
	// stb r31,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r31.u8);
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836aed44
	if (cr6.lt) goto loc_836AED44;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836AED44;
	sub_8386D088(ctx, base);
loc_836AED44:
	// stw r28,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r28.u32);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836AED58"))) PPC_WEAK_FUNC(sub_836AED58);
PPC_FUNC_IMPL(__imp__sub_836AED58) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x836aec00
	sub_836AEC00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836AED60"))) PPC_WEAK_FUNC(sub_836AED60);
PPC_FUNC_IMPL(__imp__sub_836AED60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x836AED68;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// stw r29,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r29.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// addi r28,r11,27936
	ctx.r28.s64 = ctx.r11.s64 + 27936;
	// stb r30,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x824208c8
	ctx.lr = 0x836AEDA0;
	sub_824208C8(ctx, base);
	// std r30,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r30.u64);
	// stw r29,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r29.u32);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stb r30,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836AEDC0;
	sub_824208C8(ctx, base);
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// bl 0x835fe558
	ctx.lr = 0x836AEDC8;
	sub_835FE558(ctx, base);
	// stw r29,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r29.u32);
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// stb r30,152(r31)
	PPC_STORE_U8(ctx.r31.u32 + 152, ctx.r30.u8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836AEDE4;
	sub_824208C8(ctx, base);
	// stw r29,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r29.u32);
	// stw r30,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r30.u32);
	// addi r3,r31,180
	ctx.r3.s64 = ctx.r31.s64 + 180;
	// stb r30,180(r31)
	PPC_STORE_U8(ctx.r31.u32 + 180, ctx.r30.u8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836AEE00;
	sub_824208C8(ctx, base);
	// stw r29,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r29.u32);
	// stw r30,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r30.u32);
	// addi r3,r31,208
	ctx.r3.s64 = ctx.r31.s64 + 208;
	// stb r30,208(r31)
	PPC_STORE_U8(ctx.r31.u32 + 208, ctx.r30.u8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836AEE1C;
	sub_824208C8(ctx, base);
	// stw r29,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r29.u32);
	// stw r30,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r30.u32);
	// addi r3,r31,236
	ctx.r3.s64 = ctx.r31.s64 + 236;
	// stb r30,236(r31)
	PPC_STORE_U8(ctx.r31.u32 + 236, ctx.r30.u8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836AEE38;
	sub_824208C8(ctx, base);
	// stw r29,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r29.u32);
	// stw r30,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r30.u32);
	// addi r3,r31,264
	ctx.r3.s64 = ctx.r31.s64 + 264;
	// stb r30,264(r31)
	PPC_STORE_U8(ctx.r31.u32 + 264, ctx.r30.u8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836AEE54;
	sub_824208C8(ctx, base);
	// stw r30,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r30.u32);
	// stw r30,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r30.u32);
	// stw r30,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r30.u32);
	// stw r30,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836AEE74"))) PPC_WEAK_FUNC(sub_836AEE74);
PPC_FUNC_IMPL(__imp__sub_836AEE74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836AEE78"))) PPC_WEAK_FUNC(sub_836AEE78);
PPC_FUNC_IMPL(__imp__sub_836AEE78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x836AEE80;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// li r28,-1
	ctx.r28.s64 = -1;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r27,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r27.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r30,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r30.u8);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// bl 0x82420558
	ctx.lr = 0x836AEEC0;
	sub_82420558(ctx, base);
	// ld r10,32(r29)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r29.u32 + 32);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r29,40
	ctx.r4.s64 = ctx.r29.s64 + 40;
	// std r10,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r10.u64);
	// stw r27,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r27.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stb r30,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r30.u8);
	// bl 0x82420558
	ctx.lr = 0x836AEEE8;
	sub_82420558(ctx, base);
	// addi r4,r29,72
	ctx.r4.s64 = ctx.r29.s64 + 72;
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// bl 0x82c5beb8
	ctx.lr = 0x836AEEF4;
	sub_82C5BEB8(ctx, base);
	// stw r27,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r27.u32);
	// stw r30,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// stb r30,152(r31)
	PPC_STORE_U8(ctx.r31.u32 + 152, ctx.r30.u8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r29,152
	ctx.r4.s64 = ctx.r29.s64 + 152;
	// bl 0x82420558
	ctx.lr = 0x836AEF14;
	sub_82420558(ctx, base);
	// stw r27,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r27.u32);
	// stw r30,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r30.u32);
	// addi r3,r31,180
	ctx.r3.s64 = ctx.r31.s64 + 180;
	// stb r30,180(r31)
	PPC_STORE_U8(ctx.r31.u32 + 180, ctx.r30.u8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r29,180
	ctx.r4.s64 = ctx.r29.s64 + 180;
	// bl 0x82420558
	ctx.lr = 0x836AEF34;
	sub_82420558(ctx, base);
	// stw r27,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r27.u32);
	// stw r30,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r30.u32);
	// addi r3,r31,208
	ctx.r3.s64 = ctx.r31.s64 + 208;
	// stb r30,208(r31)
	PPC_STORE_U8(ctx.r31.u32 + 208, ctx.r30.u8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r29,208
	ctx.r4.s64 = ctx.r29.s64 + 208;
	// bl 0x82420558
	ctx.lr = 0x836AEF54;
	sub_82420558(ctx, base);
	// stw r27,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r27.u32);
	// stw r30,252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 252, ctx.r30.u32);
	// addi r3,r31,236
	ctx.r3.s64 = ctx.r31.s64 + 236;
	// stb r30,236(r31)
	PPC_STORE_U8(ctx.r31.u32 + 236, ctx.r30.u8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r29,236
	ctx.r4.s64 = ctx.r29.s64 + 236;
	// bl 0x82420558
	ctx.lr = 0x836AEF74;
	sub_82420558(ctx, base);
	// stw r27,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r27.u32);
	// stw r30,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r30.u32);
	// addi r3,r31,264
	ctx.r3.s64 = ctx.r31.s64 + 264;
	// stb r30,264(r31)
	PPC_STORE_U8(ctx.r31.u32 + 264, ctx.r30.u8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r29,264
	ctx.r4.s64 = ctx.r29.s64 + 264;
	// bl 0x82420558
	ctx.lr = 0x836AEF94;
	sub_82420558(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r10,r29,288
	ctx.r10.s64 = ctx.r29.s64 + 288;
	// addi r9,r31,288
	ctx.r9.s64 = ctx.r31.s64 + 288;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_836AEFA4:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x836aefa4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_836AEFA4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836AEFBC"))) PPC_WEAK_FUNC(sub_836AEFBC);
PPC_FUNC_IMPL(__imp__sub_836AEFBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836AEFC0"))) PPC_WEAK_FUNC(sub_836AEFC0);
PPC_FUNC_IMPL(__imp__sub_836AEFC0) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x836af008
	if (cr6.eq) goto loc_836AF008;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x836aee78
	ctx.lr = 0x836AEFF0;
	sub_836AEE78(ctx, base);
	// lwz r11,312(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 312);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r11.u32);
	// lwz r10,316(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 316);
	// stw r10,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r10.u32);
	// b 0x836af00c
	goto loc_836AF00C;
loc_836AF008:
	// li r3,0
	ctx.r3.s64 = 0;
loc_836AF00C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_836AF024"))) PPC_WEAK_FUNC(sub_836AF024);
PPC_FUNC_IMPL(__imp__sub_836AF024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836AF028"))) PPC_WEAK_FUNC(sub_836AF028);
PPC_FUNC_IMPL(__imp__sub_836AF028) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x836AF030;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,-1
	ctx.r29.s64 = -1;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x82420558
	ctx.lr = 0x836AF05C;
	sub_82420558(ctx, base);
	// ld r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,40
	ctx.r4.s64 = ctx.r31.s64 + 40;
	// addi r3,r30,40
	ctx.r3.s64 = ctx.r30.s64 + 40;
	// std r10,32(r30)
	PPC_STORE_U64(ctx.r30.u32 + 32, ctx.r10.u64);
	// bl 0x82420558
	ctx.lr = 0x836AF078;
	sub_82420558(ctx, base);
	// addi r28,r31,72
	ctx.r28.s64 = ctx.r31.s64 + 72;
	// addi r27,r30,72
	ctx.r27.s64 = ctx.r30.s64 + 72;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82420558
	ctx.lr = 0x836AF094;
	sub_82420558(ctx, base);
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r4,r28,32
	ctx.r4.s64 = ctx.r28.s64 + 32;
	// addi r3,r27,32
	ctx.r3.s64 = ctx.r27.s64 + 32;
	// stw r9,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r9.u32);
	// bl 0x824baf50
	ctx.lr = 0x836AF0A8;
	sub_824BAF50(ctx, base);
	// addi r4,r28,48
	ctx.r4.s64 = ctx.r28.s64 + 48;
	// addi r3,r27,48
	ctx.r3.s64 = ctx.r27.s64 + 48;
	// bl 0x824baf50
	ctx.lr = 0x836AF0B4;
	sub_824BAF50(ctx, base);
	// addi r4,r28,64
	ctx.r4.s64 = ctx.r28.s64 + 64;
	// addi r3,r27,64
	ctx.r3.s64 = ctx.r27.s64 + 64;
	// bl 0x824baf50
	ctx.lr = 0x836AF0C0;
	sub_824BAF50(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,152
	ctx.r4.s64 = ctx.r31.s64 + 152;
	// addi r3,r30,152
	ctx.r3.s64 = ctx.r30.s64 + 152;
	// bl 0x82420558
	ctx.lr = 0x836AF0D4;
	sub_82420558(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,180
	ctx.r4.s64 = ctx.r31.s64 + 180;
	// addi r3,r30,180
	ctx.r3.s64 = ctx.r30.s64 + 180;
	// bl 0x82420558
	ctx.lr = 0x836AF0E8;
	sub_82420558(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,208
	ctx.r4.s64 = ctx.r31.s64 + 208;
	// addi r3,r30,208
	ctx.r3.s64 = ctx.r30.s64 + 208;
	// bl 0x82420558
	ctx.lr = 0x836AF0FC;
	sub_82420558(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,236
	ctx.r4.s64 = ctx.r31.s64 + 236;
	// addi r3,r30,236
	ctx.r3.s64 = ctx.r30.s64 + 236;
	// bl 0x82420558
	ctx.lr = 0x836AF110;
	sub_82420558(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,264
	ctx.r4.s64 = ctx.r31.s64 + 264;
	// addi r3,r30,264
	ctx.r3.s64 = ctx.r30.s64 + 264;
	// bl 0x82420558
	ctx.lr = 0x836AF124;
	sub_82420558(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r31,288
	ctx.r11.s64 = ctx.r31.s64 + 288;
	// addi r10,r30,288
	ctx.r10.s64 = ctx.r30.s64 + 288;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_836AF134:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x836af134
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_836AF134;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836AF14C"))) PPC_WEAK_FUNC(sub_836AF14C);
PPC_FUNC_IMPL(__imp__sub_836AF14C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836AF150"))) PPC_WEAK_FUNC(sub_836AF150);
PPC_FUNC_IMPL(__imp__sub_836AF150) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x836AF158;
	__savegprlr_26(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82a8c428
	ctx.lr = 0x836AF174;
	sub_82A8C428(ctx, base);
	// lwz r10,240(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	// addi r11,r30,220
	ctx.r11.s64 = ctx.r30.s64 + 220;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836af18c
	if (cr6.lt) goto loc_836AF18C;
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x836af190
	goto loc_836AF190;
loc_836AF18C:
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_836AF190:
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r31,r11,-5720
	ctx.r31.s64 = ctx.r11.s64 + -5720;
	// addi r4,r31,-56
	ctx.r4.s64 = ctx.r31.s64 + -56;
	// bl 0x82473550
	ctx.lr = 0x836AF1A4;
	sub_82473550(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82473550
	ctx.lr = 0x836AF1AC;
	sub_82473550(ctx, base);
	// addi r4,r31,-60
	ctx.r4.s64 = ctx.r31.s64 + -60;
	// bl 0x82473550
	ctx.lr = 0x836AF1B4;
	sub_82473550(ctx, base);
	// addi r4,r31,-44
	ctx.r4.s64 = ctx.r31.s64 + -44;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lwz r29,248(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	// bl 0x82473550
	ctx.lr = 0x836AF1C4;
	sub_82473550(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82474170
	ctx.lr = 0x836AF1CC;
	sub_82474170(ctx, base);
	// addi r4,r31,-48
	ctx.r4.s64 = ctx.r31.s64 + -48;
	// bl 0x82473550
	ctx.lr = 0x836AF1D4;
	sub_82473550(ctx, base);
	// addi r4,r30,316
	ctx.r4.s64 = ctx.r30.s64 + 316;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83734458
	ctx.lr = 0x836AF1E0;
	sub_83734458(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836af1f4
	if (cr6.lt) goto loc_836AF1F4;
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x836af1f8
	goto loc_836AF1F8;
loc_836AF1F4:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_836AF1F8:
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82473550
	ctx.lr = 0x836AF204;
	sub_82473550(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82473550
	ctx.lr = 0x836AF20C;
	sub_82473550(ctx, base);
	// addi r4,r31,-36
	ctx.r4.s64 = ctx.r31.s64 + -36;
	// bl 0x82473550
	ctx.lr = 0x836AF214;
	sub_82473550(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836af228
	if (cr6.lt) goto loc_836AF228;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x8386d088
	ctx.lr = 0x836AF228;
	sub_8386D088(ctx, base);
loc_836AF228:
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r26,344(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 344);
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stb r29,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r29.u8);
	// bl 0x82473550
	ctx.lr = 0x836AF24C;
	sub_82473550(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82474170
	ctx.lr = 0x836AF254;
	sub_82474170(ctx, base);
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// bl 0x82473550
	ctx.lr = 0x836AF25C;
	sub_82473550(ctx, base);
	// addi r4,r30,348
	ctx.r4.s64 = ctx.r30.s64 + 348;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x83734458
	ctx.lr = 0x836AF268;
	sub_83734458(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836af27c
	if (cr6.lt) goto loc_836AF27C;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x836af280
	goto loc_836AF280;
loc_836AF27C:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_836AF280:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82473550
	ctx.lr = 0x836AF28C;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82473550
	ctx.lr = 0x836AF294;
	sub_82473550(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836af2a8
	if (cr6.lt) goto loc_836AF2A8;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x8386d088
	ctx.lr = 0x836AF2A8;
	sub_8386D088(ctx, base);
loc_836AF2A8:
	// stw r28,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r28.u32);
	// addi r4,r1,200
	ctx.r4.s64 = ctx.r1.s64 + 200;
	// stw r29,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r29,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r29.u8);
	// bl 0x82a79bf8
	ctx.lr = 0x836AF2C0;
	sub_82A79BF8(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x836af2d4
	if (!cr6.lt) goto loc_836AF2D4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_836AF2D4:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836AF2D8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836af2d8
	if (!cr6.eq) goto loc_836AF2D8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836AF2FC;
	sub_824208C8(ctx, base);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836af310
	if (cr6.lt) goto loc_836AF310;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82416268
	ctx.lr = 0x836AF310;
	sub_82416268(ctx, base);
loc_836AF310:
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// bl 0x82a79160
	ctx.lr = 0x836AF324;
	sub_82A79160(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// addi r10,r11,15320
	ctx.r10.s64 = ctx.r11.s64 + 15320;
	// stw r10,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r10.u32);
	// bl 0x831ccf00
	ctx.lr = 0x836AF338;
	sub_831CCF00(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836AF344"))) PPC_WEAK_FUNC(sub_836AF344);
PPC_FUNC_IMPL(__imp__sub_836AF344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836AF348"))) PPC_WEAK_FUNC(sub_836AF348);
PPC_FUNC_IMPL(__imp__sub_836AF348) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdabc
	ctx.lr = 0x836AF350;
	__savegprlr_17(ctx, base);
	// stwu r1,-960(r1)
	ea = -960 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r18,r3,176
	ctx.r18.s64 = ctx.r3.s64 + 176;
	// addi r26,r11,-5208
	ctx.r26.s64 = ctx.r11.s64 + -5208;
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// addi r4,r26,-500
	ctx.r4.s64 = ctx.r26.s64 + -500;
	// bl 0x82536d88
	ctx.lr = 0x836AF370;
	sub_82536D88(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x836AF374;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_836AF37C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836af37c
	if (!cr6.eq) goto loc_836AF37C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r17,220
	ctx.r3.s64 = ctx.r17.s64 + 220;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836AF3A0;
	sub_824208C8(ctx, base);
	// addi r4,r26,-492
	ctx.r4.s64 = ctx.r26.s64 + -492;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82536d88
	ctx.lr = 0x836AF3AC;
	sub_82536D88(ctx, base);
	// bl 0x825347e8
	ctx.lr = 0x836AF3B0;
	sub_825347E8(ctx, base);
	// stw r3,248(r17)
	PPC_STORE_U32(ctx.r17.u32 + 248, ctx.r3.u32);
	// addi r4,r26,-484
	ctx.r4.s64 = ctx.r26.s64 + -484;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82536d88
	ctx.lr = 0x836AF3C0;
	sub_82536D88(ctx, base);
	// bl 0x82534a18
	ctx.lr = 0x836AF3C4;
	sub_82534A18(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x836af3ec
	if (cr6.eq) goto loc_836AF3EC;
	// addi r4,r26,-476
	ctx.r4.s64 = ctx.r26.s64 + -476;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82536d88
	ctx.lr = 0x836AF3DC;
	sub_82536D88(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x836AF3E0;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r17,316
	ctx.r3.s64 = ctx.r17.s64 + 316;
	// bl 0x83601998
	ctx.lr = 0x836AF3EC;
	sub_83601998(ctx, base);
loc_836AF3EC:
	// addi r4,r26,-468
	ctx.r4.s64 = ctx.r26.s64 + -468;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82536d88
	ctx.lr = 0x836AF3F8;
	sub_82536D88(ctx, base);
	// bl 0x825349d0
	ctx.lr = 0x836AF3FC;
	sub_825349D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836af41c
	if (cr6.eq) goto loc_836AF41C;
	// addi r4,r26,-460
	ctx.r4.s64 = ctx.r26.s64 + -460;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82536d88
	ctx.lr = 0x836AF414;
	sub_82536D88(ctx, base);
	// bl 0x825347e8
	ctx.lr = 0x836AF418;
	sub_825347E8(ctx, base);
	// stw r3,348(r17)
	PPC_STORE_U32(ctx.r17.u32 + 348, ctx.r3.u32);
loc_836AF41C:
	// addi r4,r26,-452
	ctx.r4.s64 = ctx.r26.s64 + -452;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82536d88
	ctx.lr = 0x836AF428;
	sub_82536D88(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82536838
	ctx.lr = 0x836AF434;
	sub_82536838(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82534a38
	ctx.lr = 0x836AF43C;
	sub_82534A38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836afe00
	if (cr6.eq) goto loc_836AFE00;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x825356a0
	ctx.lr = 0x836AF454;
	sub_825356A0(ctx, base);
	// addi r25,r17,352
	ctx.r25.s64 = ctx.r17.s64 + 352;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x836aeb80
	ctx.lr = 0x836AF460;
	sub_836AEB80(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x825356f0
	ctx.lr = 0x836AF46C;
	sub_825356F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82534ae0
	ctx.lr = 0x836AF478;
	sub_82534AE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x836afe00
	if (!cr6.eq) goto loc_836AFE00;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r8,11
	ctx.r8.s64 = 720896;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32204
	ctx.r9.s64 = -2110521344;
	// addi r21,r25,4
	ctx.r21.s64 = ctx.r25.s64 + 4;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r30,4
	ctx.r30.s64 = 4;
	// ori r29,r8,1
	ctx.r29.u64 = ctx.r8.u64 | 1;
	// li r19,8
	ctx.r19.s64 = 8;
	// li r20,320
	ctx.r20.s64 = 320;
	// addi r22,r11,-5108
	ctx.r22.s64 = ctx.r11.s64 + -5108;
	// addi r28,r10,8980
	ctx.r28.s64 = ctx.r10.s64 + 8980;
	// addi r27,r9,26164
	ctx.r27.s64 = ctx.r9.s64 + 26164;
loc_836AF4B8:
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82535118
	ctx.lr = 0x836AF4C0;
	sub_82535118(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x836aed60
	ctx.lr = 0x836AF4CC;
	sub_836AED60(ctx, base);
	// stw r23,824(r1)
	PPC_STORE_U32(ctx.r1.u32 + 824, ctx.r23.u32);
	// stw r23,828(r1)
	PPC_STORE_U32(ctx.r1.u32 + 828, ctx.r23.u32);
	// addi r4,r26,-440
	ctx.r4.s64 = ctx.r26.s64 + -440;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82535898
	ctx.lr = 0x836AF4E0;
	sub_82535898(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82536838
	ctx.lr = 0x836AF4EC;
	sub_82536838(ctx, base);
	// addi r4,r26,-432
	ctx.r4.s64 = ctx.r26.s64 + -432;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535898
	ctx.lr = 0x836AF4F8;
	sub_82535898(ctx, base);
	// bl 0x825349d0
	ctx.lr = 0x836AF4FC;
	sub_825349D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836af51c
	if (cr6.eq) goto loc_836AF51C;
	// addi r4,r26,-428
	ctx.r4.s64 = ctx.r26.s64 + -428;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535898
	ctx.lr = 0x836AF514;
	sub_82535898(ctx, base);
	// bl 0x825347e8
	ctx.lr = 0x836AF518;
	sub_825347E8(ctx, base);
	// stw r3,512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 512, ctx.r3.u32);
loc_836AF51C:
	// addi r4,r26,-424
	ctx.r4.s64 = ctx.r26.s64 + -424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535898
	ctx.lr = 0x836AF528;
	sub_82535898(ctx, base);
	// bl 0x82534a18
	ctx.lr = 0x836AF52C;
	sub_82534A18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836af554
	if (cr6.eq) goto loc_836AF554;
	// addi r4,r26,-416
	ctx.r4.s64 = ctx.r26.s64 + -416;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535898
	ctx.lr = 0x836AF544;
	sub_82535898(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x836AF548;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,516
	ctx.r3.s64 = ctx.r1.s64 + 516;
	// bl 0x83601998
	ctx.lr = 0x836AF554;
	sub_83601998(ctx, base);
loc_836AF554:
	// addi r4,r26,-408
	ctx.r4.s64 = ctx.r26.s64 + -408;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535898
	ctx.lr = 0x836AF560;
	sub_82535898(ctx, base);
	// bl 0x825349d0
	ctx.lr = 0x836AF564;
	sub_825349D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836af584
	if (cr6.eq) goto loc_836AF584;
	// addi r4,r26,-400
	ctx.r4.s64 = ctx.r26.s64 + -400;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535898
	ctx.lr = 0x836AF57C;
	sub_82535898(ctx, base);
	// bl 0x82534850
	ctx.lr = 0x836AF580;
	sub_82534850(ctx, base);
	// std r3,544(r1)
	PPC_STORE_U64(ctx.r1.u32 + 544, ctx.r3.u64);
loc_836AF584:
	// addi r4,r26,-392
	ctx.r4.s64 = ctx.r26.s64 + -392;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535898
	ctx.lr = 0x836AF590;
	sub_82535898(ctx, base);
	// bl 0x82534a18
	ctx.lr = 0x836AF594;
	sub_82534A18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836af5bc
	if (cr6.eq) goto loc_836AF5BC;
	// addi r4,r26,-380
	ctx.r4.s64 = ctx.r26.s64 + -380;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535898
	ctx.lr = 0x836AF5AC;
	sub_82535898(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x836AF5B0;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,552
	ctx.r3.s64 = ctx.r1.s64 + 552;
	// bl 0x83601998
	ctx.lr = 0x836AF5BC;
	sub_83601998(ctx, base);
loc_836AF5BC:
	// addi r4,r26,-368
	ctx.r4.s64 = ctx.r26.s64 + -368;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535898
	ctx.lr = 0x836AF5C8;
	sub_82535898(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82536838
	ctx.lr = 0x836AF5D4;
	sub_82536838(ctx, base);
	// addi r4,r26,-360
	ctx.r4.s64 = ctx.r26.s64 + -360;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82535898
	ctx.lr = 0x836AF5E0;
	sub_82535898(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82536838
	ctx.lr = 0x836AF5EC;
	sub_82536838(ctx, base);
	// addi r4,r26,-352
	ctx.r4.s64 = ctx.r26.s64 + -352;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82535898
	ctx.lr = 0x836AF5F8;
	sub_82535898(ctx, base);
	// bl 0x82534a18
	ctx.lr = 0x836AF5FC;
	sub_82534A18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836af624
	if (cr6.eq) goto loc_836AF624;
	// addi r4,r26,-344
	ctx.r4.s64 = ctx.r26.s64 + -344;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82535898
	ctx.lr = 0x836AF614;
	sub_82535898(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x836AF618;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,584
	ctx.r3.s64 = ctx.r1.s64 + 584;
	// bl 0x83601998
	ctx.lr = 0x836AF624;
	sub_83601998(ctx, base);
loc_836AF624:
	// addi r4,r26,-336
	ctx.r4.s64 = ctx.r26.s64 + -336;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82535898
	ctx.lr = 0x836AF630;
	sub_82535898(ctx, base);
	// bl 0x825349d0
	ctx.lr = 0x836AF634;
	sub_825349D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836af654
	if (cr6.eq) goto loc_836AF654;
	// addi r4,r26,-328
	ctx.r4.s64 = ctx.r26.s64 + -328;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82535898
	ctx.lr = 0x836AF64C;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x836AF650;
	sub_82534770(ctx, base);
	// stw r3,612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 612, ctx.r3.u32);
loc_836AF654:
	// addi r4,r26,-320
	ctx.r4.s64 = ctx.r26.s64 + -320;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82535898
	ctx.lr = 0x836AF660;
	sub_82535898(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82536838
	ctx.lr = 0x836AF66C;
	sub_82536838(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82534a38
	ctx.lr = 0x836AF674;
	sub_82534A38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836af780
	if (cr6.eq) goto loc_836AF780;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x825356a0
	ctx.lr = 0x836AF68C;
	sub_825356A0(ctx, base);
	// addi r3,r1,616
	ctx.r3.s64 = ctx.r1.s64 + 616;
	// bl 0x824238b8
	ctx.lr = 0x836AF694;
	sub_824238B8(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,488
	ctx.r3.s64 = ctx.r1.s64 + 488;
	// bl 0x825356f0
	ctx.lr = 0x836AF6A0;
	sub_825356F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82534ae0
	ctx.lr = 0x836AF6AC;
	sub_82534AE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x836af780
	if (!cr6.eq) goto loc_836AF780;
loc_836AF6B8:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82535118
	ctx.lr = 0x836AF6C0;
	sub_82535118(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x836AF6C4;
	sub_82534770(ctx, base);
	// lwz r10,616(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 616);
	// lwz r11,620(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 620);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// blt cr6,0x836af734
	if (cr6.lt) goto loc_836AF734;
	// addi r4,r10,2
	ctx.r4.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// ble cr6,0x836af724
	if (!cr6.gt) goto loc_836AF724;
	// addi r11,r1,624
	ctx.r11.s64 = ctx.r1.s64 + 624;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// addi r10,r1,616
	ctx.r10.s64 = ctx.r1.s64 + 616;
	// stw r30,428(r1)
	PPC_STORE_U32(ctx.r1.u32 + 428, ctx.r30.u32);
	// addi r9,r1,620
	ctx.r9.s64 = ctx.r1.s64 + 620;
	// stw r11,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r11.u32);
	// stw r10,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r10.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r9,424(r1)
	PPC_STORE_U32(ctx.r1.u32 + 424, ctx.r9.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r30,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r30.u32);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x8247b270
	ctx.lr = 0x836AF718;
	sub_8247B270(ctx, base);
	// lwz r10,616(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 616);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// b 0x836af728
	goto loc_836AF728;
loc_836AF724:
	// li r3,1
	ctx.r3.s64 = 1;
loc_836AF728:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836af754
	if (cr6.eq) goto loc_836AF754;
loc_836AF734:
	// lwz r11,624(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 624);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x836af74c
	if (cr0.eq) goto loc_836AF74C;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// lwz r10,616(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 616);
loc_836AF74C:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stw r11,616(r1)
	PPC_STORE_U32(ctx.r1.u32 + 616, ctx.r11.u32);
loc_836AF754:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82535128
	ctx.lr = 0x836AF75C;
	sub_82535128(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,488
	ctx.r3.s64 = ctx.r1.s64 + 488;
	// bl 0x825356f0
	ctx.lr = 0x836AF768;
	sub_825356F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82534ae0
	ctx.lr = 0x836AF774;
	sub_82534AE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836af6b8
	if (cr6.eq) goto loc_836AF6B8;
loc_836AF780:
	// addi r4,r26,-312
	ctx.r4.s64 = ctx.r26.s64 + -312;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82535898
	ctx.lr = 0x836AF78C;
	sub_82535898(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82536838
	ctx.lr = 0x836AF798;
	sub_82536838(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82534a38
	ctx.lr = 0x836AF7A0;
	sub_82534A38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836af8f8
	if (cr6.eq) goto loc_836AF8F8;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x825356a0
	ctx.lr = 0x836AF7B8;
	sub_825356A0(ctx, base);
	// addi r11,r1,640
	ctx.r11.s64 = ctx.r1.s64 + 640;
	// addi r10,r1,632
	ctx.r10.s64 = ctx.r1.s64 + 632;
	// stw r27,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r27.u32);
	// addi r9,r1,636
	ctx.r9.s64 = ctx.r1.s64 + 636;
	// stw r11,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r11.u32);
	// stw r10,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r10.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r9,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r9.u32);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// stw r30,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r30.u32);
	// stw r30,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r30.u32);
	// bl 0x8247b7d8
	ctx.lr = 0x836AF7E8;
	sub_8247B7D8(ctx, base);
	// lwz r3,640(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 640);
	// stw r23,632(r1)
	PPC_STORE_U32(ctx.r1.u32 + 632, ctx.r23.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x836af808
	if (cr6.eq) goto loc_836AF808;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8247b268
	ctx.lr = 0x836AF800;
	sub_8247B268(ctx, base);
	// stw r23,636(r1)
	PPC_STORE_U32(ctx.r1.u32 + 636, ctx.r23.u32);
	// stw r23,640(r1)
	PPC_STORE_U32(ctx.r1.u32 + 640, ctx.r23.u32);
loc_836AF808:
	// stw r28,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r28.u32);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x825356f0
	ctx.lr = 0x836AF818;
	sub_825356F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82534ae0
	ctx.lr = 0x836AF824;
	sub_82534AE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x836af8f8
	if (!cr6.eq) goto loc_836AF8F8;
loc_836AF830:
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82535118
	ctx.lr = 0x836AF838;
	sub_82535118(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x836AF83C;
	sub_82534770(ctx, base);
	// lwz r10,632(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 632);
	// lwz r11,636(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 636);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// blt cr6,0x836af8ac
	if (cr6.lt) goto loc_836AF8AC;
	// addi r4,r10,2
	ctx.r4.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// ble cr6,0x836af89c
	if (!cr6.gt) goto loc_836AF89C;
	// addi r11,r1,640
	ctx.r11.s64 = ctx.r1.s64 + 640;
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// addi r10,r1,632
	ctx.r10.s64 = ctx.r1.s64 + 632;
	// stw r30,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r30.u32);
	// addi r9,r1,636
	ctx.r9.s64 = ctx.r1.s64 + 636;
	// stw r11,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r11.u32);
	// stw r10,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r10.u32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r9,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r9.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r30,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r30.u32);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x8247b270
	ctx.lr = 0x836AF890;
	sub_8247B270(ctx, base);
	// lwz r10,632(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 632);
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// b 0x836af8a0
	goto loc_836AF8A0;
loc_836AF89C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_836AF8A0:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836af8cc
	if (cr6.eq) goto loc_836AF8CC;
loc_836AF8AC:
	// lwz r11,640(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 640);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x836af8c4
	if (cr0.eq) goto loc_836AF8C4;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// lwz r10,632(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 632);
loc_836AF8C4:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stw r11,632(r1)
	PPC_STORE_U32(ctx.r1.u32 + 632, ctx.r11.u32);
loc_836AF8CC:
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82535128
	ctx.lr = 0x836AF8D4;
	sub_82535128(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x825356f0
	ctx.lr = 0x836AF8E0;
	sub_825356F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82534ae0
	ctx.lr = 0x836AF8EC;
	sub_82534AE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836af830
	if (cr6.eq) goto loc_836AF830;
loc_836AF8F8:
	// addi r4,r26,-308
	ctx.r4.s64 = ctx.r26.s64 + -308;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82535898
	ctx.lr = 0x836AF904;
	sub_82535898(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82536838
	ctx.lr = 0x836AF910;
	sub_82536838(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82534a38
	ctx.lr = 0x836AF918;
	sub_82534A38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836afa70
	if (cr6.eq) goto loc_836AFA70;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x825356a0
	ctx.lr = 0x836AF930;
	sub_825356A0(ctx, base);
	// addi r11,r1,656
	ctx.r11.s64 = ctx.r1.s64 + 656;
	// addi r10,r1,648
	ctx.r10.s64 = ctx.r1.s64 + 648;
	// stw r27,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r27.u32);
	// addi r9,r1,652
	ctx.r9.s64 = ctx.r1.s64 + 652;
	// stw r11,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r11.u32);
	// stw r10,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r10.u32);
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// stw r9,392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 392, ctx.r9.u32);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// stw r30,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, ctx.r30.u32);
	// stw r30,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r30.u32);
	// bl 0x8247b7d8
	ctx.lr = 0x836AF960;
	sub_8247B7D8(ctx, base);
	// lwz r3,656(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 656);
	// stw r23,648(r1)
	PPC_STORE_U32(ctx.r1.u32 + 648, ctx.r23.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x836af980
	if (cr6.eq) goto loc_836AF980;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8247b268
	ctx.lr = 0x836AF978;
	sub_8247B268(ctx, base);
	// stw r23,652(r1)
	PPC_STORE_U32(ctx.r1.u32 + 652, ctx.r23.u32);
	// stw r23,656(r1)
	PPC_STORE_U32(ctx.r1.u32 + 656, ctx.r23.u32);
loc_836AF980:
	// stw r28,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r28.u32);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,472
	ctx.r3.s64 = ctx.r1.s64 + 472;
	// bl 0x825356f0
	ctx.lr = 0x836AF990;
	sub_825356F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82534ae0
	ctx.lr = 0x836AF99C;
	sub_82534AE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x836afa70
	if (!cr6.eq) goto loc_836AFA70;
loc_836AF9A8:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82535118
	ctx.lr = 0x836AF9B0;
	sub_82535118(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x836AF9B4;
	sub_82534770(ctx, base);
	// lwz r10,648(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 648);
	// lwz r11,652(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 652);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// blt cr6,0x836afa24
	if (cr6.lt) goto loc_836AFA24;
	// addi r4,r10,2
	ctx.r4.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// ble cr6,0x836afa14
	if (!cr6.gt) goto loc_836AFA14;
	// addi r11,r1,656
	ctx.r11.s64 = ctx.r1.s64 + 656;
	// stw r27,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r27.u32);
	// addi r10,r1,648
	ctx.r10.s64 = ctx.r1.s64 + 648;
	// stw r30,460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 460, ctx.r30.u32);
	// addi r9,r1,652
	ctx.r9.s64 = ctx.r1.s64 + 652;
	// stw r11,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r11.u32);
	// stw r10,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r10.u32);
	// addi r6,r1,136
	ctx.r6.s64 = ctx.r1.s64 + 136;
	// stw r9,456(r1)
	PPC_STORE_U32(ctx.r1.u32 + 456, ctx.r9.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r30,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r30.u32);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x8247b270
	ctx.lr = 0x836AFA08;
	sub_8247B270(ctx, base);
	// lwz r10,648(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 648);
	// stw r28,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r28.u32);
	// b 0x836afa18
	goto loc_836AFA18;
loc_836AFA14:
	// li r3,1
	ctx.r3.s64 = 1;
loc_836AFA18:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836afa44
	if (cr6.eq) goto loc_836AFA44;
loc_836AFA24:
	// lwz r11,656(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 656);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x836afa3c
	if (cr0.eq) goto loc_836AFA3C;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// lwz r10,648(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 648);
loc_836AFA3C:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stw r11,648(r1)
	PPC_STORE_U32(ctx.r1.u32 + 648, ctx.r11.u32);
loc_836AFA44:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82535128
	ctx.lr = 0x836AFA4C;
	sub_82535128(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,472
	ctx.r3.s64 = ctx.r1.s64 + 472;
	// bl 0x825356f0
	ctx.lr = 0x836AFA58;
	sub_825356F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82534ae0
	ctx.lr = 0x836AFA64;
	sub_82534AE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836af9a8
	if (cr6.eq) goto loc_836AF9A8;
loc_836AFA70:
	// addi r4,r26,-296
	ctx.r4.s64 = ctx.r26.s64 + -296;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535898
	ctx.lr = 0x836AFA7C;
	sub_82535898(ctx, base);
	// bl 0x82534a18
	ctx.lr = 0x836AFA80;
	sub_82534A18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836afaa8
	if (cr6.eq) goto loc_836AFAA8;
	// addi r4,r26,-284
	ctx.r4.s64 = ctx.r26.s64 + -284;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535898
	ctx.lr = 0x836AFA98;
	sub_82535898(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x836AFA9C;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,664
	ctx.r3.s64 = ctx.r1.s64 + 664;
	// bl 0x83601998
	ctx.lr = 0x836AFAA8;
	sub_83601998(ctx, base);
loc_836AFAA8:
	// addi r4,r26,-272
	ctx.r4.s64 = ctx.r26.s64 + -272;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535898
	ctx.lr = 0x836AFAB4;
	sub_82535898(ctx, base);
	// bl 0x82534a18
	ctx.lr = 0x836AFAB8;
	sub_82534A18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836afae0
	if (cr6.eq) goto loc_836AFAE0;
	// addi r4,r26,-256
	ctx.r4.s64 = ctx.r26.s64 + -256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535898
	ctx.lr = 0x836AFAD0;
	sub_82535898(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x836AFAD4;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,692
	ctx.r3.s64 = ctx.r1.s64 + 692;
	// bl 0x83601998
	ctx.lr = 0x836AFAE0;
	sub_83601998(ctx, base);
loc_836AFAE0:
	// addi r4,r26,-240
	ctx.r4.s64 = ctx.r26.s64 + -240;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535898
	ctx.lr = 0x836AFAEC;
	sub_82535898(ctx, base);
	// bl 0x82534a18
	ctx.lr = 0x836AFAF0;
	sub_82534A18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836afb18
	if (cr6.eq) goto loc_836AFB18;
	// addi r4,r26,-224
	ctx.r4.s64 = ctx.r26.s64 + -224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535898
	ctx.lr = 0x836AFB08;
	sub_82535898(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x836AFB0C;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// bl 0x83601998
	ctx.lr = 0x836AFB18;
	sub_83601998(ctx, base);
loc_836AFB18:
	// addi r4,r26,-208
	ctx.r4.s64 = ctx.r26.s64 + -208;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535898
	ctx.lr = 0x836AFB24;
	sub_82535898(ctx, base);
	// bl 0x82534a18
	ctx.lr = 0x836AFB28;
	sub_82534A18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836afb50
	if (cr6.eq) goto loc_836AFB50;
	// addi r4,r26,-200
	ctx.r4.s64 = ctx.r26.s64 + -200;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535898
	ctx.lr = 0x836AFB40;
	sub_82535898(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x836AFB44;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,748
	ctx.r3.s64 = ctx.r1.s64 + 748;
	// bl 0x83601998
	ctx.lr = 0x836AFB50;
	sub_83601998(ctx, base);
loc_836AFB50:
	// addi r4,r26,-192
	ctx.r4.s64 = ctx.r26.s64 + -192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535898
	ctx.lr = 0x836AFB5C;
	sub_82535898(ctx, base);
	// bl 0x82534a18
	ctx.lr = 0x836AFB60;
	sub_82534A18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836afb88
	if (cr6.eq) goto loc_836AFB88;
	// addi r4,r26,-184
	ctx.r4.s64 = ctx.r26.s64 + -184;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535898
	ctx.lr = 0x836AFB78;
	sub_82535898(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x836AFB7C;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,776
	ctx.r3.s64 = ctx.r1.s64 + 776;
	// bl 0x83601998
	ctx.lr = 0x836AFB88;
	sub_83601998(ctx, base);
loc_836AFB88:
	// addi r4,r26,-176
	ctx.r4.s64 = ctx.r26.s64 + -176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535898
	ctx.lr = 0x836AFB94;
	sub_82535898(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82536838
	ctx.lr = 0x836AFBA0;
	sub_82536838(ctx, base);
	// addi r4,r26,-160
	ctx.r4.s64 = ctx.r26.s64 + -160;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82535898
	ctx.lr = 0x836AFBAC;
	sub_82535898(ctx, base);
	// bl 0x825349d0
	ctx.lr = 0x836AFBB0;
	sub_825349D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836afbd0
	if (cr6.eq) goto loc_836AFBD0;
	// addi r4,r26,-148
	ctx.r4.s64 = ctx.r26.s64 + -148;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82535898
	ctx.lr = 0x836AFBC8;
	sub_82535898(ctx, base);
	// bl 0x825347e8
	ctx.lr = 0x836AFBCC;
	sub_825347E8(ctx, base);
	// stw r3,804(r1)
	PPC_STORE_U32(ctx.r1.u32 + 804, ctx.r3.u32);
loc_836AFBD0:
	// addi r4,r26,-136
	ctx.r4.s64 = ctx.r26.s64 + -136;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82535898
	ctx.lr = 0x836AFBDC;
	sub_82535898(ctx, base);
	// bl 0x825349d0
	ctx.lr = 0x836AFBE0;
	sub_825349D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836afc00
	if (cr6.eq) goto loc_836AFC00;
	// addi r4,r26,-124
	ctx.r4.s64 = ctx.r26.s64 + -124;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82535898
	ctx.lr = 0x836AFBF8;
	sub_82535898(ctx, base);
	// bl 0x825347e8
	ctx.lr = 0x836AFBFC;
	sub_825347E8(ctx, base);
	// stw r3,808(r1)
	PPC_STORE_U32(ctx.r1.u32 + 808, ctx.r3.u32);
loc_836AFC00:
	// addi r4,r26,-112
	ctx.r4.s64 = ctx.r26.s64 + -112;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82535898
	ctx.lr = 0x836AFC0C;
	sub_82535898(ctx, base);
	// bl 0x825349d0
	ctx.lr = 0x836AFC10;
	sub_825349D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836afc30
	if (cr6.eq) goto loc_836AFC30;
	// addi r4,r26,-100
	ctx.r4.s64 = ctx.r26.s64 + -100;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82535898
	ctx.lr = 0x836AFC28;
	sub_82535898(ctx, base);
	// bl 0x825347e8
	ctx.lr = 0x836AFC2C;
	sub_825347E8(ctx, base);
	// stw r3,812(r1)
	PPC_STORE_U32(ctx.r1.u32 + 812, ctx.r3.u32);
loc_836AFC30:
	// addi r4,r26,-88
	ctx.r4.s64 = ctx.r26.s64 + -88;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82535898
	ctx.lr = 0x836AFC3C;
	sub_82535898(ctx, base);
	// bl 0x825349d0
	ctx.lr = 0x836AFC40;
	sub_825349D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836afc60
	if (cr6.eq) goto loc_836AFC60;
	// addi r4,r26,-76
	ctx.r4.s64 = ctx.r26.s64 + -76;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82535898
	ctx.lr = 0x836AFC58;
	sub_82535898(ctx, base);
	// bl 0x825347e8
	ctx.lr = 0x836AFC5C;
	sub_825347E8(ctx, base);
	// stw r3,816(r1)
	PPC_STORE_U32(ctx.r1.u32 + 816, ctx.r3.u32);
loc_836AFC60:
	// addi r4,r26,-64
	ctx.r4.s64 = ctx.r26.s64 + -64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82535898
	ctx.lr = 0x836AFC6C;
	sub_82535898(ctx, base);
	// bl 0x825349d0
	ctx.lr = 0x836AFC70;
	sub_825349D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836afc90
	if (cr6.eq) goto loc_836AFC90;
	// addi r4,r26,-56
	ctx.r4.s64 = ctx.r26.s64 + -56;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82535898
	ctx.lr = 0x836AFC88;
	sub_82535898(ctx, base);
	// bl 0x825347e8
	ctx.lr = 0x836AFC8C;
	sub_825347E8(ctx, base);
	// stw r3,820(r1)
	PPC_STORE_U32(ctx.r1.u32 + 820, ctx.r3.u32);
loc_836AFC90:
	// addi r4,r26,-48
	ctx.r4.s64 = ctx.r26.s64 + -48;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82535898
	ctx.lr = 0x836AFC9C;
	sub_82535898(ctx, base);
	// bl 0x825349d0
	ctx.lr = 0x836AFCA0;
	sub_825349D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836afcc0
	if (cr6.eq) goto loc_836AFCC0;
	// addi r4,r26,-40
	ctx.r4.s64 = ctx.r26.s64 + -40;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82535898
	ctx.lr = 0x836AFCB8;
	sub_82535898(ctx, base);
	// bl 0x825347e8
	ctx.lr = 0x836AFCBC;
	sub_825347E8(ctx, base);
	// stw r3,824(r1)
	PPC_STORE_U32(ctx.r1.u32 + 824, ctx.r3.u32);
loc_836AFCC0:
	// addi r4,r26,-32
	ctx.r4.s64 = ctx.r26.s64 + -32;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82535898
	ctx.lr = 0x836AFCCC;
	sub_82535898(ctx, base);
	// bl 0x825349d0
	ctx.lr = 0x836AFCD0;
	sub_825349D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836afcf0
	if (cr6.eq) goto loc_836AFCF0;
	// addi r4,r26,-24
	ctx.r4.s64 = ctx.r26.s64 + -24;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82535898
	ctx.lr = 0x836AFCE8;
	sub_82535898(ctx, base);
	// bl 0x825347e8
	ctx.lr = 0x836AFCEC;
	sub_825347E8(ctx, base);
	// stw r3,828(r1)
	PPC_STORE_U32(ctx.r1.u32 + 828, ctx.r3.u32);
loc_836AFCF0:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x836afd50
	if (cr6.lt) goto loc_836AFD50;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x836afd40
	if (!cr6.gt) goto loc_836AFD40;
	// addi r11,r25,8
	ctx.r11.s64 = ctx.r25.s64 + 8;
	// stw r25,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r25.u32);
	// stw r21,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r21.u32);
	// addi r6,r1,132
	ctx.r6.s64 = ctx.r1.s64 + 132;
	// stw r11,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r11.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r19,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r19.u32);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// stw r20,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r20.u32);
	// stw r22,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r22.u32);
	// bl 0x8247b270
	ctx.lr = 0x836AFD38;
	sub_8247B270(ctx, base);
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// b 0x836afd44
	goto loc_836AFD44;
loc_836AFD40:
	// li r3,1
	ctx.r3.s64 = 1;
loc_836AFD44:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836afd94
	if (cr6.eq) goto loc_836AFD94;
loc_836AFD50:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add. r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq 0x836afd88
	if (cr0.eq) goto loc_836AFD88;
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x836aee78
	ctx.lr = 0x836AFD78;
	sub_836AEE78(ctx, base);
	// lwz r11,824(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 824);
	// stw r11,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r11.u32);
	// lwz r10,828(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 828);
	// stw r10,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r10.u32);
loc_836AFD88:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
loc_836AFD94:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82535aa0
	ctx.lr = 0x836AFD9C;
	sub_82535AA0(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82535aa0
	ctx.lr = 0x836AFDA4;
	sub_82535AA0(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82535aa0
	ctx.lr = 0x836AFDAC;
	sub_82535AA0(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82535aa0
	ctx.lr = 0x836AFDB4;
	sub_82535AA0(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82535aa0
	ctx.lr = 0x836AFDBC;
	sub_82535AA0(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82535aa0
	ctx.lr = 0x836AFDC4;
	sub_82535AA0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535aa0
	ctx.lr = 0x836AFDCC;
	sub_82535AA0(ctx, base);
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x836aec00
	ctx.lr = 0x836AFDD4;
	sub_836AEC00(ctx, base);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82535128
	ctx.lr = 0x836AFDDC;
	sub_82535128(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x825356f0
	ctx.lr = 0x836AFDE8;
	sub_825356F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82534ae0
	ctx.lr = 0x836AFDF4;
	sub_82534AE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836af4b8
	if (cr6.eq) goto loc_836AF4B8;
loc_836AFE00:
	// addi r4,r26,-16
	ctx.r4.s64 = ctx.r26.s64 + -16;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82536d88
	ctx.lr = 0x836AFE0C;
	sub_82536D88(ctx, base);
	// bl 0x825349d0
	ctx.lr = 0x836AFE10;
	sub_825349D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836afe30
	if (cr6.eq) goto loc_836AFE30;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82536d88
	ctx.lr = 0x836AFE28;
	sub_82536D88(ctx, base);
	// bl 0x825347e8
	ctx.lr = 0x836AFE2C;
	sub_825347E8(ctx, base);
	// stw r3,368(r17)
	PPC_STORE_U32(ctx.r17.u32 + 368, ctx.r3.u32);
loc_836AFE30:
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82535aa0
	ctx.lr = 0x836AFE38;
	sub_82535AA0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,960
	ctx.r1.s64 = ctx.r1.s64 + 960;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836AFE44"))) PPC_WEAK_FUNC(sub_836AFE44);
PPC_FUNC_IMPL(__imp__sub_836AFE44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836AFE48"))) PPC_WEAK_FUNC(sub_836AFE48);
PPC_FUNC_IMPL(__imp__sub_836AFE48) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x836af028
	ctx.lr = 0x836AFE70;
	sub_836AF028(ctx, base);
	// lwz r11,312(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 312);
	// stw r11,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r11.u32);
	// lwz r10,316(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 316);
	// stw r10,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_836AFE98"))) PPC_WEAK_FUNC(sub_836AFE98);
PPC_FUNC_IMPL(__imp__sub_836AFE98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x836AFEA0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d95768
	ctx.lr = 0x836AFEAC;
	sub_82D95768(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r29,r11,-5888
	ctx.r29.s64 = ctx.r11.s64 + -5888;
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824208c8
	ctx.lr = 0x836AFEC4;
	sub_824208C8(ctx, base);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// addi r7,r10,-5076
	ctx.r7.s64 = ctx.r10.s64 + -5076;
	// addi r5,r8,-5092
	ctx.r5.s64 = ctx.r8.s64 + -5092;
	// addi r6,r9,-5088
	ctx.r6.s64 = ctx.r9.s64 + -5088;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r5,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r5.u32);
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r6,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r6.u32);
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// stw r28,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r28.u32);
	// addi r4,r29,28
	ctx.r4.s64 = ctx.r29.s64 + 28;
	// stb r30,316(r31)
	PPC_STORE_U8(ctx.r31.u32 + 316, ctx.r30.u8);
	// li r5,13
	ctx.r5.s64 = 13;
	// bl 0x824208c8
	ctx.lr = 0x836AFF0C;
	sub_824208C8(ctx, base);
	// stw r30,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r30.u32);
	// stw r28,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r28.u32);
	// addi r3,r31,348
	ctx.r3.s64 = ctx.r31.s64 + 348;
	// stw r30,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r30.u32);
	// addi r4,r29,44
	ctx.r4.s64 = ctx.r29.s64 + 44;
	// stb r30,348(r31)
	PPC_STORE_U8(ctx.r31.u32 + 348, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836AFF2C;
	sub_824208C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836AFF38"))) PPC_WEAK_FUNC(sub_836AFF38);
PPC_FUNC_IMPL(__imp__sub_836AFF38) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x836affe0
	sub_836AFFE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836AFF40"))) PPC_WEAK_FUNC(sub_836AFF40);
PPC_FUNC_IMPL(__imp__sub_836AFF40) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x836affe0
	sub_836AFFE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836AFF48"))) PPC_WEAK_FUNC(sub_836AFF48);
PPC_FUNC_IMPL(__imp__sub_836AFF48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x836AFF50;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// addi r8,r11,-5076
	ctx.r8.s64 = ctx.r11.s64 + -5076;
	// addi r7,r10,-5088
	ctx.r7.s64 = ctx.r10.s64 + -5088;
	// addi r6,r9,-5092
	ctx.r6.s64 = ctx.r9.s64 + -5092;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r6,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r6.u32);
	// addi r30,r3,348
	ctx.r30.s64 = ctx.r3.s64 + 348;
	// lwz r5,368(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 368);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x836aff94
	if (cr6.lt) goto loc_836AFF94;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836AFF94;
	sub_8386D088(ctx, base);
loc_836AFF94:
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r28,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r28.u32);
	// addi r31,r29,316
	ctx.r31.s64 = ctx.r29.s64 + 316;
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// stb r28,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r28.u8);
	// lwz r11,336(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836affc0
	if (cr6.lt) goto loc_836AFFC0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836AFFC0;
	sub_8386D088(ctx, base);
loc_836AFFC0:
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// bl 0x82b6a590
	ctx.lr = 0x836AFFD4;
	sub_82B6A590(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836AFFDC"))) PPC_WEAK_FUNC(sub_836AFFDC);
PPC_FUNC_IMPL(__imp__sub_836AFFDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836AFFE0"))) PPC_WEAK_FUNC(sub_836AFFE0);
PPC_FUNC_IMPL(__imp__sub_836AFFE0) {
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
	// bl 0x836aff48
	ctx.lr = 0x836B0000;
	sub_836AFF48(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b0020
	if (cr6.eq) goto loc_836B0020;
	// bl 0x82595188
	ctx.lr = 0x836B0010;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x836B0020;
	sub_825952B8(ctx, base);
loc_836B0020:
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

__attribute__((alias("__imp__sub_836B003C"))) PPC_WEAK_FUNC(sub_836B003C);
PPC_FUNC_IMPL(__imp__sub_836B003C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836B0040"))) PPC_WEAK_FUNC(sub_836B0040);
PPC_FUNC_IMPL(__imp__sub_836B0040) {
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
	ctx.lr = 0x836B005C;
	sub_82EAF8D8(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r4,r11,-5888
	ctx.r4.s64 = ctx.r11.s64 + -5888;
	// li r5,24
	ctx.r5.s64 = 24;
	// bl 0x824208c8
	ctx.lr = 0x836B0070;
	sub_824208C8(ctx, base);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// lis r7,-32216
	ctx.r7.s64 = -2111307776;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r4,r8,-5056
	ctx.r4.s64 = ctx.r8.s64 + -5056;
	// addi r6,r10,-5040
	ctx.r6.s64 = ctx.r10.s64 + -5040;
	// stw r30,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r30.u32);
	// addi r5,r9,-5052
	ctx.r5.s64 = ctx.r9.s64 + -5052;
	// stw r4,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r4.u32);
	// addi r11,r7,-5060
	ctx.r11.s64 = ctx.r7.s64 + -5060;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// stw r5,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r5.u32);
	// addi r3,r31,352
	ctx.r3.s64 = ctx.r31.s64 + 352;
	// stw r11,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r11.u32);
	// li r4,100
	ctx.r4.s64 = 100;
	// stw r30,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r30.u32);
	// stw r30,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r30.u32);
	// std r30,360(r31)
	PPC_STORE_U64(ctx.r31.u32 + 360, ctx.r30.u64);
	// bl 0x836ae9d0
	ctx.lr = 0x836B00C0;
	sub_836AE9D0(ctx, base);
	// stw r30,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_836B00E0"))) PPC_WEAK_FUNC(sub_836B00E0);
PPC_FUNC_IMPL(__imp__sub_836B00E0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x836b00f8
	sub_836B00F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836B00E8"))) PPC_WEAK_FUNC(sub_836B00E8);
PPC_FUNC_IMPL(__imp__sub_836B00E8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x836b00f8
	sub_836B00F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836B00F0"))) PPC_WEAK_FUNC(sub_836B00F0);
PPC_FUNC_IMPL(__imp__sub_836B00F0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-312
	ctx.r3.s64 = ctx.r3.s64 + -312;
	// b 0x836b00f8
	sub_836B00F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836B00F8"))) PPC_WEAK_FUNC(sub_836B00F8);
PPC_FUNC_IMPL(__imp__sub_836B00F8) {
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
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r7,r11,-5040
	ctx.r7.s64 = ctx.r11.s64 + -5040;
	// addi r6,r10,-5052
	ctx.r6.s64 = ctx.r10.s64 + -5052;
	// addi r5,r9,-5056
	ctx.r5.s64 = ctx.r9.s64 + -5056;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r8,-5060
	ctx.r4.s64 = ctx.r8.s64 + -5060;
	// stw r6,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r6.u32);
	// stw r5,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r5.u32);
	// addi r3,r3,352
	ctx.r3.s64 = ctx.r3.s64 + 352;
	// stw r4,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r4.u32);
	// bl 0x836aeb80
	ctx.lr = 0x836B014C;
	sub_836AEB80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eaf978
	ctx.lr = 0x836B0154;
	sub_82EAF978(ctx, base);
	// clrlwi r3,r30,31
	ctx.r3.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x836b0174
	if (cr6.eq) goto loc_836B0174;
	// bl 0x82595188
	ctx.lr = 0x836B0164;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x836B0174;
	sub_825952B8(ctx, base);
loc_836B0174:
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

__attribute__((alias("__imp__sub_836B0190"))) PPC_WEAK_FUNC(sub_836B0190);
PPC_FUNC_IMPL(__imp__sub_836B0190) {
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
	// bl 0x83356798
	ctx.lr = 0x836B01AC;
	sub_83356798(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// li r30,29
	ctx.r30.s64 = 29;
	// addi r10,r11,-2884
	ctx.r10.s64 = ctx.r11.s64 + -2884;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r4,376
	ctx.r4.s64 = 376;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x836B01D0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x836b01e0
	if (cr6.eq) goto loc_836B01E0;
	// bl 0x836afe98
	ctx.lr = 0x836B01DC;
	sub_836AFE98(ctx, base);
	// b 0x836b01e4
	goto loc_836B01E4;
loc_836B01E0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_836B01E4:
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r4,376
	ctx.r4.s64 = 376;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x836B01FC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x836b0210
	if (cr6.eq) goto loc_836B0210;
	// bl 0x836b0040
	ctx.lr = 0x836B0208;
	sub_836B0040(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x836b0214
	goto loc_836B0214;
loc_836B0210:
	// li r11,0
	ctx.r11.s64 = 0;
loc_836B0214:
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_836B0234"))) PPC_WEAK_FUNC(sub_836B0234);
PPC_FUNC_IMPL(__imp__sub_836B0234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836B0238"))) PPC_WEAK_FUNC(sub_836B0238);
PPC_FUNC_IMPL(__imp__sub_836B0238) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x836B0240;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r27,r3,176
	ctx.r27.s64 = ctx.r3.s64 + 176;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82535130
	ctx.lr = 0x836B0254;
	sub_82535130(ctx, base);
	// lwz r11,240(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 240);
	// addi r4,r28,220
	ctx.r4.s64 = ctx.r28.s64 + 220;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836b0268
	if (cr6.lt) goto loc_836B0268;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836B0268:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825346c8
	ctx.lr = 0x836B0270;
	sub_825346C8(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r31,r11,-4776
	ctx.r31.s64 = ctx.r11.s64 + -4776;
	// addi r4,r31,-104
	ctx.r4.s64 = ctx.r31.s64 + -104;
	// bl 0x82536d88
	ctx.lr = 0x836B0284;
	sub_82536D88(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x825369e8
	ctx.lr = 0x836B028C;
	sub_825369E8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82535aa0
	ctx.lr = 0x836B0294;
	sub_82535AA0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,248(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 248);
	// bl 0x82534640
	ctx.lr = 0x836B02A0;
	sub_82534640(ctx, base);
	// addi r4,r31,-96
	ctx.r4.s64 = ctx.r31.s64 + -96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82536d88
	ctx.lr = 0x836B02AC;
	sub_82536D88(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x825369e8
	ctx.lr = 0x836B02B4;
	sub_825369E8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82535aa0
	ctx.lr = 0x836B02BC;
	sub_82535AA0(ctx, base);
	// lwz r10,336(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 336);
	// addi r11,r28,316
	ctx.r11.s64 = ctx.r28.s64 + 316;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836b02d0
	if (cr6.lt) goto loc_836B02D0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_836B02D0:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825346c8
	ctx.lr = 0x836B02DC;
	sub_825346C8(ctx, base);
	// addi r4,r31,-88
	ctx.r4.s64 = ctx.r31.s64 + -88;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82536d88
	ctx.lr = 0x836B02E8;
	sub_82536D88(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x825369e8
	ctx.lr = 0x836B02F0;
	sub_825369E8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82535aa0
	ctx.lr = 0x836B02F8;
	sub_82535AA0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,344(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 344);
	// bl 0x82534640
	ctx.lr = 0x836B0304;
	sub_82534640(ctx, base);
	// addi r4,r31,-80
	ctx.r4.s64 = ctx.r31.s64 + -80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82536d88
	ctx.lr = 0x836B0310;
	sub_82536D88(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x825369e8
	ctx.lr = 0x836B0318;
	sub_825369E8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82535aa0
	ctx.lr = 0x836B0320;
	sub_82535AA0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// ld r4,352(r28)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r28.u32 + 352);
	// bl 0x82534698
	ctx.lr = 0x836B032C;
	sub_82534698(ctx, base);
	// addi r4,r31,-76
	ctx.r4.s64 = ctx.r31.s64 + -76;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82536d88
	ctx.lr = 0x836B0338;
	sub_82536D88(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x825369e8
	ctx.lr = 0x836B0340;
	sub_825369E8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82535aa0
	ctx.lr = 0x836B0348;
	sub_82535AA0(ctx, base);
	// lwz r10,380(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 380);
	// addi r11,r28,360
	ctx.r11.s64 = ctx.r28.s64 + 360;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836b035c
	if (cr6.lt) goto loc_836B035C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_836B035C:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825346c8
	ctx.lr = 0x836B0368;
	sub_825346C8(ctx, base);
	// addi r4,r31,-68
	ctx.r4.s64 = ctx.r31.s64 + -68;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82536d88
	ctx.lr = 0x836B0374;
	sub_82536D88(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x825369e8
	ctx.lr = 0x836B037C;
	sub_825369E8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82535aa0
	ctx.lr = 0x836B0384;
	sub_82535AA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825359d8
	ctx.lr = 0x836B0390;
	sub_825359D8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825359d8
	ctx.lr = 0x836B039C;
	sub_825359D8(ctx, base);
	// lwz r10,412(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 412);
	// addi r11,r28,392
	ctx.r11.s64 = ctx.r28.s64 + 392;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836b03b0
	if (cr6.lt) goto loc_836B03B0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_836B03B0:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825346c8
	ctx.lr = 0x836B03BC;
	sub_825346C8(ctx, base);
	// addi r4,r31,-56
	ctx.r4.s64 = ctx.r31.s64 + -56;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82536d88
	ctx.lr = 0x836B03C8;
	sub_82536D88(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x825369e8
	ctx.lr = 0x836B03D0;
	sub_825369E8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82535aa0
	ctx.lr = 0x836B03D8;
	sub_82535AA0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,420(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 420);
	// bl 0x82534660
	ctx.lr = 0x836B03E4;
	sub_82534660(ctx, base);
	// addi r4,r31,-48
	ctx.r4.s64 = ctx.r31.s64 + -48;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82536d88
	ctx.lr = 0x836B03F0;
	sub_82536D88(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x825369e8
	ctx.lr = 0x836B03F8;
	sub_825369E8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82535aa0
	ctx.lr = 0x836B0400;
	sub_82535AA0(ctx, base);
	// lwz r10,424(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 424);
	// lwz r11,432(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 432);
	// addi r29,r28,424
	ctx.r29.s64 = ctx.r28.s64 + 424;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r30,r11
	ctx.r30.s64 = ctx.r11.s32;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r9
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, xer);
	// beq cr6,0x836b0464
	if (cr6.eq) goto loc_836B0464;
loc_836B0420:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82534660
	ctx.lr = 0x836B042C;
	sub_82534660(ctx, base);
	// addi r4,r31,-40
	ctx.r4.s64 = ctx.r31.s64 + -40;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82536d88
	ctx.lr = 0x836B0438;
	sub_82536D88(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82536d38
	ctx.lr = 0x836B0440;
	sub_82536D38(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82535aa0
	ctx.lr = 0x836B0448;
	sub_82535AA0(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// bne cr6,0x836b0420
	if (!cr6.eq) goto loc_836B0420;
loc_836B0464:
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82536d88
	ctx.lr = 0x836B0470;
	sub_82536D88(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x825369e8
	ctx.lr = 0x836B0478;
	sub_825369E8(ctx, base);
	// lwz r11,440(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 440);
	// lwz r10,448(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 448);
	// addi r29,r28,440
	ctx.r29.s64 = ctx.r28.s64 + 440;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r30,r10
	ctx.r30.s64 = ctx.r10.s32;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// beq cr6,0x836b04dc
	if (cr6.eq) goto loc_836B04DC;
loc_836B0498:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82534660
	ctx.lr = 0x836B04A4;
	sub_82534660(ctx, base);
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82536d88
	ctx.lr = 0x836B04B0;
	sub_82536D88(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82536d38
	ctx.lr = 0x836B04B8;
	sub_82536D38(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82535aa0
	ctx.lr = 0x836B04C0;
	sub_82535AA0(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// bne cr6,0x836b0498
	if (!cr6.eq) goto loc_836B0498;
loc_836B04DC:
	// lwz r11,456(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 456);
	// addi r29,r28,456
	ctx.r29.s64 = ctx.r28.s64 + 456;
	// lwz r10,464(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 464);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r30,r10
	ctx.r30.s64 = ctx.r10.s32;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// beq cr6,0x836b0540
	if (cr6.eq) goto loc_836B0540;
loc_836B04FC:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82534660
	ctx.lr = 0x836B0508;
	sub_82534660(ctx, base);
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82536d88
	ctx.lr = 0x836B0514;
	sub_82536D88(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82536d38
	ctx.lr = 0x836B051C;
	sub_82536D38(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82535aa0
	ctx.lr = 0x836B0524;
	sub_82535AA0(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// bne cr6,0x836b04fc
	if (!cr6.eq) goto loc_836B04FC;
loc_836B0540:
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82536d88
	ctx.lr = 0x836B054C;
	sub_82536D88(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x825369e8
	ctx.lr = 0x836B0554;
	sub_825369E8(ctx, base);
	// lwz r10,492(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 492);
	// addi r11,r28,472
	ctx.r11.s64 = ctx.r28.s64 + 472;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836b0568
	if (cr6.lt) goto loc_836B0568;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_836B0568:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825346c8
	ctx.lr = 0x836B0574;
	sub_825346C8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82536d88
	ctx.lr = 0x836B0580;
	sub_82536D88(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x825369e8
	ctx.lr = 0x836B0588;
	sub_825369E8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82535aa0
	ctx.lr = 0x836B0590;
	sub_82535AA0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535aa0
	ctx.lr = 0x836B0598;
	sub_82535AA0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535aa0
	ctx.lr = 0x836B05A0;
	sub_82535AA0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836B05AC"))) PPC_WEAK_FUNC(sub_836B05AC);
PPC_FUNC_IMPL(__imp__sub_836B05AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836B05B0"))) PPC_WEAK_FUNC(sub_836B05B0);
PPC_FUNC_IMPL(__imp__sub_836B05B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x836B05B8;
	__savegprlr_25(ctx, base);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82a8c428
	ctx.lr = 0x836B05D4;
	sub_82A8C428(ctx, base);
	// lwz r10,240(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 240);
	// addi r11,r28,220
	ctx.r11.s64 = ctx.r28.s64 + 220;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836b05ec
	if (cr6.lt) goto loc_836B05EC;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x836b05f0
	goto loc_836B05F0;
loc_836B05EC:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_836B05F0:
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r29,r11,-4560
	ctx.r29.s64 = ctx.r11.s64 + -4560;
	// addi r4,r29,-200
	ctx.r4.s64 = ctx.r29.s64 + -200;
	// bl 0x82473550
	ctx.lr = 0x836B0604;
	sub_82473550(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82473550
	ctx.lr = 0x836B060C;
	sub_82473550(ctx, base);
	// addi r4,r29,-204
	ctx.r4.s64 = ctx.r29.s64 + -204;
	// bl 0x82473550
	ctx.lr = 0x836B0614;
	sub_82473550(ctx, base);
	// addi r4,r29,-188
	ctx.r4.s64 = ctx.r29.s64 + -188;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// lwz r31,248(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 248);
	// bl 0x82473550
	ctx.lr = 0x836B0624;
	sub_82473550(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82474170
	ctx.lr = 0x836B062C;
	sub_82474170(ctx, base);
	// addi r4,r29,-192
	ctx.r4.s64 = ctx.r29.s64 + -192;
	// bl 0x82473550
	ctx.lr = 0x836B0634;
	sub_82473550(ctx, base);
	// addi r4,r28,316
	ctx.r4.s64 = ctx.r28.s64 + 316;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x83734458
	ctx.lr = 0x836B0640;
	sub_83734458(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836b0654
	if (cr6.lt) goto loc_836B0654;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x836b0658
	goto loc_836B0658;
loc_836B0654:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_836B0658:
	// addi r4,r29,-176
	ctx.r4.s64 = ctx.r29.s64 + -176;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82473550
	ctx.lr = 0x836B0664;
	sub_82473550(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82473550
	ctx.lr = 0x836B066C;
	sub_82473550(ctx, base);
	// addi r4,r29,-180
	ctx.r4.s64 = ctx.r29.s64 + -180;
	// bl 0x82473550
	ctx.lr = 0x836B0674;
	sub_82473550(ctx, base);
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836b0688
	if (cr6.lt) goto loc_836B0688;
	// lwz r3,208(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x8386d088
	ctx.lr = 0x836B0688;
	sub_8386D088(ctx, base);
loc_836B0688:
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r31,344(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 344);
	// li r26,15
	ctx.r26.s64 = 15;
	// stw r27,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r27.u32);
	// addi r4,r29,-160
	ctx.r4.s64 = ctx.r29.s64 + -160;
	// stw r26,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r26.u32);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// stb r27,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r27.u8);
	// bl 0x82473550
	ctx.lr = 0x836B06AC;
	sub_82473550(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82474170
	ctx.lr = 0x836B06B4;
	sub_82474170(ctx, base);
	// addi r4,r29,-164
	ctx.r4.s64 = ctx.r29.s64 + -164;
	// bl 0x82473550
	ctx.lr = 0x836B06BC;
	sub_82473550(ctx, base);
	// addi r4,r29,-148
	ctx.r4.s64 = ctx.r29.s64 + -148;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// ld r31,352(r28)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r28.u32 + 352);
	// bl 0x82473550
	ctx.lr = 0x836B06CC;
	sub_82473550(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82e4b808
	ctx.lr = 0x836B06D4;
	sub_82E4B808(ctx, base);
	// addi r4,r29,-152
	ctx.r4.s64 = ctx.r29.s64 + -152;
	// bl 0x82473550
	ctx.lr = 0x836B06DC;
	sub_82473550(ctx, base);
	// addi r4,r28,360
	ctx.r4.s64 = ctx.r28.s64 + 360;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83734458
	ctx.lr = 0x836B06E8;
	sub_83734458(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836b06fc
	if (cr6.lt) goto loc_836B06FC;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x836b0700
	goto loc_836B0700;
loc_836B06FC:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_836B0700:
	// addi r4,r29,-136
	ctx.r4.s64 = ctx.r29.s64 + -136;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82473550
	ctx.lr = 0x836B070C;
	sub_82473550(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82473550
	ctx.lr = 0x836B0714;
	sub_82473550(ctx, base);
	// addi r4,r29,-140
	ctx.r4.s64 = ctx.r29.s64 + -140;
	// bl 0x82473550
	ctx.lr = 0x836B071C;
	sub_82473550(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836b0730
	if (cr6.lt) goto loc_836B0730;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x8386d088
	ctx.lr = 0x836B0730;
	sub_8386D088(ctx, base);
loc_836B0730:
	// stw r26,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r26.u32);
	// addi r4,r28,392
	ctx.r4.s64 = ctx.r28.s64 + 392;
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stb r27,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r27.u8);
	// bl 0x83734458
	ctx.lr = 0x836B0748;
	sub_83734458(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836b075c
	if (cr6.lt) goto loc_836B075C;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x836b0760
	goto loc_836B0760;
loc_836B075C:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_836B0760:
	// addi r4,r29,-120
	ctx.r4.s64 = ctx.r29.s64 + -120;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82473550
	ctx.lr = 0x836B076C;
	sub_82473550(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82473550
	ctx.lr = 0x836B0774;
	sub_82473550(ctx, base);
	// addi r4,r29,-124
	ctx.r4.s64 = ctx.r29.s64 + -124;
	// bl 0x82473550
	ctx.lr = 0x836B077C;
	sub_82473550(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836b0790
	if (cr6.lt) goto loc_836B0790;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x8386d088
	ctx.lr = 0x836B0790;
	sub_8386D088(ctx, base);
loc_836B0790:
	// stw r26,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r26.u32);
	// addi r4,r29,-96
	ctx.r4.s64 = ctx.r29.s64 + -96;
	// stw r27,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r27.u32);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// stb r27,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r27.u8);
	// lwz r31,420(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 420);
	// bl 0x82473550
	ctx.lr = 0x836B07AC;
	sub_82473550(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82474050
	ctx.lr = 0x836B07B4;
	sub_82474050(ctx, base);
	// addi r4,r29,-100
	ctx.r4.s64 = ctx.r29.s64 + -100;
	// bl 0x82473550
	ctx.lr = 0x836B07BC;
	sub_82473550(ctx, base);
	// addi r4,r29,-76
	ctx.r4.s64 = ctx.r29.s64 + -76;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82473550
	ctx.lr = 0x836B07C8;
	sub_82473550(ctx, base);
	// lwz r11,424(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 424);
	// lwz r10,432(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 432);
	// addi r30,r28,424
	ctx.r30.s64 = ctx.r28.s64 + 424;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r31,r10
	ctx.r31.s64 = ctx.r10.s32;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x836b0834
	if (cr6.eq) goto loc_836B0834;
loc_836B07E8:
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82474050
	ctx.lr = 0x836B07F4;
	sub_82474050(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x836b081c
	if (cr6.eq) goto loc_836B081C;
	// addi r4,r29,-52
	ctx.r4.s64 = ctx.r29.s64 + -52;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82473550
	ctx.lr = 0x836B081C;
	sub_82473550(ctx, base);
loc_836B081C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x836b07e8
	if (!cr6.eq) goto loc_836B07E8;
loc_836B0834:
	// addi r4,r29,-48
	ctx.r4.s64 = ctx.r29.s64 + -48;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82473550
	ctx.lr = 0x836B0840;
	sub_82473550(ctx, base);
	// addi r4,r29,-44
	ctx.r4.s64 = ctx.r29.s64 + -44;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82473550
	ctx.lr = 0x836B084C;
	sub_82473550(ctx, base);
	// lwz r11,440(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 440);
	// lwz r10,448(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 448);
	// addi r30,r28,440
	ctx.r30.s64 = ctx.r28.s64 + 440;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r31,r10
	ctx.r31.s64 = ctx.r10.s32;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x836b08b8
	if (cr6.eq) goto loc_836B08B8;
loc_836B086C:
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82474050
	ctx.lr = 0x836B0878;
	sub_82474050(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x836b08a0
	if (cr6.eq) goto loc_836B08A0;
	// addi r4,r29,-32
	ctx.r4.s64 = ctx.r29.s64 + -32;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82473550
	ctx.lr = 0x836B08A0;
	sub_82473550(ctx, base);
loc_836B08A0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x836b086c
	if (!cr6.eq) goto loc_836B086C;
loc_836B08B8:
	// addi r4,r29,-28
	ctx.r4.s64 = ctx.r29.s64 + -28;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82473550
	ctx.lr = 0x836B08C4;
	sub_82473550(ctx, base);
	// addi r4,r29,-24
	ctx.r4.s64 = ctx.r29.s64 + -24;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82473550
	ctx.lr = 0x836B08D0;
	sub_82473550(ctx, base);
	// lwz r11,456(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 456);
	// lwz r10,464(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 464);
	// addi r30,r28,456
	ctx.r30.s64 = ctx.r28.s64 + 456;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r31,r10
	ctx.r31.s64 = ctx.r10.s32;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x836b093c
	if (cr6.eq) goto loc_836B093C;
loc_836B08F0:
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82474050
	ctx.lr = 0x836B08FC;
	sub_82474050(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x836b0924
	if (cr6.eq) goto loc_836B0924;
	// addi r4,r29,-8
	ctx.r4.s64 = ctx.r29.s64 + -8;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82473550
	ctx.lr = 0x836B0924;
	sub_82473550(ctx, base);
loc_836B0924:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x836b08f0
	if (!cr6.eq) goto loc_836B08F0;
loc_836B093C:
	// addi r4,r29,-4
	ctx.r4.s64 = ctx.r29.s64 + -4;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82473550
	ctx.lr = 0x836B0948;
	sub_82473550(ctx, base);
	// addi r4,r28,472
	ctx.r4.s64 = ctx.r28.s64 + 472;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x83734458
	ctx.lr = 0x836B0954;
	sub_83734458(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836b0968
	if (cr6.lt) goto loc_836B0968;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x836b096c
	goto loc_836B096C;
loc_836B0968:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_836B096C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82473550
	ctx.lr = 0x836B0978;
	sub_82473550(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82473550
	ctx.lr = 0x836B0980;
	sub_82473550(ctx, base);
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836b0994
	if (cr6.lt) goto loc_836B0994;
	// lwz r3,176(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x8386d088
	ctx.lr = 0x836B0994;
	sub_8386D088(ctx, base);
loc_836B0994:
	// stw r26,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r26.u32);
	// addi r4,r1,264
	ctx.r4.s64 = ctx.r1.s64 + 264;
	// stw r27,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r27.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r27,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r27.u8);
	// bl 0x82a79bf8
	ctx.lr = 0x836B09AC;
	sub_82A79BF8(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x836b09c0
	if (!cr6.lt) goto loc_836B09C0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_836B09C0:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836B09C4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836b09c4
	if (!cr6.eq) goto loc_836B09C4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836B09E8;
	sub_824208C8(ctx, base);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836b09fc
	if (cr6.lt) goto loc_836B09FC;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82416268
	ctx.lr = 0x836B09FC;
	sub_82416268(ctx, base);
loc_836B09FC:
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// stb r27,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r27.u8);
	// bl 0x82a79160
	ctx.lr = 0x836B0A10;
	sub_82A79160(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// addi r10,r11,15320
	ctx.r10.s64 = ctx.r11.s64 + 15320;
	// stw r10,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r10.u32);
	// bl 0x831ccf00
	ctx.lr = 0x836B0A24;
	sub_831CCF00(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836B0A30"))) PPC_WEAK_FUNC(sub_836B0A30);
PPC_FUNC_IMPL(__imp__sub_836B0A30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdabc
	ctx.lr = 0x836B0A38;
	__savegprlr_17(ctx, base);
	// stwu r1,-960(r1)
	ea = -960 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r18,r3,176
	ctx.r18.s64 = ctx.r3.s64 + 176;
	// addi r26,r11,-4048
	ctx.r26.s64 = ctx.r11.s64 + -4048;
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// addi r4,r26,-500
	ctx.r4.s64 = ctx.r26.s64 + -500;
	// bl 0x82536d88
	ctx.lr = 0x836B0A58;
	sub_82536D88(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x836B0A5C;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_836B0A64:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836b0a64
	if (!cr6.eq) goto loc_836B0A64;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r17,220
	ctx.r3.s64 = ctx.r17.s64 + 220;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836B0A88;
	sub_824208C8(ctx, base);
	// addi r4,r26,-492
	ctx.r4.s64 = ctx.r26.s64 + -492;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82536d88
	ctx.lr = 0x836B0A94;
	sub_82536D88(ctx, base);
	// bl 0x825347e8
	ctx.lr = 0x836B0A98;
	sub_825347E8(ctx, base);
	// stw r3,248(r17)
	PPC_STORE_U32(ctx.r17.u32 + 248, ctx.r3.u32);
	// addi r4,r26,-484
	ctx.r4.s64 = ctx.r26.s64 + -484;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82536d88
	ctx.lr = 0x836B0AA8;
	sub_82536D88(ctx, base);
	// bl 0x82534a18
	ctx.lr = 0x836B0AAC;
	sub_82534A18(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x836b0ad4
	if (cr6.eq) goto loc_836B0AD4;
	// addi r4,r26,-476
	ctx.r4.s64 = ctx.r26.s64 + -476;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82536d88
	ctx.lr = 0x836B0AC4;
	sub_82536D88(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x836B0AC8;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r17,316
	ctx.r3.s64 = ctx.r17.s64 + 316;
	// bl 0x83601998
	ctx.lr = 0x836B0AD4;
	sub_83601998(ctx, base);
loc_836B0AD4:
	// addi r4,r26,-468
	ctx.r4.s64 = ctx.r26.s64 + -468;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82536d88
	ctx.lr = 0x836B0AE0;
	sub_82536D88(ctx, base);
	// bl 0x825349d0
	ctx.lr = 0x836B0AE4;
	sub_825349D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b0b04
	if (cr6.eq) goto loc_836B0B04;
	// addi r4,r26,-460
	ctx.r4.s64 = ctx.r26.s64 + -460;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82536d88
	ctx.lr = 0x836B0AFC;
	sub_82536D88(ctx, base);
	// bl 0x825347e8
	ctx.lr = 0x836B0B00;
	sub_825347E8(ctx, base);
	// stw r3,348(r17)
	PPC_STORE_U32(ctx.r17.u32 + 348, ctx.r3.u32);
loc_836B0B04:
	// addi r4,r26,-452
	ctx.r4.s64 = ctx.r26.s64 + -452;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82536d88
	ctx.lr = 0x836B0B10;
	sub_82536D88(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82536838
	ctx.lr = 0x836B0B1C;
	sub_82536838(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82534a38
	ctx.lr = 0x836B0B24;
	sub_82534A38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b14e8
	if (cr6.eq) goto loc_836B14E8;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x825356a0
	ctx.lr = 0x836B0B3C;
	sub_825356A0(ctx, base);
	// addi r25,r17,352
	ctx.r25.s64 = ctx.r17.s64 + 352;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x836aeb80
	ctx.lr = 0x836B0B48;
	sub_836AEB80(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x825356f0
	ctx.lr = 0x836B0B54;
	sub_825356F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82534ae0
	ctx.lr = 0x836B0B60;
	sub_82534AE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x836b14e8
	if (!cr6.eq) goto loc_836B14E8;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r8,11
	ctx.r8.s64 = 720896;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32204
	ctx.r9.s64 = -2110521344;
	// addi r21,r25,4
	ctx.r21.s64 = ctx.r25.s64 + 4;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r30,4
	ctx.r30.s64 = 4;
	// ori r29,r8,1
	ctx.r29.u64 = ctx.r8.u64 | 1;
	// li r19,8
	ctx.r19.s64 = 8;
	// li r20,320
	ctx.r20.s64 = 320;
	// addi r22,r11,-5108
	ctx.r22.s64 = ctx.r11.s64 + -5108;
	// addi r28,r10,8980
	ctx.r28.s64 = ctx.r10.s64 + 8980;
	// addi r27,r9,26164
	ctx.r27.s64 = ctx.r9.s64 + 26164;
loc_836B0BA0:
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82535118
	ctx.lr = 0x836B0BA8;
	sub_82535118(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x836aed60
	ctx.lr = 0x836B0BB4;
	sub_836AED60(ctx, base);
	// stw r23,824(r1)
	PPC_STORE_U32(ctx.r1.u32 + 824, ctx.r23.u32);
	// stw r23,828(r1)
	PPC_STORE_U32(ctx.r1.u32 + 828, ctx.r23.u32);
	// addi r4,r26,-440
	ctx.r4.s64 = ctx.r26.s64 + -440;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82535898
	ctx.lr = 0x836B0BC8;
	sub_82535898(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82536838
	ctx.lr = 0x836B0BD4;
	sub_82536838(ctx, base);
	// addi r4,r26,-432
	ctx.r4.s64 = ctx.r26.s64 + -432;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535898
	ctx.lr = 0x836B0BE0;
	sub_82535898(ctx, base);
	// bl 0x825349d0
	ctx.lr = 0x836B0BE4;
	sub_825349D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b0c04
	if (cr6.eq) goto loc_836B0C04;
	// addi r4,r26,-428
	ctx.r4.s64 = ctx.r26.s64 + -428;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535898
	ctx.lr = 0x836B0BFC;
	sub_82535898(ctx, base);
	// bl 0x825347e8
	ctx.lr = 0x836B0C00;
	sub_825347E8(ctx, base);
	// stw r3,512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 512, ctx.r3.u32);
loc_836B0C04:
	// addi r4,r26,-424
	ctx.r4.s64 = ctx.r26.s64 + -424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535898
	ctx.lr = 0x836B0C10;
	sub_82535898(ctx, base);
	// bl 0x82534a18
	ctx.lr = 0x836B0C14;
	sub_82534A18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b0c3c
	if (cr6.eq) goto loc_836B0C3C;
	// addi r4,r26,-416
	ctx.r4.s64 = ctx.r26.s64 + -416;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535898
	ctx.lr = 0x836B0C2C;
	sub_82535898(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x836B0C30;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,516
	ctx.r3.s64 = ctx.r1.s64 + 516;
	// bl 0x83601998
	ctx.lr = 0x836B0C3C;
	sub_83601998(ctx, base);
loc_836B0C3C:
	// addi r4,r26,-408
	ctx.r4.s64 = ctx.r26.s64 + -408;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535898
	ctx.lr = 0x836B0C48;
	sub_82535898(ctx, base);
	// bl 0x825349d0
	ctx.lr = 0x836B0C4C;
	sub_825349D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b0c6c
	if (cr6.eq) goto loc_836B0C6C;
	// addi r4,r26,-400
	ctx.r4.s64 = ctx.r26.s64 + -400;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535898
	ctx.lr = 0x836B0C64;
	sub_82535898(ctx, base);
	// bl 0x82534850
	ctx.lr = 0x836B0C68;
	sub_82534850(ctx, base);
	// std r3,544(r1)
	PPC_STORE_U64(ctx.r1.u32 + 544, ctx.r3.u64);
loc_836B0C6C:
	// addi r4,r26,-392
	ctx.r4.s64 = ctx.r26.s64 + -392;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535898
	ctx.lr = 0x836B0C78;
	sub_82535898(ctx, base);
	// bl 0x82534a18
	ctx.lr = 0x836B0C7C;
	sub_82534A18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b0ca4
	if (cr6.eq) goto loc_836B0CA4;
	// addi r4,r26,-380
	ctx.r4.s64 = ctx.r26.s64 + -380;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535898
	ctx.lr = 0x836B0C94;
	sub_82535898(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x836B0C98;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,552
	ctx.r3.s64 = ctx.r1.s64 + 552;
	// bl 0x83601998
	ctx.lr = 0x836B0CA4;
	sub_83601998(ctx, base);
loc_836B0CA4:
	// addi r4,r26,-368
	ctx.r4.s64 = ctx.r26.s64 + -368;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535898
	ctx.lr = 0x836B0CB0;
	sub_82535898(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82536838
	ctx.lr = 0x836B0CBC;
	sub_82536838(ctx, base);
	// addi r4,r26,-360
	ctx.r4.s64 = ctx.r26.s64 + -360;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82535898
	ctx.lr = 0x836B0CC8;
	sub_82535898(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82536838
	ctx.lr = 0x836B0CD4;
	sub_82536838(ctx, base);
	// addi r4,r26,-352
	ctx.r4.s64 = ctx.r26.s64 + -352;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82535898
	ctx.lr = 0x836B0CE0;
	sub_82535898(ctx, base);
	// bl 0x82534a18
	ctx.lr = 0x836B0CE4;
	sub_82534A18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b0d0c
	if (cr6.eq) goto loc_836B0D0C;
	// addi r4,r26,-344
	ctx.r4.s64 = ctx.r26.s64 + -344;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82535898
	ctx.lr = 0x836B0CFC;
	sub_82535898(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x836B0D00;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,584
	ctx.r3.s64 = ctx.r1.s64 + 584;
	// bl 0x83601998
	ctx.lr = 0x836B0D0C;
	sub_83601998(ctx, base);
loc_836B0D0C:
	// addi r4,r26,-336
	ctx.r4.s64 = ctx.r26.s64 + -336;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82535898
	ctx.lr = 0x836B0D18;
	sub_82535898(ctx, base);
	// bl 0x825349d0
	ctx.lr = 0x836B0D1C;
	sub_825349D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b0d3c
	if (cr6.eq) goto loc_836B0D3C;
	// addi r4,r26,-328
	ctx.r4.s64 = ctx.r26.s64 + -328;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82535898
	ctx.lr = 0x836B0D34;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x836B0D38;
	sub_82534770(ctx, base);
	// stw r3,612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 612, ctx.r3.u32);
loc_836B0D3C:
	// addi r4,r26,-320
	ctx.r4.s64 = ctx.r26.s64 + -320;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82535898
	ctx.lr = 0x836B0D48;
	sub_82535898(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82536838
	ctx.lr = 0x836B0D54;
	sub_82536838(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82534a38
	ctx.lr = 0x836B0D5C;
	sub_82534A38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b0e68
	if (cr6.eq) goto loc_836B0E68;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x825356a0
	ctx.lr = 0x836B0D74;
	sub_825356A0(ctx, base);
	// addi r3,r1,616
	ctx.r3.s64 = ctx.r1.s64 + 616;
	// bl 0x824238b8
	ctx.lr = 0x836B0D7C;
	sub_824238B8(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,488
	ctx.r3.s64 = ctx.r1.s64 + 488;
	// bl 0x825356f0
	ctx.lr = 0x836B0D88;
	sub_825356F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82534ae0
	ctx.lr = 0x836B0D94;
	sub_82534AE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x836b0e68
	if (!cr6.eq) goto loc_836B0E68;
loc_836B0DA0:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82535118
	ctx.lr = 0x836B0DA8;
	sub_82535118(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x836B0DAC;
	sub_82534770(ctx, base);
	// lwz r10,616(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 616);
	// lwz r11,620(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 620);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// blt cr6,0x836b0e1c
	if (cr6.lt) goto loc_836B0E1C;
	// addi r4,r10,2
	ctx.r4.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// ble cr6,0x836b0e0c
	if (!cr6.gt) goto loc_836B0E0C;
	// addi r11,r1,624
	ctx.r11.s64 = ctx.r1.s64 + 624;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// addi r10,r1,616
	ctx.r10.s64 = ctx.r1.s64 + 616;
	// stw r30,428(r1)
	PPC_STORE_U32(ctx.r1.u32 + 428, ctx.r30.u32);
	// addi r9,r1,620
	ctx.r9.s64 = ctx.r1.s64 + 620;
	// stw r11,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r11.u32);
	// stw r10,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r10.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r9,424(r1)
	PPC_STORE_U32(ctx.r1.u32 + 424, ctx.r9.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r30,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r30.u32);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x8247b270
	ctx.lr = 0x836B0E00;
	sub_8247B270(ctx, base);
	// lwz r10,616(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 616);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// b 0x836b0e10
	goto loc_836B0E10;
loc_836B0E0C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_836B0E10:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b0e3c
	if (cr6.eq) goto loc_836B0E3C;
loc_836B0E1C:
	// lwz r11,624(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 624);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x836b0e34
	if (cr0.eq) goto loc_836B0E34;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// lwz r10,616(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 616);
loc_836B0E34:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stw r11,616(r1)
	PPC_STORE_U32(ctx.r1.u32 + 616, ctx.r11.u32);
loc_836B0E3C:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82535128
	ctx.lr = 0x836B0E44;
	sub_82535128(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,488
	ctx.r3.s64 = ctx.r1.s64 + 488;
	// bl 0x825356f0
	ctx.lr = 0x836B0E50;
	sub_825356F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82534ae0
	ctx.lr = 0x836B0E5C;
	sub_82534AE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b0da0
	if (cr6.eq) goto loc_836B0DA0;
loc_836B0E68:
	// addi r4,r26,-312
	ctx.r4.s64 = ctx.r26.s64 + -312;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82535898
	ctx.lr = 0x836B0E74;
	sub_82535898(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82536838
	ctx.lr = 0x836B0E80;
	sub_82536838(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82534a38
	ctx.lr = 0x836B0E88;
	sub_82534A38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b0fe0
	if (cr6.eq) goto loc_836B0FE0;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x825356a0
	ctx.lr = 0x836B0EA0;
	sub_825356A0(ctx, base);
	// addi r11,r1,640
	ctx.r11.s64 = ctx.r1.s64 + 640;
	// addi r10,r1,632
	ctx.r10.s64 = ctx.r1.s64 + 632;
	// stw r27,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r27.u32);
	// addi r9,r1,636
	ctx.r9.s64 = ctx.r1.s64 + 636;
	// stw r11,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r11.u32);
	// stw r10,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r10.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r9,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r9.u32);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// stw r30,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r30.u32);
	// stw r30,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r30.u32);
	// bl 0x8247b7d8
	ctx.lr = 0x836B0ED0;
	sub_8247B7D8(ctx, base);
	// lwz r3,640(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 640);
	// stw r23,632(r1)
	PPC_STORE_U32(ctx.r1.u32 + 632, ctx.r23.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x836b0ef0
	if (cr6.eq) goto loc_836B0EF0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8247b268
	ctx.lr = 0x836B0EE8;
	sub_8247B268(ctx, base);
	// stw r23,636(r1)
	PPC_STORE_U32(ctx.r1.u32 + 636, ctx.r23.u32);
	// stw r23,640(r1)
	PPC_STORE_U32(ctx.r1.u32 + 640, ctx.r23.u32);
loc_836B0EF0:
	// stw r28,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r28.u32);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x825356f0
	ctx.lr = 0x836B0F00;
	sub_825356F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82534ae0
	ctx.lr = 0x836B0F0C;
	sub_82534AE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x836b0fe0
	if (!cr6.eq) goto loc_836B0FE0;
loc_836B0F18:
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82535118
	ctx.lr = 0x836B0F20;
	sub_82535118(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x836B0F24;
	sub_82534770(ctx, base);
	// lwz r10,632(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 632);
	// lwz r11,636(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 636);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// blt cr6,0x836b0f94
	if (cr6.lt) goto loc_836B0F94;
	// addi r4,r10,2
	ctx.r4.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// ble cr6,0x836b0f84
	if (!cr6.gt) goto loc_836B0F84;
	// addi r11,r1,640
	ctx.r11.s64 = ctx.r1.s64 + 640;
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// addi r10,r1,632
	ctx.r10.s64 = ctx.r1.s64 + 632;
	// stw r30,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r30.u32);
	// addi r9,r1,636
	ctx.r9.s64 = ctx.r1.s64 + 636;
	// stw r11,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r11.u32);
	// stw r10,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r10.u32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r9,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r9.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r30,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r30.u32);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x8247b270
	ctx.lr = 0x836B0F78;
	sub_8247B270(ctx, base);
	// lwz r10,632(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 632);
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// b 0x836b0f88
	goto loc_836B0F88;
loc_836B0F84:
	// li r3,1
	ctx.r3.s64 = 1;
loc_836B0F88:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b0fb4
	if (cr6.eq) goto loc_836B0FB4;
loc_836B0F94:
	// lwz r11,640(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 640);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x836b0fac
	if (cr0.eq) goto loc_836B0FAC;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// lwz r10,632(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 632);
loc_836B0FAC:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stw r11,632(r1)
	PPC_STORE_U32(ctx.r1.u32 + 632, ctx.r11.u32);
loc_836B0FB4:
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82535128
	ctx.lr = 0x836B0FBC;
	sub_82535128(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x825356f0
	ctx.lr = 0x836B0FC8;
	sub_825356F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82534ae0
	ctx.lr = 0x836B0FD4;
	sub_82534AE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b0f18
	if (cr6.eq) goto loc_836B0F18;
loc_836B0FE0:
	// addi r4,r26,-308
	ctx.r4.s64 = ctx.r26.s64 + -308;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82535898
	ctx.lr = 0x836B0FEC;
	sub_82535898(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82536838
	ctx.lr = 0x836B0FF8;
	sub_82536838(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82534a38
	ctx.lr = 0x836B1000;
	sub_82534A38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b1158
	if (cr6.eq) goto loc_836B1158;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x825356a0
	ctx.lr = 0x836B1018;
	sub_825356A0(ctx, base);
	// addi r11,r1,656
	ctx.r11.s64 = ctx.r1.s64 + 656;
	// addi r10,r1,648
	ctx.r10.s64 = ctx.r1.s64 + 648;
	// stw r27,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r27.u32);
	// addi r9,r1,652
	ctx.r9.s64 = ctx.r1.s64 + 652;
	// stw r11,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r11.u32);
	// stw r10,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r10.u32);
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// stw r9,392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 392, ctx.r9.u32);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// stw r30,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, ctx.r30.u32);
	// stw r30,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r30.u32);
	// bl 0x8247b7d8
	ctx.lr = 0x836B1048;
	sub_8247B7D8(ctx, base);
	// lwz r3,656(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 656);
	// stw r23,648(r1)
	PPC_STORE_U32(ctx.r1.u32 + 648, ctx.r23.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x836b1068
	if (cr6.eq) goto loc_836B1068;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8247b268
	ctx.lr = 0x836B1060;
	sub_8247B268(ctx, base);
	// stw r23,652(r1)
	PPC_STORE_U32(ctx.r1.u32 + 652, ctx.r23.u32);
	// stw r23,656(r1)
	PPC_STORE_U32(ctx.r1.u32 + 656, ctx.r23.u32);
loc_836B1068:
	// stw r28,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r28.u32);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,472
	ctx.r3.s64 = ctx.r1.s64 + 472;
	// bl 0x825356f0
	ctx.lr = 0x836B1078;
	sub_825356F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82534ae0
	ctx.lr = 0x836B1084;
	sub_82534AE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x836b1158
	if (!cr6.eq) goto loc_836B1158;
loc_836B1090:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82535118
	ctx.lr = 0x836B1098;
	sub_82535118(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x836B109C;
	sub_82534770(ctx, base);
	// lwz r10,648(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 648);
	// lwz r11,652(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 652);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// blt cr6,0x836b110c
	if (cr6.lt) goto loc_836B110C;
	// addi r4,r10,2
	ctx.r4.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// ble cr6,0x836b10fc
	if (!cr6.gt) goto loc_836B10FC;
	// addi r11,r1,656
	ctx.r11.s64 = ctx.r1.s64 + 656;
	// stw r27,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r27.u32);
	// addi r10,r1,648
	ctx.r10.s64 = ctx.r1.s64 + 648;
	// stw r30,460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 460, ctx.r30.u32);
	// addi r9,r1,652
	ctx.r9.s64 = ctx.r1.s64 + 652;
	// stw r11,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r11.u32);
	// stw r10,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r10.u32);
	// addi r6,r1,136
	ctx.r6.s64 = ctx.r1.s64 + 136;
	// stw r9,456(r1)
	PPC_STORE_U32(ctx.r1.u32 + 456, ctx.r9.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r30,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r30.u32);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x8247b270
	ctx.lr = 0x836B10F0;
	sub_8247B270(ctx, base);
	// lwz r10,648(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 648);
	// stw r28,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r28.u32);
	// b 0x836b1100
	goto loc_836B1100;
loc_836B10FC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_836B1100:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b112c
	if (cr6.eq) goto loc_836B112C;
loc_836B110C:
	// lwz r11,656(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 656);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x836b1124
	if (cr0.eq) goto loc_836B1124;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// lwz r10,648(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 648);
loc_836B1124:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stw r11,648(r1)
	PPC_STORE_U32(ctx.r1.u32 + 648, ctx.r11.u32);
loc_836B112C:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82535128
	ctx.lr = 0x836B1134;
	sub_82535128(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,472
	ctx.r3.s64 = ctx.r1.s64 + 472;
	// bl 0x825356f0
	ctx.lr = 0x836B1140;
	sub_825356F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82534ae0
	ctx.lr = 0x836B114C;
	sub_82534AE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b1090
	if (cr6.eq) goto loc_836B1090;
loc_836B1158:
	// addi r4,r26,-296
	ctx.r4.s64 = ctx.r26.s64 + -296;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535898
	ctx.lr = 0x836B1164;
	sub_82535898(ctx, base);
	// bl 0x82534a18
	ctx.lr = 0x836B1168;
	sub_82534A18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b1190
	if (cr6.eq) goto loc_836B1190;
	// addi r4,r26,-284
	ctx.r4.s64 = ctx.r26.s64 + -284;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535898
	ctx.lr = 0x836B1180;
	sub_82535898(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x836B1184;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,664
	ctx.r3.s64 = ctx.r1.s64 + 664;
	// bl 0x83601998
	ctx.lr = 0x836B1190;
	sub_83601998(ctx, base);
loc_836B1190:
	// addi r4,r26,-272
	ctx.r4.s64 = ctx.r26.s64 + -272;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535898
	ctx.lr = 0x836B119C;
	sub_82535898(ctx, base);
	// bl 0x82534a18
	ctx.lr = 0x836B11A0;
	sub_82534A18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b11c8
	if (cr6.eq) goto loc_836B11C8;
	// addi r4,r26,-256
	ctx.r4.s64 = ctx.r26.s64 + -256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535898
	ctx.lr = 0x836B11B8;
	sub_82535898(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x836B11BC;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,692
	ctx.r3.s64 = ctx.r1.s64 + 692;
	// bl 0x83601998
	ctx.lr = 0x836B11C8;
	sub_83601998(ctx, base);
loc_836B11C8:
	// addi r4,r26,-240
	ctx.r4.s64 = ctx.r26.s64 + -240;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535898
	ctx.lr = 0x836B11D4;
	sub_82535898(ctx, base);
	// bl 0x82534a18
	ctx.lr = 0x836B11D8;
	sub_82534A18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b1200
	if (cr6.eq) goto loc_836B1200;
	// addi r4,r26,-224
	ctx.r4.s64 = ctx.r26.s64 + -224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535898
	ctx.lr = 0x836B11F0;
	sub_82535898(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x836B11F4;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// bl 0x83601998
	ctx.lr = 0x836B1200;
	sub_83601998(ctx, base);
loc_836B1200:
	// addi r4,r26,-208
	ctx.r4.s64 = ctx.r26.s64 + -208;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535898
	ctx.lr = 0x836B120C;
	sub_82535898(ctx, base);
	// bl 0x82534a18
	ctx.lr = 0x836B1210;
	sub_82534A18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b1238
	if (cr6.eq) goto loc_836B1238;
	// addi r4,r26,-200
	ctx.r4.s64 = ctx.r26.s64 + -200;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535898
	ctx.lr = 0x836B1228;
	sub_82535898(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x836B122C;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,748
	ctx.r3.s64 = ctx.r1.s64 + 748;
	// bl 0x83601998
	ctx.lr = 0x836B1238;
	sub_83601998(ctx, base);
loc_836B1238:
	// addi r4,r26,-192
	ctx.r4.s64 = ctx.r26.s64 + -192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535898
	ctx.lr = 0x836B1244;
	sub_82535898(ctx, base);
	// bl 0x82534a18
	ctx.lr = 0x836B1248;
	sub_82534A18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b1270
	if (cr6.eq) goto loc_836B1270;
	// addi r4,r26,-184
	ctx.r4.s64 = ctx.r26.s64 + -184;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535898
	ctx.lr = 0x836B1260;
	sub_82535898(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x836B1264;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,776
	ctx.r3.s64 = ctx.r1.s64 + 776;
	// bl 0x83601998
	ctx.lr = 0x836B1270;
	sub_83601998(ctx, base);
loc_836B1270:
	// addi r4,r26,-176
	ctx.r4.s64 = ctx.r26.s64 + -176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535898
	ctx.lr = 0x836B127C;
	sub_82535898(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82536838
	ctx.lr = 0x836B1288;
	sub_82536838(ctx, base);
	// addi r4,r26,-160
	ctx.r4.s64 = ctx.r26.s64 + -160;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82535898
	ctx.lr = 0x836B1294;
	sub_82535898(ctx, base);
	// bl 0x825349d0
	ctx.lr = 0x836B1298;
	sub_825349D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b12b8
	if (cr6.eq) goto loc_836B12B8;
	// addi r4,r26,-148
	ctx.r4.s64 = ctx.r26.s64 + -148;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82535898
	ctx.lr = 0x836B12B0;
	sub_82535898(ctx, base);
	// bl 0x825347e8
	ctx.lr = 0x836B12B4;
	sub_825347E8(ctx, base);
	// stw r3,804(r1)
	PPC_STORE_U32(ctx.r1.u32 + 804, ctx.r3.u32);
loc_836B12B8:
	// addi r4,r26,-136
	ctx.r4.s64 = ctx.r26.s64 + -136;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82535898
	ctx.lr = 0x836B12C4;
	sub_82535898(ctx, base);
	// bl 0x825349d0
	ctx.lr = 0x836B12C8;
	sub_825349D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b12e8
	if (cr6.eq) goto loc_836B12E8;
	// addi r4,r26,-124
	ctx.r4.s64 = ctx.r26.s64 + -124;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82535898
	ctx.lr = 0x836B12E0;
	sub_82535898(ctx, base);
	// bl 0x825347e8
	ctx.lr = 0x836B12E4;
	sub_825347E8(ctx, base);
	// stw r3,808(r1)
	PPC_STORE_U32(ctx.r1.u32 + 808, ctx.r3.u32);
loc_836B12E8:
	// addi r4,r26,-112
	ctx.r4.s64 = ctx.r26.s64 + -112;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82535898
	ctx.lr = 0x836B12F4;
	sub_82535898(ctx, base);
	// bl 0x825349d0
	ctx.lr = 0x836B12F8;
	sub_825349D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b1318
	if (cr6.eq) goto loc_836B1318;
	// addi r4,r26,-100
	ctx.r4.s64 = ctx.r26.s64 + -100;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82535898
	ctx.lr = 0x836B1310;
	sub_82535898(ctx, base);
	// bl 0x825347e8
	ctx.lr = 0x836B1314;
	sub_825347E8(ctx, base);
	// stw r3,812(r1)
	PPC_STORE_U32(ctx.r1.u32 + 812, ctx.r3.u32);
loc_836B1318:
	// addi r4,r26,-88
	ctx.r4.s64 = ctx.r26.s64 + -88;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82535898
	ctx.lr = 0x836B1324;
	sub_82535898(ctx, base);
	// bl 0x825349d0
	ctx.lr = 0x836B1328;
	sub_825349D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b1348
	if (cr6.eq) goto loc_836B1348;
	// addi r4,r26,-76
	ctx.r4.s64 = ctx.r26.s64 + -76;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82535898
	ctx.lr = 0x836B1340;
	sub_82535898(ctx, base);
	// bl 0x825347e8
	ctx.lr = 0x836B1344;
	sub_825347E8(ctx, base);
	// stw r3,816(r1)
	PPC_STORE_U32(ctx.r1.u32 + 816, ctx.r3.u32);
loc_836B1348:
	// addi r4,r26,-64
	ctx.r4.s64 = ctx.r26.s64 + -64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82535898
	ctx.lr = 0x836B1354;
	sub_82535898(ctx, base);
	// bl 0x825349d0
	ctx.lr = 0x836B1358;
	sub_825349D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b1378
	if (cr6.eq) goto loc_836B1378;
	// addi r4,r26,-56
	ctx.r4.s64 = ctx.r26.s64 + -56;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82535898
	ctx.lr = 0x836B1370;
	sub_82535898(ctx, base);
	// bl 0x825347e8
	ctx.lr = 0x836B1374;
	sub_825347E8(ctx, base);
	// stw r3,820(r1)
	PPC_STORE_U32(ctx.r1.u32 + 820, ctx.r3.u32);
loc_836B1378:
	// addi r4,r26,-48
	ctx.r4.s64 = ctx.r26.s64 + -48;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82535898
	ctx.lr = 0x836B1384;
	sub_82535898(ctx, base);
	// bl 0x825349d0
	ctx.lr = 0x836B1388;
	sub_825349D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b13a8
	if (cr6.eq) goto loc_836B13A8;
	// addi r4,r26,-40
	ctx.r4.s64 = ctx.r26.s64 + -40;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82535898
	ctx.lr = 0x836B13A0;
	sub_82535898(ctx, base);
	// bl 0x825347e8
	ctx.lr = 0x836B13A4;
	sub_825347E8(ctx, base);
	// stw r3,824(r1)
	PPC_STORE_U32(ctx.r1.u32 + 824, ctx.r3.u32);
loc_836B13A8:
	// addi r4,r26,-32
	ctx.r4.s64 = ctx.r26.s64 + -32;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82535898
	ctx.lr = 0x836B13B4;
	sub_82535898(ctx, base);
	// bl 0x825349d0
	ctx.lr = 0x836B13B8;
	sub_825349D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b13d8
	if (cr6.eq) goto loc_836B13D8;
	// addi r4,r26,-24
	ctx.r4.s64 = ctx.r26.s64 + -24;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82535898
	ctx.lr = 0x836B13D0;
	sub_82535898(ctx, base);
	// bl 0x825347e8
	ctx.lr = 0x836B13D4;
	sub_825347E8(ctx, base);
	// stw r3,828(r1)
	PPC_STORE_U32(ctx.r1.u32 + 828, ctx.r3.u32);
loc_836B13D8:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x836b1438
	if (cr6.lt) goto loc_836B1438;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x836b1428
	if (!cr6.gt) goto loc_836B1428;
	// addi r11,r25,8
	ctx.r11.s64 = ctx.r25.s64 + 8;
	// stw r25,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r25.u32);
	// stw r21,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r21.u32);
	// addi r6,r1,132
	ctx.r6.s64 = ctx.r1.s64 + 132;
	// stw r11,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r11.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r19,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r19.u32);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// stw r20,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r20.u32);
	// stw r22,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r22.u32);
	// bl 0x8247b270
	ctx.lr = 0x836B1420;
	sub_8247B270(ctx, base);
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// b 0x836b142c
	goto loc_836B142C;
loc_836B1428:
	// li r3,1
	ctx.r3.s64 = 1;
loc_836B142C:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b147c
	if (cr6.eq) goto loc_836B147C;
loc_836B1438:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add. r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq 0x836b1470
	if (cr0.eq) goto loc_836B1470;
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x836aee78
	ctx.lr = 0x836B1460;
	sub_836AEE78(ctx, base);
	// lwz r11,824(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 824);
	// stw r11,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r11.u32);
	// lwz r10,828(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 828);
	// stw r10,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r10.u32);
loc_836B1470:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
loc_836B147C:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82535aa0
	ctx.lr = 0x836B1484;
	sub_82535AA0(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82535aa0
	ctx.lr = 0x836B148C;
	sub_82535AA0(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82535aa0
	ctx.lr = 0x836B1494;
	sub_82535AA0(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82535aa0
	ctx.lr = 0x836B149C;
	sub_82535AA0(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82535aa0
	ctx.lr = 0x836B14A4;
	sub_82535AA0(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82535aa0
	ctx.lr = 0x836B14AC;
	sub_82535AA0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535aa0
	ctx.lr = 0x836B14B4;
	sub_82535AA0(ctx, base);
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x836aec00
	ctx.lr = 0x836B14BC;
	sub_836AEC00(ctx, base);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82535128
	ctx.lr = 0x836B14C4;
	sub_82535128(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x825356f0
	ctx.lr = 0x836B14D0;
	sub_825356F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82534ae0
	ctx.lr = 0x836B14DC;
	sub_82534AE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b0ba0
	if (cr6.eq) goto loc_836B0BA0;
loc_836B14E8:
	// addi r4,r26,-16
	ctx.r4.s64 = ctx.r26.s64 + -16;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82536d88
	ctx.lr = 0x836B14F4;
	sub_82536D88(ctx, base);
	// bl 0x825349d0
	ctx.lr = 0x836B14F8;
	sub_825349D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b1518
	if (cr6.eq) goto loc_836B1518;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82536d88
	ctx.lr = 0x836B1510;
	sub_82536D88(ctx, base);
	// bl 0x825347e8
	ctx.lr = 0x836B1514;
	sub_825347E8(ctx, base);
	// stw r3,368(r17)
	PPC_STORE_U32(ctx.r17.u32 + 368, ctx.r3.u32);
loc_836B1518:
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82535aa0
	ctx.lr = 0x836B1520;
	sub_82535AA0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,960
	ctx.r1.s64 = ctx.r1.s64 + 960;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836B152C"))) PPC_WEAK_FUNC(sub_836B152C);
PPC_FUNC_IMPL(__imp__sub_836B152C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836B1530"))) PPC_WEAK_FUNC(sub_836B1530);
PPC_FUNC_IMPL(__imp__sub_836B1530) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x836B1538;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d95768
	ctx.lr = 0x836B1544;
	sub_82D95768(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r29,r11,-4976
	ctx.r29.s64 = ctx.r11.s64 + -4976;
	// li r5,36
	ctx.r5.s64 = 36;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824208c8
	ctx.lr = 0x836B155C;
	sub_824208C8(ctx, base);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// addi r7,r10,-3932
	ctx.r7.s64 = ctx.r10.s64 + -3932;
	// addi r5,r8,-3948
	ctx.r5.s64 = ctx.r8.s64 + -3948;
	// addi r6,r9,-3944
	ctx.r6.s64 = ctx.r9.s64 + -3944;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r5,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r5.u32);
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r6,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r6.u32);
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// stw r28,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r28.u32);
	// addi r4,r29,40
	ctx.r4.s64 = ctx.r29.s64 + 40;
	// stb r30,316(r31)
	PPC_STORE_U8(ctx.r31.u32 + 316, ctx.r30.u8);
	// li r5,18
	ctx.r5.s64 = 18;
	// bl 0x824208c8
	ctx.lr = 0x836B15A4;
	sub_824208C8(ctx, base);
	// stw r30,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r30.u32);
	// std r30,352(r31)
	PPC_STORE_U64(ctx.r31.u32 + 352, ctx.r30.u64);
	// addi r3,r31,360
	ctx.r3.s64 = ctx.r31.s64 + 360;
	// stw r28,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r28.u32);
	// addi r4,r29,60
	ctx.r4.s64 = ctx.r29.s64 + 60;
	// stw r30,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r30.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// stb r30,360(r31)
	PPC_STORE_U8(ctx.r31.u32 + 360, ctx.r30.u8);
	// bl 0x824208c8
	ctx.lr = 0x836B15C8;
	sub_824208C8(ctx, base);
	// addi r3,r31,392
	ctx.r3.s64 = ctx.r31.s64 + 392;
	// bl 0x835fe558
	ctx.lr = 0x836B15D0;
	sub_835FE558(ctx, base);
	// stw r28,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r28.u32);
	// stw r30,488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 488, ctx.r30.u32);
	// addi r3,r31,472
	ctx.r3.s64 = ctx.r31.s64 + 472;
	// stb r30,472(r31)
	PPC_STORE_U8(ctx.r31.u32 + 472, ctx.r30.u8);
	// addi r4,r29,80
	ctx.r4.s64 = ctx.r29.s64 + 80;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836B15EC;
	sub_824208C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836B15F8"))) PPC_WEAK_FUNC(sub_836B15F8);
PPC_FUNC_IMPL(__imp__sub_836B15F8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x836b1700
	sub_836B1700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836B1600"))) PPC_WEAK_FUNC(sub_836B1600);
PPC_FUNC_IMPL(__imp__sub_836B1600) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x836b1700
	sub_836B1700(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836B1608"))) PPC_WEAK_FUNC(sub_836B1608);
PPC_FUNC_IMPL(__imp__sub_836B1608) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x836B1610;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// addi r8,r11,-3932
	ctx.r8.s64 = ctx.r11.s64 + -3932;
	// addi r7,r10,-3944
	ctx.r7.s64 = ctx.r10.s64 + -3944;
	// addi r6,r9,-3948
	ctx.r6.s64 = ctx.r9.s64 + -3948;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r6,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r6.u32);
	// addi r29,r3,472
	ctx.r29.s64 = ctx.r3.s64 + 472;
	// lwz r5,492(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 492);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x836b1654
	if (cr6.lt) goto loc_836B1654;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836B1654;
	sub_8386D088(ctx, base);
loc_836B1654:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// addi r31,r28,392
	ctx.r31.s64 = ctx.r28.s64 + 392;
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// stb r30,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r30.u8);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x824238b8
	ctx.lr = 0x836B1674;
	sub_824238B8(ctx, base);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x824238b8
	ctx.lr = 0x836B167C;
	sub_824238B8(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x824238b8
	ctx.lr = 0x836B1684;
	sub_824238B8(ctx, base);
	// lwz r11,412(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 412);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836b1698
	if (cr6.lt) goto loc_836B1698;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836B1698;
	sub_8386D088(ctx, base);
loc_836B1698:
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// addi r29,r28,360
	ctx.r29.s64 = ctx.r28.s64 + 360;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// lwz r11,380(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 380);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836b16bc
	if (cr6.lt) goto loc_836B16BC;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836B16BC;
	sub_8386D088(ctx, base);
loc_836B16BC:
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// addi r31,r28,316
	ctx.r31.s64 = ctx.r28.s64 + 316;
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// stb r30,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r30.u8);
	// lwz r11,336(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 336);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836b16e0
	if (cr6.lt) goto loc_836B16E0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836B16E0;
	sub_8386D088(ctx, base);
loc_836B16E0:
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// bl 0x82b6a590
	ctx.lr = 0x836B16F4;
	sub_82B6A590(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836B16FC"))) PPC_WEAK_FUNC(sub_836B16FC);
PPC_FUNC_IMPL(__imp__sub_836B16FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836B1700"))) PPC_WEAK_FUNC(sub_836B1700);
PPC_FUNC_IMPL(__imp__sub_836B1700) {
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
	// bl 0x836b1608
	ctx.lr = 0x836B1720;
	sub_836B1608(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b1740
	if (cr6.eq) goto loc_836B1740;
	// bl 0x82595188
	ctx.lr = 0x836B1730;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x836B1740;
	sub_825952B8(ctx, base);
loc_836B1740:
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

__attribute__((alias("__imp__sub_836B175C"))) PPC_WEAK_FUNC(sub_836B175C);
PPC_FUNC_IMPL(__imp__sub_836B175C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836B1760"))) PPC_WEAK_FUNC(sub_836B1760);
PPC_FUNC_IMPL(__imp__sub_836B1760) {
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
	ctx.lr = 0x836B177C;
	sub_82EAF8D8(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r4,r11,-4976
	ctx.r4.s64 = ctx.r11.s64 + -4976;
	// li r5,36
	ctx.r5.s64 = 36;
	// bl 0x824208c8
	ctx.lr = 0x836B1790;
	sub_824208C8(ctx, base);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// lis r7,-32216
	ctx.r7.s64 = -2111307776;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r4,r8,-3912
	ctx.r4.s64 = ctx.r8.s64 + -3912;
	// addi r6,r10,-3896
	ctx.r6.s64 = ctx.r10.s64 + -3896;
	// stw r30,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r30.u32);
	// addi r5,r9,-3908
	ctx.r5.s64 = ctx.r9.s64 + -3908;
	// stw r4,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r4.u32);
	// addi r11,r7,-3916
	ctx.r11.s64 = ctx.r7.s64 + -3916;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// stw r5,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r5.u32);
	// addi r3,r31,352
	ctx.r3.s64 = ctx.r31.s64 + 352;
	// stw r11,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r11.u32);
	// li r4,100
	ctx.r4.s64 = 100;
	// stw r30,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r30.u32);
	// stw r30,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r30.u32);
	// std r30,360(r31)
	PPC_STORE_U64(ctx.r31.u32 + 360, ctx.r30.u64);
	// bl 0x836ae9d0
	ctx.lr = 0x836B17E0;
	sub_836AE9D0(ctx, base);
	// stw r30,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_836B1800"))) PPC_WEAK_FUNC(sub_836B1800);
PPC_FUNC_IMPL(__imp__sub_836B1800) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x836b1818
	sub_836B1818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836B1808"))) PPC_WEAK_FUNC(sub_836B1808);
PPC_FUNC_IMPL(__imp__sub_836B1808) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x836b1818
	sub_836B1818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836B1810"))) PPC_WEAK_FUNC(sub_836B1810);
PPC_FUNC_IMPL(__imp__sub_836B1810) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-312
	ctx.r3.s64 = ctx.r3.s64 + -312;
	// b 0x836b1818
	sub_836B1818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836B1818"))) PPC_WEAK_FUNC(sub_836B1818);
PPC_FUNC_IMPL(__imp__sub_836B1818) {
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
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r7,r11,-3896
	ctx.r7.s64 = ctx.r11.s64 + -3896;
	// addi r6,r10,-3908
	ctx.r6.s64 = ctx.r10.s64 + -3908;
	// addi r5,r9,-3912
	ctx.r5.s64 = ctx.r9.s64 + -3912;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r8,-3916
	ctx.r4.s64 = ctx.r8.s64 + -3916;
	// stw r6,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r6.u32);
	// stw r5,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r5.u32);
	// addi r3,r3,352
	ctx.r3.s64 = ctx.r3.s64 + 352;
	// stw r4,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r4.u32);
	// bl 0x836aeb80
	ctx.lr = 0x836B186C;
	sub_836AEB80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eaf978
	ctx.lr = 0x836B1874;
	sub_82EAF978(ctx, base);
	// clrlwi r3,r30,31
	ctx.r3.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x836b1894
	if (cr6.eq) goto loc_836B1894;
	// bl 0x82595188
	ctx.lr = 0x836B1884;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x836B1894;
	sub_825952B8(ctx, base);
loc_836B1894:
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

__attribute__((alias("__imp__sub_836B18B0"))) PPC_WEAK_FUNC(sub_836B18B0);
PPC_FUNC_IMPL(__imp__sub_836B18B0) {
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
	// bl 0x83356798
	ctx.lr = 0x836B18CC;
	sub_83356798(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// li r30,29
	ctx.r30.s64 = 29;
	// addi r10,r11,-2884
	ctx.r10.s64 = ctx.r11.s64 + -2884;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r4,504
	ctx.r4.s64 = 504;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x836B18F0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x836b1900
	if (cr6.eq) goto loc_836B1900;
	// bl 0x836b1530
	ctx.lr = 0x836B18FC;
	sub_836B1530(ctx, base);
	// b 0x836b1904
	goto loc_836B1904;
loc_836B1900:
	// li r3,0
	ctx.r3.s64 = 0;
loc_836B1904:
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r4,376
	ctx.r4.s64 = 376;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x836B191C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x836b1930
	if (cr6.eq) goto loc_836B1930;
	// bl 0x836b1760
	ctx.lr = 0x836B1928;
	sub_836B1760(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x836b1934
	goto loc_836B1934;
loc_836B1930:
	// li r11,0
	ctx.r11.s64 = 0;
loc_836B1934:
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_836B1954"))) PPC_WEAK_FUNC(sub_836B1954);
PPC_FUNC_IMPL(__imp__sub_836B1954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836B1958"))) PPC_WEAK_FUNC(sub_836B1958);
PPC_FUNC_IMPL(__imp__sub_836B1958) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x836B1960;
	__savegprlr_27(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// rotlwi r8,r31,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r10,133
	ctx.r10.s64 = 133;
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stb r10,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r10.u8);
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// bge cr6,0x836b19a0
	if (!cr6.lt) goto loc_836B19A0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e745e0
	ctx.lr = 0x836B19A0;
	sub_82E745E0(ctx, base);
loc_836B19A0:
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// li r30,15
	ctx.r30.s64 = 15;
	// addi r27,r11,-3736
	ctx.r27.s64 = ctx.r11.s64 + -3736;
	// li r5,5
	ctx.r5.s64 = 5;
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r4,r27,-32
	ctx.r4.s64 = ctx.r27.s64 + -32;
	// stbx r7,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u8);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r6.u32);
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836B19E8;
	sub_82472FC0(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836B19F4;
	sub_82E74C08(ctx, base);
	// lwz r5,308(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x836b1a08
	if (cr6.lt) goto loc_836B1A08;
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82416268
	ctx.lr = 0x836B1A08;
	sub_82416268(ctx, base);
loc_836B1A08:
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// addi r4,r28,20
	ctx.r4.s64 = ctx.r28.s64 + 20;
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// blt cr6,0x836b1a28
	if (cr6.lt) goto loc_836B1A28;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836B1A28:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
loc_836B1A38:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836b1a38
	if (!cr6.eq) goto loc_836B1A38;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836B1A5C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836B1A68;
	sub_82E74C08(ctx, base);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836b1a7c
	if (cr6.lt) goto loc_836B1A7C;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x836B1A7C;
	sub_82416268(ctx, base);
loc_836B1A7C:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// addi r4,r27,-24
	ctx.r4.s64 = ctx.r27.s64 + -24;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836B1AA4;
	sub_82472FC0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836B1AB0;
	sub_82E74C08(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836b1ac4
	if (cr6.lt) goto loc_836B1AC4;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x836B1AC4;
	sub_82416268(ctx, base);
loc_836B1AC4:
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// lwz r4,48(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// bl 0x82e746c0
	ctx.lr = 0x836B1ADC;
	sub_82E746C0(ctx, base);
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// addi r4,r27,-16
	ctx.r4.s64 = ctx.r27.s64 + -16;
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82472fc0
	ctx.lr = 0x836B1AF8;
	sub_82472FC0(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836B1B04;
	sub_82E74C08(ctx, base);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836b1b18
	if (cr6.lt) goto loc_836B1B18;
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82416268
	ctx.lr = 0x836B1B18;
	sub_82416268(ctx, base);
loc_836B1B18:
	// lwz r11,136(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 136);
	// addi r4,r28,116
	ctx.r4.s64 = ctx.r28.s64 + 116;
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// blt cr6,0x836b1b38
	if (cr6.lt) goto loc_836B1B38;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836B1B38:
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
loc_836B1B48:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836b1b48
	if (!cr6.eq) goto loc_836B1B48;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836B1B6C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836B1B78;
	sub_82E74C08(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836b1b8c
	if (cr6.lt) goto loc_836B1B8C;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x836B1B8C;
	sub_82416268(ctx, base);
loc_836B1B8C:
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// addi r4,r27,-8
	ctx.r4.s64 = ctx.r27.s64 + -8;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836B1BB4;
	sub_82472FC0(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836B1BC0;
	sub_82E74C08(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836b1bd4
	if (cr6.lt) goto loc_836B1BD4;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82416268
	ctx.lr = 0x836B1BD4;
	sub_82416268(ctx, base);
loc_836B1BD4:
	// lwz r11,164(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 164);
	// addi r4,r28,144
	ctx.r4.s64 = ctx.r28.s64 + 144;
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// blt cr6,0x836b1bf4
	if (cr6.lt) goto loc_836B1BF4;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836B1BF4:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
loc_836B1C04:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836b1c04
	if (!cr6.eq) goto loc_836B1C04;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836B1C28;
	sub_82472FC0(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836B1C34;
	sub_82E74C08(ctx, base);
	// lwz r10,276(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836b1c48
	if (cr6.lt) goto loc_836B1C48;
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x82416268
	ctx.lr = 0x836B1C48;
	sub_82416268(ctx, base);
loc_836B1C48:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836B1C70;
	sub_82472FC0(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836B1C7C;
	sub_82E74C08(ctx, base);
	// lwz r11,340(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836b1c90
	if (cr6.lt) goto loc_836B1C90;
	// lwz r3,320(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x82416268
	ctx.lr = 0x836B1C90;
	sub_82416268(ctx, base);
loc_836B1C90:
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// lwz r4,172(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 172);
	// bl 0x82e746c0
	ctx.lr = 0x836B1CA8;
	sub_82E746C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836B1CB4"))) PPC_WEAK_FUNC(sub_836B1CB4);
PPC_FUNC_IMPL(__imp__sub_836B1CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836B1CB8"))) PPC_WEAK_FUNC(sub_836B1CB8);
PPC_FUNC_IMPL(__imp__sub_836B1CB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab8
	ctx.lr = 0x836B1CC0;
	__savegprlr_16(ctx, base);
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// stw r25,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r25.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r25,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r25.u32);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x83691bb8
	ctx.lr = 0x836B1CE8;
	sub_83691BB8(ctx, base);
	// lwz r10,264(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// lwz r11,268(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x836b213c
	if (!cr6.lt) goto loc_836B213C;
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
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r9,-32204
	ctx.r9.s64 = -2110521344;
	// li r18,15
	ctx.r18.s64 = 15;
	// li r24,4
	ctx.r24.s64 = 4;
	// ori r20,r8,1
	ctx.r20.u64 = ctx.r8.u64 | 1;
	// addi r17,r11,-3664
	ctx.r17.s64 = ctx.r11.s64 + -3664;
	// addi r21,r10,8980
	ctx.r21.s64 = ctx.r10.s64 + 8980;
	// addi r22,r9,26164
	ctx.r22.s64 = ctx.r9.s64 + 26164;
loc_836B1D3C:
	// stw r18,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r18.u32);
	// addi r11,r1,352
	ctx.r11.s64 = ctx.r1.s64 + 352;
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r25,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r25.u8);
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
	// lwz r5,360(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 360);
	// lwz r4,364(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// bl 0x82472fc0
	ctx.lr = 0x836B1D70;
	sub_82472FC0(ctx, base);
	// addi r6,r17,-68
	ctx.r6.s64 = ctx.r17.s64 + -68;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x836B1D88;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836b1e1c
	if (!cr6.eq) goto loc_836B1E1C;
	// stw r18,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r18.u32);
	// addi r11,r1,368
	ctx.r11.s64 = ctx.r1.s64 + 368;
	// stw r25,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r25.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stb r25,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r25.u8);
	// ld r9,8(r23)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r23.u32 + 8);
	// ld r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r23.u32 + 0);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,376(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 376);
	// lwz r4,380(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// bl 0x82472fc0
	ctx.lr = 0x836B1DC0;
	sub_82472FC0(ctx, base);
	// lwz r8,148(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x836b1dd4
	if (!cr6.lt) goto loc_836B1DD4;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
loc_836B1DD4:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836B1DD8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836b1dd8
	if (!cr6.eq) goto loc_836B1DD8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r19,20
	ctx.r3.s64 = ctx.r19.s64 + 20;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836B1DFC;
	sub_824208C8(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836b1e10
	if (cr6.lt) goto loc_836B1E10;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x836B1E10;
	sub_82416268(ctx, base);
loc_836B1E10:
	// stw r18,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r18.u32);
	// stw r25,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r25.u32);
	// stb r25,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r25.u8);
loc_836B1E1C:
	// addi r6,r17,-60
	ctx.r6.s64 = ctx.r17.s64 + -60;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x836B1E34;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836b1e70
	if (!cr6.eq) goto loc_836B1E70;
	// ld r11,8(r23)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r23.u32 + 8);
	// addi r10,r1,336
	ctx.r10.s64 = ctx.r1.s64 + 336;
	// ld r9,0(r23)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r23.u32 + 0);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// lwz r8,336(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x836b1e68
	if (!cr6.eq) goto loc_836B1E68;
	// ld r11,344(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 344);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836b1e6c
	goto loc_836B1E6C;
loc_836B1E68:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_836B1E6C:
	// stw r11,48(r19)
	PPC_STORE_U32(ctx.r19.u32 + 48, ctx.r11.u32);
loc_836B1E70:
	// addi r6,r17,-52
	ctx.r6.s64 = ctx.r17.s64 + -52;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x836B1E88;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836b1f1c
	if (!cr6.eq) goto loc_836B1F1C;
	// stw r18,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r18.u32);
	// addi r11,r1,304
	ctx.r11.s64 = ctx.r1.s64 + 304;
	// stw r25,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r25.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stb r25,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r25.u8);
	// ld r10,8(r23)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r23.u32 + 8);
	// ld r9,0(r23)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r23.u32 + 0);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// lwz r5,312(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	// lwz r4,316(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// bl 0x82472fc0
	ctx.lr = 0x836B1EC0;
	sub_82472FC0(ctx, base);
	// lwz r8,180(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x836b1ed4
	if (!cr6.lt) goto loc_836B1ED4;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
loc_836B1ED4:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836B1ED8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836b1ed8
	if (!cr6.eq) goto loc_836B1ED8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r19,116
	ctx.r3.s64 = ctx.r19.s64 + 116;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836B1EFC;
	sub_824208C8(ctx, base);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836b1f10
	if (cr6.lt) goto loc_836B1F10;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x836B1F10;
	sub_82416268(ctx, base);
loc_836B1F10:
	// stw r18,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r18.u32);
	// stw r25,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r25.u32);
	// stb r25,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r25.u8);
loc_836B1F1C:
	// addi r6,r17,-44
	ctx.r6.s64 = ctx.r17.s64 + -44;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,17
	ctx.r7.s64 = 17;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x836B1F34;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836b2068
	if (!cr6.eq) goto loc_836B2068;
	// addi r31,r19,152
	ctx.r31.s64 = ctx.r19.s64 + 152;
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// stw r24,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r24.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r31.u32);
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// stw r24,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r24.u32);
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r29,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r29.u32);
	// bl 0x8247b7d8
	ctx.lr = 0x836B1F6C;
	sub_8247B7D8(ctx, base);
	// lwz r3,160(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 160);
	// stw r25,152(r19)
	PPC_STORE_U32(ctx.r19.u32 + 152, ctx.r25.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x836b1f8c
	if (cr6.eq) goto loc_836B1F8C;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// bl 0x8247b268
	ctx.lr = 0x836B1F84;
	sub_8247B268(ctx, base);
	// stw r25,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r25.u32);
	// stw r25,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r25.u32);
loc_836B1F8C:
	// stw r21,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r21.u32);
	// lwz r11,8(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,12(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// add r26,r10,r11
	ctx.r26.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bge cr6,0x836b2068
	if (!cr6.lt) goto loc_836B2068;
loc_836B1FAC:
	// ld r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r27.u32 + 0);
	// addi r10,r1,320
	ctx.r10.s64 = ctx.r1.s64 + 320;
	// ld r9,8(r27)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r27.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,320(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x836b1fd8
	if (!cr6.eq) goto loc_836B1FD8;
	// ld r11,328(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 328);
	// rotlwi r28,r11,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836b1fdc
	goto loc_836B1FDC;
loc_836B1FD8:
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
loc_836B1FDC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x836b2038
	if (cr6.lt) goto loc_836B2038;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x836b2028
	if (!cr6.gt) goto loc_836B2028;
	// stw r30,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r30.u32);
	// addi r6,r1,124
	ctx.r6.s64 = ctx.r1.s64 + 124;
	// stw r31,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r31.u32);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// stw r29,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r29.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stw r24,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r24.u32);
	// stw r24,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r24.u32);
	// stw r22,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r22.u32);
	// bl 0x8247b270
	ctx.lr = 0x836B2020;
	sub_8247B270(ctx, base);
	// stw r21,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r21.u32);
	// b 0x836b202c
	goto loc_836B202C;
loc_836B2028:
	// li r3,1
	ctx.r3.s64 = 1;
loc_836B202C:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b205c
	if (cr6.eq) goto loc_836B205C;
loc_836B2038:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x836b2050
	if (cr0.eq) goto loc_836B2050;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
loc_836B2050:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_836B205C:
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// cmplw cr6,r27,r26
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r26.u32, xer);
	// blt cr6,0x836b1fac
	if (cr6.lt) goto loc_836B1FAC;
loc_836B2068:
	// addi r6,r17,-24
	ctx.r6.s64 = ctx.r17.s64 + -24;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,21
	ctx.r7.s64 = 21;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x836B2080;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836b20bc
	if (!cr6.eq) goto loc_836B20BC;
	// ld r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r23.u32 + 0);
	// addi r10,r1,288
	ctx.r10.s64 = ctx.r1.s64 + 288;
	// ld r9,8(r23)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r23.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,288(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x836b20b4
	if (!cr6.eq) goto loc_836B20B4;
	// ld r11,296(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 296);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836b20b8
	goto loc_836B20B8;
loc_836B20B4:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_836B20B8:
	// stw r11,168(r19)
	PPC_STORE_U32(ctx.r19.u32 + 168, ctx.r11.u32);
loc_836B20BC:
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,17
	ctx.r7.s64 = 17;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x836B20D4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836b2110
	if (!cr6.eq) goto loc_836B2110;
	// ld r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r23.u32 + 0);
	// addi r10,r1,384
	ctx.r10.s64 = ctx.r1.s64 + 384;
	// ld r9,8(r23)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r23.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,384(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x836b2108
	if (!cr6.eq) goto loc_836B2108;
	// ld r11,392(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 392);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836b210c
	goto loc_836B210C;
loc_836B2108:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_836B210C:
	// stw r11,172(r19)
	PPC_STORE_U32(ctx.r19.u32 + 172, ctx.r11.u32);
loc_836B2110:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836b2124
	if (cr6.lt) goto loc_836B2124;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x836B2124;
	sub_82416268(ctx, base);
loc_836B2124:
	// addic. r16,r16,-1
	xer.ca = ctx.r16.u32 > 0;
	ctx.r16.s64 = ctx.r16.s64 + -1;
	cr0.compare<int32_t>(ctx.r16.s32, 0, xer);
	// stw r18,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r18.u32);
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
	// addi r23,r23,32
	ctx.r23.s64 = ctx.r23.s64 + 32;
	// stb r25,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r25.u8);
	// bne 0x836b1d3c
	if (!cr0.eq) goto loc_836B1D3C;
loc_836B213C:
	// lwz r31,272(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x836b2158
	if (cr6.eq) goto loc_836B2158;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x836B2150;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x836B2158;
	sub_82416268(ctx, base);
loc_836B2158:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836B2164"))) PPC_WEAK_FUNC(sub_836B2164);
PPC_FUNC_IMPL(__imp__sub_836B2164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836B2168"))) PPC_WEAK_FUNC(sub_836B2168);
PPC_FUNC_IMPL(__imp__sub_836B2168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x836B2170;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d95768
	ctx.lr = 0x836B217C;
	sub_82D95768(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r29,r11,-3832
	ctx.r29.s64 = ctx.r11.s64 + -3832;
	// li r5,28
	ctx.r5.s64 = 28;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824208c8
	ctx.lr = 0x836B2194;
	sub_824208C8(ctx, base);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// addi r7,r10,-3544
	ctx.r7.s64 = ctx.r10.s64 + -3544;
	// addi r5,r8,-3560
	ctx.r5.s64 = ctx.r8.s64 + -3560;
	// addi r6,r9,-3556
	ctx.r6.s64 = ctx.r9.s64 + -3556;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r5,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r5.u32);
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r6,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r6.u32);
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// stw r28,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r28.u32);
	// addi r4,r29,32
	ctx.r4.s64 = ctx.r29.s64 + 32;
	// stb r30,316(r31)
	PPC_STORE_U8(ctx.r31.u32 + 316, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836B21DC;
	sub_824208C8(ctx, base);
	// stw r28,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r28.u32);
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// stb r30,344(r31)
	PPC_STORE_U8(ctx.r31.u32 + 344, ctx.r30.u8);
	// addi r4,r29,48
	ctx.r4.s64 = ctx.r29.s64 + 48;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836B21F8;
	sub_824208C8(ctx, base);
	// stw r30,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836B2208"))) PPC_WEAK_FUNC(sub_836B2208);
PPC_FUNC_IMPL(__imp__sub_836B2208) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x836b22b0
	sub_836B22B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836B2210"))) PPC_WEAK_FUNC(sub_836B2210);
PPC_FUNC_IMPL(__imp__sub_836B2210) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x836b22b0
	sub_836B22B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836B2218"))) PPC_WEAK_FUNC(sub_836B2218);
PPC_FUNC_IMPL(__imp__sub_836B2218) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x836B2220;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// addi r8,r11,-3544
	ctx.r8.s64 = ctx.r11.s64 + -3544;
	// addi r7,r10,-3556
	ctx.r7.s64 = ctx.r10.s64 + -3556;
	// addi r6,r9,-3560
	ctx.r6.s64 = ctx.r9.s64 + -3560;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r6,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r6.u32);
	// addi r30,r3,344
	ctx.r30.s64 = ctx.r3.s64 + 344;
	// lwz r5,364(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 364);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x836b2264
	if (cr6.lt) goto loc_836B2264;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836B2264;
	sub_8386D088(ctx, base);
loc_836B2264:
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r28,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r28.u32);
	// addi r31,r29,316
	ctx.r31.s64 = ctx.r29.s64 + 316;
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// stb r28,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r28.u8);
	// lwz r11,336(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836b2290
	if (cr6.lt) goto loc_836B2290;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836B2290;
	sub_8386D088(ctx, base);
loc_836B2290:
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// bl 0x82b6a590
	ctx.lr = 0x836B22A4;
	sub_82B6A590(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836B22AC"))) PPC_WEAK_FUNC(sub_836B22AC);
PPC_FUNC_IMPL(__imp__sub_836B22AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836B22B0"))) PPC_WEAK_FUNC(sub_836B22B0);
PPC_FUNC_IMPL(__imp__sub_836B22B0) {
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
	// bl 0x836b2218
	ctx.lr = 0x836B22D0;
	sub_836B2218(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b22f0
	if (cr6.eq) goto loc_836B22F0;
	// bl 0x82595188
	ctx.lr = 0x836B22E0;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x836B22F0;
	sub_825952B8(ctx, base);
loc_836B22F0:
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

__attribute__((alias("__imp__sub_836B230C"))) PPC_WEAK_FUNC(sub_836B230C);
PPC_FUNC_IMPL(__imp__sub_836B230C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836B2310"))) PPC_WEAK_FUNC(sub_836B2310);
PPC_FUNC_IMPL(__imp__sub_836B2310) {
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
	ctx.lr = 0x836B232C;
	sub_82EAF8D8(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r4,r11,-3832
	ctx.r4.s64 = ctx.r11.s64 + -3832;
	// li r5,28
	ctx.r5.s64 = 28;
	// bl 0x824208c8
	ctx.lr = 0x836B2340;
	sub_824208C8(ctx, base);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// lis r7,-32216
	ctx.r7.s64 = -2111307776;
	// addi r4,r8,-3524
	ctx.r4.s64 = ctx.r8.s64 + -3524;
	// addi r3,r7,-3528
	ctx.r3.s64 = ctx.r7.s64 + -3528;
	// addi r6,r10,-3508
	ctx.r6.s64 = ctx.r10.s64 + -3508;
	// stw r4,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r4.u32);
	// addi r5,r9,-3520
	ctx.r5.s64 = ctx.r9.s64 + -3520;
	// stw r3,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r3.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// stw r5,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r5.u32);
	// addi r3,r31,352
	ctx.r3.s64 = ctx.r31.s64 + 352;
	// stw r30,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r30.u32);
	// li r4,6
	ctx.r4.s64 = 6;
	// stw r30,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r30.u32);
	// std r30,360(r31)
	PPC_STORE_U64(ctx.r31.u32 + 360, ctx.r30.u64);
	// bl 0x82423930
	ctx.lr = 0x836B238C;
	sub_82423930(ctx, base);
	// lis r11,3
	ctx.r11.s64 = 196608;
	// stw r30,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// stw r10,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_836B23B8"))) PPC_WEAK_FUNC(sub_836B23B8);
PPC_FUNC_IMPL(__imp__sub_836B23B8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x836b23d0
	sub_836B23D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836B23C0"))) PPC_WEAK_FUNC(sub_836B23C0);
PPC_FUNC_IMPL(__imp__sub_836B23C0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x836b23d0
	sub_836B23D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836B23C8"))) PPC_WEAK_FUNC(sub_836B23C8);
PPC_FUNC_IMPL(__imp__sub_836B23C8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-312
	ctx.r3.s64 = ctx.r3.s64 + -312;
	// b 0x836b23d0
	sub_836B23D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836B23D0"))) PPC_WEAK_FUNC(sub_836B23D0);
PPC_FUNC_IMPL(__imp__sub_836B23D0) {
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
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r7,r11,-3508
	ctx.r7.s64 = ctx.r11.s64 + -3508;
	// addi r6,r10,-3520
	ctx.r6.s64 = ctx.r10.s64 + -3520;
	// addi r5,r9,-3524
	ctx.r5.s64 = ctx.r9.s64 + -3524;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r8,-3528
	ctx.r4.s64 = ctx.r8.s64 + -3528;
	// stw r6,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r6.u32);
	// stw r5,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r5.u32);
	// addi r3,r3,352
	ctx.r3.s64 = ctx.r3.s64 + 352;
	// stw r4,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r4.u32);
	// bl 0x824238b8
	ctx.lr = 0x836B2424;
	sub_824238B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eaf978
	ctx.lr = 0x836B242C;
	sub_82EAF978(ctx, base);
	// clrlwi r3,r30,31
	ctx.r3.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x836b244c
	if (cr6.eq) goto loc_836B244C;
	// bl 0x82595188
	ctx.lr = 0x836B243C;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x836B244C;
	sub_825952B8(ctx, base);
loc_836B244C:
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

__attribute__((alias("__imp__sub_836B2468"))) PPC_WEAK_FUNC(sub_836B2468);
PPC_FUNC_IMPL(__imp__sub_836B2468) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x836B2470;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r11,-2884
	ctx.r9.s64 = ctx.r11.s64 + -2884;
	// li r30,29
	ctx.r30.s64 = 29;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x836b24d4
	if (cr6.eq) goto loc_836B24D4;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x836B24A8;
	sub_82595150(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x836b24c8
	if (cr6.eq) goto loc_836B24C8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x836B24C8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_836B24C8:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x836B24D0;
	sub_82595170(ctx, base);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
loc_836B24D4:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b251c
	if (cr6.eq) goto loc_836B251C;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x836B24F0;
	sub_82595150(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x836b2510
	if (cr6.eq) goto loc_836B2510;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x836B2510;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_836B2510:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x836B2518;
	sub_82595170(ctx, base);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
loc_836B251C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83356810
	ctx.lr = 0x836B2524;
	sub_83356810(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836B252C"))) PPC_WEAK_FUNC(sub_836B252C);
PPC_FUNC_IMPL(__imp__sub_836B252C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836B2530"))) PPC_WEAK_FUNC(sub_836B2530);
PPC_FUNC_IMPL(__imp__sub_836B2530) {
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
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x836b259c
	if (!cr6.gt) goto loc_836B259C;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// addi r8,r10,-2880
	ctx.r8.s64 = ctx.r10.s64 + -2880;
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// li r6,64
	ctx.r6.s64 = 64;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// lis r5,11
	ctx.r5.s64 = 720896;
	// stw r6,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8247b270
	ctx.lr = 0x836B258C;
	sub_8247B270(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_836B259C:
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

__attribute__((alias("__imp__sub_836B25B0"))) PPC_WEAK_FUNC(sub_836B25B0);
PPC_FUNC_IMPL(__imp__sub_836B25B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x836B25B8;
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
	ctx.lr = 0x836B25CC;
	sub_82535130(ctx, base);
	// lwz r11,240(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 240);
	// addi r4,r29,220
	ctx.r4.s64 = ctx.r29.s64 + 220;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836b25e0
	if (cr6.lt) goto loc_836B25E0;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836B25E0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825346c8
	ctx.lr = 0x836B25E8;
	sub_825346C8(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r11,-3328
	ctx.r31.s64 = ctx.r11.s64 + -3328;
	// addi r4,r31,-40
	ctx.r4.s64 = ctx.r31.s64 + -40;
	// bl 0x82536d88
	ctx.lr = 0x836B25FC;
	sub_82536D88(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x825369e8
	ctx.lr = 0x836B2604;
	sub_825369E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535aa0
	ctx.lr = 0x836B260C;
	sub_82535AA0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,248(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 248);
	// bl 0x82534640
	ctx.lr = 0x836B2618;
	sub_82534640(ctx, base);
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82536d88
	ctx.lr = 0x836B2624;
	sub_82536D88(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x825369e8
	ctx.lr = 0x836B262C;
	sub_825369E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535aa0
	ctx.lr = 0x836B2634;
	sub_82535AA0(ctx, base);
	// lwz r10,336(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// addi r11,r29,316
	ctx.r11.s64 = ctx.r29.s64 + 316;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836b2648
	if (cr6.lt) goto loc_836B2648;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_836B2648:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825346c8
	ctx.lr = 0x836B2654;
	sub_825346C8(ctx, base);
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82536d88
	ctx.lr = 0x836B2660;
	sub_82536D88(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x825369e8
	ctx.lr = 0x836B2668;
	sub_825369E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535aa0
	ctx.lr = 0x836B2670;
	sub_82535AA0(ctx, base);
	// lwz r10,364(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 364);
	// addi r11,r29,344
	ctx.r11.s64 = ctx.r29.s64 + 344;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836b2684
	if (cr6.lt) goto loc_836B2684;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_836B2684:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825346c8
	ctx.lr = 0x836B2690;
	sub_825346C8(ctx, base);
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82536d88
	ctx.lr = 0x836B269C;
	sub_82536D88(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x825369e8
	ctx.lr = 0x836B26A4;
	sub_825369E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535aa0
	ctx.lr = 0x836B26AC;
	sub_82535AA0(ctx, base);
	// lwz r10,392(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 392);
	// addi r11,r29,372
	ctx.r11.s64 = ctx.r29.s64 + 372;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836b26c0
	if (cr6.lt) goto loc_836B26C0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_836B26C0:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825346c8
	ctx.lr = 0x836B26CC;
	sub_825346C8(ctx, base);
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82536d88
	ctx.lr = 0x836B26D8;
	sub_82536D88(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x825369e8
	ctx.lr = 0x836B26E0;
	sub_825369E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535aa0
	ctx.lr = 0x836B26E8;
	sub_82535AA0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,400(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 400);
	// bl 0x82534640
	ctx.lr = 0x836B26F4;
	sub_82534640(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82536d88
	ctx.lr = 0x836B2700;
	sub_82536D88(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x825369e8
	ctx.lr = 0x836B2708;
	sub_825369E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535aa0
	ctx.lr = 0x836B2710;
	sub_82535AA0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836B271C"))) PPC_WEAK_FUNC(sub_836B271C);
PPC_FUNC_IMPL(__imp__sub_836B271C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836B2720"))) PPC_WEAK_FUNC(sub_836B2720);
PPC_FUNC_IMPL(__imp__sub_836B2720) {
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
	// bl 0x836b2468
	ctx.lr = 0x836B2740;
	sub_836B2468(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b2758
	if (cr6.eq) goto loc_836B2758;
	// bl 0x82416268
	ctx.lr = 0x836B2754;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_836B2758:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_836B2770"))) PPC_WEAK_FUNC(sub_836B2770);
PPC_FUNC_IMPL(__imp__sub_836B2770) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x836B2778;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// addi r10,r11,-2880
	ctx.r10.s64 = ctx.r11.s64 + -2880;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// li r8,64
	ctx.r8.s64 = 64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8247b7d8
	ctx.lr = 0x836B27BC;
	sub_8247B7D8(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// beq cr6,0x836b27e4
	if (cr6.eq) goto loc_836B27E4;
	// lis r4,11
	ctx.r4.s64 = 720896;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x8247b268
	ctx.lr = 0x836B27DC;
	sub_8247B268(ctx, base);
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
loc_836B27E4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836B27EC"))) PPC_WEAK_FUNC(sub_836B27EC);
PPC_FUNC_IMPL(__imp__sub_836B27EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836B27F0"))) PPC_WEAK_FUNC(sub_836B27F0);
PPC_FUNC_IMPL(__imp__sub_836B27F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x836B27F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// li r28,-1
	ctx.r28.s64 = -1;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r27,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r27.u32);
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// stb r29,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r29.u8);
	// bl 0x82420558
	ctx.lr = 0x836B2840;
	sub_82420558(ctx, base);
	// stw r27,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r27.u32);
	// stw r29,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r29.u32);
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// stb r29,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r29.u8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,36
	ctx.r4.s64 = ctx.r30.s64 + 36;
	// bl 0x82420558
	ctx.lr = 0x836B2860;
	sub_82420558(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836B286C"))) PPC_WEAK_FUNC(sub_836B286C);
PPC_FUNC_IMPL(__imp__sub_836B286C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836B2870"))) PPC_WEAK_FUNC(sub_836B2870);
PPC_FUNC_IMPL(__imp__sub_836B2870) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x836b2884
	if (cr6.eq) goto loc_836B2884;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x836b27f0
	sub_836B27F0(ctx, base);
	return;
loc_836B2884:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_836B288C"))) PPC_WEAK_FUNC(sub_836B288C);
PPC_FUNC_IMPL(__imp__sub_836B288C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836B2890"))) PPC_WEAK_FUNC(sub_836B2890);
PPC_FUNC_IMPL(__imp__sub_836B2890) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x836B2898;
	__savegprlr_24(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r25,r3,176
	ctx.r25.s64 = ctx.r3.s64 + 176;
	// addi r30,r11,-2992
	ctx.r30.s64 = ctx.r11.s64 + -2992;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r4,r30,-260
	ctx.r4.s64 = ctx.r30.s64 + -260;
	// bl 0x82536d88
	ctx.lr = 0x836B28B8;
	sub_82536D88(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x836B28BC;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_836B28C4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836b28c4
	if (!cr6.eq) goto loc_836B28C4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r24,220
	ctx.r3.s64 = ctx.r24.s64 + 220;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836B28E8;
	sub_824208C8(ctx, base);
	// addi r4,r30,-252
	ctx.r4.s64 = ctx.r30.s64 + -252;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82536d88
	ctx.lr = 0x836B28F4;
	sub_82536D88(ctx, base);
	// bl 0x825347e8
	ctx.lr = 0x836B28F8;
	sub_825347E8(ctx, base);
	// stw r3,248(r24)
	PPC_STORE_U32(ctx.r24.u32 + 248, ctx.r3.u32);
	// addi r4,r30,-244
	ctx.r4.s64 = ctx.r30.s64 + -244;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82536d88
	ctx.lr = 0x836B2908;
	sub_82536D88(ctx, base);
	// bl 0x82534a18
	ctx.lr = 0x836B290C;
	sub_82534A18(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x836b2934
	if (cr6.eq) goto loc_836B2934;
	// addi r4,r30,-236
	ctx.r4.s64 = ctx.r30.s64 + -236;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82536d88
	ctx.lr = 0x836B2924;
	sub_82536D88(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x836B2928;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r24,316
	ctx.r3.s64 = ctx.r24.s64 + 316;
	// bl 0x83601998
	ctx.lr = 0x836B2934;
	sub_83601998(ctx, base);
loc_836B2934:
	// addi r4,r30,-228
	ctx.r4.s64 = ctx.r30.s64 + -228;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82536d88
	ctx.lr = 0x836B2940;
	sub_82536D88(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82536838
	ctx.lr = 0x836B294C;
	sub_82536838(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82534a38
	ctx.lr = 0x836B2954;
	sub_82534A38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b2b84
	if (cr6.eq) goto loc_836B2B84;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825356a0
	ctx.lr = 0x836B296C;
	sub_825356A0(ctx, base);
	// addi r28,r24,352
	ctx.r28.s64 = ctx.r24.s64 + 352;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x836b2770
	ctx.lr = 0x836B2978;
	sub_836B2770(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825356f0
	ctx.lr = 0x836B2984;
	sub_825356F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82534ae0
	ctx.lr = 0x836B2990;
	sub_82534AE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x836b2b84
	if (!cr6.eq) goto loc_836B2B84;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// addi r26,r11,27936
	ctx.r26.s64 = ctx.r11.s64 + 27936;
loc_836B29AC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535118
	ctx.lr = 0x836B29B4;
	sub_82535118(ctx, base);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r27,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r27.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r29,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r29.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stb r29,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r29.u8);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x824208c8
	ctx.lr = 0x836B29DC;
	sub_824208C8(ctx, base);
	// stw r27,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r27.u32);
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stb r29,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, ctx.r29.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// bl 0x824208c8
	ctx.lr = 0x836B29F8;
	sub_824208C8(ctx, base);
	// addi r4,r30,-208
	ctx.r4.s64 = ctx.r30.s64 + -208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x836B2A04;
	sub_82535898(ctx, base);
	// bl 0x825349d0
	ctx.lr = 0x836B2A08;
	sub_825349D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b2a28
	if (cr6.eq) goto loc_836B2A28;
	// addi r4,r30,-200
	ctx.r4.s64 = ctx.r30.s64 + -200;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x836B2A20;
	sub_82535898(ctx, base);
	// bl 0x825347e8
	ctx.lr = 0x836B2A24;
	sub_825347E8(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
loc_836B2A28:
	// addi r4,r30,-192
	ctx.r4.s64 = ctx.r30.s64 + -192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x836B2A34;
	sub_82535898(ctx, base);
	// bl 0x825349d0
	ctx.lr = 0x836B2A38;
	sub_825349D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b2a58
	if (cr6.eq) goto loc_836B2A58;
	// addi r4,r30,-164
	ctx.r4.s64 = ctx.r30.s64 + -164;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x836B2A50;
	sub_82535898(ctx, base);
	// bl 0x825347e8
	ctx.lr = 0x836B2A54;
	sub_825347E8(ctx, base);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
loc_836B2A58:
	// addi r4,r30,-136
	ctx.r4.s64 = ctx.r30.s64 + -136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x836B2A64;
	sub_82535898(ctx, base);
	// bl 0x82534a18
	ctx.lr = 0x836B2A68;
	sub_82534A18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b2a90
	if (cr6.eq) goto loc_836B2A90;
	// addi r4,r30,-112
	ctx.r4.s64 = ctx.r30.s64 + -112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x836B2A80;
	sub_82535898(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x836B2A84;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x83601998
	ctx.lr = 0x836B2A90;
	sub_83601998(ctx, base);
loc_836B2A90:
	// addi r4,r30,-88
	ctx.r4.s64 = ctx.r30.s64 + -88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x836B2A9C;
	sub_82535898(ctx, base);
	// bl 0x82534a18
	ctx.lr = 0x836B2AA0;
	sub_82534A18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b2ac8
	if (cr6.eq) goto loc_836B2AC8;
	// addi r4,r30,-56
	ctx.r4.s64 = ctx.r30.s64 + -56;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535898
	ctx.lr = 0x836B2AB8;
	sub_82535898(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x836B2ABC;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// bl 0x83601998
	ctx.lr = 0x836B2AC8;
	sub_83601998(ctx, base);
loc_836B2AC8:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x836b2af0
	if (cr6.lt) goto loc_836B2AF0;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x836b2530
	ctx.lr = 0x836B2AE4;
	sub_836B2530(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b2b18
	if (cr6.eq) goto loc_836B2B18;
loc_836B2AF0:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// add. r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x836b2b0c
	if (cr0.eq) goto loc_836B2B0C;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x836b27f0
	ctx.lr = 0x836B2B0C;
	sub_836B27F0(ctx, base);
loc_836B2B0C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_836B2B18:
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836b2b2c
	if (cr6.lt) goto loc_836B2B2C;
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x8386d088
	ctx.lr = 0x836B2B2C;
	sub_8386D088(ctx, base);
loc_836B2B2C:
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// stw r27,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r27.u32);
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r29,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, ctx.r29.u8);
	// blt cr6,0x836b2b4c
	if (cr6.lt) goto loc_836B2B4C;
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x8386d088
	ctx.lr = 0x836B2B4C;
	sub_8386D088(ctx, base);
loc_836B2B4C:
	// stw r27,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r27.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r29,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r29.u32);
	// stb r29,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r29.u8);
	// bl 0x82535128
	ctx.lr = 0x836B2B60;
	sub_82535128(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825356f0
	ctx.lr = 0x836B2B6C;
	sub_825356F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82534ae0
	ctx.lr = 0x836B2B78;
	sub_82534AE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b29ac
	if (cr6.eq) goto loc_836B29AC;
loc_836B2B84:
	// addi r4,r30,-24
	ctx.r4.s64 = ctx.r30.s64 + -24;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82536d88
	ctx.lr = 0x836B2B90;
	sub_82536D88(ctx, base);
	// bl 0x825349d0
	ctx.lr = 0x836B2B94;
	sub_825349D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b2bb4
	if (cr6.eq) goto loc_836B2BB4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82536d88
	ctx.lr = 0x836B2BAC;
	sub_82536D88(ctx, base);
	// bl 0x825347e8
	ctx.lr = 0x836B2BB0;
	sub_825347E8(ctx, base);
	// stw r3,368(r24)
	PPC_STORE_U32(ctx.r24.u32 + 368, ctx.r3.u32);
loc_836B2BB4:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535aa0
	ctx.lr = 0x836B2BBC;
	sub_82535AA0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836B2BC8"))) PPC_WEAK_FUNC(sub_836B2BC8);
PPC_FUNC_IMPL(__imp__sub_836B2BC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x836B2BD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r29,-1
	ctx.r29.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// bl 0x82420558
	ctx.lr = 0x836B2C04;
	sub_82420558(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,36
	ctx.r4.s64 = ctx.r31.s64 + 36;
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// bl 0x82420558
	ctx.lr = 0x836B2C18;
	sub_82420558(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836B2C20"))) PPC_WEAK_FUNC(sub_836B2C20);
PPC_FUNC_IMPL(__imp__sub_836B2C20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x836B2C28;
	__savegprlr_26(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82a8c428
	ctx.lr = 0x836B2C44;
	sub_82A8C428(ctx, base);
	// lwz r10,240(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 240);
	// addi r11,r29,220
	ctx.r11.s64 = ctx.r29.s64 + 220;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836b2c5c
	if (cr6.lt) goto loc_836B2C5C;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x836b2c60
	goto loc_836B2C60;
loc_836B2C5C:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_836B2C60:
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r31,r11,-3260
	ctx.r31.s64 = ctx.r11.s64 + -3260;
	// addi r4,r31,-60
	ctx.r4.s64 = ctx.r31.s64 + -60;
	// bl 0x82473550
	ctx.lr = 0x836B2C74;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82473550
	ctx.lr = 0x836B2C7C;
	sub_82473550(ctx, base);
	// addi r4,r31,-64
	ctx.r4.s64 = ctx.r31.s64 + -64;
	// bl 0x82473550
	ctx.lr = 0x836B2C84;
	sub_82473550(ctx, base);
	// addi r4,r31,-48
	ctx.r4.s64 = ctx.r31.s64 + -48;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lwz r30,248(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 248);
	// bl 0x82473550
	ctx.lr = 0x836B2C94;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82474170
	ctx.lr = 0x836B2C9C;
	sub_82474170(ctx, base);
	// addi r4,r31,-52
	ctx.r4.s64 = ctx.r31.s64 + -52;
	// bl 0x82473550
	ctx.lr = 0x836B2CA4;
	sub_82473550(ctx, base);
	// addi r4,r29,316
	ctx.r4.s64 = ctx.r29.s64 + 316;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x83734458
	ctx.lr = 0x836B2CB0;
	sub_83734458(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836b2cc4
	if (cr6.lt) goto loc_836B2CC4;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x836b2cc8
	goto loc_836B2CC8;
loc_836B2CC4:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_836B2CC8:
	// addi r4,r31,-36
	ctx.r4.s64 = ctx.r31.s64 + -36;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82473550
	ctx.lr = 0x836B2CD4;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82473550
	ctx.lr = 0x836B2CDC;
	sub_82473550(ctx, base);
	// addi r4,r31,-40
	ctx.r4.s64 = ctx.r31.s64 + -40;
	// bl 0x82473550
	ctx.lr = 0x836B2CE4;
	sub_82473550(ctx, base);
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836b2cf8
	if (cr6.lt) goto loc_836B2CF8;
	// lwz r3,176(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x8386d088
	ctx.lr = 0x836B2CF8;
	sub_8386D088(ctx, base);
loc_836B2CF8:
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r28,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r28.u32);
	// addi r4,r29,344
	ctx.r4.s64 = ctx.r29.s64 + 344;
	// stw r27,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r27.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r28,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r28.u8);
	// bl 0x83734458
	ctx.lr = 0x836B2D18;
	sub_83734458(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836b2d2c
	if (cr6.lt) goto loc_836B2D2C;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x836b2d30
	goto loc_836B2D30;
loc_836B2D2C:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_836B2D30:
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82473550
	ctx.lr = 0x836B2D3C;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82473550
	ctx.lr = 0x836B2D44;
	sub_82473550(ctx, base);
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// bl 0x82473550
	ctx.lr = 0x836B2D4C;
	sub_82473550(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836b2d60
	if (cr6.lt) goto loc_836B2D60;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x8386d088
	ctx.lr = 0x836B2D60;
	sub_8386D088(ctx, base);
loc_836B2D60:
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// addi r4,r29,372
	ctx.r4.s64 = ctx.r29.s64 + 372;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stb r28,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r28.u8);
	// bl 0x83734458
	ctx.lr = 0x836B2D78;
	sub_83734458(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836b2d8c
	if (cr6.lt) goto loc_836B2D8C;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x836b2d90
	goto loc_836B2D90;
loc_836B2D8C:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_836B2D90:
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82473550
	ctx.lr = 0x836B2D9C;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82473550
	ctx.lr = 0x836B2DA4;
	sub_82473550(ctx, base);
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// bl 0x82473550
	ctx.lr = 0x836B2DAC;
	sub_82473550(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836b2dc0
	if (cr6.lt) goto loc_836B2DC0;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x8386d088
	ctx.lr = 0x836B2DC0;
	sub_8386D088(ctx, base);
loc_836B2DC0:
	// stw r27,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r27.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r28,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r28.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stb r28,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r28.u8);
	// lwz r31,400(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 400);
	// bl 0x82473550
	ctx.lr = 0x836B2DDC;
	sub_82473550(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82474170
	ctx.lr = 0x836B2DE4;
	sub_82474170(ctx, base);
	// addi r4,r1,232
	ctx.r4.s64 = ctx.r1.s64 + 232;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a79bf8
	ctx.lr = 0x836B2DF0;
	sub_82A79BF8(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x836b2e04
	if (!cr6.lt) goto loc_836B2E04;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_836B2E04:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836B2E08:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836b2e08
	if (!cr6.eq) goto loc_836B2E08;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836B2E2C;
	sub_824208C8(ctx, base);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836b2e40
	if (cr6.lt) goto loc_836B2E40;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82416268
	ctx.lr = 0x836B2E40;
	sub_82416268(ctx, base);
loc_836B2E40:
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// bl 0x82a79160
	ctx.lr = 0x836B2E54;
	sub_82A79160(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// addi r10,r11,15320
	ctx.r10.s64 = ctx.r11.s64 + 15320;
	// stw r10,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r10.u32);
	// bl 0x831ccf00
	ctx.lr = 0x836B2E68;
	sub_831CCF00(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836B2E74"))) PPC_WEAK_FUNC(sub_836B2E74);
PPC_FUNC_IMPL(__imp__sub_836B2E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836B2E78"))) PPC_WEAK_FUNC(sub_836B2E78);
PPC_FUNC_IMPL(__imp__sub_836B2E78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x836B2E80;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d95768
	ctx.lr = 0x836B2E8C;
	sub_82D95768(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r29,r11,-3440
	ctx.r29.s64 = ctx.r11.s64 + -3440;
	// li r5,23
	ctx.r5.s64 = 23;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824208c8
	ctx.lr = 0x836B2EA4;
	sub_824208C8(ctx, base);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// addi r7,r10,-2848
	ctx.r7.s64 = ctx.r10.s64 + -2848;
	// addi r5,r8,-2864
	ctx.r5.s64 = ctx.r8.s64 + -2864;
	// addi r6,r9,-2860
	ctx.r6.s64 = ctx.r9.s64 + -2860;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r5,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r5.u32);
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r6,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r6.u32);
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// stw r28,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r28.u32);
	// addi r4,r29,24
	ctx.r4.s64 = ctx.r29.s64 + 24;
	// stb r30,316(r31)
	PPC_STORE_U8(ctx.r31.u32 + 316, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836B2EEC;
	sub_824208C8(ctx, base);
	// stw r28,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r28.u32);
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// stb r30,344(r31)
	PPC_STORE_U8(ctx.r31.u32 + 344, ctx.r30.u8);
	// addi r4,r29,40
	ctx.r4.s64 = ctx.r29.s64 + 40;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836B2F08;
	sub_824208C8(ctx, base);
	// stw r28,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r28.u32);
	// stw r30,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r30.u32);
	// addi r3,r31,372
	ctx.r3.s64 = ctx.r31.s64 + 372;
	// stb r30,372(r31)
	PPC_STORE_U8(ctx.r31.u32 + 372, ctx.r30.u8);
	// addi r4,r29,56
	ctx.r4.s64 = ctx.r29.s64 + 56;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836B2F24;
	sub_824208C8(ctx, base);
	// stw r30,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836B2F34"))) PPC_WEAK_FUNC(sub_836B2F34);
PPC_FUNC_IMPL(__imp__sub_836B2F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836B2F38"))) PPC_WEAK_FUNC(sub_836B2F38);
PPC_FUNC_IMPL(__imp__sub_836B2F38) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x836b3000
	sub_836B3000(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836B2F40"))) PPC_WEAK_FUNC(sub_836B2F40);
PPC_FUNC_IMPL(__imp__sub_836B2F40) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x836b3000
	sub_836B3000(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836B2F48"))) PPC_WEAK_FUNC(sub_836B2F48);
PPC_FUNC_IMPL(__imp__sub_836B2F48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x836B2F50;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// addi r8,r11,-2848
	ctx.r8.s64 = ctx.r11.s64 + -2848;
	// addi r7,r10,-2860
	ctx.r7.s64 = ctx.r10.s64 + -2860;
	// addi r6,r9,-2864
	ctx.r6.s64 = ctx.r9.s64 + -2864;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r6,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r6.u32);
	// addi r29,r3,372
	ctx.r29.s64 = ctx.r3.s64 + 372;
	// lwz r5,392(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 392);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x836b2f94
	if (cr6.lt) goto loc_836B2F94;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836B2F94;
	sub_8386D088(ctx, base);
loc_836B2F94:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// addi r31,r28,344
	ctx.r31.s64 = ctx.r28.s64 + 344;
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// stb r30,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r30.u8);
	// lwz r11,364(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 364);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836b2fc0
	if (cr6.lt) goto loc_836B2FC0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836B2FC0;
	sub_8386D088(ctx, base);
loc_836B2FC0:
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// addi r29,r28,316
	ctx.r29.s64 = ctx.r28.s64 + 316;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// lwz r11,336(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 336);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836b2fe4
	if (cr6.lt) goto loc_836B2FE4;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836B2FE4;
	sub_8386D088(ctx, base);
loc_836B2FE4:
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// stb r30,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r30.u8);
	// bl 0x82b6a590
	ctx.lr = 0x836B2FF8;
	sub_82B6A590(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836B3000"))) PPC_WEAK_FUNC(sub_836B3000);
PPC_FUNC_IMPL(__imp__sub_836B3000) {
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
	// bl 0x836b2f48
	ctx.lr = 0x836B3020;
	sub_836B2F48(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b3040
	if (cr6.eq) goto loc_836B3040;
	// bl 0x82595188
	ctx.lr = 0x836B3030;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x836B3040;
	sub_825952B8(ctx, base);
loc_836B3040:
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

__attribute__((alias("__imp__sub_836B305C"))) PPC_WEAK_FUNC(sub_836B305C);
PPC_FUNC_IMPL(__imp__sub_836B305C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836B3060"))) PPC_WEAK_FUNC(sub_836B3060);
PPC_FUNC_IMPL(__imp__sub_836B3060) {
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
	ctx.lr = 0x836B307C;
	sub_82EAF8D8(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r4,r11,-3440
	ctx.r4.s64 = ctx.r11.s64 + -3440;
	// li r5,23
	ctx.r5.s64 = 23;
	// bl 0x824208c8
	ctx.lr = 0x836B3090;
	sub_824208C8(ctx, base);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// lis r7,-32216
	ctx.r7.s64 = -2111307776;
	// addi r4,r8,-2828
	ctx.r4.s64 = ctx.r8.s64 + -2828;
	// addi r3,r7,-2832
	ctx.r3.s64 = ctx.r7.s64 + -2832;
	// addi r6,r10,-2812
	ctx.r6.s64 = ctx.r10.s64 + -2812;
	// stw r4,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r4.u32);
	// addi r5,r9,-2824
	ctx.r5.s64 = ctx.r9.s64 + -2824;
	// stw r3,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r3.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// stw r5,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r5.u32);
	// addi r3,r31,352
	ctx.r3.s64 = ctx.r31.s64 + 352;
	// stw r30,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r30.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r30,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r30.u32);
	// std r30,360(r31)
	PPC_STORE_U64(ctx.r31.u32 + 360, ctx.r30.u64);
	// bl 0x836b2530
	ctx.lr = 0x836B30DC;
	sub_836B2530(ctx, base);
	// stw r30,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_836B30FC"))) PPC_WEAK_FUNC(sub_836B30FC);
PPC_FUNC_IMPL(__imp__sub_836B30FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836B3100"))) PPC_WEAK_FUNC(sub_836B3100);
PPC_FUNC_IMPL(__imp__sub_836B3100) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x836b3118
	sub_836B3118(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836B3108"))) PPC_WEAK_FUNC(sub_836B3108);
PPC_FUNC_IMPL(__imp__sub_836B3108) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-312
	ctx.r3.s64 = ctx.r3.s64 + -312;
	// b 0x836b3118
	sub_836B3118(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836B3110"))) PPC_WEAK_FUNC(sub_836B3110);
PPC_FUNC_IMPL(__imp__sub_836B3110) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x836b3118
	sub_836B3118(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836B3118"))) PPC_WEAK_FUNC(sub_836B3118);
PPC_FUNC_IMPL(__imp__sub_836B3118) {
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
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r7,r11,-2812
	ctx.r7.s64 = ctx.r11.s64 + -2812;
	// addi r6,r10,-2824
	ctx.r6.s64 = ctx.r10.s64 + -2824;
	// addi r5,r9,-2828
	ctx.r5.s64 = ctx.r9.s64 + -2828;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r8,-2832
	ctx.r4.s64 = ctx.r8.s64 + -2832;
	// stw r6,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r6.u32);
	// stw r5,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r5.u32);
	// addi r3,r3,352
	ctx.r3.s64 = ctx.r3.s64 + 352;
	// stw r4,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r4.u32);
	// bl 0x836b2770
	ctx.lr = 0x836B316C;
	sub_836B2770(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eaf978
	ctx.lr = 0x836B3174;
	sub_82EAF978(ctx, base);
	// clrlwi r3,r30,31
	ctx.r3.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x836b3194
	if (cr6.eq) goto loc_836B3194;
	// bl 0x82595188
	ctx.lr = 0x836B3184;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x836B3194;
	sub_825952B8(ctx, base);
loc_836B3194:
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

__attribute__((alias("__imp__sub_836B31B0"))) PPC_WEAK_FUNC(sub_836B31B0);
PPC_FUNC_IMPL(__imp__sub_836B31B0) {
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
	// bl 0x83356798
	ctx.lr = 0x836B31CC;
	sub_83356798(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// li r30,29
	ctx.r30.s64 = 29;
	// addi r10,r11,-2884
	ctx.r10.s64 = ctx.r11.s64 + -2884;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r4,408
	ctx.r4.s64 = 408;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x836B31F0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x836b3200
	if (cr6.eq) goto loc_836B3200;
	// bl 0x836b2e78
	ctx.lr = 0x836B31FC;
	sub_836B2E78(ctx, base);
	// b 0x836b3204
	goto loc_836B3204;
loc_836B3200:
	// li r3,0
	ctx.r3.s64 = 0;
loc_836B3204:
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r4,376
	ctx.r4.s64 = 376;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x836B321C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x836b3230
	if (cr6.eq) goto loc_836B3230;
	// bl 0x836b3060
	ctx.lr = 0x836B3228;
	sub_836B3060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x836b3234
	goto loc_836B3234;
loc_836B3230:
	// li r11,0
	ctx.r11.s64 = 0;
loc_836B3234:
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_836B3254"))) PPC_WEAK_FUNC(sub_836B3254);
PPC_FUNC_IMPL(__imp__sub_836B3254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836B3258"))) PPC_WEAK_FUNC(sub_836B3258);
PPC_FUNC_IMPL(__imp__sub_836B3258) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x836B3260;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,176
	ctx.r29.s64 = ctx.r3.s64 + 176;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82535130
	ctx.lr = 0x836B3274;
	sub_82535130(ctx, base);
	// lwz r11,240(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	// addi r4,r30,220
	ctx.r4.s64 = ctx.r30.s64 + 220;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836b3288
	if (cr6.lt) goto loc_836B3288;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836B3288:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825346c8
	ctx.lr = 0x836B3290;
	sub_825346C8(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r31,r11,-2644
	ctx.r31.s64 = ctx.r11.s64 + -2644;
	// addi r4,r31,-44
	ctx.r4.s64 = ctx.r31.s64 + -44;
	// bl 0x82536d88
	ctx.lr = 0x836B32A4;
	sub_82536D88(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x825369e8
	ctx.lr = 0x836B32AC;
	sub_825369E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535aa0
	ctx.lr = 0x836B32B4;
	sub_82535AA0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,248(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	// bl 0x82534640
	ctx.lr = 0x836B32C0;
	sub_82534640(ctx, base);
	// addi r4,r31,-36
	ctx.r4.s64 = ctx.r31.s64 + -36;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82536d88
	ctx.lr = 0x836B32CC;
	sub_82536D88(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x825369e8
	ctx.lr = 0x836B32D4;
	sub_825369E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535aa0
	ctx.lr = 0x836B32DC;
	sub_82535AA0(ctx, base);
	// lwz r10,336(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 336);
	// addi r11,r30,316
	ctx.r11.s64 = ctx.r30.s64 + 316;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836b32f0
	if (cr6.lt) goto loc_836B32F0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_836B32F0:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825346c8
	ctx.lr = 0x836B32FC;
	sub_825346C8(ctx, base);
	// addi r4,r31,-28
	ctx.r4.s64 = ctx.r31.s64 + -28;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82536d88
	ctx.lr = 0x836B3308;
	sub_82536D88(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x825369e8
	ctx.lr = 0x836B3310;
	sub_825369E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535aa0
	ctx.lr = 0x836B3318;
	sub_82535AA0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,344(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 344);
	// bl 0x82534640
	ctx.lr = 0x836B3324;
	sub_82534640(ctx, base);
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82536d88
	ctx.lr = 0x836B3330;
	sub_82536D88(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x825369e8
	ctx.lr = 0x836B3338;
	sub_825369E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535aa0
	ctx.lr = 0x836B3340;
	sub_82535AA0(ctx, base);
	// lwz r10,368(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 368);
	// addi r11,r30,348
	ctx.r11.s64 = ctx.r30.s64 + 348;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836b3354
	if (cr6.lt) goto loc_836B3354;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_836B3354:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825346c8
	ctx.lr = 0x836B3360;
	sub_825346C8(ctx, base);
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82536d88
	ctx.lr = 0x836B336C;
	sub_82536D88(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x825369e8
	ctx.lr = 0x836B3374;
	sub_825369E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535aa0
	ctx.lr = 0x836B337C;
	sub_82535AA0(ctx, base);
	// lwz r10,396(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 396);
	// addi r11,r30,376
	ctx.r11.s64 = ctx.r30.s64 + 376;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836b3390
	if (cr6.lt) goto loc_836B3390;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_836B3390:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825346c8
	ctx.lr = 0x836B339C;
	sub_825346C8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82536d88
	ctx.lr = 0x836B33A8;
	sub_82536D88(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x825369e8
	ctx.lr = 0x836B33B0;
	sub_825369E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535aa0
	ctx.lr = 0x836B33B8;
	sub_82535AA0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836B33C4"))) PPC_WEAK_FUNC(sub_836B33C4);
PPC_FUNC_IMPL(__imp__sub_836B33C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836B33C8"))) PPC_WEAK_FUNC(sub_836B33C8);
PPC_FUNC_IMPL(__imp__sub_836B33C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x836B33D0;
	__savegprlr_26(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82a8c428
	ctx.lr = 0x836B33EC;
	sub_82A8C428(ctx, base);
	// lwz r10,240(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	// addi r11,r30,220
	ctx.r11.s64 = ctx.r30.s64 + 220;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836b3404
	if (cr6.lt) goto loc_836B3404;
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x836b3408
	goto loc_836B3408;
loc_836B3404:
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_836B3408:
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r31,r11,-2564
	ctx.r31.s64 = ctx.r11.s64 + -2564;
	// addi r4,r31,-68
	ctx.r4.s64 = ctx.r31.s64 + -68;
	// bl 0x82473550
	ctx.lr = 0x836B341C;
	sub_82473550(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82473550
	ctx.lr = 0x836B3424;
	sub_82473550(ctx, base);
	// addi r4,r31,-72
	ctx.r4.s64 = ctx.r31.s64 + -72;
	// bl 0x82473550
	ctx.lr = 0x836B342C;
	sub_82473550(ctx, base);
	// addi r4,r31,-56
	ctx.r4.s64 = ctx.r31.s64 + -56;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lwz r29,248(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	// bl 0x82473550
	ctx.lr = 0x836B343C;
	sub_82473550(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82474170
	ctx.lr = 0x836B3444;
	sub_82474170(ctx, base);
	// addi r4,r31,-60
	ctx.r4.s64 = ctx.r31.s64 + -60;
	// bl 0x82473550
	ctx.lr = 0x836B344C;
	sub_82473550(ctx, base);
	// addi r4,r30,316
	ctx.r4.s64 = ctx.r30.s64 + 316;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x83734458
	ctx.lr = 0x836B3458;
	sub_83734458(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836b346c
	if (cr6.lt) goto loc_836B346C;
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x836b3470
	goto loc_836B3470;
loc_836B346C:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_836B3470:
	// addi r4,r31,-44
	ctx.r4.s64 = ctx.r31.s64 + -44;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82473550
	ctx.lr = 0x836B347C;
	sub_82473550(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82473550
	ctx.lr = 0x836B3484;
	sub_82473550(ctx, base);
	// addi r4,r31,-48
	ctx.r4.s64 = ctx.r31.s64 + -48;
	// bl 0x82473550
	ctx.lr = 0x836B348C;
	sub_82473550(ctx, base);
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836b34a0
	if (cr6.lt) goto loc_836B34A0;
	// lwz r3,176(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x8386d088
	ctx.lr = 0x836B34A0;
	sub_8386D088(ctx, base);
loc_836B34A0:
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r29,344(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 344);
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r28,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r28.u32);
	// addi r4,r31,-28
	ctx.r4.s64 = ctx.r31.s64 + -28;
	// stw r27,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r27.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stb r28,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r28.u8);
	// bl 0x82473550
	ctx.lr = 0x836B34C4;
	sub_82473550(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82474170
	ctx.lr = 0x836B34CC;
	sub_82474170(ctx, base);
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// bl 0x82473550
	ctx.lr = 0x836B34D4;
	sub_82473550(ctx, base);
	// addi r4,r30,348
	ctx.r4.s64 = ctx.r30.s64 + 348;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83734458
	ctx.lr = 0x836B34E0;
	sub_83734458(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836b34f4
	if (cr6.lt) goto loc_836B34F4;
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x836b34f8
	goto loc_836B34F8;
loc_836B34F4:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_836B34F8:
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82473550
	ctx.lr = 0x836B3504;
	sub_82473550(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82473550
	ctx.lr = 0x836B350C;
	sub_82473550(ctx, base);
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// bl 0x82473550
	ctx.lr = 0x836B3514;
	sub_82473550(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836b3528
	if (cr6.lt) goto loc_836B3528;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x8386d088
	ctx.lr = 0x836B3528;
	sub_8386D088(ctx, base);
loc_836B3528:
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// addi r4,r30,376
	ctx.r4.s64 = ctx.r30.s64 + 376;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stb r28,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r28.u8);
	// bl 0x83734458
	ctx.lr = 0x836B3540;
	sub_83734458(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836b3554
	if (cr6.lt) goto loc_836B3554;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x836b3558
	goto loc_836B3558;
loc_836B3554:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_836B3558:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82473550
	ctx.lr = 0x836B3564;
	sub_82473550(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82473550
	ctx.lr = 0x836B356C;
	sub_82473550(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836b3580
	if (cr6.lt) goto loc_836B3580;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x8386d088
	ctx.lr = 0x836B3580;
	sub_8386D088(ctx, base);
loc_836B3580:
	// stw r27,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r27.u32);
	// addi r4,r1,232
	ctx.r4.s64 = ctx.r1.s64 + 232;
	// stw r28,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r28,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r28.u8);
	// bl 0x82a79bf8
	ctx.lr = 0x836B3598;
	sub_82A79BF8(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x836b35ac
	if (!cr6.lt) goto loc_836B35AC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_836B35AC:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836B35B0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836b35b0
	if (!cr6.eq) goto loc_836B35B0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836B35D4;
	sub_824208C8(ctx, base);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836b35e8
	if (cr6.lt) goto loc_836B35E8;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82416268
	ctx.lr = 0x836B35E8;
	sub_82416268(ctx, base);
loc_836B35E8:
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// bl 0x82a79160
	ctx.lr = 0x836B35FC;
	sub_82A79160(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// addi r10,r11,15320
	ctx.r10.s64 = ctx.r11.s64 + 15320;
	// stw r10,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r10.u32);
	// bl 0x831ccf00
	ctx.lr = 0x836B3610;
	sub_831CCF00(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836B361C"))) PPC_WEAK_FUNC(sub_836B361C);
PPC_FUNC_IMPL(__imp__sub_836B361C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836B3620"))) PPC_WEAK_FUNC(sub_836B3620);
PPC_FUNC_IMPL(__imp__sub_836B3620) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdabc
	ctx.lr = 0x836B3628;
	__savegprlr_17(ctx, base);
	// stwu r1,-960(r1)
	ea = -960 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r18,r3,176
	ctx.r18.s64 = ctx.r3.s64 + 176;
	// addi r26,r11,-2056
	ctx.r26.s64 = ctx.r11.s64 + -2056;
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// addi r4,r26,-500
	ctx.r4.s64 = ctx.r26.s64 + -500;
	// bl 0x82536d88
	ctx.lr = 0x836B3648;
	sub_82536D88(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x836B364C;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_836B3654:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836b3654
	if (!cr6.eq) goto loc_836B3654;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r17,220
	ctx.r3.s64 = ctx.r17.s64 + 220;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836B3678;
	sub_824208C8(ctx, base);
	// addi r4,r26,-492
	ctx.r4.s64 = ctx.r26.s64 + -492;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82536d88
	ctx.lr = 0x836B3684;
	sub_82536D88(ctx, base);
	// bl 0x825347e8
	ctx.lr = 0x836B3688;
	sub_825347E8(ctx, base);
	// stw r3,248(r17)
	PPC_STORE_U32(ctx.r17.u32 + 248, ctx.r3.u32);
	// addi r4,r26,-484
	ctx.r4.s64 = ctx.r26.s64 + -484;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82536d88
	ctx.lr = 0x836B3698;
	sub_82536D88(ctx, base);
	// bl 0x82534a18
	ctx.lr = 0x836B369C;
	sub_82534A18(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x836b36c4
	if (cr6.eq) goto loc_836B36C4;
	// addi r4,r26,-476
	ctx.r4.s64 = ctx.r26.s64 + -476;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82536d88
	ctx.lr = 0x836B36B4;
	sub_82536D88(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x836B36B8;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r17,316
	ctx.r3.s64 = ctx.r17.s64 + 316;
	// bl 0x83601998
	ctx.lr = 0x836B36C4;
	sub_83601998(ctx, base);
loc_836B36C4:
	// addi r4,r26,-468
	ctx.r4.s64 = ctx.r26.s64 + -468;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82536d88
	ctx.lr = 0x836B36D0;
	sub_82536D88(ctx, base);
	// bl 0x825349d0
	ctx.lr = 0x836B36D4;
	sub_825349D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b36f4
	if (cr6.eq) goto loc_836B36F4;
	// addi r4,r26,-460
	ctx.r4.s64 = ctx.r26.s64 + -460;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82536d88
	ctx.lr = 0x836B36EC;
	sub_82536D88(ctx, base);
	// bl 0x825347e8
	ctx.lr = 0x836B36F0;
	sub_825347E8(ctx, base);
	// stw r3,348(r17)
	PPC_STORE_U32(ctx.r17.u32 + 348, ctx.r3.u32);
loc_836B36F4:
	// addi r4,r26,-452
	ctx.r4.s64 = ctx.r26.s64 + -452;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82536d88
	ctx.lr = 0x836B3700;
	sub_82536D88(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82536838
	ctx.lr = 0x836B370C;
	sub_82536838(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82534a38
	ctx.lr = 0x836B3714;
	sub_82534A38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b40d8
	if (cr6.eq) goto loc_836B40D8;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x825356a0
	ctx.lr = 0x836B372C;
	sub_825356A0(ctx, base);
	// addi r25,r17,352
	ctx.r25.s64 = ctx.r17.s64 + 352;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x836aeb80
	ctx.lr = 0x836B3738;
	sub_836AEB80(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x825356f0
	ctx.lr = 0x836B3744;
	sub_825356F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82534ae0
	ctx.lr = 0x836B3750;
	sub_82534AE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x836b40d8
	if (!cr6.eq) goto loc_836B40D8;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r8,11
	ctx.r8.s64 = 720896;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32204
	ctx.r9.s64 = -2110521344;
	// addi r21,r25,4
	ctx.r21.s64 = ctx.r25.s64 + 4;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r30,4
	ctx.r30.s64 = 4;
	// ori r29,r8,1
	ctx.r29.u64 = ctx.r8.u64 | 1;
	// li r19,8
	ctx.r19.s64 = 8;
	// li r20,320
	ctx.r20.s64 = 320;
	// addi r22,r11,-5108
	ctx.r22.s64 = ctx.r11.s64 + -5108;
	// addi r28,r10,8980
	ctx.r28.s64 = ctx.r10.s64 + 8980;
	// addi r27,r9,26164
	ctx.r27.s64 = ctx.r9.s64 + 26164;
loc_836B3790:
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82535118
	ctx.lr = 0x836B3798;
	sub_82535118(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x836aed60
	ctx.lr = 0x836B37A4;
	sub_836AED60(ctx, base);
	// stw r23,824(r1)
	PPC_STORE_U32(ctx.r1.u32 + 824, ctx.r23.u32);
	// stw r23,828(r1)
	PPC_STORE_U32(ctx.r1.u32 + 828, ctx.r23.u32);
	// addi r4,r26,-440
	ctx.r4.s64 = ctx.r26.s64 + -440;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82535898
	ctx.lr = 0x836B37B8;
	sub_82535898(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82536838
	ctx.lr = 0x836B37C4;
	sub_82536838(ctx, base);
	// addi r4,r26,-432
	ctx.r4.s64 = ctx.r26.s64 + -432;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535898
	ctx.lr = 0x836B37D0;
	sub_82535898(ctx, base);
	// bl 0x825349d0
	ctx.lr = 0x836B37D4;
	sub_825349D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b37f4
	if (cr6.eq) goto loc_836B37F4;
	// addi r4,r26,-428
	ctx.r4.s64 = ctx.r26.s64 + -428;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535898
	ctx.lr = 0x836B37EC;
	sub_82535898(ctx, base);
	// bl 0x825347e8
	ctx.lr = 0x836B37F0;
	sub_825347E8(ctx, base);
	// stw r3,512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 512, ctx.r3.u32);
loc_836B37F4:
	// addi r4,r26,-424
	ctx.r4.s64 = ctx.r26.s64 + -424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535898
	ctx.lr = 0x836B3800;
	sub_82535898(ctx, base);
	// bl 0x82534a18
	ctx.lr = 0x836B3804;
	sub_82534A18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b382c
	if (cr6.eq) goto loc_836B382C;
	// addi r4,r26,-416
	ctx.r4.s64 = ctx.r26.s64 + -416;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535898
	ctx.lr = 0x836B381C;
	sub_82535898(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x836B3820;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,516
	ctx.r3.s64 = ctx.r1.s64 + 516;
	// bl 0x83601998
	ctx.lr = 0x836B382C;
	sub_83601998(ctx, base);
loc_836B382C:
	// addi r4,r26,-408
	ctx.r4.s64 = ctx.r26.s64 + -408;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535898
	ctx.lr = 0x836B3838;
	sub_82535898(ctx, base);
	// bl 0x825349d0
	ctx.lr = 0x836B383C;
	sub_825349D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b385c
	if (cr6.eq) goto loc_836B385C;
	// addi r4,r26,-400
	ctx.r4.s64 = ctx.r26.s64 + -400;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535898
	ctx.lr = 0x836B3854;
	sub_82535898(ctx, base);
	// bl 0x82534850
	ctx.lr = 0x836B3858;
	sub_82534850(ctx, base);
	// std r3,544(r1)
	PPC_STORE_U64(ctx.r1.u32 + 544, ctx.r3.u64);
loc_836B385C:
	// addi r4,r26,-392
	ctx.r4.s64 = ctx.r26.s64 + -392;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535898
	ctx.lr = 0x836B3868;
	sub_82535898(ctx, base);
	// bl 0x82534a18
	ctx.lr = 0x836B386C;
	sub_82534A18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b3894
	if (cr6.eq) goto loc_836B3894;
	// addi r4,r26,-380
	ctx.r4.s64 = ctx.r26.s64 + -380;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535898
	ctx.lr = 0x836B3884;
	sub_82535898(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x836B3888;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,552
	ctx.r3.s64 = ctx.r1.s64 + 552;
	// bl 0x83601998
	ctx.lr = 0x836B3894;
	sub_83601998(ctx, base);
loc_836B3894:
	// addi r4,r26,-368
	ctx.r4.s64 = ctx.r26.s64 + -368;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535898
	ctx.lr = 0x836B38A0;
	sub_82535898(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82536838
	ctx.lr = 0x836B38AC;
	sub_82536838(ctx, base);
	// addi r4,r26,-360
	ctx.r4.s64 = ctx.r26.s64 + -360;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82535898
	ctx.lr = 0x836B38B8;
	sub_82535898(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82536838
	ctx.lr = 0x836B38C4;
	sub_82536838(ctx, base);
	// addi r4,r26,-352
	ctx.r4.s64 = ctx.r26.s64 + -352;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82535898
	ctx.lr = 0x836B38D0;
	sub_82535898(ctx, base);
	// bl 0x82534a18
	ctx.lr = 0x836B38D4;
	sub_82534A18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b38fc
	if (cr6.eq) goto loc_836B38FC;
	// addi r4,r26,-344
	ctx.r4.s64 = ctx.r26.s64 + -344;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82535898
	ctx.lr = 0x836B38EC;
	sub_82535898(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x836B38F0;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,584
	ctx.r3.s64 = ctx.r1.s64 + 584;
	// bl 0x83601998
	ctx.lr = 0x836B38FC;
	sub_83601998(ctx, base);
loc_836B38FC:
	// addi r4,r26,-336
	ctx.r4.s64 = ctx.r26.s64 + -336;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82535898
	ctx.lr = 0x836B3908;
	sub_82535898(ctx, base);
	// bl 0x825349d0
	ctx.lr = 0x836B390C;
	sub_825349D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b392c
	if (cr6.eq) goto loc_836B392C;
	// addi r4,r26,-328
	ctx.r4.s64 = ctx.r26.s64 + -328;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82535898
	ctx.lr = 0x836B3924;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x836B3928;
	sub_82534770(ctx, base);
	// stw r3,612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 612, ctx.r3.u32);
loc_836B392C:
	// addi r4,r26,-320
	ctx.r4.s64 = ctx.r26.s64 + -320;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82535898
	ctx.lr = 0x836B3938;
	sub_82535898(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82536838
	ctx.lr = 0x836B3944;
	sub_82536838(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82534a38
	ctx.lr = 0x836B394C;
	sub_82534A38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b3a58
	if (cr6.eq) goto loc_836B3A58;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x825356a0
	ctx.lr = 0x836B3964;
	sub_825356A0(ctx, base);
	// addi r3,r1,616
	ctx.r3.s64 = ctx.r1.s64 + 616;
	// bl 0x824238b8
	ctx.lr = 0x836B396C;
	sub_824238B8(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,488
	ctx.r3.s64 = ctx.r1.s64 + 488;
	// bl 0x825356f0
	ctx.lr = 0x836B3978;
	sub_825356F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82534ae0
	ctx.lr = 0x836B3984;
	sub_82534AE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x836b3a58
	if (!cr6.eq) goto loc_836B3A58;
loc_836B3990:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82535118
	ctx.lr = 0x836B3998;
	sub_82535118(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x836B399C;
	sub_82534770(ctx, base);
	// lwz r10,616(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 616);
	// lwz r11,620(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 620);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// blt cr6,0x836b3a0c
	if (cr6.lt) goto loc_836B3A0C;
	// addi r4,r10,2
	ctx.r4.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// ble cr6,0x836b39fc
	if (!cr6.gt) goto loc_836B39FC;
	// addi r11,r1,624
	ctx.r11.s64 = ctx.r1.s64 + 624;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// addi r10,r1,616
	ctx.r10.s64 = ctx.r1.s64 + 616;
	// stw r30,428(r1)
	PPC_STORE_U32(ctx.r1.u32 + 428, ctx.r30.u32);
	// addi r9,r1,620
	ctx.r9.s64 = ctx.r1.s64 + 620;
	// stw r11,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r11.u32);
	// stw r10,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r10.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r9,424(r1)
	PPC_STORE_U32(ctx.r1.u32 + 424, ctx.r9.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r30,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r30.u32);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x8247b270
	ctx.lr = 0x836B39F0;
	sub_8247B270(ctx, base);
	// lwz r10,616(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 616);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// b 0x836b3a00
	goto loc_836B3A00;
loc_836B39FC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_836B3A00:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b3a2c
	if (cr6.eq) goto loc_836B3A2C;
loc_836B3A0C:
	// lwz r11,624(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 624);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x836b3a24
	if (cr0.eq) goto loc_836B3A24;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// lwz r10,616(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 616);
loc_836B3A24:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stw r11,616(r1)
	PPC_STORE_U32(ctx.r1.u32 + 616, ctx.r11.u32);
loc_836B3A2C:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82535128
	ctx.lr = 0x836B3A34;
	sub_82535128(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,488
	ctx.r3.s64 = ctx.r1.s64 + 488;
	// bl 0x825356f0
	ctx.lr = 0x836B3A40;
	sub_825356F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82534ae0
	ctx.lr = 0x836B3A4C;
	sub_82534AE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b3990
	if (cr6.eq) goto loc_836B3990;
loc_836B3A58:
	// addi r4,r26,-312
	ctx.r4.s64 = ctx.r26.s64 + -312;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82535898
	ctx.lr = 0x836B3A64;
	sub_82535898(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82536838
	ctx.lr = 0x836B3A70;
	sub_82536838(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82534a38
	ctx.lr = 0x836B3A78;
	sub_82534A38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b3bd0
	if (cr6.eq) goto loc_836B3BD0;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x825356a0
	ctx.lr = 0x836B3A90;
	sub_825356A0(ctx, base);
	// addi r11,r1,640
	ctx.r11.s64 = ctx.r1.s64 + 640;
	// addi r10,r1,632
	ctx.r10.s64 = ctx.r1.s64 + 632;
	// stw r27,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r27.u32);
	// addi r9,r1,636
	ctx.r9.s64 = ctx.r1.s64 + 636;
	// stw r11,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r11.u32);
	// stw r10,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r10.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r9,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r9.u32);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// stw r30,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r30.u32);
	// stw r30,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r30.u32);
	// bl 0x8247b7d8
	ctx.lr = 0x836B3AC0;
	sub_8247B7D8(ctx, base);
	// lwz r3,640(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 640);
	// stw r23,632(r1)
	PPC_STORE_U32(ctx.r1.u32 + 632, ctx.r23.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x836b3ae0
	if (cr6.eq) goto loc_836B3AE0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8247b268
	ctx.lr = 0x836B3AD8;
	sub_8247B268(ctx, base);
	// stw r23,636(r1)
	PPC_STORE_U32(ctx.r1.u32 + 636, ctx.r23.u32);
	// stw r23,640(r1)
	PPC_STORE_U32(ctx.r1.u32 + 640, ctx.r23.u32);
loc_836B3AE0:
	// stw r28,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r28.u32);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x825356f0
	ctx.lr = 0x836B3AF0;
	sub_825356F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82534ae0
	ctx.lr = 0x836B3AFC;
	sub_82534AE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x836b3bd0
	if (!cr6.eq) goto loc_836B3BD0;
loc_836B3B08:
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82535118
	ctx.lr = 0x836B3B10;
	sub_82535118(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x836B3B14;
	sub_82534770(ctx, base);
	// lwz r10,632(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 632);
	// lwz r11,636(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 636);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// blt cr6,0x836b3b84
	if (cr6.lt) goto loc_836B3B84;
	// addi r4,r10,2
	ctx.r4.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// ble cr6,0x836b3b74
	if (!cr6.gt) goto loc_836B3B74;
	// addi r11,r1,640
	ctx.r11.s64 = ctx.r1.s64 + 640;
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// addi r10,r1,632
	ctx.r10.s64 = ctx.r1.s64 + 632;
	// stw r30,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r30.u32);
	// addi r9,r1,636
	ctx.r9.s64 = ctx.r1.s64 + 636;
	// stw r11,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r11.u32);
	// stw r10,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r10.u32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r9,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r9.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r30,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r30.u32);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x8247b270
	ctx.lr = 0x836B3B68;
	sub_8247B270(ctx, base);
	// lwz r10,632(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 632);
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// b 0x836b3b78
	goto loc_836B3B78;
loc_836B3B74:
	// li r3,1
	ctx.r3.s64 = 1;
loc_836B3B78:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b3ba4
	if (cr6.eq) goto loc_836B3BA4;
loc_836B3B84:
	// lwz r11,640(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 640);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x836b3b9c
	if (cr0.eq) goto loc_836B3B9C;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// lwz r10,632(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 632);
loc_836B3B9C:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stw r11,632(r1)
	PPC_STORE_U32(ctx.r1.u32 + 632, ctx.r11.u32);
loc_836B3BA4:
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82535128
	ctx.lr = 0x836B3BAC;
	sub_82535128(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x825356f0
	ctx.lr = 0x836B3BB8;
	sub_825356F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82534ae0
	ctx.lr = 0x836B3BC4;
	sub_82534AE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b3b08
	if (cr6.eq) goto loc_836B3B08;
loc_836B3BD0:
	// addi r4,r26,-308
	ctx.r4.s64 = ctx.r26.s64 + -308;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82535898
	ctx.lr = 0x836B3BDC;
	sub_82535898(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82536838
	ctx.lr = 0x836B3BE8;
	sub_82536838(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82534a38
	ctx.lr = 0x836B3BF0;
	sub_82534A38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b3d48
	if (cr6.eq) goto loc_836B3D48;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x825356a0
	ctx.lr = 0x836B3C08;
	sub_825356A0(ctx, base);
	// addi r11,r1,656
	ctx.r11.s64 = ctx.r1.s64 + 656;
	// addi r10,r1,648
	ctx.r10.s64 = ctx.r1.s64 + 648;
	// stw r27,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r27.u32);
	// addi r9,r1,652
	ctx.r9.s64 = ctx.r1.s64 + 652;
	// stw r11,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r11.u32);
	// stw r10,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r10.u32);
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// stw r9,392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 392, ctx.r9.u32);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// stw r30,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, ctx.r30.u32);
	// stw r30,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r30.u32);
	// bl 0x8247b7d8
	ctx.lr = 0x836B3C38;
	sub_8247B7D8(ctx, base);
	// lwz r3,656(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 656);
	// stw r23,648(r1)
	PPC_STORE_U32(ctx.r1.u32 + 648, ctx.r23.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x836b3c58
	if (cr6.eq) goto loc_836B3C58;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8247b268
	ctx.lr = 0x836B3C50;
	sub_8247B268(ctx, base);
	// stw r23,652(r1)
	PPC_STORE_U32(ctx.r1.u32 + 652, ctx.r23.u32);
	// stw r23,656(r1)
	PPC_STORE_U32(ctx.r1.u32 + 656, ctx.r23.u32);
loc_836B3C58:
	// stw r28,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r28.u32);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,472
	ctx.r3.s64 = ctx.r1.s64 + 472;
	// bl 0x825356f0
	ctx.lr = 0x836B3C68;
	sub_825356F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82534ae0
	ctx.lr = 0x836B3C74;
	sub_82534AE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x836b3d48
	if (!cr6.eq) goto loc_836B3D48;
loc_836B3C80:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82535118
	ctx.lr = 0x836B3C88;
	sub_82535118(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x836B3C8C;
	sub_82534770(ctx, base);
	// lwz r10,648(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 648);
	// lwz r11,652(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 652);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// blt cr6,0x836b3cfc
	if (cr6.lt) goto loc_836B3CFC;
	// addi r4,r10,2
	ctx.r4.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// ble cr6,0x836b3cec
	if (!cr6.gt) goto loc_836B3CEC;
	// addi r11,r1,656
	ctx.r11.s64 = ctx.r1.s64 + 656;
	// stw r27,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r27.u32);
	// addi r10,r1,648
	ctx.r10.s64 = ctx.r1.s64 + 648;
	// stw r30,460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 460, ctx.r30.u32);
	// addi r9,r1,652
	ctx.r9.s64 = ctx.r1.s64 + 652;
	// stw r11,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r11.u32);
	// stw r10,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r10.u32);
	// addi r6,r1,136
	ctx.r6.s64 = ctx.r1.s64 + 136;
	// stw r9,456(r1)
	PPC_STORE_U32(ctx.r1.u32 + 456, ctx.r9.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r30,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r30.u32);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x8247b270
	ctx.lr = 0x836B3CE0;
	sub_8247B270(ctx, base);
	// lwz r10,648(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 648);
	// stw r28,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r28.u32);
	// b 0x836b3cf0
	goto loc_836B3CF0;
loc_836B3CEC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_836B3CF0:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b3d1c
	if (cr6.eq) goto loc_836B3D1C;
loc_836B3CFC:
	// lwz r11,656(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 656);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x836b3d14
	if (cr0.eq) goto loc_836B3D14;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// lwz r10,648(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 648);
loc_836B3D14:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stw r11,648(r1)
	PPC_STORE_U32(ctx.r1.u32 + 648, ctx.r11.u32);
loc_836B3D1C:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82535128
	ctx.lr = 0x836B3D24;
	sub_82535128(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,472
	ctx.r3.s64 = ctx.r1.s64 + 472;
	// bl 0x825356f0
	ctx.lr = 0x836B3D30;
	sub_825356F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82534ae0
	ctx.lr = 0x836B3D3C;
	sub_82534AE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b3c80
	if (cr6.eq) goto loc_836B3C80;
loc_836B3D48:
	// addi r4,r26,-296
	ctx.r4.s64 = ctx.r26.s64 + -296;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535898
	ctx.lr = 0x836B3D54;
	sub_82535898(ctx, base);
	// bl 0x82534a18
	ctx.lr = 0x836B3D58;
	sub_82534A18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b3d80
	if (cr6.eq) goto loc_836B3D80;
	// addi r4,r26,-284
	ctx.r4.s64 = ctx.r26.s64 + -284;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535898
	ctx.lr = 0x836B3D70;
	sub_82535898(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x836B3D74;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,664
	ctx.r3.s64 = ctx.r1.s64 + 664;
	// bl 0x83601998
	ctx.lr = 0x836B3D80;
	sub_83601998(ctx, base);
loc_836B3D80:
	// addi r4,r26,-272
	ctx.r4.s64 = ctx.r26.s64 + -272;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535898
	ctx.lr = 0x836B3D8C;
	sub_82535898(ctx, base);
	// bl 0x82534a18
	ctx.lr = 0x836B3D90;
	sub_82534A18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b3db8
	if (cr6.eq) goto loc_836B3DB8;
	// addi r4,r26,-256
	ctx.r4.s64 = ctx.r26.s64 + -256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535898
	ctx.lr = 0x836B3DA8;
	sub_82535898(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x836B3DAC;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,692
	ctx.r3.s64 = ctx.r1.s64 + 692;
	// bl 0x83601998
	ctx.lr = 0x836B3DB8;
	sub_83601998(ctx, base);
loc_836B3DB8:
	// addi r4,r26,-240
	ctx.r4.s64 = ctx.r26.s64 + -240;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535898
	ctx.lr = 0x836B3DC4;
	sub_82535898(ctx, base);
	// bl 0x82534a18
	ctx.lr = 0x836B3DC8;
	sub_82534A18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b3df0
	if (cr6.eq) goto loc_836B3DF0;
	// addi r4,r26,-224
	ctx.r4.s64 = ctx.r26.s64 + -224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535898
	ctx.lr = 0x836B3DE0;
	sub_82535898(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x836B3DE4;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// bl 0x83601998
	ctx.lr = 0x836B3DF0;
	sub_83601998(ctx, base);
loc_836B3DF0:
	// addi r4,r26,-208
	ctx.r4.s64 = ctx.r26.s64 + -208;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535898
	ctx.lr = 0x836B3DFC;
	sub_82535898(ctx, base);
	// bl 0x82534a18
	ctx.lr = 0x836B3E00;
	sub_82534A18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b3e28
	if (cr6.eq) goto loc_836B3E28;
	// addi r4,r26,-200
	ctx.r4.s64 = ctx.r26.s64 + -200;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535898
	ctx.lr = 0x836B3E18;
	sub_82535898(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x836B3E1C;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,748
	ctx.r3.s64 = ctx.r1.s64 + 748;
	// bl 0x83601998
	ctx.lr = 0x836B3E28;
	sub_83601998(ctx, base);
loc_836B3E28:
	// addi r4,r26,-192
	ctx.r4.s64 = ctx.r26.s64 + -192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535898
	ctx.lr = 0x836B3E34;
	sub_82535898(ctx, base);
	// bl 0x82534a18
	ctx.lr = 0x836B3E38;
	sub_82534A18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b3e60
	if (cr6.eq) goto loc_836B3E60;
	// addi r4,r26,-184
	ctx.r4.s64 = ctx.r26.s64 + -184;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535898
	ctx.lr = 0x836B3E50;
	sub_82535898(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x836B3E54;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,776
	ctx.r3.s64 = ctx.r1.s64 + 776;
	// bl 0x83601998
	ctx.lr = 0x836B3E60;
	sub_83601998(ctx, base);
loc_836B3E60:
	// addi r4,r26,-176
	ctx.r4.s64 = ctx.r26.s64 + -176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535898
	ctx.lr = 0x836B3E6C;
	sub_82535898(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82536838
	ctx.lr = 0x836B3E78;
	sub_82536838(ctx, base);
	// addi r4,r26,-160
	ctx.r4.s64 = ctx.r26.s64 + -160;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82535898
	ctx.lr = 0x836B3E84;
	sub_82535898(ctx, base);
	// bl 0x825349d0
	ctx.lr = 0x836B3E88;
	sub_825349D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b3ea8
	if (cr6.eq) goto loc_836B3EA8;
	// addi r4,r26,-148
	ctx.r4.s64 = ctx.r26.s64 + -148;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82535898
	ctx.lr = 0x836B3EA0;
	sub_82535898(ctx, base);
	// bl 0x825347e8
	ctx.lr = 0x836B3EA4;
	sub_825347E8(ctx, base);
	// stw r3,804(r1)
	PPC_STORE_U32(ctx.r1.u32 + 804, ctx.r3.u32);
loc_836B3EA8:
	// addi r4,r26,-136
	ctx.r4.s64 = ctx.r26.s64 + -136;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82535898
	ctx.lr = 0x836B3EB4;
	sub_82535898(ctx, base);
	// bl 0x825349d0
	ctx.lr = 0x836B3EB8;
	sub_825349D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b3ed8
	if (cr6.eq) goto loc_836B3ED8;
	// addi r4,r26,-124
	ctx.r4.s64 = ctx.r26.s64 + -124;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82535898
	ctx.lr = 0x836B3ED0;
	sub_82535898(ctx, base);
	// bl 0x825347e8
	ctx.lr = 0x836B3ED4;
	sub_825347E8(ctx, base);
	// stw r3,808(r1)
	PPC_STORE_U32(ctx.r1.u32 + 808, ctx.r3.u32);
loc_836B3ED8:
	// addi r4,r26,-112
	ctx.r4.s64 = ctx.r26.s64 + -112;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82535898
	ctx.lr = 0x836B3EE4;
	sub_82535898(ctx, base);
	// bl 0x825349d0
	ctx.lr = 0x836B3EE8;
	sub_825349D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b3f08
	if (cr6.eq) goto loc_836B3F08;
	// addi r4,r26,-100
	ctx.r4.s64 = ctx.r26.s64 + -100;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82535898
	ctx.lr = 0x836B3F00;
	sub_82535898(ctx, base);
	// bl 0x825347e8
	ctx.lr = 0x836B3F04;
	sub_825347E8(ctx, base);
	// stw r3,812(r1)
	PPC_STORE_U32(ctx.r1.u32 + 812, ctx.r3.u32);
loc_836B3F08:
	// addi r4,r26,-88
	ctx.r4.s64 = ctx.r26.s64 + -88;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82535898
	ctx.lr = 0x836B3F14;
	sub_82535898(ctx, base);
	// bl 0x825349d0
	ctx.lr = 0x836B3F18;
	sub_825349D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b3f38
	if (cr6.eq) goto loc_836B3F38;
	// addi r4,r26,-76
	ctx.r4.s64 = ctx.r26.s64 + -76;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82535898
	ctx.lr = 0x836B3F30;
	sub_82535898(ctx, base);
	// bl 0x825347e8
	ctx.lr = 0x836B3F34;
	sub_825347E8(ctx, base);
	// stw r3,816(r1)
	PPC_STORE_U32(ctx.r1.u32 + 816, ctx.r3.u32);
loc_836B3F38:
	// addi r4,r26,-64
	ctx.r4.s64 = ctx.r26.s64 + -64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82535898
	ctx.lr = 0x836B3F44;
	sub_82535898(ctx, base);
	// bl 0x825349d0
	ctx.lr = 0x836B3F48;
	sub_825349D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b3f68
	if (cr6.eq) goto loc_836B3F68;
	// addi r4,r26,-56
	ctx.r4.s64 = ctx.r26.s64 + -56;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82535898
	ctx.lr = 0x836B3F60;
	sub_82535898(ctx, base);
	// bl 0x825347e8
	ctx.lr = 0x836B3F64;
	sub_825347E8(ctx, base);
	// stw r3,820(r1)
	PPC_STORE_U32(ctx.r1.u32 + 820, ctx.r3.u32);
loc_836B3F68:
	// addi r4,r26,-48
	ctx.r4.s64 = ctx.r26.s64 + -48;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82535898
	ctx.lr = 0x836B3F74;
	sub_82535898(ctx, base);
	// bl 0x825349d0
	ctx.lr = 0x836B3F78;
	sub_825349D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b3f98
	if (cr6.eq) goto loc_836B3F98;
	// addi r4,r26,-40
	ctx.r4.s64 = ctx.r26.s64 + -40;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82535898
	ctx.lr = 0x836B3F90;
	sub_82535898(ctx, base);
	// bl 0x825347e8
	ctx.lr = 0x836B3F94;
	sub_825347E8(ctx, base);
	// stw r3,824(r1)
	PPC_STORE_U32(ctx.r1.u32 + 824, ctx.r3.u32);
loc_836B3F98:
	// addi r4,r26,-32
	ctx.r4.s64 = ctx.r26.s64 + -32;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82535898
	ctx.lr = 0x836B3FA4;
	sub_82535898(ctx, base);
	// bl 0x825349d0
	ctx.lr = 0x836B3FA8;
	sub_825349D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b3fc8
	if (cr6.eq) goto loc_836B3FC8;
	// addi r4,r26,-24
	ctx.r4.s64 = ctx.r26.s64 + -24;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82535898
	ctx.lr = 0x836B3FC0;
	sub_82535898(ctx, base);
	// bl 0x825347e8
	ctx.lr = 0x836B3FC4;
	sub_825347E8(ctx, base);
	// stw r3,828(r1)
	PPC_STORE_U32(ctx.r1.u32 + 828, ctx.r3.u32);
loc_836B3FC8:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x836b4028
	if (cr6.lt) goto loc_836B4028;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x836b4018
	if (!cr6.gt) goto loc_836B4018;
	// addi r11,r25,8
	ctx.r11.s64 = ctx.r25.s64 + 8;
	// stw r25,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r25.u32);
	// stw r21,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r21.u32);
	// addi r6,r1,132
	ctx.r6.s64 = ctx.r1.s64 + 132;
	// stw r11,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r11.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r19,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r19.u32);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// stw r20,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r20.u32);
	// stw r22,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r22.u32);
	// bl 0x8247b270
	ctx.lr = 0x836B4010;
	sub_8247B270(ctx, base);
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// b 0x836b401c
	goto loc_836B401C;
loc_836B4018:
	// li r3,1
	ctx.r3.s64 = 1;
loc_836B401C:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b406c
	if (cr6.eq) goto loc_836B406C;
loc_836B4028:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add. r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq 0x836b4060
	if (cr0.eq) goto loc_836B4060;
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x836aee78
	ctx.lr = 0x836B4050;
	sub_836AEE78(ctx, base);
	// lwz r11,824(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 824);
	// stw r11,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r11.u32);
	// lwz r10,828(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 828);
	// stw r10,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r10.u32);
loc_836B4060:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
loc_836B406C:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82535aa0
	ctx.lr = 0x836B4074;
	sub_82535AA0(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82535aa0
	ctx.lr = 0x836B407C;
	sub_82535AA0(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82535aa0
	ctx.lr = 0x836B4084;
	sub_82535AA0(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82535aa0
	ctx.lr = 0x836B408C;
	sub_82535AA0(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82535aa0
	ctx.lr = 0x836B4094;
	sub_82535AA0(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82535aa0
	ctx.lr = 0x836B409C;
	sub_82535AA0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535aa0
	ctx.lr = 0x836B40A4;
	sub_82535AA0(ctx, base);
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x836aec00
	ctx.lr = 0x836B40AC;
	sub_836AEC00(ctx, base);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82535128
	ctx.lr = 0x836B40B4;
	sub_82535128(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x825356f0
	ctx.lr = 0x836B40C0;
	sub_825356F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82534ae0
	ctx.lr = 0x836B40CC;
	sub_82534AE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b3790
	if (cr6.eq) goto loc_836B3790;
loc_836B40D8:
	// addi r4,r26,-16
	ctx.r4.s64 = ctx.r26.s64 + -16;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82536d88
	ctx.lr = 0x836B40E4;
	sub_82536D88(ctx, base);
	// bl 0x825349d0
	ctx.lr = 0x836B40E8;
	sub_825349D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b4108
	if (cr6.eq) goto loc_836B4108;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82536d88
	ctx.lr = 0x836B4100;
	sub_82536D88(ctx, base);
	// bl 0x825347e8
	ctx.lr = 0x836B4104;
	sub_825347E8(ctx, base);
	// stw r3,368(r17)
	PPC_STORE_U32(ctx.r17.u32 + 368, ctx.r3.u32);
loc_836B4108:
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82535aa0
	ctx.lr = 0x836B4110;
	sub_82535AA0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,960
	ctx.r1.s64 = ctx.r1.s64 + 960;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836B411C"))) PPC_WEAK_FUNC(sub_836B411C);
PPC_FUNC_IMPL(__imp__sub_836B411C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836B4120"))) PPC_WEAK_FUNC(sub_836B4120);
PPC_FUNC_IMPL(__imp__sub_836B4120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x836B4128;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d95768
	ctx.lr = 0x836B4134;
	sub_82D95768(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r29,r11,-2744
	ctx.r29.s64 = ctx.r11.s64 + -2744;
	// li r5,15
	ctx.r5.s64 = 15;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824208c8
	ctx.lr = 0x836B414C;
	sub_824208C8(ctx, base);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// addi r7,r10,-1940
	ctx.r7.s64 = ctx.r10.s64 + -1940;
	// addi r5,r8,-1956
	ctx.r5.s64 = ctx.r8.s64 + -1956;
	// addi r6,r9,-1952
	ctx.r6.s64 = ctx.r9.s64 + -1952;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r5,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r5.u32);
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r6,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r6.u32);
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// stw r28,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r28.u32);
	// addi r4,r29,16
	ctx.r4.s64 = ctx.r29.s64 + 16;
	// stb r30,316(r31)
	PPC_STORE_U8(ctx.r31.u32 + 316, ctx.r30.u8);
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x824208c8
	ctx.lr = 0x836B4194;
	sub_824208C8(ctx, base);
	// stw r30,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r30.u32);
	// stw r28,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r28.u32);
	// addi r3,r31,348
	ctx.r3.s64 = ctx.r31.s64 + 348;
	// stw r30,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r30.u32);
	// addi r4,r29,24
	ctx.r4.s64 = ctx.r29.s64 + 24;
	// stb r30,348(r31)
	PPC_STORE_U8(ctx.r31.u32 + 348, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836B41B4;
	sub_824208C8(ctx, base);
	// stw r28,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r28.u32);
	// stw r30,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r30.u32);
	// addi r3,r31,376
	ctx.r3.s64 = ctx.r31.s64 + 376;
	// stb r30,376(r31)
	PPC_STORE_U8(ctx.r31.u32 + 376, ctx.r30.u8);
	// addi r4,r29,40
	ctx.r4.s64 = ctx.r29.s64 + 40;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836B41D0;
	sub_824208C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836B41DC"))) PPC_WEAK_FUNC(sub_836B41DC);
PPC_FUNC_IMPL(__imp__sub_836B41DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836B41E0"))) PPC_WEAK_FUNC(sub_836B41E0);
PPC_FUNC_IMPL(__imp__sub_836B41E0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x836b42a8
	sub_836B42A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836B41E8"))) PPC_WEAK_FUNC(sub_836B41E8);
PPC_FUNC_IMPL(__imp__sub_836B41E8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x836b42a8
	sub_836B42A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836B41F0"))) PPC_WEAK_FUNC(sub_836B41F0);
PPC_FUNC_IMPL(__imp__sub_836B41F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x836B41F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// addi r8,r11,-1940
	ctx.r8.s64 = ctx.r11.s64 + -1940;
	// addi r7,r10,-1952
	ctx.r7.s64 = ctx.r10.s64 + -1952;
	// addi r6,r9,-1956
	ctx.r6.s64 = ctx.r9.s64 + -1956;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r6,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r6.u32);
	// addi r29,r3,376
	ctx.r29.s64 = ctx.r3.s64 + 376;
	// lwz r5,396(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 396);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x836b423c
	if (cr6.lt) goto loc_836B423C;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836B423C;
	sub_8386D088(ctx, base);
loc_836B423C:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// addi r31,r28,348
	ctx.r31.s64 = ctx.r28.s64 + 348;
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// stb r30,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r30.u8);
	// lwz r11,368(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 368);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836b4268
	if (cr6.lt) goto loc_836B4268;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836B4268;
	sub_8386D088(ctx, base);
loc_836B4268:
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// addi r29,r28,316
	ctx.r29.s64 = ctx.r28.s64 + 316;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// lwz r11,336(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 336);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836b428c
	if (cr6.lt) goto loc_836B428C;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836B428C;
	sub_8386D088(ctx, base);
loc_836B428C:
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// stb r30,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r30.u8);
	// bl 0x82b6a590
	ctx.lr = 0x836B42A0;
	sub_82B6A590(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836B42A8"))) PPC_WEAK_FUNC(sub_836B42A8);
PPC_FUNC_IMPL(__imp__sub_836B42A8) {
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
	// bl 0x836b41f0
	ctx.lr = 0x836B42C8;
	sub_836B41F0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b42e8
	if (cr6.eq) goto loc_836B42E8;
	// bl 0x82595188
	ctx.lr = 0x836B42D8;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x836B42E8;
	sub_825952B8(ctx, base);
loc_836B42E8:
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

__attribute__((alias("__imp__sub_836B4304"))) PPC_WEAK_FUNC(sub_836B4304);
PPC_FUNC_IMPL(__imp__sub_836B4304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836B4308"))) PPC_WEAK_FUNC(sub_836B4308);
PPC_FUNC_IMPL(__imp__sub_836B4308) {
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
	ctx.lr = 0x836B4324;
	sub_82EAF8D8(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r4,r11,-2744
	ctx.r4.s64 = ctx.r11.s64 + -2744;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x824208c8
	ctx.lr = 0x836B4338;
	sub_824208C8(ctx, base);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// lis r7,-32216
	ctx.r7.s64 = -2111307776;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r4,r8,-1920
	ctx.r4.s64 = ctx.r8.s64 + -1920;
	// addi r6,r10,-1904
	ctx.r6.s64 = ctx.r10.s64 + -1904;
	// stw r30,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r30.u32);
	// addi r5,r9,-1916
	ctx.r5.s64 = ctx.r9.s64 + -1916;
	// stw r4,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r4.u32);
	// addi r11,r7,-1924
	ctx.r11.s64 = ctx.r7.s64 + -1924;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// stw r5,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r5.u32);
	// addi r3,r31,352
	ctx.r3.s64 = ctx.r31.s64 + 352;
	// stw r11,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r11.u32);
	// li r4,100
	ctx.r4.s64 = 100;
	// stw r30,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r30.u32);
	// stw r30,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r30.u32);
	// std r30,360(r31)
	PPC_STORE_U64(ctx.r31.u32 + 360, ctx.r30.u64);
	// bl 0x836ae9d0
	ctx.lr = 0x836B4388;
	sub_836AE9D0(ctx, base);
	// stw r30,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_836B43A8"))) PPC_WEAK_FUNC(sub_836B43A8);
PPC_FUNC_IMPL(__imp__sub_836B43A8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-312
	ctx.r3.s64 = ctx.r3.s64 + -312;
	// b 0x836b43c0
	sub_836B43C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836B43B0"))) PPC_WEAK_FUNC(sub_836B43B0);
PPC_FUNC_IMPL(__imp__sub_836B43B0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x836b43c0
	sub_836B43C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836B43B8"))) PPC_WEAK_FUNC(sub_836B43B8);
PPC_FUNC_IMPL(__imp__sub_836B43B8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x836b43c0
	sub_836B43C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836B43C0"))) PPC_WEAK_FUNC(sub_836B43C0);
PPC_FUNC_IMPL(__imp__sub_836B43C0) {
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
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r7,r11,-1904
	ctx.r7.s64 = ctx.r11.s64 + -1904;
	// addi r6,r10,-1916
	ctx.r6.s64 = ctx.r10.s64 + -1916;
	// addi r5,r9,-1920
	ctx.r5.s64 = ctx.r9.s64 + -1920;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r8,-1924
	ctx.r4.s64 = ctx.r8.s64 + -1924;
	// stw r6,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r6.u32);
	// stw r5,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r5.u32);
	// addi r3,r3,352
	ctx.r3.s64 = ctx.r3.s64 + 352;
	// stw r4,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r4.u32);
	// bl 0x836aeb80
	ctx.lr = 0x836B4414;
	sub_836AEB80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eaf978
	ctx.lr = 0x836B441C;
	sub_82EAF978(ctx, base);
	// clrlwi r3,r30,31
	ctx.r3.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x836b443c
	if (cr6.eq) goto loc_836B443C;
	// bl 0x82595188
	ctx.lr = 0x836B442C;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x836B443C;
	sub_825952B8(ctx, base);
loc_836B443C:
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

__attribute__((alias("__imp__sub_836B4458"))) PPC_WEAK_FUNC(sub_836B4458);
PPC_FUNC_IMPL(__imp__sub_836B4458) {
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
	// bl 0x83356798
	ctx.lr = 0x836B4474;
	sub_83356798(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// li r30,29
	ctx.r30.s64 = 29;
	// addi r10,r11,-2884
	ctx.r10.s64 = ctx.r11.s64 + -2884;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r4,408
	ctx.r4.s64 = 408;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x836B4498;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x836b44a8
	if (cr6.eq) goto loc_836B44A8;
	// bl 0x836b4120
	ctx.lr = 0x836B44A4;
	sub_836B4120(ctx, base);
	// b 0x836b44ac
	goto loc_836B44AC;
loc_836B44A8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_836B44AC:
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r4,376
	ctx.r4.s64 = 376;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x836B44C4;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x836b44d8
	if (cr6.eq) goto loc_836B44D8;
	// bl 0x836b4308
	ctx.lr = 0x836B44D0;
	sub_836B4308(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x836b44dc
	goto loc_836B44DC;
loc_836B44D8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_836B44DC:
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_836B44FC"))) PPC_WEAK_FUNC(sub_836B44FC);
PPC_FUNC_IMPL(__imp__sub_836B44FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836B4500"))) PPC_WEAK_FUNC(sub_836B4500);
PPC_FUNC_IMPL(__imp__sub_836B4500) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x836B4508;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r27,r3,176
	ctx.r27.s64 = ctx.r3.s64 + 176;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82535130
	ctx.lr = 0x836B451C;
	sub_82535130(ctx, base);
	// lwz r11,240(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 240);
	// addi r4,r28,220
	ctx.r4.s64 = ctx.r28.s64 + 220;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836b4530
	if (cr6.lt) goto loc_836B4530;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836B4530:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825346c8
	ctx.lr = 0x836B4538;
	sub_825346C8(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r31,r11,-1636
	ctx.r31.s64 = ctx.r11.s64 + -1636;
	// addi r4,r31,-112
	ctx.r4.s64 = ctx.r31.s64 + -112;
	// bl 0x82536d88
	ctx.lr = 0x836B454C;
	sub_82536D88(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x825369e8
	ctx.lr = 0x836B4554;
	sub_825369E8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82535aa0
	ctx.lr = 0x836B455C;
	sub_82535AA0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,248(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 248);
	// bl 0x82534640
	ctx.lr = 0x836B4568;
	sub_82534640(ctx, base);
	// addi r4,r31,-104
	ctx.r4.s64 = ctx.r31.s64 + -104;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82536d88
	ctx.lr = 0x836B4574;
	sub_82536D88(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x825369e8
	ctx.lr = 0x836B457C;
	sub_825369E8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82535aa0
	ctx.lr = 0x836B4584;
	sub_82535AA0(ctx, base);
	// lwz r10,336(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 336);
	// addi r11,r28,316
	ctx.r11.s64 = ctx.r28.s64 + 316;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836b4598
	if (cr6.lt) goto loc_836B4598;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_836B4598:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825346c8
	ctx.lr = 0x836B45A4;
	sub_825346C8(ctx, base);
	// addi r4,r31,-96
	ctx.r4.s64 = ctx.r31.s64 + -96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82536d88
	ctx.lr = 0x836B45B0;
	sub_82536D88(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x825369e8
	ctx.lr = 0x836B45B8;
	sub_825369E8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82535aa0
	ctx.lr = 0x836B45C0;
	sub_82535AA0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,344(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 344);
	// bl 0x82534640
	ctx.lr = 0x836B45CC;
	sub_82534640(ctx, base);
	// addi r4,r31,-88
	ctx.r4.s64 = ctx.r31.s64 + -88;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82536d88
	ctx.lr = 0x836B45D8;
	sub_82536D88(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x825369e8
	ctx.lr = 0x836B45E0;
	sub_825369E8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82535aa0
	ctx.lr = 0x836B45E8;
	sub_82535AA0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// ld r4,352(r28)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r28.u32 + 352);
	// bl 0x82534698
	ctx.lr = 0x836B45F4;
	sub_82534698(ctx, base);
	// addi r4,r31,-84
	ctx.r4.s64 = ctx.r31.s64 + -84;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82536d88
	ctx.lr = 0x836B4600;
	sub_82536D88(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x825369e8
	ctx.lr = 0x836B4608;
	sub_825369E8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82535aa0
	ctx.lr = 0x836B4610;
	sub_82535AA0(ctx, base);
	// lwz r10,380(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 380);
	// addi r11,r28,360
	ctx.r11.s64 = ctx.r28.s64 + 360;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836b4624
	if (cr6.lt) goto loc_836B4624;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_836B4624:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825346c8
	ctx.lr = 0x836B4630;
	sub_825346C8(ctx, base);
	// addi r4,r31,-76
	ctx.r4.s64 = ctx.r31.s64 + -76;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82536d88
	ctx.lr = 0x836B463C;
	sub_82536D88(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x825369e8
	ctx.lr = 0x836B4644;
	sub_825369E8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82535aa0
	ctx.lr = 0x836B464C;
	sub_82535AA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825359d8
	ctx.lr = 0x836B4658;
	sub_825359D8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825359d8
	ctx.lr = 0x836B4664;
	sub_825359D8(ctx, base);
	// lwz r10,412(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 412);
	// addi r11,r28,392
	ctx.r11.s64 = ctx.r28.s64 + 392;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836b4678
	if (cr6.lt) goto loc_836B4678;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_836B4678:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825346c8
	ctx.lr = 0x836B4684;
	sub_825346C8(ctx, base);
	// addi r4,r31,-64
	ctx.r4.s64 = ctx.r31.s64 + -64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82536d88
	ctx.lr = 0x836B4690;
	sub_82536D88(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x825369e8
	ctx.lr = 0x836B4698;
	sub_825369E8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82535aa0
	ctx.lr = 0x836B46A0;
	sub_82535AA0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,420(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 420);
	// bl 0x82534660
	ctx.lr = 0x836B46AC;
	sub_82534660(ctx, base);
	// addi r4,r31,-56
	ctx.r4.s64 = ctx.r31.s64 + -56;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82536d88
	ctx.lr = 0x836B46B8;
	sub_82536D88(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x825369e8
	ctx.lr = 0x836B46C0;
	sub_825369E8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82535aa0
	ctx.lr = 0x836B46C8;
	sub_82535AA0(ctx, base);
	// lwz r11,424(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 424);
	// lwz r10,432(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 432);
	// addi r29,r28,424
	ctx.r29.s64 = ctx.r28.s64 + 424;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r30,r10
	ctx.r30.s64 = ctx.r10.s32;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// beq cr6,0x836b472c
	if (cr6.eq) goto loc_836B472C;
loc_836B46E8:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82534660
	ctx.lr = 0x836B46F4;
	sub_82534660(ctx, base);
	// addi r4,r31,-48
	ctx.r4.s64 = ctx.r31.s64 + -48;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82536d88
	ctx.lr = 0x836B4700;
	sub_82536D88(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82536d38
	ctx.lr = 0x836B4708;
	sub_82536D38(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82535aa0
	ctx.lr = 0x836B4710;
	sub_82535AA0(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// bne cr6,0x836b46e8
	if (!cr6.eq) goto loc_836B46E8;
loc_836B472C:
	// addi r4,r31,-40
	ctx.r4.s64 = ctx.r31.s64 + -40;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82536d88
	ctx.lr = 0x836B4738;
	sub_82536D88(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x825369e8
	ctx.lr = 0x836B4740;
	sub_825369E8(ctx, base);
	// lwz r11,440(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 440);
	// lwz r10,448(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 448);
	// addi r29,r28,440
	ctx.r29.s64 = ctx.r28.s64 + 440;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r30,r10
	ctx.r30.s64 = ctx.r10.s32;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// beq cr6,0x836b47a4
	if (cr6.eq) goto loc_836B47A4;
loc_836B4760:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82534660
	ctx.lr = 0x836B476C;
	sub_82534660(ctx, base);
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82536d88
	ctx.lr = 0x836B4778;
	sub_82536D88(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82536d38
	ctx.lr = 0x836B4780;
	sub_82536D38(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82535aa0
	ctx.lr = 0x836B4788;
	sub_82535AA0(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// bne cr6,0x836b4760
	if (!cr6.eq) goto loc_836B4760;
loc_836B47A4:
	// lwz r11,456(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 456);
	// addi r29,r28,456
	ctx.r29.s64 = ctx.r28.s64 + 456;
	// lwz r10,464(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 464);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r30,r10
	ctx.r30.s64 = ctx.r10.s32;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// beq cr6,0x836b4808
	if (cr6.eq) goto loc_836B4808;
loc_836B47C4:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82534660
	ctx.lr = 0x836B47D0;
	sub_82534660(ctx, base);
	// addi r4,r31,-28
	ctx.r4.s64 = ctx.r31.s64 + -28;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82536d88
	ctx.lr = 0x836B47DC;
	sub_82536D88(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82536d38
	ctx.lr = 0x836B47E4;
	sub_82536D38(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82535aa0
	ctx.lr = 0x836B47EC;
	sub_82535AA0(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// bne cr6,0x836b47c4
	if (!cr6.eq) goto loc_836B47C4;
loc_836B4808:
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82536d88
	ctx.lr = 0x836B4814;
	sub_82536D88(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x825369e8
	ctx.lr = 0x836B481C;
	sub_825369E8(ctx, base);
	// lwz r10,492(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 492);
	// addi r11,r28,472
	ctx.r11.s64 = ctx.r28.s64 + 472;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836b4830
	if (cr6.lt) goto loc_836B4830;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_836B4830:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825346c8
	ctx.lr = 0x836B483C;
	sub_825346C8(ctx, base);
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82536d88
	ctx.lr = 0x836B4848;
	sub_82536D88(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x825369e8
	ctx.lr = 0x836B4850;
	sub_825369E8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82535aa0
	ctx.lr = 0x836B4858;
	sub_82535AA0(ctx, base);
	// lwz r10,520(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 520);
	// addi r11,r28,500
	ctx.r11.s64 = ctx.r28.s64 + 500;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836b486c
	if (cr6.lt) goto loc_836B486C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_836B486C:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825346c8
	ctx.lr = 0x836B4878;
	sub_825346C8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82536d88
	ctx.lr = 0x836B4884;
	sub_82536D88(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x825369e8
	ctx.lr = 0x836B488C;
	sub_825369E8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82535aa0
	ctx.lr = 0x836B4894;
	sub_82535AA0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535aa0
	ctx.lr = 0x836B489C;
	sub_82535AA0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535aa0
	ctx.lr = 0x836B48A4;
	sub_82535AA0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836B48B0"))) PPC_WEAK_FUNC(sub_836B48B0);
PPC_FUNC_IMPL(__imp__sub_836B48B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x836B48B8;
	__savegprlr_25(ctx, base);
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82a8c428
	ctx.lr = 0x836B48D4;
	sub_82A8C428(ctx, base);
	// lwz r10,240(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 240);
	// addi r11,r28,220
	ctx.r11.s64 = ctx.r28.s64 + 220;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836b48ec
	if (cr6.lt) goto loc_836B48EC;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x836b48f0
	goto loc_836B48F0;
loc_836B48EC:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_836B48F0:
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r29,r11,-1412
	ctx.r29.s64 = ctx.r11.s64 + -1412;
	// addi r4,r29,-212
	ctx.r4.s64 = ctx.r29.s64 + -212;
	// bl 0x82473550
	ctx.lr = 0x836B4904;
	sub_82473550(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82473550
	ctx.lr = 0x836B490C;
	sub_82473550(ctx, base);
	// addi r4,r29,-216
	ctx.r4.s64 = ctx.r29.s64 + -216;
	// bl 0x82473550
	ctx.lr = 0x836B4914;
	sub_82473550(ctx, base);
	// addi r4,r29,-200
	ctx.r4.s64 = ctx.r29.s64 + -200;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// lwz r31,248(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 248);
	// bl 0x82473550
	ctx.lr = 0x836B4924;
	sub_82473550(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82474170
	ctx.lr = 0x836B492C;
	sub_82474170(ctx, base);
	// addi r4,r29,-204
	ctx.r4.s64 = ctx.r29.s64 + -204;
	// bl 0x82473550
	ctx.lr = 0x836B4934;
	sub_82473550(ctx, base);
	// addi r4,r28,316
	ctx.r4.s64 = ctx.r28.s64 + 316;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x83734458
	ctx.lr = 0x836B4940;
	sub_83734458(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836b4954
	if (cr6.lt) goto loc_836B4954;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x836b4958
	goto loc_836B4958;
loc_836B4954:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_836B4958:
	// addi r4,r29,-188
	ctx.r4.s64 = ctx.r29.s64 + -188;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82473550
	ctx.lr = 0x836B4964;
	sub_82473550(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82473550
	ctx.lr = 0x836B496C;
	sub_82473550(ctx, base);
	// addi r4,r29,-192
	ctx.r4.s64 = ctx.r29.s64 + -192;
	// bl 0x82473550
	ctx.lr = 0x836B4974;
	sub_82473550(ctx, base);
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836b4988
	if (cr6.lt) goto loc_836B4988;
	// lwz r3,240(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x8386d088
	ctx.lr = 0x836B4988;
	sub_8386D088(ctx, base);
loc_836B4988:
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r31,344(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 344);
	// li r26,15
	ctx.r26.s64 = 15;
	// stw r27,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r27.u32);
	// addi r4,r29,-172
	ctx.r4.s64 = ctx.r29.s64 + -172;
	// stw r26,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r26.u32);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// stb r27,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r27.u8);
	// bl 0x82473550
	ctx.lr = 0x836B49AC;
	sub_82473550(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82474170
	ctx.lr = 0x836B49B4;
	sub_82474170(ctx, base);
	// addi r4,r29,-176
	ctx.r4.s64 = ctx.r29.s64 + -176;
	// bl 0x82473550
	ctx.lr = 0x836B49BC;
	sub_82473550(ctx, base);
	// addi r4,r29,-160
	ctx.r4.s64 = ctx.r29.s64 + -160;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// ld r31,352(r28)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r28.u32 + 352);
	// bl 0x82473550
	ctx.lr = 0x836B49CC;
	sub_82473550(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82e4b808
	ctx.lr = 0x836B49D4;
	sub_82E4B808(ctx, base);
	// addi r4,r29,-164
	ctx.r4.s64 = ctx.r29.s64 + -164;
	// bl 0x82473550
	ctx.lr = 0x836B49DC;
	sub_82473550(ctx, base);
	// addi r4,r28,360
	ctx.r4.s64 = ctx.r28.s64 + 360;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x83734458
	ctx.lr = 0x836B49E8;
	sub_83734458(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836b49fc
	if (cr6.lt) goto loc_836B49FC;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x836b4a00
	goto loc_836B4A00;
loc_836B49FC:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_836B4A00:
	// addi r4,r29,-148
	ctx.r4.s64 = ctx.r29.s64 + -148;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82473550
	ctx.lr = 0x836B4A0C;
	sub_82473550(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82473550
	ctx.lr = 0x836B4A14;
	sub_82473550(ctx, base);
	// addi r4,r29,-152
	ctx.r4.s64 = ctx.r29.s64 + -152;
	// bl 0x82473550
	ctx.lr = 0x836B4A1C;
	sub_82473550(ctx, base);
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836b4a30
	if (cr6.lt) goto loc_836B4A30;
	// lwz r3,176(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x8386d088
	ctx.lr = 0x836B4A30;
	sub_8386D088(ctx, base);
loc_836B4A30:
	// stw r26,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r26.u32);
	// addi r4,r28,392
	ctx.r4.s64 = ctx.r28.s64 + 392;
	// stw r27,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r27.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r27,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r27.u8);
	// bl 0x83734458
	ctx.lr = 0x836B4A48;
	sub_83734458(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836b4a5c
	if (cr6.lt) goto loc_836B4A5C;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x836b4a60
	goto loc_836B4A60;
loc_836B4A5C:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_836B4A60:
	// addi r4,r29,-132
	ctx.r4.s64 = ctx.r29.s64 + -132;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82473550
	ctx.lr = 0x836B4A6C;
	sub_82473550(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82473550
	ctx.lr = 0x836B4A74;
	sub_82473550(ctx, base);
	// addi r4,r29,-136
	ctx.r4.s64 = ctx.r29.s64 + -136;
	// bl 0x82473550
	ctx.lr = 0x836B4A7C;
	sub_82473550(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836b4a90
	if (cr6.lt) goto loc_836B4A90;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x8386d088
	ctx.lr = 0x836B4A90;
	sub_8386D088(ctx, base);
loc_836B4A90:
	// stw r26,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r26.u32);
	// addi r4,r29,-108
	ctx.r4.s64 = ctx.r29.s64 + -108;
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// stb r27,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r27.u8);
	// lwz r31,420(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 420);
	// bl 0x82473550
	ctx.lr = 0x836B4AAC;
	sub_82473550(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82474050
	ctx.lr = 0x836B4AB4;
	sub_82474050(ctx, base);
	// addi r4,r29,-112
	ctx.r4.s64 = ctx.r29.s64 + -112;
	// bl 0x82473550
	ctx.lr = 0x836B4ABC;
	sub_82473550(ctx, base);
	// addi r4,r29,-88
	ctx.r4.s64 = ctx.r29.s64 + -88;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82473550
	ctx.lr = 0x836B4AC8;
	sub_82473550(ctx, base);
	// lwz r11,424(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 424);
	// lwz r10,432(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 432);
	// addi r30,r28,424
	ctx.r30.s64 = ctx.r28.s64 + 424;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r31,r10
	ctx.r31.s64 = ctx.r10.s32;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x836b4b34
	if (cr6.eq) goto loc_836B4B34;
loc_836B4AE8:
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82474050
	ctx.lr = 0x836B4AF4;
	sub_82474050(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x836b4b1c
	if (cr6.eq) goto loc_836B4B1C;
	// addi r4,r29,-64
	ctx.r4.s64 = ctx.r29.s64 + -64;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82473550
	ctx.lr = 0x836B4B1C;
	sub_82473550(ctx, base);
loc_836B4B1C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x836b4ae8
	if (!cr6.eq) goto loc_836B4AE8;
loc_836B4B34:
	// addi r4,r29,-60
	ctx.r4.s64 = ctx.r29.s64 + -60;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82473550
	ctx.lr = 0x836B4B40;
	sub_82473550(ctx, base);
	// addi r4,r29,-56
	ctx.r4.s64 = ctx.r29.s64 + -56;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82473550
	ctx.lr = 0x836B4B4C;
	sub_82473550(ctx, base);
	// lwz r11,440(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 440);
	// lwz r10,448(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 448);
	// addi r30,r28,440
	ctx.r30.s64 = ctx.r28.s64 + 440;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r31,r10
	ctx.r31.s64 = ctx.r10.s32;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x836b4bb8
	if (cr6.eq) goto loc_836B4BB8;
loc_836B4B6C:
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82474050
	ctx.lr = 0x836B4B78;
	sub_82474050(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x836b4ba0
	if (cr6.eq) goto loc_836B4BA0;
	// addi r4,r29,-44
	ctx.r4.s64 = ctx.r29.s64 + -44;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82473550
	ctx.lr = 0x836B4BA0;
	sub_82473550(ctx, base);
loc_836B4BA0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x836b4b6c
	if (!cr6.eq) goto loc_836B4B6C;
loc_836B4BB8:
	// addi r4,r29,-40
	ctx.r4.s64 = ctx.r29.s64 + -40;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82473550
	ctx.lr = 0x836B4BC4;
	sub_82473550(ctx, base);
	// addi r4,r29,-36
	ctx.r4.s64 = ctx.r29.s64 + -36;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82473550
	ctx.lr = 0x836B4BD0;
	sub_82473550(ctx, base);
	// lwz r11,456(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 456);
	// lwz r10,464(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 464);
	// addi r30,r28,456
	ctx.r30.s64 = ctx.r28.s64 + 456;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r31,r10
	ctx.r31.s64 = ctx.r10.s32;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x836b4c3c
	if (cr6.eq) goto loc_836B4C3C;
loc_836B4BF0:
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82474050
	ctx.lr = 0x836B4BFC;
	sub_82474050(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x836b4c24
	if (cr6.eq) goto loc_836B4C24;
	// addi r4,r29,-20
	ctx.r4.s64 = ctx.r29.s64 + -20;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82473550
	ctx.lr = 0x836B4C24;
	sub_82473550(ctx, base);
loc_836B4C24:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x836b4bf0
	if (!cr6.eq) goto loc_836B4BF0;
loc_836B4C3C:
	// addi r4,r29,-16
	ctx.r4.s64 = ctx.r29.s64 + -16;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82473550
	ctx.lr = 0x836B4C48;
	sub_82473550(ctx, base);
	// addi r4,r28,472
	ctx.r4.s64 = ctx.r28.s64 + 472;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x83734458
	ctx.lr = 0x836B4C54;
	sub_83734458(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836b4c68
	if (cr6.lt) goto loc_836B4C68;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x836b4c6c
	goto loc_836B4C6C;
loc_836B4C68:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_836B4C6C:
	// addi r4,r29,-8
	ctx.r4.s64 = ctx.r29.s64 + -8;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82473550
	ctx.lr = 0x836B4C78;
	sub_82473550(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82473550
	ctx.lr = 0x836B4C80;
	sub_82473550(ctx, base);
	// addi r4,r29,-12
	ctx.r4.s64 = ctx.r29.s64 + -12;
	// bl 0x82473550
	ctx.lr = 0x836B4C88;
	sub_82473550(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836b4c9c
	if (cr6.lt) goto loc_836B4C9C;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x8386d088
	ctx.lr = 0x836B4C9C;
	sub_8386D088(ctx, base);
loc_836B4C9C:
	// stw r26,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r26.u32);
	// addi r4,r28,500
	ctx.r4.s64 = ctx.r28.s64 + 500;
	// stw r27,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r27.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stb r27,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r27.u8);
	// bl 0x83734458
	ctx.lr = 0x836B4CB4;
	sub_83734458(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836b4cc8
	if (cr6.lt) goto loc_836B4CC8;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x836b4ccc
	goto loc_836B4CCC;
loc_836B4CC8:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_836B4CCC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82473550
	ctx.lr = 0x836B4CD8;
	sub_82473550(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82473550
	ctx.lr = 0x836B4CE0;
	sub_82473550(ctx, base);
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836b4cf4
	if (cr6.lt) goto loc_836B4CF4;
	// lwz r3,208(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x8386d088
	ctx.lr = 0x836B4CF4;
	sub_8386D088(ctx, base);
loc_836B4CF4:
	// stw r26,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r26.u32);
	// addi r4,r1,296
	ctx.r4.s64 = ctx.r1.s64 + 296;
	// stw r27,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r27.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r27,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r27.u8);
	// bl 0x82a79bf8
	ctx.lr = 0x836B4D0C;
	sub_82A79BF8(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x836b4d20
	if (!cr6.lt) goto loc_836B4D20;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_836B4D20:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836B4D24:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836b4d24
	if (!cr6.eq) goto loc_836B4D24;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836B4D48;
	sub_824208C8(ctx, base);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836b4d5c
	if (cr6.lt) goto loc_836B4D5C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82416268
	ctx.lr = 0x836B4D5C;
	sub_82416268(ctx, base);
loc_836B4D5C:
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// stb r27,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r27.u8);
	// bl 0x82a79160
	ctx.lr = 0x836B4D70;
	sub_82A79160(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// addi r10,r11,15320
	ctx.r10.s64 = ctx.r11.s64 + 15320;
	// stw r10,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r10.u32);
	// bl 0x831ccf00
	ctx.lr = 0x836B4D84;
	sub_831CCF00(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836B4D90"))) PPC_WEAK_FUNC(sub_836B4D90);
PPC_FUNC_IMPL(__imp__sub_836B4D90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdabc
	ctx.lr = 0x836B4D98;
	__savegprlr_17(ctx, base);
	// stwu r1,-960(r1)
	ea = -960 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r18,r3,176
	ctx.r18.s64 = ctx.r3.s64 + 176;
	// addi r26,r11,-904
	ctx.r26.s64 = ctx.r11.s64 + -904;
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// addi r4,r26,-500
	ctx.r4.s64 = ctx.r26.s64 + -500;
	// bl 0x82536d88
	ctx.lr = 0x836B4DB8;
	sub_82536D88(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x836B4DBC;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_836B4DC4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836b4dc4
	if (!cr6.eq) goto loc_836B4DC4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r17,220
	ctx.r3.s64 = ctx.r17.s64 + 220;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836B4DE8;
	sub_824208C8(ctx, base);
	// addi r4,r26,-492
	ctx.r4.s64 = ctx.r26.s64 + -492;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82536d88
	ctx.lr = 0x836B4DF4;
	sub_82536D88(ctx, base);
	// bl 0x825347e8
	ctx.lr = 0x836B4DF8;
	sub_825347E8(ctx, base);
	// stw r3,248(r17)
	PPC_STORE_U32(ctx.r17.u32 + 248, ctx.r3.u32);
	// addi r4,r26,-484
	ctx.r4.s64 = ctx.r26.s64 + -484;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82536d88
	ctx.lr = 0x836B4E08;
	sub_82536D88(ctx, base);
	// bl 0x82534a18
	ctx.lr = 0x836B4E0C;
	sub_82534A18(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x836b4e34
	if (cr6.eq) goto loc_836B4E34;
	// addi r4,r26,-476
	ctx.r4.s64 = ctx.r26.s64 + -476;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82536d88
	ctx.lr = 0x836B4E24;
	sub_82536D88(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x836B4E28;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r17,316
	ctx.r3.s64 = ctx.r17.s64 + 316;
	// bl 0x83601998
	ctx.lr = 0x836B4E34;
	sub_83601998(ctx, base);
loc_836B4E34:
	// addi r4,r26,-468
	ctx.r4.s64 = ctx.r26.s64 + -468;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82536d88
	ctx.lr = 0x836B4E40;
	sub_82536D88(ctx, base);
	// bl 0x825349d0
	ctx.lr = 0x836B4E44;
	sub_825349D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b4e64
	if (cr6.eq) goto loc_836B4E64;
	// addi r4,r26,-460
	ctx.r4.s64 = ctx.r26.s64 + -460;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82536d88
	ctx.lr = 0x836B4E5C;
	sub_82536D88(ctx, base);
	// bl 0x825347e8
	ctx.lr = 0x836B4E60;
	sub_825347E8(ctx, base);
	// stw r3,348(r17)
	PPC_STORE_U32(ctx.r17.u32 + 348, ctx.r3.u32);
loc_836B4E64:
	// addi r4,r26,-452
	ctx.r4.s64 = ctx.r26.s64 + -452;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82536d88
	ctx.lr = 0x836B4E70;
	sub_82536D88(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82536838
	ctx.lr = 0x836B4E7C;
	sub_82536838(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82534a38
	ctx.lr = 0x836B4E84;
	sub_82534A38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b5848
	if (cr6.eq) goto loc_836B5848;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x825356a0
	ctx.lr = 0x836B4E9C;
	sub_825356A0(ctx, base);
	// addi r25,r17,352
	ctx.r25.s64 = ctx.r17.s64 + 352;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x836aeb80
	ctx.lr = 0x836B4EA8;
	sub_836AEB80(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x825356f0
	ctx.lr = 0x836B4EB4;
	sub_825356F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82534ae0
	ctx.lr = 0x836B4EC0;
	sub_82534AE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x836b5848
	if (!cr6.eq) goto loc_836B5848;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r8,11
	ctx.r8.s64 = 720896;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32204
	ctx.r9.s64 = -2110521344;
	// addi r21,r25,4
	ctx.r21.s64 = ctx.r25.s64 + 4;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r30,4
	ctx.r30.s64 = 4;
	// ori r29,r8,1
	ctx.r29.u64 = ctx.r8.u64 | 1;
	// li r19,8
	ctx.r19.s64 = 8;
	// li r20,320
	ctx.r20.s64 = 320;
	// addi r22,r11,-5108
	ctx.r22.s64 = ctx.r11.s64 + -5108;
	// addi r28,r10,8980
	ctx.r28.s64 = ctx.r10.s64 + 8980;
	// addi r27,r9,26164
	ctx.r27.s64 = ctx.r9.s64 + 26164;
loc_836B4F00:
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82535118
	ctx.lr = 0x836B4F08;
	sub_82535118(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x836aed60
	ctx.lr = 0x836B4F14;
	sub_836AED60(ctx, base);
	// stw r23,824(r1)
	PPC_STORE_U32(ctx.r1.u32 + 824, ctx.r23.u32);
	// stw r23,828(r1)
	PPC_STORE_U32(ctx.r1.u32 + 828, ctx.r23.u32);
	// addi r4,r26,-440
	ctx.r4.s64 = ctx.r26.s64 + -440;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82535898
	ctx.lr = 0x836B4F28;
	sub_82535898(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82536838
	ctx.lr = 0x836B4F34;
	sub_82536838(ctx, base);
	// addi r4,r26,-432
	ctx.r4.s64 = ctx.r26.s64 + -432;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535898
	ctx.lr = 0x836B4F40;
	sub_82535898(ctx, base);
	// bl 0x825349d0
	ctx.lr = 0x836B4F44;
	sub_825349D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b4f64
	if (cr6.eq) goto loc_836B4F64;
	// addi r4,r26,-428
	ctx.r4.s64 = ctx.r26.s64 + -428;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535898
	ctx.lr = 0x836B4F5C;
	sub_82535898(ctx, base);
	// bl 0x825347e8
	ctx.lr = 0x836B4F60;
	sub_825347E8(ctx, base);
	// stw r3,512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 512, ctx.r3.u32);
loc_836B4F64:
	// addi r4,r26,-424
	ctx.r4.s64 = ctx.r26.s64 + -424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535898
	ctx.lr = 0x836B4F70;
	sub_82535898(ctx, base);
	// bl 0x82534a18
	ctx.lr = 0x836B4F74;
	sub_82534A18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b4f9c
	if (cr6.eq) goto loc_836B4F9C;
	// addi r4,r26,-416
	ctx.r4.s64 = ctx.r26.s64 + -416;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535898
	ctx.lr = 0x836B4F8C;
	sub_82535898(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x836B4F90;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,516
	ctx.r3.s64 = ctx.r1.s64 + 516;
	// bl 0x83601998
	ctx.lr = 0x836B4F9C;
	sub_83601998(ctx, base);
loc_836B4F9C:
	// addi r4,r26,-408
	ctx.r4.s64 = ctx.r26.s64 + -408;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535898
	ctx.lr = 0x836B4FA8;
	sub_82535898(ctx, base);
	// bl 0x825349d0
	ctx.lr = 0x836B4FAC;
	sub_825349D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b4fcc
	if (cr6.eq) goto loc_836B4FCC;
	// addi r4,r26,-400
	ctx.r4.s64 = ctx.r26.s64 + -400;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535898
	ctx.lr = 0x836B4FC4;
	sub_82535898(ctx, base);
	// bl 0x82534850
	ctx.lr = 0x836B4FC8;
	sub_82534850(ctx, base);
	// std r3,544(r1)
	PPC_STORE_U64(ctx.r1.u32 + 544, ctx.r3.u64);
loc_836B4FCC:
	// addi r4,r26,-392
	ctx.r4.s64 = ctx.r26.s64 + -392;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535898
	ctx.lr = 0x836B4FD8;
	sub_82535898(ctx, base);
	// bl 0x82534a18
	ctx.lr = 0x836B4FDC;
	sub_82534A18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b5004
	if (cr6.eq) goto loc_836B5004;
	// addi r4,r26,-380
	ctx.r4.s64 = ctx.r26.s64 + -380;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535898
	ctx.lr = 0x836B4FF4;
	sub_82535898(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x836B4FF8;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,552
	ctx.r3.s64 = ctx.r1.s64 + 552;
	// bl 0x83601998
	ctx.lr = 0x836B5004;
	sub_83601998(ctx, base);
loc_836B5004:
	// addi r4,r26,-368
	ctx.r4.s64 = ctx.r26.s64 + -368;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535898
	ctx.lr = 0x836B5010;
	sub_82535898(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82536838
	ctx.lr = 0x836B501C;
	sub_82536838(ctx, base);
	// addi r4,r26,-360
	ctx.r4.s64 = ctx.r26.s64 + -360;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82535898
	ctx.lr = 0x836B5028;
	sub_82535898(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82536838
	ctx.lr = 0x836B5034;
	sub_82536838(ctx, base);
	// addi r4,r26,-352
	ctx.r4.s64 = ctx.r26.s64 + -352;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82535898
	ctx.lr = 0x836B5040;
	sub_82535898(ctx, base);
	// bl 0x82534a18
	ctx.lr = 0x836B5044;
	sub_82534A18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b506c
	if (cr6.eq) goto loc_836B506C;
	// addi r4,r26,-344
	ctx.r4.s64 = ctx.r26.s64 + -344;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82535898
	ctx.lr = 0x836B505C;
	sub_82535898(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x836B5060;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,584
	ctx.r3.s64 = ctx.r1.s64 + 584;
	// bl 0x83601998
	ctx.lr = 0x836B506C;
	sub_83601998(ctx, base);
loc_836B506C:
	// addi r4,r26,-336
	ctx.r4.s64 = ctx.r26.s64 + -336;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82535898
	ctx.lr = 0x836B5078;
	sub_82535898(ctx, base);
	// bl 0x825349d0
	ctx.lr = 0x836B507C;
	sub_825349D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b509c
	if (cr6.eq) goto loc_836B509C;
	// addi r4,r26,-328
	ctx.r4.s64 = ctx.r26.s64 + -328;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82535898
	ctx.lr = 0x836B5094;
	sub_82535898(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x836B5098;
	sub_82534770(ctx, base);
	// stw r3,612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 612, ctx.r3.u32);
loc_836B509C:
	// addi r4,r26,-320
	ctx.r4.s64 = ctx.r26.s64 + -320;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82535898
	ctx.lr = 0x836B50A8;
	sub_82535898(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82536838
	ctx.lr = 0x836B50B4;
	sub_82536838(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82534a38
	ctx.lr = 0x836B50BC;
	sub_82534A38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b51c8
	if (cr6.eq) goto loc_836B51C8;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x825356a0
	ctx.lr = 0x836B50D4;
	sub_825356A0(ctx, base);
	// addi r3,r1,616
	ctx.r3.s64 = ctx.r1.s64 + 616;
	// bl 0x824238b8
	ctx.lr = 0x836B50DC;
	sub_824238B8(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,488
	ctx.r3.s64 = ctx.r1.s64 + 488;
	// bl 0x825356f0
	ctx.lr = 0x836B50E8;
	sub_825356F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82534ae0
	ctx.lr = 0x836B50F4;
	sub_82534AE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x836b51c8
	if (!cr6.eq) goto loc_836B51C8;
loc_836B5100:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82535118
	ctx.lr = 0x836B5108;
	sub_82535118(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x836B510C;
	sub_82534770(ctx, base);
	// lwz r10,616(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 616);
	// lwz r11,620(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 620);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// blt cr6,0x836b517c
	if (cr6.lt) goto loc_836B517C;
	// addi r4,r10,2
	ctx.r4.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// ble cr6,0x836b516c
	if (!cr6.gt) goto loc_836B516C;
	// addi r11,r1,624
	ctx.r11.s64 = ctx.r1.s64 + 624;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// addi r10,r1,616
	ctx.r10.s64 = ctx.r1.s64 + 616;
	// stw r30,428(r1)
	PPC_STORE_U32(ctx.r1.u32 + 428, ctx.r30.u32);
	// addi r9,r1,620
	ctx.r9.s64 = ctx.r1.s64 + 620;
	// stw r11,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r11.u32);
	// stw r10,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r10.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r9,424(r1)
	PPC_STORE_U32(ctx.r1.u32 + 424, ctx.r9.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r30,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r30.u32);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x8247b270
	ctx.lr = 0x836B5160;
	sub_8247B270(ctx, base);
	// lwz r10,616(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 616);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// b 0x836b5170
	goto loc_836B5170;
loc_836B516C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_836B5170:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b519c
	if (cr6.eq) goto loc_836B519C;
loc_836B517C:
	// lwz r11,624(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 624);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x836b5194
	if (cr0.eq) goto loc_836B5194;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// lwz r10,616(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 616);
loc_836B5194:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stw r11,616(r1)
	PPC_STORE_U32(ctx.r1.u32 + 616, ctx.r11.u32);
loc_836B519C:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82535128
	ctx.lr = 0x836B51A4;
	sub_82535128(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,488
	ctx.r3.s64 = ctx.r1.s64 + 488;
	// bl 0x825356f0
	ctx.lr = 0x836B51B0;
	sub_825356F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82534ae0
	ctx.lr = 0x836B51BC;
	sub_82534AE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b5100
	if (cr6.eq) goto loc_836B5100;
loc_836B51C8:
	// addi r4,r26,-312
	ctx.r4.s64 = ctx.r26.s64 + -312;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82535898
	ctx.lr = 0x836B51D4;
	sub_82535898(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82536838
	ctx.lr = 0x836B51E0;
	sub_82536838(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82534a38
	ctx.lr = 0x836B51E8;
	sub_82534A38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b5340
	if (cr6.eq) goto loc_836B5340;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x825356a0
	ctx.lr = 0x836B5200;
	sub_825356A0(ctx, base);
	// addi r11,r1,640
	ctx.r11.s64 = ctx.r1.s64 + 640;
	// addi r10,r1,632
	ctx.r10.s64 = ctx.r1.s64 + 632;
	// stw r27,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r27.u32);
	// addi r9,r1,636
	ctx.r9.s64 = ctx.r1.s64 + 636;
	// stw r11,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r11.u32);
	// stw r10,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r10.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r9,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r9.u32);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// stw r30,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r30.u32);
	// stw r30,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r30.u32);
	// bl 0x8247b7d8
	ctx.lr = 0x836B5230;
	sub_8247B7D8(ctx, base);
	// lwz r3,640(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 640);
	// stw r23,632(r1)
	PPC_STORE_U32(ctx.r1.u32 + 632, ctx.r23.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x836b5250
	if (cr6.eq) goto loc_836B5250;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8247b268
	ctx.lr = 0x836B5248;
	sub_8247B268(ctx, base);
	// stw r23,636(r1)
	PPC_STORE_U32(ctx.r1.u32 + 636, ctx.r23.u32);
	// stw r23,640(r1)
	PPC_STORE_U32(ctx.r1.u32 + 640, ctx.r23.u32);
loc_836B5250:
	// stw r28,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r28.u32);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x825356f0
	ctx.lr = 0x836B5260;
	sub_825356F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82534ae0
	ctx.lr = 0x836B526C;
	sub_82534AE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x836b5340
	if (!cr6.eq) goto loc_836B5340;
loc_836B5278:
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82535118
	ctx.lr = 0x836B5280;
	sub_82535118(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x836B5284;
	sub_82534770(ctx, base);
	// lwz r10,632(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 632);
	// lwz r11,636(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 636);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// blt cr6,0x836b52f4
	if (cr6.lt) goto loc_836B52F4;
	// addi r4,r10,2
	ctx.r4.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// ble cr6,0x836b52e4
	if (!cr6.gt) goto loc_836B52E4;
	// addi r11,r1,640
	ctx.r11.s64 = ctx.r1.s64 + 640;
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// addi r10,r1,632
	ctx.r10.s64 = ctx.r1.s64 + 632;
	// stw r30,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r30.u32);
	// addi r9,r1,636
	ctx.r9.s64 = ctx.r1.s64 + 636;
	// stw r11,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r11.u32);
	// stw r10,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r10.u32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r9,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r9.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r30,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r30.u32);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x8247b270
	ctx.lr = 0x836B52D8;
	sub_8247B270(ctx, base);
	// lwz r10,632(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 632);
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// b 0x836b52e8
	goto loc_836B52E8;
loc_836B52E4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_836B52E8:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b5314
	if (cr6.eq) goto loc_836B5314;
loc_836B52F4:
	// lwz r11,640(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 640);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x836b530c
	if (cr0.eq) goto loc_836B530C;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// lwz r10,632(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 632);
loc_836B530C:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stw r11,632(r1)
	PPC_STORE_U32(ctx.r1.u32 + 632, ctx.r11.u32);
loc_836B5314:
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82535128
	ctx.lr = 0x836B531C;
	sub_82535128(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x825356f0
	ctx.lr = 0x836B5328;
	sub_825356F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82534ae0
	ctx.lr = 0x836B5334;
	sub_82534AE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b5278
	if (cr6.eq) goto loc_836B5278;
loc_836B5340:
	// addi r4,r26,-308
	ctx.r4.s64 = ctx.r26.s64 + -308;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82535898
	ctx.lr = 0x836B534C;
	sub_82535898(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82536838
	ctx.lr = 0x836B5358;
	sub_82536838(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82534a38
	ctx.lr = 0x836B5360;
	sub_82534A38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b54b8
	if (cr6.eq) goto loc_836B54B8;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x825356a0
	ctx.lr = 0x836B5378;
	sub_825356A0(ctx, base);
	// addi r11,r1,656
	ctx.r11.s64 = ctx.r1.s64 + 656;
	// addi r10,r1,648
	ctx.r10.s64 = ctx.r1.s64 + 648;
	// stw r27,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r27.u32);
	// addi r9,r1,652
	ctx.r9.s64 = ctx.r1.s64 + 652;
	// stw r11,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r11.u32);
	// stw r10,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r10.u32);
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// stw r9,392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 392, ctx.r9.u32);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// stw r30,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, ctx.r30.u32);
	// stw r30,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r30.u32);
	// bl 0x8247b7d8
	ctx.lr = 0x836B53A8;
	sub_8247B7D8(ctx, base);
	// lwz r3,656(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 656);
	// stw r23,648(r1)
	PPC_STORE_U32(ctx.r1.u32 + 648, ctx.r23.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x836b53c8
	if (cr6.eq) goto loc_836B53C8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8247b268
	ctx.lr = 0x836B53C0;
	sub_8247B268(ctx, base);
	// stw r23,652(r1)
	PPC_STORE_U32(ctx.r1.u32 + 652, ctx.r23.u32);
	// stw r23,656(r1)
	PPC_STORE_U32(ctx.r1.u32 + 656, ctx.r23.u32);
loc_836B53C8:
	// stw r28,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r28.u32);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,472
	ctx.r3.s64 = ctx.r1.s64 + 472;
	// bl 0x825356f0
	ctx.lr = 0x836B53D8;
	sub_825356F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82534ae0
	ctx.lr = 0x836B53E4;
	sub_82534AE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x836b54b8
	if (!cr6.eq) goto loc_836B54B8;
loc_836B53F0:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82535118
	ctx.lr = 0x836B53F8;
	sub_82535118(ctx, base);
	// bl 0x82534770
	ctx.lr = 0x836B53FC;
	sub_82534770(ctx, base);
	// lwz r10,648(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 648);
	// lwz r11,652(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 652);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// blt cr6,0x836b546c
	if (cr6.lt) goto loc_836B546C;
	// addi r4,r10,2
	ctx.r4.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// ble cr6,0x836b545c
	if (!cr6.gt) goto loc_836B545C;
	// addi r11,r1,656
	ctx.r11.s64 = ctx.r1.s64 + 656;
	// stw r27,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r27.u32);
	// addi r10,r1,648
	ctx.r10.s64 = ctx.r1.s64 + 648;
	// stw r30,460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 460, ctx.r30.u32);
	// addi r9,r1,652
	ctx.r9.s64 = ctx.r1.s64 + 652;
	// stw r11,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r11.u32);
	// stw r10,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r10.u32);
	// addi r6,r1,136
	ctx.r6.s64 = ctx.r1.s64 + 136;
	// stw r9,456(r1)
	PPC_STORE_U32(ctx.r1.u32 + 456, ctx.r9.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r30,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r30.u32);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x8247b270
	ctx.lr = 0x836B5450;
	sub_8247B270(ctx, base);
	// lwz r10,648(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 648);
	// stw r28,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r28.u32);
	// b 0x836b5460
	goto loc_836B5460;
loc_836B545C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_836B5460:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b548c
	if (cr6.eq) goto loc_836B548C;
loc_836B546C:
	// lwz r11,656(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 656);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x836b5484
	if (cr0.eq) goto loc_836B5484;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// lwz r10,648(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 648);
loc_836B5484:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stw r11,648(r1)
	PPC_STORE_U32(ctx.r1.u32 + 648, ctx.r11.u32);
loc_836B548C:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82535128
	ctx.lr = 0x836B5494;
	sub_82535128(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,472
	ctx.r3.s64 = ctx.r1.s64 + 472;
	// bl 0x825356f0
	ctx.lr = 0x836B54A0;
	sub_825356F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82534ae0
	ctx.lr = 0x836B54AC;
	sub_82534AE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b53f0
	if (cr6.eq) goto loc_836B53F0;
loc_836B54B8:
	// addi r4,r26,-296
	ctx.r4.s64 = ctx.r26.s64 + -296;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535898
	ctx.lr = 0x836B54C4;
	sub_82535898(ctx, base);
	// bl 0x82534a18
	ctx.lr = 0x836B54C8;
	sub_82534A18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b54f0
	if (cr6.eq) goto loc_836B54F0;
	// addi r4,r26,-284
	ctx.r4.s64 = ctx.r26.s64 + -284;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535898
	ctx.lr = 0x836B54E0;
	sub_82535898(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x836B54E4;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,664
	ctx.r3.s64 = ctx.r1.s64 + 664;
	// bl 0x83601998
	ctx.lr = 0x836B54F0;
	sub_83601998(ctx, base);
loc_836B54F0:
	// addi r4,r26,-272
	ctx.r4.s64 = ctx.r26.s64 + -272;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535898
	ctx.lr = 0x836B54FC;
	sub_82535898(ctx, base);
	// bl 0x82534a18
	ctx.lr = 0x836B5500;
	sub_82534A18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b5528
	if (cr6.eq) goto loc_836B5528;
	// addi r4,r26,-256
	ctx.r4.s64 = ctx.r26.s64 + -256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535898
	ctx.lr = 0x836B5518;
	sub_82535898(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x836B551C;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,692
	ctx.r3.s64 = ctx.r1.s64 + 692;
	// bl 0x83601998
	ctx.lr = 0x836B5528;
	sub_83601998(ctx, base);
loc_836B5528:
	// addi r4,r26,-240
	ctx.r4.s64 = ctx.r26.s64 + -240;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535898
	ctx.lr = 0x836B5534;
	sub_82535898(ctx, base);
	// bl 0x82534a18
	ctx.lr = 0x836B5538;
	sub_82534A18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b5560
	if (cr6.eq) goto loc_836B5560;
	// addi r4,r26,-224
	ctx.r4.s64 = ctx.r26.s64 + -224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535898
	ctx.lr = 0x836B5550;
	sub_82535898(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x836B5554;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// bl 0x83601998
	ctx.lr = 0x836B5560;
	sub_83601998(ctx, base);
loc_836B5560:
	// addi r4,r26,-208
	ctx.r4.s64 = ctx.r26.s64 + -208;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535898
	ctx.lr = 0x836B556C;
	sub_82535898(ctx, base);
	// bl 0x82534a18
	ctx.lr = 0x836B5570;
	sub_82534A18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b5598
	if (cr6.eq) goto loc_836B5598;
	// addi r4,r26,-200
	ctx.r4.s64 = ctx.r26.s64 + -200;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535898
	ctx.lr = 0x836B5588;
	sub_82535898(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x836B558C;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,748
	ctx.r3.s64 = ctx.r1.s64 + 748;
	// bl 0x83601998
	ctx.lr = 0x836B5598;
	sub_83601998(ctx, base);
loc_836B5598:
	// addi r4,r26,-192
	ctx.r4.s64 = ctx.r26.s64 + -192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535898
	ctx.lr = 0x836B55A4;
	sub_82535898(ctx, base);
	// bl 0x82534a18
	ctx.lr = 0x836B55A8;
	sub_82534A18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b55d0
	if (cr6.eq) goto loc_836B55D0;
	// addi r4,r26,-184
	ctx.r4.s64 = ctx.r26.s64 + -184;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535898
	ctx.lr = 0x836B55C0;
	sub_82535898(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x836B55C4;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,776
	ctx.r3.s64 = ctx.r1.s64 + 776;
	// bl 0x83601998
	ctx.lr = 0x836B55D0;
	sub_83601998(ctx, base);
loc_836B55D0:
	// addi r4,r26,-176
	ctx.r4.s64 = ctx.r26.s64 + -176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535898
	ctx.lr = 0x836B55DC;
	sub_82535898(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82536838
	ctx.lr = 0x836B55E8;
	sub_82536838(ctx, base);
	// addi r4,r26,-160
	ctx.r4.s64 = ctx.r26.s64 + -160;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82535898
	ctx.lr = 0x836B55F4;
	sub_82535898(ctx, base);
	// bl 0x825349d0
	ctx.lr = 0x836B55F8;
	sub_825349D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b5618
	if (cr6.eq) goto loc_836B5618;
	// addi r4,r26,-148
	ctx.r4.s64 = ctx.r26.s64 + -148;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82535898
	ctx.lr = 0x836B5610;
	sub_82535898(ctx, base);
	// bl 0x825347e8
	ctx.lr = 0x836B5614;
	sub_825347E8(ctx, base);
	// stw r3,804(r1)
	PPC_STORE_U32(ctx.r1.u32 + 804, ctx.r3.u32);
loc_836B5618:
	// addi r4,r26,-136
	ctx.r4.s64 = ctx.r26.s64 + -136;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82535898
	ctx.lr = 0x836B5624;
	sub_82535898(ctx, base);
	// bl 0x825349d0
	ctx.lr = 0x836B5628;
	sub_825349D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b5648
	if (cr6.eq) goto loc_836B5648;
	// addi r4,r26,-124
	ctx.r4.s64 = ctx.r26.s64 + -124;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82535898
	ctx.lr = 0x836B5640;
	sub_82535898(ctx, base);
	// bl 0x825347e8
	ctx.lr = 0x836B5644;
	sub_825347E8(ctx, base);
	// stw r3,808(r1)
	PPC_STORE_U32(ctx.r1.u32 + 808, ctx.r3.u32);
loc_836B5648:
	// addi r4,r26,-112
	ctx.r4.s64 = ctx.r26.s64 + -112;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82535898
	ctx.lr = 0x836B5654;
	sub_82535898(ctx, base);
	// bl 0x825349d0
	ctx.lr = 0x836B5658;
	sub_825349D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b5678
	if (cr6.eq) goto loc_836B5678;
	// addi r4,r26,-100
	ctx.r4.s64 = ctx.r26.s64 + -100;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82535898
	ctx.lr = 0x836B5670;
	sub_82535898(ctx, base);
	// bl 0x825347e8
	ctx.lr = 0x836B5674;
	sub_825347E8(ctx, base);
	// stw r3,812(r1)
	PPC_STORE_U32(ctx.r1.u32 + 812, ctx.r3.u32);
loc_836B5678:
	// addi r4,r26,-88
	ctx.r4.s64 = ctx.r26.s64 + -88;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82535898
	ctx.lr = 0x836B5684;
	sub_82535898(ctx, base);
	// bl 0x825349d0
	ctx.lr = 0x836B5688;
	sub_825349D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b56a8
	if (cr6.eq) goto loc_836B56A8;
	// addi r4,r26,-76
	ctx.r4.s64 = ctx.r26.s64 + -76;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82535898
	ctx.lr = 0x836B56A0;
	sub_82535898(ctx, base);
	// bl 0x825347e8
	ctx.lr = 0x836B56A4;
	sub_825347E8(ctx, base);
	// stw r3,816(r1)
	PPC_STORE_U32(ctx.r1.u32 + 816, ctx.r3.u32);
loc_836B56A8:
	// addi r4,r26,-64
	ctx.r4.s64 = ctx.r26.s64 + -64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82535898
	ctx.lr = 0x836B56B4;
	sub_82535898(ctx, base);
	// bl 0x825349d0
	ctx.lr = 0x836B56B8;
	sub_825349D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b56d8
	if (cr6.eq) goto loc_836B56D8;
	// addi r4,r26,-56
	ctx.r4.s64 = ctx.r26.s64 + -56;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82535898
	ctx.lr = 0x836B56D0;
	sub_82535898(ctx, base);
	// bl 0x825347e8
	ctx.lr = 0x836B56D4;
	sub_825347E8(ctx, base);
	// stw r3,820(r1)
	PPC_STORE_U32(ctx.r1.u32 + 820, ctx.r3.u32);
loc_836B56D8:
	// addi r4,r26,-48
	ctx.r4.s64 = ctx.r26.s64 + -48;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82535898
	ctx.lr = 0x836B56E4;
	sub_82535898(ctx, base);
	// bl 0x825349d0
	ctx.lr = 0x836B56E8;
	sub_825349D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b5708
	if (cr6.eq) goto loc_836B5708;
	// addi r4,r26,-40
	ctx.r4.s64 = ctx.r26.s64 + -40;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82535898
	ctx.lr = 0x836B5700;
	sub_82535898(ctx, base);
	// bl 0x825347e8
	ctx.lr = 0x836B5704;
	sub_825347E8(ctx, base);
	// stw r3,824(r1)
	PPC_STORE_U32(ctx.r1.u32 + 824, ctx.r3.u32);
loc_836B5708:
	// addi r4,r26,-32
	ctx.r4.s64 = ctx.r26.s64 + -32;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82535898
	ctx.lr = 0x836B5714;
	sub_82535898(ctx, base);
	// bl 0x825349d0
	ctx.lr = 0x836B5718;
	sub_825349D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b5738
	if (cr6.eq) goto loc_836B5738;
	// addi r4,r26,-24
	ctx.r4.s64 = ctx.r26.s64 + -24;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82535898
	ctx.lr = 0x836B5730;
	sub_82535898(ctx, base);
	// bl 0x825347e8
	ctx.lr = 0x836B5734;
	sub_825347E8(ctx, base);
	// stw r3,828(r1)
	PPC_STORE_U32(ctx.r1.u32 + 828, ctx.r3.u32);
loc_836B5738:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x836b5798
	if (cr6.lt) goto loc_836B5798;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x836b5788
	if (!cr6.gt) goto loc_836B5788;
	// addi r11,r25,8
	ctx.r11.s64 = ctx.r25.s64 + 8;
	// stw r25,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r25.u32);
	// stw r21,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r21.u32);
	// addi r6,r1,132
	ctx.r6.s64 = ctx.r1.s64 + 132;
	// stw r11,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r11.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r19,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r19.u32);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// stw r20,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r20.u32);
	// stw r22,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r22.u32);
	// bl 0x8247b270
	ctx.lr = 0x836B5780;
	sub_8247B270(ctx, base);
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// b 0x836b578c
	goto loc_836B578C;
loc_836B5788:
	// li r3,1
	ctx.r3.s64 = 1;
loc_836B578C:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b57dc
	if (cr6.eq) goto loc_836B57DC;
loc_836B5798:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add. r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq 0x836b57d0
	if (cr0.eq) goto loc_836B57D0;
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x836aee78
	ctx.lr = 0x836B57C0;
	sub_836AEE78(ctx, base);
	// lwz r11,824(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 824);
	// stw r11,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r11.u32);
	// lwz r10,828(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 828);
	// stw r10,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r10.u32);
loc_836B57D0:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
loc_836B57DC:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82535aa0
	ctx.lr = 0x836B57E4;
	sub_82535AA0(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82535aa0
	ctx.lr = 0x836B57EC;
	sub_82535AA0(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82535aa0
	ctx.lr = 0x836B57F4;
	sub_82535AA0(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82535aa0
	ctx.lr = 0x836B57FC;
	sub_82535AA0(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82535aa0
	ctx.lr = 0x836B5804;
	sub_82535AA0(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82535aa0
	ctx.lr = 0x836B580C;
	sub_82535AA0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535aa0
	ctx.lr = 0x836B5814;
	sub_82535AA0(ctx, base);
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x836aec00
	ctx.lr = 0x836B581C;
	sub_836AEC00(ctx, base);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82535128
	ctx.lr = 0x836B5824;
	sub_82535128(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x825356f0
	ctx.lr = 0x836B5830;
	sub_825356F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x82534ae0
	ctx.lr = 0x836B583C;
	sub_82534AE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b4f00
	if (cr6.eq) goto loc_836B4F00;
loc_836B5848:
	// addi r4,r26,-16
	ctx.r4.s64 = ctx.r26.s64 + -16;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82536d88
	ctx.lr = 0x836B5854;
	sub_82536D88(ctx, base);
	// bl 0x825349d0
	ctx.lr = 0x836B5858;
	sub_825349D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b5878
	if (cr6.eq) goto loc_836B5878;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82536d88
	ctx.lr = 0x836B5870;
	sub_82536D88(ctx, base);
	// bl 0x825347e8
	ctx.lr = 0x836B5874;
	sub_825347E8(ctx, base);
	// stw r3,368(r17)
	PPC_STORE_U32(ctx.r17.u32 + 368, ctx.r3.u32);
loc_836B5878:
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82535aa0
	ctx.lr = 0x836B5880;
	sub_82535AA0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,960
	ctx.r1.s64 = ctx.r1.s64 + 960;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836B588C"))) PPC_WEAK_FUNC(sub_836B588C);
PPC_FUNC_IMPL(__imp__sub_836B588C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836B5890"))) PPC_WEAK_FUNC(sub_836B5890);
PPC_FUNC_IMPL(__imp__sub_836B5890) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x836B5898;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d95768
	ctx.lr = 0x836B58A4;
	sub_82D95768(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r29,r11,-1840
	ctx.r29.s64 = ctx.r11.s64 + -1840;
	// li r5,27
	ctx.r5.s64 = 27;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824208c8
	ctx.lr = 0x836B58BC;
	sub_824208C8(ctx, base);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// addi r7,r10,-788
	ctx.r7.s64 = ctx.r10.s64 + -788;
	// addi r5,r8,-804
	ctx.r5.s64 = ctx.r8.s64 + -804;
	// addi r6,r9,-800
	ctx.r6.s64 = ctx.r9.s64 + -800;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r5,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r5.u32);
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r6,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r6.u32);
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// stw r28,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r28.u32);
	// addi r4,r29,28
	ctx.r4.s64 = ctx.r29.s64 + 28;
	// stb r30,316(r31)
	PPC_STORE_U8(ctx.r31.u32 + 316, ctx.r30.u8);
	// li r5,9
	ctx.r5.s64 = 9;
	// bl 0x824208c8
	ctx.lr = 0x836B5904;
	sub_824208C8(ctx, base);
	// stw r30,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r30.u32);
	// std r30,352(r31)
	PPC_STORE_U64(ctx.r31.u32 + 352, ctx.r30.u64);
	// addi r3,r31,360
	ctx.r3.s64 = ctx.r31.s64 + 360;
	// stw r28,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r28.u32);
	// addi r4,r29,40
	ctx.r4.s64 = ctx.r29.s64 + 40;
	// stw r30,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r30.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// stb r30,360(r31)
	PPC_STORE_U8(ctx.r31.u32 + 360, ctx.r30.u8);
	// bl 0x824208c8
	ctx.lr = 0x836B5928;
	sub_824208C8(ctx, base);
	// addi r3,r31,392
	ctx.r3.s64 = ctx.r31.s64 + 392;
	// bl 0x835fe558
	ctx.lr = 0x836B5930;
	sub_835FE558(ctx, base);
	// stw r28,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r28.u32);
	// stw r30,488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 488, ctx.r30.u32);
	// addi r3,r31,472
	ctx.r3.s64 = ctx.r31.s64 + 472;
	// stb r30,472(r31)
	PPC_STORE_U8(ctx.r31.u32 + 472, ctx.r30.u8);
	// addi r4,r29,60
	ctx.r4.s64 = ctx.r29.s64 + 60;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836B594C;
	sub_824208C8(ctx, base);
	// stw r28,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r28.u32);
	// stw r30,516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 516, ctx.r30.u32);
	// addi r3,r31,500
	ctx.r3.s64 = ctx.r31.s64 + 500;
	// stb r30,500(r31)
	PPC_STORE_U8(ctx.r31.u32 + 500, ctx.r30.u8);
	// addi r4,r29,76
	ctx.r4.s64 = ctx.r29.s64 + 76;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836B5968;
	sub_824208C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836B5974"))) PPC_WEAK_FUNC(sub_836B5974);
PPC_FUNC_IMPL(__imp__sub_836B5974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836B5978"))) PPC_WEAK_FUNC(sub_836B5978);
PPC_FUNC_IMPL(__imp__sub_836B5978) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x836b5aa0
	sub_836B5AA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836B5980"))) PPC_WEAK_FUNC(sub_836B5980);
PPC_FUNC_IMPL(__imp__sub_836B5980) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x836b5aa0
	sub_836B5AA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836B5988"))) PPC_WEAK_FUNC(sub_836B5988);
PPC_FUNC_IMPL(__imp__sub_836B5988) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x836B5990;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// addi r8,r11,-788
	ctx.r8.s64 = ctx.r11.s64 + -788;
	// addi r7,r10,-800
	ctx.r7.s64 = ctx.r10.s64 + -800;
	// addi r6,r9,-804
	ctx.r6.s64 = ctx.r9.s64 + -804;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r6,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r6.u32);
	// addi r30,r3,500
	ctx.r30.s64 = ctx.r3.s64 + 500;
	// lwz r5,520(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 520);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x836b59d4
	if (cr6.lt) goto loc_836B59D4;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836B59D4;
	sub_8386D088(ctx, base);
loc_836B59D4:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// addi r28,r29,472
	ctx.r28.s64 = ctx.r29.s64 + 472;
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// lwz r11,492(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 492);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836b5a00
	if (cr6.lt) goto loc_836B5A00;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836B5A00;
	sub_8386D088(ctx, base);
loc_836B5A00:
	// stw r27,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r27.u32);
	// addi r30,r29,392
	ctx.r30.s64 = ctx.r29.s64 + 392;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// addi r3,r30,64
	ctx.r3.s64 = ctx.r30.s64 + 64;
	// bl 0x824238b8
	ctx.lr = 0x836B5A18;
	sub_824238B8(ctx, base);
	// addi r3,r30,48
	ctx.r3.s64 = ctx.r30.s64 + 48;
	// bl 0x824238b8
	ctx.lr = 0x836B5A20;
	sub_824238B8(ctx, base);
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// bl 0x824238b8
	ctx.lr = 0x836B5A28;
	sub_824238B8(ctx, base);
	// lwz r11,412(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 412);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836b5a3c
	if (cr6.lt) goto loc_836B5A3C;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836B5A3C;
	sub_8386D088(ctx, base);
loc_836B5A3C:
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// addi r28,r29,360
	ctx.r28.s64 = ctx.r29.s64 + 360;
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// lwz r11,380(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 380);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836b5a60
	if (cr6.lt) goto loc_836B5A60;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836B5A60;
	sub_8386D088(ctx, base);
loc_836B5A60:
	// stw r27,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r27.u32);
	// addi r30,r29,316
	ctx.r30.s64 = ctx.r29.s64 + 316;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// lwz r11,336(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836b5a84
	if (cr6.lt) goto loc_836B5A84;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836B5A84;
	sub_8386D088(ctx, base);
loc_836B5A84:
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// bl 0x82b6a590
	ctx.lr = 0x836B5A98;
	sub_82B6A590(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836B5AA0"))) PPC_WEAK_FUNC(sub_836B5AA0);
PPC_FUNC_IMPL(__imp__sub_836B5AA0) {
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
	// bl 0x836b5988
	ctx.lr = 0x836B5AC0;
	sub_836B5988(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b5ae0
	if (cr6.eq) goto loc_836B5AE0;
	// bl 0x82595188
	ctx.lr = 0x836B5AD0;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x836B5AE0;
	sub_825952B8(ctx, base);
loc_836B5AE0:
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

__attribute__((alias("__imp__sub_836B5AFC"))) PPC_WEAK_FUNC(sub_836B5AFC);
PPC_FUNC_IMPL(__imp__sub_836B5AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836B5B00"))) PPC_WEAK_FUNC(sub_836B5B00);
PPC_FUNC_IMPL(__imp__sub_836B5B00) {
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
	ctx.lr = 0x836B5B1C;
	sub_82EAF8D8(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r4,r11,-1840
	ctx.r4.s64 = ctx.r11.s64 + -1840;
	// li r5,27
	ctx.r5.s64 = 27;
	// bl 0x824208c8
	ctx.lr = 0x836B5B30;
	sub_824208C8(ctx, base);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// lis r7,-32216
	ctx.r7.s64 = -2111307776;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r4,r8,-768
	ctx.r4.s64 = ctx.r8.s64 + -768;
	// addi r6,r10,-752
	ctx.r6.s64 = ctx.r10.s64 + -752;
	// stw r30,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r30.u32);
	// addi r5,r9,-764
	ctx.r5.s64 = ctx.r9.s64 + -764;
	// stw r4,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r4.u32);
	// addi r11,r7,-772
	ctx.r11.s64 = ctx.r7.s64 + -772;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// stw r5,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r5.u32);
	// addi r3,r31,352
	ctx.r3.s64 = ctx.r31.s64 + 352;
	// stw r11,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r11.u32);
	// li r4,100
	ctx.r4.s64 = 100;
	// stw r30,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r30.u32);
	// stw r30,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r30.u32);
	// std r30,360(r31)
	PPC_STORE_U64(ctx.r31.u32 + 360, ctx.r30.u64);
	// bl 0x836ae9d0
	ctx.lr = 0x836B5B80;
	sub_836AE9D0(ctx, base);
	// stw r30,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_836B5BA0"))) PPC_WEAK_FUNC(sub_836B5BA0);
PPC_FUNC_IMPL(__imp__sub_836B5BA0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x836b5bb8
	sub_836B5BB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836B5BA8"))) PPC_WEAK_FUNC(sub_836B5BA8);
PPC_FUNC_IMPL(__imp__sub_836B5BA8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-312
	ctx.r3.s64 = ctx.r3.s64 + -312;
	// b 0x836b5bb8
	sub_836B5BB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836B5BB0"))) PPC_WEAK_FUNC(sub_836B5BB0);
PPC_FUNC_IMPL(__imp__sub_836B5BB0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x836b5bb8
	sub_836B5BB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836B5BB8"))) PPC_WEAK_FUNC(sub_836B5BB8);
PPC_FUNC_IMPL(__imp__sub_836B5BB8) {
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
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r7,r11,-752
	ctx.r7.s64 = ctx.r11.s64 + -752;
	// addi r6,r10,-764
	ctx.r6.s64 = ctx.r10.s64 + -764;
	// addi r5,r9,-768
	ctx.r5.s64 = ctx.r9.s64 + -768;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r8,-772
	ctx.r4.s64 = ctx.r8.s64 + -772;
	// stw r6,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r6.u32);
	// stw r5,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r5.u32);
	// addi r3,r3,352
	ctx.r3.s64 = ctx.r3.s64 + 352;
	// stw r4,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r4.u32);
	// bl 0x836aeb80
	ctx.lr = 0x836B5C0C;
	sub_836AEB80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eaf978
	ctx.lr = 0x836B5C14;
	sub_82EAF978(ctx, base);
	// clrlwi r3,r30,31
	ctx.r3.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x836b5c34
	if (cr6.eq) goto loc_836B5C34;
	// bl 0x82595188
	ctx.lr = 0x836B5C24;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x836B5C34;
	sub_825952B8(ctx, base);
loc_836B5C34:
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

__attribute__((alias("__imp__sub_836B5C50"))) PPC_WEAK_FUNC(sub_836B5C50);
PPC_FUNC_IMPL(__imp__sub_836B5C50) {
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
	// bl 0x83356798
	ctx.lr = 0x836B5C6C;
	sub_83356798(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// li r30,29
	ctx.r30.s64 = 29;
	// addi r10,r11,-2884
	ctx.r10.s64 = ctx.r11.s64 + -2884;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r4,528
	ctx.r4.s64 = 528;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x836B5C90;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x836b5ca0
	if (cr6.eq) goto loc_836B5CA0;
	// bl 0x836b5890
	ctx.lr = 0x836B5C9C;
	sub_836B5890(ctx, base);
	// b 0x836b5ca4
	goto loc_836B5CA4;
loc_836B5CA0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_836B5CA4:
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r4,376
	ctx.r4.s64 = 376;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x836B5CBC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x836b5cd0
	if (cr6.eq) goto loc_836B5CD0;
	// bl 0x836b5b00
	ctx.lr = 0x836B5CC8;
	sub_836B5B00(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x836b5cd4
	goto loc_836B5CD4;
loc_836B5CD0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_836B5CD4:
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_836B5CF4"))) PPC_WEAK_FUNC(sub_836B5CF4);
PPC_FUNC_IMPL(__imp__sub_836B5CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836B5CF8"))) PPC_WEAK_FUNC(sub_836B5CF8);
PPC_FUNC_IMPL(__imp__sub_836B5CF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x836B5D00;
	__savegprlr_27(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// rotlwi r8,r31,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r10,133
	ctx.r10.s64 = 133;
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stb r10,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r10.u8);
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// bge cr6,0x836b5d40
	if (!cr6.lt) goto loc_836B5D40;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e745e0
	ctx.lr = 0x836B5D40;
	sub_82E745E0(ctx, base);
loc_836B5D40:
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// li r30,15
	ctx.r30.s64 = 15;
	// addi r27,r11,-600
	ctx.r27.s64 = ctx.r11.s64 + -600;
	// li r5,5
	ctx.r5.s64 = 5;
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r4,r27,-32
	ctx.r4.s64 = ctx.r27.s64 + -32;
	// stbx r7,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u8);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r6.u32);
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836B5D88;
	sub_82472FC0(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836B5D94;
	sub_82E74C08(ctx, base);
	// lwz r5,308(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x836b5da8
	if (cr6.lt) goto loc_836B5DA8;
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82416268
	ctx.lr = 0x836B5DA8;
	sub_82416268(ctx, base);
loc_836B5DA8:
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// addi r4,r28,20
	ctx.r4.s64 = ctx.r28.s64 + 20;
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// blt cr6,0x836b5dc8
	if (cr6.lt) goto loc_836B5DC8;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836B5DC8:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
loc_836B5DD8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836b5dd8
	if (!cr6.eq) goto loc_836B5DD8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836B5DFC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836B5E08;
	sub_82E74C08(ctx, base);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836b5e1c
	if (cr6.lt) goto loc_836B5E1C;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x836B5E1C;
	sub_82416268(ctx, base);
loc_836B5E1C:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// addi r4,r27,-24
	ctx.r4.s64 = ctx.r27.s64 + -24;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836B5E44;
	sub_82472FC0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836B5E50;
	sub_82E74C08(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836b5e64
	if (cr6.lt) goto loc_836B5E64;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x836B5E64;
	sub_82416268(ctx, base);
loc_836B5E64:
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// lwz r4,48(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// bl 0x82e746c0
	ctx.lr = 0x836B5E7C;
	sub_82E746C0(ctx, base);
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// addi r4,r27,-16
	ctx.r4.s64 = ctx.r27.s64 + -16;
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82472fc0
	ctx.lr = 0x836B5E98;
	sub_82472FC0(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836B5EA4;
	sub_82E74C08(ctx, base);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836b5eb8
	if (cr6.lt) goto loc_836B5EB8;
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82416268
	ctx.lr = 0x836B5EB8;
	sub_82416268(ctx, base);
loc_836B5EB8:
	// lwz r11,136(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 136);
	// addi r4,r28,116
	ctx.r4.s64 = ctx.r28.s64 + 116;
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// blt cr6,0x836b5ed8
	if (cr6.lt) goto loc_836B5ED8;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836B5ED8:
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
loc_836B5EE8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836b5ee8
	if (!cr6.eq) goto loc_836B5EE8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836B5F0C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836B5F18;
	sub_82E74C08(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836b5f2c
	if (cr6.lt) goto loc_836B5F2C;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x836B5F2C;
	sub_82416268(ctx, base);
loc_836B5F2C:
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// addi r4,r27,-8
	ctx.r4.s64 = ctx.r27.s64 + -8;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836B5F54;
	sub_82472FC0(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836B5F60;
	sub_82E74C08(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836b5f74
	if (cr6.lt) goto loc_836B5F74;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82416268
	ctx.lr = 0x836B5F74;
	sub_82416268(ctx, base);
loc_836B5F74:
	// lwz r11,164(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 164);
	// addi r4,r28,144
	ctx.r4.s64 = ctx.r28.s64 + 144;
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// blt cr6,0x836b5f94
	if (cr6.lt) goto loc_836B5F94;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836B5F94:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
loc_836B5FA4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836b5fa4
	if (!cr6.eq) goto loc_836B5FA4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836B5FC8;
	sub_82472FC0(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836B5FD4;
	sub_82E74C08(ctx, base);
	// lwz r10,276(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836b5fe8
	if (cr6.lt) goto loc_836B5FE8;
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x82416268
	ctx.lr = 0x836B5FE8;
	sub_82416268(ctx, base);
loc_836B5FE8:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836B6010;
	sub_82472FC0(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836B601C;
	sub_82E74C08(ctx, base);
	// lwz r11,340(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836b6030
	if (cr6.lt) goto loc_836B6030;
	// lwz r3,320(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x82416268
	ctx.lr = 0x836B6030;
	sub_82416268(ctx, base);
loc_836B6030:
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// lwz r4,172(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 172);
	// bl 0x82e746c0
	ctx.lr = 0x836B6048;
	sub_82E746C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836B6054"))) PPC_WEAK_FUNC(sub_836B6054);
PPC_FUNC_IMPL(__imp__sub_836B6054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836B6058"))) PPC_WEAK_FUNC(sub_836B6058);
PPC_FUNC_IMPL(__imp__sub_836B6058) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x836B6060;
	__savegprlr_26(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
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
	// stw r30,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x83691bb8
	ctx.lr = 0x836B6088;
	sub_83691BB8(ctx, base);
	// lwz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x836b62cc
	if (!cr6.lt) goto loc_836B62CC;
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
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r26,r11,-580
	ctx.r26.s64 = ctx.r11.s64 + -580;
loc_836B60C0:
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
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
	// lwz r5,232(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// lwz r4,236(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// bl 0x82472fc0
	ctx.lr = 0x836B60F4;
	sub_82472FC0(ctx, base);
	// addi r6,r26,-16
	ctx.r6.s64 = ctx.r26.s64 + -16;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836B610C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836b61a0
	if (!cr6.eq) goto loc_836B61A0;
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,264(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// lwz r4,268(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// bl 0x82472fc0
	ctx.lr = 0x836B6144;
	sub_82472FC0(ctx, base);
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x836b6158
	if (!cr6.lt) goto loc_836B6158;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
loc_836B6158:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836B615C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836b615c
	if (!cr6.eq) goto loc_836B615C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,20
	ctx.r3.s64 = ctx.r28.s64 + 20;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836B6180;
	sub_824208C8(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836b6194
	if (cr6.lt) goto loc_836B6194;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82416268
	ctx.lr = 0x836B6194;
	sub_82416268(ctx, base);
loc_836B6194:
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
loc_836B61A0:
	// addi r6,r26,-8
	ctx.r6.s64 = ctx.r26.s64 + -8;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836B61B8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836b61f4
	if (!cr6.eq) goto loc_836B61F4;
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// lwz r8,240(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x836b61ec
	if (!cr6.eq) goto loc_836B61EC;
	// ld r11,248(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 248);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836b61f0
	goto loc_836B61F0;
loc_836B61EC:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_836B61F0:
	// stw r11,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r11.u32);
loc_836B61F4:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836B620C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836b62a0
	if (!cr6.eq) goto loc_836B62A0;
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
	// ld r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// lwz r5,216(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r4,220(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// bl 0x82472fc0
	ctx.lr = 0x836B6244;
	sub_82472FC0(ctx, base);
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x836b6258
	if (!cr6.lt) goto loc_836B6258;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_836B6258:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836B625C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836b625c
	if (!cr6.eq) goto loc_836B625C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,116
	ctx.r3.s64 = ctx.r28.s64 + 116;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836B6280;
	sub_824208C8(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836b6294
	if (cr6.lt) goto loc_836B6294;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82416268
	ctx.lr = 0x836B6294;
	sub_82416268(ctx, base);
loc_836B6294:
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
loc_836B62A0:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836b62b4
	if (cr6.lt) goto loc_836B62B4;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82416268
	ctx.lr = 0x836B62B4;
	sub_82416268(ctx, base);
loc_836B62B4:
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
	// bne 0x836b60c0
	if (!cr0.eq) goto loc_836B60C0;
loc_836B62CC:
	// lwz r31,192(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x836b62e8
	if (cr6.eq) goto loc_836B62E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x836B62E0;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x836B62E8;
	sub_82416268(ctx, base);
loc_836B62E8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836B62F4"))) PPC_WEAK_FUNC(sub_836B62F4);
PPC_FUNC_IMPL(__imp__sub_836B62F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836B62F8"))) PPC_WEAK_FUNC(sub_836B62F8);
PPC_FUNC_IMPL(__imp__sub_836B62F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x836B6300;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d95768
	ctx.lr = 0x836B630C;
	sub_82D95768(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r29,r11,-688
	ctx.r29.s64 = ctx.r11.s64 + -688;
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824208c8
	ctx.lr = 0x836B6324;
	sub_824208C8(ctx, base);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// addi r7,r10,-472
	ctx.r7.s64 = ctx.r10.s64 + -472;
	// addi r5,r8,-488
	ctx.r5.s64 = ctx.r8.s64 + -488;
	// addi r6,r9,-484
	ctx.r6.s64 = ctx.r9.s64 + -484;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r5,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r5.u32);
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r6,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r6.u32);
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// stw r28,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r28.u32);
	// addi r4,r29,24
	ctx.r4.s64 = ctx.r29.s64 + 24;
	// stb r30,316(r31)
	PPC_STORE_U8(ctx.r31.u32 + 316, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836B636C;
	sub_824208C8(ctx, base);
	// stw r28,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r28.u32);
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// stb r30,344(r31)
	PPC_STORE_U8(ctx.r31.u32 + 344, ctx.r30.u8);
	// addi r4,r29,40
	ctx.r4.s64 = ctx.r29.s64 + 40;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836B6388;
	sub_824208C8(ctx, base);
	// stw r30,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836B6398"))) PPC_WEAK_FUNC(sub_836B6398);
PPC_FUNC_IMPL(__imp__sub_836B6398) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x836b6440
	sub_836B6440(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836B63A0"))) PPC_WEAK_FUNC(sub_836B63A0);
PPC_FUNC_IMPL(__imp__sub_836B63A0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x836b6440
	sub_836B6440(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836B63A8"))) PPC_WEAK_FUNC(sub_836B63A8);
PPC_FUNC_IMPL(__imp__sub_836B63A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x836B63B0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// addi r8,r11,-472
	ctx.r8.s64 = ctx.r11.s64 + -472;
	// addi r7,r10,-484
	ctx.r7.s64 = ctx.r10.s64 + -484;
	// addi r6,r9,-488
	ctx.r6.s64 = ctx.r9.s64 + -488;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r6,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r6.u32);
	// addi r30,r3,344
	ctx.r30.s64 = ctx.r3.s64 + 344;
	// lwz r5,364(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 364);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x836b63f4
	if (cr6.lt) goto loc_836B63F4;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836B63F4;
	sub_8386D088(ctx, base);
loc_836B63F4:
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r28,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r28.u32);
	// addi r31,r29,316
	ctx.r31.s64 = ctx.r29.s64 + 316;
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// stb r28,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r28.u8);
	// lwz r11,336(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 336);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836b6420
	if (cr6.lt) goto loc_836B6420;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836B6420;
	sub_8386D088(ctx, base);
loc_836B6420:
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// bl 0x82b6a590
	ctx.lr = 0x836B6434;
	sub_82B6A590(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836B643C"))) PPC_WEAK_FUNC(sub_836B643C);
PPC_FUNC_IMPL(__imp__sub_836B643C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836B6440"))) PPC_WEAK_FUNC(sub_836B6440);
PPC_FUNC_IMPL(__imp__sub_836B6440) {
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
	// bl 0x836b63a8
	ctx.lr = 0x836B6460;
	sub_836B63A8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b6480
	if (cr6.eq) goto loc_836B6480;
	// bl 0x82595188
	ctx.lr = 0x836B6470;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x836B6480;
	sub_825952B8(ctx, base);
loc_836B6480:
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

__attribute__((alias("__imp__sub_836B649C"))) PPC_WEAK_FUNC(sub_836B649C);
PPC_FUNC_IMPL(__imp__sub_836B649C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836B64A0"))) PPC_WEAK_FUNC(sub_836B64A0);
PPC_FUNC_IMPL(__imp__sub_836B64A0) {
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
	// bl 0x82eaf8d8
	ctx.lr = 0x836B64B8;
	sub_82EAF8D8(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r4,r11,-688
	ctx.r4.s64 = ctx.r11.s64 + -688;
	// li r5,20
	ctx.r5.s64 = 20;
	// bl 0x824208c8
	ctx.lr = 0x836B64CC;
	sub_824208C8(ctx, base);
	// lis r7,-32216
	ctx.r7.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// addi r3,r7,-424
	ctx.r3.s64 = ctx.r7.s64 + -424;
	// addi r6,r10,-440
	ctx.r6.s64 = ctx.r10.s64 + -440;
	// addi r5,r9,-452
	ctx.r5.s64 = ctx.r9.s64 + -452;
	// stw r3,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r3.u32);
	// addi r4,r8,-456
	ctx.r4.s64 = ctx.r8.s64 + -456;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// stw r5,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r4.u32);
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

__attribute__((alias("__imp__sub_836B6514"))) PPC_WEAK_FUNC(sub_836B6514);
PPC_FUNC_IMPL(__imp__sub_836B6514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836B6518"))) PPC_WEAK_FUNC(sub_836B6518);
PPC_FUNC_IMPL(__imp__sub_836B6518) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x836b6530
	sub_836B6530(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836B6520"))) PPC_WEAK_FUNC(sub_836B6520);
PPC_FUNC_IMPL(__imp__sub_836B6520) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-312
	ctx.r3.s64 = ctx.r3.s64 + -312;
	// b 0x836b6530
	sub_836B6530(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836B6528"))) PPC_WEAK_FUNC(sub_836B6528);
PPC_FUNC_IMPL(__imp__sub_836B6528) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x836b6530
	sub_836B6530(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836B6530"))) PPC_WEAK_FUNC(sub_836B6530);
PPC_FUNC_IMPL(__imp__sub_836B6530) {
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
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r7,r11,-440
	ctx.r7.s64 = ctx.r11.s64 + -440;
	// addi r6,r10,-452
	ctx.r6.s64 = ctx.r10.s64 + -452;
	// addi r5,r9,-456
	ctx.r5.s64 = ctx.r9.s64 + -456;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r8,-424
	ctx.r4.s64 = ctx.r8.s64 + -424;
	// stw r6,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r6.u32);
	// stw r5,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r4.u32);
	// bl 0x82eaf978
	ctx.lr = 0x836B6580;
	sub_82EAF978(ctx, base);
	// clrlwi r3,r30,31
	ctx.r3.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x836b65a0
	if (cr6.eq) goto loc_836B65A0;
	// bl 0x82595188
	ctx.lr = 0x836B6590;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x836B65A0;
	sub_825952B8(ctx, base);
loc_836B65A0:
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

__attribute__((alias("__imp__sub_836B65BC"))) PPC_WEAK_FUNC(sub_836B65BC);
PPC_FUNC_IMPL(__imp__sub_836B65BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836B65C0"))) PPC_WEAK_FUNC(sub_836B65C0);
PPC_FUNC_IMPL(__imp__sub_836B65C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x836B65C8;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r27,r3,176
	ctx.r27.s64 = ctx.r3.s64 + 176;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82535130
	ctx.lr = 0x836B65DC;
	sub_82535130(ctx, base);
	// lwz r11,240(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 240);
	// addi r4,r28,220
	ctx.r4.s64 = ctx.r28.s64 + 220;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836b65f0
	if (cr6.lt) goto loc_836B65F0;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836B65F0:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825346c8
	ctx.lr = 0x836B65F8;
	sub_825346C8(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r31,r11,-164
	ctx.r31.s64 = ctx.r11.s64 + -164;
	// addi r4,r31,-112
	ctx.r4.s64 = ctx.r31.s64 + -112;
	// bl 0x82536d88
	ctx.lr = 0x836B660C;
	sub_82536D88(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x825369e8
	ctx.lr = 0x836B6614;
	sub_825369E8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535aa0
	ctx.lr = 0x836B661C;
	sub_82535AA0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,248(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 248);
	// bl 0x82534640
	ctx.lr = 0x836B6628;
	sub_82534640(ctx, base);
	// addi r4,r31,-104
	ctx.r4.s64 = ctx.r31.s64 + -104;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82536d88
	ctx.lr = 0x836B6634;
	sub_82536D88(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x825369e8
	ctx.lr = 0x836B663C;
	sub_825369E8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535aa0
	ctx.lr = 0x836B6644;
	sub_82535AA0(ctx, base);
	// lwz r10,336(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 336);
	// addi r11,r28,316
	ctx.r11.s64 = ctx.r28.s64 + 316;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836b6658
	if (cr6.lt) goto loc_836B6658;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_836B6658:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825346c8
	ctx.lr = 0x836B6664;
	sub_825346C8(ctx, base);
	// addi r4,r31,-96
	ctx.r4.s64 = ctx.r31.s64 + -96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82536d88
	ctx.lr = 0x836B6670;
	sub_82536D88(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x825369e8
	ctx.lr = 0x836B6678;
	sub_825369E8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535aa0
	ctx.lr = 0x836B6680;
	sub_82535AA0(ctx, base);
	// lwz r10,364(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 364);
	// addi r11,r28,344
	ctx.r11.s64 = ctx.r28.s64 + 344;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836b6694
	if (cr6.lt) goto loc_836B6694;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_836B6694:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825346c8
	ctx.lr = 0x836B66A0;
	sub_825346C8(ctx, base);
	// addi r4,r31,-88
	ctx.r4.s64 = ctx.r31.s64 + -88;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82536d88
	ctx.lr = 0x836B66AC;
	sub_82536D88(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x825369e8
	ctx.lr = 0x836B66B4;
	sub_825369E8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535aa0
	ctx.lr = 0x836B66BC;
	sub_82535AA0(ctx, base);
	// lwz r10,392(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 392);
	// addi r11,r28,372
	ctx.r11.s64 = ctx.r28.s64 + 372;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836b66d0
	if (cr6.lt) goto loc_836B66D0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_836B66D0:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825346c8
	ctx.lr = 0x836B66DC;
	sub_825346C8(ctx, base);
	// addi r4,r31,-80
	ctx.r4.s64 = ctx.r31.s64 + -80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82536d88
	ctx.lr = 0x836B66E8;
	sub_82536D88(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x825369e8
	ctx.lr = 0x836B66F0;
	sub_825369E8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535aa0
	ctx.lr = 0x836B66F8;
	sub_82535AA0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,400(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 400);
	// bl 0x82534640
	ctx.lr = 0x836B6704;
	sub_82534640(ctx, base);
	// addi r4,r31,-60
	ctx.r4.s64 = ctx.r31.s64 + -60;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82536d88
	ctx.lr = 0x836B6710;
	sub_82536D88(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x825369e8
	ctx.lr = 0x836B6718;
	sub_825369E8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535aa0
	ctx.lr = 0x836B6720;
	sub_82535AA0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,404(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 404);
	// bl 0x82534640
	ctx.lr = 0x836B672C;
	sub_82534640(ctx, base);
	// addi r4,r31,-48
	ctx.r4.s64 = ctx.r31.s64 + -48;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82536d88
	ctx.lr = 0x836B6738;
	sub_82536D88(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x825369e8
	ctx.lr = 0x836B6740;
	sub_825369E8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535aa0
	ctx.lr = 0x836B6748;
	sub_82535AA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825359d8
	ctx.lr = 0x836B6754;
	sub_825359D8(ctx, base);
	// lwz r10,428(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 428);
	// addi r11,r28,408
	ctx.r11.s64 = ctx.r28.s64 + 408;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836b6768
	if (cr6.lt) goto loc_836B6768;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_836B6768:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825346c8
	ctx.lr = 0x836B6774;
	sub_825346C8(ctx, base);
	// addi r4,r31,-44
	ctx.r4.s64 = ctx.r31.s64 + -44;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82536d88
	ctx.lr = 0x836B6780;
	sub_82536D88(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x825369e8
	ctx.lr = 0x836B6788;
	sub_825369E8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535aa0
	ctx.lr = 0x836B6790;
	sub_82535AA0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,436(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 436);
	// bl 0x82534660
	ctx.lr = 0x836B679C;
	sub_82534660(ctx, base);
	// addi r4,r31,-36
	ctx.r4.s64 = ctx.r31.s64 + -36;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82536d88
	ctx.lr = 0x836B67A8;
	sub_82536D88(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x825369e8
	ctx.lr = 0x836B67B0;
	sub_825369E8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535aa0
	ctx.lr = 0x836B67B8;
	sub_82535AA0(ctx, base);
	// lwz r11,440(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 440);
	// lwz r10,448(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 448);
	// addi r29,r28,440
	ctx.r29.s64 = ctx.r28.s64 + 440;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r30,r10
	ctx.r30.s64 = ctx.r10.s32;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// beq cr6,0x836b681c
	if (cr6.eq) goto loc_836B681C;
loc_836B67D8:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82534660
	ctx.lr = 0x836B67E4;
	sub_82534660(ctx, base);
	// addi r4,r31,-28
	ctx.r4.s64 = ctx.r31.s64 + -28;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82536d88
	ctx.lr = 0x836B67F0;
	sub_82536D88(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82536d38
	ctx.lr = 0x836B67F8;
	sub_82536D38(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535aa0
	ctx.lr = 0x836B6800;
	sub_82535AA0(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// bne cr6,0x836b67d8
	if (!cr6.eq) goto loc_836B67D8;
loc_836B681C:
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82536d88
	ctx.lr = 0x836B6828;
	sub_82536D88(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x825369e8
	ctx.lr = 0x836B6830;
	sub_825369E8(ctx, base);
	// lwz r10,476(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 476);
	// addi r11,r28,456
	ctx.r11.s64 = ctx.r28.s64 + 456;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836b6844
	if (cr6.lt) goto loc_836B6844;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_836B6844:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825346c8
	ctx.lr = 0x836B6850;
	sub_825346C8(ctx, base);
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82536d88
	ctx.lr = 0x836B685C;
	sub_82536D88(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x825369e8
	ctx.lr = 0x836B6864;
	sub_825369E8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535aa0
	ctx.lr = 0x836B686C;
	sub_82535AA0(ctx, base);
	// lwz r10,504(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 504);
	// addi r11,r28,484
	ctx.r11.s64 = ctx.r28.s64 + 484;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836b6880
	if (cr6.lt) goto loc_836B6880;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_836B6880:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825346c8
	ctx.lr = 0x836B688C;
	sub_825346C8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82536d88
	ctx.lr = 0x836B6898;
	sub_82536D88(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x825369e8
	ctx.lr = 0x836B68A0;
	sub_825369E8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82535aa0
	ctx.lr = 0x836B68A8;
	sub_82535AA0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82535aa0
	ctx.lr = 0x836B68B0;
	sub_82535AA0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836B68BC"))) PPC_WEAK_FUNC(sub_836B68BC);
PPC_FUNC_IMPL(__imp__sub_836B68BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836B68C0"))) PPC_WEAK_FUNC(sub_836B68C0);
PPC_FUNC_IMPL(__imp__sub_836B68C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x836B68C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r30,r3,176
	ctx.r30.s64 = ctx.r3.s64 + 176;
	// addi r29,r11,76
	ctx.r29.s64 = ctx.r11.s64 + 76;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r29,-24
	ctx.r4.s64 = ctx.r29.s64 + -24;
	// bl 0x82536d88
	ctx.lr = 0x836B68E8;
	sub_82536D88(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x836B68EC;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_836B68F4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836b68f4
	if (!cr6.eq) goto loc_836B68F4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836B6918;
	sub_824208C8(ctx, base);
	// addi r4,r29,-16
	ctx.r4.s64 = ctx.r29.s64 + -16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82536d88
	ctx.lr = 0x836B6924;
	sub_82536D88(ctx, base);
	// bl 0x825347e8
	ctx.lr = 0x836B6928;
	sub_825347E8(ctx, base);
	// stw r3,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r3.u32);
	// addi r4,r29,-8
	ctx.r4.s64 = ctx.r29.s64 + -8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82536d88
	ctx.lr = 0x836B6938;
	sub_82536D88(ctx, base);
	// bl 0x82534a18
	ctx.lr = 0x836B693C;
	sub_82534A18(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x836b6964
	if (cr6.eq) goto loc_836B6964;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82536d88
	ctx.lr = 0x836B6954;
	sub_82536D88(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x836B6958;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// bl 0x83601998
	ctx.lr = 0x836B6964;
	sub_83601998(ctx, base);
loc_836B6964:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836B6970"))) PPC_WEAK_FUNC(sub_836B6970);
PPC_FUNC_IMPL(__imp__sub_836B6970) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x836B6978;
	__savegprlr_25(ctx, base);
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82a8c428
	ctx.lr = 0x836B6994;
	sub_82A8C428(ctx, base);
	// lwz r10,240(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 240);
	// addi r11,r28,220
	ctx.r11.s64 = ctx.r28.s64 + 220;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836b69ac
	if (cr6.lt) goto loc_836B69AC;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x836b69b0
	goto loc_836B69B0;
loc_836B69AC:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_836B69B0:
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// addi r29,r11,36
	ctx.r29.s64 = ctx.r11.s64 + 36;
	// addi r4,r29,-180
	ctx.r4.s64 = ctx.r29.s64 + -180;
	// bl 0x82473550
	ctx.lr = 0x836B69C4;
	sub_82473550(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82473550
	ctx.lr = 0x836B69CC;
	sub_82473550(ctx, base);
	// addi r4,r29,-184
	ctx.r4.s64 = ctx.r29.s64 + -184;
	// bl 0x82473550
	ctx.lr = 0x836B69D4;
	sub_82473550(ctx, base);
	// addi r4,r29,-168
	ctx.r4.s64 = ctx.r29.s64 + -168;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// lwz r31,248(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 248);
	// bl 0x82473550
	ctx.lr = 0x836B69E4;
	sub_82473550(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82474170
	ctx.lr = 0x836B69EC;
	sub_82474170(ctx, base);
	// addi r4,r29,-172
	ctx.r4.s64 = ctx.r29.s64 + -172;
	// bl 0x82473550
	ctx.lr = 0x836B69F4;
	sub_82473550(ctx, base);
	// addi r4,r28,316
	ctx.r4.s64 = ctx.r28.s64 + 316;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x83734458
	ctx.lr = 0x836B6A00;
	sub_83734458(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836b6a14
	if (cr6.lt) goto loc_836B6A14;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x836b6a18
	goto loc_836B6A18;
loc_836B6A14:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_836B6A18:
	// addi r4,r29,-156
	ctx.r4.s64 = ctx.r29.s64 + -156;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82473550
	ctx.lr = 0x836B6A24;
	sub_82473550(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82473550
	ctx.lr = 0x836B6A2C;
	sub_82473550(ctx, base);
	// addi r4,r29,-160
	ctx.r4.s64 = ctx.r29.s64 + -160;
	// bl 0x82473550
	ctx.lr = 0x836B6A34;
	sub_82473550(ctx, base);
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836b6a48
	if (cr6.lt) goto loc_836B6A48;
	// lwz r3,208(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x8386d088
	ctx.lr = 0x836B6A48;
	sub_8386D088(ctx, base);
loc_836B6A48:
	// li r27,0
	ctx.r27.s64 = 0;
	// li r26,15
	ctx.r26.s64 = 15;
	// stw r27,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r27.u32);
	// addi r4,r28,344
	ctx.r4.s64 = ctx.r28.s64 + 344;
	// stw r26,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r26.u32);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// stb r27,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r27.u8);
	// bl 0x83734458
	ctx.lr = 0x836B6A68;
	sub_83734458(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836b6a7c
	if (cr6.lt) goto loc_836B6A7C;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x836b6a80
	goto loc_836B6A80;
loc_836B6A7C:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_836B6A80:
	// addi r4,r29,-140
	ctx.r4.s64 = ctx.r29.s64 + -140;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82473550
	ctx.lr = 0x836B6A8C;
	sub_82473550(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82473550
	ctx.lr = 0x836B6A94;
	sub_82473550(ctx, base);
	// addi r4,r29,-144
	ctx.r4.s64 = ctx.r29.s64 + -144;
	// bl 0x82473550
	ctx.lr = 0x836B6A9C;
	sub_82473550(ctx, base);
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836b6ab0
	if (cr6.lt) goto loc_836B6AB0;
	// lwz r3,272(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// bl 0x8386d088
	ctx.lr = 0x836B6AB0;
	sub_8386D088(ctx, base);
loc_836B6AB0:
	// stw r26,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r26.u32);
	// addi r4,r28,372
	ctx.r4.s64 = ctx.r28.s64 + 372;
	// stw r27,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r27.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r27,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r27.u8);
	// bl 0x83734458
	ctx.lr = 0x836B6AC8;
	sub_83734458(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836b6adc
	if (cr6.lt) goto loc_836B6ADC;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x836b6ae0
	goto loc_836B6AE0;
loc_836B6ADC:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_836B6AE0:
	// addi r4,r29,-128
	ctx.r4.s64 = ctx.r29.s64 + -128;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82473550
	ctx.lr = 0x836B6AEC;
	sub_82473550(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82473550
	ctx.lr = 0x836B6AF4;
	sub_82473550(ctx, base);
	// addi r4,r29,-132
	ctx.r4.s64 = ctx.r29.s64 + -132;
	// bl 0x82473550
	ctx.lr = 0x836B6AFC;
	sub_82473550(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836b6b10
	if (cr6.lt) goto loc_836B6B10;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x8386d088
	ctx.lr = 0x836B6B10;
	sub_8386D088(ctx, base);
loc_836B6B10:
	// stw r26,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r26.u32);
	// addi r4,r29,-104
	ctx.r4.s64 = ctx.r29.s64 + -104;
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// stb r27,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r27.u8);
	// lwz r31,400(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 400);
	// bl 0x82473550
	ctx.lr = 0x836B6B2C;
	sub_82473550(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82474170
	ctx.lr = 0x836B6B34;
	sub_82474170(ctx, base);
	// addi r4,r29,-108
	ctx.r4.s64 = ctx.r29.s64 + -108;
	// bl 0x82473550
	ctx.lr = 0x836B6B3C;
	sub_82473550(ctx, base);
	// addi r4,r29,-88
	ctx.r4.s64 = ctx.r29.s64 + -88;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// lwz r31,404(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 404);
	// bl 0x82473550
	ctx.lr = 0x836B6B4C;
	sub_82473550(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82474170
	ctx.lr = 0x836B6B54;
	sub_82474170(ctx, base);
	// addi r4,r29,-92
	ctx.r4.s64 = ctx.r29.s64 + -92;
	// bl 0x82473550
	ctx.lr = 0x836B6B5C;
	sub_82473550(ctx, base);
	// addi r4,r28,408
	ctx.r4.s64 = ctx.r28.s64 + 408;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x83734458
	ctx.lr = 0x836B6B68;
	sub_83734458(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836b6b7c
	if (cr6.lt) goto loc_836B6B7C;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x836b6b80
	goto loc_836B6B80;
loc_836B6B7C:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_836B6B80:
	// addi r4,r29,-76
	ctx.r4.s64 = ctx.r29.s64 + -76;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82473550
	ctx.lr = 0x836B6B8C;
	sub_82473550(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82473550
	ctx.lr = 0x836B6B94;
	sub_82473550(ctx, base);
	// addi r4,r29,-80
	ctx.r4.s64 = ctx.r29.s64 + -80;
	// bl 0x82473550
	ctx.lr = 0x836B6B9C;
	sub_82473550(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836b6bb0
	if (cr6.lt) goto loc_836B6BB0;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x8386d088
	ctx.lr = 0x836B6BB0;
	sub_8386D088(ctx, base);
loc_836B6BB0:
	// stw r26,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r26.u32);
	// addi r4,r29,-56
	ctx.r4.s64 = ctx.r29.s64 + -56;
	// stw r27,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r27.u32);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// stb r27,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r27.u8);
	// lwz r31,436(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 436);
	// bl 0x82473550
	ctx.lr = 0x836B6BCC;
	sub_82473550(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82474050
	ctx.lr = 0x836B6BD4;
	sub_82474050(ctx, base);
	// addi r4,r29,-60
	ctx.r4.s64 = ctx.r29.s64 + -60;
	// bl 0x82473550
	ctx.lr = 0x836B6BDC;
	sub_82473550(ctx, base);
	// addi r4,r29,-40
	ctx.r4.s64 = ctx.r29.s64 + -40;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82473550
	ctx.lr = 0x836B6BE8;
	sub_82473550(ctx, base);
	// lwz r11,440(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 440);
	// lwz r10,448(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 448);
	// addi r30,r28,440
	ctx.r30.s64 = ctx.r28.s64 + 440;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r31,r10
	ctx.r31.s64 = ctx.r10.s32;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x836b6c54
	if (cr6.eq) goto loc_836B6C54;
loc_836B6C08:
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82474050
	ctx.lr = 0x836B6C14;
	sub_82474050(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x836b6c3c
	if (cr6.eq) goto loc_836B6C3C;
	// addi r4,r29,-20
	ctx.r4.s64 = ctx.r29.s64 + -20;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82473550
	ctx.lr = 0x836B6C3C;
	sub_82473550(ctx, base);
loc_836B6C3C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x836b6c08
	if (!cr6.eq) goto loc_836B6C08;
loc_836B6C54:
	// addi r4,r29,-16
	ctx.r4.s64 = ctx.r29.s64 + -16;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82473550
	ctx.lr = 0x836B6C60;
	sub_82473550(ctx, base);
	// addi r4,r28,456
	ctx.r4.s64 = ctx.r28.s64 + 456;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x83734458
	ctx.lr = 0x836B6C6C;
	sub_83734458(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836b6c80
	if (cr6.lt) goto loc_836B6C80;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x836b6c84
	goto loc_836B6C84;
loc_836B6C80:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_836B6C84:
	// addi r4,r29,-8
	ctx.r4.s64 = ctx.r29.s64 + -8;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82473550
	ctx.lr = 0x836B6C90;
	sub_82473550(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82473550
	ctx.lr = 0x836B6C98;
	sub_82473550(ctx, base);
	// addi r4,r29,-12
	ctx.r4.s64 = ctx.r29.s64 + -12;
	// bl 0x82473550
	ctx.lr = 0x836B6CA0;
	sub_82473550(ctx, base);
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836b6cb4
	if (cr6.lt) goto loc_836B6CB4;
	// lwz r3,176(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x8386d088
	ctx.lr = 0x836B6CB4;
	sub_8386D088(ctx, base);
loc_836B6CB4:
	// stw r26,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r26.u32);
	// addi r4,r28,484
	ctx.r4.s64 = ctx.r28.s64 + 484;
	// stw r27,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r27.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stb r27,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r27.u8);
	// bl 0x83734458
	ctx.lr = 0x836B6CCC;
	sub_83734458(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836b6ce0
	if (cr6.lt) goto loc_836B6CE0;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x836b6ce4
	goto loc_836B6CE4;
loc_836B6CE0:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_836B6CE4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82473550
	ctx.lr = 0x836B6CF0;
	sub_82473550(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82473550
	ctx.lr = 0x836B6CF8;
	sub_82473550(ctx, base);
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836b6d0c
	if (cr6.lt) goto loc_836B6D0C;
	// lwz r3,240(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x8386d088
	ctx.lr = 0x836B6D0C;
	sub_8386D088(ctx, base);
loc_836B6D0C:
	// stw r26,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r26.u32);
	// addi r4,r1,328
	ctx.r4.s64 = ctx.r1.s64 + 328;
	// stw r27,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r27.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r27,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r27.u8);
	// bl 0x82a79bf8
	ctx.lr = 0x836B6D24;
	sub_82A79BF8(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x836b6d38
	if (!cr6.lt) goto loc_836B6D38;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_836B6D38:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836B6D3C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836b6d3c
	if (!cr6.eq) goto loc_836B6D3C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836B6D60;
	sub_824208C8(ctx, base);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836b6d74
	if (cr6.lt) goto loc_836B6D74;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82416268
	ctx.lr = 0x836B6D74;
	sub_82416268(ctx, base);
loc_836B6D74:
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// stb r27,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r27.u8);
	// bl 0x82a79160
	ctx.lr = 0x836B6D88;
	sub_82A79160(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// addi r10,r11,15320
	ctx.r10.s64 = ctx.r11.s64 + 15320;
	// stw r10,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r10.u32);
	// bl 0x831ccf00
	ctx.lr = 0x836B6D9C;
	sub_831CCF00(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836B6DA8"))) PPC_WEAK_FUNC(sub_836B6DA8);
PPC_FUNC_IMPL(__imp__sub_836B6DA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x836B6DB0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d95768
	ctx.lr = 0x836B6DBC;
	sub_82D95768(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r29,r11,-368
	ctx.r29.s64 = ctx.r11.s64 + -368;
	// li r5,27
	ctx.r5.s64 = 27;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824208c8
	ctx.lr = 0x836B6DD4;
	sub_824208C8(ctx, base);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// addi r7,r10,184
	ctx.r7.s64 = ctx.r10.s64 + 184;
	// addi r5,r8,168
	ctx.r5.s64 = ctx.r8.s64 + 168;
	// addi r6,r9,172
	ctx.r6.s64 = ctx.r9.s64 + 172;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r5,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r5.u32);
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r6,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r6.u32);
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// stw r28,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r28.u32);
	// addi r4,r29,28
	ctx.r4.s64 = ctx.r29.s64 + 28;
	// stb r30,316(r31)
	PPC_STORE_U8(ctx.r31.u32 + 316, ctx.r30.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// bl 0x824208c8
	ctx.lr = 0x836B6E1C;
	sub_824208C8(ctx, base);
	// stw r28,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r28.u32);
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// stb r30,344(r31)
	PPC_STORE_U8(ctx.r31.u32 + 344, ctx.r30.u8);
	// addi r4,r29,36
	ctx.r4.s64 = ctx.r29.s64 + 36;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836B6E38;
	sub_824208C8(ctx, base);
	// stw r28,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r28.u32);
	// stw r30,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r30.u32);
	// addi r3,r31,372
	ctx.r3.s64 = ctx.r31.s64 + 372;
	// stb r30,372(r31)
	PPC_STORE_U8(ctx.r31.u32 + 372, ctx.r30.u8);
	// addi r4,r29,52
	ctx.r4.s64 = ctx.r29.s64 + 52;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836B6E54;
	sub_824208C8(ctx, base);
	// stw r30,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r30.u32);
	// stw r30,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r30.u32);
	// addi r11,r31,408
	ctx.r11.s64 = ctx.r31.s64 + 408;
	// stw r28,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r28.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r30,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r30.u32);
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// stb r30,408(r31)
	PPC_STORE_U8(ctx.r31.u32 + 408, ctx.r30.u8);
	// stw r30,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r30.u32);
	// stw r30,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r30.u32);
	// stw r30,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r30.u32);
	// std r30,448(r31)
	PPC_STORE_U64(ctx.r31.u32 + 448, ctx.r30.u64);
	// bl 0x82423930
	ctx.lr = 0x836B6E88;
	sub_82423930(ctx, base);
	// stw r28,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r28.u32);
	// stw r30,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r30.u32);
	// addi r3,r31,456
	ctx.r3.s64 = ctx.r31.s64 + 456;
	// stb r30,456(r31)
	PPC_STORE_U8(ctx.r31.u32 + 456, ctx.r30.u8);
	// addi r4,r29,68
	ctx.r4.s64 = ctx.r29.s64 + 68;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836B6EA4;
	sub_824208C8(ctx, base);
	// stw r28,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r28.u32);
	// stw r30,500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 500, ctx.r30.u32);
	// addi r3,r31,484
	ctx.r3.s64 = ctx.r31.s64 + 484;
	// stb r30,484(r31)
	PPC_STORE_U8(ctx.r31.u32 + 484, ctx.r30.u8);
	// addi r4,r29,84
	ctx.r4.s64 = ctx.r29.s64 + 84;
	// li r5,7
	ctx.r5.s64 = 7;
	// bl 0x824208c8
	ctx.lr = 0x836B6EC0;
	sub_824208C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836B6ECC"))) PPC_WEAK_FUNC(sub_836B6ECC);
PPC_FUNC_IMPL(__imp__sub_836B6ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836B6ED0"))) PPC_WEAK_FUNC(sub_836B6ED0);
PPC_FUNC_IMPL(__imp__sub_836B6ED0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x836b7010
	sub_836B7010(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836B6ED8"))) PPC_WEAK_FUNC(sub_836B6ED8);
PPC_FUNC_IMPL(__imp__sub_836B6ED8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x836b7010
	sub_836B7010(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836B6EE0"))) PPC_WEAK_FUNC(sub_836B6EE0);
PPC_FUNC_IMPL(__imp__sub_836B6EE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x836B6EE8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// addi r8,r11,184
	ctx.r8.s64 = ctx.r11.s64 + 184;
	// addi r7,r10,172
	ctx.r7.s64 = ctx.r10.s64 + 172;
	// addi r6,r9,168
	ctx.r6.s64 = ctx.r9.s64 + 168;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r6,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r6.u32);
	// addi r29,r3,484
	ctx.r29.s64 = ctx.r3.s64 + 484;
	// lwz r5,504(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 504);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x836b6f2c
	if (cr6.lt) goto loc_836B6F2C;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836B6F2C;
	sub_8386D088(ctx, base);
loc_836B6F2C:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// addi r28,r30,456
	ctx.r28.s64 = ctx.r30.s64 + 456;
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// lwz r11,476(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 476);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836b6f58
	if (cr6.lt) goto loc_836B6F58;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836B6F58;
	sub_8386D088(ctx, base);
loc_836B6F58:
	// stw r27,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r27.u32);
	// addi r29,r30,408
	ctx.r29.s64 = ctx.r30.s64 + 408;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// addi r3,r29,32
	ctx.r3.s64 = ctx.r29.s64 + 32;
	// bl 0x824238b8
	ctx.lr = 0x836B6F70;
	sub_824238B8(ctx, base);
	// lwz r11,428(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 428);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836b6f84
	if (cr6.lt) goto loc_836B6F84;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836B6F84;
	sub_8386D088(ctx, base);
loc_836B6F84:
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// addi r28,r30,372
	ctx.r28.s64 = ctx.r30.s64 + 372;
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// lwz r11,392(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 392);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836b6fa8
	if (cr6.lt) goto loc_836B6FA8;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836B6FA8;
	sub_8386D088(ctx, base);
loc_836B6FA8:
	// stw r27,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r27.u32);
	// addi r29,r30,344
	ctx.r29.s64 = ctx.r30.s64 + 344;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// lwz r11,364(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 364);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836b6fcc
	if (cr6.lt) goto loc_836B6FCC;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836B6FCC;
	sub_8386D088(ctx, base);
loc_836B6FCC:
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// addi r28,r30,316
	ctx.r28.s64 = ctx.r30.s64 + 316;
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// lwz r11,336(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 336);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836b6ff0
	if (cr6.lt) goto loc_836B6FF0;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836B6FF0;
	sub_8386D088(ctx, base);
loc_836B6FF0:
	// stw r27,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// bl 0x82b6a590
	ctx.lr = 0x836B7004;
	sub_82B6A590(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836B700C"))) PPC_WEAK_FUNC(sub_836B700C);
PPC_FUNC_IMPL(__imp__sub_836B700C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836B7010"))) PPC_WEAK_FUNC(sub_836B7010);
PPC_FUNC_IMPL(__imp__sub_836B7010) {
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
	// bl 0x836b6ee0
	ctx.lr = 0x836B7030;
	sub_836B6EE0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836b7050
	if (cr6.eq) goto loc_836B7050;
	// bl 0x82595188
	ctx.lr = 0x836B7040;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x836B7050;
	sub_825952B8(ctx, base);
loc_836B7050:
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

__attribute__((alias("__imp__sub_836B706C"))) PPC_WEAK_FUNC(sub_836B706C);
PPC_FUNC_IMPL(__imp__sub_836B706C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836B7070"))) PPC_WEAK_FUNC(sub_836B7070);
PPC_FUNC_IMPL(__imp__sub_836B7070) {
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
	// bl 0x82eaf8d8
	ctx.lr = 0x836B7088;
	sub_82EAF8D8(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r4,r11,-368
	ctx.r4.s64 = ctx.r11.s64 + -368;
	// li r5,27
	ctx.r5.s64 = 27;
	// bl 0x824208c8
	ctx.lr = 0x836B709C;
	sub_824208C8(ctx, base);
	// lis r7,-32216
	ctx.r7.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// addi r3,r7,232
	ctx.r3.s64 = ctx.r7.s64 + 232;
	// addi r6,r10,216
	ctx.r6.s64 = ctx.r10.s64 + 216;
	// addi r5,r9,204
	ctx.r5.s64 = ctx.r9.s64 + 204;
	// stw r3,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r3.u32);
	// addi r4,r8,200
	ctx.r4.s64 = ctx.r8.s64 + 200;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// stw r5,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r4.u32);
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

__attribute__((alias("__imp__sub_836B70E4"))) PPC_WEAK_FUNC(sub_836B70E4);
PPC_FUNC_IMPL(__imp__sub_836B70E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836B70E8"))) PPC_WEAK_FUNC(sub_836B70E8);
PPC_FUNC_IMPL(__imp__sub_836B70E8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x836b7100
	sub_836B7100(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836B70F0"))) PPC_WEAK_FUNC(sub_836B70F0);
PPC_FUNC_IMPL(__imp__sub_836B70F0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-312
	ctx.r3.s64 = ctx.r3.s64 + -312;
	// b 0x836b7100
	sub_836B7100(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836B70F8"))) PPC_WEAK_FUNC(sub_836B70F8);
PPC_FUNC_IMPL(__imp__sub_836B70F8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x836b7100
	sub_836B7100(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836B7100"))) PPC_WEAK_FUNC(sub_836B7100);
PPC_FUNC_IMPL(__imp__sub_836B7100) {
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
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r7,r11,216
	ctx.r7.s64 = ctx.r11.s64 + 216;
	// addi r6,r10,204
	ctx.r6.s64 = ctx.r10.s64 + 204;
	// addi r5,r9,200
	ctx.r5.s64 = ctx.r9.s64 + 200;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r8,232
	ctx.r4.s64 = ctx.r8.s64 + 232;
	// stw r6,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r6.u32);
	// stw r5,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r4.u32);
	// bl 0x82eaf978
	ctx.lr = 0x836B7150;
	sub_82EAF978(ctx, base);
	// clrlwi r3,r30,31
	ctx.r3.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x836b7170
	if (cr6.eq) goto loc_836B7170;
	// bl 0x82595188
	ctx.lr = 0x836B7160;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x836B7170;
	sub_825952B8(ctx, base);
loc_836B7170:
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

__attribute__((alias("__imp__sub_836B718C"))) PPC_WEAK_FUNC(sub_836B718C);
PPC_FUNC_IMPL(__imp__sub_836B718C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836B7190"))) PPC_WEAK_FUNC(sub_836B7190);
PPC_FUNC_IMPL(__imp__sub_836B7190) {
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
	// bl 0x83356798
	ctx.lr = 0x836B71AC;
	sub_83356798(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// li r30,29
	ctx.r30.s64 = 29;
	// addi r10,r11,-2884
	ctx.r10.s64 = ctx.r11.s64 + -2884;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r4,512
	ctx.r4.s64 = 512;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x836B71D0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x836b71e0
	if (cr6.eq) goto loc_836B71E0;
	// bl 0x836b6da8
	ctx.lr = 0x836B71DC;
	sub_836B6DA8(ctx, base);
	// b 0x836b71e4
	goto loc_836B71E4;
loc_836B71E0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_836B71E4:
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r4,352
	ctx.r4.s64 = 352;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x836B71FC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x836b7210
	if (cr6.eq) goto loc_836B7210;
	// bl 0x836b7070
	ctx.lr = 0x836B7208;
	sub_836B7070(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x836b7214
	goto loc_836B7214;
loc_836B7210:
	// li r11,0
	ctx.r11.s64 = 0;
loc_836B7214:
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_836B7234"))) PPC_WEAK_FUNC(sub_836B7234);
PPC_FUNC_IMPL(__imp__sub_836B7234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836B7238"))) PPC_WEAK_FUNC(sub_836B7238);
PPC_FUNC_IMPL(__imp__sub_836B7238) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x836B7240;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// addi r10,r11,-2932
	ctx.r10.s64 = ctx.r11.s64 + -2932;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// li r8,72
	ctx.r8.s64 = 72;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8247b7d8
	ctx.lr = 0x836B7284;
	sub_8247B7D8(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// beq cr6,0x836b72ac
	if (cr6.eq) goto loc_836B72AC;
	// lis r4,11
	ctx.r4.s64 = 720896;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x8247b268
	ctx.lr = 0x836B72A4;
	sub_8247B268(ctx, base);
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
loc_836B72AC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

