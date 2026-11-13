#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83675D34"))) PPC_WEAK_FUNC(sub_83675D34);
PPC_FUNC_IMPL(__imp__sub_83675D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83675D38"))) PPC_WEAK_FUNC(sub_83675D38);
PPC_FUNC_IMPL(__imp__sub_83675D38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83675D40;
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
	// bge cr6,0x83675d80
	if (!cr6.lt) goto loc_83675D80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e745e0
	ctx.lr = 0x83675D80;
	sub_82E745E0(ctx, base);
loc_83675D80:
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
	// addi r27,r11,-32392
	ctx.r27.s64 = ctx.r11.s64 + -32392;
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
	ctx.lr = 0x83675DC8;
	sub_82472FC0(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83675DD4;
	sub_82E74C08(ctx, base);
	// lwz r5,308(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x83675de8
	if (cr6.lt) goto loc_83675DE8;
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82416268
	ctx.lr = 0x83675DE8;
	sub_82416268(ctx, base);
loc_83675DE8:
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
	// blt cr6,0x83675e08
	if (cr6.lt) goto loc_83675E08;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83675E08:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
loc_83675E18:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83675e18
	if (!cr6.eq) goto loc_83675E18;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x83675E3C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83675E48;
	sub_82E74C08(ctx, base);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83675e5c
	if (cr6.lt) goto loc_83675E5C;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x83675E5C;
	sub_82416268(ctx, base);
loc_83675E5C:
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
	ctx.lr = 0x83675E84;
	sub_82472FC0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83675E90;
	sub_82E74C08(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83675ea4
	if (cr6.lt) goto loc_83675EA4;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x83675EA4;
	sub_82416268(ctx, base);
loc_83675EA4:
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
	ctx.lr = 0x83675EBC;
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
	ctx.lr = 0x83675ED8;
	sub_82472FC0(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83675EE4;
	sub_82E74C08(ctx, base);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83675ef8
	if (cr6.lt) goto loc_83675EF8;
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82416268
	ctx.lr = 0x83675EF8;
	sub_82416268(ctx, base);
loc_83675EF8:
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
	// blt cr6,0x83675f18
	if (cr6.lt) goto loc_83675F18;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83675F18:
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
loc_83675F28:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83675f28
	if (!cr6.eq) goto loc_83675F28;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x83675F4C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83675F58;
	sub_82E74C08(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83675f6c
	if (cr6.lt) goto loc_83675F6C;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x83675F6C;
	sub_82416268(ctx, base);
loc_83675F6C:
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
	ctx.lr = 0x83675F94;
	sub_82472FC0(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83675FA0;
	sub_82E74C08(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83675fb4
	if (cr6.lt) goto loc_83675FB4;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82416268
	ctx.lr = 0x83675FB4;
	sub_82416268(ctx, base);
loc_83675FB4:
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
	// blt cr6,0x83675fd4
	if (cr6.lt) goto loc_83675FD4;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83675FD4:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
loc_83675FE4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83675fe4
	if (!cr6.eq) goto loc_83675FE4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x83676008;
	sub_82472FC0(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83676014;
	sub_82E74C08(ctx, base);
	// lwz r10,276(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83676028
	if (cr6.lt) goto loc_83676028;
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x82416268
	ctx.lr = 0x83676028;
	sub_82416268(ctx, base);
loc_83676028:
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
	ctx.lr = 0x83676050;
	sub_82472FC0(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367605C;
	sub_82E74C08(ctx, base);
	// lwz r11,340(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83676070
	if (cr6.lt) goto loc_83676070;
	// lwz r3,320(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x82416268
	ctx.lr = 0x83676070;
	sub_82416268(ctx, base);
loc_83676070:
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
	ctx.lr = 0x83676088;
	sub_82E746C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83676094"))) PPC_WEAK_FUNC(sub_83676094);
PPC_FUNC_IMPL(__imp__sub_83676094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83676098"))) PPC_WEAK_FUNC(sub_83676098);
PPC_FUNC_IMPL(__imp__sub_83676098) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x836760A0;
	__savegprlr_14(ctx, base);
	// stwu r1,-1424(r1)
	ea = -1424 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,640(r1)
	PPC_STORE_U32(ctx.r1.u32 + 640, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,656(r1)
	PPC_STORE_U32(ctx.r1.u32 + 656, ctx.r30.u32);
	// stw r3,1444(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1444, ctx.r3.u32);
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// bl 0x83691bb8
	ctx.lr = 0x836760CC;
	sub_83691BB8(ctx, base);
	// lwz r10,648(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 648);
	// lwz r11,652(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 652);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r19,r11
	ctx.r19.u64 = ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r10,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r10.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x83677180
	if (!cr6.lt) goto loc_83677180;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r8,11
	ctx.r8.s64 = 720896;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// li r26,15
	ctx.r26.s64 = 15;
	// li r15,8
	ctx.r15.s64 = 8;
	// li r16,160
	ctx.r16.s64 = 160;
	// ori r14,r8,1
	ctx.r14.u64 = ctx.r8.u64 | 1;
	// addi r28,r11,-31916
	ctx.r28.s64 = ctx.r11.s64 + -31916;
	// addi r17,r10,8980
	ctx.r17.s64 = ctx.r10.s64 + 8980;
	// addi r18,r9,-31820
	ctx.r18.s64 = ctx.r9.s64 + -31820;
	// b 0x83676120
	goto loc_83676120;
loc_8367611C:
	// lwz r31,1444(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1444);
loc_83676120:
	// stw r26,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r26.u32);
	// addi r11,r1,848
	ctx.r11.s64 = ctx.r1.s64 + 848;
	// stw r30,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r30.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stb r30,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r30.u8);
	// ld r10,8(r19)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r19.u32 + 8);
	// ld r9,0(r19)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r19.u32 + 0);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// lwz r5,856(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 856);
	// lwz r4,860(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 860);
	// bl 0x82472fc0
	ctx.lr = 0x83676150;
	sub_82472FC0(ctx, base);
	// addi r6,r28,-472
	ctx.r6.s64 = ctx.r28.s64 + -472;
	// lwz r5,208(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x827a8810
	ctx.lr = 0x83676168;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83676200
	if (!cr6.eq) goto loc_83676200;
	// stb r30,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r30.u8);
	// addi r11,r1,800
	ctx.r11.s64 = ctx.r1.s64 + 800;
	// stw r26,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r26.u32);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// stw r30,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r30.u32);
	// addi r10,r19,16
	ctx.r10.s64 = ctx.r19.s64 + 16;
	// ld r8,16(r19)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r19.u32 + 16);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// ld r9,24(r19)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r19.u32 + 24);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r4,812(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 812);
	// lwz r5,808(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 808);
	// bl 0x82472fc0
	ctx.lr = 0x836761A4;
	sub_82472FC0(ctx, base);
	// lwz r7,340(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r4,320(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x836761b8
	if (!cr6.lt) goto loc_836761B8;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
loc_836761B8:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836761BC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836761bc
	if (!cr6.eq) goto loc_836761BC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836761E0;
	sub_824208C8(ctx, base);
	// lwz r10,340(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836761f4
	if (cr6.lt) goto loc_836761F4;
	// lwz r3,320(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x82416268
	ctx.lr = 0x836761F4;
	sub_82416268(ctx, base);
loc_836761F4:
	// stw r26,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r26.u32);
	// stw r30,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r30.u32);
	// stb r30,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r30.u8);
loc_83676200:
	// addi r6,r28,-464
	ctx.r6.s64 = ctx.r28.s64 + -464;
	// lwz r5,208(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x827a8810
	ctx.lr = 0x83676218;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83676258
	if (!cr6.eq) goto loc_83676258;
	// ld r9,24(r19)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r19.u32 + 24);
	// addi r10,r1,832
	ctx.r10.s64 = ctx.r1.s64 + 832;
	// ld r11,16(r19)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r19.u32 + 16);
	// addi r8,r19,16
	ctx.r8.s64 = ctx.r19.s64 + 16;
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// lwz r7,832(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 832);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x83676250
	if (!cr6.eq) goto loc_83676250;
	// ld r11,840(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 840);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83676254
	goto loc_83676254;
loc_83676250:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_83676254:
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_83676258:
	// addi r6,r28,-456
	ctx.r6.s64 = ctx.r28.s64 + -456;
	// lwz r5,208(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x827a8810
	ctx.lr = 0x83676270;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83676308
	if (!cr6.eq) goto loc_83676308;
	// stw r26,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r26.u32);
	// addi r11,r1,864
	ctx.r11.s64 = ctx.r1.s64 + 864;
	// stw r30,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r30.u32);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// stb r30,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r30.u8);
	// addi r10,r19,16
	ctx.r10.s64 = ctx.r19.s64 + 16;
	// ld r8,24(r19)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r19.u32 + 24);
	// ld r9,16(r19)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r19.u32 + 16);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r4,876(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 876);
	// lwz r5,872(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 872);
	// bl 0x82472fc0
	ctx.lr = 0x836762AC;
	sub_82472FC0(ctx, base);
	// lwz r7,308(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// lwz r4,288(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x836762c0
	if (!cr6.lt) goto loc_836762C0;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
loc_836762C0:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836762C4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836762c4
	if (!cr6.eq) goto loc_836762C4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,116
	ctx.r3.s64 = ctx.r31.s64 + 116;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836762E8;
	sub_824208C8(ctx, base);
	// lwz r10,308(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836762fc
	if (cr6.lt) goto loc_836762FC;
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82416268
	ctx.lr = 0x836762FC;
	sub_82416268(ctx, base);
loc_836762FC:
	// stw r26,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r26.u32);
	// stw r30,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r30.u32);
	// stb r30,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r30.u8);
loc_83676308:
	// addi r6,r28,-448
	ctx.r6.s64 = ctx.r28.s64 + -448;
	// lwz r5,208(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// li r7,18
	ctx.r7.s64 = 18;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x827a8810
	ctx.lr = 0x83676320;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83677150
	if (!cr6.eq) goto loc_83677150;
	// lwz r11,1444(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1444);
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// stw r18,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r18.u32);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// addi r24,r11,152
	ctx.r24.s64 = ctx.r11.s64 + 152;
	// stw r15,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r15.u32);
	// stw r16,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r16.u32);
	// addi r23,r24,8
	ctx.r23.s64 = ctx.r24.s64 + 8;
	// stw r24,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r24.u32);
	// addi r22,r24,4
	ctx.r22.s64 = ctx.r24.s64 + 4;
	// stw r23,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r23.u32);
	// stw r22,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r22.u32);
	// bl 0x8247b7d8
	ctx.lr = 0x8367635C;
	sub_8247B7D8(ctx, base);
	// lwz r3,8(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// stw r30,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r30.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8367637c
	if (cr6.eq) goto loc_8367637C;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// bl 0x8247b268
	ctx.lr = 0x83676374;
	sub_8247B268(ctx, base);
	// stw r30,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r30.u32);
	// stw r30,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r30.u32);
loc_8367637C:
	// stw r17,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r17.u32);
	// lwz r11,28(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28);
	// lwz r10,24(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 24);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r20,r10,r11
	ctx.r20.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r21,r11
	ctx.r21.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r20
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r20.u32, xer);
	// bge cr6,0x83677150
	if (!cr6.lt) goto loc_83677150;
loc_8367639C:
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x83675c58
	ctx.lr = 0x836763A4;
	sub_83675C58(ctx, base);
	// stw r30,576(r1)
	PPC_STORE_U32(ctx.r1.u32 + 576, ctx.r30.u32);
	// stw r30,592(r1)
	PPC_STORE_U32(ctx.r1.u32 + 592, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// lwz r5,8(r21)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// lwz r4,12(r21)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r21.u32 + 12);
	// bl 0x83691bb8
	ctx.lr = 0x836763C0;
	sub_83691BB8(ctx, base);
	// lwz r10,584(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 584);
	// lwz r11,588(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 588);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// add r25,r10,r11
	ctx.r25.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r25
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, xer);
	// bge cr6,0x83676ff0
	if (!cr6.lt) goto loc_83676FF0;
loc_836763DC:
	// stw r26,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r26.u32);
	// addi r11,r1,896
	ctx.r11.s64 = ctx.r1.s64 + 896;
	// stw r30,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r30.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stb r30,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r30.u8);
	// ld r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r27.u32 + 8);
	// ld r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r27.u32 + 0);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// lwz r5,904(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 904);
	// lwz r4,908(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 908);
	// bl 0x82472fc0
	ctx.lr = 0x8367640C;
	sub_82472FC0(ctx, base);
	// addi r6,r28,-428
	ctx.r6.s64 = ctx.r28.s64 + -428;
	// lwz r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x827a8810
	ctx.lr = 0x83676424;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83676464
	if (!cr6.eq) goto loc_83676464;
	// ld r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r27.u32 + 16);
	// addi r10,r1,928
	ctx.r10.s64 = ctx.r1.s64 + 928;
	// ld r9,24(r27)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r27.u32 + 24);
	// addi r8,r27,16
	ctx.r8.s64 = ctx.r27.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,928(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 928);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x8367645c
	if (!cr6.eq) goto loc_8367645C;
	// ld r11,936(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 936);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83676460
	goto loc_83676460;
loc_8367645C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_83676460:
	// stw r11,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r11.u32);
loc_83676464:
	// addi r6,r28,-416
	ctx.r6.s64 = ctx.r28.s64 + -416;
	// lwz r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// li r7,14
	ctx.r7.s64 = 14;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x827a8810
	ctx.lr = 0x8367647C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836764bc
	if (!cr6.eq) goto loc_836764BC;
	// ld r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r27.u32 + 16);
	// addi r10,r1,960
	ctx.r10.s64 = ctx.r1.s64 + 960;
	// ld r9,24(r27)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r27.u32 + 24);
	// addi r8,r27,16
	ctx.r8.s64 = ctx.r27.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,960(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 960);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x836764b4
	if (!cr6.eq) goto loc_836764B4;
	// ld r11,968(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 968);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836764b8
	goto loc_836764B8;
loc_836764B4:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_836764B8:
	// stw r11,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r11.u32);
loc_836764BC:
	// addi r6,r28,-400
	ctx.r6.s64 = ctx.r28.s64 + -400;
	// lwz r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// li r7,10
	ctx.r7.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x827a8810
	ctx.lr = 0x836764D4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8367656c
	if (!cr6.eq) goto loc_8367656C;
	// stw r26,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r26.u32);
	// addi r11,r1,992
	ctx.r11.s64 = ctx.r1.s64 + 992;
	// stw r30,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r30.u32);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// stb r30,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r30.u8);
	// addi r10,r27,16
	ctx.r10.s64 = ctx.r27.s64 + 16;
	// ld r8,24(r27)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r27.u32 + 24);
	// ld r9,16(r27)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r27.u32 + 16);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// lwz r4,1004(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1004);
	// lwz r5,1000(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1000);
	// bl 0x82472fc0
	ctx.lr = 0x83676510;
	sub_82472FC0(ctx, base);
	// lwz r7,276(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r4,256(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x83676524
	if (!cr6.lt) goto loc_83676524;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
loc_83676524:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83676528:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83676528
	if (!cr6.eq) goto loc_83676528;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,424
	ctx.r3.s64 = ctx.r1.s64 + 424;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x8367654C;
	sub_824208C8(ctx, base);
	// lwz r10,276(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83676560
	if (cr6.lt) goto loc_83676560;
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x82416268
	ctx.lr = 0x83676560;
	sub_82416268(ctx, base);
loc_83676560:
	// stw r26,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r26.u32);
	// stw r30,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r30.u32);
	// stb r30,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r30.u8);
loc_8367656C:
	// addi r6,r28,-388
	ctx.r6.s64 = ctx.r28.s64 + -388;
	// lwz r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// li r7,14
	ctx.r7.s64 = 14;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x827a8810
	ctx.lr = 0x83676584;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8367661c
	if (!cr6.eq) goto loc_8367661C;
	// stw r26,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r26.u32);
	// addi r11,r1,1024
	ctx.r11.s64 = ctx.r1.s64 + 1024;
	// stw r30,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r30.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stb r30,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r30.u8);
	// addi r10,r27,16
	ctx.r10.s64 = ctx.r27.s64 + 16;
	// ld r9,16(r27)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r27.u32 + 16);
	// ld r8,24(r27)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r27.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r5,1032(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1032);
	// lwz r4,1036(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1036);
	// bl 0x82472fc0
	ctx.lr = 0x836765C0;
	sub_82472FC0(ctx, base);
	// lwz r7,244(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x836765d4
	if (!cr6.lt) goto loc_836765D4;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
loc_836765D4:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836765D8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836765d8
	if (!cr6.eq) goto loc_836765D8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,452
	ctx.r3.s64 = ctx.r1.s64 + 452;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836765FC;
	sub_824208C8(ctx, base);
	// lwz r10,244(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83676610
	if (cr6.lt) goto loc_83676610;
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82416268
	ctx.lr = 0x83676610;
	sub_82416268(ctx, base);
loc_83676610:
	// stw r26,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r26.u32);
	// stw r30,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r30.u32);
	// stb r30,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r30.u8);
loc_8367661C:
	// addi r6,r28,-372
	ctx.r6.s64 = ctx.r28.s64 + -372;
	// lwz r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// li r7,22
	ctx.r7.s64 = 22;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x827a8810
	ctx.lr = 0x83676634;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83676af0
	if (!cr6.eq) goto loc_83676AF0;
	// stw r30,672(r1)
	PPC_STORE_U32(ctx.r1.u32 + 672, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,688(r1)
	PPC_STORE_U32(ctx.r1.u32 + 688, ctx.r30.u32);
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// lwz r5,24(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// lwz r4,28(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// bl 0x83691bb8
	ctx.lr = 0x83676658;
	sub_83691BB8(ctx, base);
	// lwz r10,680(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 680);
	// lwz r11,684(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 684);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x83676ad4
	if (!cr6.lt) goto loc_83676AD4;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
loc_83676684:
	// stw r26,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r26.u32);
	// addi r11,r1,1056
	ctx.r11.s64 = ctx.r1.s64 + 1056;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
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
	// lwz r4,1068(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1068);
	// lwz r5,1064(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1064);
	// bl 0x82472fc0
	ctx.lr = 0x836766B8;
	sub_82472FC0(ctx, base);
	// addi r6,r28,-348
	ctx.r6.s64 = ctx.r28.s64 + -348;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,10
	ctx.r7.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x836766D0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8367670c
	if (!cr6.eq) goto loc_8367670C;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,1088
	ctx.r10.s64 = ctx.r1.s64 + 1088;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,1088(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1088);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x83676704
	if (!cr6.eq) goto loc_83676704;
	// ld r11,1096(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1096);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83676708
	goto loc_83676708;
loc_83676704:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_83676708:
	// stw r11,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, ctx.r11.u32);
loc_8367670C:
	// addi r6,r28,-336
	ctx.r6.s64 = ctx.r28.s64 + -336;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x83676724;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83676760
	if (!cr6.eq) goto loc_83676760;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,1120
	ctx.r10.s64 = ctx.r1.s64 + 1120;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,1120(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1120);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x83676758
	if (!cr6.eq) goto loc_83676758;
	// ld r11,1128(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1128);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8367675c
	goto loc_8367675C;
loc_83676758:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8367675C:
	// stw r11,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r11.u32);
loc_83676760:
	// addi r6,r28,-324
	ctx.r6.s64 = ctx.r28.s64 + -324;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,14
	ctx.r7.s64 = 14;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x83676778;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836767b4
	if (!cr6.eq) goto loc_836767B4;
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
	// bne cr6,0x836767ac
	if (!cr6.eq) goto loc_836767AC;
	// ld r11,1160(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1160);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836767b0
	goto loc_836767B0;
loc_836767AC:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_836767B0:
	// stw r11,488(r1)
	PPC_STORE_U32(ctx.r1.u32 + 488, ctx.r11.u32);
loc_836767B4:
	// addi r6,r28,-308
	ctx.r6.s64 = ctx.r28.s64 + -308;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x836767CC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83676808
	if (!cr6.eq) goto loc_83676808;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,1184
	ctx.r10.s64 = ctx.r1.s64 + 1184;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,1184(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1184);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x83676800
	if (!cr6.eq) goto loc_83676800;
	// ld r11,1192(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1192);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83676804
	goto loc_83676804;
loc_83676800:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_83676804:
	// stw r11,492(r1)
	PPC_STORE_U32(ctx.r1.u32 + 492, ctx.r11.u32);
loc_83676808:
	// addi r6,r28,-296
	ctx.r6.s64 = ctx.r28.s64 + -296;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,12
	ctx.r7.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x83676820;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8367685c
	if (!cr6.eq) goto loc_8367685C;
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
	// bne cr6,0x83676854
	if (!cr6.eq) goto loc_83676854;
	// ld r11,1224(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1224);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83676858
	goto loc_83676858;
loc_83676854:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_83676858:
	// stw r11,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r11.u32);
loc_8367685C:
	// addi r6,r28,-280
	ctx.r6.s64 = ctx.r28.s64 + -280;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,10
	ctx.r7.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x83676874;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836768b0
	if (!cr6.eq) goto loc_836768B0;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,1248
	ctx.r10.s64 = ctx.r1.s64 + 1248;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,1248(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1248);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x836768a8
	if (!cr6.eq) goto loc_836768A8;
	// ld r11,1256(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1256);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836768ac
	goto loc_836768AC;
loc_836768A8:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_836768AC:
	// stw r11,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r11.u32);
loc_836768B0:
	// addi r6,r28,-268
	ctx.r6.s64 = ctx.r28.s64 + -268;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x836768C8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83676904
	if (!cr6.eq) goto loc_83676904;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,1232
	ctx.r10.s64 = ctx.r1.s64 + 1232;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,1232(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1232);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x836768fc
	if (!cr6.eq) goto loc_836768FC;
	// ld r11,1240(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1240);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83676900
	goto loc_83676900;
loc_836768FC:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_83676900:
	// stw r11,504(r1)
	PPC_STORE_U32(ctx.r1.u32 + 504, ctx.r11.u32);
loc_83676904:
	// addi r6,r28,-256
	ctx.r6.s64 = ctx.r28.s64 + -256;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,16
	ctx.r7.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x8367691C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83676958
	if (!cr6.eq) goto loc_83676958;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,752
	ctx.r10.s64 = ctx.r1.s64 + 752;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,752(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 752);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x83676950
	if (!cr6.eq) goto loc_83676950;
	// ld r11,760(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 760);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83676954
	goto loc_83676954;
loc_83676950:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_83676954:
	// stw r11,508(r1)
	PPC_STORE_U32(ctx.r1.u32 + 508, ctx.r11.u32);
loc_83676958:
	// addi r6,r28,-236
	ctx.r6.s64 = ctx.r28.s64 + -236;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,11
	ctx.r7.s64 = 11;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x83676970;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836769ac
	if (!cr6.eq) goto loc_836769AC;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,1008
	ctx.r10.s64 = ctx.r1.s64 + 1008;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,1008(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1008);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x836769a4
	if (!cr6.eq) goto loc_836769A4;
	// ld r11,1016(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1016);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836769a8
	goto loc_836769A8;
loc_836769A4:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_836769A8:
	// stw r11,512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 512, ctx.r11.u32);
loc_836769AC:
	// addi r6,r28,-224
	ctx.r6.s64 = ctx.r28.s64 + -224;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,12
	ctx.r7.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x836769C4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83676a00
	if (!cr6.eq) goto loc_83676A00;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,784
	ctx.r10.s64 = ctx.r1.s64 + 784;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,784(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 784);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x836769f8
	if (!cr6.eq) goto loc_836769F8;
	// ld r11,792(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 792);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836769fc
	goto loc_836769FC;
loc_836769F8:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_836769FC:
	// stw r11,516(r1)
	PPC_STORE_U32(ctx.r1.u32 + 516, ctx.r11.u32);
loc_83676A00:
	// addi r6,r28,-208
	ctx.r6.s64 = ctx.r28.s64 + -208;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,15
	ctx.r7.s64 = 15;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x83676A18;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83676a54
	if (!cr6.eq) goto loc_83676A54;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,1136
	ctx.r10.s64 = ctx.r1.s64 + 1136;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,1136(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1136);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x83676a4c
	if (!cr6.eq) goto loc_83676A4C;
	// ld r11,1144(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1144);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83676a50
	goto loc_83676A50;
loc_83676A4C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_83676A50:
	// stw r11,520(r1)
	PPC_STORE_U32(ctx.r1.u32 + 520, ctx.r11.u32);
loc_83676A54:
	// addi r6,r28,-192
	ctx.r6.s64 = ctx.r28.s64 + -192;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,11
	ctx.r7.s64 = 11;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x83676A6C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83676aa8
	if (!cr6.eq) goto loc_83676AA8;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,816
	ctx.r10.s64 = ctx.r1.s64 + 816;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,816(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 816);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x83676aa0
	if (!cr6.eq) goto loc_83676AA0;
	// ld r11,824(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 824);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83676aa4
	goto loc_83676AA4;
loc_83676AA0:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_83676AA4:
	// stw r11,524(r1)
	PPC_STORE_U32(ctx.r1.u32 + 524, ctx.r11.u32);
loc_83676AA8:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83676abc
	if (cr6.lt) goto loc_83676ABC;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82416268
	ctx.lr = 0x83676ABC;
	sub_82416268(ctx, base);
loc_83676ABC:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// stw r26,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r26.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
	// bne 0x83676684
	if (!cr0.eq) goto loc_83676684;
loc_83676AD4:
	// lwz r31,688(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 688);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83676af0
	if (cr6.eq) goto loc_83676AF0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x83676AE8;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x83676AF0;
	sub_82416268(ctx, base);
loc_83676AF0:
	// addi r6,r28,-180
	ctx.r6.s64 = ctx.r28.s64 + -180;
	// lwz r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// li r7,22
	ctx.r7.s64 = 22;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x827a8810
	ctx.lr = 0x83676B08;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83676fc4
	if (!cr6.eq) goto loc_83676FC4;
	// stw r30,608(r1)
	PPC_STORE_U32(ctx.r1.u32 + 608, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,624(r1)
	PPC_STORE_U32(ctx.r1.u32 + 624, ctx.r30.u32);
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// lwz r5,24(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// lwz r4,28(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// bl 0x83691bb8
	ctx.lr = 0x83676B2C;
	sub_83691BB8(ctx, base);
	// lwz r10,616(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 616);
	// lwz r11,620(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 620);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x83676fa8
	if (!cr6.lt) goto loc_83676FA8;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
loc_83676B58:
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// addi r11,r1,1040
	ctx.r11.s64 = ctx.r1.s64 + 1040;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
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
	// lwz r4,1052(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1052);
	// lwz r5,1048(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1048);
	// bl 0x82472fc0
	ctx.lr = 0x83676B8C;
	sub_82472FC0(ctx, base);
	// addi r6,r28,-156
	ctx.r6.s64 = ctx.r28.s64 + -156;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,10
	ctx.r7.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x83676BA4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83676be0
	if (!cr6.eq) goto loc_83676BE0;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,704
	ctx.r10.s64 = ctx.r1.s64 + 704;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,704(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 704);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x83676bd8
	if (!cr6.eq) goto loc_83676BD8;
	// ld r11,712(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 712);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83676bdc
	goto loc_83676BDC;
loc_83676BD8:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_83676BDC:
	// stw r11,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r11.u32);
loc_83676BE0:
	// addi r6,r28,-144
	ctx.r6.s64 = ctx.r28.s64 + -144;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x83676BF8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83676c34
	if (!cr6.eq) goto loc_83676C34;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,1200
	ctx.r10.s64 = ctx.r1.s64 + 1200;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,1200(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1200);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x83676c2c
	if (!cr6.eq) goto loc_83676C2C;
	// ld r11,1208(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1208);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83676c30
	goto loc_83676C30;
loc_83676C2C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_83676C30:
	// stw r11,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r11.u32);
loc_83676C34:
	// addi r6,r28,-132
	ctx.r6.s64 = ctx.r28.s64 + -132;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,14
	ctx.r7.s64 = 14;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x83676C4C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83676c88
	if (!cr6.eq) goto loc_83676C88;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,880
	ctx.r10.s64 = ctx.r1.s64 + 880;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,880(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 880);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x83676c80
	if (!cr6.eq) goto loc_83676C80;
	// ld r11,888(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 888);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83676c84
	goto loc_83676C84;
loc_83676C80:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_83676C84:
	// stw r11,536(r1)
	PPC_STORE_U32(ctx.r1.u32 + 536, ctx.r11.u32);
loc_83676C88:
	// addi r6,r28,-116
	ctx.r6.s64 = ctx.r28.s64 + -116;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x83676CA0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83676cdc
	if (!cr6.eq) goto loc_83676CDC;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,1072
	ctx.r10.s64 = ctx.r1.s64 + 1072;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,1072(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1072);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x83676cd4
	if (!cr6.eq) goto loc_83676CD4;
	// ld r11,1080(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1080);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83676cd8
	goto loc_83676CD8;
loc_83676CD4:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_83676CD8:
	// stw r11,540(r1)
	PPC_STORE_U32(ctx.r1.u32 + 540, ctx.r11.u32);
loc_83676CDC:
	// addi r6,r28,-104
	ctx.r6.s64 = ctx.r28.s64 + -104;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,12
	ctx.r7.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x83676CF4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83676d30
	if (!cr6.eq) goto loc_83676D30;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,912
	ctx.r10.s64 = ctx.r1.s64 + 912;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,912(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 912);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x83676d28
	if (!cr6.eq) goto loc_83676D28;
	// ld r11,920(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 920);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83676d2c
	goto loc_83676D2C;
loc_83676D28:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_83676D2C:
	// stw r11,544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 544, ctx.r11.u32);
loc_83676D30:
	// addi r6,r28,-88
	ctx.r6.s64 = ctx.r28.s64 + -88;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,10
	ctx.r7.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x83676D48;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83676d84
	if (!cr6.eq) goto loc_83676D84;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,1168
	ctx.r10.s64 = ctx.r1.s64 + 1168;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,1168(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1168);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x83676d7c
	if (!cr6.eq) goto loc_83676D7C;
	// ld r11,1176(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1176);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83676d80
	goto loc_83676D80;
loc_83676D7C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_83676D80:
	// stw r11,548(r1)
	PPC_STORE_U32(ctx.r1.u32 + 548, ctx.r11.u32);
loc_83676D84:
	// addi r6,r28,-76
	ctx.r6.s64 = ctx.r28.s64 + -76;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x83676D9C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83676dd8
	if (!cr6.eq) goto loc_83676DD8;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,944
	ctx.r10.s64 = ctx.r1.s64 + 944;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,944(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 944);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x83676dd0
	if (!cr6.eq) goto loc_83676DD0;
	// ld r11,952(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 952);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83676dd4
	goto loc_83676DD4;
loc_83676DD0:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_83676DD4:
	// stw r11,552(r1)
	PPC_STORE_U32(ctx.r1.u32 + 552, ctx.r11.u32);
loc_83676DD8:
	// addi r6,r28,-64
	ctx.r6.s64 = ctx.r28.s64 + -64;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,16
	ctx.r7.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x83676DF0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83676e2c
	if (!cr6.eq) goto loc_83676E2C;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,1104
	ctx.r10.s64 = ctx.r1.s64 + 1104;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,1104(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1104);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x83676e24
	if (!cr6.eq) goto loc_83676E24;
	// ld r11,1112(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1112);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83676e28
	goto loc_83676E28;
loc_83676E24:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_83676E28:
	// stw r11,556(r1)
	PPC_STORE_U32(ctx.r1.u32 + 556, ctx.r11.u32);
loc_83676E2C:
	// addi r6,r28,-44
	ctx.r6.s64 = ctx.r28.s64 + -44;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,11
	ctx.r7.s64 = 11;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x83676E44;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83676e80
	if (!cr6.eq) goto loc_83676E80;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,976
	ctx.r10.s64 = ctx.r1.s64 + 976;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,976(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 976);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x83676e78
	if (!cr6.eq) goto loc_83676E78;
	// ld r11,984(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 984);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83676e7c
	goto loc_83676E7C;
loc_83676E78:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_83676E7C:
	// stw r11,560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 560, ctx.r11.u32);
loc_83676E80:
	// addi r6,r28,-32
	ctx.r6.s64 = ctx.r28.s64 + -32;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,12
	ctx.r7.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x83676E98;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83676ed4
	if (!cr6.eq) goto loc_83676ED4;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,720
	ctx.r10.s64 = ctx.r1.s64 + 720;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,720(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 720);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x83676ecc
	if (!cr6.eq) goto loc_83676ECC;
	// ld r11,728(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 728);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83676ed0
	goto loc_83676ED0;
loc_83676ECC:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_83676ED0:
	// stw r11,564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 564, ctx.r11.u32);
loc_83676ED4:
	// addi r6,r28,-16
	ctx.r6.s64 = ctx.r28.s64 + -16;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,15
	ctx.r7.s64 = 15;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x83676EEC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83676f28
	if (!cr6.eq) goto loc_83676F28;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,736
	ctx.r10.s64 = ctx.r1.s64 + 736;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,736(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 736);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x83676f20
	if (!cr6.eq) goto loc_83676F20;
	// ld r11,744(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 744);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83676f24
	goto loc_83676F24;
loc_83676F20:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_83676F24:
	// stw r11,568(r1)
	PPC_STORE_U32(ctx.r1.u32 + 568, ctx.r11.u32);
loc_83676F28:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,11
	ctx.r7.s64 = 11;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x83676F40;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83676f7c
	if (!cr6.eq) goto loc_83676F7C;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,768
	ctx.r10.s64 = ctx.r1.s64 + 768;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,768(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 768);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x83676f74
	if (!cr6.eq) goto loc_83676F74;
	// ld r11,776(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 776);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83676f78
	goto loc_83676F78;
loc_83676F74:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_83676F78:
	// stw r11,572(r1)
	PPC_STORE_U32(ctx.r1.u32 + 572, ctx.r11.u32);
loc_83676F7C:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83676f90
	if (cr6.lt) goto loc_83676F90;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82416268
	ctx.lr = 0x83676F90;
	sub_82416268(ctx, base);
loc_83676F90:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// bne 0x83676b58
	if (!cr0.eq) goto loc_83676B58;
loc_83676FA8:
	// lwz r31,624(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 624);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83676fc4
	if (cr6.eq) goto loc_83676FC4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x83676FBC;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x83676FC4;
	sub_82416268(ctx, base);
loc_83676FC4:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83676fd8
	if (cr6.lt) goto loc_83676FD8;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x83676FD8;
	sub_82416268(ctx, base);
loc_83676FD8:
	// addi r27,r27,32
	ctx.r27.s64 = ctx.r27.s64 + 32;
	// stw r26,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r26.u32);
	// stw r30,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r30.u32);
	// cmplw cr6,r27,r25
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r25.u32, xer);
	// stb r30,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r30.u8);
	// blt cr6,0x836763dc
	if (cr6.lt) goto loc_836763DC;
loc_83676FF0:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8367704c
	if (cr6.lt) goto loc_8367704C;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x8367703c
	if (!cr6.gt) goto loc_8367703C;
	// stw r23,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r23.u32);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// stw r24,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r24.u32);
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// stw r22,392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 392, ctx.r22.u32);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// stw r15,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, ctx.r15.u32);
	// stw r16,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r16.u32);
	// stw r18,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r18.u32);
	// bl 0x8247b270
	ctx.lr = 0x83677034;
	sub_8247B270(ctx, base);
	// stw r17,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r17.u32);
	// b 0x83677040
	goto loc_83677040;
loc_8367703C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83677040:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836770e8
	if (cr6.eq) goto loc_836770E8;
loc_8367704C:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r9,0(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add. r31,r11,r9
	ctx.r31.u64 = ctx.r11.u64 + ctx.r9.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq 0x836770dc
	if (cr0.eq) goto loc_836770DC;
	// lwz r11,416(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// li r29,-1
	ctx.r29.s64 = -1;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r4,r1,424
	ctx.r4.s64 = ctx.r1.s64 + 424;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,420(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r26,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r26.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stb r30,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r30.u8);
	// bl 0x82420558
	ctx.lr = 0x8367709C;
	sub_82420558(ctx, base);
	// stw r26,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r26.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// stb r30,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r30.u8);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,452
	ctx.r4.s64 = ctx.r1.s64 + 452;
	// bl 0x82420558
	ctx.lr = 0x836770BC;
	sub_82420558(ctx, base);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// li r5,48
	ctx.r5.s64 = 48;
	// bl 0x831ce980
	ctx.lr = 0x836770CC;
	sub_831CE980(ctx, base);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// addi r4,r1,528
	ctx.r4.s64 = ctx.r1.s64 + 528;
	// li r5,48
	ctx.r5.s64 = 48;
	// bl 0x831ce980
	ctx.lr = 0x836770DC;
	sub_831CE980(ctx, base);
loc_836770DC:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
loc_836770E8:
	// lwz r31,592(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 592);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83677104
	if (cr6.eq) goto loc_83677104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x836770FC;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x83677104;
	sub_82416268(ctx, base);
loc_83677104:
	// lwz r11,472(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 472);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83677118
	if (cr6.lt) goto loc_83677118;
	// lwz r3,452(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// bl 0x8386d088
	ctx.lr = 0x83677118;
	sub_8386D088(ctx, base);
loc_83677118:
	// lwz r11,444(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 444);
	// stw r26,472(r1)
	PPC_STORE_U32(ctx.r1.u32 + 472, ctx.r26.u32);
	// stw r30,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r30.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r30,452(r1)
	PPC_STORE_U8(ctx.r1.u32 + 452, ctx.r30.u8);
	// blt cr6,0x83677138
	if (cr6.lt) goto loc_83677138;
	// lwz r3,424(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 424);
	// bl 0x8386d088
	ctx.lr = 0x83677138;
	sub_8386D088(ctx, base);
loc_83677138:
	// addi r21,r21,16
	ctx.r21.s64 = ctx.r21.s64 + 16;
	// stw r26,444(r1)
	PPC_STORE_U32(ctx.r1.u32 + 444, ctx.r26.u32);
	// stw r30,440(r1)
	PPC_STORE_U32(ctx.r1.u32 + 440, ctx.r30.u32);
	// cmplw cr6,r21,r20
	cr6.compare<uint32_t>(ctx.r21.u32, ctx.r20.u32, xer);
	// stb r30,424(r1)
	PPC_STORE_U8(ctx.r1.u32 + 424, ctx.r30.u8);
	// blt cr6,0x8367639c
	if (cr6.lt) goto loc_8367639C;
loc_83677150:
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83677164
	if (cr6.lt) goto loc_83677164;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82416268
	ctx.lr = 0x83677164;
	sub_82416268(ctx, base);
loc_83677164:
	// lwz r11,220(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// addi r19,r19,32
	ctx.r19.s64 = ctx.r19.s64 + 32;
	// stw r26,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r26.u32);
	// stw r30,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r30.u32);
	// cmplw cr6,r19,r11
	cr6.compare<uint32_t>(ctx.r19.u32, ctx.r11.u32, xer);
	// stb r30,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r30.u8);
	// blt cr6,0x8367611c
	if (cr6.lt) goto loc_8367611C;
loc_83677180:
	// lwz r31,656(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 656);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8367719c
	if (cr6.eq) goto loc_8367719C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x83677194;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x8367719C;
	sub_82416268(ctx, base);
loc_8367719C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1424
	ctx.r1.s64 = ctx.r1.s64 + 1424;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836771A8"))) PPC_WEAK_FUNC(sub_836771A8);
PPC_FUNC_IMPL(__imp__sub_836771A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x836771B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d95768
	ctx.lr = 0x836771BC;
	sub_82D95768(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r29,r11,-32496
	ctx.r29.s64 = ctx.r11.s64 + -32496;
	// li r5,38
	ctx.r5.s64 = 38;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824208c8
	ctx.lr = 0x836771D4;
	sub_824208C8(ctx, base);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// addi r7,r10,-31788
	ctx.r7.s64 = ctx.r10.s64 + -31788;
	// addi r5,r8,-31804
	ctx.r5.s64 = ctx.r8.s64 + -31804;
	// addi r6,r9,-31800
	ctx.r6.s64 = ctx.r9.s64 + -31800;
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
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x8367721C;
	sub_824208C8(ctx, base);
	// stw r28,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r28.u32);
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// stb r30,344(r31)
	PPC_STORE_U8(ctx.r31.u32 + 344, ctx.r30.u8);
	// addi r4,r29,56
	ctx.r4.s64 = ctx.r29.s64 + 56;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x83677238;
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

__attribute__((alias("__imp__sub_83677248"))) PPC_WEAK_FUNC(sub_83677248);
PPC_FUNC_IMPL(__imp__sub_83677248) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x836772f0
	sub_836772F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83677250"))) PPC_WEAK_FUNC(sub_83677250);
PPC_FUNC_IMPL(__imp__sub_83677250) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x836772f0
	sub_836772F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83677258"))) PPC_WEAK_FUNC(sub_83677258);
PPC_FUNC_IMPL(__imp__sub_83677258) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83677260;
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
	// addi r8,r11,-31788
	ctx.r8.s64 = ctx.r11.s64 + -31788;
	// addi r7,r10,-31800
	ctx.r7.s64 = ctx.r10.s64 + -31800;
	// addi r6,r9,-31804
	ctx.r6.s64 = ctx.r9.s64 + -31804;
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
	// blt cr6,0x836772a4
	if (cr6.lt) goto loc_836772A4;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836772A4;
	sub_8386D088(ctx, base);
loc_836772A4:
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
	// blt cr6,0x836772d0
	if (cr6.lt) goto loc_836772D0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836772D0;
	sub_8386D088(ctx, base);
loc_836772D0:
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// bl 0x82b6a590
	ctx.lr = 0x836772E4;
	sub_82B6A590(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836772EC"))) PPC_WEAK_FUNC(sub_836772EC);
PPC_FUNC_IMPL(__imp__sub_836772EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836772F0"))) PPC_WEAK_FUNC(sub_836772F0);
PPC_FUNC_IMPL(__imp__sub_836772F0) {
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
	// bl 0x83677258
	ctx.lr = 0x83677310;
	sub_83677258(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83677330
	if (cr6.eq) goto loc_83677330;
	// bl 0x82595188
	ctx.lr = 0x83677320;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x83677330;
	sub_825952B8(ctx, base);
loc_83677330:
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

__attribute__((alias("__imp__sub_8367734C"))) PPC_WEAK_FUNC(sub_8367734C);
PPC_FUNC_IMPL(__imp__sub_8367734C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83677350"))) PPC_WEAK_FUNC(sub_83677350);
PPC_FUNC_IMPL(__imp__sub_83677350) {
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
	ctx.lr = 0x83677368;
	sub_82EAF8D8(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r4,r11,-32496
	ctx.r4.s64 = ctx.r11.s64 + -32496;
	// li r5,38
	ctx.r5.s64 = 38;
	// bl 0x824208c8
	ctx.lr = 0x8367737C;
	sub_824208C8(ctx, base);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// lis r7,-32216
	ctx.r7.s64 = -2111307776;
	// addi r4,r8,-31768
	ctx.r4.s64 = ctx.r8.s64 + -31768;
	// addi r3,r7,-31772
	ctx.r3.s64 = ctx.r7.s64 + -31772;
	// addi r6,r10,-31752
	ctx.r6.s64 = ctx.r10.s64 + -31752;
	// stw r4,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r4.u32);
	// addi r5,r9,-31764
	ctx.r5.s64 = ctx.r9.s64 + -31764;
	// stw r3,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r3.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// stw r5,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r5.u32);
	// addi r3,r31,352
	ctx.r3.s64 = ctx.r31.s64 + 352;
	// stw r11,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r11.u32);
	// std r11,360(r31)
	PPC_STORE_U64(ctx.r31.u32 + 360, ctx.r11.u64);
	// bl 0x836759b0
	ctx.lr = 0x836773C8;
	sub_836759B0(ctx, base);
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

__attribute__((alias("__imp__sub_836773E0"))) PPC_WEAK_FUNC(sub_836773E0);
PPC_FUNC_IMPL(__imp__sub_836773E0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x836773f8
	sub_836773F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836773E8"))) PPC_WEAK_FUNC(sub_836773E8);
PPC_FUNC_IMPL(__imp__sub_836773E8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x836773f8
	sub_836773F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836773F0"))) PPC_WEAK_FUNC(sub_836773F0);
PPC_FUNC_IMPL(__imp__sub_836773F0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-312
	ctx.r3.s64 = ctx.r3.s64 + -312;
	// b 0x836773f8
	sub_836773F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836773F8"))) PPC_WEAK_FUNC(sub_836773F8);
PPC_FUNC_IMPL(__imp__sub_836773F8) {
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
	// addi r7,r11,-31752
	ctx.r7.s64 = ctx.r11.s64 + -31752;
	// addi r6,r10,-31764
	ctx.r6.s64 = ctx.r10.s64 + -31764;
	// addi r5,r9,-31768
	ctx.r5.s64 = ctx.r9.s64 + -31768;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r8,-31772
	ctx.r4.s64 = ctx.r8.s64 + -31772;
	// stw r6,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r6.u32);
	// stw r5,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r5.u32);
	// addi r3,r3,352
	ctx.r3.s64 = ctx.r3.s64 + 352;
	// stw r4,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r4.u32);
	// bl 0x83675a30
	ctx.lr = 0x8367744C;
	sub_83675A30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eaf978
	ctx.lr = 0x83677454;
	sub_82EAF978(ctx, base);
	// clrlwi r3,r30,31
	ctx.r3.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83677474
	if (cr6.eq) goto loc_83677474;
	// bl 0x82595188
	ctx.lr = 0x83677464;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x83677474;
	sub_825952B8(ctx, base);
loc_83677474:
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

__attribute__((alias("__imp__sub_83677490"))) PPC_WEAK_FUNC(sub_83677490);
PPC_FUNC_IMPL(__imp__sub_83677490) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83677498;
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
	// bge cr6,0x836774d8
	if (!cr6.lt) goto loc_836774D8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e745e0
	ctx.lr = 0x836774D8;
	sub_82E745E0(ctx, base);
loc_836774D8:
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
	// addi r27,r11,-31596
	ctx.r27.s64 = ctx.r11.s64 + -31596;
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
	ctx.lr = 0x83677520;
	sub_82472FC0(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367752C;
	sub_82E74C08(ctx, base);
	// lwz r5,308(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x83677540
	if (cr6.lt) goto loc_83677540;
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82416268
	ctx.lr = 0x83677540;
	sub_82416268(ctx, base);
loc_83677540:
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
	// blt cr6,0x83677560
	if (cr6.lt) goto loc_83677560;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83677560:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
loc_83677570:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83677570
	if (!cr6.eq) goto loc_83677570;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x83677594;
	sub_82472FC0(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836775A0;
	sub_82E74C08(ctx, base);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836775b4
	if (cr6.lt) goto loc_836775B4;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x836775B4;
	sub_82416268(ctx, base);
loc_836775B4:
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
	ctx.lr = 0x836775DC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836775E8;
	sub_82E74C08(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836775fc
	if (cr6.lt) goto loc_836775FC;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x836775FC;
	sub_82416268(ctx, base);
loc_836775FC:
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
	ctx.lr = 0x83677614;
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
	ctx.lr = 0x83677630;
	sub_82472FC0(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367763C;
	sub_82E74C08(ctx, base);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83677650
	if (cr6.lt) goto loc_83677650;
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82416268
	ctx.lr = 0x83677650;
	sub_82416268(ctx, base);
loc_83677650:
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
	// blt cr6,0x83677670
	if (cr6.lt) goto loc_83677670;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83677670:
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
loc_83677680:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83677680
	if (!cr6.eq) goto loc_83677680;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836776A4;
	sub_82472FC0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836776B0;
	sub_82E74C08(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836776c4
	if (cr6.lt) goto loc_836776C4;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x836776C4;
	sub_82416268(ctx, base);
loc_836776C4:
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
	ctx.lr = 0x836776EC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836776F8;
	sub_82E74C08(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8367770c
	if (cr6.lt) goto loc_8367770C;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82416268
	ctx.lr = 0x8367770C;
	sub_82416268(ctx, base);
loc_8367770C:
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
	// blt cr6,0x8367772c
	if (cr6.lt) goto loc_8367772C;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8367772C:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
loc_8367773C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8367773c
	if (!cr6.eq) goto loc_8367773C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x83677760;
	sub_82472FC0(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367776C;
	sub_82E74C08(ctx, base);
	// lwz r10,276(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83677780
	if (cr6.lt) goto loc_83677780;
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x82416268
	ctx.lr = 0x83677780;
	sub_82416268(ctx, base);
loc_83677780:
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
	ctx.lr = 0x836777A8;
	sub_82472FC0(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836777B4;
	sub_82E74C08(ctx, base);
	// lwz r11,340(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836777c8
	if (cr6.lt) goto loc_836777C8;
	// lwz r3,320(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x82416268
	ctx.lr = 0x836777C8;
	sub_82416268(ctx, base);
loc_836777C8:
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
	ctx.lr = 0x836777E0;
	sub_82E746C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836777EC"))) PPC_WEAK_FUNC(sub_836777EC);
PPC_FUNC_IMPL(__imp__sub_836777EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836777F0"))) PPC_WEAK_FUNC(sub_836777F0);
PPC_FUNC_IMPL(__imp__sub_836777F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x836777F8;
	__savegprlr_14(ctx, base);
	// stwu r1,-1728(r1)
	ea = -1728 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r29,512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 512, ctx.r29.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r29,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r29.u32);
	// stw r3,1748(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1748, ctx.r3.u32);
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x83691bb8
	ctx.lr = 0x83677824;
	sub_83691BB8(ctx, base);
	// lwz r10,520(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 520);
	// lwz r11,524(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 524);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r19,r11
	ctx.r19.u64 = ctx.r11.u64;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r31,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r31.u32);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// bge cr6,0x83678d08
	if (!cr6.lt) goto loc_83678D08;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r8,11
	ctx.r8.s64 = 720896;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// li r26,15
	ctx.r26.s64 = 15;
	// li r16,8
	ctx.r16.s64 = 8;
	// li r17,228
	ctx.r17.s64 = 228;
	// ori r14,r8,1
	ctx.r14.u64 = ctx.r8.u64 | 1;
	// addi r27,r11,-30916
	ctx.r27.s64 = ctx.r11.s64 + -30916;
	// addi r15,r10,8980
	ctx.r15.s64 = ctx.r10.s64 + 8980;
	// addi r18,r9,12136
	ctx.r18.s64 = ctx.r9.s64 + 12136;
loc_83677870:
	// stw r26,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r26.u32);
	// addi r11,r1,1536
	ctx.r11.s64 = ctx.r1.s64 + 1536;
	// stw r29,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r29.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stb r29,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r29.u8);
	// ld r10,8(r19)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r19.u32 + 8);
	// ld r9,0(r19)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r19.u32 + 0);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// lwz r5,1544(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1544);
	// lwz r4,1548(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1548);
	// bl 0x82472fc0
	ctx.lr = 0x836778A0;
	sub_82472FC0(ctx, base);
	// addi r6,r27,-676
	ctx.r6.s64 = ctx.r27.s64 + -676;
	// lwz r5,208(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x827a8810
	ctx.lr = 0x836778B8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83677950
	if (!cr6.eq) goto loc_83677950;
	// stb r29,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r29.u8);
	// addi r11,r1,1072
	ctx.r11.s64 = ctx.r1.s64 + 1072;
	// stw r26,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r26.u32);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// stw r29,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r29.u32);
	// addi r10,r19,16
	ctx.r10.s64 = ctx.r19.s64 + 16;
	// ld r8,16(r19)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r19.u32 + 16);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// ld r9,24(r19)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r19.u32 + 24);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r4,1084(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1084);
	// lwz r5,1080(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1080);
	// bl 0x82472fc0
	ctx.lr = 0x836778F4;
	sub_82472FC0(ctx, base);
	// lwz r7,276(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r4,256(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x83677908
	if (!cr6.lt) goto loc_83677908;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
loc_83677908:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8367790C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8367790c
	if (!cr6.eq) goto loc_8367790C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r30,20
	ctx.r3.s64 = ctx.r30.s64 + 20;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x83677930;
	sub_824208C8(ctx, base);
	// lwz r10,276(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83677944
	if (cr6.lt) goto loc_83677944;
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x82416268
	ctx.lr = 0x83677944;
	sub_82416268(ctx, base);
loc_83677944:
	// stw r26,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r26.u32);
	// stw r29,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r29.u32);
	// stb r29,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r29.u8);
loc_83677950:
	// addi r6,r27,-668
	ctx.r6.s64 = ctx.r27.s64 + -668;
	// lwz r5,208(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x827a8810
	ctx.lr = 0x83677968;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836779a8
	if (!cr6.eq) goto loc_836779A8;
	// ld r9,24(r19)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r19.u32 + 24);
	// addi r10,r1,1104
	ctx.r10.s64 = ctx.r1.s64 + 1104;
	// ld r11,16(r19)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r19.u32 + 16);
	// addi r8,r19,16
	ctx.r8.s64 = ctx.r19.s64 + 16;
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// lwz r7,1104(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1104);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x836779a0
	if (!cr6.eq) goto loc_836779A0;
	// ld r11,1112(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1112);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836779a4
	goto loc_836779A4;
loc_836779A0:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_836779A4:
	// stw r11,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r11.u32);
loc_836779A8:
	// addi r6,r27,-660
	ctx.r6.s64 = ctx.r27.s64 + -660;
	// lwz r5,208(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x827a8810
	ctx.lr = 0x836779C0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83677a58
	if (!cr6.eq) goto loc_83677A58;
	// stw r26,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r26.u32);
	// addi r11,r1,1136
	ctx.r11.s64 = ctx.r1.s64 + 1136;
	// stw r29,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r29.u32);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// stb r29,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r29.u8);
	// addi r10,r19,16
	ctx.r10.s64 = ctx.r19.s64 + 16;
	// ld r8,24(r19)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r19.u32 + 24);
	// ld r9,16(r19)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r19.u32 + 16);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r4,1148(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1148);
	// lwz r5,1144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1144);
	// bl 0x82472fc0
	ctx.lr = 0x836779FC;
	sub_82472FC0(ctx, base);
	// lwz r7,308(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// lwz r4,288(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x83677a10
	if (!cr6.lt) goto loc_83677A10;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
loc_83677A10:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83677A14:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83677a14
	if (!cr6.eq) goto loc_83677A14;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r30,116
	ctx.r3.s64 = ctx.r30.s64 + 116;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x83677A38;
	sub_824208C8(ctx, base);
	// lwz r10,308(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83677a4c
	if (cr6.lt) goto loc_83677A4C;
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82416268
	ctx.lr = 0x83677A4C;
	sub_82416268(ctx, base);
loc_83677A4C:
	// stw r26,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r26.u32);
	// stw r29,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r29.u32);
	// stb r29,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r29.u8);
loc_83677A58:
	// addi r6,r27,-652
	ctx.r6.s64 = ctx.r27.s64 + -652;
	// lwz r5,208(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// li r7,10
	ctx.r7.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x827a8810
	ctx.lr = 0x83677A70;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83678c70
	if (!cr6.eq) goto loc_83678C70;
	// addi r24,r30,152
	ctx.r24.s64 = ctx.r30.s64 + 152;
	// stw r18,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r18.u32);
	// stw r16,428(r1)
	PPC_STORE_U32(ctx.r1.u32 + 428, ctx.r16.u32);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r23,r24,8
	ctx.r23.s64 = ctx.r24.s64 + 8;
	// stw r24,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r24.u32);
	// addi r22,r24,4
	ctx.r22.s64 = ctx.r24.s64 + 4;
	// stw r17,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r17.u32);
	// stw r23,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r23.u32);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// stw r22,424(r1)
	PPC_STORE_U32(ctx.r1.u32 + 424, ctx.r22.u32);
	// bl 0x8247b7d8
	ctx.lr = 0x83677AA8;
	sub_8247B7D8(ctx, base);
	// lwz r3,160(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// stw r29,152(r30)
	PPC_STORE_U32(ctx.r30.u32 + 152, ctx.r29.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83677ac8
	if (cr6.eq) goto loc_83677AC8;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// bl 0x8247b268
	ctx.lr = 0x83677AC0;
	sub_8247B268(ctx, base);
	// stw r29,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r29.u32);
	// stw r29,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r29.u32);
loc_83677AC8:
	// stw r15,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r15.u32);
	// lwz r11,28(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 28);
	// lwz r10,24(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 24);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r20,r10,r11
	ctx.r20.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r21,r11
	ctx.r21.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r20
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r20.u32, xer);
	// bge cr6,0x83678c70
	if (!cr6.lt) goto loc_83678C70;
loc_83677AE8:
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x83612d20
	ctx.lr = 0x83677AF0;
	sub_83612D20(ctx, base);
	// stw r29,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r29.u32);
	// stw r29,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r29.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// lwz r5,8(r21)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// lwz r4,12(r21)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r21.u32 + 12);
	// bl 0x83691bb8
	ctx.lr = 0x83677B0C;
	sub_83691BB8(ctx, base);
	// lwz r10,456(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 456);
	// lwz r11,460(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 460);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// add r25,r10,r11
	ctx.r25.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r25
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, xer);
	// bge cr6,0x83678b60
	if (!cr6.lt) goto loc_83678B60;
loc_83677B28:
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// addi r11,r1,1168
	ctx.r11.s64 = ctx.r1.s64 + 1168;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// ld r9,8(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 8);
	// ld r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// lwz r5,1176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1176);
	// lwz r4,1180(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1180);
	// bl 0x82472fc0
	ctx.lr = 0x83677B58;
	sub_82472FC0(ctx, base);
	// addi r6,r27,-640
	ctx.r6.s64 = ctx.r27.s64 + -640;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x83677B70;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83677bb0
	if (!cr6.eq) goto loc_83677BB0;
	// ld r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// addi r10,r1,1200
	ctx.r10.s64 = ctx.r1.s64 + 1200;
	// ld r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// addi r8,r28,16
	ctx.r8.s64 = ctx.r28.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,1200(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1200);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x83677ba8
	if (!cr6.eq) goto loc_83677BA8;
	// ld r11,1208(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1208);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83677bac
	goto loc_83677BAC;
loc_83677BA8:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_83677BAC:
	// stw r11,592(r1)
	PPC_STORE_U32(ctx.r1.u32 + 592, ctx.r11.u32);
loc_83677BB0:
	// addi r6,r27,-628
	ctx.r6.s64 = ctx.r27.s64 + -628;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,13
	ctx.r7.s64 = 13;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x83677BC8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83677c08
	if (!cr6.eq) goto loc_83677C08;
	// ld r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// addi r10,r1,1232
	ctx.r10.s64 = ctx.r1.s64 + 1232;
	// ld r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// addi r8,r28,16
	ctx.r8.s64 = ctx.r28.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,1232(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1232);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x83677c00
	if (!cr6.eq) goto loc_83677C00;
	// ld r11,1240(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1240);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83677c04
	goto loc_83677C04;
loc_83677C00:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_83677C04:
	// stw r11,596(r1)
	PPC_STORE_U32(ctx.r1.u32 + 596, ctx.r11.u32);
loc_83677C08:
	// addi r6,r27,-612
	ctx.r6.s64 = ctx.r27.s64 + -612;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,22
	ctx.r7.s64 = 22;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x83677C20;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836780dc
	if (!cr6.eq) goto loc_836780DC;
	// stw r29,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, ctx.r29.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r29,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r29.u32);
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// lwz r5,24(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// lwz r4,28(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// bl 0x83691bb8
	ctx.lr = 0x83677C44;
	sub_83691BB8(ctx, base);
	// lwz r10,488(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 488);
	// lwz r11,492(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 492);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x836780c0
	if (!cr6.lt) goto loc_836780C0;
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
loc_83677C70:
	// stw r26,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r26.u32);
	// addi r11,r1,1264
	ctx.r11.s64 = ctx.r1.s64 + 1264;
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r29,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r29.u8);
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
	// lwz r4,1276(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1276);
	// lwz r5,1272(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1272);
	// bl 0x82472fc0
	ctx.lr = 0x83677CA4;
	sub_82472FC0(ctx, base);
	// addi r6,r27,-588
	ctx.r6.s64 = ctx.r27.s64 + -588;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,10
	ctx.r7.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x83677CBC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83677cf8
	if (!cr6.eq) goto loc_83677CF8;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,1296
	ctx.r10.s64 = ctx.r1.s64 + 1296;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,1296(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1296);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x83677cf0
	if (!cr6.eq) goto loc_83677CF0;
	// ld r11,1304(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1304);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83677cf4
	goto loc_83677CF4;
loc_83677CF0:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_83677CF4:
	// stw r11,600(r1)
	PPC_STORE_U32(ctx.r1.u32 + 600, ctx.r11.u32);
loc_83677CF8:
	// addi r6,r27,-576
	ctx.r6.s64 = ctx.r27.s64 + -576;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x83677D10;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83677d4c
	if (!cr6.eq) goto loc_83677D4C;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,1328
	ctx.r10.s64 = ctx.r1.s64 + 1328;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,1328(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1328);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x83677d44
	if (!cr6.eq) goto loc_83677D44;
	// ld r11,1336(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1336);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83677d48
	goto loc_83677D48;
loc_83677D44:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_83677D48:
	// stw r11,604(r1)
	PPC_STORE_U32(ctx.r1.u32 + 604, ctx.r11.u32);
loc_83677D4C:
	// addi r6,r27,-564
	ctx.r6.s64 = ctx.r27.s64 + -564;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,14
	ctx.r7.s64 = 14;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x83677D64;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83677da0
	if (!cr6.eq) goto loc_83677DA0;
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// addi r10,r1,1360
	ctx.r10.s64 = ctx.r1.s64 + 1360;
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// lwz r8,1360(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1360);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x83677d98
	if (!cr6.eq) goto loc_83677D98;
	// ld r11,1368(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1368);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83677d9c
	goto loc_83677D9C;
loc_83677D98:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_83677D9C:
	// stw r11,608(r1)
	PPC_STORE_U32(ctx.r1.u32 + 608, ctx.r11.u32);
loc_83677DA0:
	// addi r6,r27,-548
	ctx.r6.s64 = ctx.r27.s64 + -548;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x83677DB8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83677df4
	if (!cr6.eq) goto loc_83677DF4;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,1392
	ctx.r10.s64 = ctx.r1.s64 + 1392;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,1392(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1392);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x83677dec
	if (!cr6.eq) goto loc_83677DEC;
	// ld r11,1400(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1400);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83677df0
	goto loc_83677DF0;
loc_83677DEC:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_83677DF0:
	// stw r11,612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 612, ctx.r11.u32);
loc_83677DF4:
	// addi r6,r27,-536
	ctx.r6.s64 = ctx.r27.s64 + -536;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,12
	ctx.r7.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x83677E0C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83677e48
	if (!cr6.eq) goto loc_83677E48;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,1424
	ctx.r10.s64 = ctx.r1.s64 + 1424;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,1424(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1424);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x83677e40
	if (!cr6.eq) goto loc_83677E40;
	// ld r11,1432(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1432);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83677e44
	goto loc_83677E44;
loc_83677E40:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_83677E44:
	// stw r11,616(r1)
	PPC_STORE_U32(ctx.r1.u32 + 616, ctx.r11.u32);
loc_83677E48:
	// addi r6,r27,-520
	ctx.r6.s64 = ctx.r27.s64 + -520;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,10
	ctx.r7.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x83677E60;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83677e9c
	if (!cr6.eq) goto loc_83677E9C;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,1456
	ctx.r10.s64 = ctx.r1.s64 + 1456;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,1456(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1456);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x83677e94
	if (!cr6.eq) goto loc_83677E94;
	// ld r11,1464(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1464);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83677e98
	goto loc_83677E98;
loc_83677E94:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_83677E98:
	// stw r11,620(r1)
	PPC_STORE_U32(ctx.r1.u32 + 620, ctx.r11.u32);
loc_83677E9C:
	// addi r6,r27,-508
	ctx.r6.s64 = ctx.r27.s64 + -508;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x83677EB4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83677ef0
	if (!cr6.eq) goto loc_83677EF0;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,1488
	ctx.r10.s64 = ctx.r1.s64 + 1488;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,1488(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1488);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x83677ee8
	if (!cr6.eq) goto loc_83677EE8;
	// ld r11,1496(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1496);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83677eec
	goto loc_83677EEC;
loc_83677EE8:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_83677EEC:
	// stw r11,624(r1)
	PPC_STORE_U32(ctx.r1.u32 + 624, ctx.r11.u32);
loc_83677EF0:
	// addi r6,r27,-496
	ctx.r6.s64 = ctx.r27.s64 + -496;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,16
	ctx.r7.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x83677F08;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83677f44
	if (!cr6.eq) goto loc_83677F44;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,1520
	ctx.r10.s64 = ctx.r1.s64 + 1520;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,1520(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1520);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x83677f3c
	if (!cr6.eq) goto loc_83677F3C;
	// ld r11,1528(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1528);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83677f40
	goto loc_83677F40;
loc_83677F3C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_83677F40:
	// stw r11,628(r1)
	PPC_STORE_U32(ctx.r1.u32 + 628, ctx.r11.u32);
loc_83677F44:
	// addi r6,r27,-476
	ctx.r6.s64 = ctx.r27.s64 + -476;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,11
	ctx.r7.s64 = 11;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x83677F5C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83677f98
	if (!cr6.eq) goto loc_83677F98;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,1552
	ctx.r10.s64 = ctx.r1.s64 + 1552;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,1552(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1552);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x83677f90
	if (!cr6.eq) goto loc_83677F90;
	// ld r11,1560(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1560);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83677f94
	goto loc_83677F94;
loc_83677F90:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_83677F94:
	// stw r11,632(r1)
	PPC_STORE_U32(ctx.r1.u32 + 632, ctx.r11.u32);
loc_83677F98:
	// addi r6,r27,-464
	ctx.r6.s64 = ctx.r27.s64 + -464;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,12
	ctx.r7.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x83677FB0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83677fec
	if (!cr6.eq) goto loc_83677FEC;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,864
	ctx.r10.s64 = ctx.r1.s64 + 864;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,864(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 864);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x83677fe4
	if (!cr6.eq) goto loc_83677FE4;
	// ld r11,872(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 872);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83677fe8
	goto loc_83677FE8;
loc_83677FE4:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_83677FE8:
	// stw r11,636(r1)
	PPC_STORE_U32(ctx.r1.u32 + 636, ctx.r11.u32);
loc_83677FEC:
	// addi r6,r27,-448
	ctx.r6.s64 = ctx.r27.s64 + -448;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,15
	ctx.r7.s64 = 15;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x83678004;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83678040
	if (!cr6.eq) goto loc_83678040;
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
	// bne cr6,0x83678038
	if (!cr6.eq) goto loc_83678038;
	// ld r11,1224(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1224);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8367803c
	goto loc_8367803C;
loc_83678038:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8367803C:
	// stw r11,640(r1)
	PPC_STORE_U32(ctx.r1.u32 + 640, ctx.r11.u32);
loc_83678040:
	// addi r6,r27,-432
	ctx.r6.s64 = ctx.r27.s64 + -432;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,11
	ctx.r7.s64 = 11;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x83678058;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83678094
	if (!cr6.eq) goto loc_83678094;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,896
	ctx.r10.s64 = ctx.r1.s64 + 896;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,896(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 896);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x8367808c
	if (!cr6.eq) goto loc_8367808C;
	// ld r11,904(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 904);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83678090
	goto loc_83678090;
loc_8367808C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_83678090:
	// stw r11,644(r1)
	PPC_STORE_U32(ctx.r1.u32 + 644, ctx.r11.u32);
loc_83678094:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836780a8
	if (cr6.lt) goto loc_836780A8;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82416268
	ctx.lr = 0x836780A8;
	sub_82416268(ctx, base);
loc_836780A8:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r26,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r26.u32);
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// stb r29,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r29.u8);
	// bne 0x83677c70
	if (!cr0.eq) goto loc_83677C70;
loc_836780C0:
	// lwz r31,496(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 496);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x836780dc
	if (cr6.eq) goto loc_836780DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x836780D4;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x836780DC;
	sub_82416268(ctx, base);
loc_836780DC:
	// addi r6,r27,-420
	ctx.r6.s64 = ctx.r27.s64 + -420;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,22
	ctx.r7.s64 = 22;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836780F4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836785b0
	if (!cr6.eq) goto loc_836785B0;
	// stw r29,544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 544, ctx.r29.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r29,560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 560, ctx.r29.u32);
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// lwz r5,24(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// lwz r4,28(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// bl 0x83691bb8
	ctx.lr = 0x83678118;
	sub_83691BB8(ctx, base);
	// lwz r10,552(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 552);
	// lwz r11,556(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 556);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x83678594
	if (!cr6.lt) goto loc_83678594;
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
loc_83678144:
	// stw r26,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r26.u32);
	// addi r11,r1,1472
	ctx.r11.s64 = ctx.r1.s64 + 1472;
	// stw r29,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r29.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stb r29,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r29.u8);
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
	// lwz r4,1484(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1484);
	// lwz r5,1480(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1480);
	// bl 0x82472fc0
	ctx.lr = 0x83678178;
	sub_82472FC0(ctx, base);
	// addi r6,r27,-396
	ctx.r6.s64 = ctx.r27.s64 + -396;
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r7,10
	ctx.r7.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x827a8810
	ctx.lr = 0x83678190;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836781cc
	if (!cr6.eq) goto loc_836781CC;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,928
	ctx.r10.s64 = ctx.r1.s64 + 928;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,928(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 928);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x836781c4
	if (!cr6.eq) goto loc_836781C4;
	// ld r11,936(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 936);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836781c8
	goto loc_836781C8;
loc_836781C4:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_836781C8:
	// stw r11,648(r1)
	PPC_STORE_U32(ctx.r1.u32 + 648, ctx.r11.u32);
loc_836781CC:
	// addi r6,r27,-384
	ctx.r6.s64 = ctx.r27.s64 + -384;
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x827a8810
	ctx.lr = 0x836781E4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83678220
	if (!cr6.eq) goto loc_83678220;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,1248
	ctx.r10.s64 = ctx.r1.s64 + 1248;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,1248(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1248);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x83678218
	if (!cr6.eq) goto loc_83678218;
	// ld r11,1256(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1256);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8367821c
	goto loc_8367821C;
loc_83678218:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8367821C:
	// stw r11,652(r1)
	PPC_STORE_U32(ctx.r1.u32 + 652, ctx.r11.u32);
loc_83678220:
	// addi r6,r27,-372
	ctx.r6.s64 = ctx.r27.s64 + -372;
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r7,14
	ctx.r7.s64 = 14;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x827a8810
	ctx.lr = 0x83678238;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83678274
	if (!cr6.eq) goto loc_83678274;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,960
	ctx.r10.s64 = ctx.r1.s64 + 960;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,960(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 960);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x8367826c
	if (!cr6.eq) goto loc_8367826C;
	// ld r11,968(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 968);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83678270
	goto loc_83678270;
loc_8367826C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_83678270:
	// stw r11,656(r1)
	PPC_STORE_U32(ctx.r1.u32 + 656, ctx.r11.u32);
loc_83678274:
	// addi r6,r27,-356
	ctx.r6.s64 = ctx.r27.s64 + -356;
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x827a8810
	ctx.lr = 0x8367828C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836782c8
	if (!cr6.eq) goto loc_836782C8;
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
	// bne cr6,0x836782c0
	if (!cr6.eq) goto loc_836782C0;
	// ld r11,1416(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1416);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836782c4
	goto loc_836782C4;
loc_836782C0:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_836782C4:
	// stw r11,660(r1)
	PPC_STORE_U32(ctx.r1.u32 + 660, ctx.r11.u32);
loc_836782C8:
	// addi r6,r27,-344
	ctx.r6.s64 = ctx.r27.s64 + -344;
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r7,12
	ctx.r7.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x827a8810
	ctx.lr = 0x836782E0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8367831c
	if (!cr6.eq) goto loc_8367831C;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,992
	ctx.r10.s64 = ctx.r1.s64 + 992;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,992(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 992);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x83678314
	if (!cr6.eq) goto loc_83678314;
	// ld r11,1000(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1000);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83678318
	goto loc_83678318;
loc_83678314:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_83678318:
	// stw r11,664(r1)
	PPC_STORE_U32(ctx.r1.u32 + 664, ctx.r11.u32);
loc_8367831C:
	// addi r6,r27,-328
	ctx.r6.s64 = ctx.r27.s64 + -328;
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r7,10
	ctx.r7.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x827a8810
	ctx.lr = 0x83678334;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83678370
	if (!cr6.eq) goto loc_83678370;
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
	// bne cr6,0x83678368
	if (!cr6.eq) goto loc_83678368;
	// ld r11,1288(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1288);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8367836c
	goto loc_8367836C;
loc_83678368:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8367836C:
	// stw r11,668(r1)
	PPC_STORE_U32(ctx.r1.u32 + 668, ctx.r11.u32);
loc_83678370:
	// addi r6,r27,-316
	ctx.r6.s64 = ctx.r27.s64 + -316;
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x827a8810
	ctx.lr = 0x83678388;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836783c4
	if (!cr6.eq) goto loc_836783C4;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,1024
	ctx.r10.s64 = ctx.r1.s64 + 1024;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,1024(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1024);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x836783bc
	if (!cr6.eq) goto loc_836783BC;
	// ld r11,1032(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1032);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836783c0
	goto loc_836783C0;
loc_836783BC:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_836783C0:
	// stw r11,672(r1)
	PPC_STORE_U32(ctx.r1.u32 + 672, ctx.r11.u32);
loc_836783C4:
	// addi r6,r27,-304
	ctx.r6.s64 = ctx.r27.s64 + -304;
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r7,16
	ctx.r7.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x827a8810
	ctx.lr = 0x836783DC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83678418
	if (!cr6.eq) goto loc_83678418;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,832
	ctx.r10.s64 = ctx.r1.s64 + 832;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,832(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 832);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x83678410
	if (!cr6.eq) goto loc_83678410;
	// ld r11,840(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 840);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83678414
	goto loc_83678414;
loc_83678410:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_83678414:
	// stw r11,676(r1)
	PPC_STORE_U32(ctx.r1.u32 + 676, ctx.r11.u32);
loc_83678418:
	// addi r6,r27,-284
	ctx.r6.s64 = ctx.r27.s64 + -284;
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r7,11
	ctx.r7.s64 = 11;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x827a8810
	ctx.lr = 0x83678430;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8367846c
	if (!cr6.eq) goto loc_8367846C;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,1056
	ctx.r10.s64 = ctx.r1.s64 + 1056;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,1056(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1056);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x83678464
	if (!cr6.eq) goto loc_83678464;
	// ld r11,1064(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1064);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83678468
	goto loc_83678468;
loc_83678464:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_83678468:
	// stw r11,680(r1)
	PPC_STORE_U32(ctx.r1.u32 + 680, ctx.r11.u32);
loc_8367846C:
	// addi r6,r27,-272
	ctx.r6.s64 = ctx.r27.s64 + -272;
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r7,12
	ctx.r7.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x827a8810
	ctx.lr = 0x83678484;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836784c0
	if (!cr6.eq) goto loc_836784C0;
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
	// bne cr6,0x836784b8
	if (!cr6.eq) goto loc_836784B8;
	// ld r11,1320(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1320);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836784bc
	goto loc_836784BC;
loc_836784B8:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_836784BC:
	// stw r11,684(r1)
	PPC_STORE_U32(ctx.r1.u32 + 684, ctx.r11.u32);
loc_836784C0:
	// addi r6,r27,-256
	ctx.r6.s64 = ctx.r27.s64 + -256;
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r7,15
	ctx.r7.s64 = 15;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x827a8810
	ctx.lr = 0x836784D8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83678514
	if (!cr6.eq) goto loc_83678514;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,1088
	ctx.r10.s64 = ctx.r1.s64 + 1088;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,1088(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1088);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x8367850c
	if (!cr6.eq) goto loc_8367850C;
	// ld r11,1096(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1096);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83678510
	goto loc_83678510;
loc_8367850C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_83678510:
	// stw r11,688(r1)
	PPC_STORE_U32(ctx.r1.u32 + 688, ctx.r11.u32);
loc_83678514:
	// addi r6,r27,-240
	ctx.r6.s64 = ctx.r27.s64 + -240;
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r7,11
	ctx.r7.s64 = 11;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x827a8810
	ctx.lr = 0x8367852C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83678568
	if (!cr6.eq) goto loc_83678568;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,1440
	ctx.r10.s64 = ctx.r1.s64 + 1440;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,1440(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1440);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x83678560
	if (!cr6.eq) goto loc_83678560;
	// ld r11,1448(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1448);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83678564
	goto loc_83678564;
loc_83678560:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_83678564:
	// stw r11,692(r1)
	PPC_STORE_U32(ctx.r1.u32 + 692, ctx.r11.u32);
loc_83678568:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8367857c
	if (cr6.lt) goto loc_8367857C;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82416268
	ctx.lr = 0x8367857C;
	sub_82416268(ctx, base);
loc_8367857C:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r26,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r26.u32);
	// stw r29,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r29.u32);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// stb r29,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r29.u8);
	// bne 0x83678144
	if (!cr0.eq) goto loc_83678144;
loc_83678594:
	// lwz r31,560(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 560);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x836785b0
	if (cr6.eq) goto loc_836785B0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x836785A8;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x836785B0;
	sub_82416268(ctx, base);
loc_836785B0:
	// addi r6,r27,-228
	ctx.r6.s64 = ctx.r27.s64 + -228;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,14
	ctx.r7.s64 = 14;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836785C8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83678660
	if (!cr6.eq) goto loc_83678660;
	// stw r26,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r26.u32);
	// addi r11,r1,1120
	ctx.r11.s64 = ctx.r1.s64 + 1120;
	// stw r29,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r29.u32);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// stb r29,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r29.u8);
	// addi r10,r28,16
	ctx.r10.s64 = ctx.r28.s64 + 16;
	// ld r9,16(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// ld r8,24(r28)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r5,1128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1128);
	// lwz r4,1132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1132);
	// bl 0x82472fc0
	ctx.lr = 0x83678604;
	sub_82472FC0(ctx, base);
	// lwz r7,372(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r4,352(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x83678618
	if (!cr6.lt) goto loc_83678618;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
loc_83678618:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8367861C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8367861c
	if (!cr6.eq) goto loc_8367861C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,696
	ctx.r3.s64 = ctx.r1.s64 + 696;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x83678640;
	sub_824208C8(ctx, base);
	// lwz r10,372(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83678654
	if (cr6.lt) goto loc_83678654;
	// lwz r3,352(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// bl 0x82416268
	ctx.lr = 0x83678654;
	sub_82416268(ctx, base);
loc_83678654:
	// stw r26,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r26.u32);
	// stw r29,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r29.u32);
	// stb r29,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r29.u8);
loc_83678660:
	// addi r6,r27,-212
	ctx.r6.s64 = ctx.r27.s64 + -212;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,7
	ctx.r7.s64 = 7;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x83678678;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836786b8
	if (!cr6.eq) goto loc_836786B8;
	// ld r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// addi r10,r1,1344
	ctx.r10.s64 = ctx.r1.s64 + 1344;
	// ld r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// addi r8,r28,16
	ctx.r8.s64 = ctx.r28.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,1344(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1344);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x836786b0
	if (!cr6.eq) goto loc_836786B0;
	// ld r11,1352(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1352);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836786b4
	goto loc_836786B4;
loc_836786B0:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_836786B4:
	// stw r11,724(r1)
	PPC_STORE_U32(ctx.r1.u32 + 724, ctx.r11.u32);
loc_836786B8:
	// addi r6,r27,-204
	ctx.r6.s64 = ctx.r27.s64 + -204;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,10
	ctx.r7.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836786D0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83678710
	if (!cr6.eq) goto loc_83678710;
	// ld r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// addi r10,r1,1152
	ctx.r10.s64 = ctx.r1.s64 + 1152;
	// ld r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// addi r8,r28,16
	ctx.r8.s64 = ctx.r28.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,1152(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1152);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x83678708
	if (!cr6.eq) goto loc_83678708;
	// ld r11,1160(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1160);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8367870c
	goto loc_8367870C;
loc_83678708:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8367870C:
	// stw r11,728(r1)
	PPC_STORE_U32(ctx.r1.u32 + 728, ctx.r11.u32);
loc_83678710:
	// addi r6,r27,-192
	ctx.r6.s64 = ctx.r27.s64 + -192;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,12
	ctx.r7.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x83678728;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83678768
	if (!cr6.eq) goto loc_83678768;
	// ld r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// addi r10,r1,1504
	ctx.r10.s64 = ctx.r1.s64 + 1504;
	// ld r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// addi r8,r28,16
	ctx.r8.s64 = ctx.r28.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,1504(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1504);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x83678760
	if (!cr6.eq) goto loc_83678760;
	// ld r11,1512(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1512);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83678764
	goto loc_83678764;
loc_83678760:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_83678764:
	// stw r11,732(r1)
	PPC_STORE_U32(ctx.r1.u32 + 732, ctx.r11.u32);
loc_83678768:
	// addi r6,r27,-176
	ctx.r6.s64 = ctx.r27.s64 + -176;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,17
	ctx.r7.s64 = 17;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x83678780;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836787c0
	if (!cr6.eq) goto loc_836787C0;
	// ld r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// addi r10,r1,1184
	ctx.r10.s64 = ctx.r1.s64 + 1184;
	// ld r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// addi r8,r28,16
	ctx.r8.s64 = ctx.r28.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,1184(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1184);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x836787b8
	if (!cr6.eq) goto loc_836787B8;
	// ld r11,1192(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1192);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836787bc
	goto loc_836787BC;
loc_836787B8:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_836787BC:
	// stw r11,736(r1)
	PPC_STORE_U32(ctx.r1.u32 + 736, ctx.r11.u32);
loc_836787C0:
	// addi r6,r27,-156
	ctx.r6.s64 = ctx.r27.s64 + -156;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,7
	ctx.r7.s64 = 7;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836787D8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83678818
	if (!cr6.eq) goto loc_83678818;
	// ld r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// addi r10,r1,1376
	ctx.r10.s64 = ctx.r1.s64 + 1376;
	// ld r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// addi r8,r28,16
	ctx.r8.s64 = ctx.r28.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,1376(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1376);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x83678810
	if (!cr6.eq) goto loc_83678810;
	// ld r11,1384(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1384);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83678814
	goto loc_83678814;
loc_83678810:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_83678814:
	// stw r11,740(r1)
	PPC_STORE_U32(ctx.r1.u32 + 740, ctx.r11.u32);
loc_83678818:
	// addi r6,r27,-148
	ctx.r6.s64 = ctx.r27.s64 + -148;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,11
	ctx.r7.s64 = 11;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x83678830;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83678870
	if (!cr6.eq) goto loc_83678870;
	// ld r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// addi r10,r1,848
	ctx.r10.s64 = ctx.r1.s64 + 848;
	// ld r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// addi r8,r28,16
	ctx.r8.s64 = ctx.r28.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,848(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 848);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x83678868
	if (!cr6.eq) goto loc_83678868;
	// ld r11,856(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 856);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8367886c
	goto loc_8367886C;
loc_83678868:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8367886C:
	// stw r11,744(r1)
	PPC_STORE_U32(ctx.r1.u32 + 744, ctx.r11.u32);
loc_83678870:
	// addi r6,r27,-136
	ctx.r6.s64 = ctx.r27.s64 + -136;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,18
	ctx.r7.s64 = 18;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x83678888;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836788c8
	if (!cr6.eq) goto loc_836788C8;
	// ld r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// addi r10,r1,880
	ctx.r10.s64 = ctx.r1.s64 + 880;
	// ld r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// addi r8,r28,16
	ctx.r8.s64 = ctx.r28.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,880(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 880);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x836788c0
	if (!cr6.eq) goto loc_836788C0;
	// ld r11,888(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 888);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836788c4
	goto loc_836788C4;
loc_836788C0:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_836788C4:
	// stw r11,748(r1)
	PPC_STORE_U32(ctx.r1.u32 + 748, ctx.r11.u32);
loc_836788C8:
	// addi r6,r27,-116
	ctx.r6.s64 = ctx.r27.s64 + -116;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,22
	ctx.r7.s64 = 22;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836788E0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83678920
	if (!cr6.eq) goto loc_83678920;
	// ld r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// addi r10,r1,912
	ctx.r10.s64 = ctx.r1.s64 + 912;
	// ld r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// addi r8,r28,16
	ctx.r8.s64 = ctx.r28.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,912(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 912);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x83678918
	if (!cr6.eq) goto loc_83678918;
	// ld r11,920(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 920);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8367891c
	goto loc_8367891C;
loc_83678918:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8367891C:
	// stw r11,752(r1)
	PPC_STORE_U32(ctx.r1.u32 + 752, ctx.r11.u32);
loc_83678920:
	// addi r6,r27,-92
	ctx.r6.s64 = ctx.r27.s64 + -92;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,17
	ctx.r7.s64 = 17;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x83678938;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83678978
	if (!cr6.eq) goto loc_83678978;
	// ld r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// addi r10,r1,944
	ctx.r10.s64 = ctx.r1.s64 + 944;
	// ld r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// addi r8,r28,16
	ctx.r8.s64 = ctx.r28.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,944(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 944);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x83678970
	if (!cr6.eq) goto loc_83678970;
	// ld r11,952(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 952);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83678974
	goto loc_83678974;
loc_83678970:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_83678974:
	// stw r11,756(r1)
	PPC_STORE_U32(ctx.r1.u32 + 756, ctx.r11.u32);
loc_83678978:
	// addi r6,r27,-72
	ctx.r6.s64 = ctx.r27.s64 + -72;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,19
	ctx.r7.s64 = 19;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x83678990;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836789d0
	if (!cr6.eq) goto loc_836789D0;
	// ld r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// addi r10,r1,976
	ctx.r10.s64 = ctx.r1.s64 + 976;
	// ld r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// addi r8,r28,16
	ctx.r8.s64 = ctx.r28.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,976(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 976);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x836789c8
	if (!cr6.eq) goto loc_836789C8;
	// ld r11,984(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 984);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836789cc
	goto loc_836789CC;
loc_836789C8:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_836789CC:
	// stw r11,760(r1)
	PPC_STORE_U32(ctx.r1.u32 + 760, ctx.r11.u32);
loc_836789D0:
	// addi r6,r27,-52
	ctx.r6.s64 = ctx.r27.s64 + -52;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,25
	ctx.r7.s64 = 25;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836789E8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83678a80
	if (!cr6.eq) goto loc_83678A80;
	// stw r26,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r26.u32);
	// addi r11,r1,1008
	ctx.r11.s64 = ctx.r1.s64 + 1008;
	// stw r29,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r29.u32);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// stb r29,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r29.u8);
	// addi r10,r28,16
	ctx.r10.s64 = ctx.r28.s64 + 16;
	// ld r9,16(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// ld r8,24(r28)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r5,1016(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1016);
	// lwz r4,1020(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1020);
	// bl 0x82472fc0
	ctx.lr = 0x83678A24;
	sub_82472FC0(ctx, base);
	// lwz r7,340(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r4,320(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x83678a38
	if (!cr6.lt) goto loc_83678A38;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
loc_83678A38:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83678A3C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83678a3c
	if (!cr6.eq) goto loc_83678A3C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,764
	ctx.r3.s64 = ctx.r1.s64 + 764;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x83678A60;
	sub_824208C8(ctx, base);
	// lwz r10,340(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83678a74
	if (cr6.lt) goto loc_83678A74;
	// lwz r3,320(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x82416268
	ctx.lr = 0x83678A74;
	sub_82416268(ctx, base);
loc_83678A74:
	// stw r26,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r26.u32);
	// stw r29,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r29.u32);
	// stb r29,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r29.u8);
loc_83678A80:
	// addi r6,r27,-24
	ctx.r6.s64 = ctx.r27.s64 + -24;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,20
	ctx.r7.s64 = 20;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x83678A98;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83678b30
	if (!cr6.eq) goto loc_83678B30;
	// stw r26,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r26.u32);
	// addi r11,r1,1040
	ctx.r11.s64 = ctx.r1.s64 + 1040;
	// stw r29,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r29.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stb r29,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r29.u8);
	// addi r10,r28,16
	ctx.r10.s64 = ctx.r28.s64 + 16;
	// ld r9,16(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// ld r8,24(r28)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r5,1048(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1048);
	// lwz r4,1052(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1052);
	// bl 0x82472fc0
	ctx.lr = 0x83678AD4;
	sub_82472FC0(ctx, base);
	// lwz r7,244(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x83678ae8
	if (!cr6.lt) goto loc_83678AE8;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
loc_83678AE8:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83678AEC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83678aec
	if (!cr6.eq) goto loc_83678AEC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,792
	ctx.r3.s64 = ctx.r1.s64 + 792;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x83678B10;
	sub_824208C8(ctx, base);
	// lwz r10,244(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83678b24
	if (cr6.lt) goto loc_83678B24;
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82416268
	ctx.lr = 0x83678B24;
	sub_82416268(ctx, base);
loc_83678B24:
	// stw r26,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r26.u32);
	// stw r29,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r29.u32);
	// stb r29,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r29.u8);
loc_83678B30:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83678b44
	if (cr6.lt) goto loc_83678B44;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82416268
	ctx.lr = 0x83678B44;
	sub_82416268(ctx, base);
loc_83678B44:
	// addi r28,r28,32
	ctx.r28.s64 = ctx.r28.s64 + 32;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// cmplw cr6,r28,r25
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r25.u32, xer);
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// blt cr6,0x83677b28
	if (cr6.lt) goto loc_83677B28;
	// lwz r30,1748(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1748);
loc_83678B60:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x83678bbc
	if (cr6.lt) goto loc_83678BBC;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x83678bac
	if (!cr6.gt) goto loc_83678BAC;
	// stw r23,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r23.u32);
	// addi r6,r1,172
	ctx.r6.s64 = ctx.r1.s64 + 172;
	// stw r24,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r24.u32);
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// stw r22,392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 392, ctx.r22.u32);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// stw r16,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, ctx.r16.u32);
	// stw r17,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r17.u32);
	// stw r18,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r18.u32);
	// bl 0x8247b270
	ctx.lr = 0x83678BA4;
	sub_8247B270(ctx, base);
	// stw r15,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r15.u32);
	// b 0x83678bb0
	goto loc_83678BB0;
loc_83678BAC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83678BB0:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83678be4
	if (cr6.eq) goto loc_83678BE4;
loc_83678BBC:
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mulli r10,r10,228
	ctx.r10.s64 = ctx.r10.s64 * 228;
	// add. r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83678bd8
	if (cr0.eq) goto loc_83678BD8;
	// addi r4,r1,592
	ctx.r4.s64 = ctx.r1.s64 + 592;
	// bl 0x83644c30
	ctx.lr = 0x83678BD8;
	sub_83644C30(ctx, base);
loc_83678BD8:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
loc_83678BE4:
	// lwz r31,464(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 464);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83678c00
	if (cr6.eq) goto loc_83678C00;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x83678BF8;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x83678C00;
	sub_82416268(ctx, base);
loc_83678C00:
	// lwz r11,812(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 812);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83678c14
	if (cr6.lt) goto loc_83678C14;
	// lwz r3,792(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 792);
	// bl 0x8386d088
	ctx.lr = 0x83678C14;
	sub_8386D088(ctx, base);
loc_83678C14:
	// lwz r11,784(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 784);
	// stw r26,812(r1)
	PPC_STORE_U32(ctx.r1.u32 + 812, ctx.r26.u32);
	// stw r29,808(r1)
	PPC_STORE_U32(ctx.r1.u32 + 808, ctx.r29.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r29,792(r1)
	PPC_STORE_U8(ctx.r1.u32 + 792, ctx.r29.u8);
	// blt cr6,0x83678c34
	if (cr6.lt) goto loc_83678C34;
	// lwz r3,764(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 764);
	// bl 0x8386d088
	ctx.lr = 0x83678C34;
	sub_8386D088(ctx, base);
loc_83678C34:
	// lwz r11,716(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 716);
	// stw r26,784(r1)
	PPC_STORE_U32(ctx.r1.u32 + 784, ctx.r26.u32);
	// stw r29,780(r1)
	PPC_STORE_U32(ctx.r1.u32 + 780, ctx.r29.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r29,764(r1)
	PPC_STORE_U8(ctx.r1.u32 + 764, ctx.r29.u8);
	// blt cr6,0x83678c54
	if (cr6.lt) goto loc_83678C54;
	// lwz r3,696(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 696);
	// bl 0x8386d088
	ctx.lr = 0x83678C54;
	sub_8386D088(ctx, base);
loc_83678C54:
	// addi r21,r21,16
	ctx.r21.s64 = ctx.r21.s64 + 16;
	// stw r26,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, ctx.r26.u32);
	// stw r29,712(r1)
	PPC_STORE_U32(ctx.r1.u32 + 712, ctx.r29.u32);
	// cmplw cr6,r21,r20
	cr6.compare<uint32_t>(ctx.r21.u32, ctx.r20.u32, xer);
	// stb r29,696(r1)
	PPC_STORE_U8(ctx.r1.u32 + 696, ctx.r29.u8);
	// blt cr6,0x83677ae8
	if (cr6.lt) goto loc_83677AE8;
	// lwz r31,220(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
loc_83678C70:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r5,208(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// li r7,14
	ctx.r7.s64 = 14;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x827a8810
	ctx.lr = 0x83678C88;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83678cdc
	if (!cr6.eq) goto loc_83678CDC;
	// ld r11,16(r19)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r19.u32 + 16);
	// addi r10,r1,576
	ctx.r10.s64 = ctx.r1.s64 + 576;
	// ld r9,24(r19)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r19.u32 + 24);
	// addi r8,r19,16
	ctx.r8.s64 = ctx.r19.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r11,576(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 576);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x83678cc0
	if (!cr6.eq) goto loc_83678CC0;
	// ld r11,584(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 584);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83678cd8
	goto loc_83678CD8;
loc_83678CC0:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x83678cd4
	if (!cr6.eq) goto loc_83678CD4;
	// ld r11,584(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 584);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// b 0x83678cd8
	goto loc_83678CD8;
loc_83678CD4:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_83678CD8:
	// stw r11,168(r30)
	PPC_STORE_U32(ctx.r30.u32 + 168, ctx.r11.u32);
loc_83678CDC:
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83678cf0
	if (cr6.lt) goto loc_83678CF0;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82416268
	ctx.lr = 0x83678CF0;
	sub_82416268(ctx, base);
loc_83678CF0:
	// addi r19,r19,32
	ctx.r19.s64 = ctx.r19.s64 + 32;
	// stw r26,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r26.u32);
	// stw r29,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r29.u32);
	// cmplw cr6,r19,r31
	cr6.compare<uint32_t>(ctx.r19.u32, ctx.r31.u32, xer);
	// stb r29,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r29.u8);
	// blt cr6,0x83677870
	if (cr6.lt) goto loc_83677870;
loc_83678D08:
	// lwz r31,528(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 528);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83678d24
	if (cr6.eq) goto loc_83678D24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x83678D1C;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x83678D24;
	sub_82416268(ctx, base);
loc_83678D24:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1728
	ctx.r1.s64 = ctx.r1.s64 + 1728;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83678D30"))) PPC_WEAK_FUNC(sub_83678D30);
PPC_FUNC_IMPL(__imp__sub_83678D30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83678D38;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d95768
	ctx.lr = 0x83678D44;
	sub_82D95768(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r29,r11,-31688
	ctx.r29.s64 = ctx.r11.s64 + -31688;
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824208c8
	ctx.lr = 0x83678D5C;
	sub_824208C8(ctx, base);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// addi r7,r10,-30800
	ctx.r7.s64 = ctx.r10.s64 + -30800;
	// addi r5,r8,-30816
	ctx.r5.s64 = ctx.r8.s64 + -30816;
	// addi r6,r9,-30812
	ctx.r6.s64 = ctx.r9.s64 + -30812;
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
	ctx.lr = 0x83678DA4;
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
	ctx.lr = 0x83678DC0;
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

__attribute__((alias("__imp__sub_83678DD0"))) PPC_WEAK_FUNC(sub_83678DD0);
PPC_FUNC_IMPL(__imp__sub_83678DD0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x83678e78
	sub_83678E78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83678DD8"))) PPC_WEAK_FUNC(sub_83678DD8);
PPC_FUNC_IMPL(__imp__sub_83678DD8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x83678e78
	sub_83678E78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83678DE0"))) PPC_WEAK_FUNC(sub_83678DE0);
PPC_FUNC_IMPL(__imp__sub_83678DE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83678DE8;
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
	// addi r8,r11,-30800
	ctx.r8.s64 = ctx.r11.s64 + -30800;
	// addi r7,r10,-30812
	ctx.r7.s64 = ctx.r10.s64 + -30812;
	// addi r6,r9,-30816
	ctx.r6.s64 = ctx.r9.s64 + -30816;
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
	// blt cr6,0x83678e2c
	if (cr6.lt) goto loc_83678E2C;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83678E2C;
	sub_8386D088(ctx, base);
loc_83678E2C:
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
	// blt cr6,0x83678e58
	if (cr6.lt) goto loc_83678E58;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83678E58;
	sub_8386D088(ctx, base);
loc_83678E58:
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// bl 0x82b6a590
	ctx.lr = 0x83678E6C;
	sub_82B6A590(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83678E74"))) PPC_WEAK_FUNC(sub_83678E74);
PPC_FUNC_IMPL(__imp__sub_83678E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83678E78"))) PPC_WEAK_FUNC(sub_83678E78);
PPC_FUNC_IMPL(__imp__sub_83678E78) {
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
	// bl 0x83678de0
	ctx.lr = 0x83678E98;
	sub_83678DE0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83678eb8
	if (cr6.eq) goto loc_83678EB8;
	// bl 0x82595188
	ctx.lr = 0x83678EA8;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x83678EB8;
	sub_825952B8(ctx, base);
loc_83678EB8:
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

__attribute__((alias("__imp__sub_83678ED4"))) PPC_WEAK_FUNC(sub_83678ED4);
PPC_FUNC_IMPL(__imp__sub_83678ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83678ED8"))) PPC_WEAK_FUNC(sub_83678ED8);
PPC_FUNC_IMPL(__imp__sub_83678ED8) {
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
	ctx.lr = 0x83678EF4;
	sub_82EAF8D8(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r4,r11,-31688
	ctx.r4.s64 = ctx.r11.s64 + -31688;
	// li r5,24
	ctx.r5.s64 = 24;
	// bl 0x824208c8
	ctx.lr = 0x83678F08;
	sub_824208C8(ctx, base);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// lis r7,-32216
	ctx.r7.s64 = -2111307776;
	// addi r4,r8,-30780
	ctx.r4.s64 = ctx.r8.s64 + -30780;
	// addi r3,r7,-30784
	ctx.r3.s64 = ctx.r7.s64 + -30784;
	// addi r6,r10,-30764
	ctx.r6.s64 = ctx.r10.s64 + -30764;
	// stw r4,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r4.u32);
	// addi r5,r9,-30776
	ctx.r5.s64 = ctx.r9.s64 + -30776;
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
	// li r4,20
	ctx.r4.s64 = 20;
	// stw r30,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r30.u32);
	// std r30,360(r31)
	PPC_STORE_U64(ctx.r31.u32 + 360, ctx.r30.u64);
	// bl 0x83644a38
	ctx.lr = 0x83678F54;
	sub_83644A38(ctx, base);
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

__attribute__((alias("__imp__sub_83678F74"))) PPC_WEAK_FUNC(sub_83678F74);
PPC_FUNC_IMPL(__imp__sub_83678F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83678F78"))) PPC_WEAK_FUNC(sub_83678F78);
PPC_FUNC_IMPL(__imp__sub_83678F78) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x83678f90
	sub_83678F90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83678F80"))) PPC_WEAK_FUNC(sub_83678F80);
PPC_FUNC_IMPL(__imp__sub_83678F80) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-312
	ctx.r3.s64 = ctx.r3.s64 + -312;
	// b 0x83678f90
	sub_83678F90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83678F88"))) PPC_WEAK_FUNC(sub_83678F88);
PPC_FUNC_IMPL(__imp__sub_83678F88) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x83678f90
	sub_83678F90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83678F90"))) PPC_WEAK_FUNC(sub_83678F90);
PPC_FUNC_IMPL(__imp__sub_83678F90) {
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
	// addi r7,r11,-30764
	ctx.r7.s64 = ctx.r11.s64 + -30764;
	// addi r6,r10,-30776
	ctx.r6.s64 = ctx.r10.s64 + -30776;
	// addi r5,r9,-30780
	ctx.r5.s64 = ctx.r9.s64 + -30780;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r8,-30784
	ctx.r4.s64 = ctx.r8.s64 + -30784;
	// stw r6,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r6.u32);
	// stw r5,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r5.u32);
	// addi r3,r3,352
	ctx.r3.s64 = ctx.r3.s64 + 352;
	// stw r4,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r4.u32);
	// bl 0x83644b38
	ctx.lr = 0x83678FE4;
	sub_83644B38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eaf978
	ctx.lr = 0x83678FEC;
	sub_82EAF978(ctx, base);
	// clrlwi r3,r30,31
	ctx.r3.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8367900c
	if (cr6.eq) goto loc_8367900C;
	// bl 0x82595188
	ctx.lr = 0x83678FFC;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x8367900C;
	sub_825952B8(ctx, base);
loc_8367900C:
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

__attribute__((alias("__imp__sub_83679028"))) PPC_WEAK_FUNC(sub_83679028);
PPC_FUNC_IMPL(__imp__sub_83679028) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83679030;
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
	// bge cr6,0x83679070
	if (!cr6.lt) goto loc_83679070;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e745e0
	ctx.lr = 0x83679070;
	sub_82E745E0(ctx, base);
loc_83679070:
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
	// addi r27,r11,-30600
	ctx.r27.s64 = ctx.r11.s64 + -30600;
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
	ctx.lr = 0x836790B8;
	sub_82472FC0(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836790C4;
	sub_82E74C08(ctx, base);
	// lwz r5,308(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x836790d8
	if (cr6.lt) goto loc_836790D8;
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82416268
	ctx.lr = 0x836790D8;
	sub_82416268(ctx, base);
loc_836790D8:
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
	// blt cr6,0x836790f8
	if (cr6.lt) goto loc_836790F8;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836790F8:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
loc_83679108:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83679108
	if (!cr6.eq) goto loc_83679108;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8367912C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83679138;
	sub_82E74C08(ctx, base);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8367914c
	if (cr6.lt) goto loc_8367914C;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x8367914C;
	sub_82416268(ctx, base);
loc_8367914C:
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
	ctx.lr = 0x83679174;
	sub_82472FC0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83679180;
	sub_82E74C08(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83679194
	if (cr6.lt) goto loc_83679194;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x83679194;
	sub_82416268(ctx, base);
loc_83679194:
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
	ctx.lr = 0x836791AC;
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
	ctx.lr = 0x836791C8;
	sub_82472FC0(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836791D4;
	sub_82E74C08(ctx, base);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836791e8
	if (cr6.lt) goto loc_836791E8;
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82416268
	ctx.lr = 0x836791E8;
	sub_82416268(ctx, base);
loc_836791E8:
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
	// blt cr6,0x83679208
	if (cr6.lt) goto loc_83679208;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83679208:
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
loc_83679218:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83679218
	if (!cr6.eq) goto loc_83679218;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8367923C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83679248;
	sub_82E74C08(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8367925c
	if (cr6.lt) goto loc_8367925C;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x8367925C;
	sub_82416268(ctx, base);
loc_8367925C:
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
	ctx.lr = 0x83679284;
	sub_82472FC0(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83679290;
	sub_82E74C08(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836792a4
	if (cr6.lt) goto loc_836792A4;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82416268
	ctx.lr = 0x836792A4;
	sub_82416268(ctx, base);
loc_836792A4:
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
	// blt cr6,0x836792c4
	if (cr6.lt) goto loc_836792C4;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836792C4:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
loc_836792D4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836792d4
	if (!cr6.eq) goto loc_836792D4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836792F8;
	sub_82472FC0(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83679304;
	sub_82E74C08(ctx, base);
	// lwz r10,276(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83679318
	if (cr6.lt) goto loc_83679318;
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x82416268
	ctx.lr = 0x83679318;
	sub_82416268(ctx, base);
loc_83679318:
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
	ctx.lr = 0x83679340;
	sub_82472FC0(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367934C;
	sub_82E74C08(ctx, base);
	// lwz r11,340(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83679360
	if (cr6.lt) goto loc_83679360;
	// lwz r3,320(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x82416268
	ctx.lr = 0x83679360;
	sub_82416268(ctx, base);
loc_83679360:
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
	ctx.lr = 0x83679378;
	sub_82E746C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83679384"))) PPC_WEAK_FUNC(sub_83679384);
PPC_FUNC_IMPL(__imp__sub_83679384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83679388"))) PPC_WEAK_FUNC(sub_83679388);
PPC_FUNC_IMPL(__imp__sub_83679388) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x83679390;
	__savegprlr_14(ctx, base);
	// stwu r1,-1984(r1)
	ea = -1984 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r29,864(r1)
	PPC_STORE_U32(ctx.r1.u32 + 864, ctx.r29.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r29,880(r1)
	PPC_STORE_U32(ctx.r1.u32 + 880, ctx.r29.u32);
	// stw r3,2004(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2004, ctx.r3.u32);
	// addi r3,r1,864
	ctx.r3.s64 = ctx.r1.s64 + 864;
	// bl 0x83691bb8
	ctx.lr = 0x836793BC;
	sub_83691BB8(ctx, base);
	// lwz r10,872(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 872);
	// lwz r11,876(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 876);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// add r24,r10,r11
	ctx.r24.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// cmplw cr6,r11,r24
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, xer);
	// stw r24,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r24.u32);
	// bge cr6,0x8367ac74
	if (!cr6.lt) goto loc_8367AC74;
	// lis r7,-32217
	ctx.r7.s64 = -2111373312;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r6,11
	ctx.r6.s64 = 720896;
	// lis r9,-32217
	ctx.r9.s64 = -2111373312;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r5,r7,-13424
	ctx.r5.s64 = ctx.r7.s64 + -13424;
	// li r26,15
	ctx.r26.s64 = 15;
	// li r22,8
	ctx.r22.s64 = 8;
	// stw r5,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r5.u32);
	// ori r19,r6,1
	ctx.r19.u64 = ctx.r6.u64 | 1;
	// li r20,32
	ctx.r20.s64 = 32;
	// addi r25,r11,-29868
	ctx.r25.s64 = ctx.r11.s64 + -29868;
	// addi r16,r10,27936
	ctx.r16.s64 = ctx.r10.s64 + 27936;
	// addi r21,r9,9924
	ctx.r21.s64 = ctx.r9.s64 + 9924;
	// addi r23,r8,8980
	ctx.r23.s64 = ctx.r8.s64 + 8980;
loc_83679420:
	// stw r26,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r26.u32);
	// addi r11,r1,1504
	ctx.r11.s64 = ctx.r1.s64 + 1504;
	// stw r29,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r29.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stb r29,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r29.u8);
	// ld r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r28.u32 + 8);
	// ld r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// lwz r5,1512(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1512);
	// lwz r4,1516(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1516);
	// bl 0x82472fc0
	ctx.lr = 0x83679450;
	sub_82472FC0(ctx, base);
	// addi r6,r25,-728
	ctx.r6.s64 = ctx.r25.s64 + -728;
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x827a8810
	ctx.lr = 0x83679468;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83679500
	if (!cr6.eq) goto loc_83679500;
	// stb r29,432(r1)
	PPC_STORE_U8(ctx.r1.u32 + 432, ctx.r29.u8);
	// addi r11,r1,1728
	ctx.r11.s64 = ctx.r1.s64 + 1728;
	// stw r26,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r26.u32);
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// stw r29,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r29.u32);
	// addi r10,r28,16
	ctx.r10.s64 = ctx.r28.s64 + 16;
	// ld r8,16(r28)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// ld r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r4,1740(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1740);
	// lwz r5,1736(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1736);
	// bl 0x82472fc0
	ctx.lr = 0x836794A4;
	sub_82472FC0(ctx, base);
	// lwz r7,452(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// lwz r4,432(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 432);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x836794b8
	if (!cr6.lt) goto loc_836794B8;
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
loc_836794B8:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836794BC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836794bc
	if (!cr6.eq) goto loc_836794BC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r27,20
	ctx.r3.s64 = ctx.r27.s64 + 20;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836794E0;
	sub_824208C8(ctx, base);
	// lwz r10,452(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836794f4
	if (cr6.lt) goto loc_836794F4;
	// lwz r3,432(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 432);
	// bl 0x82416268
	ctx.lr = 0x836794F4;
	sub_82416268(ctx, base);
loc_836794F4:
	// stw r26,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r26.u32);
	// stw r29,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r29.u32);
	// stb r29,432(r1)
	PPC_STORE_U8(ctx.r1.u32 + 432, ctx.r29.u8);
loc_83679500:
	// addi r6,r25,-720
	ctx.r6.s64 = ctx.r25.s64 + -720;
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x827a8810
	ctx.lr = 0x83679518;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83679558
	if (!cr6.eq) goto loc_83679558;
	// ld r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// addi r10,r1,1168
	ctx.r10.s64 = ctx.r1.s64 + 1168;
	// ld r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// addi r8,r28,16
	ctx.r8.s64 = ctx.r28.s64 + 16;
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// lwz r7,1168(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1168);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x83679550
	if (!cr6.eq) goto loc_83679550;
	// ld r11,1176(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1176);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83679554
	goto loc_83679554;
loc_83679550:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_83679554:
	// stw r11,48(r27)
	PPC_STORE_U32(ctx.r27.u32 + 48, ctx.r11.u32);
loc_83679558:
	// addi r6,r25,-712
	ctx.r6.s64 = ctx.r25.s64 + -712;
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x827a8810
	ctx.lr = 0x83679570;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83679608
	if (!cr6.eq) goto loc_83679608;
	// stw r26,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r26.u32);
	// addi r11,r1,1200
	ctx.r11.s64 = ctx.r1.s64 + 1200;
	// stw r29,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r29.u32);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// stb r29,336(r1)
	PPC_STORE_U8(ctx.r1.u32 + 336, ctx.r29.u8);
	// addi r10,r28,16
	ctx.r10.s64 = ctx.r28.s64 + 16;
	// ld r8,24(r28)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// ld r9,16(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r4,1212(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1212);
	// lwz r5,1208(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1208);
	// bl 0x82472fc0
	ctx.lr = 0x836795AC;
	sub_82472FC0(ctx, base);
	// lwz r7,356(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r4,336(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x836795c0
	if (!cr6.lt) goto loc_836795C0;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
loc_836795C0:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836795C4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836795c4
	if (!cr6.eq) goto loc_836795C4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r27,116
	ctx.r3.s64 = ctx.r27.s64 + 116;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836795E8;
	sub_824208C8(ctx, base);
	// lwz r10,356(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836795fc
	if (cr6.lt) goto loc_836795FC;
	// lwz r3,336(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// bl 0x82416268
	ctx.lr = 0x836795FC;
	sub_82416268(ctx, base);
loc_836795FC:
	// stw r26,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r26.u32);
	// stw r29,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r29.u32);
	// stb r29,336(r1)
	PPC_STORE_U8(ctx.r1.u32 + 336, ctx.r29.u8);
loc_83679608:
	// addi r6,r25,-704
	ctx.r6.s64 = ctx.r25.s64 + -704;
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r7,15
	ctx.r7.s64 = 15;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x827a8810
	ctx.lr = 0x83679620;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8367ab6c
	if (!cr6.eq) goto loc_8367AB6C;
	// lwz r11,252(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// addi r15,r27,152
	ctx.r15.s64 = ctx.r27.s64 + 152;
	// li r10,216
	ctx.r10.s64 = 216;
	// stw r22,540(r1)
	PPC_STORE_U32(ctx.r1.u32 + 540, ctx.r22.u32);
	// addi r31,r15,8
	ctx.r31.s64 = ctx.r15.s64 + 8;
	// stw r15,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r15.u32);
	// addi r30,r15,4
	ctx.r30.s64 = ctx.r15.s64 + 4;
	// stw r10,544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 544, ctx.r10.u32);
	// stw r31,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r31.u32);
	// addi r4,r1,172
	ctx.r4.s64 = ctx.r1.s64 + 172;
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// stw r30,536(r1)
	PPC_STORE_U32(ctx.r1.u32 + 536, ctx.r30.u32);
	// bl 0x8247b7d8
	ctx.lr = 0x83679660;
	sub_8247B7D8(ctx, base);
	// lwz r3,160(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 160);
	// stw r29,152(r27)
	PPC_STORE_U32(ctx.r27.u32 + 152, ctx.r29.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83679680
	if (cr6.eq) goto loc_83679680;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x8247b268
	ctx.lr = 0x83679678;
	sub_8247B268(ctx, base);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_83679680:
	// stw r23,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r23.u32);
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r14,r10,r11
	ctx.r14.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r17,r11
	ctx.r17.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r14
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r14.u32, xer);
	// bge cr6,0x8367ab6c
	if (!cr6.lt) goto loc_8367AB6C;
loc_836796A0:
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x83610ae8
	ctx.lr = 0x836796A8;
	sub_83610AE8(ctx, base);
	// stw r29,1024(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1024, ctx.r29.u32);
	// stw r29,1040(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1040, ctx.r29.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,1024
	ctx.r3.s64 = ctx.r1.s64 + 1024;
	// lwz r5,8(r17)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r17.u32 + 8);
	// lwz r4,12(r17)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r17.u32 + 12);
	// bl 0x83691bb8
	ctx.lr = 0x836796C4;
	sub_83691BB8(ctx, base);
	// lwz r10,1032(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1032);
	// lwz r11,1036(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1036);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// add r18,r10,r11
	ctx.r18.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r18
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r18.u32, xer);
	// bge cr6,0x8367ab2c
	if (!cr6.lt) goto loc_8367AB2C;
loc_836796E0:
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// addi r11,r1,1232
	ctx.r11.s64 = ctx.r1.s64 + 1232;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// ld r9,0(r24)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r24.u32 + 0);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// ld r10,8(r24)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r24.u32 + 8);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// lwz r5,1240(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1240);
	// lwz r4,1244(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1244);
	// bl 0x82472fc0
	ctx.lr = 0x83679710;
	sub_82472FC0(ctx, base);
	// addi r6,r25,-688
	ctx.r6.s64 = ctx.r25.s64 + -688;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,13
	ctx.r7.s64 = 13;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x83679728;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83679768
	if (!cr6.eq) goto loc_83679768;
	// ld r11,16(r24)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r24.u32 + 16);
	// addi r10,r1,1264
	ctx.r10.s64 = ctx.r1.s64 + 1264;
	// ld r9,24(r24)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r24.u32 + 24);
	// addi r8,r24,16
	ctx.r8.s64 = ctx.r24.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,1264(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1264);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x83679760
	if (!cr6.eq) goto loc_83679760;
	// ld r11,1272(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1272);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83679764
	goto loc_83679764;
loc_83679760:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_83679764:
	// stw r11,592(r1)
	PPC_STORE_U32(ctx.r1.u32 + 592, ctx.r11.u32);
loc_83679768:
	// addi r6,r25,-672
	ctx.r6.s64 = ctx.r25.s64 + -672;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x83679780;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836797c0
	if (!cr6.eq) goto loc_836797C0;
	// ld r11,16(r24)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r24.u32 + 16);
	// addi r10,r1,1296
	ctx.r10.s64 = ctx.r1.s64 + 1296;
	// ld r9,24(r24)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r24.u32 + 24);
	// addi r8,r24,16
	ctx.r8.s64 = ctx.r24.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,1296(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1296);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x836797b8
	if (!cr6.eq) goto loc_836797B8;
	// ld r11,1304(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1304);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836797bc
	goto loc_836797BC;
loc_836797B8:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_836797BC:
	// stw r11,596(r1)
	PPC_STORE_U32(ctx.r1.u32 + 596, ctx.r11.u32);
loc_836797C0:
	// addi r6,r25,-664
	ctx.r6.s64 = ctx.r25.s64 + -664;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836797D8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8367982c
	if (!cr6.eq) goto loc_8367982C;
	// ld r11,16(r24)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r24.u32 + 16);
	// addi r10,r1,960
	ctx.r10.s64 = ctx.r1.s64 + 960;
	// ld r9,24(r24)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r24.u32 + 24);
	// addi r8,r24,16
	ctx.r8.s64 = ctx.r24.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r11,960(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 960);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x83679810
	if (!cr6.eq) goto loc_83679810;
	// ld r11,968(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 968);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83679828
	goto loc_83679828;
loc_83679810:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x83679824
	if (!cr6.eq) goto loc_83679824;
	// ld r11,968(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 968);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// b 0x83679828
	goto loc_83679828;
loc_83679824:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_83679828:
	// stw r11,600(r1)
	PPC_STORE_U32(ctx.r1.u32 + 600, ctx.r11.u32);
loc_8367982C:
	// addi r6,r25,-656
	ctx.r6.s64 = ctx.r25.s64 + -656;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x83679844;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83679898
	if (!cr6.eq) goto loc_83679898;
	// ld r11,16(r24)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r24.u32 + 16);
	// addi r10,r1,976
	ctx.r10.s64 = ctx.r1.s64 + 976;
	// ld r9,24(r24)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r24.u32 + 24);
	// addi r8,r24,16
	ctx.r8.s64 = ctx.r24.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r11,976(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 976);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x8367987c
	if (!cr6.eq) goto loc_8367987C;
	// ld r11,984(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 984);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83679894
	goto loc_83679894;
loc_8367987C:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x83679890
	if (!cr6.eq) goto loc_83679890;
	// ld r11,984(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 984);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// b 0x83679894
	goto loc_83679894;
loc_83679890:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_83679894:
	// stw r11,604(r1)
	PPC_STORE_U32(ctx.r1.u32 + 604, ctx.r11.u32);
loc_83679898:
	// addi r6,r25,-648
	ctx.r6.s64 = ctx.r25.s64 + -648;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836798B0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83679b84
	if (!cr6.eq) goto loc_83679B84;
	// stw r29,1088(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1088, ctx.r29.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r29,1104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1104, ctx.r29.u32);
	// addi r3,r1,1088
	ctx.r3.s64 = ctx.r1.s64 + 1088;
	// lwz r5,24(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// lwz r4,28(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28);
	// bl 0x83691bb8
	ctx.lr = 0x836798D4;
	sub_83691BB8(ctx, base);
	// lwz r10,1096(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1096);
	// lwz r11,1100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1100);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x83679b68
	if (!cr6.lt) goto loc_83679B68;
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
loc_83679900:
	// stw r26,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r26.u32);
	// addi r11,r1,1328
	ctx.r11.s64 = ctx.r1.s64 + 1328;
	// stw r29,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r29.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stb r29,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r29.u8);
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
	// lwz r4,1340(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1340);
	// lwz r5,1336(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1336);
	// bl 0x82472fc0
	ctx.lr = 0x83679934;
	sub_82472FC0(ctx, base);
	// addi r6,r25,-640
	ctx.r6.s64 = ctx.r25.s64 + -640;
	// lwz r5,208(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x827a8810
	ctx.lr = 0x8367994C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8367999c
	if (!cr6.eq) goto loc_8367999C;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,912
	ctx.r10.s64 = ctx.r1.s64 + 912;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r11,912(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 912);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x83679980
	if (!cr6.eq) goto loc_83679980;
	// ld r11,920(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 920);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83679998
	goto loc_83679998;
loc_83679980:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x83679994
	if (!cr6.eq) goto loc_83679994;
	// ld r11,920(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 920);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// b 0x83679998
	goto loc_83679998;
loc_83679994:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_83679998:
	// stw r11,608(r1)
	PPC_STORE_U32(ctx.r1.u32 + 608, ctx.r11.u32);
loc_8367999C:
	// addi r6,r25,-632
	ctx.r6.s64 = ctx.r25.s64 + -632;
	// lwz r5,208(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// li r7,7
	ctx.r7.s64 = 7;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x827a8810
	ctx.lr = 0x836799B4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83679a04
	if (!cr6.eq) goto loc_83679A04;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,816
	ctx.r10.s64 = ctx.r1.s64 + 816;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r11,816(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 816);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x836799e8
	if (!cr6.eq) goto loc_836799E8;
	// ld r11,824(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 824);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83679a00
	goto loc_83679A00;
loc_836799E8:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x836799fc
	if (!cr6.eq) goto loc_836799FC;
	// ld r11,824(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 824);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// b 0x83679a00
	goto loc_83679A00;
loc_836799FC:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_83679A00:
	// stw r11,612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 612, ctx.r11.u32);
loc_83679A04:
	// addi r6,r25,-624
	ctx.r6.s64 = ctx.r25.s64 + -624;
	// lwz r5,208(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x827a8810
	ctx.lr = 0x83679A1C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83679a6c
	if (!cr6.eq) goto loc_83679A6C;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,944
	ctx.r10.s64 = ctx.r1.s64 + 944;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r11,944(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 944);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x83679a50
	if (!cr6.eq) goto loc_83679A50;
	// ld r11,952(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 952);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83679a68
	goto loc_83679A68;
loc_83679A50:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x83679a64
	if (!cr6.eq) goto loc_83679A64;
	// ld r11,952(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 952);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// b 0x83679a68
	goto loc_83679A68;
loc_83679A64:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_83679A68:
	// stw r11,616(r1)
	PPC_STORE_U32(ctx.r1.u32 + 616, ctx.r11.u32);
loc_83679A6C:
	// addi r6,r25,-616
	ctx.r6.s64 = ctx.r25.s64 + -616;
	// lwz r5,208(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// li r7,23
	ctx.r7.s64 = 23;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x827a8810
	ctx.lr = 0x83679A84;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83679ad4
	if (!cr6.eq) goto loc_83679AD4;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,832
	ctx.r10.s64 = ctx.r1.s64 + 832;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r11,832(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 832);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x83679ab8
	if (!cr6.eq) goto loc_83679AB8;
	// ld r11,840(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 840);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83679ad0
	goto loc_83679AD0;
loc_83679AB8:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x83679acc
	if (!cr6.eq) goto loc_83679ACC;
	// ld r11,840(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 840);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// b 0x83679ad0
	goto loc_83679AD0;
loc_83679ACC:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_83679AD0:
	// stw r11,620(r1)
	PPC_STORE_U32(ctx.r1.u32 + 620, ctx.r11.u32);
loc_83679AD4:
	// addi r6,r25,-592
	ctx.r6.s64 = ctx.r25.s64 + -592;
	// lwz r5,208(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// li r7,11
	ctx.r7.s64 = 11;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x827a8810
	ctx.lr = 0x83679AEC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83679b3c
	if (!cr6.eq) goto loc_83679B3C;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,848
	ctx.r10.s64 = ctx.r1.s64 + 848;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r11,848(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 848);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x83679b20
	if (!cr6.eq) goto loc_83679B20;
	// ld r11,856(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 856);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83679b38
	goto loc_83679B38;
loc_83679B20:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x83679b34
	if (!cr6.eq) goto loc_83679B34;
	// ld r11,856(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 856);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// b 0x83679b38
	goto loc_83679B38;
loc_83679B34:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_83679B38:
	// stw r11,624(r1)
	PPC_STORE_U32(ctx.r1.u32 + 624, ctx.r11.u32);
loc_83679B3C:
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83679b50
	if (cr6.lt) goto loc_83679B50;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82416268
	ctx.lr = 0x83679B50;
	sub_82416268(ctx, base);
loc_83679B50:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r26,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r26.u32);
	// stw r29,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r29.u32);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// stb r29,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r29.u8);
	// bne 0x83679900
	if (!cr0.eq) goto loc_83679900;
loc_83679B68:
	// lwz r31,1104(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1104);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83679b84
	if (cr6.eq) goto loc_83679B84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x83679B7C;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x83679B84;
	sub_82416268(ctx, base);
loc_83679B84:
	// addi r6,r25,-580
	ctx.r6.s64 = ctx.r25.s64 + -580;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,9
	ctx.r7.s64 = 9;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x83679B9C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83679bdc
	if (!cr6.eq) goto loc_83679BDC;
	// ld r11,16(r24)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r24.u32 + 16);
	// addi r10,r1,1360
	ctx.r10.s64 = ctx.r1.s64 + 1360;
	// ld r9,24(r24)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r24.u32 + 24);
	// addi r8,r24,16
	ctx.r8.s64 = ctx.r24.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,1360(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1360);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x83679bd4
	if (!cr6.eq) goto loc_83679BD4;
	// ld r11,1368(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1368);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83679bd8
	goto loc_83679BD8;
loc_83679BD4:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_83679BD8:
	// stw r11,628(r1)
	PPC_STORE_U32(ctx.r1.u32 + 628, ctx.r11.u32);
loc_83679BDC:
	// addi r6,r25,-568
	ctx.r6.s64 = ctx.r25.s64 + -568;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,13
	ctx.r7.s64 = 13;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x83679BF4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83679c34
	if (!cr6.eq) goto loc_83679C34;
	// ld r11,16(r24)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r24.u32 + 16);
	// addi r10,r1,1392
	ctx.r10.s64 = ctx.r1.s64 + 1392;
	// ld r9,24(r24)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r24.u32 + 24);
	// addi r8,r24,16
	ctx.r8.s64 = ctx.r24.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,1392(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1392);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x83679c2c
	if (!cr6.eq) goto loc_83679C2C;
	// ld r11,1400(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1400);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83679c30
	goto loc_83679C30;
loc_83679C2C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_83679C30:
	// stw r11,632(r1)
	PPC_STORE_U32(ctx.r1.u32 + 632, ctx.r11.u32);
loc_83679C34:
	// addi r6,r25,-552
	ctx.r6.s64 = ctx.r25.s64 + -552;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,15
	ctx.r7.s64 = 15;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x83679C4C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83679c8c
	if (!cr6.eq) goto loc_83679C8C;
	// ld r11,16(r24)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r24.u32 + 16);
	// addi r10,r1,1424
	ctx.r10.s64 = ctx.r1.s64 + 1424;
	// ld r9,24(r24)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r24.u32 + 24);
	// addi r8,r24,16
	ctx.r8.s64 = ctx.r24.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,1424(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1424);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x83679c84
	if (!cr6.eq) goto loc_83679C84;
	// ld r11,1432(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1432);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83679c88
	goto loc_83679C88;
loc_83679C84:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_83679C88:
	// stw r11,636(r1)
	PPC_STORE_U32(ctx.r1.u32 + 636, ctx.r11.u32);
loc_83679C8C:
	// addi r6,r25,-536
	ctx.r6.s64 = ctx.r25.s64 + -536;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x83679CA4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83679ce4
	if (!cr6.eq) goto loc_83679CE4;
	// ld r11,16(r24)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r24.u32 + 16);
	// addi r10,r1,1456
	ctx.r10.s64 = ctx.r1.s64 + 1456;
	// ld r9,24(r24)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r24.u32 + 24);
	// addi r8,r24,16
	ctx.r8.s64 = ctx.r24.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,1456(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1456);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x83679cdc
	if (!cr6.eq) goto loc_83679CDC;
	// ld r11,1464(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1464);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83679ce0
	goto loc_83679CE0;
loc_83679CDC:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_83679CE0:
	// stw r11,640(r1)
	PPC_STORE_U32(ctx.r1.u32 + 640, ctx.r11.u32);
loc_83679CE4:
	// addi r6,r25,-528
	ctx.r6.s64 = ctx.r25.s64 + -528;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,7
	ctx.r7.s64 = 7;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x83679CFC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8367a260
	if (!cr6.eq) goto loc_8367A260;
	// stw r29,992(r1)
	PPC_STORE_U32(ctx.r1.u32 + 992, ctx.r29.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r29,1008(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1008, ctx.r29.u32);
	// addi r3,r1,992
	ctx.r3.s64 = ctx.r1.s64 + 992;
	// lwz r5,24(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// lwz r4,28(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28);
	// bl 0x83691bb8
	ctx.lr = 0x83679D20;
	sub_83691BB8(ctx, base);
	// lwz r10,1000(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1000);
	// lwz r11,1004(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1004);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x8367a244
	if (!cr6.lt) goto loc_8367A244;
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
loc_83679D4C:
	// stw r26,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r26.u32);
	// addi r11,r1,1488
	ctx.r11.s64 = ctx.r1.s64 + 1488;
	// stb r29,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r29.u8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// addi r10,r31,-16
	ctx.r10.s64 = ctx.r31.s64 + -16;
	// ld r9,-8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + -8);
	// ld r8,-16(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + -16);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// lwz r5,1496(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1496);
	// lwz r4,1500(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1500);
	// bl 0x82472fc0
	ctx.lr = 0x83679D80;
	sub_82472FC0(ctx, base);
	// addi r6,r25,-520
	ctx.r6.s64 = ctx.r25.s64 + -520;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,18
	ctx.r7.s64 = 18;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x83679D98;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83679dd4
	if (!cr6.eq) goto loc_83679DD4;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,1520
	ctx.r10.s64 = ctx.r1.s64 + 1520;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,1520(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1520);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x83679dcc
	if (!cr6.eq) goto loc_83679DCC;
	// ld r11,1528(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1528);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83679dd0
	goto loc_83679DD0;
loc_83679DCC:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_83679DD0:
	// stw r11,644(r1)
	PPC_STORE_U32(ctx.r1.u32 + 644, ctx.r11.u32);
loc_83679DD4:
	// addi r6,r25,-500
	ctx.r6.s64 = ctx.r25.s64 + -500;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,21
	ctx.r7.s64 = 21;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x83679DEC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83679e28
	if (!cr6.eq) goto loc_83679E28;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,1552
	ctx.r10.s64 = ctx.r1.s64 + 1552;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,1552(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1552);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x83679e20
	if (!cr6.eq) goto loc_83679E20;
	// ld r11,1560(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1560);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83679e24
	goto loc_83679E24;
loc_83679E20:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_83679E24:
	// stw r11,648(r1)
	PPC_STORE_U32(ctx.r1.u32 + 648, ctx.r11.u32);
loc_83679E28:
	// addi r6,r25,-476
	ctx.r6.s64 = ctx.r25.s64 + -476;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,13
	ctx.r7.s64 = 13;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x83679E40;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83679e7c
	if (!cr6.eq) goto loc_83679E7C;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,1584
	ctx.r10.s64 = ctx.r1.s64 + 1584;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,1584(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1584);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x83679e74
	if (!cr6.eq) goto loc_83679E74;
	// ld r11,1592(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1592);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83679e78
	goto loc_83679E78;
loc_83679E74:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_83679E78:
	// stw r11,652(r1)
	PPC_STORE_U32(ctx.r1.u32 + 652, ctx.r11.u32);
loc_83679E7C:
	// addi r6,r25,-460
	ctx.r6.s64 = ctx.r25.s64 + -460;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,14
	ctx.r7.s64 = 14;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x83679E94;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83679ed0
	if (!cr6.eq) goto loc_83679ED0;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,1616
	ctx.r10.s64 = ctx.r1.s64 + 1616;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,1616(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1616);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x83679ec8
	if (!cr6.eq) goto loc_83679EC8;
	// ld r11,1624(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1624);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83679ecc
	goto loc_83679ECC;
loc_83679EC8:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_83679ECC:
	// stw r11,656(r1)
	PPC_STORE_U32(ctx.r1.u32 + 656, ctx.r11.u32);
loc_83679ED0:
	// addi r6,r25,-444
	ctx.r6.s64 = ctx.r25.s64 + -444;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,19
	ctx.r7.s64 = 19;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x83679EE8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83679f24
	if (!cr6.eq) goto loc_83679F24;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,1648
	ctx.r10.s64 = ctx.r1.s64 + 1648;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,1648(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1648);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x83679f1c
	if (!cr6.eq) goto loc_83679F1C;
	// ld r11,1656(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1656);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83679f20
	goto loc_83679F20;
loc_83679F1C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_83679F20:
	// stw r11,660(r1)
	PPC_STORE_U32(ctx.r1.u32 + 660, ctx.r11.u32);
loc_83679F24:
	// addi r6,r25,-424
	ctx.r6.s64 = ctx.r25.s64 + -424;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,21
	ctx.r7.s64 = 21;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x83679F3C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83679f78
	if (!cr6.eq) goto loc_83679F78;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,1680
	ctx.r10.s64 = ctx.r1.s64 + 1680;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,1680(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1680);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x83679f70
	if (!cr6.eq) goto loc_83679F70;
	// ld r11,1688(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1688);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83679f74
	goto loc_83679F74;
loc_83679F70:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_83679F74:
	// stw r11,664(r1)
	PPC_STORE_U32(ctx.r1.u32 + 664, ctx.r11.u32);
loc_83679F78:
	// addi r6,r25,-400
	ctx.r6.s64 = ctx.r25.s64 + -400;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,12
	ctx.r7.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x83679F90;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83679fcc
	if (!cr6.eq) goto loc_83679FCC;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,1712
	ctx.r10.s64 = ctx.r1.s64 + 1712;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,1712(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1712);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x83679fc4
	if (!cr6.eq) goto loc_83679FC4;
	// ld r11,1720(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1720);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83679fc8
	goto loc_83679FC8;
loc_83679FC4:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_83679FC8:
	// stw r11,668(r1)
	PPC_STORE_U32(ctx.r1.u32 + 668, ctx.r11.u32);
loc_83679FCC:
	// addi r6,r25,-384
	ctx.r6.s64 = ctx.r25.s64 + -384;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,14
	ctx.r7.s64 = 14;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x83679FE4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8367a020
	if (!cr6.eq) goto loc_8367A020;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,1744
	ctx.r10.s64 = ctx.r1.s64 + 1744;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,1744(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1744);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x8367a018
	if (!cr6.eq) goto loc_8367A018;
	// ld r11,1752(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1752);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8367a01c
	goto loc_8367A01C;
loc_8367A018:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8367A01C:
	// stw r11,672(r1)
	PPC_STORE_U32(ctx.r1.u32 + 672, ctx.r11.u32);
loc_8367A020:
	// addi r6,r25,-368
	ctx.r6.s64 = ctx.r25.s64 + -368;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,22
	ctx.r7.s64 = 22;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x8367A038;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8367a074
	if (!cr6.eq) goto loc_8367A074;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,1776
	ctx.r10.s64 = ctx.r1.s64 + 1776;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,1776(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1776);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x8367a06c
	if (!cr6.eq) goto loc_8367A06C;
	// ld r11,1784(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1784);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8367a070
	goto loc_8367A070;
loc_8367A06C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8367A070:
	// stw r11,676(r1)
	PPC_STORE_U32(ctx.r1.u32 + 676, ctx.r11.u32);
loc_8367A074:
	// addi r6,r25,-344
	ctx.r6.s64 = ctx.r25.s64 + -344;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,20
	ctx.r7.s64 = 20;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x8367A08C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8367a0c8
	if (!cr6.eq) goto loc_8367A0C8;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,1808
	ctx.r10.s64 = ctx.r1.s64 + 1808;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,1808(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1808);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x8367a0c0
	if (!cr6.eq) goto loc_8367A0C0;
	// ld r11,1816(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1816);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8367a0c4
	goto loc_8367A0C4;
loc_8367A0C0:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8367A0C4:
	// stw r11,680(r1)
	PPC_STORE_U32(ctx.r1.u32 + 680, ctx.r11.u32);
loc_8367A0C8:
	// addi r6,r25,-320
	ctx.r6.s64 = ctx.r25.s64 + -320;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,22
	ctx.r7.s64 = 22;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x8367A0E0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8367a11c
	if (!cr6.eq) goto loc_8367A11C;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,1184
	ctx.r10.s64 = ctx.r1.s64 + 1184;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,1184(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1184);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x8367a114
	if (!cr6.eq) goto loc_8367A114;
	// ld r11,1192(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1192);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8367a118
	goto loc_8367A118;
loc_8367A114:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8367A118:
	// stw r11,684(r1)
	PPC_STORE_U32(ctx.r1.u32 + 684, ctx.r11.u32);
loc_8367A11C:
	// addi r6,r25,-296
	ctx.r6.s64 = ctx.r25.s64 + -296;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,19
	ctx.r7.s64 = 19;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x8367A134;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8367a170
	if (!cr6.eq) goto loc_8367A170;
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
	// bne cr6,0x8367a168
	if (!cr6.eq) goto loc_8367A168;
	// ld r11,1160(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1160);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8367a16c
	goto loc_8367A16C;
loc_8367A168:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8367A16C:
	// stw r11,688(r1)
	PPC_STORE_U32(ctx.r1.u32 + 688, ctx.r11.u32);
loc_8367A170:
	// addi r6,r25,-276
	ctx.r6.s64 = ctx.r25.s64 + -276;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,19
	ctx.r7.s64 = 19;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x8367A188;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8367a1c4
	if (!cr6.eq) goto loc_8367A1C4;
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
	// bne cr6,0x8367a1bc
	if (!cr6.eq) goto loc_8367A1BC;
	// ld r11,1224(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1224);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8367a1c0
	goto loc_8367A1C0;
loc_8367A1BC:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8367A1C0:
	// stw r11,692(r1)
	PPC_STORE_U32(ctx.r1.u32 + 692, ctx.r11.u32);
loc_8367A1C4:
	// addi r6,r25,-256
	ctx.r6.s64 = ctx.r25.s64 + -256;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,15
	ctx.r7.s64 = 15;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827a8810
	ctx.lr = 0x8367A1DC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8367a218
	if (!cr6.eq) goto loc_8367A218;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,1664
	ctx.r10.s64 = ctx.r1.s64 + 1664;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,1664(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1664);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x8367a210
	if (!cr6.eq) goto loc_8367A210;
	// ld r11,1672(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1672);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8367a214
	goto loc_8367A214;
loc_8367A210:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8367A214:
	// stw r11,696(r1)
	PPC_STORE_U32(ctx.r1.u32 + 696, ctx.r11.u32);
loc_8367A218:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8367a22c
	if (cr6.lt) goto loc_8367A22C;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82416268
	ctx.lr = 0x8367A22C;
	sub_82416268(ctx, base);
loc_8367A22C:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r26,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r26.u32);
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// stb r29,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r29.u8);
	// bne 0x83679d4c
	if (!cr0.eq) goto loc_83679D4C;
loc_8367A244:
	// lwz r31,1008(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1008);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8367a260
	if (cr6.eq) goto loc_8367A260;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x8367A258;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x8367A260;
	sub_82416268(ctx, base);
loc_8367A260:
	// addi r6,r25,-240
	ctx.r6.s64 = ctx.r25.s64 + -240;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,9
	ctx.r7.s64 = 9;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8367A278;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8367a310
	if (!cr6.eq) goto loc_8367A310;
	// stw r26,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r26.u32);
	// addi r11,r1,1248
	ctx.r11.s64 = ctx.r1.s64 + 1248;
	// stw r29,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r29.u32);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// stb r29,368(r1)
	PPC_STORE_U8(ctx.r1.u32 + 368, ctx.r29.u8);
	// addi r10,r24,16
	ctx.r10.s64 = ctx.r24.s64 + 16;
	// ld r9,16(r24)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r24.u32 + 16);
	// ld r8,24(r24)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r24.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r5,1256(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1256);
	// lwz r4,1260(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1260);
	// bl 0x82472fc0
	ctx.lr = 0x8367A2B4;
	sub_82472FC0(ctx, base);
	// lwz r7,388(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// lwz r4,368(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x8367a2c8
	if (!cr6.lt) goto loc_8367A2C8;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
loc_8367A2C8:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8367A2CC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8367a2cc
	if (!cr6.eq) goto loc_8367A2CC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,700
	ctx.r3.s64 = ctx.r1.s64 + 700;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x8367A2F0;
	sub_824208C8(ctx, base);
	// lwz r10,388(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8367a304
	if (cr6.lt) goto loc_8367A304;
	// lwz r3,368(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// bl 0x82416268
	ctx.lr = 0x8367A304;
	sub_82416268(ctx, base);
loc_8367A304:
	// stw r26,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r26.u32);
	// stw r29,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r29.u32);
	// stb r29,368(r1)
	PPC_STORE_U8(ctx.r1.u32 + 368, ctx.r29.u8);
loc_8367A310:
	// addi r6,r25,-228
	ctx.r6.s64 = ctx.r25.s64 + -228;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,7
	ctx.r7.s64 = 7;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8367A328;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8367a368
	if (!cr6.eq) goto loc_8367A368;
	// ld r11,16(r24)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r24.u32 + 16);
	// addi r10,r1,1536
	ctx.r10.s64 = ctx.r1.s64 + 1536;
	// ld r9,24(r24)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r24.u32 + 24);
	// addi r8,r24,16
	ctx.r8.s64 = ctx.r24.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,1536(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1536);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x8367a360
	if (!cr6.eq) goto loc_8367A360;
	// ld r11,1544(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1544);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8367a364
	goto loc_8367A364;
loc_8367A360:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8367A364:
	// stw r11,728(r1)
	PPC_STORE_U32(ctx.r1.u32 + 728, ctx.r11.u32);
loc_8367A368:
	// addi r6,r25,-220
	ctx.r6.s64 = ctx.r25.s64 + -220;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,11
	ctx.r7.s64 = 11;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8367A380;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8367a3c0
	if (!cr6.eq) goto loc_8367A3C0;
	// ld r11,16(r24)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r24.u32 + 16);
	// addi r10,r1,1280
	ctx.r10.s64 = ctx.r1.s64 + 1280;
	// ld r9,24(r24)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r24.u32 + 24);
	// addi r8,r24,16
	ctx.r8.s64 = ctx.r24.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,1280(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1280);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x8367a3b8
	if (!cr6.eq) goto loc_8367A3B8;
	// ld r11,1288(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1288);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8367a3bc
	goto loc_8367A3BC;
loc_8367A3B8:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8367A3BC:
	// stw r11,732(r1)
	PPC_STORE_U32(ctx.r1.u32 + 732, ctx.r11.u32);
loc_8367A3C0:
	// addi r6,r25,-208
	ctx.r6.s64 = ctx.r25.s64 + -208;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,18
	ctx.r7.s64 = 18;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8367A3D8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8367a418
	if (!cr6.eq) goto loc_8367A418;
	// ld r11,16(r24)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r24.u32 + 16);
	// addi r10,r1,1792
	ctx.r10.s64 = ctx.r1.s64 + 1792;
	// ld r9,24(r24)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r24.u32 + 24);
	// addi r8,r24,16
	ctx.r8.s64 = ctx.r24.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,1792(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1792);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x8367a410
	if (!cr6.eq) goto loc_8367A410;
	// ld r11,1800(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1800);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8367a414
	goto loc_8367A414;
loc_8367A410:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8367A414:
	// stw r11,736(r1)
	PPC_STORE_U32(ctx.r1.u32 + 736, ctx.r11.u32);
loc_8367A418:
	// addi r6,r25,-188
	ctx.r6.s64 = ctx.r25.s64 + -188;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,14
	ctx.r7.s64 = 14;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8367A430;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8367a470
	if (!cr6.eq) goto loc_8367A470;
	// ld r11,16(r24)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r24.u32 + 16);
	// addi r10,r1,1312
	ctx.r10.s64 = ctx.r1.s64 + 1312;
	// ld r9,24(r24)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r24.u32 + 24);
	// addi r8,r24,16
	ctx.r8.s64 = ctx.r24.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,1312(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1312);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x8367a468
	if (!cr6.eq) goto loc_8367A468;
	// ld r11,1320(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1320);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8367a46c
	goto loc_8367A46C;
loc_8367A468:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8367A46C:
	// stw r11,740(r1)
	PPC_STORE_U32(ctx.r1.u32 + 740, ctx.r11.u32);
loc_8367A470:
	// addi r6,r25,-172
	ctx.r6.s64 = ctx.r25.s64 + -172;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,10
	ctx.r7.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8367A488;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8367a6f8
	if (!cr6.eq) goto loc_8367A6F8;
	// stw r29,1056(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1056, ctx.r29.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r29,1072(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1072, ctx.r29.u32);
	// addi r3,r1,1056
	ctx.r3.s64 = ctx.r1.s64 + 1056;
	// lwz r5,24(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// lwz r4,28(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28);
	// bl 0x83691bb8
	ctx.lr = 0x8367A4AC;
	sub_83691BB8(ctx, base);
	// lwz r10,1064(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1064);
	// lwz r11,1068(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1068);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x8367a6dc
	if (!cr6.lt) goto loc_8367A6DC;
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
loc_8367A4D8:
	// stw r26,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r26.u32);
	// addi r11,r1,1568
	ctx.r11.s64 = ctx.r1.s64 + 1568;
	// stw r29,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r29.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stb r29,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r29.u8);
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
	// lwz r5,1576(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1576);
	// lwz r4,1580(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1580);
	// bl 0x82472fc0
	ctx.lr = 0x8367A50C;
	sub_82472FC0(ctx, base);
	// addi r6,r25,-160
	ctx.r6.s64 = ctx.r25.s64 + -160;
	// lwz r5,240(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x827a8810
	ctx.lr = 0x8367A524;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8367a560
	if (!cr6.eq) goto loc_8367A560;
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
	// bne cr6,0x8367a558
	if (!cr6.eq) goto loc_8367A558;
	// ld r11,1352(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1352);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8367a55c
	goto loc_8367A55C;
loc_8367A558:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8367A55C:
	// stw r11,744(r1)
	PPC_STORE_U32(ctx.r1.u32 + 744, ctx.r11.u32);
loc_8367A560:
	// addi r6,r25,-152
	ctx.r6.s64 = ctx.r25.s64 + -152;
	// lwz r5,240(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// li r7,11
	ctx.r7.s64 = 11;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x827a8810
	ctx.lr = 0x8367A578;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8367a5b4
	if (!cr6.eq) goto loc_8367A5B4;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,1696
	ctx.r10.s64 = ctx.r1.s64 + 1696;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,1696(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1696);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x8367a5ac
	if (!cr6.eq) goto loc_8367A5AC;
	// ld r11,1704(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1704);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8367a5b0
	goto loc_8367A5B0;
loc_8367A5AC:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8367A5B0:
	// stw r11,748(r1)
	PPC_STORE_U32(ctx.r1.u32 + 748, ctx.r11.u32);
loc_8367A5B4:
	// addi r6,r25,-140
	ctx.r6.s64 = ctx.r25.s64 + -140;
	// lwz r5,240(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// li r7,9
	ctx.r7.s64 = 9;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x827a8810
	ctx.lr = 0x8367A5CC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8367a608
	if (!cr6.eq) goto loc_8367A608;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,1376
	ctx.r10.s64 = ctx.r1.s64 + 1376;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,1376(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1376);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x8367a600
	if (!cr6.eq) goto loc_8367A600;
	// ld r11,1384(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1384);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8367a604
	goto loc_8367A604;
loc_8367A600:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8367A604:
	// stw r11,752(r1)
	PPC_STORE_U32(ctx.r1.u32 + 752, ctx.r11.u32);
loc_8367A608:
	// addi r6,r25,-128
	ctx.r6.s64 = ctx.r25.s64 + -128;
	// lwz r5,240(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// li r7,17
	ctx.r7.s64 = 17;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x827a8810
	ctx.lr = 0x8367A620;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8367a65c
	if (!cr6.eq) goto loc_8367A65C;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,1600
	ctx.r10.s64 = ctx.r1.s64 + 1600;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,1600(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1600);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x8367a654
	if (!cr6.eq) goto loc_8367A654;
	// ld r11,1608(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1608);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8367a658
	goto loc_8367A658;
loc_8367A654:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8367A658:
	// stw r11,756(r1)
	PPC_STORE_U32(ctx.r1.u32 + 756, ctx.r11.u32);
loc_8367A65C:
	// addi r6,r25,-108
	ctx.r6.s64 = ctx.r25.s64 + -108;
	// lwz r5,240(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// li r7,17
	ctx.r7.s64 = 17;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x827a8810
	ctx.lr = 0x8367A674;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8367a6b0
	if (!cr6.eq) goto loc_8367A6B0;
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
	// bne cr6,0x8367a6a8
	if (!cr6.eq) goto loc_8367A6A8;
	// ld r11,1416(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1416);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8367a6ac
	goto loc_8367A6AC;
loc_8367A6A8:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8367A6AC:
	// stw r11,760(r1)
	PPC_STORE_U32(ctx.r1.u32 + 760, ctx.r11.u32);
loc_8367A6B0:
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8367a6c4
	if (cr6.lt) goto loc_8367A6C4;
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82416268
	ctx.lr = 0x8367A6C4;
	sub_82416268(ctx, base);
loc_8367A6C4:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r26,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r26.u32);
	// stw r29,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r29.u32);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// stb r29,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r29.u8);
	// bne 0x8367a4d8
	if (!cr0.eq) goto loc_8367A4D8;
loc_8367A6DC:
	// lwz r31,1072(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1072);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8367a6f8
	if (cr6.eq) goto loc_8367A6F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x8367A6F0;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x8367A6F8;
	sub_82416268(ctx, base);
loc_8367A6F8:
	// addi r6,r25,-88
	ctx.r6.s64 = ctx.r25.s64 + -88;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,12
	ctx.r7.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8367A710;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8367a7a8
	if (!cr6.eq) goto loc_8367A7A8;
	// stw r26,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r26.u32);
	// addi r11,r1,1760
	ctx.r11.s64 = ctx.r1.s64 + 1760;
	// stw r29,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r29.u32);
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// stb r29,400(r1)
	PPC_STORE_U8(ctx.r1.u32 + 400, ctx.r29.u8);
	// addi r10,r24,16
	ctx.r10.s64 = ctx.r24.s64 + 16;
	// ld r9,16(r24)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r24.u32 + 16);
	// ld r8,24(r24)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r24.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r5,1768(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1768);
	// lwz r4,1772(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1772);
	// bl 0x82472fc0
	ctx.lr = 0x8367A74C;
	sub_82472FC0(ctx, base);
	// lwz r7,420(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	// lwz r4,400(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x8367a760
	if (!cr6.lt) goto loc_8367A760;
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
loc_8367A760:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8367A764:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8367a764
	if (!cr6.eq) goto loc_8367A764;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,764
	ctx.r3.s64 = ctx.r1.s64 + 764;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x8367A788;
	sub_824208C8(ctx, base);
	// lwz r10,420(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8367a79c
	if (cr6.lt) goto loc_8367A79C;
	// lwz r3,400(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	// bl 0x82416268
	ctx.lr = 0x8367A79C;
	sub_82416268(ctx, base);
loc_8367A79C:
	// stw r26,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r26.u32);
	// stw r29,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r29.u32);
	// stb r29,400(r1)
	PPC_STORE_U8(ctx.r1.u32 + 400, ctx.r29.u8);
loc_8367A7A8:
	// addi r6,r25,-72
	ctx.r6.s64 = ctx.r25.s64 + -72;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,17
	ctx.r7.s64 = 17;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8367A7C0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8367ab00
	if (!cr6.eq) goto loc_8367AB00;
	// addi r11,r1,800
	ctx.r11.s64 = ctx.r1.s64 + 800;
	// stw r21,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r21.u32);
	// addi r10,r1,792
	ctx.r10.s64 = ctx.r1.s64 + 792;
	// stw r22,572(r1)
	PPC_STORE_U32(ctx.r1.u32 + 572, ctx.r22.u32);
	// addi r9,r1,796
	ctx.r9.s64 = ctx.r1.s64 + 796;
	// stw r11,560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 560, ctx.r11.u32);
	// stw r10,564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 564, ctx.r10.u32);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// stw r9,568(r1)
	PPC_STORE_U32(ctx.r1.u32 + 568, ctx.r9.u32);
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// stw r20,576(r1)
	PPC_STORE_U32(ctx.r1.u32 + 576, ctx.r20.u32);
	// bl 0x8247b7d8
	ctx.lr = 0x8367A7F8;
	sub_8247B7D8(ctx, base);
	// lwz r3,800(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 800);
	// stw r29,792(r1)
	PPC_STORE_U32(ctx.r1.u32 + 792, ctx.r29.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8367a818
	if (cr6.eq) goto loc_8367A818;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x8247b268
	ctx.lr = 0x8367A810;
	sub_8247B268(ctx, base);
	// stw r29,796(r1)
	PPC_STORE_U32(ctx.r1.u32 + 796, ctx.r29.u32);
	// stw r29,800(r1)
	PPC_STORE_U32(ctx.r1.u32 + 800, ctx.r29.u32);
loc_8367A818:
	// stw r23,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r23.u32);
	// lwz r10,24(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// lwz r11,28(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x8367aaf8
	if (!cr6.lt) goto loc_8367AAF8;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r28,r11,12
	ctx.r28.s64 = ctx.r11.s64 + 12;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// addi r27,r11,1
	ctx.r27.s64 = ctx.r11.s64 + 1;
loc_8367A848:
	// stw r26,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r26.u32);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// stw r29,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r29.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stb r29,304(r1)
	PPC_STORE_U8(ctx.r1.u32 + 304, ctx.r29.u8);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x824208c8
	ctx.lr = 0x8367A864;
	sub_824208C8(ctx, base);
	// stw r29,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r29.u32);
	// stw r29,1120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1120, ctx.r29.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r29,1136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1136, ctx.r29.u32);
	// addi r3,r1,1120
	ctx.r3.s64 = ctx.r1.s64 + 1120;
	// lwz r5,-4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4);
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x83691bb8
	ctx.lr = 0x8367A884;
	sub_83691BB8(ctx, base);
	// lwz r11,1128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1128);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r31,1132(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1132);
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// bge cr6,0x8367aa00
	if (!cr6.lt) goto loc_8367AA00;
loc_8367A89C:
	// stw r26,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r26.u32);
	// addi r11,r1,1440
	ctx.r11.s64 = ctx.r1.s64 + 1440;
	// stw r29,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r29.u32);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// stb r29,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r29.u8);
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r4,1452(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1452);
	// lwz r5,1448(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1448);
	// bl 0x82472fc0
	ctx.lr = 0x8367A8CC;
	sub_82472FC0(ctx, base);
	// addi r6,r25,-52
	ctx.r6.s64 = ctx.r25.s64 + -52;
	// lwz r5,288(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// li r7,17
	ctx.r7.s64 = 17;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x827a8810
	ctx.lr = 0x8367A8E4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8367a97c
	if (!cr6.eq) goto loc_8367A97C;
	// stw r26,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r26.u32);
	// addi r11,r1,1632
	ctx.r11.s64 = ctx.r1.s64 + 1632;
	// stw r29,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, ctx.r29.u32);
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// stb r29,464(r1)
	PPC_STORE_U8(ctx.r1.u32 + 464, ctx.r29.u8);
	// addi r10,r31,16
	ctx.r10.s64 = ctx.r31.s64 + 16;
	// ld r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ld r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r4,1644(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1644);
	// lwz r5,1640(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1640);
	// bl 0x82472fc0
	ctx.lr = 0x8367A920;
	sub_82472FC0(ctx, base);
	// lwz r7,484(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 484);
	// lwz r4,464(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 464);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x8367a934
	if (!cr6.lt) goto loc_8367A934;
	// addi r4,r1,464
	ctx.r4.s64 = ctx.r1.s64 + 464;
loc_8367A934:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8367A938:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8367a938
	if (!cr6.eq) goto loc_8367A938;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x8367A95C;
	sub_824208C8(ctx, base);
	// lwz r10,484(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 484);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8367a970
	if (cr6.lt) goto loc_8367A970;
	// lwz r3,464(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 464);
	// bl 0x82416268
	ctx.lr = 0x8367A970;
	sub_82416268(ctx, base);
loc_8367A970:
	// stw r26,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r26.u32);
	// stw r29,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, ctx.r29.u32);
	// stb r29,464(r1)
	PPC_STORE_U8(ctx.r1.u32 + 464, ctx.r29.u8);
loc_8367A97C:
	// addi r6,r25,-32
	ctx.r6.s64 = ctx.r25.s64 + -32;
	// lwz r5,288(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// li r7,10
	ctx.r7.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x827a8810
	ctx.lr = 0x8367A994;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8367a9d4
	if (!cr6.eq) goto loc_8367A9D4;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// addi r10,r1,1472
	ctx.r10.s64 = ctx.r1.s64 + 1472;
	// ld r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// addi r8,r31,16
	ctx.r8.s64 = ctx.r31.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,1472(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1472);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x8367a9cc
	if (!cr6.eq) goto loc_8367A9CC;
	// ld r11,1480(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 1480);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8367a9d0
	goto loc_8367A9D0;
loc_8367A9CC:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8367A9D0:
	// stw r11,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r11.u32);
loc_8367A9D4:
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8367a9e8
	if (cr6.lt) goto loc_8367A9E8;
	// lwz r3,272(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// bl 0x82416268
	ctx.lr = 0x8367A9E8;
	sub_82416268(ctx, base);
loc_8367A9E8:
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// stw r26,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r26.u32);
	// stw r29,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r29.u32);
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, xer);
	// stb r29,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r29.u8);
	// blt cr6,0x8367a89c
	if (cr6.lt) goto loc_8367A89C;
loc_8367AA00:
	// lwz r9,792(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 792);
	// lwz r11,796(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 796);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// blt cr6,0x8367aa6c
	if (cr6.lt) goto loc_8367AA6C;
	// addi r4,r9,2
	ctx.r4.s64 = ctx.r9.s64 + 2;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// ble cr6,0x8367aa5c
	if (!cr6.gt) goto loc_8367AA5C;
	// addi r11,r1,800
	ctx.r11.s64 = ctx.r1.s64 + 800;
	// stw r21,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r21.u32);
	// addi r10,r1,792
	ctx.r10.s64 = ctx.r1.s64 + 792;
	// stw r22,508(r1)
	PPC_STORE_U32(ctx.r1.u32 + 508, ctx.r22.u32);
	// addi r9,r1,796
	ctx.r9.s64 = ctx.r1.s64 + 796;
	// stw r11,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r11.u32);
	// stw r10,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r10.u32);
	// addi r6,r1,184
	ctx.r6.s64 = ctx.r1.s64 + 184;
	// stw r9,504(r1)
	PPC_STORE_U32(ctx.r1.u32 + 504, ctx.r9.u32);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// stw r20,512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 512, ctx.r20.u32);
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x8247b270
	ctx.lr = 0x8367AA50;
	sub_8247B270(ctx, base);
	// lwz r9,792(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 792);
	// stw r23,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r23.u32);
	// b 0x8367aa60
	goto loc_8367AA60;
loc_8367AA5C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8367AA60:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8367aab0
	if (cr6.eq) goto loc_8367AAB0;
loc_8367AA6C:
	// lwz r11,800(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 800);
	// rlwinm r10,r9,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// add. r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// beq 0x8367aaa8
	if (cr0.eq) goto loc_8367AAA8;
	// stw r26,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r26.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r29,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r29.u8);
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82420558
	ctx.lr = 0x8367AA9C;
	sub_82420558(ctx, base);
	// lwz r11,332(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r9,792(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 792);
loc_8367AAA8:
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// stw r11,792(r1)
	PPC_STORE_U32(ctx.r1.u32 + 792, ctx.r11.u32);
loc_8367AAB0:
	// lwz r31,1136(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1136);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8367aacc
	if (cr6.eq) goto loc_8367AACC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x8367AAC4;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x8367AACC;
	sub_82416268(ctx, base);
loc_8367AACC:
	// lwz r11,324(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8367aae0
	if (cr6.lt) goto loc_8367AAE0;
	// lwz r3,304(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// bl 0x8386d088
	ctx.lr = 0x8367AAE0;
	sub_8386D088(ctx, base);
loc_8367AAE0:
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// stw r26,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r26.u32);
	// stw r29,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r29.u32);
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// stb r29,304(r1)
	PPC_STORE_U8(ctx.r1.u32 + 304, ctx.r29.u8);
	// bne 0x8367a848
	if (!cr0.eq) goto loc_8367A848;
loc_8367AAF8:
	// lwz r28,180(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r27,2004(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2004);
loc_8367AB00:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8367ab14
	if (cr6.lt) goto loc_8367AB14;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82416268
	ctx.lr = 0x8367AB14;
	sub_82416268(ctx, base);
loc_8367AB14:
	// addi r24,r24,32
	ctx.r24.s64 = ctx.r24.s64 + 32;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// cmplw cr6,r24,r18
	cr6.compare<uint32_t>(ctx.r24.u32, ctx.r18.u32, xer);
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// blt cr6,0x836796e0
	if (cr6.lt) goto loc_836796E0;
loc_8367AB2C:
	// addi r4,r1,592
	ctx.r4.s64 = ctx.r1.s64 + 592;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x83610958
	ctx.lr = 0x8367AB38;
	sub_83610958(ctx, base);
	// lwz r31,1040(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1040);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8367ab54
	if (cr6.eq) goto loc_8367AB54;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x8367AB4C;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x8367AB54;
	sub_82416268(ctx, base);
loc_8367AB54:
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x83610738
	ctx.lr = 0x8367AB5C;
	sub_83610738(ctx, base);
	// addi r17,r17,16
	ctx.r17.s64 = ctx.r17.s64 + 16;
	// cmplw cr6,r17,r14
	cr6.compare<uint32_t>(ctx.r17.u32, ctx.r14.u32, xer);
	// blt cr6,0x836796a0
	if (cr6.lt) goto loc_836796A0;
	// lwz r24,256(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
loc_8367AB6C:
	// addi r6,r25,-20
	ctx.r6.s64 = ctx.r25.s64 + -20;
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r7,19
	ctx.r7.s64 = 19;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x827a8810
	ctx.lr = 0x8367AB84;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8367abd8
	if (!cr6.eq) goto loc_8367ABD8;
	// ld r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// addi r10,r1,896
	ctx.r10.s64 = ctx.r1.s64 + 896;
	// ld r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// addi r8,r28,16
	ctx.r8.s64 = ctx.r28.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r11,896(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 896);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x8367abbc
	if (!cr6.eq) goto loc_8367ABBC;
	// ld r11,904(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 904);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8367abd4
	goto loc_8367ABD4;
loc_8367ABBC:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x8367abd0
	if (!cr6.eq) goto loc_8367ABD0;
	// ld r11,904(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 904);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// b 0x8367abd4
	goto loc_8367ABD4;
loc_8367ABD0:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8367ABD4:
	// stw r11,168(r27)
	PPC_STORE_U32(ctx.r27.u32 + 168, ctx.r11.u32);
loc_8367ABD8:
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r7,19
	ctx.r7.s64 = 19;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x827a8810
	ctx.lr = 0x8367ABF0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8367ac44
	if (!cr6.eq) goto loc_8367AC44;
	// ld r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 16);
	// addi r10,r1,928
	ctx.r10.s64 = ctx.r1.s64 + 928;
	// ld r9,24(r28)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r28.u32 + 24);
	// addi r8,r28,16
	ctx.r8.s64 = ctx.r28.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r11,928(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 928);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x8367ac28
	if (!cr6.eq) goto loc_8367AC28;
	// ld r11,936(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 936);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8367ac40
	goto loc_8367AC40;
loc_8367AC28:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x8367ac3c
	if (!cr6.eq) goto loc_8367AC3C;
	// ld r11,936(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 936);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// b 0x8367ac40
	goto loc_8367AC40;
loc_8367AC3C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8367AC40:
	// stw r11,172(r27)
	PPC_STORE_U32(ctx.r27.u32 + 172, ctx.r11.u32);
loc_8367AC44:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8367ac58
	if (cr6.lt) goto loc_8367AC58;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82416268
	ctx.lr = 0x8367AC58;
	sub_82416268(ctx, base);
loc_8367AC58:
	// addi r28,r28,32
	ctx.r28.s64 = ctx.r28.s64 + 32;
	// stw r26,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r26.u32);
	// stw r29,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r29.u32);
	// stw r28,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r28.u32);
	// cmplw cr6,r28,r24
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r24.u32, xer);
	// stb r29,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r29.u8);
	// blt cr6,0x83679420
	if (cr6.lt) goto loc_83679420;
loc_8367AC74:
	// lwz r31,880(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 880);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8367ac90
	if (cr6.eq) goto loc_8367AC90;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x8367AC88;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x8367AC90;
	sub_82416268(ctx, base);
loc_8367AC90:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1984
	ctx.r1.s64 = ctx.r1.s64 + 1984;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8367AC9C"))) PPC_WEAK_FUNC(sub_8367AC9C);
PPC_FUNC_IMPL(__imp__sub_8367AC9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8367ACA0"))) PPC_WEAK_FUNC(sub_8367ACA0);
PPC_FUNC_IMPL(__imp__sub_8367ACA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8367ACA8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d95768
	ctx.lr = 0x8367ACB4;
	sub_82D95768(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r29,r11,-30696
	ctx.r29.s64 = ctx.r11.s64 + -30696;
	// li r5,29
	ctx.r5.s64 = 29;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824208c8
	ctx.lr = 0x8367ACCC;
	sub_824208C8(ctx, base);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// addi r7,r10,-29748
	ctx.r7.s64 = ctx.r10.s64 + -29748;
	// addi r5,r8,-29764
	ctx.r5.s64 = ctx.r8.s64 + -29764;
	// addi r6,r9,-29760
	ctx.r6.s64 = ctx.r9.s64 + -29760;
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
	ctx.lr = 0x8367AD14;
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
	ctx.lr = 0x8367AD30;
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

__attribute__((alias("__imp__sub_8367AD40"))) PPC_WEAK_FUNC(sub_8367AD40);
PPC_FUNC_IMPL(__imp__sub_8367AD40) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x8367ade8
	sub_8367ADE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8367AD48"))) PPC_WEAK_FUNC(sub_8367AD48);
PPC_FUNC_IMPL(__imp__sub_8367AD48) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x8367ade8
	sub_8367ADE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8367AD50"))) PPC_WEAK_FUNC(sub_8367AD50);
PPC_FUNC_IMPL(__imp__sub_8367AD50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8367AD58;
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
	// addi r8,r11,-29748
	ctx.r8.s64 = ctx.r11.s64 + -29748;
	// addi r7,r10,-29760
	ctx.r7.s64 = ctx.r10.s64 + -29760;
	// addi r6,r9,-29764
	ctx.r6.s64 = ctx.r9.s64 + -29764;
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
	// blt cr6,0x8367ad9c
	if (cr6.lt) goto loc_8367AD9C;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8367AD9C;
	sub_8386D088(ctx, base);
loc_8367AD9C:
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
	// blt cr6,0x8367adc8
	if (cr6.lt) goto loc_8367ADC8;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8367ADC8;
	sub_8386D088(ctx, base);
loc_8367ADC8:
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// bl 0x82b6a590
	ctx.lr = 0x8367ADDC;
	sub_82B6A590(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8367ADE4"))) PPC_WEAK_FUNC(sub_8367ADE4);
PPC_FUNC_IMPL(__imp__sub_8367ADE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8367ADE8"))) PPC_WEAK_FUNC(sub_8367ADE8);
PPC_FUNC_IMPL(__imp__sub_8367ADE8) {
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
	// bl 0x8367ad50
	ctx.lr = 0x8367AE08;
	sub_8367AD50(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8367ae28
	if (cr6.eq) goto loc_8367AE28;
	// bl 0x82595188
	ctx.lr = 0x8367AE18;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x8367AE28;
	sub_825952B8(ctx, base);
loc_8367AE28:
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

__attribute__((alias("__imp__sub_8367AE44"))) PPC_WEAK_FUNC(sub_8367AE44);
PPC_FUNC_IMPL(__imp__sub_8367AE44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8367AE48"))) PPC_WEAK_FUNC(sub_8367AE48);
PPC_FUNC_IMPL(__imp__sub_8367AE48) {
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
	ctx.lr = 0x8367AE64;
	sub_82EAF8D8(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r4,r11,-30696
	ctx.r4.s64 = ctx.r11.s64 + -30696;
	// li r5,29
	ctx.r5.s64 = 29;
	// bl 0x824208c8
	ctx.lr = 0x8367AE78;
	sub_824208C8(ctx, base);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// lis r7,-32216
	ctx.r7.s64 = -2111307776;
	// addi r4,r8,-29728
	ctx.r4.s64 = ctx.r8.s64 + -29728;
	// addi r3,r7,-29732
	ctx.r3.s64 = ctx.r7.s64 + -29732;
	// addi r6,r10,-29712
	ctx.r6.s64 = ctx.r10.s64 + -29712;
	// stw r4,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r4.u32);
	// addi r5,r9,-29724
	ctx.r5.s64 = ctx.r9.s64 + -29724;
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
	// li r4,250
	ctx.r4.s64 = 250;
	// stw r30,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r30.u32);
	// std r30,360(r31)
	PPC_STORE_U64(ctx.r31.u32 + 360, ctx.r30.u64);
	// bl 0x83610638
	ctx.lr = 0x8367AEC4;
	sub_83610638(ctx, base);
	// stw r30,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r30.u32);
	// stw r30,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_8367AEE8"))) PPC_WEAK_FUNC(sub_8367AEE8);
PPC_FUNC_IMPL(__imp__sub_8367AEE8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x8367af00
	sub_8367AF00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8367AEF0"))) PPC_WEAK_FUNC(sub_8367AEF0);
PPC_FUNC_IMPL(__imp__sub_8367AEF0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-312
	ctx.r3.s64 = ctx.r3.s64 + -312;
	// b 0x8367af00
	sub_8367AF00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8367AEF8"))) PPC_WEAK_FUNC(sub_8367AEF8);
PPC_FUNC_IMPL(__imp__sub_8367AEF8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x8367af00
	sub_8367AF00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8367AF00"))) PPC_WEAK_FUNC(sub_8367AF00);
PPC_FUNC_IMPL(__imp__sub_8367AF00) {
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
	// addi r7,r11,-29712
	ctx.r7.s64 = ctx.r11.s64 + -29712;
	// addi r6,r10,-29724
	ctx.r6.s64 = ctx.r10.s64 + -29724;
	// addi r5,r9,-29728
	ctx.r5.s64 = ctx.r9.s64 + -29728;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r8,-29732
	ctx.r4.s64 = ctx.r8.s64 + -29732;
	// stw r6,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r6.u32);
	// stw r5,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r5.u32);
	// addi r3,r3,352
	ctx.r3.s64 = ctx.r3.s64 + 352;
	// stw r4,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r4.u32);
	// bl 0x836106b8
	ctx.lr = 0x8367AF54;
	sub_836106B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eaf978
	ctx.lr = 0x8367AF5C;
	sub_82EAF978(ctx, base);
	// clrlwi r3,r30,31
	ctx.r3.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8367af7c
	if (cr6.eq) goto loc_8367AF7C;
	// bl 0x82595188
	ctx.lr = 0x8367AF6C;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x8367AF7C;
	sub_825952B8(ctx, base);
loc_8367AF7C:
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

__attribute__((alias("__imp__sub_8367AF98"))) PPC_WEAK_FUNC(sub_8367AF98);
PPC_FUNC_IMPL(__imp__sub_8367AF98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8367AFA0;
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
	// bge cr6,0x8367afe0
	if (!cr6.lt) goto loc_8367AFE0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e745e0
	ctx.lr = 0x8367AFE0;
	sub_82E745E0(ctx, base);
loc_8367AFE0:
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
	// addi r27,r11,-29556
	ctx.r27.s64 = ctx.r11.s64 + -29556;
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
	ctx.lr = 0x8367B028;
	sub_82472FC0(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367B034;
	sub_82E74C08(ctx, base);
	// lwz r5,308(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x8367b048
	if (cr6.lt) goto loc_8367B048;
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82416268
	ctx.lr = 0x8367B048;
	sub_82416268(ctx, base);
loc_8367B048:
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
	// blt cr6,0x8367b068
	if (cr6.lt) goto loc_8367B068;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8367B068:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
loc_8367B078:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8367b078
	if (!cr6.eq) goto loc_8367B078;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8367B09C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367B0A8;
	sub_82E74C08(ctx, base);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8367b0bc
	if (cr6.lt) goto loc_8367B0BC;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x8367B0BC;
	sub_82416268(ctx, base);
loc_8367B0BC:
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
	ctx.lr = 0x8367B0E4;
	sub_82472FC0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367B0F0;
	sub_82E74C08(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8367b104
	if (cr6.lt) goto loc_8367B104;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x8367B104;
	sub_82416268(ctx, base);
loc_8367B104:
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
	ctx.lr = 0x8367B11C;
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
	ctx.lr = 0x8367B138;
	sub_82472FC0(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367B144;
	sub_82E74C08(ctx, base);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8367b158
	if (cr6.lt) goto loc_8367B158;
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82416268
	ctx.lr = 0x8367B158;
	sub_82416268(ctx, base);
loc_8367B158:
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
	// blt cr6,0x8367b178
	if (cr6.lt) goto loc_8367B178;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8367B178:
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
loc_8367B188:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8367b188
	if (!cr6.eq) goto loc_8367B188;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8367B1AC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367B1B8;
	sub_82E74C08(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8367b1cc
	if (cr6.lt) goto loc_8367B1CC;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x8367B1CC;
	sub_82416268(ctx, base);
loc_8367B1CC:
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
	ctx.lr = 0x8367B1F4;
	sub_82472FC0(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367B200;
	sub_82E74C08(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8367b214
	if (cr6.lt) goto loc_8367B214;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82416268
	ctx.lr = 0x8367B214;
	sub_82416268(ctx, base);
loc_8367B214:
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
	// blt cr6,0x8367b234
	if (cr6.lt) goto loc_8367B234;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8367B234:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
loc_8367B244:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8367b244
	if (!cr6.eq) goto loc_8367B244;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8367B268;
	sub_82472FC0(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367B274;
	sub_82E74C08(ctx, base);
	// lwz r10,276(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8367b288
	if (cr6.lt) goto loc_8367B288;
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x82416268
	ctx.lr = 0x8367B288;
	sub_82416268(ctx, base);
loc_8367B288:
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
	ctx.lr = 0x8367B2B0;
	sub_82472FC0(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367B2BC;
	sub_82E74C08(ctx, base);
	// lwz r11,340(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8367b2d0
	if (cr6.lt) goto loc_8367B2D0;
	// lwz r3,320(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x82416268
	ctx.lr = 0x8367B2D0;
	sub_82416268(ctx, base);
loc_8367B2D0:
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
	ctx.lr = 0x8367B2E8;
	sub_82E746C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8367B2F4"))) PPC_WEAK_FUNC(sub_8367B2F4);
PPC_FUNC_IMPL(__imp__sub_8367B2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8367B2F8"))) PPC_WEAK_FUNC(sub_8367B2F8);
PPC_FUNC_IMPL(__imp__sub_8367B2F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab8
	ctx.lr = 0x8367B300;
	__savegprlr_16(ctx, base);
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
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
	ctx.lr = 0x8367B328;
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
	// bge cr6,0x8367b728
	if (!cr6.lt) goto loc_8367B728;
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
	// addi r17,r11,-29508
	ctx.r17.s64 = ctx.r11.s64 + -29508;
	// addi r21,r10,8980
	ctx.r21.s64 = ctx.r10.s64 + 8980;
	// addi r22,r9,26164
	ctx.r22.s64 = ctx.r9.s64 + 26164;
loc_8367B37C:
	// stw r18,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r18.u32);
	// addi r11,r1,304
	ctx.r11.s64 = ctx.r1.s64 + 304;
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
	// lwz r5,312(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	// lwz r4,316(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// bl 0x82472fc0
	ctx.lr = 0x8367B3B0;
	sub_82472FC0(ctx, base);
	// addi r6,r17,-44
	ctx.r6.s64 = ctx.r17.s64 + -44;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x8367B3C8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8367b45c
	if (!cr6.eq) goto loc_8367B45C;
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
	ctx.lr = 0x8367B400;
	sub_82472FC0(ctx, base);
	// lwz r8,148(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x8367b414
	if (!cr6.lt) goto loc_8367B414;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
loc_8367B414:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8367B418:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8367b418
	if (!cr6.eq) goto loc_8367B418;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r19,20
	ctx.r3.s64 = ctx.r19.s64 + 20;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x8367B43C;
	sub_824208C8(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8367b450
	if (cr6.lt) goto loc_8367B450;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x8367B450;
	sub_82416268(ctx, base);
loc_8367B450:
	// stw r18,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r18.u32);
	// stw r25,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r25.u32);
	// stb r25,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r25.u8);
loc_8367B45C:
	// addi r6,r17,-36
	ctx.r6.s64 = ctx.r17.s64 + -36;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x8367B474;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8367b4b0
	if (!cr6.eq) goto loc_8367B4B0;
	// ld r11,8(r23)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r23.u32 + 8);
	// addi r10,r1,320
	ctx.r10.s64 = ctx.r1.s64 + 320;
	// ld r9,0(r23)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r23.u32 + 0);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// lwz r8,320(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x8367b4a8
	if (!cr6.eq) goto loc_8367B4A8;
	// ld r11,328(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 328);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8367b4ac
	goto loc_8367B4AC;
loc_8367B4A8:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_8367B4AC:
	// stw r11,48(r19)
	PPC_STORE_U32(ctx.r19.u32 + 48, ctx.r11.u32);
loc_8367B4B0:
	// addi r6,r17,-28
	ctx.r6.s64 = ctx.r17.s64 + -28;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x8367B4C8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8367b55c
	if (!cr6.eq) goto loc_8367B55C;
	// stw r18,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r18.u32);
	// addi r11,r1,352
	ctx.r11.s64 = ctx.r1.s64 + 352;
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
	// lwz r5,360(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 360);
	// lwz r4,364(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// bl 0x82472fc0
	ctx.lr = 0x8367B500;
	sub_82472FC0(ctx, base);
	// lwz r8,180(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x8367b514
	if (!cr6.lt) goto loc_8367B514;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
loc_8367B514:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8367B518:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8367b518
	if (!cr6.eq) goto loc_8367B518;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r19,116
	ctx.r3.s64 = ctx.r19.s64 + 116;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x8367B53C;
	sub_824208C8(ctx, base);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8367b550
	if (cr6.lt) goto loc_8367B550;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x8367B550;
	sub_82416268(ctx, base);
loc_8367B550:
	// stw r18,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r18.u32);
	// stw r25,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r25.u32);
	// stb r25,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r25.u8);
loc_8367B55C:
	// addi r6,r17,-20
	ctx.r6.s64 = ctx.r17.s64 + -20;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,16
	ctx.r7.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x8367B574;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8367b5b0
	if (!cr6.eq) goto loc_8367B5B0;
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
	// bne cr6,0x8367b5a8
	if (!cr6.eq) goto loc_8367B5A8;
	// ld r11,296(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 296);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8367b5ac
	goto loc_8367B5AC;
loc_8367B5A8:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_8367B5AC:
	// stw r11,148(r19)
	PPC_STORE_U32(ctx.r19.u32 + 148, ctx.r11.u32);
loc_8367B5B0:
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,21
	ctx.r7.s64 = 21;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x8367B5C8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8367b6fc
	if (!cr6.eq) goto loc_8367B6FC;
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
	ctx.lr = 0x8367B600;
	sub_8247B7D8(ctx, base);
	// lwz r3,160(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 160);
	// stw r25,152(r19)
	PPC_STORE_U32(ctx.r19.u32 + 152, ctx.r25.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8367b620
	if (cr6.eq) goto loc_8367B620;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// bl 0x8247b268
	ctx.lr = 0x8367B618;
	sub_8247B268(ctx, base);
	// stw r25,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r25.u32);
	// stw r25,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r25.u32);
loc_8367B620:
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
	// bge cr6,0x8367b6fc
	if (!cr6.lt) goto loc_8367B6FC;
loc_8367B640:
	// ld r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r27.u32 + 8);
	// addi r10,r1,336
	ctx.r10.s64 = ctx.r1.s64 + 336;
	// ld r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r27.u32 + 0);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// lwz r8,336(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x8367b66c
	if (!cr6.eq) goto loc_8367B66C;
	// ld r11,344(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 344);
	// rotlwi r28,r11,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8367b670
	goto loc_8367B670;
loc_8367B66C:
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
loc_8367B670:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8367b6cc
	if (cr6.lt) goto loc_8367B6CC;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x8367b6bc
	if (!cr6.gt) goto loc_8367B6BC;
	// stw r30,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r30.u32);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
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
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// bl 0x8247b270
	ctx.lr = 0x8367B6B4;
	sub_8247B270(ctx, base);
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// b 0x8367b6c0
	goto loc_8367B6C0;
loc_8367B6BC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8367B6C0:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8367b6f0
	if (cr6.eq) goto loc_8367B6F0;
loc_8367B6CC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x8367b6e4
	if (cr0.eq) goto loc_8367B6E4;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
loc_8367B6E4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8367B6F0:
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// cmplw cr6,r27,r26
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r26.u32, xer);
	// blt cr6,0x8367b640
	if (cr6.lt) goto loc_8367B640;
loc_8367B6FC:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8367b710
	if (cr6.lt) goto loc_8367B710;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x8367B710;
	sub_82416268(ctx, base);
loc_8367B710:
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
	// bne 0x8367b37c
	if (!cr0.eq) goto loc_8367B37C;
loc_8367B728:
	// lwz r31,272(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8367b744
	if (cr6.eq) goto loc_8367B744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x8367B73C;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x8367B744;
	sub_82416268(ctx, base);
loc_8367B744:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8367B750"))) PPC_WEAK_FUNC(sub_8367B750);
PPC_FUNC_IMPL(__imp__sub_8367B750) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8367B758;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d95768
	ctx.lr = 0x8367B764;
	sub_82D95768(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r29,r11,-29648
	ctx.r29.s64 = ctx.r11.s64 + -29648;
	// li r5,25
	ctx.r5.s64 = 25;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824208c8
	ctx.lr = 0x8367B77C;
	sub_824208C8(ctx, base);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// addi r7,r10,-29384
	ctx.r7.s64 = ctx.r10.s64 + -29384;
	// addi r5,r8,-29400
	ctx.r5.s64 = ctx.r8.s64 + -29400;
	// addi r6,r9,-29396
	ctx.r6.s64 = ctx.r9.s64 + -29396;
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
	ctx.lr = 0x8367B7C4;
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
	ctx.lr = 0x8367B7E0;
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

__attribute__((alias("__imp__sub_8367B7F0"))) PPC_WEAK_FUNC(sub_8367B7F0);
PPC_FUNC_IMPL(__imp__sub_8367B7F0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x8367b898
	sub_8367B898(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8367B7F8"))) PPC_WEAK_FUNC(sub_8367B7F8);
PPC_FUNC_IMPL(__imp__sub_8367B7F8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x8367b898
	sub_8367B898(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8367B800"))) PPC_WEAK_FUNC(sub_8367B800);
PPC_FUNC_IMPL(__imp__sub_8367B800) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8367B808;
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
	// addi r8,r11,-29384
	ctx.r8.s64 = ctx.r11.s64 + -29384;
	// addi r7,r10,-29396
	ctx.r7.s64 = ctx.r10.s64 + -29396;
	// addi r6,r9,-29400
	ctx.r6.s64 = ctx.r9.s64 + -29400;
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
	// blt cr6,0x8367b84c
	if (cr6.lt) goto loc_8367B84C;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8367B84C;
	sub_8386D088(ctx, base);
loc_8367B84C:
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
	// blt cr6,0x8367b878
	if (cr6.lt) goto loc_8367B878;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8367B878;
	sub_8386D088(ctx, base);
loc_8367B878:
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// bl 0x82b6a590
	ctx.lr = 0x8367B88C;
	sub_82B6A590(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8367B894"))) PPC_WEAK_FUNC(sub_8367B894);
PPC_FUNC_IMPL(__imp__sub_8367B894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8367B898"))) PPC_WEAK_FUNC(sub_8367B898);
PPC_FUNC_IMPL(__imp__sub_8367B898) {
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
	// bl 0x8367b800
	ctx.lr = 0x8367B8B8;
	sub_8367B800(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8367b8d8
	if (cr6.eq) goto loc_8367B8D8;
	// bl 0x82595188
	ctx.lr = 0x8367B8C8;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x8367B8D8;
	sub_825952B8(ctx, base);
loc_8367B8D8:
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

__attribute__((alias("__imp__sub_8367B8F4"))) PPC_WEAK_FUNC(sub_8367B8F4);
PPC_FUNC_IMPL(__imp__sub_8367B8F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8367B8F8"))) PPC_WEAK_FUNC(sub_8367B8F8);
PPC_FUNC_IMPL(__imp__sub_8367B8F8) {
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
	ctx.lr = 0x8367B910;
	sub_82EAF8D8(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r4,r11,-29648
	ctx.r4.s64 = ctx.r11.s64 + -29648;
	// li r5,25
	ctx.r5.s64 = 25;
	// bl 0x824208c8
	ctx.lr = 0x8367B924;
	sub_824208C8(ctx, base);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// lis r7,-32216
	ctx.r7.s64 = -2111307776;
	// addi r6,r10,-29348
	ctx.r6.s64 = ctx.r10.s64 + -29348;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r8,-29364
	ctx.r4.s64 = ctx.r8.s64 + -29364;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// addi r5,r9,-29360
	ctx.r5.s64 = ctx.r9.s64 + -29360;
	// stw r11,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r11.u32);
	// addi r10,r7,-29368
	ctx.r10.s64 = ctx.r7.s64 + -29368;
	// stw r4,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r4.u32);
	// stw r5,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r5.u32);
	// addi r3,r31,352
	ctx.r3.s64 = ctx.r31.s64 + 352;
	// stw r10,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r10.u32);
	// li r4,60
	ctx.r4.s64 = 60;
	// stw r11,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r11.u32);
	// stw r11,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r11.u32);
	// std r11,360(r31)
	PPC_STORE_U64(ctx.r31.u32 + 360, ctx.r11.u64);
	// bl 0x82423930
	ctx.lr = 0x8367B974;
	sub_82423930(ctx, base);
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

__attribute__((alias("__imp__sub_8367B98C"))) PPC_WEAK_FUNC(sub_8367B98C);
PPC_FUNC_IMPL(__imp__sub_8367B98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8367B990"))) PPC_WEAK_FUNC(sub_8367B990);
PPC_FUNC_IMPL(__imp__sub_8367B990) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x8367b9a8
	sub_8367B9A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8367B998"))) PPC_WEAK_FUNC(sub_8367B998);
PPC_FUNC_IMPL(__imp__sub_8367B998) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-312
	ctx.r3.s64 = ctx.r3.s64 + -312;
	// b 0x8367b9a8
	sub_8367B9A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8367B9A0"))) PPC_WEAK_FUNC(sub_8367B9A0);
PPC_FUNC_IMPL(__imp__sub_8367B9A0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x8367b9a8
	sub_8367B9A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8367B9A8"))) PPC_WEAK_FUNC(sub_8367B9A8);
PPC_FUNC_IMPL(__imp__sub_8367B9A8) {
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
	// addi r7,r11,-29348
	ctx.r7.s64 = ctx.r11.s64 + -29348;
	// addi r6,r10,-29360
	ctx.r6.s64 = ctx.r10.s64 + -29360;
	// addi r5,r9,-29364
	ctx.r5.s64 = ctx.r9.s64 + -29364;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r8,-29368
	ctx.r4.s64 = ctx.r8.s64 + -29368;
	// stw r6,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r6.u32);
	// stw r5,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r5.u32);
	// addi r3,r3,352
	ctx.r3.s64 = ctx.r3.s64 + 352;
	// stw r4,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r4.u32);
	// bl 0x824238b8
	ctx.lr = 0x8367B9FC;
	sub_824238B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eaf978
	ctx.lr = 0x8367BA04;
	sub_82EAF978(ctx, base);
	// clrlwi r3,r30,31
	ctx.r3.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8367ba24
	if (cr6.eq) goto loc_8367BA24;
	// bl 0x82595188
	ctx.lr = 0x8367BA14;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x8367BA24;
	sub_825952B8(ctx, base);
loc_8367BA24:
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

__attribute__((alias("__imp__sub_8367BA40"))) PPC_WEAK_FUNC(sub_8367BA40);
PPC_FUNC_IMPL(__imp__sub_8367BA40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdacc
	ctx.lr = 0x8367BA48;
	__savegprlr_21(ctx, base);
	// stwu r1,-1280(r1)
	ea = -1280 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r21,r3,4
	ctx.r21.s64 = ctx.r3.s64 + 4;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,138
	ctx.r11.s64 = 138;
	// stw r21,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r21.u32);
	// rotlwi r10,r31,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// lwz r9,8(r21)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bge cr6,0x8367ba88
	if (!cr6.lt) goto loc_8367BA88;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82e745e0
	ctx.lr = 0x8367BA88;
	sub_82E745E0(ctx, base);
loc_8367BA88:
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r9,0(r21)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// lwz r10,4(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// li r30,15
	ctx.r30.s64 = 15;
	// addi r29,r11,-28804
	ctx.r29.s64 = ctx.r11.s64 + -28804;
	// li r5,5
	ctx.r5.s64 = 5;
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r3,r1,928
	ctx.r3.s64 = ctx.r1.s64 + 928;
	// addi r4,r29,-368
	ctx.r4.s64 = ctx.r29.s64 + -368;
	// stbx r7,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u8);
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r6.u32);
	// stw r30,948(r1)
	PPC_STORE_U32(ctx.r1.u32 + 948, ctx.r30.u32);
	// stw r31,944(r1)
	PPC_STORE_U32(ctx.r1.u32 + 944, ctx.r31.u32);
	// stb r31,928(r1)
	PPC_STORE_U8(ctx.r1.u32 + 928, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x8367BAD0;
	sub_82472FC0(ctx, base);
	// addi r4,r1,928
	ctx.r4.s64 = ctx.r1.s64 + 928;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e74c08
	ctx.lr = 0x8367BADC;
	sub_82E74C08(ctx, base);
	// lwz r5,948(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 948);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x8367baf0
	if (cr6.lt) goto loc_8367BAF0;
	// lwz r3,928(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 928);
	// bl 0x82416268
	ctx.lr = 0x8367BAF0;
	sub_82416268(ctx, base);
loc_8367BAF0:
	// lwz r11,40(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 40);
	// addi r4,r26,20
	ctx.r4.s64 = ctx.r26.s64 + 20;
	// stw r30,948(r1)
	PPC_STORE_U32(ctx.r1.u32 + 948, ctx.r30.u32);
	// stw r31,944(r1)
	PPC_STORE_U32(ctx.r1.u32 + 944, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,928(r1)
	PPC_STORE_U8(ctx.r1.u32 + 928, ctx.r31.u8);
	// blt cr6,0x8367bb10
	if (cr6.lt) goto loc_8367BB10;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8367BB10:
	// stw r30,820(r1)
	PPC_STORE_U32(ctx.r1.u32 + 820, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,816(r1)
	PPC_STORE_U32(ctx.r1.u32 + 816, ctx.r31.u32);
	// stb r31,800(r1)
	PPC_STORE_U8(ctx.r1.u32 + 800, ctx.r31.u8);
loc_8367BB20:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8367bb20
	if (!cr6.eq) goto loc_8367BB20;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,800
	ctx.r3.s64 = ctx.r1.s64 + 800;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8367BB44;
	sub_82472FC0(ctx, base);
	// addi r4,r1,800
	ctx.r4.s64 = ctx.r1.s64 + 800;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e74c08
	ctx.lr = 0x8367BB50;
	sub_82E74C08(ctx, base);
	// lwz r10,820(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 820);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8367bb64
	if (cr6.lt) goto loc_8367BB64;
	// lwz r3,800(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 800);
	// bl 0x82416268
	ctx.lr = 0x8367BB64;
	sub_82416268(ctx, base);
loc_8367BB64:
	// stw r30,820(r1)
	PPC_STORE_U32(ctx.r1.u32 + 820, ctx.r30.u32);
	// addi r4,r29,-360
	ctx.r4.s64 = ctx.r29.s64 + -360;
	// stw r31,816(r1)
	PPC_STORE_U32(ctx.r1.u32 + 816, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,800(r1)
	PPC_STORE_U8(ctx.r1.u32 + 800, ctx.r31.u8);
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// stw r30,756(r1)
	PPC_STORE_U32(ctx.r1.u32 + 756, ctx.r30.u32);
	// stw r31,752(r1)
	PPC_STORE_U32(ctx.r1.u32 + 752, ctx.r31.u32);
	// stb r31,736(r1)
	PPC_STORE_U8(ctx.r1.u32 + 736, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x8367BB8C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,736
	ctx.r4.s64 = ctx.r1.s64 + 736;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e74c08
	ctx.lr = 0x8367BB98;
	sub_82E74C08(ctx, base);
	// lwz r11,756(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 756);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8367bbac
	if (cr6.lt) goto loc_8367BBAC;
	// lwz r3,736(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 736);
	// bl 0x82416268
	ctx.lr = 0x8367BBAC;
	sub_82416268(ctx, base);
loc_8367BBAC:
	// stw r30,756(r1)
	PPC_STORE_U32(ctx.r1.u32 + 756, ctx.r30.u32);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stw r31,752(r1)
	PPC_STORE_U32(ctx.r1.u32 + 752, ctx.r31.u32);
	// stb r31,736(r1)
	PPC_STORE_U8(ctx.r1.u32 + 736, ctx.r31.u8);
	// lwz r4,48(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 48);
	// bl 0x82e746c0
	ctx.lr = 0x8367BBC4;
	sub_82E746C0(ctx, base);
	// stw r30,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r30.u32);
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// addi r4,r29,-352
	ctx.r4.s64 = ctx.r29.s64 + -352;
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82472fc0
	ctx.lr = 0x8367BBE0;
	sub_82472FC0(ctx, base);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e74c08
	ctx.lr = 0x8367BBEC;
	sub_82E74C08(ctx, base);
	// lwz r11,372(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8367bc00
	if (cr6.lt) goto loc_8367BC00;
	// lwz r3,352(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// bl 0x82416268
	ctx.lr = 0x8367BC00;
	sub_82416268(ctx, base);
loc_8367BC00:
	// lwz r11,136(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 136);
	// addi r4,r26,116
	ctx.r4.s64 = ctx.r26.s64 + 116;
	// stw r30,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r30.u32);
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
	// blt cr6,0x8367bc20
	if (cr6.lt) goto loc_8367BC20;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8367BC20:
	// stw r30,916(r1)
	PPC_STORE_U32(ctx.r1.u32 + 916, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,912(r1)
	PPC_STORE_U32(ctx.r1.u32 + 912, ctx.r31.u32);
	// stb r31,896(r1)
	PPC_STORE_U8(ctx.r1.u32 + 896, ctx.r31.u8);
loc_8367BC30:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8367bc30
	if (!cr6.eq) goto loc_8367BC30;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,896
	ctx.r3.s64 = ctx.r1.s64 + 896;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8367BC54;
	sub_82472FC0(ctx, base);
	// addi r4,r1,896
	ctx.r4.s64 = ctx.r1.s64 + 896;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e74c08
	ctx.lr = 0x8367BC60;
	sub_82E74C08(ctx, base);
	// lwz r10,916(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 916);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8367bc74
	if (cr6.lt) goto loc_8367BC74;
	// lwz r3,896(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 896);
	// bl 0x82416268
	ctx.lr = 0x8367BC74;
	sub_82416268(ctx, base);
loc_8367BC74:
	// stw r30,916(r1)
	PPC_STORE_U32(ctx.r1.u32 + 916, ctx.r30.u32);
	// addi r4,r29,-344
	ctx.r4.s64 = ctx.r29.s64 + -344;
	// stw r31,912(r1)
	PPC_STORE_U32(ctx.r1.u32 + 912, ctx.r31.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stb r31,896(r1)
	PPC_STORE_U8(ctx.r1.u32 + 896, ctx.r31.u8);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// stw r30,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r30.u32);
	// stw r31,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r31.u32);
	// stb r31,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x8367BC9C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e74c08
	ctx.lr = 0x8367BCA8;
	sub_82E74C08(ctx, base);
	// lwz r11,436(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8367bcbc
	if (cr6.lt) goto loc_8367BCBC;
	// lwz r3,416(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// bl 0x82416268
	ctx.lr = 0x8367BCBC;
	sub_82416268(ctx, base);
loc_8367BCBC:
	// lwz r11,164(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 164);
	// addi r4,r26,144
	ctx.r4.s64 = ctx.r26.s64 + 144;
	// stw r30,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r30.u32);
	// stw r31,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r31.u8);
	// blt cr6,0x8367bcdc
	if (cr6.lt) goto loc_8367BCDC;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8367BCDC:
	// stw r30,980(r1)
	PPC_STORE_U32(ctx.r1.u32 + 980, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,976(r1)
	PPC_STORE_U32(ctx.r1.u32 + 976, ctx.r31.u32);
	// stb r31,960(r1)
	PPC_STORE_U8(ctx.r1.u32 + 960, ctx.r31.u8);
loc_8367BCEC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8367bcec
	if (!cr6.eq) goto loc_8367BCEC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,960
	ctx.r3.s64 = ctx.r1.s64 + 960;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8367BD10;
	sub_82472FC0(ctx, base);
	// addi r4,r1,960
	ctx.r4.s64 = ctx.r1.s64 + 960;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e74c08
	ctx.lr = 0x8367BD1C;
	sub_82E74C08(ctx, base);
	// lwz r10,980(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 980);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8367bd30
	if (cr6.lt) goto loc_8367BD30;
	// lwz r3,960(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 960);
	// bl 0x82416268
	ctx.lr = 0x8367BD30;
	sub_82416268(ctx, base);
loc_8367BD30:
	// stw r30,980(r1)
	PPC_STORE_U32(ctx.r1.u32 + 980, ctx.r30.u32);
	// addi r4,r29,-336
	ctx.r4.s64 = ctx.r29.s64 + -336;
	// stw r31,976(r1)
	PPC_STORE_U32(ctx.r1.u32 + 976, ctx.r31.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stb r31,960(r1)
	PPC_STORE_U8(ctx.r1.u32 + 960, ctx.r31.u8);
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// stw r30,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r30.u32);
	// stw r31,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r31.u32);
	// stb r31,480(r1)
	PPC_STORE_U8(ctx.r1.u32 + 480, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x8367BD58;
	sub_82472FC0(ctx, base);
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e74c08
	ctx.lr = 0x8367BD64;
	sub_82E74C08(ctx, base);
	// lwz r11,500(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 500);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8367bd78
	if (cr6.lt) goto loc_8367BD78;
	// lwz r3,480(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 480);
	// bl 0x82416268
	ctx.lr = 0x8367BD78;
	sub_82416268(ctx, base);
loc_8367BD78:
	// li r3,8192
	ctx.r3.s64 = 8192;
	// stw r30,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r30.u32);
	// stw r31,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r31.u32);
	// stb r31,480(r1)
	PPC_STORE_U8(ctx.r1.u32 + 480, ctx.r31.u8);
	// bl 0x831d2bf8
	ctx.lr = 0x8367BD8C;
	sub_831D2BF8(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// li r22,133
	ctx.r22.s64 = 133;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// li r24,8192
	ctx.r24.s64 = 8192;
	// stb r22,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r22.u8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r24,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r24.u32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r4,r29,-328
	ctx.r4.s64 = ctx.r29.s64 + -328;
	// stb r8,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r8.u8);
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r6,r7,1
	ctx.r6.s64 = ctx.r7.s64 + 1;
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// bl 0x82472fc0
	ctx.lr = 0x8367BDE4;
	sub_82472FC0(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82e74c08
	ctx.lr = 0x8367BDF0;
	sub_82E74C08(ctx, base);
	// lwz r5,276(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x8367be04
	if (cr6.lt) goto loc_8367BE04;
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x82416268
	ctx.lr = 0x8367BE04;
	sub_82416268(ctx, base);
loc_8367BE04:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// lwz r4,172(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 172);
	// bl 0x82e746c0
	ctx.lr = 0x8367BE1C;
	sub_82E746C0(ctx, base);
	// stw r30,564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 564, ctx.r30.u32);
	// stw r31,560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 560, ctx.r31.u32);
	// addi r4,r29,-324
	ctx.r4.s64 = ctx.r29.s64 + -324;
	// stb r31,544(r1)
	PPC_STORE_U8(ctx.r1.u32 + 544, ctx.r31.u8);
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// bl 0x82472fc0
	ctx.lr = 0x8367BE38;
	sub_82472FC0(ctx, base);
	// addi r4,r1,544
	ctx.r4.s64 = ctx.r1.s64 + 544;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82e74c08
	ctx.lr = 0x8367BE44;
	sub_82E74C08(ctx, base);
	// lwz r11,564(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 564);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8367be58
	if (cr6.lt) goto loc_8367BE58;
	// lwz r3,544(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 544);
	// bl 0x82416268
	ctx.lr = 0x8367BE58;
	sub_82416268(ctx, base);
loc_8367BE58:
	// li r3,8192
	ctx.r3.s64 = 8192;
	// stw r30,564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 564, ctx.r30.u32);
	// stw r31,560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 560, ctx.r31.u32);
	// stb r31,544(r1)
	PPC_STORE_U8(ctx.r1.u32 + 544, ctx.r31.u8);
	// bl 0x831d2bf8
	ctx.lr = 0x8367BE6C;
	sub_831D2BF8(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r3,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r3.u32);
	// li r25,130
	ctx.r25.s64 = 130;
	// stw r24,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r24.u32);
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// stb r25,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r25.u8);
	// addi r4,r29,-312
	ctx.r4.s64 = ctx.r29.s64 + -312;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// li r5,14
	ctx.r5.s64 = 14;
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r3,r1,864
	ctx.r3.s64 = ctx.r1.s64 + 864;
	// lwz r7,192(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// addi r6,r7,1
	ctx.r6.s64 = ctx.r7.s64 + 1;
	// stw r30,884(r1)
	PPC_STORE_U32(ctx.r1.u32 + 884, ctx.r30.u32);
	// stw r31,880(r1)
	PPC_STORE_U32(ctx.r1.u32 + 880, ctx.r31.u32);
	// stb r31,864(r1)
	PPC_STORE_U8(ctx.r1.u32 + 864, ctx.r31.u8);
	// stw r6,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r6.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// bl 0x82472fc0
	ctx.lr = 0x8367BEC0;
	sub_82472FC0(ctx, base);
	// addi r4,r1,864
	ctx.r4.s64 = ctx.r1.s64 + 864;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x8367BECC;
	sub_82E74C08(ctx, base);
	// lwz r5,884(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 884);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x8367bee0
	if (cr6.lt) goto loc_8367BEE0;
	// lwz r3,864(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 864);
	// bl 0x82416268
	ctx.lr = 0x8367BEE0;
	sub_82416268(ctx, base);
loc_8367BEE0:
	// stw r30,884(r1)
	PPC_STORE_U32(ctx.r1.u32 + 884, ctx.r30.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r31,880(r1)
	PPC_STORE_U32(ctx.r1.u32 + 880, ctx.r31.u32);
	// stb r31,864(r1)
	PPC_STORE_U8(ctx.r1.u32 + 864, ctx.r31.u8);
	// lwz r4,176(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 176);
	// bl 0x82e97d90
	ctx.lr = 0x8367BEF8;
	sub_82E97D90(ctx, base);
	// stw r30,628(r1)
	PPC_STORE_U32(ctx.r1.u32 + 628, ctx.r30.u32);
	// stw r31,624(r1)
	PPC_STORE_U32(ctx.r1.u32 + 624, ctx.r31.u32);
	// addi r4,r29,-296
	ctx.r4.s64 = ctx.r29.s64 + -296;
	// stb r31,608(r1)
	PPC_STORE_U8(ctx.r1.u32 + 608, ctx.r31.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// bl 0x82472fc0
	ctx.lr = 0x8367BF14;
	sub_82472FC0(ctx, base);
	// addi r4,r1,608
	ctx.r4.s64 = ctx.r1.s64 + 608;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x8367BF20;
	sub_82E74C08(ctx, base);
	// lwz r11,628(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 628);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8367bf34
	if (cr6.lt) goto loc_8367BF34;
	// lwz r3,608(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 608);
	// bl 0x82416268
	ctx.lr = 0x8367BF34;
	sub_82416268(ctx, base);
loc_8367BF34:
	// stw r30,628(r1)
	PPC_STORE_U32(ctx.r1.u32 + 628, ctx.r30.u32);
	// addi r23,r26,-200
	ctx.r23.s64 = ctx.r26.s64 + -200;
	// stw r31,624(r1)
	PPC_STORE_U32(ctx.r1.u32 + 624, ctx.r31.u32);
	// addi r6,r1,1088
	ctx.r6.s64 = ctx.r1.s64 + 1088;
	// stb r31,608(r1)
	PPC_STORE_U8(ctx.r1.u32 + 608, ctx.r31.u8);
	// addi r4,r26,180
	ctx.r4.s64 = ctx.r26.s64 + 180;
	// stw r30,1108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1108, ctx.r30.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r31,1104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1104, ctx.r31.u32);
	// stb r31,1088(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1088, ctx.r31.u8);
	// lwz r5,196(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 196);
	// bl 0x83354d50
	ctx.lr = 0x8367BF64;
	sub_83354D50(ctx, base);
	// lwz r11,1108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1108);
	// lwz r4,1088(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1088);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x8367bf78
	if (!cr6.lt) goto loc_8367BF78;
	// addi r4,r1,1088
	ctx.r4.s64 = ctx.r1.s64 + 1088;
loc_8367BF78:
	// stw r30,788(r1)
	PPC_STORE_U32(ctx.r1.u32 + 788, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,784(r1)
	PPC_STORE_U32(ctx.r1.u32 + 784, ctx.r31.u32);
	// stb r31,768(r1)
	PPC_STORE_U8(ctx.r1.u32 + 768, ctx.r31.u8);
loc_8367BF88:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8367bf88
	if (!cr6.eq) goto loc_8367BF88;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,768
	ctx.r3.s64 = ctx.r1.s64 + 768;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8367BFAC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,768
	ctx.r4.s64 = ctx.r1.s64 + 768;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x8367BFB8;
	sub_82E74C08(ctx, base);
	// lwz r10,788(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 788);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8367bfcc
	if (cr6.lt) goto loc_8367BFCC;
	// lwz r3,768(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 768);
	// bl 0x82416268
	ctx.lr = 0x8367BFCC;
	sub_82416268(ctx, base);
loc_8367BFCC:
	// stw r30,788(r1)
	PPC_STORE_U32(ctx.r1.u32 + 788, ctx.r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r31,784(r1)
	PPC_STORE_U32(ctx.r1.u32 + 784, ctx.r31.u32);
	// stb r31,768(r1)
	PPC_STORE_U8(ctx.r1.u32 + 768, ctx.r31.u8);
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82e74890
	ctx.lr = 0x8367BFE4;
	sub_82E74890(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// lwz r27,196(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// bge cr6,0x8367c00c
	if (!cr6.lt) goto loc_8367C00C;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e745e0
	ctx.lr = 0x8367C00C;
	sub_82E745E0(ctx, base);
loc_8367C00C:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x831ce980
	ctx.lr = 0x8367C024;
	sub_831CE980(ctx, base);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r30,692(r1)
	PPC_STORE_U32(ctx.r1.u32 + 692, ctx.r30.u32);
	// addi r4,r29,-288
	ctx.r4.s64 = ctx.r29.s64 + -288;
	// add r8,r9,r28
	ctx.r8.u64 = ctx.r9.u64 + ctx.r28.u64;
	// stw r31,688(r1)
	PPC_STORE_U32(ctx.r1.u32 + 688, ctx.r31.u32);
	// stb r31,672(r1)
	PPC_STORE_U8(ctx.r1.u32 + 672, ctx.r31.u8);
	// li r5,14
	ctx.r5.s64 = 14;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// bl 0x82472fc0
	ctx.lr = 0x8367C04C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,672
	ctx.r4.s64 = ctx.r1.s64 + 672;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82e74c08
	ctx.lr = 0x8367C058;
	sub_82E74C08(ctx, base);
	// lwz r7,692(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 692);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// blt cr6,0x8367c06c
	if (cr6.lt) goto loc_8367C06C;
	// lwz r3,672(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 672);
	// bl 0x82416268
	ctx.lr = 0x8367C06C;
	sub_82416268(ctx, base);
loc_8367C06C:
	// li r3,8192
	ctx.r3.s64 = 8192;
	// stw r30,692(r1)
	PPC_STORE_U32(ctx.r1.u32 + 692, ctx.r30.u32);
	// stw r31,688(r1)
	PPC_STORE_U32(ctx.r1.u32 + 688, ctx.r31.u32);
	// stb r31,672(r1)
	PPC_STORE_U8(ctx.r1.u32 + 672, ctx.r31.u8);
	// bl 0x831d2bf8
	ctx.lr = 0x8367C080;
	sub_831D2BF8(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stb r25,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r25.u8);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r3,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// stw r24,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r24.u32);
	// addi r4,r29,-272
	ctx.r4.s64 = ctx.r29.s64 + -272;
	// li r5,14
	ctx.r5.s64 = 14;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r3,r1,832
	ctx.r3.s64 = ctx.r1.s64 + 832;
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// lwz r7,176(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// addi r6,r7,1
	ctx.r6.s64 = ctx.r7.s64 + 1;
	// stw r30,852(r1)
	PPC_STORE_U32(ctx.r1.u32 + 852, ctx.r30.u32);
	// stw r31,848(r1)
	PPC_STORE_U32(ctx.r1.u32 + 848, ctx.r31.u32);
	// stb r31,832(r1)
	PPC_STORE_U8(ctx.r1.u32 + 832, ctx.r31.u8);
	// stw r6,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r6.u32);
	// bl 0x82472fc0
	ctx.lr = 0x8367C0D0;
	sub_82472FC0(ctx, base);
	// addi r4,r1,832
	ctx.r4.s64 = ctx.r1.s64 + 832;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x8367C0DC;
	sub_82E74C08(ctx, base);
	// lwz r5,852(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 852);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x8367c0f0
	if (cr6.lt) goto loc_8367C0F0;
	// lwz r3,832(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 832);
	// bl 0x82416268
	ctx.lr = 0x8367C0F0;
	sub_82416268(ctx, base);
loc_8367C0F0:
	// stw r30,852(r1)
	PPC_STORE_U32(ctx.r1.u32 + 852, ctx.r30.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r31,848(r1)
	PPC_STORE_U32(ctx.r1.u32 + 848, ctx.r31.u32);
	// stb r31,832(r1)
	PPC_STORE_U8(ctx.r1.u32 + 832, ctx.r31.u8);
	// lwz r4,200(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 200);
	// bl 0x82e97d90
	ctx.lr = 0x8367C108;
	sub_82E97D90(ctx, base);
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// addi r4,r29,-256
	ctx.r4.s64 = ctx.r29.s64 + -256;
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82472fc0
	ctx.lr = 0x8367C124;
	sub_82472FC0(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x8367C130;
	sub_82E74C08(ctx, base);
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8367c144
	if (cr6.lt) goto loc_8367C144;
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82416268
	ctx.lr = 0x8367C144;
	sub_82416268(ctx, base);
loc_8367C144:
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// addi r6,r1,1024
	ctx.r6.s64 = ctx.r1.s64 + 1024;
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// addi r4,r26,204
	ctx.r4.s64 = ctx.r26.s64 + 204;
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r30,1044(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1044, ctx.r30.u32);
	// stw r31,1040(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1040, ctx.r31.u32);
	// stb r31,1024(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1024, ctx.r31.u8);
	// lwz r5,220(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 220);
	// bl 0x83354d50
	ctx.lr = 0x8367C170;
	sub_83354D50(ctx, base);
	// lwz r11,1044(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1044);
	// lwz r4,1024(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1024);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x8367c184
	if (!cr6.lt) goto loc_8367C184;
	// addi r4,r1,1024
	ctx.r4.s64 = ctx.r1.s64 + 1024;
loc_8367C184:
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
loc_8367C194:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8367c194
	if (!cr6.eq) goto loc_8367C194;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8367C1B8;
	sub_82472FC0(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x8367C1C4;
	sub_82E74C08(ctx, base);
	// lwz r10,340(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8367c1d8
	if (cr6.lt) goto loc_8367C1D8;
	// lwz r3,320(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x82416268
	ctx.lr = 0x8367C1D8;
	sub_82416268(ctx, base);
loc_8367C1D8:
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x82e74890
	ctx.lr = 0x8367C1F0;
	sub_82E74890(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// lwz r27,180(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// bge cr6,0x8367c218
	if (!cr6.lt) goto loc_8367C218;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e745e0
	ctx.lr = 0x8367C218;
	sub_82E745E0(ctx, base);
loc_8367C218:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x831ce980
	ctx.lr = 0x8367C230;
	sub_831CE980(ctx, base);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r30,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r30.u32);
	// addi r4,r29,-248
	ctx.r4.s64 = ctx.r29.s64 + -248;
	// add r8,r28,r9
	ctx.r8.u64 = ctx.r28.u64 + ctx.r9.u64;
	// stw r31,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r31.u32);
	// stb r31,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r31.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82472fc0
	ctx.lr = 0x8367C258;
	sub_82472FC0(ctx, base);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82e74c08
	ctx.lr = 0x8367C264;
	sub_82E74C08(ctx, base);
	// lwz r7,404(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// blt cr6,0x8367c278
	if (cr6.lt) goto loc_8367C278;
	// lwz r3,384(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// bl 0x82416268
	ctx.lr = 0x8367C278;
	sub_82416268(ctx, base);
loc_8367C278:
	// li r3,8192
	ctx.r3.s64 = 8192;
	// stw r30,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r30.u32);
	// stw r31,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r31.u32);
	// stb r31,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r31.u8);
	// bl 0x831d2bf8
	ctx.lr = 0x8367C28C;
	sub_831D2BF8(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stb r25,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r25.u8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stw r3,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r3.u32);
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// stw r24,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r24.u32);
	// addi r4,r29,-232
	ctx.r4.s64 = ctx.r29.s64 + -232;
	// li r5,14
	ctx.r5.s64 = 14;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// lwz r7,160(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// addi r6,r7,1
	ctx.r6.s64 = ctx.r7.s64 + 1;
	// stw r30,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r30.u32);
	// stw r31,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r31.u32);
	// stb r31,448(r1)
	PPC_STORE_U8(ctx.r1.u32 + 448, ctx.r31.u8);
	// stw r6,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r6.u32);
	// bl 0x82472fc0
	ctx.lr = 0x8367C2DC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x8367C2E8;
	sub_82E74C08(ctx, base);
	// lwz r5,468(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x8367c2fc
	if (cr6.lt) goto loc_8367C2FC;
	// lwz r3,448(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// bl 0x82416268
	ctx.lr = 0x8367C2FC;
	sub_82416268(ctx, base);
loc_8367C2FC:
	// stw r30,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r30.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r31,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r31.u32);
	// stb r31,448(r1)
	PPC_STORE_U8(ctx.r1.u32 + 448, ctx.r31.u8);
	// lwz r4,224(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 224);
	// bl 0x82e97d90
	ctx.lr = 0x8367C314;
	sub_82E97D90(ctx, base);
	// stw r30,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r30.u32);
	// stw r31,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r31.u32);
	// addi r4,r29,-216
	ctx.r4.s64 = ctx.r29.s64 + -216;
	// stb r31,512(r1)
	PPC_STORE_U8(ctx.r1.u32 + 512, ctx.r31.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x82472fc0
	ctx.lr = 0x8367C330;
	sub_82472FC0(ctx, base);
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x8367C33C;
	sub_82E74C08(ctx, base);
	// lwz r11,532(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 532);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8367c350
	if (cr6.lt) goto loc_8367C350;
	// lwz r3,512(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 512);
	// bl 0x82416268
	ctx.lr = 0x8367C350;
	sub_82416268(ctx, base);
loc_8367C350:
	// stw r30,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r30.u32);
	// addi r6,r1,1120
	ctx.r6.s64 = ctx.r1.s64 + 1120;
	// stw r31,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r31.u32);
	// addi r4,r26,228
	ctx.r4.s64 = ctx.r26.s64 + 228;
	// stb r31,512(r1)
	PPC_STORE_U8(ctx.r1.u32 + 512, ctx.r31.u8);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r30,1140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1140, ctx.r30.u32);
	// stw r31,1136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1136, ctx.r31.u32);
	// stb r31,1120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1120, ctx.r31.u8);
	// lwz r5,244(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 244);
	// bl 0x83354d50
	ctx.lr = 0x8367C37C;
	sub_83354D50(ctx, base);
	// lwz r11,1140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1140);
	// lwz r4,1120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1120);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x8367c390
	if (!cr6.lt) goto loc_8367C390;
	// addi r4,r1,1120
	ctx.r4.s64 = ctx.r1.s64 + 1120;
loc_8367C390:
	// stw r30,596(r1)
	PPC_STORE_U32(ctx.r1.u32 + 596, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,592(r1)
	PPC_STORE_U32(ctx.r1.u32 + 592, ctx.r31.u32);
	// stb r31,576(r1)
	PPC_STORE_U8(ctx.r1.u32 + 576, ctx.r31.u8);
loc_8367C3A0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8367c3a0
	if (!cr6.eq) goto loc_8367C3A0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8367C3C4;
	sub_82472FC0(ctx, base);
	// addi r4,r1,576
	ctx.r4.s64 = ctx.r1.s64 + 576;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x8367C3D0;
	sub_82E74C08(ctx, base);
	// lwz r10,596(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 596);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8367c3e4
	if (cr6.lt) goto loc_8367C3E4;
	// lwz r3,576(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 576);
	// bl 0x82416268
	ctx.lr = 0x8367C3E4;
	sub_82416268(ctx, base);
loc_8367C3E4:
	// stw r30,596(r1)
	PPC_STORE_U32(ctx.r1.u32 + 596, ctx.r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r31,592(r1)
	PPC_STORE_U32(ctx.r1.u32 + 592, ctx.r31.u32);
	// stb r31,576(r1)
	PPC_STORE_U8(ctx.r1.u32 + 576, ctx.r31.u8);
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82e74890
	ctx.lr = 0x8367C3FC;
	sub_82E74890(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// lwz r27,164(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// bge cr6,0x8367c424
	if (!cr6.lt) goto loc_8367C424;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e745e0
	ctx.lr = 0x8367C424;
	sub_82E745E0(ctx, base);
loc_8367C424:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x831ce980
	ctx.lr = 0x8367C43C;
	sub_831CE980(ctx, base);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r30,660(r1)
	PPC_STORE_U32(ctx.r1.u32 + 660, ctx.r30.u32);
	// addi r4,r29,-208
	ctx.r4.s64 = ctx.r29.s64 + -208;
	// add r8,r9,r28
	ctx.r8.u64 = ctx.r9.u64 + ctx.r28.u64;
	// stw r31,656(r1)
	PPC_STORE_U32(ctx.r1.u32 + 656, ctx.r31.u32);
	// stb r31,640(r1)
	PPC_STORE_U8(ctx.r1.u32 + 640, ctx.r31.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// bl 0x82472fc0
	ctx.lr = 0x8367C464;
	sub_82472FC0(ctx, base);
	// addi r4,r1,640
	ctx.r4.s64 = ctx.r1.s64 + 640;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82e74c08
	ctx.lr = 0x8367C470;
	sub_82E74C08(ctx, base);
	// lwz r7,660(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 660);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// blt cr6,0x8367c484
	if (cr6.lt) goto loc_8367C484;
	// lwz r3,640(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 640);
	// bl 0x82416268
	ctx.lr = 0x8367C484;
	sub_82416268(ctx, base);
loc_8367C484:
	// stw r30,660(r1)
	PPC_STORE_U32(ctx.r1.u32 + 660, ctx.r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r31,656(r1)
	PPC_STORE_U32(ctx.r1.u32 + 656, ctx.r31.u32);
	// stb r31,640(r1)
	PPC_STORE_U8(ctx.r1.u32 + 640, ctx.r31.u8);
	// lwz r4,248(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 248);
	// bl 0x82e746c0
	ctx.lr = 0x8367C49C;
	sub_82E746C0(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82e74890
	ctx.lr = 0x8367C4A8;
	sub_82E74890(ctx, base);
	// lwz r11,8(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// lwz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// lwz r27,100(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bge cr6,0x8367c4d0
	if (!cr6.lt) goto loc_8367C4D0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82e745e0
	ctx.lr = 0x8367C4D0;
	sub_82E745E0(ctx, base);
loc_8367C4D0:
	// lwz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x831ce980
	ctx.lr = 0x8367C4E8;
	sub_831CE980(ctx, base);
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// addi r4,r29,-192
	ctx.r4.s64 = ctx.r29.s64 + -192;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// li r5,9
	ctx.r5.s64 = 9;
	// stw r11,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r11.u32);
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// stw r30,724(r1)
	PPC_STORE_U32(ctx.r1.u32 + 724, ctx.r30.u32);
	// stw r31,720(r1)
	PPC_STORE_U32(ctx.r1.u32 + 720, ctx.r31.u32);
	// stb r31,704(r1)
	PPC_STORE_U8(ctx.r1.u32 + 704, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x8367C510;
	sub_82472FC0(ctx, base);
	// addi r4,r1,704
	ctx.r4.s64 = ctx.r1.s64 + 704;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e74c08
	ctx.lr = 0x8367C51C;
	sub_82E74C08(ctx, base);
	// lwz r10,724(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 724);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8367c530
	if (cr6.lt) goto loc_8367C530;
	// lwz r3,704(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 704);
	// bl 0x82416268
	ctx.lr = 0x8367C530;
	sub_82416268(ctx, base);
loc_8367C530:
	// li r3,8192
	ctx.r3.s64 = 8192;
	// stw r30,724(r1)
	PPC_STORE_U32(ctx.r1.u32 + 724, ctx.r30.u32);
	// stw r31,720(r1)
	PPC_STORE_U32(ctx.r1.u32 + 720, ctx.r31.u32);
	// stb r31,704(r1)
	PPC_STORE_U8(ctx.r1.u32 + 704, ctx.r31.u8);
	// bl 0x831d2bf8
	ctx.lr = 0x8367C544;
	sub_831D2BF8(ctx, base);
	// stb r22,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r22.u8);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// stw r24,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r24.u32);
	// addi r4,r29,-180
	ctx.r4.s64 = ctx.r29.s64 + -180;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// lwz r7,144(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r6,r7,1
	ctx.r6.s64 = ctx.r7.s64 + 1;
	// stw r6,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r6.u32);
	// bl 0x82475d40
	ctx.lr = 0x8367C584;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82e74c08
	ctx.lr = 0x8367C590;
	sub_82E74C08(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x824707c8
	ctx.lr = 0x8367C598;
	sub_824707C8(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r4,252(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 252);
	// bl 0x82e746c0
	ctx.lr = 0x8367C5A4;
	sub_82E746C0(ctx, base);
	// addi r4,r29,-176
	ctx.r4.s64 = ctx.r29.s64 + -176;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82475d40
	ctx.lr = 0x8367C5B0;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82e74c08
	ctx.lr = 0x8367C5BC;
	sub_82E74C08(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x824707c8
	ctx.lr = 0x8367C5C4;
	sub_824707C8(ctx, base);
	// li r3,8192
	ctx.r3.s64 = 8192;
	// bl 0x831d2bf8
	ctx.lr = 0x8367C5CC;
	sub_831D2BF8(ctx, base);
	// stw r3,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r3.u32);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// stw r24,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r24.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// bl 0x82e74ac8
	ctx.lr = 0x8367C5EC;
	sub_82E74AC8(ctx, base);
	// addi r4,r29,-164
	ctx.r4.s64 = ctx.r29.s64 + -164;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82475d40
	ctx.lr = 0x8367C5F8;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x8367C604;
	sub_82E74C08(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x824707c8
	ctx.lr = 0x8367C60C;
	sub_824707C8(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lwz r4,256(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 256);
	// bl 0x82e97d90
	ctx.lr = 0x8367C618;
	sub_82E97D90(ctx, base);
	// addi r4,r29,-148
	ctx.r4.s64 = ctx.r29.s64 + -148;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82475d40
	ctx.lr = 0x8367C624;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x8367C630;
	sub_82E74C08(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x824707c8
	ctx.lr = 0x8367C638;
	sub_824707C8(ctx, base);
	// stw r30,1076(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1076, ctx.r30.u32);
	// stw r31,1072(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1072, ctx.r31.u32);
	// addi r6,r1,1056
	ctx.r6.s64 = ctx.r1.s64 + 1056;
	// stb r31,1056(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1056, ctx.r31.u8);
	// addi r4,r26,260
	ctx.r4.s64 = ctx.r26.s64 + 260;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r5,276(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 276);
	// bl 0x83354d50
	ctx.lr = 0x8367C658;
	sub_83354D50(ctx, base);
	// lwz r4,1076(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1076);
	// cmplwi cr6,r4,16
	cr6.compare<uint32_t>(ctx.r4.u32, 16, xer);
	// lwz r4,1056(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1056);
	// bge cr6,0x8367c66c
	if (!cr6.lt) goto loc_8367C66C;
	// addi r4,r1,1056
	ctx.r4.s64 = ctx.r1.s64 + 1056;
loc_8367C66C:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82475d40
	ctx.lr = 0x8367C674;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x8367C680;
	sub_82E74C08(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x824707c8
	ctx.lr = 0x8367C688;
	sub_824707C8(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82e74890
	ctx.lr = 0x8367C694;
	sub_82E74890(ctx, base);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r5,224(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r4,228(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// bl 0x82e74b98
	ctx.lr = 0x8367C6A4;
	sub_82E74B98(ctx, base);
	// addi r4,r29,-140
	ctx.r4.s64 = ctx.r29.s64 + -140;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82475d40
	ctx.lr = 0x8367C6B0;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82e74c08
	ctx.lr = 0x8367C6BC;
	sub_82E74C08(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x824707c8
	ctx.lr = 0x8367C6C4;
	sub_824707C8(ctx, base);
	// li r3,8192
	ctx.r3.s64 = 8192;
	// bl 0x831d2bf8
	ctx.lr = 0x8367C6CC;
	sub_831D2BF8(ctx, base);
	// stw r3,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r3.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// stw r24,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r24.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82e74ac8
	ctx.lr = 0x8367C6EC;
	sub_82E74AC8(ctx, base);
	// addi r4,r29,-124
	ctx.r4.s64 = ctx.r29.s64 + -124;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82475d40
	ctx.lr = 0x8367C6F8;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x8367C704;
	sub_82E74C08(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x824707c8
	ctx.lr = 0x8367C70C;
	sub_824707C8(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwz r4,280(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 280);
	// bl 0x82e97d90
	ctx.lr = 0x8367C718;
	sub_82E97D90(ctx, base);
	// addi r4,r29,-108
	ctx.r4.s64 = ctx.r29.s64 + -108;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82475d40
	ctx.lr = 0x8367C724;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x8367C730;
	sub_82E74C08(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x824707c8
	ctx.lr = 0x8367C738;
	sub_824707C8(ctx, base);
	// stw r30,1172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1172, ctx.r30.u32);
	// stw r31,1168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1168, ctx.r31.u32);
	// addi r6,r1,1152
	ctx.r6.s64 = ctx.r1.s64 + 1152;
	// stb r31,1152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1152, ctx.r31.u8);
	// addi r4,r26,284
	ctx.r4.s64 = ctx.r26.s64 + 284;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r5,300(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 300);
	// bl 0x83354d50
	ctx.lr = 0x8367C758;
	sub_83354D50(ctx, base);
	// lwz r10,1172(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1172);
	// lwz r4,1152(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1152);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x8367c76c
	if (!cr6.lt) goto loc_8367C76C;
	// addi r4,r1,1152
	ctx.r4.s64 = ctx.r1.s64 + 1152;
loc_8367C76C:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82475d40
	ctx.lr = 0x8367C774;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x8367C780;
	sub_82E74C08(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x824707c8
	ctx.lr = 0x8367C788;
	sub_824707C8(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x82e74890
	ctx.lr = 0x8367C794;
	sub_82E74890(ctx, base);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r5,208(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r4,212(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// bl 0x82e74b98
	ctx.lr = 0x8367C7A4;
	sub_82E74B98(ctx, base);
	// addi r4,r29,-100
	ctx.r4.s64 = ctx.r29.s64 + -100;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82475d40
	ctx.lr = 0x8367C7B0;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82e74c08
	ctx.lr = 0x8367C7BC;
	sub_82E74C08(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x824707c8
	ctx.lr = 0x8367C7C4;
	sub_824707C8(ctx, base);
	// li r3,8192
	ctx.r3.s64 = 8192;
	// bl 0x831d2bf8
	ctx.lr = 0x8367C7CC;
	sub_831D2BF8(ctx, base);
	// stw r3,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r3.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// stw r24,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r24.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82e74ac8
	ctx.lr = 0x8367C7EC;
	sub_82E74AC8(ctx, base);
	// addi r4,r29,-84
	ctx.r4.s64 = ctx.r29.s64 + -84;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82475d40
	ctx.lr = 0x8367C7F8;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x8367C804;
	sub_82E74C08(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x824707c8
	ctx.lr = 0x8367C80C;
	sub_824707C8(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lwz r4,304(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 304);
	// bl 0x82e97d90
	ctx.lr = 0x8367C818;
	sub_82E97D90(ctx, base);
	// addi r4,r29,-68
	ctx.r4.s64 = ctx.r29.s64 + -68;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82475d40
	ctx.lr = 0x8367C824;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x8367C830;
	sub_82E74C08(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x824707c8
	ctx.lr = 0x8367C838;
	sub_824707C8(ctx, base);
	// stw r30,1012(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1012, ctx.r30.u32);
	// stw r31,1008(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1008, ctx.r31.u32);
	// addi r6,r1,992
	ctx.r6.s64 = ctx.r1.s64 + 992;
	// stb r31,992(r1)
	PPC_STORE_U8(ctx.r1.u32 + 992, ctx.r31.u8);
	// addi r4,r26,308
	ctx.r4.s64 = ctx.r26.s64 + 308;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r5,324(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 324);
	// bl 0x83354d50
	ctx.lr = 0x8367C858;
	sub_83354D50(ctx, base);
	// lwz r10,1012(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1012);
	// lwz r4,992(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 992);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x8367c86c
	if (!cr6.lt) goto loc_8367C86C;
	// addi r4,r1,992
	ctx.r4.s64 = ctx.r1.s64 + 992;
loc_8367C86C:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82475d40
	ctx.lr = 0x8367C874;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x8367C880;
	sub_82E74C08(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x824707c8
	ctx.lr = 0x8367C888;
	sub_824707C8(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x82e74890
	ctx.lr = 0x8367C894;
	sub_82E74890(ctx, base);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r5,240(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// lwz r4,244(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// bl 0x82e74b98
	ctx.lr = 0x8367C8A4;
	sub_82E74B98(ctx, base);
	// addi r4,r29,-60
	ctx.r4.s64 = ctx.r29.s64 + -60;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82475d40
	ctx.lr = 0x8367C8B0;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82e74c08
	ctx.lr = 0x8367C8BC;
	sub_82E74C08(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x824707c8
	ctx.lr = 0x8367C8C4;
	sub_824707C8(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r4,328(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 328);
	// bl 0x82e746c0
	ctx.lr = 0x8367C8D0;
	sub_82E746C0(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82e74890
	ctx.lr = 0x8367C8DC;
	sub_82E74890(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x82e74b98
	ctx.lr = 0x8367C8EC;
	sub_82E74B98(ctx, base);
	// addi r4,r29,-44
	ctx.r4.s64 = ctx.r29.s64 + -44;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82475d40
	ctx.lr = 0x8367C8F8;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e74c08
	ctx.lr = 0x8367C904;
	sub_82E74C08(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x824707c8
	ctx.lr = 0x8367C90C;
	sub_824707C8(ctx, base);
	// lwz r10,352(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 352);
	// addi r11,r26,332
	ctx.r11.s64 = ctx.r26.s64 + 332;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8367c920
	if (cr6.lt) goto loc_8367C920;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8367C920:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82475d40
	ctx.lr = 0x8367C92C;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e74c08
	ctx.lr = 0x8367C938;
	sub_82E74C08(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x824707c8
	ctx.lr = 0x8367C940;
	sub_824707C8(ctx, base);
	// addi r4,r29,-32
	ctx.r4.s64 = ctx.r29.s64 + -32;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82475d40
	ctx.lr = 0x8367C94C;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e74c08
	ctx.lr = 0x8367C958;
	sub_82E74C08(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x824707c8
	ctx.lr = 0x8367C960;
	sub_824707C8(ctx, base);
	// lwz r10,380(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 380);
	// addi r11,r26,360
	ctx.r11.s64 = ctx.r26.s64 + 360;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8367c974
	if (cr6.lt) goto loc_8367C974;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8367C974:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82475d40
	ctx.lr = 0x8367C980;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e74c08
	ctx.lr = 0x8367C98C;
	sub_82E74C08(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x824707c8
	ctx.lr = 0x8367C994;
	sub_824707C8(ctx, base);
	// addi r4,r29,-20
	ctx.r4.s64 = ctx.r29.s64 + -20;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82475d40
	ctx.lr = 0x8367C9A0;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e74c08
	ctx.lr = 0x8367C9AC;
	sub_82E74C08(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x824707c8
	ctx.lr = 0x8367C9B4;
	sub_824707C8(ctx, base);
	// lwz r10,408(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 408);
	// addi r11,r26,388
	ctx.r11.s64 = ctx.r26.s64 + 388;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8367c9c8
	if (cr6.lt) goto loc_8367C9C8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8367C9C8:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82475d40
	ctx.lr = 0x8367C9D4;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e74c08
	ctx.lr = 0x8367C9E0;
	sub_82E74C08(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x824707c8
	ctx.lr = 0x8367C9E8;
	sub_824707C8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82475d40
	ctx.lr = 0x8367C9F4;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e74c08
	ctx.lr = 0x8367CA00;
	sub_82E74C08(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x824707c8
	ctx.lr = 0x8367CA08;
	sub_824707C8(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r4,416(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 416);
	// bl 0x82e746c0
	ctx.lr = 0x8367CA14;
	sub_82E746C0(ctx, base);
	// addi r3,r1,992
	ctx.r3.s64 = ctx.r1.s64 + 992;
	// bl 0x8241fe60
	ctx.lr = 0x8367CA1C;
	sub_8241FE60(ctx, base);
	// lwz r3,244(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// bl 0x831cf100
	ctx.lr = 0x8367CA24;
	sub_831CF100(ctx, base);
	// addi r3,r1,1152
	ctx.r3.s64 = ctx.r1.s64 + 1152;
	// bl 0x8241fe60
	ctx.lr = 0x8367CA2C;
	sub_8241FE60(ctx, base);
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// bl 0x831cf100
	ctx.lr = 0x8367CA34;
	sub_831CF100(ctx, base);
	// addi r3,r1,1056
	ctx.r3.s64 = ctx.r1.s64 + 1056;
	// bl 0x8241fe60
	ctx.lr = 0x8367CA3C;
	sub_8241FE60(ctx, base);
	// lwz r3,228(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// bl 0x831cf100
	ctx.lr = 0x8367CA44;
	sub_831CF100(ctx, base);
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x831cf100
	ctx.lr = 0x8367CA4C;
	sub_831CF100(ctx, base);
	// addi r3,r1,1120
	ctx.r3.s64 = ctx.r1.s64 + 1120;
	// bl 0x8241fe60
	ctx.lr = 0x8367CA54;
	sub_8241FE60(ctx, base);
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// bl 0x831cf100
	ctx.lr = 0x8367CA5C;
	sub_831CF100(ctx, base);
	// addi r3,r1,1024
	ctx.r3.s64 = ctx.r1.s64 + 1024;
	// bl 0x8241fe60
	ctx.lr = 0x8367CA64;
	sub_8241FE60(ctx, base);
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// bl 0x831cf100
	ctx.lr = 0x8367CA6C;
	sub_831CF100(ctx, base);
	// addi r3,r1,1088
	ctx.r3.s64 = ctx.r1.s64 + 1088;
	// bl 0x8241fe60
	ctx.lr = 0x8367CA74;
	sub_8241FE60(ctx, base);
	// lwz r3,196(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// bl 0x831cf100
	ctx.lr = 0x8367CA7C;
	sub_831CF100(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x831cf100
	ctx.lr = 0x8367CA84;
	sub_831CF100(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1280
	ctx.r1.s64 = ctx.r1.s64 + 1280;
	// b 0x831cdb1c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8367CA90"))) PPC_WEAK_FUNC(sub_8367CA90);
PPC_FUNC_IMPL(__imp__sub_8367CA90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8367CA98;
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
	ctx.lr = 0x8367CAC0;
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
	// bge cr6,0x8367cd04
	if (!cr6.lt) goto loc_8367CD04;
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
	// addi r26,r11,-28768
	ctx.r26.s64 = ctx.r11.s64 + -28768;
loc_8367CAF8:
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
	ctx.lr = 0x8367CB2C;
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
	ctx.lr = 0x8367CB44;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8367cbd8
	if (!cr6.eq) goto loc_8367CBD8;
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
	ctx.lr = 0x8367CB7C;
	sub_82472FC0(ctx, base);
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x8367cb90
	if (!cr6.lt) goto loc_8367CB90;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
loc_8367CB90:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8367CB94:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8367cb94
	if (!cr6.eq) goto loc_8367CB94;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,20
	ctx.r3.s64 = ctx.r28.s64 + 20;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x8367CBB8;
	sub_824208C8(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8367cbcc
	if (cr6.lt) goto loc_8367CBCC;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82416268
	ctx.lr = 0x8367CBCC;
	sub_82416268(ctx, base);
loc_8367CBCC:
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
loc_8367CBD8:
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
	ctx.lr = 0x8367CBF0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8367cc2c
	if (!cr6.eq) goto loc_8367CC2C;
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
	// bne cr6,0x8367cc24
	if (!cr6.eq) goto loc_8367CC24;
	// ld r11,248(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 248);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8367cc28
	goto loc_8367CC28;
loc_8367CC24:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8367CC28:
	// stw r11,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r11.u32);
loc_8367CC2C:
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
	ctx.lr = 0x8367CC44;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8367ccd8
	if (!cr6.eq) goto loc_8367CCD8;
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
	ctx.lr = 0x8367CC7C;
	sub_82472FC0(ctx, base);
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x8367cc90
	if (!cr6.lt) goto loc_8367CC90;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_8367CC90:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8367CC94:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8367cc94
	if (!cr6.eq) goto loc_8367CC94;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,116
	ctx.r3.s64 = ctx.r28.s64 + 116;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x8367CCB8;
	sub_824208C8(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8367cccc
	if (cr6.lt) goto loc_8367CCCC;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82416268
	ctx.lr = 0x8367CCCC;
	sub_82416268(ctx, base);
loc_8367CCCC:
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
loc_8367CCD8:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8367ccec
	if (cr6.lt) goto loc_8367CCEC;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82416268
	ctx.lr = 0x8367CCEC;
	sub_82416268(ctx, base);
loc_8367CCEC:
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
	// bne 0x8367caf8
	if (!cr0.eq) goto loc_8367CAF8;
loc_8367CD04:
	// lwz r31,192(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8367cd20
	if (cr6.eq) goto loc_8367CD20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x8367CD18;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x8367CD20;
	sub_82416268(ctx, base);
loc_8367CD20:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8367CD2C"))) PPC_WEAK_FUNC(sub_8367CD2C);
PPC_FUNC_IMPL(__imp__sub_8367CD2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8367CD30"))) PPC_WEAK_FUNC(sub_8367CD30);
PPC_FUNC_IMPL(__imp__sub_8367CD30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8367CD38;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d95768
	ctx.lr = 0x8367CD44;
	sub_82D95768(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r29,r11,-29280
	ctx.r29.s64 = ctx.r11.s64 + -29280;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824208c8
	ctx.lr = 0x8367CD5C;
	sub_824208C8(ctx, base);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// addi r7,r10,-28660
	ctx.r7.s64 = ctx.r10.s64 + -28660;
	// addi r5,r8,-28676
	ctx.r5.s64 = ctx.r8.s64 + -28676;
	// addi r6,r9,-28672
	ctx.r6.s64 = ctx.r9.s64 + -28672;
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
	ctx.lr = 0x8367CDA4;
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
	ctx.lr = 0x8367CDC0;
	sub_824208C8(ctx, base);
	// stw r30,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r30.u32);
	// stw r30,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r30.u32);
	// li r11,14
	ctx.r11.s64 = 14;
	// stw r30,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r30.u32);
	// addi r10,r31,372
	ctx.r10.s64 = ctx.r31.s64 + 372;
	// stw r30,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r30.u32);
	// addi r3,r31,532
	ctx.r3.s64 = ctx.r31.s64 + 532;
	// stw r30,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r30.u32);
	// sth r30,392(r31)
	PPC_STORE_U16(ctx.r31.u32 + 392, ctx.r30.u16);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// stw r11,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r11.u32);
	// addi r9,r10,28
	ctx.r9.s64 = ctx.r10.s64 + 28;
	// stw r30,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r30.u32);
	// addi r10,r10,52
	ctx.r10.s64 = ctx.r10.s64 + 52;
	// stw r30,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r30.u32);
	// addi r4,r29,60
	ctx.r4.s64 = ctx.r29.s64 + 60;
	// stw r30,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r30.u32);
	// stw r30,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r30.u32);
	// sth r30,416(r31)
	PPC_STORE_U16(ctx.r31.u32 + 416, ctx.r30.u16);
	// stw r11,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r11.u32);
	// stw r30,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r30.u32);
	// stw r30,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r30.u32);
	// stw r30,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r30.u32);
	// stw r30,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r30.u32);
	// sth r30,440(r31)
	PPC_STORE_U16(ctx.r31.u32 + 440, ctx.r30.u16);
	// stw r11,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r11.u32);
	// stw r30,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r30.u32);
	// stw r30,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r30.u32);
	// stw r30,456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 456, ctx.r30.u32);
	// stw r30,460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 460, ctx.r30.u32);
	// stw r30,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r30.u32);
	// stw r30,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r30.u32);
	// sth r30,472(r31)
	PPC_STORE_U16(ctx.r31.u32 + 472, ctx.r30.u16);
	// stw r11,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r11.u32);
	// stw r30,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r30.u32);
	// stw r30,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r30.u32);
	// stw r30,488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 488, ctx.r30.u32);
	// stw r30,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r30.u32);
	// sth r30,496(r31)
	PPC_STORE_U16(ctx.r31.u32 + 496, ctx.r30.u16);
	// stw r11,500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 500, ctx.r11.u32);
	// stw r30,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r30.u32);
	// stw r30,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r30.u32);
	// stw r30,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r30.u32);
	// stw r30,516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 516, ctx.r30.u32);
	// sth r30,520(r31)
	PPC_STORE_U16(ctx.r31.u32 + 520, ctx.r30.u16);
	// li r5,12
	ctx.r5.s64 = 12;
	// stw r11,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r11.u32);
	// addi r11,r31,452
	ctx.r11.s64 = ctx.r31.s64 + 452;
	// stw r30,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r30.u32);
	// stw r28,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r28.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r30,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r30.u32);
	// addi r10,r11,28
	ctx.r10.s64 = ctx.r11.s64 + 28;
	// stb r30,532(r31)
	PPC_STORE_U8(ctx.r31.u32 + 532, ctx.r30.u8);
	// addi r11,r11,52
	ctx.r11.s64 = ctx.r11.s64 + 52;
	// bl 0x824208c8
	ctx.lr = 0x8367CEA0;
	sub_824208C8(ctx, base);
	// stw r28,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r28.u32);
	// stw r30,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r30.u32);
	// addi r3,r31,560
	ctx.r3.s64 = ctx.r31.s64 + 560;
	// stb r30,560(r31)
	PPC_STORE_U8(ctx.r31.u32 + 560, ctx.r30.u8);
	// addi r4,r29,76
	ctx.r4.s64 = ctx.r29.s64 + 76;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x8367CEBC;
	sub_824208C8(ctx, base);
	// stw r28,608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 608, ctx.r28.u32);
	// stw r30,604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 604, ctx.r30.u32);
	// addi r3,r31,588
	ctx.r3.s64 = ctx.r31.s64 + 588;
	// stb r30,588(r31)
	PPC_STORE_U8(ctx.r31.u32 + 588, ctx.r30.u8);
	// addi r4,r29,92
	ctx.r4.s64 = ctx.r29.s64 + 92;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x8367CED8;
	sub_824208C8(ctx, base);
	// stw r30,616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 616, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8367CEE8"))) PPC_WEAK_FUNC(sub_8367CEE8);
PPC_FUNC_IMPL(__imp__sub_8367CEE8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x8367cff8
	sub_8367CFF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8367CEF0"))) PPC_WEAK_FUNC(sub_8367CEF0);
PPC_FUNC_IMPL(__imp__sub_8367CEF0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x8367cff8
	sub_8367CFF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8367CEF8"))) PPC_WEAK_FUNC(sub_8367CEF8);
PPC_FUNC_IMPL(__imp__sub_8367CEF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8367CF00;
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
	// addi r8,r11,-28660
	ctx.r8.s64 = ctx.r11.s64 + -28660;
	// addi r7,r10,-28672
	ctx.r7.s64 = ctx.r10.s64 + -28672;
	// addi r6,r9,-28676
	ctx.r6.s64 = ctx.r9.s64 + -28676;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r6,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r6.u32);
	// addi r28,r3,588
	ctx.r28.s64 = ctx.r3.s64 + 588;
	// lwz r5,608(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 608);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x8367cf44
	if (cr6.lt) goto loc_8367CF44;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8367CF44;
	sub_8386D088(ctx, base);
loc_8367CF44:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// addi r29,r30,560
	ctx.r29.s64 = ctx.r30.s64 + 560;
	// stw r27,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r27.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// lwz r11,580(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 580);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8367cf70
	if (cr6.lt) goto loc_8367CF70;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8367CF70;
	sub_8386D088(ctx, base);
loc_8367CF70:
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// addi r28,r30,532
	ctx.r28.s64 = ctx.r30.s64 + 532;
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// lwz r11,552(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 552);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8367cf94
	if (cr6.lt) goto loc_8367CF94;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8367CF94;
	sub_8386D088(ctx, base);
loc_8367CF94:
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
	// blt cr6,0x8367cfb8
	if (cr6.lt) goto loc_8367CFB8;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8367CFB8;
	sub_8386D088(ctx, base);
loc_8367CFB8:
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
	// blt cr6,0x8367cfdc
	if (cr6.lt) goto loc_8367CFDC;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8367CFDC;
	sub_8386D088(ctx, base);
loc_8367CFDC:
	// stw r27,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// bl 0x82b6a590
	ctx.lr = 0x8367CFF0;
	sub_82B6A590(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8367CFF8"))) PPC_WEAK_FUNC(sub_8367CFF8);
PPC_FUNC_IMPL(__imp__sub_8367CFF8) {
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
	// bl 0x8367cef8
	ctx.lr = 0x8367D018;
	sub_8367CEF8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8367d038
	if (cr6.eq) goto loc_8367D038;
	// bl 0x82595188
	ctx.lr = 0x8367D028;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x8367D038;
	sub_825952B8(ctx, base);
loc_8367D038:
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

__attribute__((alias("__imp__sub_8367D054"))) PPC_WEAK_FUNC(sub_8367D054);
PPC_FUNC_IMPL(__imp__sub_8367D054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8367D058"))) PPC_WEAK_FUNC(sub_8367D058);
PPC_FUNC_IMPL(__imp__sub_8367D058) {
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
	ctx.lr = 0x8367D070;
	sub_82EAF8D8(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r4,r11,-29280
	ctx.r4.s64 = ctx.r11.s64 + -29280;
	// li r5,24
	ctx.r5.s64 = 24;
	// bl 0x824208c8
	ctx.lr = 0x8367D084;
	sub_824208C8(ctx, base);
	// lis r7,-32216
	ctx.r7.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// addi r3,r7,-28612
	ctx.r3.s64 = ctx.r7.s64 + -28612;
	// addi r6,r10,-28628
	ctx.r6.s64 = ctx.r10.s64 + -28628;
	// addi r5,r9,-28640
	ctx.r5.s64 = ctx.r9.s64 + -28640;
	// stw r3,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r3.u32);
	// addi r4,r8,-28644
	ctx.r4.s64 = ctx.r8.s64 + -28644;
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

__attribute__((alias("__imp__sub_8367D0CC"))) PPC_WEAK_FUNC(sub_8367D0CC);
PPC_FUNC_IMPL(__imp__sub_8367D0CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8367D0D0"))) PPC_WEAK_FUNC(sub_8367D0D0);
PPC_FUNC_IMPL(__imp__sub_8367D0D0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x8367d0e8
	sub_8367D0E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8367D0D8"))) PPC_WEAK_FUNC(sub_8367D0D8);
PPC_FUNC_IMPL(__imp__sub_8367D0D8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x8367d0e8
	sub_8367D0E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8367D0E0"))) PPC_WEAK_FUNC(sub_8367D0E0);
PPC_FUNC_IMPL(__imp__sub_8367D0E0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-312
	ctx.r3.s64 = ctx.r3.s64 + -312;
	// b 0x8367d0e8
	sub_8367D0E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8367D0E8"))) PPC_WEAK_FUNC(sub_8367D0E8);
PPC_FUNC_IMPL(__imp__sub_8367D0E8) {
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
	// addi r7,r11,-28628
	ctx.r7.s64 = ctx.r11.s64 + -28628;
	// addi r6,r10,-28640
	ctx.r6.s64 = ctx.r10.s64 + -28640;
	// addi r5,r9,-28644
	ctx.r5.s64 = ctx.r9.s64 + -28644;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r8,-28612
	ctx.r4.s64 = ctx.r8.s64 + -28612;
	// stw r6,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r6.u32);
	// stw r5,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r4.u32);
	// bl 0x82eaf978
	ctx.lr = 0x8367D138;
	sub_82EAF978(ctx, base);
	// clrlwi r3,r30,31
	ctx.r3.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8367d158
	if (cr6.eq) goto loc_8367D158;
	// bl 0x82595188
	ctx.lr = 0x8367D148;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x8367D158;
	sub_825952B8(ctx, base);
loc_8367D158:
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

__attribute__((alias("__imp__sub_8367D174"))) PPC_WEAK_FUNC(sub_8367D174);
PPC_FUNC_IMPL(__imp__sub_8367D174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8367D178"))) PPC_WEAK_FUNC(sub_8367D178);
PPC_FUNC_IMPL(__imp__sub_8367D178) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8367D180;
	__savegprlr_27(ctx, base);
	// stwu r1,-1264(r1)
	ea = -1264 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,222
	ctx.r11.s64 = 222;
	// li r10,52
	ctx.r10.s64 = 52;
	// li r31,0
	ctx.r31.s64 = 0;
	// stb r11,124(r1)
	PPC_STORE_U8(ctx.r1.u32 + 124, ctx.r11.u8);
	// sth r10,125(r1)
	PPC_STORE_U16(ctx.r1.u32 + 125, ctx.r10.u16);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82e74660
	ctx.lr = 0x8367D1B8;
	sub_82E74660(ctx, base);
	// li r30,15
	ctx.r30.s64 = 15;
	// stw r31,656(r1)
	PPC_STORE_U32(ctx.r1.u32 + 656, ctx.r31.u32);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// stw r30,660(r1)
	PPC_STORE_U32(ctx.r1.u32 + 660, ctx.r30.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// stb r31,640(r1)
	PPC_STORE_U8(ctx.r1.u32 + 640, ctx.r31.u8);
	// addi r28,r11,-27316
	ctx.r28.s64 = ctx.r11.s64 + -27316;
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// addi r4,r28,-1028
	ctx.r4.s64 = ctx.r28.s64 + -1028;
	// bl 0x82472fc0
	ctx.lr = 0x8367D1E0;
	sub_82472FC0(ctx, base);
	// addi r4,r1,640
	ctx.r4.s64 = ctx.r1.s64 + 640;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367D1EC;
	sub_82E74C08(ctx, base);
	// lwz r9,660(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 660);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x8367d200
	if (cr6.lt) goto loc_8367D200;
	// lwz r3,640(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 640);
	// bl 0x82416268
	ctx.lr = 0x8367D200;
	sub_82416268(ctx, base);
loc_8367D200:
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// addi r4,r29,20
	ctx.r4.s64 = ctx.r29.s64 + 20;
	// stw r30,660(r1)
	PPC_STORE_U32(ctx.r1.u32 + 660, ctx.r30.u32);
	// stw r31,656(r1)
	PPC_STORE_U32(ctx.r1.u32 + 656, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,640(r1)
	PPC_STORE_U8(ctx.r1.u32 + 640, ctx.r31.u8);
	// blt cr6,0x8367d220
	if (cr6.lt) goto loc_8367D220;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8367D220:
	// stw r30,852(r1)
	PPC_STORE_U32(ctx.r1.u32 + 852, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,848(r1)
	PPC_STORE_U32(ctx.r1.u32 + 848, ctx.r31.u32);
	// stb r31,832(r1)
	PPC_STORE_U8(ctx.r1.u32 + 832, ctx.r31.u8);
loc_8367D230:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8367d230
	if (!cr6.eq) goto loc_8367D230;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,832
	ctx.r3.s64 = ctx.r1.s64 + 832;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8367D254;
	sub_82472FC0(ctx, base);
	// addi r4,r1,832
	ctx.r4.s64 = ctx.r1.s64 + 832;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367D260;
	sub_82E74C08(ctx, base);
	// lwz r10,852(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 852);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8367d274
	if (cr6.lt) goto loc_8367D274;
	// lwz r3,832(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 832);
	// bl 0x82416268
	ctx.lr = 0x8367D274;
	sub_82416268(ctx, base);
loc_8367D274:
	// stw r30,852(r1)
	PPC_STORE_U32(ctx.r1.u32 + 852, ctx.r30.u32);
	// addi r4,r28,-1020
	ctx.r4.s64 = ctx.r28.s64 + -1020;
	// stw r31,848(r1)
	PPC_STORE_U32(ctx.r1.u32 + 848, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,832(r1)
	PPC_STORE_U8(ctx.r1.u32 + 832, ctx.r31.u8);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x8367D29C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367D2A8;
	sub_82E74C08(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8367d2bc
	if (cr6.lt) goto loc_8367D2BC;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82416268
	ctx.lr = 0x8367D2BC;
	sub_82416268(ctx, base);
loc_8367D2BC:
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// lwz r4,48(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// bl 0x82e746c0
	ctx.lr = 0x8367D2D4;
	sub_82E746C0(ctx, base);
	// stw r30,724(r1)
	PPC_STORE_U32(ctx.r1.u32 + 724, ctx.r30.u32);
	// stw r31,720(r1)
	PPC_STORE_U32(ctx.r1.u32 + 720, ctx.r31.u32);
	// addi r4,r28,-1012
	ctx.r4.s64 = ctx.r28.s64 + -1012;
	// stb r31,704(r1)
	PPC_STORE_U8(ctx.r1.u32 + 704, ctx.r31.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// bl 0x82472fc0
	ctx.lr = 0x8367D2F0;
	sub_82472FC0(ctx, base);
	// addi r4,r1,704
	ctx.r4.s64 = ctx.r1.s64 + 704;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367D2FC;
	sub_82E74C08(ctx, base);
	// lwz r11,724(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 724);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8367d310
	if (cr6.lt) goto loc_8367D310;
	// lwz r3,704(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 704);
	// bl 0x82416268
	ctx.lr = 0x8367D310;
	sub_82416268(ctx, base);
loc_8367D310:
	// lwz r11,136(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// addi r4,r29,116
	ctx.r4.s64 = ctx.r29.s64 + 116;
	// stw r30,724(r1)
	PPC_STORE_U32(ctx.r1.u32 + 724, ctx.r30.u32);
	// stw r31,720(r1)
	PPC_STORE_U32(ctx.r1.u32 + 720, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,704(r1)
	PPC_STORE_U8(ctx.r1.u32 + 704, ctx.r31.u8);
	// blt cr6,0x8367d330
	if (cr6.lt) goto loc_8367D330;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8367D330:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
loc_8367D340:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8367d340
	if (!cr6.eq) goto loc_8367D340;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8367D364;
	sub_82472FC0(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367D370;
	sub_82E74C08(ctx, base);
	// lwz r10,276(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8367d384
	if (cr6.lt) goto loc_8367D384;
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x82416268
	ctx.lr = 0x8367D384;
	sub_82416268(ctx, base);
loc_8367D384:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// addi r4,r28,-1004
	ctx.r4.s64 = ctx.r28.s64 + -1004;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// addi r3,r1,864
	ctx.r3.s64 = ctx.r1.s64 + 864;
	// stw r30,884(r1)
	PPC_STORE_U32(ctx.r1.u32 + 884, ctx.r30.u32);
	// stw r31,880(r1)
	PPC_STORE_U32(ctx.r1.u32 + 880, ctx.r31.u32);
	// stb r31,864(r1)
	PPC_STORE_U8(ctx.r1.u32 + 864, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x8367D3AC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,864
	ctx.r4.s64 = ctx.r1.s64 + 864;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367D3B8;
	sub_82E74C08(ctx, base);
	// lwz r11,884(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 884);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8367d3cc
	if (cr6.lt) goto loc_8367D3CC;
	// lwz r3,864(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 864);
	// bl 0x82416268
	ctx.lr = 0x8367D3CC;
	sub_82416268(ctx, base);
loc_8367D3CC:
	// lwz r11,164(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 164);
	// addi r4,r29,144
	ctx.r4.s64 = ctx.r29.s64 + 144;
	// stw r30,884(r1)
	PPC_STORE_U32(ctx.r1.u32 + 884, ctx.r30.u32);
	// stw r31,880(r1)
	PPC_STORE_U32(ctx.r1.u32 + 880, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,864(r1)
	PPC_STORE_U8(ctx.r1.u32 + 864, ctx.r31.u8);
	// blt cr6,0x8367d3ec
	if (cr6.lt) goto loc_8367D3EC;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8367D3EC:
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
loc_8367D3FC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8367d3fc
	if (!cr6.eq) goto loc_8367D3FC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8367D420;
	sub_82472FC0(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367D42C;
	sub_82E74C08(ctx, base);
	// lwz r10,340(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8367d440
	if (cr6.lt) goto loc_8367D440;
	// lwz r3,320(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x82416268
	ctx.lr = 0x8367D440;
	sub_82416268(ctx, base);
loc_8367D440:
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// addi r4,r28,-996
	ctx.r4.s64 = ctx.r28.s64 + -996;
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// addi r3,r1,768
	ctx.r3.s64 = ctx.r1.s64 + 768;
	// stw r30,788(r1)
	PPC_STORE_U32(ctx.r1.u32 + 788, ctx.r30.u32);
	// stw r31,784(r1)
	PPC_STORE_U32(ctx.r1.u32 + 784, ctx.r31.u32);
	// stb r31,768(r1)
	PPC_STORE_U8(ctx.r1.u32 + 768, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x8367D468;
	sub_82472FC0(ctx, base);
	// addi r4,r1,768
	ctx.r4.s64 = ctx.r1.s64 + 768;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367D474;
	sub_82E74C08(ctx, base);
	// lwz r11,788(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 788);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8367d488
	if (cr6.lt) goto loc_8367D488;
	// lwz r3,768(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 768);
	// bl 0x82416268
	ctx.lr = 0x8367D488;
	sub_82416268(ctx, base);
loc_8367D488:
	// stw r30,788(r1)
	PPC_STORE_U32(ctx.r1.u32 + 788, ctx.r30.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r31,784(r1)
	PPC_STORE_U32(ctx.r1.u32 + 784, ctx.r31.u32);
	// stb r31,768(r1)
	PPC_STORE_U8(ctx.r1.u32 + 768, ctx.r31.u8);
	// lwz r4,172(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 172);
	// bl 0x82e746c0
	ctx.lr = 0x8367D4A0;
	sub_82E746C0(ctx, base);
	// stw r30,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r30.u32);
	// stw r31,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r31.u32);
	// addi r4,r28,-992
	ctx.r4.s64 = ctx.r28.s64 + -992;
	// stb r31,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r31.u8);
	// li r5,14
	ctx.r5.s64 = 14;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82472fc0
	ctx.lr = 0x8367D4BC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367D4C8;
	sub_82E74C08(ctx, base);
	// lwz r11,404(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8367d4dc
	if (cr6.lt) goto loc_8367D4DC;
	// lwz r3,384(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// bl 0x82416268
	ctx.lr = 0x8367D4DC;
	sub_82416268(ctx, base);
loc_8367D4DC:
	// lwz r11,196(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 196);
	// addi r4,r29,176
	ctx.r4.s64 = ctx.r29.s64 + 176;
	// stw r30,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r30.u32);
	// stw r31,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r31.u8);
	// blt cr6,0x8367d4fc
	if (cr6.lt) goto loc_8367D4FC;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8367D4FC:
	// stw r30,948(r1)
	PPC_STORE_U32(ctx.r1.u32 + 948, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,944(r1)
	PPC_STORE_U32(ctx.r1.u32 + 944, ctx.r31.u32);
	// stb r31,928(r1)
	PPC_STORE_U8(ctx.r1.u32 + 928, ctx.r31.u8);
loc_8367D50C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8367d50c
	if (!cr6.eq) goto loc_8367D50C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,928
	ctx.r3.s64 = ctx.r1.s64 + 928;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8367D530;
	sub_82472FC0(ctx, base);
	// addi r4,r1,928
	ctx.r4.s64 = ctx.r1.s64 + 928;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367D53C;
	sub_82E74C08(ctx, base);
	// lwz r10,948(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 948);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8367d550
	if (cr6.lt) goto loc_8367D550;
	// lwz r3,928(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 928);
	// bl 0x82416268
	ctx.lr = 0x8367D550;
	sub_82416268(ctx, base);
loc_8367D550:
	// stw r30,948(r1)
	PPC_STORE_U32(ctx.r1.u32 + 948, ctx.r30.u32);
	// addi r4,r28,-976
	ctx.r4.s64 = ctx.r28.s64 + -976;
	// stw r31,944(r1)
	PPC_STORE_U32(ctx.r1.u32 + 944, ctx.r31.u32);
	// li r5,10
	ctx.r5.s64 = 10;
	// stb r31,928(r1)
	PPC_STORE_U8(ctx.r1.u32 + 928, ctx.r31.u8);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// stw r30,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r30.u32);
	// stw r31,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r31.u32);
	// stb r31,448(r1)
	PPC_STORE_U8(ctx.r1.u32 + 448, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x8367D578;
	sub_82472FC0(ctx, base);
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367D584;
	sub_82E74C08(ctx, base);
	// lwz r11,468(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8367d598
	if (cr6.lt) goto loc_8367D598;
	// lwz r3,448(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// bl 0x82416268
	ctx.lr = 0x8367D598;
	sub_82416268(ctx, base);
loc_8367D598:
	// lwz r11,224(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 224);
	// addi r4,r29,204
	ctx.r4.s64 = ctx.r29.s64 + 204;
	// stw r30,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r30.u32);
	// stw r31,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,448(r1)
	PPC_STORE_U8(ctx.r1.u32 + 448, ctx.r31.u8);
	// blt cr6,0x8367d5b8
	if (cr6.lt) goto loc_8367D5B8;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8367D5B8:
	// stw r30,1012(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1012, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,1008(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1008, ctx.r31.u32);
	// stb r31,992(r1)
	PPC_STORE_U8(ctx.r1.u32 + 992, ctx.r31.u8);
loc_8367D5C8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8367d5c8
	if (!cr6.eq) goto loc_8367D5C8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,992
	ctx.r3.s64 = ctx.r1.s64 + 992;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8367D5EC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,992
	ctx.r4.s64 = ctx.r1.s64 + 992;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367D5F8;
	sub_82E74C08(ctx, base);
	// lwz r10,1012(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1012);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8367d60c
	if (cr6.lt) goto loc_8367D60C;
	// lwz r3,992(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 992);
	// bl 0x82416268
	ctx.lr = 0x8367D60C;
	sub_82416268(ctx, base);
loc_8367D60C:
	// stw r30,1012(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1012, ctx.r30.u32);
	// addi r4,r28,-964
	ctx.r4.s64 = ctx.r28.s64 + -964;
	// stw r31,1008(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1008, ctx.r31.u32);
	// li r5,10
	ctx.r5.s64 = 10;
	// stb r31,992(r1)
	PPC_STORE_U8(ctx.r1.u32 + 992, ctx.r31.u8);
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// stw r30,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r30.u32);
	// stw r31,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r31.u32);
	// stb r31,512(r1)
	PPC_STORE_U8(ctx.r1.u32 + 512, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x8367D634;
	sub_82472FC0(ctx, base);
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367D640;
	sub_82E74C08(ctx, base);
	// lwz r11,532(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 532);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8367d654
	if (cr6.lt) goto loc_8367D654;
	// lwz r3,512(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 512);
	// bl 0x82416268
	ctx.lr = 0x8367D654;
	sub_82416268(ctx, base);
loc_8367D654:
	// lwz r11,252(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 252);
	// addi r4,r29,232
	ctx.r4.s64 = ctx.r29.s64 + 232;
	// stw r30,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r30.u32);
	// stw r31,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,512(r1)
	PPC_STORE_U8(ctx.r1.u32 + 512, ctx.r31.u8);
	// blt cr6,0x8367d674
	if (cr6.lt) goto loc_8367D674;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8367D674:
	// stw r30,980(r1)
	PPC_STORE_U32(ctx.r1.u32 + 980, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,976(r1)
	PPC_STORE_U32(ctx.r1.u32 + 976, ctx.r31.u32);
	// stb r31,960(r1)
	PPC_STORE_U8(ctx.r1.u32 + 960, ctx.r31.u8);
loc_8367D684:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8367d684
	if (!cr6.eq) goto loc_8367D684;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,960
	ctx.r3.s64 = ctx.r1.s64 + 960;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8367D6A8;
	sub_82472FC0(ctx, base);
	// addi r4,r1,960
	ctx.r4.s64 = ctx.r1.s64 + 960;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367D6B4;
	sub_82E74C08(ctx, base);
	// lwz r10,980(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 980);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8367d6c8
	if (cr6.lt) goto loc_8367D6C8;
	// lwz r3,960(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 960);
	// bl 0x82416268
	ctx.lr = 0x8367D6C8;
	sub_82416268(ctx, base);
loc_8367D6C8:
	// stw r30,980(r1)
	PPC_STORE_U32(ctx.r1.u32 + 980, ctx.r30.u32);
	// addi r4,r28,-952
	ctx.r4.s64 = ctx.r28.s64 + -952;
	// stw r31,976(r1)
	PPC_STORE_U32(ctx.r1.u32 + 976, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,960(r1)
	PPC_STORE_U8(ctx.r1.u32 + 960, ctx.r31.u8);
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// stw r30,596(r1)
	PPC_STORE_U32(ctx.r1.u32 + 596, ctx.r30.u32);
	// stw r31,592(r1)
	PPC_STORE_U32(ctx.r1.u32 + 592, ctx.r31.u32);
	// stb r31,576(r1)
	PPC_STORE_U8(ctx.r1.u32 + 576, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x8367D6F0;
	sub_82472FC0(ctx, base);
	// addi r4,r1,576
	ctx.r4.s64 = ctx.r1.s64 + 576;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367D6FC;
	sub_82E74C08(ctx, base);
	// lwz r11,596(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 596);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8367d710
	if (cr6.lt) goto loc_8367D710;
	// lwz r3,576(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 576);
	// bl 0x82416268
	ctx.lr = 0x8367D710;
	sub_82416268(ctx, base);
loc_8367D710:
	// lwz r11,280(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 280);
	// addi r4,r29,260
	ctx.r4.s64 = ctx.r29.s64 + 260;
	// stw r30,596(r1)
	PPC_STORE_U32(ctx.r1.u32 + 596, ctx.r30.u32);
	// stw r31,592(r1)
	PPC_STORE_U32(ctx.r1.u32 + 592, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,576(r1)
	PPC_STORE_U8(ctx.r1.u32 + 576, ctx.r31.u8);
	// blt cr6,0x8367d730
	if (cr6.lt) goto loc_8367D730;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8367D730:
	// stw r30,916(r1)
	PPC_STORE_U32(ctx.r1.u32 + 916, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,912(r1)
	PPC_STORE_U32(ctx.r1.u32 + 912, ctx.r31.u32);
	// stb r31,896(r1)
	PPC_STORE_U8(ctx.r1.u32 + 896, ctx.r31.u8);
loc_8367D740:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8367d740
	if (!cr6.eq) goto loc_8367D740;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,896
	ctx.r3.s64 = ctx.r1.s64 + 896;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8367D764;
	sub_82472FC0(ctx, base);
	// addi r4,r1,896
	ctx.r4.s64 = ctx.r1.s64 + 896;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367D770;
	sub_82E74C08(ctx, base);
	// lwz r10,916(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 916);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8367d784
	if (cr6.lt) goto loc_8367D784;
	// lwz r3,896(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 896);
	// bl 0x82416268
	ctx.lr = 0x8367D784;
	sub_82416268(ctx, base);
loc_8367D784:
	// stw r30,916(r1)
	PPC_STORE_U32(ctx.r1.u32 + 916, ctx.r30.u32);
	// addi r4,r28,-944
	ctx.r4.s64 = ctx.r28.s64 + -944;
	// stw r31,912(r1)
	PPC_STORE_U32(ctx.r1.u32 + 912, ctx.r31.u32);
	// li r5,10
	ctx.r5.s64 = 10;
	// stb r31,896(r1)
	PPC_STORE_U8(ctx.r1.u32 + 896, ctx.r31.u8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x8367D7AC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367D7B8;
	sub_82E74C08(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8367d7cc
	if (cr6.lt) goto loc_8367D7CC;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x8367D7CC;
	sub_82416268(ctx, base);
loc_8367D7CC:
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// lwz r4,288(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 288);
	// bl 0x82e746c0
	ctx.lr = 0x8367D7E4;
	sub_82E746C0(ctx, base);
	// stw r30,820(r1)
	PPC_STORE_U32(ctx.r1.u32 + 820, ctx.r30.u32);
	// stw r31,816(r1)
	PPC_STORE_U32(ctx.r1.u32 + 816, ctx.r31.u32);
	// addi r4,r28,-932
	ctx.r4.s64 = ctx.r28.s64 + -932;
	// stb r31,800(r1)
	PPC_STORE_U8(ctx.r1.u32 + 800, ctx.r31.u8);
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r3,r1,800
	ctx.r3.s64 = ctx.r1.s64 + 800;
	// bl 0x82472fc0
	ctx.lr = 0x8367D800;
	sub_82472FC0(ctx, base);
	// addi r4,r1,800
	ctx.r4.s64 = ctx.r1.s64 + 800;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367D80C;
	sub_82E74C08(ctx, base);
	// lwz r11,820(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 820);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8367d820
	if (cr6.lt) goto loc_8367D820;
	// lwz r3,800(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 800);
	// bl 0x82416268
	ctx.lr = 0x8367D820;
	sub_82416268(ctx, base);
loc_8367D820:
	// stw r30,820(r1)
	PPC_STORE_U32(ctx.r1.u32 + 820, ctx.r30.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r31,816(r1)
	PPC_STORE_U32(ctx.r1.u32 + 816, ctx.r31.u32);
	// stb r31,800(r1)
	PPC_STORE_U8(ctx.r1.u32 + 800, ctx.r31.u8);
	// lwz r4,292(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 292);
	// bl 0x82e746c0
	ctx.lr = 0x8367D838;
	sub_82E746C0(ctx, base);
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// addi r4,r28,-920
	ctx.r4.s64 = ctx.r28.s64 + -920;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82472fc0
	ctx.lr = 0x8367D854;
	sub_82472FC0(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367D860;
	sub_82E74C08(ctx, base);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8367d874
	if (cr6.lt) goto loc_8367D874;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x8367D874;
	sub_82416268(ctx, base);
loc_8367D874:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// lwz r4,296(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 296);
	// bl 0x82e746c0
	ctx.lr = 0x8367D88C;
	sub_82E746C0(ctx, base);
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// addi r4,r28,-904
	ctx.r4.s64 = ctx.r28.s64 + -904;
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82472fc0
	ctx.lr = 0x8367D8A8;
	sub_82472FC0(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367D8B4;
	sub_82E74C08(ctx, base);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8367d8c8
	if (cr6.lt) goto loc_8367D8C8;
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82416268
	ctx.lr = 0x8367D8C8;
	sub_82416268(ctx, base);
loc_8367D8C8:
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// lwz r4,300(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 300);
	// bl 0x82e746c0
	ctx.lr = 0x8367D8E0;
	sub_82E746C0(ctx, base);
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// addi r4,r28,-888
	ctx.r4.s64 = ctx.r28.s64 + -888;
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82472fc0
	ctx.lr = 0x8367D8FC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367D908;
	sub_82E74C08(ctx, base);
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8367d91c
	if (cr6.lt) goto loc_8367D91C;
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82416268
	ctx.lr = 0x8367D91C;
	sub_82416268(ctx, base);
loc_8367D91C:
	// lwz r11,324(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 324);
	// addi r4,r29,304
	ctx.r4.s64 = ctx.r29.s64 + 304;
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// blt cr6,0x8367d93c
	if (cr6.lt) goto loc_8367D93C;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8367D93C:
	// stw r30,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
loc_8367D94C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8367d94c
	if (!cr6.eq) goto loc_8367D94C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8367D970;
	sub_82472FC0(ctx, base);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367D97C;
	sub_82E74C08(ctx, base);
	// lwz r10,372(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8367d990
	if (cr6.lt) goto loc_8367D990;
	// lwz r3,352(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// bl 0x82416268
	ctx.lr = 0x8367D990;
	sub_82416268(ctx, base);
loc_8367D990:
	// stw r30,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r30.u32);
	// addi r4,r28,-876
	ctx.r4.s64 = ctx.r28.s64 + -876;
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// li r5,18
	ctx.r5.s64 = 18;
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// stw r30,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r30.u32);
	// stw r31,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r31.u32);
	// stb r31,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x8367D9B8;
	sub_82472FC0(ctx, base);
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367D9C4;
	sub_82E74C08(ctx, base);
	// lwz r11,436(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8367d9d8
	if (cr6.lt) goto loc_8367D9D8;
	// lwz r3,416(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// bl 0x82416268
	ctx.lr = 0x8367D9D8;
	sub_82416268(ctx, base);
loc_8367D9D8:
	// lwz r11,352(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 352);
	// addi r4,r29,332
	ctx.r4.s64 = ctx.r29.s64 + 332;
	// stw r30,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r30.u32);
	// stw r31,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r31.u8);
	// blt cr6,0x8367d9f8
	if (cr6.lt) goto loc_8367D9F8;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8367D9F8:
	// stw r30,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r31.u32);
	// stb r31,480(r1)
	PPC_STORE_U8(ctx.r1.u32 + 480, ctx.r31.u8);
loc_8367DA08:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8367da08
	if (!cr6.eq) goto loc_8367DA08;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8367DA2C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367DA38;
	sub_82E74C08(ctx, base);
	// lwz r10,500(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 500);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8367da4c
	if (cr6.lt) goto loc_8367DA4C;
	// lwz r3,480(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 480);
	// bl 0x82416268
	ctx.lr = 0x8367DA4C;
	sub_82416268(ctx, base);
loc_8367DA4C:
	// stw r30,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r30.u32);
	// addi r4,r28,-856
	ctx.r4.s64 = ctx.r28.s64 + -856;
	// stw r31,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r31.u32);
	// li r5,18
	ctx.r5.s64 = 18;
	// stb r31,480(r1)
	PPC_STORE_U8(ctx.r1.u32 + 480, ctx.r31.u8);
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// stw r30,564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 564, ctx.r30.u32);
	// stw r31,560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 560, ctx.r31.u32);
	// stb r31,544(r1)
	PPC_STORE_U8(ctx.r1.u32 + 544, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x8367DA74;
	sub_82472FC0(ctx, base);
	// addi r4,r1,544
	ctx.r4.s64 = ctx.r1.s64 + 544;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367DA80;
	sub_82E74C08(ctx, base);
	// lwz r11,564(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 564);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8367da94
	if (cr6.lt) goto loc_8367DA94;
	// lwz r3,544(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 544);
	// bl 0x82416268
	ctx.lr = 0x8367DA94;
	sub_82416268(ctx, base);
loc_8367DA94:
	// stw r30,564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 564, ctx.r30.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r31,560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 560, ctx.r31.u32);
	// stb r31,544(r1)
	PPC_STORE_U8(ctx.r1.u32 + 544, ctx.r31.u8);
	// lwz r4,360(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 360);
	// bl 0x82e746c0
	ctx.lr = 0x8367DAAC;
	sub_82E746C0(ctx, base);
	// stw r30,628(r1)
	PPC_STORE_U32(ctx.r1.u32 + 628, ctx.r30.u32);
	// stw r31,624(r1)
	PPC_STORE_U32(ctx.r1.u32 + 624, ctx.r31.u32);
	// addi r4,r28,-836
	ctx.r4.s64 = ctx.r28.s64 + -836;
	// stb r31,608(r1)
	PPC_STORE_U8(ctx.r1.u32 + 608, ctx.r31.u8);
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// bl 0x82472fc0
	ctx.lr = 0x8367DAC8;
	sub_82472FC0(ctx, base);
	// addi r4,r1,608
	ctx.r4.s64 = ctx.r1.s64 + 608;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367DAD4;
	sub_82E74C08(ctx, base);
	// lwz r11,628(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 628);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8367dae8
	if (cr6.lt) goto loc_8367DAE8;
	// lwz r3,608(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 608);
	// bl 0x82416268
	ctx.lr = 0x8367DAE8;
	sub_82416268(ctx, base);
loc_8367DAE8:
	// stw r30,628(r1)
	PPC_STORE_U32(ctx.r1.u32 + 628, ctx.r30.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r31,624(r1)
	PPC_STORE_U32(ctx.r1.u32 + 624, ctx.r31.u32);
	// stb r31,608(r1)
	PPC_STORE_U8(ctx.r1.u32 + 608, ctx.r31.u8);
	// lwz r4,364(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 364);
	// bl 0x82e746c0
	ctx.lr = 0x8367DB00;
	sub_82E746C0(ctx, base);
	// stw r30,692(r1)
	PPC_STORE_U32(ctx.r1.u32 + 692, ctx.r30.u32);
	// stw r31,688(r1)
	PPC_STORE_U32(ctx.r1.u32 + 688, ctx.r31.u32);
	// addi r4,r28,-824
	ctx.r4.s64 = ctx.r28.s64 + -824;
	// stb r31,672(r1)
	PPC_STORE_U8(ctx.r1.u32 + 672, ctx.r31.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// bl 0x82472fc0
	ctx.lr = 0x8367DB1C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,672
	ctx.r4.s64 = ctx.r1.s64 + 672;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367DB28;
	sub_82E74C08(ctx, base);
	// lwz r11,692(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 692);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8367db3c
	if (cr6.lt) goto loc_8367DB3C;
	// lwz r3,672(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 672);
	// bl 0x82416268
	ctx.lr = 0x8367DB3C;
	sub_82416268(ctx, base);
loc_8367DB3C:
	// stw r30,692(r1)
	PPC_STORE_U32(ctx.r1.u32 + 692, ctx.r30.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r31,688(r1)
	PPC_STORE_U32(ctx.r1.u32 + 688, ctx.r31.u32);
	// stb r31,672(r1)
	PPC_STORE_U8(ctx.r1.u32 + 672, ctx.r31.u8);
	// lwz r4,368(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 368);
	// bl 0x82e746c0
	ctx.lr = 0x8367DB54;
	sub_82E746C0(ctx, base);
	// stw r30,756(r1)
	PPC_STORE_U32(ctx.r1.u32 + 756, ctx.r30.u32);
	// stw r31,752(r1)
	PPC_STORE_U32(ctx.r1.u32 + 752, ctx.r31.u32);
	// addi r4,r28,-816
	ctx.r4.s64 = ctx.r28.s64 + -816;
	// stb r31,736(r1)
	PPC_STORE_U8(ctx.r1.u32 + 736, ctx.r31.u8);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// bl 0x82472fc0
	ctx.lr = 0x8367DB70;
	sub_82472FC0(ctx, base);
	// addi r4,r1,736
	ctx.r4.s64 = ctx.r1.s64 + 736;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367DB7C;
	sub_82E74C08(ctx, base);
	// lwz r11,756(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 756);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8367db90
	if (cr6.lt) goto loc_8367DB90;
	// lwz r3,736(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 736);
	// bl 0x82416268
	ctx.lr = 0x8367DB90;
	sub_82416268(ctx, base);
loc_8367DB90:
	// stw r30,756(r1)
	PPC_STORE_U32(ctx.r1.u32 + 756, ctx.r30.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r31,752(r1)
	PPC_STORE_U32(ctx.r1.u32 + 752, ctx.r31.u32);
	// stb r31,736(r1)
	PPC_STORE_U8(ctx.r1.u32 + 736, ctx.r31.u8);
	// lwz r4,372(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 372);
	// bl 0x82e746c0
	ctx.lr = 0x8367DBA8;
	sub_82E746C0(ctx, base);
	// stw r30,1044(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1044, ctx.r30.u32);
	// stw r31,1040(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1040, ctx.r31.u32);
	// addi r4,r28,-804
	ctx.r4.s64 = ctx.r28.s64 + -804;
	// stb r31,1024(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1024, ctx.r31.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,1024
	ctx.r3.s64 = ctx.r1.s64 + 1024;
	// bl 0x82472fc0
	ctx.lr = 0x8367DBC4;
	sub_82472FC0(ctx, base);
	// addi r4,r1,1024
	ctx.r4.s64 = ctx.r1.s64 + 1024;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367DBD0;
	sub_82E74C08(ctx, base);
	// addi r3,r1,1024
	ctx.r3.s64 = ctx.r1.s64 + 1024;
	// bl 0x824707c8
	ctx.lr = 0x8367DBD8;
	sub_824707C8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,376(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 376);
	// bl 0x82e746c0
	ctx.lr = 0x8367DBE4;
	sub_82E746C0(ctx, base);
	// addi r4,r28,-796
	ctx.r4.s64 = ctx.r28.s64 + -796;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82475d40
	ctx.lr = 0x8367DBF0;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367DBFC;
	sub_82E74C08(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824707c8
	ctx.lr = 0x8367DC04;
	sub_824707C8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,380(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 380);
	// bl 0x82e746c0
	ctx.lr = 0x8367DC10;
	sub_82E746C0(ctx, base);
	// addi r4,r28,-772
	ctx.r4.s64 = ctx.r28.s64 + -772;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82475d40
	ctx.lr = 0x8367DC1C;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367DC28;
	sub_82E74C08(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824707c8
	ctx.lr = 0x8367DC30;
	sub_824707C8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,384(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 384);
	// bl 0x82e746c0
	ctx.lr = 0x8367DC3C;
	sub_82E746C0(ctx, base);
	// addi r4,r28,-744
	ctx.r4.s64 = ctx.r28.s64 + -744;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82475d40
	ctx.lr = 0x8367DC48;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367DC54;
	sub_82E74C08(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824707c8
	ctx.lr = 0x8367DC5C;
	sub_824707C8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,388(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 388);
	// bl 0x82e746c0
	ctx.lr = 0x8367DC68;
	sub_82E746C0(ctx, base);
	// addi r4,r28,-708
	ctx.r4.s64 = ctx.r28.s64 + -708;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82475d40
	ctx.lr = 0x8367DC74;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367DC80;
	sub_82E74C08(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824707c8
	ctx.lr = 0x8367DC88;
	sub_824707C8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,392(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 392);
	// bl 0x82e746c0
	ctx.lr = 0x8367DC94;
	sub_82E746C0(ctx, base);
	// addi r4,r28,-672
	ctx.r4.s64 = ctx.r28.s64 + -672;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82475d40
	ctx.lr = 0x8367DCA0;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367DCAC;
	sub_82E74C08(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824707c8
	ctx.lr = 0x8367DCB4;
	sub_824707C8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,396(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 396);
	// bl 0x82e746c0
	ctx.lr = 0x8367DCC0;
	sub_82E746C0(ctx, base);
	// addi r4,r28,-652
	ctx.r4.s64 = ctx.r28.s64 + -652;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82475d40
	ctx.lr = 0x8367DCCC;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367DCD8;
	sub_82E74C08(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824707c8
	ctx.lr = 0x8367DCE0;
	sub_824707C8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,400(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 400);
	// bl 0x82e746c0
	ctx.lr = 0x8367DCEC;
	sub_82E746C0(ctx, base);
	// addi r4,r28,-632
	ctx.r4.s64 = ctx.r28.s64 + -632;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82475d40
	ctx.lr = 0x8367DCF8;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367DD04;
	sub_82E74C08(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824707c8
	ctx.lr = 0x8367DD0C;
	sub_824707C8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,404(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 404);
	// bl 0x82e746c0
	ctx.lr = 0x8367DD18;
	sub_82E746C0(ctx, base);
	// addi r4,r28,-612
	ctx.r4.s64 = ctx.r28.s64 + -612;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82475d40
	ctx.lr = 0x8367DD24;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367DD30;
	sub_82E74C08(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824707c8
	ctx.lr = 0x8367DD38;
	sub_824707C8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,408(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 408);
	// bl 0x82e746c0
	ctx.lr = 0x8367DD44;
	sub_82E746C0(ctx, base);
	// addi r4,r28,-592
	ctx.r4.s64 = ctx.r28.s64 + -592;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82475d40
	ctx.lr = 0x8367DD50;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367DD5C;
	sub_82E74C08(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824707c8
	ctx.lr = 0x8367DD64;
	sub_824707C8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,412(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 412);
	// bl 0x82e746c0
	ctx.lr = 0x8367DD70;
	sub_82E746C0(ctx, base);
	// addi r4,r28,-580
	ctx.r4.s64 = ctx.r28.s64 + -580;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82475d40
	ctx.lr = 0x8367DD7C;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367DD88;
	sub_82E74C08(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824707c8
	ctx.lr = 0x8367DD90;
	sub_824707C8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,416(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 416);
	// bl 0x82e746c0
	ctx.lr = 0x8367DD9C;
	sub_82E746C0(ctx, base);
	// addi r4,r28,-548
	ctx.r4.s64 = ctx.r28.s64 + -548;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82475d40
	ctx.lr = 0x8367DDA8;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367DDB4;
	sub_82E74C08(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824707c8
	ctx.lr = 0x8367DDBC;
	sub_824707C8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,420(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 420);
	// bl 0x82e746c0
	ctx.lr = 0x8367DDC8;
	sub_82E746C0(ctx, base);
	// addi r4,r28,-516
	ctx.r4.s64 = ctx.r28.s64 + -516;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82475d40
	ctx.lr = 0x8367DDD4;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367DDE0;
	sub_82E74C08(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824707c8
	ctx.lr = 0x8367DDE8;
	sub_824707C8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,424(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 424);
	// bl 0x82e746c0
	ctx.lr = 0x8367DDF4;
	sub_82E746C0(ctx, base);
	// addi r4,r28,-468
	ctx.r4.s64 = ctx.r28.s64 + -468;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82475d40
	ctx.lr = 0x8367DE00;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367DE0C;
	sub_82E74C08(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824707c8
	ctx.lr = 0x8367DE14;
	sub_824707C8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,428(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 428);
	// bl 0x82e746c0
	ctx.lr = 0x8367DE20;
	sub_82E746C0(ctx, base);
	// addi r4,r28,-424
	ctx.r4.s64 = ctx.r28.s64 + -424;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82475d40
	ctx.lr = 0x8367DE2C;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367DE38;
	sub_82E74C08(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824707c8
	ctx.lr = 0x8367DE40;
	sub_824707C8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,432(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 432);
	// bl 0x82e746c0
	ctx.lr = 0x8367DE4C;
	sub_82E746C0(ctx, base);
	// addi r4,r28,-376
	ctx.r4.s64 = ctx.r28.s64 + -376;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82475d40
	ctx.lr = 0x8367DE58;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367DE64;
	sub_82E74C08(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824707c8
	ctx.lr = 0x8367DE6C;
	sub_824707C8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,436(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 436);
	// bl 0x82e746c0
	ctx.lr = 0x8367DE78;
	sub_82E746C0(ctx, base);
	// addi r4,r28,-352
	ctx.r4.s64 = ctx.r28.s64 + -352;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82475d40
	ctx.lr = 0x8367DE84;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367DE90;
	sub_82E74C08(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824707c8
	ctx.lr = 0x8367DE98;
	sub_824707C8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,440(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 440);
	// bl 0x82e746c0
	ctx.lr = 0x8367DEA4;
	sub_82E746C0(ctx, base);
	// addi r4,r28,-316
	ctx.r4.s64 = ctx.r28.s64 + -316;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82475d40
	ctx.lr = 0x8367DEB0;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367DEBC;
	sub_82E74C08(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824707c8
	ctx.lr = 0x8367DEC4;
	sub_824707C8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,444(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 444);
	// bl 0x82e746c0
	ctx.lr = 0x8367DED0;
	sub_82E746C0(ctx, base);
	// addi r4,r28,-300
	ctx.r4.s64 = ctx.r28.s64 + -300;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82475d40
	ctx.lr = 0x8367DEDC;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367DEE8;
	sub_82E74C08(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824707c8
	ctx.lr = 0x8367DEF0;
	sub_824707C8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,448(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 448);
	// bl 0x82e746c0
	ctx.lr = 0x8367DEFC;
	sub_82E746C0(ctx, base);
	// addi r4,r28,-284
	ctx.r4.s64 = ctx.r28.s64 + -284;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82475d40
	ctx.lr = 0x8367DF08;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367DF14;
	sub_82E74C08(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824707c8
	ctx.lr = 0x8367DF1C;
	sub_824707C8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,452(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 452);
	// bl 0x82e746c0
	ctx.lr = 0x8367DF28;
	sub_82E746C0(ctx, base);
	// addi r4,r28,-264
	ctx.r4.s64 = ctx.r28.s64 + -264;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82475d40
	ctx.lr = 0x8367DF34;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367DF40;
	sub_82E74C08(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824707c8
	ctx.lr = 0x8367DF48;
	sub_824707C8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,456(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 456);
	// bl 0x82e746c0
	ctx.lr = 0x8367DF54;
	sub_82E746C0(ctx, base);
	// addi r4,r28,-232
	ctx.r4.s64 = ctx.r28.s64 + -232;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82475d40
	ctx.lr = 0x8367DF60;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367DF6C;
	sub_82E74C08(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824707c8
	ctx.lr = 0x8367DF74;
	sub_824707C8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,460(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 460);
	// bl 0x82e746c0
	ctx.lr = 0x8367DF80;
	sub_82E746C0(ctx, base);
	// addi r4,r28,-208
	ctx.r4.s64 = ctx.r28.s64 + -208;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82475d40
	ctx.lr = 0x8367DF8C;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367DF98;
	sub_82E74C08(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824707c8
	ctx.lr = 0x8367DFA0;
	sub_824707C8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,464(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 464);
	// bl 0x82e746c0
	ctx.lr = 0x8367DFAC;
	sub_82E746C0(ctx, base);
	// addi r4,r28,-184
	ctx.r4.s64 = ctx.r28.s64 + -184;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82475d40
	ctx.lr = 0x8367DFB8;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367DFC4;
	sub_82E74C08(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824707c8
	ctx.lr = 0x8367DFCC;
	sub_824707C8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,468(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 468);
	// bl 0x82e746c0
	ctx.lr = 0x8367DFD8;
	sub_82E746C0(ctx, base);
	// addi r4,r28,-168
	ctx.r4.s64 = ctx.r28.s64 + -168;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82475d40
	ctx.lr = 0x8367DFE4;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367DFF0;
	sub_82E74C08(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824707c8
	ctx.lr = 0x8367DFF8;
	sub_824707C8(ctx, base);
	// lwz r10,492(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 492);
	// addi r11,r29,472
	ctx.r11.s64 = ctx.r29.s64 + 472;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8367e00c
	if (cr6.lt) goto loc_8367E00C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8367E00C:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82475d40
	ctx.lr = 0x8367E018;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367E024;
	sub_82E74C08(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824707c8
	ctx.lr = 0x8367E02C;
	sub_824707C8(ctx, base);
	// addi r4,r28,-152
	ctx.r4.s64 = ctx.r28.s64 + -152;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82475d40
	ctx.lr = 0x8367E038;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367E044;
	sub_82E74C08(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824707c8
	ctx.lr = 0x8367E04C;
	sub_824707C8(ctx, base);
	// lwz r10,520(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 520);
	// addi r11,r29,500
	ctx.r11.s64 = ctx.r29.s64 + 500;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8367e060
	if (cr6.lt) goto loc_8367E060;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8367E060:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82475d40
	ctx.lr = 0x8367E06C;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367E078;
	sub_82E74C08(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824707c8
	ctx.lr = 0x8367E080;
	sub_824707C8(ctx, base);
	// addi r4,r28,-128
	ctx.r4.s64 = ctx.r28.s64 + -128;
	// addi r3,r1,1056
	ctx.r3.s64 = ctx.r1.s64 + 1056;
	// bl 0x82475d40
	ctx.lr = 0x8367E08C;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367E098;
	sub_82E74C08(ctx, base);
	// addi r3,r1,1056
	ctx.r3.s64 = ctx.r1.s64 + 1056;
	// bl 0x824707c8
	ctx.lr = 0x8367E0A0;
	sub_824707C8(ctx, base);
	// lwz r10,548(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 548);
	// addi r11,r29,528
	ctx.r11.s64 = ctx.r29.s64 + 528;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8367e0b4
	if (cr6.lt) goto loc_8367E0B4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8367E0B4:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,1056
	ctx.r3.s64 = ctx.r1.s64 + 1056;
	// bl 0x82475d40
	ctx.lr = 0x8367E0C0;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367E0CC;
	sub_82E74C08(ctx, base);
	// addi r3,r1,1056
	ctx.r3.s64 = ctx.r1.s64 + 1056;
	// bl 0x824707c8
	ctx.lr = 0x8367E0D4;
	sub_824707C8(ctx, base);
	// addi r4,r28,-100
	ctx.r4.s64 = ctx.r28.s64 + -100;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82475d40
	ctx.lr = 0x8367E0E0;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367E0EC;
	sub_82E74C08(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824707c8
	ctx.lr = 0x8367E0F4;
	sub_824707C8(ctx, base);
	// lwz r10,576(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 576);
	// addi r11,r29,556
	ctx.r11.s64 = ctx.r29.s64 + 556;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8367e108
	if (cr6.lt) goto loc_8367E108;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8367E108:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,1056
	ctx.r3.s64 = ctx.r1.s64 + 1056;
	// bl 0x82475d40
	ctx.lr = 0x8367E114;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367E120;
	sub_82E74C08(ctx, base);
	// addi r3,r1,1056
	ctx.r3.s64 = ctx.r1.s64 + 1056;
	// bl 0x824707c8
	ctx.lr = 0x8367E128;
	sub_824707C8(ctx, base);
	// addi r4,r28,-80
	ctx.r4.s64 = ctx.r28.s64 + -80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82475d40
	ctx.lr = 0x8367E134;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367E140;
	sub_82E74C08(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824707c8
	ctx.lr = 0x8367E148;
	sub_824707C8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,584(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 584);
	// bl 0x82e746c0
	ctx.lr = 0x8367E154;
	sub_82E746C0(ctx, base);
	// addi r4,r28,-60
	ctx.r4.s64 = ctx.r28.s64 + -60;
	// addi r3,r1,1152
	ctx.r3.s64 = ctx.r1.s64 + 1152;
	// bl 0x82475d40
	ctx.lr = 0x8367E160;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367E16C;
	sub_82E74C08(ctx, base);
	// addi r3,r1,1152
	ctx.r3.s64 = ctx.r1.s64 + 1152;
	// bl 0x824707c8
	ctx.lr = 0x8367E174;
	sub_824707C8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,588(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 588);
	// bl 0x82e746c0
	ctx.lr = 0x8367E180;
	sub_82E746C0(ctx, base);
	// addi r4,r28,-40
	ctx.r4.s64 = ctx.r28.s64 + -40;
	// addi r3,r1,1088
	ctx.r3.s64 = ctx.r1.s64 + 1088;
	// bl 0x82475d40
	ctx.lr = 0x8367E18C;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367E198;
	sub_82E74C08(ctx, base);
	// addi r3,r1,1088
	ctx.r3.s64 = ctx.r1.s64 + 1088;
	// bl 0x824707c8
	ctx.lr = 0x8367E1A0;
	sub_824707C8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,592(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 592);
	// bl 0x82e746c0
	ctx.lr = 0x8367E1AC;
	sub_82E746C0(ctx, base);
	// addi r4,r28,-16
	ctx.r4.s64 = ctx.r28.s64 + -16;
	// addi r3,r1,1120
	ctx.r3.s64 = ctx.r1.s64 + 1120;
	// bl 0x82475d40
	ctx.lr = 0x8367E1B8;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367E1C4;
	sub_82E74C08(ctx, base);
	// addi r3,r1,1120
	ctx.r3.s64 = ctx.r1.s64 + 1120;
	// bl 0x824707c8
	ctx.lr = 0x8367E1CC;
	sub_824707C8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,596(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 596);
	// bl 0x82e746c0
	ctx.lr = 0x8367E1D8;
	sub_82E746C0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,1184
	ctx.r3.s64 = ctx.r1.s64 + 1184;
	// bl 0x82475d40
	ctx.lr = 0x8367E1E4;
	sub_82475D40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367E1F0;
	sub_82E74C08(ctx, base);
	// addi r3,r1,1184
	ctx.r3.s64 = ctx.r1.s64 + 1184;
	// bl 0x824707c8
	ctx.lr = 0x8367E1F8;
	sub_824707C8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,600(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 600);
	// bl 0x82e746c0
	ctx.lr = 0x8367E204;
	sub_82E746C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1264
	ctx.r1.s64 = ctx.r1.s64 + 1264;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8367E210"))) PPC_WEAK_FUNC(sub_8367E210);
PPC_FUNC_IMPL(__imp__sub_8367E210) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8367E218;
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
	ctx.lr = 0x8367E240;
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
	// bge cr6,0x8367e484
	if (!cr6.lt) goto loc_8367E484;
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
	// addi r26,r11,-27284
	ctx.r26.s64 = ctx.r11.s64 + -27284;
loc_8367E278:
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
	ctx.lr = 0x8367E2AC;
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
	ctx.lr = 0x8367E2C4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8367e358
	if (!cr6.eq) goto loc_8367E358;
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
	ctx.lr = 0x8367E2FC;
	sub_82472FC0(ctx, base);
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x8367e310
	if (!cr6.lt) goto loc_8367E310;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
loc_8367E310:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8367E314:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8367e314
	if (!cr6.eq) goto loc_8367E314;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,20
	ctx.r3.s64 = ctx.r28.s64 + 20;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x8367E338;
	sub_824208C8(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8367e34c
	if (cr6.lt) goto loc_8367E34C;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82416268
	ctx.lr = 0x8367E34C;
	sub_82416268(ctx, base);
loc_8367E34C:
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
loc_8367E358:
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
	ctx.lr = 0x8367E370;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8367e3ac
	if (!cr6.eq) goto loc_8367E3AC;
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
	// bne cr6,0x8367e3a4
	if (!cr6.eq) goto loc_8367E3A4;
	// ld r11,248(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 248);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8367e3a8
	goto loc_8367E3A8;
loc_8367E3A4:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8367E3A8:
	// stw r11,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r11.u32);
loc_8367E3AC:
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
	ctx.lr = 0x8367E3C4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8367e458
	if (!cr6.eq) goto loc_8367E458;
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
	ctx.lr = 0x8367E3FC;
	sub_82472FC0(ctx, base);
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x8367e410
	if (!cr6.lt) goto loc_8367E410;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_8367E410:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8367E414:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8367e414
	if (!cr6.eq) goto loc_8367E414;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,116
	ctx.r3.s64 = ctx.r28.s64 + 116;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x8367E438;
	sub_824208C8(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8367e44c
	if (cr6.lt) goto loc_8367E44C;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82416268
	ctx.lr = 0x8367E44C;
	sub_82416268(ctx, base);
loc_8367E44C:
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
loc_8367E458:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8367e46c
	if (cr6.lt) goto loc_8367E46C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82416268
	ctx.lr = 0x8367E46C;
	sub_82416268(ctx, base);
loc_8367E46C:
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
	// bne 0x8367e278
	if (!cr0.eq) goto loc_8367E278;
loc_8367E484:
	// lwz r31,192(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8367e4a0
	if (cr6.eq) goto loc_8367E4A0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x8367E498;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x8367E4A0;
	sub_82416268(ctx, base);
loc_8367E4A0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8367E4AC"))) PPC_WEAK_FUNC(sub_8367E4AC);
PPC_FUNC_IMPL(__imp__sub_8367E4AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8367E4B0"))) PPC_WEAK_FUNC(sub_8367E4B0);
PPC_FUNC_IMPL(__imp__sub_8367E4B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8367E4B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d95768
	ctx.lr = 0x8367E4C4;
	sub_82D95768(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// li r5,20
	ctx.r5.s64 = 20;
	// addi r29,r11,-28560
	ctx.r29.s64 = ctx.r11.s64 + -28560;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824208c8
	ctx.lr = 0x8367E4DC;
	sub_824208C8(ctx, base);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// addi r7,r10,-27176
	ctx.r7.s64 = ctx.r10.s64 + -27176;
	// addi r5,r8,-27192
	ctx.r5.s64 = ctx.r8.s64 + -27192;
	// addi r6,r9,-27188
	ctx.r6.s64 = ctx.r9.s64 + -27188;
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
	ctx.lr = 0x8367E524;
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
	ctx.lr = 0x8367E540;
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
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x8367E560;
	sub_824208C8(ctx, base);
	// stw r28,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r28.u32);
	// stw r30,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r30.u32);
	// addi r3,r31,404
	ctx.r3.s64 = ctx.r31.s64 + 404;
	// stb r30,404(r31)
	PPC_STORE_U8(ctx.r31.u32 + 404, ctx.r30.u8);
	// addi r4,r29,72
	ctx.r4.s64 = ctx.r29.s64 + 72;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x8367E57C;
	sub_824208C8(ctx, base);
	// stw r28,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r28.u32);
	// stw r30,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r30.u32);
	// addi r3,r31,432
	ctx.r3.s64 = ctx.r31.s64 + 432;
	// stb r30,432(r31)
	PPC_STORE_U8(ctx.r31.u32 + 432, ctx.r30.u8);
	// addi r4,r29,88
	ctx.r4.s64 = ctx.r29.s64 + 88;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x8367E598;
	sub_824208C8(ctx, base);
	// stw r28,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r28.u32);
	// stw r30,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r30.u32);
	// addi r3,r31,460
	ctx.r3.s64 = ctx.r31.s64 + 460;
	// stb r30,460(r31)
	PPC_STORE_U8(ctx.r31.u32 + 460, ctx.r30.u8);
	// addi r4,r29,104
	ctx.r4.s64 = ctx.r29.s64 + 104;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x8367E5B4;
	sub_824208C8(ctx, base);
	// stw r30,488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 488, ctx.r30.u32);
	// stw r30,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r30.u32);
	// addi r3,r31,504
	ctx.r3.s64 = ctx.r31.s64 + 504;
	// stw r30,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r30.u32);
	// addi r4,r29,120
	ctx.r4.s64 = ctx.r29.s64 + 120;
	// stw r30,500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 500, ctx.r30.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stw r28,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r28.u32);
	// stw r30,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r30.u32);
	// stb r30,504(r31)
	PPC_STORE_U8(ctx.r31.u32 + 504, ctx.r30.u8);
	// bl 0x824208c8
	ctx.lr = 0x8367E5E0;
	sub_824208C8(ctx, base);
	// stw r28,552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 552, ctx.r28.u32);
	// stw r30,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r30.u32);
	// addi r3,r31,532
	ctx.r3.s64 = ctx.r31.s64 + 532;
	// stb r30,532(r31)
	PPC_STORE_U8(ctx.r31.u32 + 532, ctx.r30.u8);
	// addi r4,r29,136
	ctx.r4.s64 = ctx.r29.s64 + 136;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x8367E5FC;
	sub_824208C8(ctx, base);
	// stw r30,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r30.u32);
	// stw r30,564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 564, ctx.r30.u32);
	// addi r3,r31,672
	ctx.r3.s64 = ctx.r31.s64 + 672;
	// stw r30,568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 568, ctx.r30.u32);
	// addi r4,r29,152
	ctx.r4.s64 = ctx.r29.s64 + 152;
	// stw r30,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r30.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stw r30,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r30.u32);
	// stw r30,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r30.u32);
	// stw r30,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r30.u32);
	// stw r30,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r30.u32);
	// stw r30,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r30.u32);
	// stw r30,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r30.u32);
	// stw r30,600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 600, ctx.r30.u32);
	// stw r30,604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 604, ctx.r30.u32);
	// stw r30,608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 608, ctx.r30.u32);
	// stw r30,612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 612, ctx.r30.u32);
	// stw r30,616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 616, ctx.r30.u32);
	// stw r30,620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 620, ctx.r30.u32);
	// stw r30,624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 624, ctx.r30.u32);
	// stw r30,628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 628, ctx.r30.u32);
	// stw r30,632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 632, ctx.r30.u32);
	// stw r30,636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 636, ctx.r30.u32);
	// stw r30,640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 640, ctx.r30.u32);
	// stw r30,644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 644, ctx.r30.u32);
	// stw r30,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r30.u32);
	// stw r30,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r30.u32);
	// stw r30,656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 656, ctx.r30.u32);
	// stw r30,660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 660, ctx.r30.u32);
	// stw r30,664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 664, ctx.r30.u32);
	// stw r30,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r30.u32);
	// stw r28,692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 692, ctx.r28.u32);
	// stw r30,688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 688, ctx.r30.u32);
	// stb r30,672(r31)
	PPC_STORE_U8(ctx.r31.u32 + 672, ctx.r30.u8);
	// bl 0x824208c8
	ctx.lr = 0x8367E688;
	sub_824208C8(ctx, base);
	// stw r28,720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 720, ctx.r28.u32);
	// stw r30,716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 716, ctx.r30.u32);
	// addi r3,r31,700
	ctx.r3.s64 = ctx.r31.s64 + 700;
	// stb r30,700(r31)
	PPC_STORE_U8(ctx.r31.u32 + 700, ctx.r30.u8);
	// addi r4,r29,168
	ctx.r4.s64 = ctx.r29.s64 + 168;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x8367E6A4;
	sub_824208C8(ctx, base);
	// stw r28,748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 748, ctx.r28.u32);
	// stw r30,744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 744, ctx.r30.u32);
	// addi r3,r31,728
	ctx.r3.s64 = ctx.r31.s64 + 728;
	// stb r30,728(r31)
	PPC_STORE_U8(ctx.r31.u32 + 728, ctx.r30.u8);
	// addi r4,r29,184
	ctx.r4.s64 = ctx.r29.s64 + 184;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x8367E6C0;
	sub_824208C8(ctx, base);
	// stw r28,776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 776, ctx.r28.u32);
	// stw r30,772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 772, ctx.r30.u32);
	// addi r3,r31,756
	ctx.r3.s64 = ctx.r31.s64 + 756;
	// stb r30,756(r31)
	PPC_STORE_U8(ctx.r31.u32 + 756, ctx.r30.u8);
	// addi r4,r29,200
	ctx.r4.s64 = ctx.r29.s64 + 200;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x8367E6DC;
	sub_824208C8(ctx, base);
	// stw r30,784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 784, ctx.r30.u32);
	// stw r30,788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 788, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 792, ctx.r30.u32);
	// stw r30,796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 796, ctx.r30.u32);
	// stw r30,800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 800, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8367E6FC"))) PPC_WEAK_FUNC(sub_8367E6FC);
PPC_FUNC_IMPL(__imp__sub_8367E6FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8367E700"))) PPC_WEAK_FUNC(sub_8367E700);
PPC_FUNC_IMPL(__imp__sub_8367E700) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x8367e910
	sub_8367E910(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8367E708"))) PPC_WEAK_FUNC(sub_8367E708);
PPC_FUNC_IMPL(__imp__sub_8367E708) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x8367e910
	sub_8367E910(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8367E710"))) PPC_WEAK_FUNC(sub_8367E710);
PPC_FUNC_IMPL(__imp__sub_8367E710) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8367E718;
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
	// addi r8,r11,-27176
	ctx.r8.s64 = ctx.r11.s64 + -27176;
	// addi r7,r10,-27188
	ctx.r7.s64 = ctx.r10.s64 + -27188;
	// addi r6,r9,-27192
	ctx.r6.s64 = ctx.r9.s64 + -27192;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r6,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r6.u32);
	// addi r28,r3,756
	ctx.r28.s64 = ctx.r3.s64 + 756;
	// lwz r5,776(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 776);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x8367e75c
	if (cr6.lt) goto loc_8367E75C;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8367E75C;
	sub_8386D088(ctx, base);
loc_8367E75C:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// addi r27,r30,728
	ctx.r27.s64 = ctx.r30.s64 + 728;
	// stw r29,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r29.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// lwz r11,748(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 748);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8367e788
	if (cr6.lt) goto loc_8367E788;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8367E788;
	sub_8386D088(ctx, base);
loc_8367E788:
	// stw r29,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r29.u32);
	// addi r28,r30,700
	ctx.r28.s64 = ctx.r30.s64 + 700;
	// stw r31,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r31.u32);
	// stb r31,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r31.u8);
	// lwz r11,720(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 720);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8367e7ac
	if (cr6.lt) goto loc_8367E7AC;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8367E7AC;
	sub_8386D088(ctx, base);
loc_8367E7AC:
	// stw r29,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r29.u32);
	// addi r27,r30,672
	ctx.r27.s64 = ctx.r30.s64 + 672;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// lwz r11,692(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 692);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8367e7d0
	if (cr6.lt) goto loc_8367E7D0;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8367E7D0;
	sub_8386D088(ctx, base);
loc_8367E7D0:
	// stw r29,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r29.u32);
	// addi r28,r30,532
	ctx.r28.s64 = ctx.r30.s64 + 532;
	// stw r31,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r31.u32);
	// stb r31,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r31.u8);
	// lwz r11,552(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 552);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8367e7f4
	if (cr6.lt) goto loc_8367E7F4;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8367E7F4;
	sub_8386D088(ctx, base);
loc_8367E7F4:
	// stw r29,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r29.u32);
	// addi r27,r30,504
	ctx.r27.s64 = ctx.r30.s64 + 504;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// lwz r11,524(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 524);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8367e818
	if (cr6.lt) goto loc_8367E818;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8367E818;
	sub_8386D088(ctx, base);
loc_8367E818:
	// stw r29,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r29.u32);
	// addi r28,r30,460
	ctx.r28.s64 = ctx.r30.s64 + 460;
	// stw r31,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r31.u32);
	// stb r31,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r31.u8);
	// lwz r11,480(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 480);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8367e83c
	if (cr6.lt) goto loc_8367E83C;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8367E83C;
	sub_8386D088(ctx, base);
loc_8367E83C:
	// stw r29,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r29.u32);
	// addi r27,r30,432
	ctx.r27.s64 = ctx.r30.s64 + 432;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// lwz r11,452(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 452);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8367e860
	if (cr6.lt) goto loc_8367E860;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8367E860;
	sub_8386D088(ctx, base);
loc_8367E860:
	// stw r29,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r29.u32);
	// addi r28,r30,404
	ctx.r28.s64 = ctx.r30.s64 + 404;
	// stw r31,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r31.u32);
	// stb r31,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r31.u8);
	// lwz r11,424(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 424);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8367e884
	if (cr6.lt) goto loc_8367E884;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8367E884;
	sub_8386D088(ctx, base);
loc_8367E884:
	// stw r29,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r29.u32);
	// addi r27,r30,376
	ctx.r27.s64 = ctx.r30.s64 + 376;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// lwz r11,396(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 396);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8367e8a8
	if (cr6.lt) goto loc_8367E8A8;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8367E8A8;
	sub_8386D088(ctx, base);
loc_8367E8A8:
	// stw r29,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r29.u32);
	// addi r28,r30,344
	ctx.r28.s64 = ctx.r30.s64 + 344;
	// stw r31,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r31.u32);
	// stb r31,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r31.u8);
	// lwz r11,364(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 364);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8367e8cc
	if (cr6.lt) goto loc_8367E8CC;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8367E8CC;
	sub_8386D088(ctx, base);
loc_8367E8CC:
	// stw r29,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r29.u32);
	// addi r27,r30,316
	ctx.r27.s64 = ctx.r30.s64 + 316;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// lwz r11,336(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 336);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8367e8f0
	if (cr6.lt) goto loc_8367E8F0;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8367E8F0;
	sub_8386D088(ctx, base);
loc_8367E8F0:
	// stw r29,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r31.u32);
	// stb r31,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r31.u8);
	// bl 0x82b6a590
	ctx.lr = 0x8367E904;
	sub_82B6A590(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8367E90C"))) PPC_WEAK_FUNC(sub_8367E90C);
PPC_FUNC_IMPL(__imp__sub_8367E90C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8367E910"))) PPC_WEAK_FUNC(sub_8367E910);
PPC_FUNC_IMPL(__imp__sub_8367E910) {
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
	// bl 0x8367e710
	ctx.lr = 0x8367E930;
	sub_8367E710(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8367e950
	if (cr6.eq) goto loc_8367E950;
	// bl 0x82595188
	ctx.lr = 0x8367E940;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x8367E950;
	sub_825952B8(ctx, base);
loc_8367E950:
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

__attribute__((alias("__imp__sub_8367E96C"))) PPC_WEAK_FUNC(sub_8367E96C);
PPC_FUNC_IMPL(__imp__sub_8367E96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8367E970"))) PPC_WEAK_FUNC(sub_8367E970);
PPC_FUNC_IMPL(__imp__sub_8367E970) {
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
	ctx.lr = 0x8367E988;
	sub_82EAF8D8(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r4,r11,-28560
	ctx.r4.s64 = ctx.r11.s64 + -28560;
	// li r5,20
	ctx.r5.s64 = 20;
	// bl 0x824208c8
	ctx.lr = 0x8367E99C;
	sub_824208C8(ctx, base);
	// lis r7,-32216
	ctx.r7.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// addi r3,r7,-27128
	ctx.r3.s64 = ctx.r7.s64 + -27128;
	// addi r6,r10,-27144
	ctx.r6.s64 = ctx.r10.s64 + -27144;
	// addi r5,r9,-27156
	ctx.r5.s64 = ctx.r9.s64 + -27156;
	// stw r3,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r3.u32);
	// addi r4,r8,-27160
	ctx.r4.s64 = ctx.r8.s64 + -27160;
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

__attribute__((alias("__imp__sub_8367E9E4"))) PPC_WEAK_FUNC(sub_8367E9E4);
PPC_FUNC_IMPL(__imp__sub_8367E9E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8367E9E8"))) PPC_WEAK_FUNC(sub_8367E9E8);
PPC_FUNC_IMPL(__imp__sub_8367E9E8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x8367ea00
	sub_8367EA00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8367E9F0"))) PPC_WEAK_FUNC(sub_8367E9F0);
PPC_FUNC_IMPL(__imp__sub_8367E9F0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-312
	ctx.r3.s64 = ctx.r3.s64 + -312;
	// b 0x8367ea00
	sub_8367EA00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8367E9F8"))) PPC_WEAK_FUNC(sub_8367E9F8);
PPC_FUNC_IMPL(__imp__sub_8367E9F8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x8367ea00
	sub_8367EA00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8367EA00"))) PPC_WEAK_FUNC(sub_8367EA00);
PPC_FUNC_IMPL(__imp__sub_8367EA00) {
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
	// addi r7,r11,-27144
	ctx.r7.s64 = ctx.r11.s64 + -27144;
	// addi r6,r10,-27156
	ctx.r6.s64 = ctx.r10.s64 + -27156;
	// addi r5,r9,-27160
	ctx.r5.s64 = ctx.r9.s64 + -27160;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r8,-27128
	ctx.r4.s64 = ctx.r8.s64 + -27128;
	// stw r6,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r6.u32);
	// stw r5,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r4.u32);
	// bl 0x82eaf978
	ctx.lr = 0x8367EA50;
	sub_82EAF978(ctx, base);
	// clrlwi r3,r30,31
	ctx.r3.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8367ea70
	if (cr6.eq) goto loc_8367EA70;
	// bl 0x82595188
	ctx.lr = 0x8367EA60;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x8367EA70;
	sub_825952B8(ctx, base);
loc_8367EA70:
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

__attribute__((alias("__imp__sub_8367EA8C"))) PPC_WEAK_FUNC(sub_8367EA8C);
PPC_FUNC_IMPL(__imp__sub_8367EA8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8367EA90"))) PPC_WEAK_FUNC(sub_8367EA90);
PPC_FUNC_IMPL(__imp__sub_8367EA90) {
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
	// ble cr6,0x8367eafc
	if (!cr6.gt) goto loc_8367EAFC;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// addi r8,r10,-26756
	ctx.r8.s64 = ctx.r10.s64 + -26756;
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// li r6,68
	ctx.r6.s64 = 68;
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
	ctx.lr = 0x8367EAEC;
	sub_8247B270(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8367EAFC:
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

__attribute__((alias("__imp__sub_8367EB10"))) PPC_WEAK_FUNC(sub_8367EB10);
PPC_FUNC_IMPL(__imp__sub_8367EB10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8367EB18;
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
	// addi r10,r11,-26756
	ctx.r10.s64 = ctx.r11.s64 + -26756;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// li r8,68
	ctx.r8.s64 = 68;
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
	ctx.lr = 0x8367EB5C;
	sub_8247B7D8(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// beq cr6,0x8367eb84
	if (cr6.eq) goto loc_8367EB84;
	// lis r4,11
	ctx.r4.s64 = 720896;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x8247b268
	ctx.lr = 0x8367EB7C;
	sub_8247B268(ctx, base);
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
loc_8367EB84:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8367EB8C"))) PPC_WEAK_FUNC(sub_8367EB8C);
PPC_FUNC_IMPL(__imp__sub_8367EB8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8367EB90"))) PPC_WEAK_FUNC(sub_8367EB90);
PPC_FUNC_IMPL(__imp__sub_8367EB90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8367EB98;
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
	// li r29,0
	ctx.r29.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// li r28,-1
	ctx.r28.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r4,12
	ctx.r4.s64 = ctx.r4.s64 + 12;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r27,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r27.u32);
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// stb r29,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r29.u8);
	// bl 0x82420558
	ctx.lr = 0x8367EBE8;
	sub_82420558(ctx, base);
	// stw r27,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r27.u32);
	// stw r29,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r29.u32);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// stb r29,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r29.u8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,40
	ctx.r4.s64 = ctx.r30.s64 + 40;
	// bl 0x82420558
	ctx.lr = 0x8367EC08;
	sub_82420558(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8367EC14"))) PPC_WEAK_FUNC(sub_8367EC14);
PPC_FUNC_IMPL(__imp__sub_8367EC14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8367EC18"))) PPC_WEAK_FUNC(sub_8367EC18);
PPC_FUNC_IMPL(__imp__sub_8367EC18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8367ec2c
	if (cr6.eq) goto loc_8367EC2C;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x8367eb90
	sub_8367EB90(ctx, base);
	return;
loc_8367EC2C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8367EC34"))) PPC_WEAK_FUNC(sub_8367EC34);
PPC_FUNC_IMPL(__imp__sub_8367EC34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8367EC38"))) PPC_WEAK_FUNC(sub_8367EC38);
PPC_FUNC_IMPL(__imp__sub_8367EC38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8367EC40;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r30,r4,40
	ctx.r30.s64 = ctx.r4.s64 + 40;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8367ec60
	if (cr6.lt) goto loc_8367EC60;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8367EC60;
	sub_8386D088(ctx, base);
loc_8367EC60:
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// stw r28,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r28.u32);
	// stb r29,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r29.u8);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8367ec8c
	if (cr6.lt) goto loc_8367EC8C;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8367EC8C;
	sub_8386D088(ctx, base);
loc_8367EC8C:
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// stb r29,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r29.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8367ECA0"))) PPC_WEAK_FUNC(sub_8367ECA0);
PPC_FUNC_IMPL(__imp__sub_8367ECA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8367ECA8;
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
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// bl 0x82420558
	ctx.lr = 0x8367ECE4;
	sub_82420558(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,40
	ctx.r4.s64 = ctx.r31.s64 + 40;
	// addi r3,r30,40
	ctx.r3.s64 = ctx.r30.s64 + 40;
	// bl 0x82420558
	ctx.lr = 0x8367ECF8;
	sub_82420558(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8367ED00"))) PPC_WEAK_FUNC(sub_8367ED00);
PPC_FUNC_IMPL(__imp__sub_8367ED00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8367ED08;
	__savegprlr_27(ctx, base);
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
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
	// li r10,135
	ctx.r10.s64 = 135;
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
	// bge cr6,0x8367ed48
	if (!cr6.lt) goto loc_8367ED48;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e745e0
	ctx.lr = 0x8367ED48;
	sub_82E745E0(ctx, base);
loc_8367ED48:
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
	// addi r27,r11,-26940
	ctx.r27.s64 = ctx.r11.s64 + -26940;
	// li r5,5
	ctx.r5.s64 = 5;
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// addi r4,r27,-44
	ctx.r4.s64 = ctx.r27.s64 + -44;
	// stbx r7,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u8);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r6.u32);
	// stw r30,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r30.u32);
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x8367ED90;
	sub_82472FC0(ctx, base);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367ED9C;
	sub_82E74C08(ctx, base);
	// lwz r5,372(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x8367edb0
	if (cr6.lt) goto loc_8367EDB0;
	// lwz r3,352(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// bl 0x82416268
	ctx.lr = 0x8367EDB0;
	sub_82416268(ctx, base);
loc_8367EDB0:
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// addi r4,r28,20
	ctx.r4.s64 = ctx.r28.s64 + 20;
	// stw r30,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r30.u32);
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
	// blt cr6,0x8367edd0
	if (cr6.lt) goto loc_8367EDD0;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8367EDD0:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
loc_8367EDE0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8367ede0
	if (!cr6.eq) goto loc_8367EDE0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8367EE04;
	sub_82472FC0(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367EE10;
	sub_82E74C08(ctx, base);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8367ee24
	if (cr6.lt) goto loc_8367EE24;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x8367EE24;
	sub_82416268(ctx, base);
loc_8367EE24:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// addi r4,r27,-36
	ctx.r4.s64 = ctx.r27.s64 + -36;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// stw r30,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r30.u32);
	// stw r31,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r31.u32);
	// stb r31,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x8367EE4C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367EE58;
	sub_82E74C08(ctx, base);
	// lwz r11,436(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8367ee6c
	if (cr6.lt) goto loc_8367EE6C;
	// lwz r3,416(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// bl 0x82416268
	ctx.lr = 0x8367EE6C;
	sub_82416268(ctx, base);
loc_8367EE6C:
	// stw r30,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r31.u32);
	// stb r31,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r31.u8);
	// lwz r4,48(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// bl 0x82e746c0
	ctx.lr = 0x8367EE84;
	sub_82E746C0(ctx, base);
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// addi r4,r27,-28
	ctx.r4.s64 = ctx.r27.s64 + -28;
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82472fc0
	ctx.lr = 0x8367EEA0;
	sub_82472FC0(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367EEAC;
	sub_82E74C08(ctx, base);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8367eec0
	if (cr6.lt) goto loc_8367EEC0;
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82416268
	ctx.lr = 0x8367EEC0;
	sub_82416268(ctx, base);
loc_8367EEC0:
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
	// blt cr6,0x8367eee0
	if (cr6.lt) goto loc_8367EEE0;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8367EEE0:
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
loc_8367EEF0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8367eef0
	if (!cr6.eq) goto loc_8367EEF0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8367EF14;
	sub_82472FC0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367EF20;
	sub_82E74C08(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8367ef34
	if (cr6.lt) goto loc_8367EF34;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x8367EF34;
	sub_82416268(ctx, base);
loc_8367EF34:
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// addi r4,r27,-20
	ctx.r4.s64 = ctx.r27.s64 + -20;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x8367EF5C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367EF68;
	sub_82E74C08(ctx, base);
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8367ef7c
	if (cr6.lt) goto loc_8367EF7C;
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82416268
	ctx.lr = 0x8367EF7C;
	sub_82416268(ctx, base);
loc_8367EF7C:
	// lwz r11,164(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 164);
	// addi r4,r28,144
	ctx.r4.s64 = ctx.r28.s64 + 144;
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// blt cr6,0x8367ef9c
	if (cr6.lt) goto loc_8367EF9C;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8367EF9C:
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
loc_8367EFAC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8367efac
	if (!cr6.eq) goto loc_8367EFAC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8367EFD0;
	sub_82472FC0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367EFDC;
	sub_82E74C08(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8367eff0
	if (cr6.lt) goto loc_8367EFF0;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x8367EFF0;
	sub_82416268(ctx, base);
loc_8367EFF0:
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// addi r4,r27,-12
	ctx.r4.s64 = ctx.r27.s64 + -12;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// li r5,3
	ctx.r5.s64 = 3;
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
	ctx.lr = 0x8367F018;
	sub_82472FC0(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367F024;
	sub_82E74C08(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8367f038
	if (cr6.lt) goto loc_8367F038;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82416268
	ctx.lr = 0x8367F038;
	sub_82416268(ctx, base);
loc_8367F038:
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// lwz r4,172(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 172);
	// bl 0x82e746c0
	ctx.lr = 0x8367F050;
	sub_82E746C0(ctx, base);
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// addi r4,r27,-8
	ctx.r4.s64 = ctx.r27.s64 + -8;
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82472fc0
	ctx.lr = 0x8367F06C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367F078;
	sub_82E74C08(ctx, base);
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8367f08c
	if (cr6.lt) goto loc_8367F08C;
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x82416268
	ctx.lr = 0x8367F08C;
	sub_82416268(ctx, base);
loc_8367F08C:
	// lwz r11,196(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 196);
	// addi r4,r28,176
	ctx.r4.s64 = ctx.r28.s64 + 176;
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// blt cr6,0x8367f0ac
	if (cr6.lt) goto loc_8367F0AC;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8367F0AC:
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
loc_8367F0BC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8367f0bc
	if (!cr6.eq) goto loc_8367F0BC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8367F0E0;
	sub_82472FC0(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367F0EC;
	sub_82E74C08(ctx, base);
	// lwz r10,340(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8367f100
	if (cr6.lt) goto loc_8367F100;
	// lwz r3,320(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x82416268
	ctx.lr = 0x8367F100;
	sub_82416268(ctx, base);
loc_8367F100:
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// stw r30,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r30.u32);
	// stw r31,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r31.u32);
	// stb r31,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x8367F128;
	sub_82472FC0(ctx, base);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367F134;
	sub_82E74C08(ctx, base);
	// lwz r11,404(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8367f148
	if (cr6.lt) goto loc_8367F148;
	// lwz r3,384(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// bl 0x82416268
	ctx.lr = 0x8367F148;
	sub_82416268(ctx, base);
loc_8367F148:
	// lwz r11,224(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 224);
	// addi r4,r28,204
	ctx.r4.s64 = ctx.r28.s64 + 204;
	// stw r30,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r30.u32);
	// stw r31,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r31.u8);
	// blt cr6,0x8367f168
	if (cr6.lt) goto loc_8367F168;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8367F168:
	// stw r30,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r31.u32);
	// stb r31,448(r1)
	PPC_STORE_U8(ctx.r1.u32 + 448, ctx.r31.u8);
loc_8367F178:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8367f178
	if (!cr6.eq) goto loc_8367F178;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8367F19C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367F1A8;
	sub_82E74C08(ctx, base);
	// lwz r10,468(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8367f1bc
	if (cr6.lt) goto loc_8367F1BC;
	// lwz r3,448(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// bl 0x82416268
	ctx.lr = 0x8367F1BC;
	sub_82416268(ctx, base);
loc_8367F1BC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8367F1C8"))) PPC_WEAK_FUNC(sub_8367F1C8);
PPC_FUNC_IMPL(__imp__sub_8367F1C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x8367F1D0;
	__savegprlr_14(ctx, base);
	// stwu r1,-816(r1)
	ea = -816 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r31,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r31.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r31,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, ctx.r31.u32);
	// stw r3,836(r1)
	PPC_STORE_U32(ctx.r1.u32 + 836, ctx.r3.u32);
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x83691bb8
	ctx.lr = 0x8367F1FC;
	sub_83691BB8(ctx, base);
	// lwz r10,472(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 472);
	// lwz r11,476(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 476);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x8367f998
	if (!cr6.lt) goto loc_8367F998;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r20,r11,16
	ctx.r20.s64 = ctx.r11.s64 + 16;
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
	// li r29,15
	ctx.r29.s64 = 15;
	// li r18,8
	ctx.r18.s64 = 8;
	// li r19,68
	ctx.r19.s64 = 68;
	// ori r16,r7,1
	ctx.r16.u64 = ctx.r7.u64 | 1;
	// li r14,-1
	ctx.r14.s64 = -1;
	// addi r22,r11,-26852
	ctx.r22.s64 = ctx.r11.s64 + -26852;
	// addi r15,r10,27936
	ctx.r15.s64 = ctx.r10.s64 + 27936;
	// addi r17,r9,8980
	ctx.r17.s64 = ctx.r9.s64 + 8980;
	// addi r21,r8,-26756
	ctx.r21.s64 = ctx.r8.s64 + -26756;
loc_8367F264:
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// addi r11,r1,544
	ctx.r11.s64 = ctx.r1.s64 + 544;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// addi r10,r20,-16
	ctx.r10.s64 = ctx.r20.s64 + -16;
	// ld r9,-8(r20)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r20.u32 + -8);
	// ld r8,-16(r20)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r20.u32 + -16);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,552(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 552);
	// lwz r4,556(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 556);
	// bl 0x82472fc0
	ctx.lr = 0x8367F298;
	sub_82472FC0(ctx, base);
	// addi r6,r22,-80
	ctx.r6.s64 = ctx.r22.s64 + -80;
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x827a8810
	ctx.lr = 0x8367F2B0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8367f344
	if (!cr6.eq) goto loc_8367F344;
	// stw r29,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r29.u32);
	// addi r11,r1,608
	ctx.r11.s64 = ctx.r1.s64 + 608;
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r31.u32);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// stb r31,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r31.u8);
	// ld r9,8(r20)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r20.u32 + 8);
	// ld r10,0(r20)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r20.u32 + 0);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,616(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 616);
	// lwz r4,620(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 620);
	// bl 0x82472fc0
	ctx.lr = 0x8367F2E8;
	sub_82472FC0(ctx, base);
	// lwz r8,292(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r4,272(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x8367f2fc
	if (!cr6.lt) goto loc_8367F2FC;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
loc_8367F2FC:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8367F300:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8367f300
	if (!cr6.eq) goto loc_8367F300;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,20
	ctx.r3.s64 = ctx.r28.s64 + 20;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x8367F324;
	sub_824208C8(ctx, base);
	// lwz r10,292(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8367f338
	if (cr6.lt) goto loc_8367F338;
	// lwz r3,272(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// bl 0x82416268
	ctx.lr = 0x8367F338;
	sub_82416268(ctx, base);
loc_8367F338:
	// stw r29,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r29.u32);
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r31.u32);
	// stb r31,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r31.u8);
loc_8367F344:
	// addi r6,r22,-72
	ctx.r6.s64 = ctx.r22.s64 + -72;
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x827a8810
	ctx.lr = 0x8367F35C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8367f398
	if (!cr6.eq) goto loc_8367F398;
	// ld r11,8(r20)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r20.u32 + 8);
	// addi r10,r1,640
	ctx.r10.s64 = ctx.r1.s64 + 640;
	// ld r9,0(r20)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r20.u32 + 0);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// lwz r8,640(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 640);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x8367f390
	if (!cr6.eq) goto loc_8367F390;
	// ld r11,648(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 648);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8367f394
	goto loc_8367F394;
loc_8367F390:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8367F394:
	// stw r11,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r11.u32);
loc_8367F398:
	// addi r6,r22,-64
	ctx.r6.s64 = ctx.r22.s64 + -64;
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x827a8810
	ctx.lr = 0x8367F3B0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8367f444
	if (!cr6.eq) goto loc_8367F444;
	// stw r29,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r29.u32);
	// addi r11,r1,528
	ctx.r11.s64 = ctx.r1.s64 + 528;
	// stw r31,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r31.u32);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// stb r31,336(r1)
	PPC_STORE_U8(ctx.r1.u32 + 336, ctx.r31.u8);
	// ld r10,8(r20)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r20.u32 + 8);
	// ld r9,0(r20)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r20.u32 + 0);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// lwz r5,536(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 536);
	// lwz r4,540(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 540);
	// bl 0x82472fc0
	ctx.lr = 0x8367F3E8;
	sub_82472FC0(ctx, base);
	// lwz r8,356(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r4,336(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x8367f3fc
	if (!cr6.lt) goto loc_8367F3FC;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
loc_8367F3FC:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8367F400:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8367f400
	if (!cr6.eq) goto loc_8367F400;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,116
	ctx.r3.s64 = ctx.r28.s64 + 116;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x8367F424;
	sub_824208C8(ctx, base);
	// lwz r10,356(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8367f438
	if (cr6.lt) goto loc_8367F438;
	// lwz r3,336(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// bl 0x82416268
	ctx.lr = 0x8367F438;
	sub_82416268(ctx, base);
loc_8367F438:
	// stw r29,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r29.u32);
	// stw r31,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r31.u32);
	// stb r31,336(r1)
	PPC_STORE_U8(ctx.r1.u32 + 336, ctx.r31.u8);
loc_8367F444:
	// addi r6,r22,-56
	ctx.r6.s64 = ctx.r22.s64 + -56;
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r7,9
	ctx.r7.s64 = 9;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x827a8810
	ctx.lr = 0x8367F45C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8367f964
	if (!cr6.eq) goto loc_8367F964;
	// addi r27,r28,152
	ctx.r27.s64 = ctx.r28.s64 + 152;
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// stw r18,412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 412, ctx.r18.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r26,r27,8
	ctx.r26.s64 = ctx.r27.s64 + 8;
	// stw r27,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r27.u32);
	// addi r24,r27,4
	ctx.r24.s64 = ctx.r27.s64 + 4;
	// stw r19,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r19.u32);
	// stw r26,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r26.u32);
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// stw r24,408(r1)
	PPC_STORE_U32(ctx.r1.u32 + 408, ctx.r24.u32);
	// bl 0x8247b7d8
	ctx.lr = 0x8367F494;
	sub_8247B7D8(ctx, base);
	// lwz r3,160(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 160);
	// stw r31,152(r28)
	PPC_STORE_U32(ctx.r28.u32 + 152, ctx.r31.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8367f4b4
	if (cr6.eq) goto loc_8367F4B4;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// bl 0x8247b268
	ctx.lr = 0x8367F4AC;
	sub_8247B268(ctx, base);
	// stw r31,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r31.u32);
	// stw r31,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r31.u32);
loc_8367F4B4:
	// stw r17,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r17.u32);
	// lwz r11,8(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,12(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 12);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x8367f964
	if (!cr6.lt) goto loc_8367F964;
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
loc_8367F4E4:
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// stw r29,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r29.u32);
	// stw r31,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r31.u32);
	// stb r31,172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 172, ctx.r31.u8);
	// bl 0x824208c8
	ctx.lr = 0x8367F50C;
	sub_824208C8(ctx, base);
	// stw r29,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r29.u32);
	// stw r31,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r31.u32);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// stb r31,200(r1)
	PPC_STORE_U8(ctx.r1.u32 + 200, ctx.r31.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x824208c8
	ctx.lr = 0x8367F528;
	sub_824208C8(ctx, base);
	// stw r31,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r31.u32);
	// stw r31,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r31.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r5,-4(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + -4);
	// bl 0x83691bb8
	ctx.lr = 0x8367F544;
	sub_83691BB8(ctx, base);
	// lwz r10,440(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 440);
	// lwz r11,444(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 444);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x8367f828
	if (!cr6.lt) goto loc_8367F828;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r30,r11,16
	ctx.r30.s64 = ctx.r11.s64 + 16;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r28,r11,1
	ctx.r28.s64 = ctx.r11.s64 + 1;
loc_8367F570:
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// addi r11,r1,592
	ctx.r11.s64 = ctx.r1.s64 + 592;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// addi r10,r30,-16
	ctx.r10.s64 = ctx.r30.s64 + -16;
	// ld r9,-16(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + -16);
	// ld r8,-8(r30)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r30.u32 + -8);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// lwz r5,600(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 600);
	// lwz r4,604(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 604);
	// bl 0x82472fc0
	ctx.lr = 0x8367F5A4;
	sub_82472FC0(ctx, base);
	// addi r6,r22,-44
	ctx.r6.s64 = ctx.r22.s64 + -44;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,11
	ctx.r7.s64 = 11;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x8367F5BC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8367f5f8
	if (!cr6.eq) goto loc_8367F5F8;
	// ld r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// addi r10,r1,560
	ctx.r10.s64 = ctx.r1.s64 + 560;
	// ld r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,560(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 560);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x8367f5f0
	if (!cr6.eq) goto loc_8367F5F0;
	// ld r11,568(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 568);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8367f5f4
	goto loc_8367F5F4;
loc_8367F5F0:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8367F5F4:
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
loc_8367F5F8:
	// addi r6,r22,-32
	ctx.r6.s64 = ctx.r22.s64 + -32;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,10
	ctx.r7.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x8367F610;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8367f64c
	if (!cr6.eq) goto loc_8367F64C;
	// ld r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// addi r10,r1,624
	ctx.r10.s64 = ctx.r1.s64 + 624;
	// ld r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,624(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 624);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x8367f644
	if (!cr6.eq) goto loc_8367F644;
	// ld r11,632(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 632);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8367f648
	goto loc_8367F648;
loc_8367F644:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8367F648:
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
loc_8367F64C:
	// addi r6,r22,-20
	ctx.r6.s64 = ctx.r22.s64 + -20;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x8367F664;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8367f6a0
	if (!cr6.eq) goto loc_8367F6A0;
	// ld r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// addi r10,r1,512
	ctx.r10.s64 = ctx.r1.s64 + 512;
	// ld r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,512(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 512);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x8367f698
	if (!cr6.eq) goto loc_8367F698;
	// ld r11,520(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 520);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8367f69c
	goto loc_8367F69C;
loc_8367F698:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8367F69C:
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
loc_8367F6A0:
	// addi r6,r22,-8
	ctx.r6.s64 = ctx.r22.s64 + -8;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x8367F6B8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8367f74c
	if (!cr6.eq) goto loc_8367F74C;
	// stw r29,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r29.u32);
	// addi r11,r1,496
	ctx.r11.s64 = ctx.r1.s64 + 496;
	// stw r31,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r31.u32);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// stb r31,304(r1)
	PPC_STORE_U8(ctx.r1.u32 + 304, ctx.r31.u8);
	// ld r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// ld r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,504(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 504);
	// lwz r4,508(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 508);
	// bl 0x82472fc0
	ctx.lr = 0x8367F6F0;
	sub_82472FC0(ctx, base);
	// lwz r8,324(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// lwz r4,304(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x8367f704
	if (!cr6.lt) goto loc_8367F704;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
loc_8367F704:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8367F708:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8367f708
	if (!cr6.eq) goto loc_8367F708;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x8367F72C;
	sub_824208C8(ctx, base);
	// lwz r10,324(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8367f740
	if (cr6.lt) goto loc_8367F740;
	// lwz r3,304(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// bl 0x82416268
	ctx.lr = 0x8367F740;
	sub_82416268(ctx, base);
loc_8367F740:
	// stw r29,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r29.u32);
	// stw r31,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r31.u32);
	// stb r31,304(r1)
	PPC_STORE_U8(ctx.r1.u32 + 304, ctx.r31.u8);
loc_8367F74C:
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x8367F764;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8367f7f8
	if (!cr6.eq) goto loc_8367F7F8;
	// stw r29,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r29.u32);
	// addi r11,r1,576
	ctx.r11.s64 = ctx.r1.s64 + 576;
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
	// lwz r5,584(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 584);
	// lwz r4,588(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 588);
	// bl 0x82472fc0
	ctx.lr = 0x8367F79C;
	sub_82472FC0(ctx, base);
	// lwz r8,260(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x8367f7b0
	if (!cr6.lt) goto loc_8367F7B0;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
loc_8367F7B0:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8367F7B4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8367f7b4
	if (!cr6.eq) goto loc_8367F7B4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x8367F7D8;
	sub_824208C8(ctx, base);
	// lwz r10,260(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8367f7ec
	if (cr6.lt) goto loc_8367F7EC;
	// lwz r3,240(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x82416268
	ctx.lr = 0x8367F7EC;
	sub_82416268(ctx, base);
loc_8367F7EC:
	// stw r29,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r29.u32);
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// stb r31,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r31.u8);
loc_8367F7F8:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8367f80c
	if (cr6.lt) goto loc_8367F80C;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x8367F80C;
	sub_82416268(ctx, base);
loc_8367F80C:
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// bne 0x8367f570
	if (!cr0.eq) goto loc_8367F570;
	// lwz r28,836(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 836);
loc_8367F828:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8367f884
	if (cr6.lt) goto loc_8367F884;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x8367f874
	if (!cr6.gt) goto loc_8367F874;
	// stw r26,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r26.u32);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// stw r27,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r27.u32);
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// stw r24,376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 376, ctx.r24.u32);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// stw r18,380(r1)
	PPC_STORE_U32(ctx.r1.u32 + 380, ctx.r18.u32);
	// stw r19,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r19.u32);
	// stw r21,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r21.u32);
	// bl 0x8247b270
	ctx.lr = 0x8367F86C;
	sub_8247B270(ctx, base);
	// stw r17,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r17.u32);
	// b 0x8367f878
	goto loc_8367F878;
loc_8367F874:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8367F878:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8367f8fc
	if (cr6.eq) goto loc_8367F8FC;
loc_8367F884:
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mulli r10,r10,68
	ctx.r10.s64 = ctx.r10.s64 * 68;
	// add. r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// beq 0x8367f8f0
	if (cr0.eq) goto loc_8367F8F0;
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,172
	ctx.r4.s64 = ctx.r1.s64 + 172;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// lwz r9,168(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// stw r29,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r29.u32);
	// stw r31,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r31.u32);
	// stb r31,12(r30)
	PPC_STORE_U8(ctx.r30.u32 + 12, ctx.r31.u8);
	// bl 0x82420558
	ctx.lr = 0x8367F8D0;
	sub_82420558(ctx, base);
	// stw r29,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r29.u32);
	// stw r31,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r31.u32);
	// addi r3,r30,40
	ctx.r3.s64 = ctx.r30.s64 + 40;
	// stb r31,40(r30)
	PPC_STORE_U8(ctx.r30.u32 + 40, ctx.r31.u8);
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,200
	ctx.r4.s64 = ctx.r1.s64 + 200;
	// bl 0x82420558
	ctx.lr = 0x8367F8F0;
	sub_82420558(ctx, base);
loc_8367F8F0:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_8367F8FC:
	// lwz r30,448(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8367f918
	if (cr6.eq) goto loc_8367F918;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x839e56b8
	ctx.lr = 0x8367F910;
	sub_839E56B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82416268
	ctx.lr = 0x8367F918;
	sub_82416268(ctx, base);
loc_8367F918:
	// lwz r11,220(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8367f92c
	if (cr6.lt) goto loc_8367F92C;
	// lwz r3,200(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// bl 0x8386d088
	ctx.lr = 0x8367F92C;
	sub_8386D088(ctx, base);
loc_8367F92C:
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// stw r29,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r29.u32);
	// stw r31,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,200(r1)
	PPC_STORE_U8(ctx.r1.u32 + 200, ctx.r31.u8);
	// blt cr6,0x8367f94c
	if (cr6.lt) goto loc_8367F94C;
	// lwz r3,172(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// bl 0x8386d088
	ctx.lr = 0x8367F94C;
	sub_8386D088(ctx, base);
loc_8367F94C:
	// addic. r23,r23,-1
	xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	cr0.compare<int32_t>(ctx.r23.s32, 0, xer);
	// stw r29,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r29.u32);
	// stw r31,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r31.u32);
	// addi r25,r25,16
	ctx.r25.s64 = ctx.r25.s64 + 16;
	// stb r31,172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 172, ctx.r31.u8);
	// bne 0x8367f4e4
	if (!cr0.eq) goto loc_8367F4E4;
loc_8367F964:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8367f978
	if (cr6.lt) goto loc_8367F978;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x8367F978;
	sub_82416268(ctx, base);
loc_8367F978:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r20,r20,32
	ctx.r20.s64 = ctx.r20.s64 + 32;
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bne 0x8367f264
	if (!cr0.eq) goto loc_8367F264;
loc_8367F998:
	// lwz r31,480(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 480);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8367f9b4
	if (cr6.eq) goto loc_8367F9B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x8367F9AC;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x8367F9B4;
	sub_82416268(ctx, base);
loc_8367F9B4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,816
	ctx.r1.s64 = ctx.r1.s64 + 816;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8367F9C0"))) PPC_WEAK_FUNC(sub_8367F9C0);
PPC_FUNC_IMPL(__imp__sub_8367F9C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8367F9C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d95768
	ctx.lr = 0x8367F9D4;
	sub_82D95768(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r29,r11,-27072
	ctx.r29.s64 = ctx.r11.s64 + -27072;
	// li r5,23
	ctx.r5.s64 = 23;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824208c8
	ctx.lr = 0x8367F9EC;
	sub_824208C8(ctx, base);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// addi r7,r10,-26724
	ctx.r7.s64 = ctx.r10.s64 + -26724;
	// addi r5,r8,-26740
	ctx.r5.s64 = ctx.r8.s64 + -26740;
	// addi r6,r9,-26736
	ctx.r6.s64 = ctx.r9.s64 + -26736;
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
	ctx.lr = 0x8367FA34;
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
	ctx.lr = 0x8367FA50;
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
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x8367FA70;
	sub_824208C8(ctx, base);
	// stw r28,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r28.u32);
	// stw r30,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r30.u32);
	// addi r3,r31,404
	ctx.r3.s64 = ctx.r31.s64 + 404;
	// stb r30,404(r31)
	PPC_STORE_U8(ctx.r31.u32 + 404, ctx.r30.u8);
	// addi r4,r29,72
	ctx.r4.s64 = ctx.r29.s64 + 72;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x8367FA8C;
	sub_824208C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8367FA98"))) PPC_WEAK_FUNC(sub_8367FA98);
PPC_FUNC_IMPL(__imp__sub_8367FA98) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x8367fb88
	sub_8367FB88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8367FAA0"))) PPC_WEAK_FUNC(sub_8367FAA0);
PPC_FUNC_IMPL(__imp__sub_8367FAA0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x8367fb88
	sub_8367FB88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8367FAA8"))) PPC_WEAK_FUNC(sub_8367FAA8);
PPC_FUNC_IMPL(__imp__sub_8367FAA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8367FAB0;
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
	// addi r8,r11,-26724
	ctx.r8.s64 = ctx.r11.s64 + -26724;
	// addi r7,r10,-26736
	ctx.r7.s64 = ctx.r10.s64 + -26736;
	// addi r6,r9,-26740
	ctx.r6.s64 = ctx.r9.s64 + -26740;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r6,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r6.u32);
	// addi r30,r3,404
	ctx.r30.s64 = ctx.r3.s64 + 404;
	// lwz r5,424(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 424);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x8367faf4
	if (cr6.lt) goto loc_8367FAF4;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8367FAF4;
	sub_8386D088(ctx, base);
loc_8367FAF4:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// addi r29,r28,376
	ctx.r29.s64 = ctx.r28.s64 + 376;
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// lwz r11,396(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 396);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8367fb20
	if (cr6.lt) goto loc_8367FB20;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8367FB20;
	sub_8386D088(ctx, base);
loc_8367FB20:
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// addi r30,r28,344
	ctx.r30.s64 = ctx.r28.s64 + 344;
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// lwz r11,364(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 364);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8367fb44
	if (cr6.lt) goto loc_8367FB44;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8367FB44;
	sub_8386D088(ctx, base);
loc_8367FB44:
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// addi r29,r28,316
	ctx.r29.s64 = ctx.r28.s64 + 316;
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// lwz r11,336(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 336);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8367fb68
	if (cr6.lt) goto loc_8367FB68;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8367FB68;
	sub_8386D088(ctx, base);
loc_8367FB68:
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// bl 0x82b6a590
	ctx.lr = 0x8367FB7C;
	sub_82B6A590(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8367FB84"))) PPC_WEAK_FUNC(sub_8367FB84);
PPC_FUNC_IMPL(__imp__sub_8367FB84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8367FB88"))) PPC_WEAK_FUNC(sub_8367FB88);
PPC_FUNC_IMPL(__imp__sub_8367FB88) {
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
	// bl 0x8367faa8
	ctx.lr = 0x8367FBA8;
	sub_8367FAA8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8367fbc8
	if (cr6.eq) goto loc_8367FBC8;
	// bl 0x82595188
	ctx.lr = 0x8367FBB8;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x8367FBC8;
	sub_825952B8(ctx, base);
loc_8367FBC8:
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

__attribute__((alias("__imp__sub_8367FBE4"))) PPC_WEAK_FUNC(sub_8367FBE4);
PPC_FUNC_IMPL(__imp__sub_8367FBE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8367FBE8"))) PPC_WEAK_FUNC(sub_8367FBE8);
PPC_FUNC_IMPL(__imp__sub_8367FBE8) {
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
	ctx.lr = 0x8367FC00;
	sub_82EAF8D8(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r4,r11,-27072
	ctx.r4.s64 = ctx.r11.s64 + -27072;
	// li r5,23
	ctx.r5.s64 = 23;
	// bl 0x824208c8
	ctx.lr = 0x8367FC14;
	sub_824208C8(ctx, base);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// lis r7,-32216
	ctx.r7.s64 = -2111307776;
	// addi r4,r8,-26704
	ctx.r4.s64 = ctx.r8.s64 + -26704;
	// addi r3,r7,-26708
	ctx.r3.s64 = ctx.r7.s64 + -26708;
	// addi r6,r10,-26688
	ctx.r6.s64 = ctx.r10.s64 + -26688;
	// stw r4,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r4.u32);
	// addi r5,r9,-26700
	ctx.r5.s64 = ctx.r9.s64 + -26700;
	// stw r3,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r3.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// stw r5,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r5.u32);
	// addi r3,r31,352
	ctx.r3.s64 = ctx.r31.s64 + 352;
	// stw r11,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r11.u32);
	// li r4,10
	ctx.r4.s64 = 10;
	// stw r11,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r11.u32);
	// std r11,360(r31)
	PPC_STORE_U64(ctx.r31.u32 + 360, ctx.r11.u64);
	// bl 0x8367ea90
	ctx.lr = 0x8367FC60;
	sub_8367EA90(ctx, base);
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

__attribute__((alias("__imp__sub_8367FC78"))) PPC_WEAK_FUNC(sub_8367FC78);
PPC_FUNC_IMPL(__imp__sub_8367FC78) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x8367fc90
	sub_8367FC90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8367FC80"))) PPC_WEAK_FUNC(sub_8367FC80);
PPC_FUNC_IMPL(__imp__sub_8367FC80) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x8367fc90
	sub_8367FC90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8367FC88"))) PPC_WEAK_FUNC(sub_8367FC88);
PPC_FUNC_IMPL(__imp__sub_8367FC88) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-312
	ctx.r3.s64 = ctx.r3.s64 + -312;
	// b 0x8367fc90
	sub_8367FC90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8367FC90"))) PPC_WEAK_FUNC(sub_8367FC90);
PPC_FUNC_IMPL(__imp__sub_8367FC90) {
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
	// addi r7,r11,-26688
	ctx.r7.s64 = ctx.r11.s64 + -26688;
	// addi r6,r10,-26700
	ctx.r6.s64 = ctx.r10.s64 + -26700;
	// addi r5,r9,-26704
	ctx.r5.s64 = ctx.r9.s64 + -26704;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r8,-26708
	ctx.r4.s64 = ctx.r8.s64 + -26708;
	// stw r6,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r6.u32);
	// stw r5,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r5.u32);
	// addi r3,r3,352
	ctx.r3.s64 = ctx.r3.s64 + 352;
	// stw r4,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r4.u32);
	// bl 0x8367eb10
	ctx.lr = 0x8367FCE4;
	sub_8367EB10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eaf978
	ctx.lr = 0x8367FCEC;
	sub_82EAF978(ctx, base);
	// clrlwi r3,r30,31
	ctx.r3.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8367fd0c
	if (cr6.eq) goto loc_8367FD0C;
	// bl 0x82595188
	ctx.lr = 0x8367FCFC;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x8367FD0C;
	sub_825952B8(ctx, base);
loc_8367FD0C:
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

__attribute__((alias("__imp__sub_8367FD28"))) PPC_WEAK_FUNC(sub_8367FD28);
PPC_FUNC_IMPL(__imp__sub_8367FD28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8367FD30;
	__savegprlr_27(ctx, base);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
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
	// li r11,135
	ctx.r11.s64 = 135;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bge cr6,0x8367fd70
	if (!cr6.lt) goto loc_8367FD70;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e745e0
	ctx.lr = 0x8367FD70;
	sub_82E745E0(ctx, base);
loc_8367FD70:
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
	// addi r27,r11,-26508
	ctx.r27.s64 = ctx.r11.s64 + -26508;
	// li r5,5
	ctx.r5.s64 = 5;
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r4,r27,-52
	ctx.r4.s64 = ctx.r27.s64 + -52;
	// stbx r7,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u8);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r6.u32);
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x8367FDB8;
	sub_82472FC0(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367FDC4;
	sub_82E74C08(ctx, base);
	// lwz r5,244(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x8367fdd8
	if (cr6.lt) goto loc_8367FDD8;
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82416268
	ctx.lr = 0x8367FDD8;
	sub_82416268(ctx, base);
loc_8367FDD8:
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// addi r4,r28,20
	ctx.r4.s64 = ctx.r28.s64 + 20;
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// blt cr6,0x8367fdf8
	if (cr6.lt) goto loc_8367FDF8;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8367FDF8:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
loc_8367FE08:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8367fe08
	if (!cr6.eq) goto loc_8367FE08;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8367FE2C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367FE38;
	sub_82E74C08(ctx, base);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8367fe4c
	if (cr6.lt) goto loc_8367FE4C;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x8367FE4C;
	sub_82416268(ctx, base);
loc_8367FE4C:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// addi r4,r27,-44
	ctx.r4.s64 = ctx.r27.s64 + -44;
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
	ctx.lr = 0x8367FE74;
	sub_82472FC0(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367FE80;
	sub_82E74C08(ctx, base);
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8367fe94
	if (cr6.lt) goto loc_8367FE94;
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82416268
	ctx.lr = 0x8367FE94;
	sub_82416268(ctx, base);
loc_8367FE94:
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// lwz r4,48(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// bl 0x82e746c0
	ctx.lr = 0x8367FEAC;
	sub_82E746C0(ctx, base);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// addi r4,r27,-36
	ctx.r4.s64 = ctx.r27.s64 + -36;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82472fc0
	ctx.lr = 0x8367FEC8;
	sub_82472FC0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367FED4;
	sub_82E74C08(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8367fee8
	if (cr6.lt) goto loc_8367FEE8;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x8367FEE8;
	sub_82416268(ctx, base);
loc_8367FEE8:
	// lwz r11,136(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 136);
	// addi r4,r28,116
	ctx.r4.s64 = ctx.r28.s64 + 116;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// blt cr6,0x8367ff08
	if (cr6.lt) goto loc_8367FF08;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8367FF08:
	// stw r30,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
loc_8367FF18:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8367ff18
	if (!cr6.eq) goto loc_8367FF18;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8367FF3C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367FF48;
	sub_82E74C08(ctx, base);
	// lwz r10,372(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8367ff5c
	if (cr6.lt) goto loc_8367FF5C;
	// lwz r3,352(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// bl 0x82416268
	ctx.lr = 0x8367FF5C;
	sub_82416268(ctx, base);
loc_8367FF5C:
	// stw r30,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r30.u32);
	// addi r4,r27,-28
	ctx.r4.s64 = ctx.r27.s64 + -28;
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
	ctx.lr = 0x8367FF84;
	sub_82472FC0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8367FF90;
	sub_82E74C08(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8367ffa4
	if (cr6.lt) goto loc_8367FFA4;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x8367FFA4;
	sub_82416268(ctx, base);
loc_8367FFA4:
	// lwz r11,164(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 164);
	// addi r4,r28,144
	ctx.r4.s64 = ctx.r28.s64 + 144;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// blt cr6,0x8367ffc4
	if (cr6.lt) goto loc_8367FFC4;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8367FFC4:
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
loc_8367FFD4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8367ffd4
	if (!cr6.eq) goto loc_8367FFD4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8367FFF8;
	sub_82472FC0(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83680004;
	sub_82E74C08(ctx, base);
	// lwz r10,212(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83680018
	if (cr6.lt) goto loc_83680018;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82416268
	ctx.lr = 0x83680018;
	sub_82416268(ctx, base);
loc_83680018:
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// addi r4,r27,-20
	ctx.r4.s64 = ctx.r27.s64 + -20;
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
	ctx.lr = 0x83680040;
	sub_82472FC0(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8368004C;
	sub_82E74C08(ctx, base);
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83680060
	if (cr6.lt) goto loc_83680060;
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x82416268
	ctx.lr = 0x83680060;
	sub_82416268(ctx, base);
loc_83680060:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// lwz r4,172(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 172);
	// bl 0x82e746c0
	ctx.lr = 0x83680078;
	sub_82E746C0(ctx, base);
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// addi r4,r27,-16
	ctx.r4.s64 = ctx.r27.s64 + -16;
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82472fc0
	ctx.lr = 0x83680094;
	sub_82472FC0(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836800A0;
	sub_82E74C08(ctx, base);
	// lwz r11,340(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836800b4
	if (cr6.lt) goto loc_836800B4;
	// lwz r3,320(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x82416268
	ctx.lr = 0x836800B4;
	sub_82416268(ctx, base);
loc_836800B4:
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// lwz r4,176(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 176);
	// bl 0x82e746c0
	ctx.lr = 0x836800CC;
	sub_82E746C0(ctx, base);
	// stw r30,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r30.u32);
	// stw r31,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r31.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stb r31,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r31.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82472fc0
	ctx.lr = 0x836800E8;
	sub_82472FC0(ctx, base);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836800F4;
	sub_82E74C08(ctx, base);
	// lwz r11,404(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83680108
	if (cr6.lt) goto loc_83680108;
	// lwz r3,384(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// bl 0x82416268
	ctx.lr = 0x83680108;
	sub_82416268(ctx, base);
loc_83680108:
	// stw r30,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r31.u32);
	// addi r30,r28,184
	ctx.r30.s64 = ctx.r28.s64 + 184;
	// stb r31,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r31.u8);
	// lwz r4,184(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 184);
	// bl 0x82e749f8
	ctx.lr = 0x83680124;
	sub_82E749F8(ctx, base);
	// lwz r11,184(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 184);
	// lwz r10,192(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 192);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r31,r10
	ctx.r31.s64 = ctx.r10.s32;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x83680168
	if (cr6.eq) goto loc_83680168;
loc_83680140:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82e746c0
	ctx.lr = 0x8368014C;
	sub_82E746C0(ctx, base);
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
	// bne cr6,0x83680140
	if (!cr6.eq) goto loc_83680140;
loc_83680168:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83680174"))) PPC_WEAK_FUNC(sub_83680174);
PPC_FUNC_IMPL(__imp__sub_83680174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83680178"))) PPC_WEAK_FUNC(sub_83680178);
PPC_FUNC_IMPL(__imp__sub_83680178) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83680180;
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
	ctx.lr = 0x836801A8;
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
	// bge cr6,0x836803ec
	if (!cr6.lt) goto loc_836803EC;
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
	// addi r26,r11,-26484
	ctx.r26.s64 = ctx.r11.s64 + -26484;
loc_836801E0:
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
	ctx.lr = 0x83680214;
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
	ctx.lr = 0x8368022C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836802c0
	if (!cr6.eq) goto loc_836802C0;
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
	ctx.lr = 0x83680264;
	sub_82472FC0(ctx, base);
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x83680278
	if (!cr6.lt) goto loc_83680278;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
loc_83680278:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8368027C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8368027c
	if (!cr6.eq) goto loc_8368027C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,20
	ctx.r3.s64 = ctx.r28.s64 + 20;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836802A0;
	sub_824208C8(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836802b4
	if (cr6.lt) goto loc_836802B4;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82416268
	ctx.lr = 0x836802B4;
	sub_82416268(ctx, base);
loc_836802B4:
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
loc_836802C0:
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
	ctx.lr = 0x836802D8;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83680314
	if (!cr6.eq) goto loc_83680314;
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
	// bne cr6,0x8368030c
	if (!cr6.eq) goto loc_8368030C;
	// ld r11,248(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 248);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83680310
	goto loc_83680310;
loc_8368030C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_83680310:
	// stw r11,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r11.u32);
loc_83680314:
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
	ctx.lr = 0x8368032C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836803c0
	if (!cr6.eq) goto loc_836803C0;
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
	ctx.lr = 0x83680364;
	sub_82472FC0(ctx, base);
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x83680378
	if (!cr6.lt) goto loc_83680378;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_83680378:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8368037C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8368037c
	if (!cr6.eq) goto loc_8368037C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,116
	ctx.r3.s64 = ctx.r28.s64 + 116;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836803A0;
	sub_824208C8(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836803b4
	if (cr6.lt) goto loc_836803B4;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82416268
	ctx.lr = 0x836803B4;
	sub_82416268(ctx, base);
loc_836803B4:
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
loc_836803C0:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836803d4
	if (cr6.lt) goto loc_836803D4;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82416268
	ctx.lr = 0x836803D4;
	sub_82416268(ctx, base);
loc_836803D4:
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
	// bne 0x836801e0
	if (!cr0.eq) goto loc_836801E0;
loc_836803EC:
	// lwz r31,192(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83680408
	if (cr6.eq) goto loc_83680408;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x83680400;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x83680408;
	sub_82416268(ctx, base);
loc_83680408:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83680414"))) PPC_WEAK_FUNC(sub_83680414);
PPC_FUNC_IMPL(__imp__sub_83680414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83680418"))) PPC_WEAK_FUNC(sub_83680418);
PPC_FUNC_IMPL(__imp__sub_83680418) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83680420;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d95768
	ctx.lr = 0x8368042C;
	sub_82D95768(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r29,r11,-26624
	ctx.r29.s64 = ctx.r11.s64 + -26624;
	// li r5,29
	ctx.r5.s64 = 29;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824208c8
	ctx.lr = 0x83680444;
	sub_824208C8(ctx, base);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// addi r7,r10,-26376
	ctx.r7.s64 = ctx.r10.s64 + -26376;
	// addi r5,r8,-26392
	ctx.r5.s64 = ctx.r8.s64 + -26392;
	// addi r6,r9,-26388
	ctx.r6.s64 = ctx.r9.s64 + -26388;
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
	ctx.lr = 0x8368048C;
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
	ctx.lr = 0x836804A8;
	sub_824208C8(ctx, base);
	// stw r30,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r30.u32);
	// stw r30,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r30.u32);
	// addi r3,r31,384
	ctx.r3.s64 = ctx.r31.s64 + 384;
	// stw r30,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r30.u32);
	// li r4,30
	ctx.r4.s64 = 30;
	// stw r30,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r30.u32);
	// std r30,392(r31)
	PPC_STORE_U64(ctx.r31.u32 + 392, ctx.r30.u64);
	// bl 0x82423930
	ctx.lr = 0x836804C8;
	sub_82423930(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836804D4"))) PPC_WEAK_FUNC(sub_836804D4);
PPC_FUNC_IMPL(__imp__sub_836804D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836804D8"))) PPC_WEAK_FUNC(sub_836804D8);
PPC_FUNC_IMPL(__imp__sub_836804D8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x83680588
	sub_83680588(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836804E0"))) PPC_WEAK_FUNC(sub_836804E0);
PPC_FUNC_IMPL(__imp__sub_836804E0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x83680588
	sub_83680588(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836804E8"))) PPC_WEAK_FUNC(sub_836804E8);
PPC_FUNC_IMPL(__imp__sub_836804E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x836804F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// addi r8,r11,-26376
	ctx.r8.s64 = ctx.r11.s64 + -26376;
	// addi r7,r10,-26388
	ctx.r7.s64 = ctx.r10.s64 + -26388;
	// addi r6,r9,-26392
	ctx.r6.s64 = ctx.r9.s64 + -26392;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
	// addi r3,r3,384
	ctx.r3.s64 = ctx.r3.s64 + 384;
	// stw r6,216(r29)
	PPC_STORE_U32(ctx.r29.u32 + 216, ctx.r6.u32);
	// bl 0x824238b8
	ctx.lr = 0x83680524;
	sub_824238B8(ctx, base);
	// lwz r5,364(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 364);
	// addi r30,r29,344
	ctx.r30.s64 = ctx.r29.s64 + 344;
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x8368053c
	if (cr6.lt) goto loc_8368053C;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8368053C;
	sub_8386D088(ctx, base);
loc_8368053C:
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
	// blt cr6,0x83680568
	if (cr6.lt) goto loc_83680568;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83680568;
	sub_8386D088(ctx, base);
loc_83680568:
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// bl 0x82b6a590
	ctx.lr = 0x8368057C;
	sub_82B6A590(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83680584"))) PPC_WEAK_FUNC(sub_83680584);
PPC_FUNC_IMPL(__imp__sub_83680584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83680588"))) PPC_WEAK_FUNC(sub_83680588);
PPC_FUNC_IMPL(__imp__sub_83680588) {
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
	// bl 0x836804e8
	ctx.lr = 0x836805A8;
	sub_836804E8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836805c8
	if (cr6.eq) goto loc_836805C8;
	// bl 0x82595188
	ctx.lr = 0x836805B8;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x836805C8;
	sub_825952B8(ctx, base);
loc_836805C8:
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

__attribute__((alias("__imp__sub_836805E4"))) PPC_WEAK_FUNC(sub_836805E4);
PPC_FUNC_IMPL(__imp__sub_836805E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836805E8"))) PPC_WEAK_FUNC(sub_836805E8);
PPC_FUNC_IMPL(__imp__sub_836805E8) {
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
	ctx.lr = 0x83680600;
	sub_82EAF8D8(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r4,r11,-26624
	ctx.r4.s64 = ctx.r11.s64 + -26624;
	// li r5,29
	ctx.r5.s64 = 29;
	// bl 0x824208c8
	ctx.lr = 0x83680614;
	sub_824208C8(ctx, base);
	// lis r7,-32216
	ctx.r7.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// addi r3,r7,-26328
	ctx.r3.s64 = ctx.r7.s64 + -26328;
	// addi r6,r10,-26344
	ctx.r6.s64 = ctx.r10.s64 + -26344;
	// addi r5,r9,-26356
	ctx.r5.s64 = ctx.r9.s64 + -26356;
	// stw r3,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r3.u32);
	// addi r4,r8,-26360
	ctx.r4.s64 = ctx.r8.s64 + -26360;
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

__attribute__((alias("__imp__sub_8368065C"))) PPC_WEAK_FUNC(sub_8368065C);
PPC_FUNC_IMPL(__imp__sub_8368065C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83680660"))) PPC_WEAK_FUNC(sub_83680660);
PPC_FUNC_IMPL(__imp__sub_83680660) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x83680678
	sub_83680678(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83680668"))) PPC_WEAK_FUNC(sub_83680668);
PPC_FUNC_IMPL(__imp__sub_83680668) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-312
	ctx.r3.s64 = ctx.r3.s64 + -312;
	// b 0x83680678
	sub_83680678(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83680670"))) PPC_WEAK_FUNC(sub_83680670);
PPC_FUNC_IMPL(__imp__sub_83680670) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x83680678
	sub_83680678(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83680678"))) PPC_WEAK_FUNC(sub_83680678);
PPC_FUNC_IMPL(__imp__sub_83680678) {
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
	// addi r7,r11,-26344
	ctx.r7.s64 = ctx.r11.s64 + -26344;
	// addi r6,r10,-26356
	ctx.r6.s64 = ctx.r10.s64 + -26356;
	// addi r5,r9,-26360
	ctx.r5.s64 = ctx.r9.s64 + -26360;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r8,-26328
	ctx.r4.s64 = ctx.r8.s64 + -26328;
	// stw r6,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r6.u32);
	// stw r5,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r4.u32);
	// bl 0x82eaf978
	ctx.lr = 0x836806C8;
	sub_82EAF978(ctx, base);
	// clrlwi r3,r30,31
	ctx.r3.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x836806e8
	if (cr6.eq) goto loc_836806E8;
	// bl 0x82595188
	ctx.lr = 0x836806D8;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x836806E8;
	sub_825952B8(ctx, base);
loc_836806E8:
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

__attribute__((alias("__imp__sub_83680704"))) PPC_WEAK_FUNC(sub_83680704);
PPC_FUNC_IMPL(__imp__sub_83680704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83680708"))) PPC_WEAK_FUNC(sub_83680708);
PPC_FUNC_IMPL(__imp__sub_83680708) {
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
	// ble cr6,0x83680774
	if (!cr6.gt) goto loc_83680774;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// addi r8,r10,-25864
	ctx.r8.s64 = ctx.r10.s64 + -25864;
	// li r7,8
	ctx.r7.s64 = 8;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// li r6,152
	ctx.r6.s64 = 152;
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
	ctx.lr = 0x83680764;
	sub_8247B270(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83680774:
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

__attribute__((alias("__imp__sub_83680788"))) PPC_WEAK_FUNC(sub_83680788);
PPC_FUNC_IMPL(__imp__sub_83680788) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83680790;
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
	// addi r10,r11,-25864
	ctx.r10.s64 = ctx.r11.s64 + -25864;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// li r8,152
	ctx.r8.s64 = 152;
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
	ctx.lr = 0x836807D4;
	sub_8247B7D8(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// beq cr6,0x836807fc
	if (cr6.eq) goto loc_836807FC;
	// lis r4,11
	ctx.r4.s64 = 720896;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x8247b268
	ctx.lr = 0x836807F4;
	sub_8247B268(ctx, base);
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
loc_836807FC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83680804"))) PPC_WEAK_FUNC(sub_83680804);
PPC_FUNC_IMPL(__imp__sub_83680804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83680808"))) PPC_WEAK_FUNC(sub_83680808);
PPC_FUNC_IMPL(__imp__sub_83680808) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83680810;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r3,124
	ctx.r29.s64 = ctx.r3.s64 + 124;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83680830
	if (cr6.lt) goto loc_83680830;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83680830;
	sub_8386D088(ctx, base);
loc_83680830:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// addi r30,r28,92
	ctx.r30.s64 = ctx.r28.s64 + 92;
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// lwz r11,112(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 112);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8368085c
	if (cr6.lt) goto loc_8368085C;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8368085C;
	sub_8386D088(ctx, base);
loc_8368085C:
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// addi r29,r28,64
	ctx.r29.s64 = ctx.r28.s64 + 64;
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// lwz r11,84(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 84);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83680880
	if (cr6.lt) goto loc_83680880;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83680880;
	sub_8386D088(ctx, base);
loc_83680880:
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// addi r30,r28,36
	ctx.r30.s64 = ctx.r28.s64 + 36;
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// lwz r11,56(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836808a4
	if (cr6.lt) goto loc_836808A4;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836808A4;
	sub_8386D088(ctx, base);
loc_836808A4:
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
	// addi r29,r28,8
	ctx.r29.s64 = ctx.r28.s64 + 8;
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836808c8
	if (cr6.lt) goto loc_836808C8;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836808C8;
	sub_8386D088(ctx, base);
loc_836808C8:
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836808DC"))) PPC_WEAK_FUNC(sub_836808DC);
PPC_FUNC_IMPL(__imp__sub_836808DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836808E0"))) PPC_WEAK_FUNC(sub_836808E0);
PPC_FUNC_IMPL(__imp__sub_836808E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x836808E8;
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
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stb r30,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r30.u8);
	// bl 0x82420558
	ctx.lr = 0x83680930;
	sub_82420558(ctx, base);
	// stw r27,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r27.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// stb r30,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r30.u8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r29,36
	ctx.r4.s64 = ctx.r29.s64 + 36;
	// bl 0x82420558
	ctx.lr = 0x83680950;
	sub_82420558(ctx, base);
	// stw r27,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r27.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// stb r30,64(r31)
	PPC_STORE_U8(ctx.r31.u32 + 64, ctx.r30.u8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r29,64
	ctx.r4.s64 = ctx.r29.s64 + 64;
	// bl 0x82420558
	ctx.lr = 0x83680970;
	sub_82420558(ctx, base);
	// stw r27,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r27.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// stb r30,92(r31)
	PPC_STORE_U8(ctx.r31.u32 + 92, ctx.r30.u8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r29,92
	ctx.r4.s64 = ctx.r29.s64 + 92;
	// bl 0x82420558
	ctx.lr = 0x83680990;
	sub_82420558(ctx, base);
	// lwz r9,120(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 120);
	// addi r3,r31,124
	ctx.r3.s64 = ctx.r31.s64 + 124;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r29,124
	ctx.r4.s64 = ctx.r29.s64 + 124;
	// stw r9,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r9.u32);
	// stw r27,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r27.u32);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// stb r30,124(r31)
	PPC_STORE_U8(ctx.r31.u32 + 124, ctx.r30.u8);
	// bl 0x82420558
	ctx.lr = 0x836809B8;
	sub_82420558(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836809C4"))) PPC_WEAK_FUNC(sub_836809C4);
PPC_FUNC_IMPL(__imp__sub_836809C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836809C8"))) PPC_WEAK_FUNC(sub_836809C8);
PPC_FUNC_IMPL(__imp__sub_836809C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x836809dc
	if (cr6.eq) goto loc_836809DC;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x836808e0
	sub_836808E0(ctx, base);
	return;
loc_836809DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_836809E4"))) PPC_WEAK_FUNC(sub_836809E4);
PPC_FUNC_IMPL(__imp__sub_836809E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836809E8"))) PPC_WEAK_FUNC(sub_836809E8);
PPC_FUNC_IMPL(__imp__sub_836809E8) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x83680808
	sub_83680808(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836809F0"))) PPC_WEAK_FUNC(sub_836809F0);
PPC_FUNC_IMPL(__imp__sub_836809F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x836809F8;
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
	// li r29,-1
	ctx.r29.s64 = -1;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// bl 0x82420558
	ctx.lr = 0x83680A2C;
	sub_82420558(ctx, base);
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,36
	ctx.r4.s64 = ctx.r30.s64 + 36;
	// bl 0x82420558
	ctx.lr = 0x83680A40;
	sub_82420558(ctx, base);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,64
	ctx.r4.s64 = ctx.r30.s64 + 64;
	// bl 0x82420558
	ctx.lr = 0x83680A54;
	sub_82420558(ctx, base);
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,92
	ctx.r4.s64 = ctx.r30.s64 + 92;
	// bl 0x82420558
	ctx.lr = 0x83680A68;
	sub_82420558(ctx, base);
	// lwz r9,120(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// addi r3,r31,124
	ctx.r3.s64 = ctx.r31.s64 + 124;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,124
	ctx.r4.s64 = ctx.r30.s64 + 124;
	// stw r9,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r9.u32);
	// bl 0x82420558
	ctx.lr = 0x83680A84;
	sub_82420558(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83680A90"))) PPC_WEAK_FUNC(sub_83680A90);
PPC_FUNC_IMPL(__imp__sub_83680A90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83680A98;
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
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// addi r28,r11,27936
	ctx.r28.s64 = ctx.r11.s64 + 27936;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stb r30,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r30.u8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x824208c8
	ctx.lr = 0x83680AD4;
	sub_824208C8(ctx, base);
	// stw r29,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r29.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// stb r30,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r30.u8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x83680AF0;
	sub_824208C8(ctx, base);
	// stw r29,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// stb r30,64(r31)
	PPC_STORE_U8(ctx.r31.u32 + 64, ctx.r30.u8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x83680B0C;
	sub_824208C8(ctx, base);
	// stw r29,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r29.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// addi r3,r31,92
	ctx.r3.s64 = ctx.r31.s64 + 92;
	// stb r30,92(r31)
	PPC_STORE_U8(ctx.r31.u32 + 92, ctx.r30.u8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x83680B28;
	sub_824208C8(ctx, base);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// stw r29,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r29.u32);
	// addi r3,r31,124
	ctx.r3.s64 = ctx.r31.s64 + 124;
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stb r30,124(r31)
	PPC_STORE_U8(ctx.r31.u32 + 124, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x83680B48;
	sub_824208C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83680B54"))) PPC_WEAK_FUNC(sub_83680B54);
PPC_FUNC_IMPL(__imp__sub_83680B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83680B58"))) PPC_WEAK_FUNC(sub_83680B58);
PPC_FUNC_IMPL(__imp__sub_83680B58) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x836809f0
	sub_836809F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83680B64"))) PPC_WEAK_FUNC(sub_83680B64);
PPC_FUNC_IMPL(__imp__sub_83680B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83680B68"))) PPC_WEAK_FUNC(sub_83680B68);
PPC_FUNC_IMPL(__imp__sub_83680B68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83680B70;
	__savegprlr_27(ctx, base);
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
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
	// li r10,137
	ctx.r10.s64 = 137;
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
	// bge cr6,0x83680bb0
	if (!cr6.lt) goto loc_83680BB0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e745e0
	ctx.lr = 0x83680BB0;
	sub_82E745E0(ctx, base);
loc_83680BB0:
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
	// addi r27,r11,-26080
	ctx.r27.s64 = ctx.r11.s64 + -26080;
	// li r5,5
	ctx.r5.s64 = 5;
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// addi r4,r27,-68
	ctx.r4.s64 = ctx.r27.s64 + -68;
	// stbx r7,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u8);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r6.u32);
	// stw r30,564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 564, ctx.r30.u32);
	// stw r31,560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 560, ctx.r31.u32);
	// stb r31,544(r1)
	PPC_STORE_U8(ctx.r1.u32 + 544, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x83680BF8;
	sub_82472FC0(ctx, base);
	// addi r4,r1,544
	ctx.r4.s64 = ctx.r1.s64 + 544;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83680C04;
	sub_82E74C08(ctx, base);
	// lwz r5,564(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 564);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x83680c18
	if (cr6.lt) goto loc_83680C18;
	// lwz r3,544(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 544);
	// bl 0x82416268
	ctx.lr = 0x83680C18;
	sub_82416268(ctx, base);
loc_83680C18:
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// addi r4,r28,20
	ctx.r4.s64 = ctx.r28.s64 + 20;
	// stw r30,564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 564, ctx.r30.u32);
	// stw r31,560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 560, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,544(r1)
	PPC_STORE_U8(ctx.r1.u32 + 544, ctx.r31.u8);
	// blt cr6,0x83680c38
	if (cr6.lt) goto loc_83680C38;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83680C38:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
loc_83680C48:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83680c48
	if (!cr6.eq) goto loc_83680C48;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x83680C6C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83680C78;
	sub_82E74C08(ctx, base);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83680c8c
	if (cr6.lt) goto loc_83680C8C;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x83680C8C;
	sub_82416268(ctx, base);
loc_83680C8C:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// addi r4,r27,-60
	ctx.r4.s64 = ctx.r27.s64 + -60;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// stw r30,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r30.u32);
	// stw r31,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r31.u32);
	// stb r31,480(r1)
	PPC_STORE_U8(ctx.r1.u32 + 480, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x83680CB4;
	sub_82472FC0(ctx, base);
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83680CC0;
	sub_82E74C08(ctx, base);
	// lwz r11,500(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 500);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83680cd4
	if (cr6.lt) goto loc_83680CD4;
	// lwz r3,480(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 480);
	// bl 0x82416268
	ctx.lr = 0x83680CD4;
	sub_82416268(ctx, base);
loc_83680CD4:
	// stw r30,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r31.u32);
	// stb r31,480(r1)
	PPC_STORE_U8(ctx.r1.u32 + 480, ctx.r31.u8);
	// lwz r4,48(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// bl 0x82e746c0
	ctx.lr = 0x83680CEC;
	sub_82E746C0(ctx, base);
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// addi r4,r27,-52
	ctx.r4.s64 = ctx.r27.s64 + -52;
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82472fc0
	ctx.lr = 0x83680D08;
	sub_82472FC0(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83680D14;
	sub_82E74C08(ctx, base);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83680d28
	if (cr6.lt) goto loc_83680D28;
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82416268
	ctx.lr = 0x83680D28;
	sub_82416268(ctx, base);
loc_83680D28:
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
	// blt cr6,0x83680d48
	if (cr6.lt) goto loc_83680D48;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83680D48:
	// stw r30,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r31.u32);
	// stb r31,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r31.u8);
loc_83680D58:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83680d58
	if (!cr6.eq) goto loc_83680D58;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x83680D7C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83680D88;
	sub_82E74C08(ctx, base);
	// lwz r10,436(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83680d9c
	if (cr6.lt) goto loc_83680D9C;
	// lwz r3,416(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// bl 0x82416268
	ctx.lr = 0x83680D9C;
	sub_82416268(ctx, base);
loc_83680D9C:
	// stw r30,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r30.u32);
	// addi r4,r27,-44
	ctx.r4.s64 = ctx.r27.s64 + -44;
	// stw r31,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r31.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stb r31,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r31.u8);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x83680DC4;
	sub_82472FC0(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83680DD0;
	sub_82E74C08(ctx, base);
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83680de4
	if (cr6.lt) goto loc_83680DE4;
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82416268
	ctx.lr = 0x83680DE4;
	sub_82416268(ctx, base);
loc_83680DE4:
	// lwz r11,164(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 164);
	// addi r4,r28,144
	ctx.r4.s64 = ctx.r28.s64 + 144;
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// blt cr6,0x83680e04
	if (cr6.lt) goto loc_83680E04;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83680E04:
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
loc_83680E14:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83680e14
	if (!cr6.eq) goto loc_83680E14;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x83680E38;
	sub_82472FC0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83680E44;
	sub_82E74C08(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83680e58
	if (cr6.lt) goto loc_83680E58;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x83680E58;
	sub_82416268(ctx, base);
loc_83680E58:
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// addi r4,r27,-36
	ctx.r4.s64 = ctx.r27.s64 + -36;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// stw r30,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r30.u32);
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x83680E80;
	sub_82472FC0(ctx, base);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83680E8C;
	sub_82E74C08(ctx, base);
	// lwz r11,372(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83680ea0
	if (cr6.lt) goto loc_83680EA0;
	// lwz r3,352(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// bl 0x82416268
	ctx.lr = 0x83680EA0;
	sub_82416268(ctx, base);
loc_83680EA0:
	// stw r30,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
	// lwz r4,172(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 172);
	// bl 0x82e746c0
	ctx.lr = 0x83680EB8;
	sub_82E746C0(ctx, base);
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// addi r4,r27,-32
	ctx.r4.s64 = ctx.r27.s64 + -32;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82472fc0
	ctx.lr = 0x83680ED4;
	sub_82472FC0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83680EE0;
	sub_82E74C08(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83680ef4
	if (cr6.lt) goto loc_83680EF4;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x83680EF4;
	sub_82416268(ctx, base);
loc_83680EF4:
	// lwz r11,196(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 196);
	// addi r4,r28,176
	ctx.r4.s64 = ctx.r28.s64 + 176;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// blt cr6,0x83680f14
	if (cr6.lt) goto loc_83680F14;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83680F14:
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
loc_83680F24:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83680f24
	if (!cr6.eq) goto loc_83680F24;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x83680F48;
	sub_82472FC0(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83680F54;
	sub_82E74C08(ctx, base);
	// lwz r10,212(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83680f68
	if (cr6.lt) goto loc_83680F68;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82416268
	ctx.lr = 0x83680F68;
	sub_82416268(ctx, base);
loc_83680F68:
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// addi r4,r27,-24
	ctx.r4.s64 = ctx.r27.s64 + -24;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// li r5,6
	ctx.r5.s64 = 6;
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
	ctx.lr = 0x83680F90;
	sub_82472FC0(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83680F9C;
	sub_82E74C08(ctx, base);
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83680fb0
	if (cr6.lt) goto loc_83680FB0;
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x82416268
	ctx.lr = 0x83680FB0;
	sub_82416268(ctx, base);
loc_83680FB0:
	// lwz r11,224(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 224);
	// addi r4,r28,204
	ctx.r4.s64 = ctx.r28.s64 + 204;
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// blt cr6,0x83680fd0
	if (cr6.lt) goto loc_83680FD0;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83680FD0:
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
loc_83680FE0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83680fe0
	if (!cr6.eq) goto loc_83680FE0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x83681004;
	sub_82472FC0(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83681010;
	sub_82E74C08(ctx, base);
	// lwz r10,340(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83681024
	if (cr6.lt) goto loc_83681024;
	// lwz r3,320(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x82416268
	ctx.lr = 0x83681024;
	sub_82416268(ctx, base);
loc_83681024:
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// addi r4,r27,-16
	ctx.r4.s64 = ctx.r27.s64 + -16;
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// stw r30,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r30.u32);
	// stw r31,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r31.u32);
	// stb r31,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x8368104C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83681058;
	sub_82E74C08(ctx, base);
	// lwz r11,404(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x8368106c
	if (cr6.lt) goto loc_8368106C;
	// lwz r3,384(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// bl 0x82416268
	ctx.lr = 0x8368106C;
	sub_82416268(ctx, base);
loc_8368106C:
	// lwz r11,252(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 252);
	// addi r4,r28,232
	ctx.r4.s64 = ctx.r28.s64 + 232;
	// stw r30,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r30.u32);
	// stw r31,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r31.u8);
	// blt cr6,0x8368108c
	if (cr6.lt) goto loc_8368108C;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8368108C:
	// stw r30,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r31.u32);
	// stb r31,448(r1)
	PPC_STORE_U8(ctx.r1.u32 + 448, ctx.r31.u8);
loc_8368109C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8368109c
	if (!cr6.eq) goto loc_8368109C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836810C0;
	sub_82472FC0(ctx, base);
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836810CC;
	sub_82E74C08(ctx, base);
	// lwz r10,468(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836810e0
	if (cr6.lt) goto loc_836810E0;
	// lwz r3,448(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// bl 0x82416268
	ctx.lr = 0x836810E0;
	sub_82416268(ctx, base);
loc_836810E0:
	// stw r30,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r30.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r31,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,448(r1)
	PPC_STORE_U8(ctx.r1.u32 + 448, ctx.r31.u8);
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// stw r30,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r30.u32);
	// stw r31,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r31.u32);
	// stb r31,512(r1)
	PPC_STORE_U8(ctx.r1.u32 + 512, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x83681108;
	sub_82472FC0(ctx, base);
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83681114;
	sub_82E74C08(ctx, base);
	// lwz r11,532(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 532);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83681128
	if (cr6.lt) goto loc_83681128;
	// lwz r3,512(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 512);
	// bl 0x82416268
	ctx.lr = 0x83681128;
	sub_82416268(ctx, base);
loc_83681128:
	// lwz r11,280(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 280);
	// addi r4,r28,260
	ctx.r4.s64 = ctx.r28.s64 + 260;
	// stw r30,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r30.u32);
	// stw r31,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,512(r1)
	PPC_STORE_U8(ctx.r1.u32 + 512, ctx.r31.u8);
	// blt cr6,0x83681148
	if (cr6.lt) goto loc_83681148;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83681148:
	// stw r30,596(r1)
	PPC_STORE_U32(ctx.r1.u32 + 596, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,592(r1)
	PPC_STORE_U32(ctx.r1.u32 + 592, ctx.r31.u32);
	// stb r31,576(r1)
	PPC_STORE_U8(ctx.r1.u32 + 576, ctx.r31.u8);
loc_83681158:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83681158
	if (!cr6.eq) goto loc_83681158;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8368117C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,576
	ctx.r4.s64 = ctx.r1.s64 + 576;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83681188;
	sub_82E74C08(ctx, base);
	// lwz r10,596(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 596);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8368119c
	if (cr6.lt) goto loc_8368119C;
	// lwz r3,576(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 576);
	// bl 0x82416268
	ctx.lr = 0x8368119C;
	sub_82416268(ctx, base);
loc_8368119C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836811A8"))) PPC_WEAK_FUNC(sub_836811A8);
PPC_FUNC_IMPL(__imp__sub_836811A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x836811B0;
	__savegprlr_14(ctx, base);
	// stwu r1,-1040(r1)
	ea = -1040 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// stw r30,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r30.u32);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x83691bb8
	ctx.lr = 0x836811D8;
	sub_83691BB8(ctx, base);
	// lwz r10,456(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 456);
	// lwz r11,460(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 460);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r21,r11
	ctx.r21.u64 = ctx.r11.u64;
	// add r14,r10,r11
	ctx.r14.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r14
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r14.u32, xer);
	// bge cr6,0x83681ae8
	if (!cr6.lt) goto loc_83681AE8;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r8,11
	ctx.r8.s64 = 720896;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// li r29,15
	ctx.r29.s64 = 15;
	// li r18,8
	ctx.r18.s64 = 8;
	// li r19,152
	ctx.r19.s64 = 152;
	// ori r16,r8,1
	ctx.r16.u64 = ctx.r8.u64 | 1;
	// addi r23,r11,-25964
	ctx.r23.s64 = ctx.r11.s64 + -25964;
	// addi r17,r10,8980
	ctx.r17.s64 = ctx.r10.s64 + 8980;
	// addi r20,r9,-25864
	ctx.r20.s64 = ctx.r9.s64 + -25864;
loc_83681220:
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// addi r11,r1,672
	ctx.r11.s64 = ctx.r1.s64 + 672;
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stb r30,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r30.u8);
	// ld r10,8(r21)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r21.u32 + 8);
	// ld r9,0(r21)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r21.u32 + 0);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// lwz r5,680(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 680);
	// lwz r4,684(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 684);
	// bl 0x82472fc0
	ctx.lr = 0x83681250;
	sub_82472FC0(ctx, base);
	// addi r6,r23,-108
	ctx.r6.s64 = ctx.r23.s64 + -108;
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x827a8810
	ctx.lr = 0x83681268;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83681300
	if (!cr6.eq) goto loc_83681300;
	// stb r30,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r30.u8);
	// addi r11,r1,688
	ctx.r11.s64 = ctx.r1.s64 + 688;
	// stw r29,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r29.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r30,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r30.u32);
	// addi r10,r21,16
	ctx.r10.s64 = ctx.r21.s64 + 16;
	// ld r8,16(r21)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r21.u32 + 16);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// ld r9,24(r21)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r21.u32 + 24);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r4,700(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 700);
	// lwz r5,696(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 696);
	// bl 0x82472fc0
	ctx.lr = 0x836812A4;
	sub_82472FC0(ctx, base);
	// lwz r7,212(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x836812b8
	if (!cr6.lt) goto loc_836812B8;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
loc_836812B8:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836812BC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836812bc
	if (!cr6.eq) goto loc_836812BC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r15,20
	ctx.r3.s64 = ctx.r15.s64 + 20;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836812E0;
	sub_824208C8(ctx, base);
	// lwz r10,212(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836812f4
	if (cr6.lt) goto loc_836812F4;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82416268
	ctx.lr = 0x836812F4;
	sub_82416268(ctx, base);
loc_836812F4:
	// stw r29,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r29.u32);
	// stw r30,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r30.u32);
	// stb r30,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r30.u8);
loc_83681300:
	// addi r6,r23,-100
	ctx.r6.s64 = ctx.r23.s64 + -100;
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x827a8810
	ctx.lr = 0x83681318;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83681358
	if (!cr6.eq) goto loc_83681358;
	// ld r9,24(r21)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r21.u32 + 24);
	// addi r10,r1,560
	ctx.r10.s64 = ctx.r1.s64 + 560;
	// ld r11,16(r21)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r21.u32 + 16);
	// addi r8,r21,16
	ctx.r8.s64 = ctx.r21.s64 + 16;
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// lwz r7,560(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 560);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x83681350
	if (!cr6.eq) goto loc_83681350;
	// ld r11,568(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 568);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83681354
	goto loc_83681354;
loc_83681350:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_83681354:
	// stw r11,48(r15)
	PPC_STORE_U32(ctx.r15.u32 + 48, ctx.r11.u32);
loc_83681358:
	// addi r6,r23,-92
	ctx.r6.s64 = ctx.r23.s64 + -92;
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x827a8810
	ctx.lr = 0x83681370;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83681408
	if (!cr6.eq) goto loc_83681408;
	// stw r29,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r29.u32);
	// addi r11,r1,656
	ctx.r11.s64 = ctx.r1.s64 + 656;
	// stw r30,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r30.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stb r30,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r30.u8);
	// addi r10,r21,16
	ctx.r10.s64 = ctx.r21.s64 + 16;
	// ld r8,24(r21)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r21.u32 + 24);
	// ld r9,16(r21)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r21.u32 + 16);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// lwz r4,668(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 668);
	// lwz r5,664(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 664);
	// bl 0x82472fc0
	ctx.lr = 0x836813AC;
	sub_82472FC0(ctx, base);
	// lwz r7,244(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bge cr6,0x836813c0
	if (!cr6.lt) goto loc_836813C0;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
loc_836813C0:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836813C4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836813c4
	if (!cr6.eq) goto loc_836813C4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r15,116
	ctx.r3.s64 = ctx.r15.s64 + 116;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836813E8;
	sub_824208C8(ctx, base);
	// lwz r10,244(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836813fc
	if (cr6.lt) goto loc_836813FC;
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82416268
	ctx.lr = 0x836813FC;
	sub_82416268(ctx, base);
loc_836813FC:
	// stw r29,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r29.u32);
	// stw r30,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r30.u32);
	// stb r30,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r30.u8);
loc_83681408:
	// addi r6,r23,-84
	ctx.r6.s64 = ctx.r23.s64 + -84;
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r7,9
	ctx.r7.s64 = 9;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x827a8810
	ctx.lr = 0x83681420;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83681a64
	if (!cr6.eq) goto loc_83681A64;
	// addi r27,r15,152
	ctx.r27.s64 = ctx.r15.s64 + 152;
	// stw r20,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r20.u32);
	// stw r18,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, ctx.r18.u32);
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// addi r26,r27,8
	ctx.r26.s64 = ctx.r27.s64 + 8;
	// stw r27,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r27.u32);
	// addi r25,r27,4
	ctx.r25.s64 = ctx.r27.s64 + 4;
	// stw r19,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r19.u32);
	// stw r26,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r26.u32);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// stw r25,392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 392, ctx.r25.u32);
	// bl 0x8247b7d8
	ctx.lr = 0x83681458;
	sub_8247B7D8(ctx, base);
	// lwz r3,160(r15)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r15.u32 + 160);
	// stw r30,152(r15)
	PPC_STORE_U32(ctx.r15.u32 + 152, ctx.r30.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83681478
	if (cr6.eq) goto loc_83681478;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// bl 0x8247b268
	ctx.lr = 0x83681470;
	sub_8247B268(ctx, base);
	// stw r30,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r30.u32);
	// stw r30,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r30.u32);
loc_83681478:
	// stw r17,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r17.u32);
	// lwz r11,28(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 28);
	// lwz r10,24(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 24);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x83681a64
	if (!cr6.lt) goto loc_83681A64;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r24,r11,12
	ctx.r24.s64 = ctx.r11.s64 + 12;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// addi r22,r11,1
	ctx.r22.s64 = ctx.r11.s64 + 1;
loc_836814A8:
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// bl 0x83680a90
	ctx.lr = 0x836814B0;
	sub_83680A90(ctx, base);
	// stw r30,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, ctx.r30.u32);
	// stw r30,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// lwz r4,0(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r5,-4(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + -4);
	// bl 0x83691bb8
	ctx.lr = 0x836814CC;
	sub_83691BB8(ctx, base);
	// lwz r10,488(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 488);
	// lwz r11,492(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 492);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x836819b0
	if (!cr6.lt) goto loc_836819B0;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r28,r11,1
	ctx.r28.s64 = ctx.r11.s64 + 1;
loc_836814F8:
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// addi r11,r1,592
	ctx.r11.s64 = ctx.r1.s64 + 592;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
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
	// lwz r5,600(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 600);
	// lwz r4,604(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 604);
	// bl 0x82472fc0
	ctx.lr = 0x8368152C;
	sub_82472FC0(ctx, base);
	// addi r6,r23,-72
	ctx.r6.s64 = ctx.r23.s64 + -72;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x83681544;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83681580
	if (!cr6.eq) goto loc_83681580;
	// ld r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// addi r10,r1,720
	ctx.r10.s64 = ctx.r1.s64 + 720;
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// lwz r8,720(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 720);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x83681578
	if (!cr6.eq) goto loc_83681578;
	// ld r11,728(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 728);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x8368157c
	goto loc_8368157C;
loc_83681578:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8368157C:
	// stw r11,736(r1)
	PPC_STORE_U32(ctx.r1.u32 + 736, ctx.r11.u32);
loc_83681580:
	// addi r6,r23,-64
	ctx.r6.s64 = ctx.r23.s64 + -64;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x83681598;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836815d4
	if (!cr6.eq) goto loc_836815D4;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,624
	ctx.r10.s64 = ctx.r1.s64 + 624;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,624(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 624);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x836815cc
	if (!cr6.eq) goto loc_836815CC;
	// ld r11,632(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 632);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836815d0
	goto loc_836815D0;
loc_836815CC:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_836815D0:
	// stw r11,740(r1)
	PPC_STORE_U32(ctx.r1.u32 + 740, ctx.r11.u32);
loc_836815D4:
	// addi r6,r23,-60
	ctx.r6.s64 = ctx.r23.s64 + -60;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836815EC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83681680
	if (!cr6.eq) goto loc_83681680;
	// stw r29,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r29.u32);
	// addi r11,r1,528
	ctx.r11.s64 = ctx.r1.s64 + 528;
	// stw r30,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r30.u32);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// stb r30,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r30.u8);
	// ld r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// lwz r5,536(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 536);
	// lwz r4,540(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 540);
	// bl 0x82472fc0
	ctx.lr = 0x83681624;
	sub_82472FC0(ctx, base);
	// lwz r8,308(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// lwz r4,288(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x83681638
	if (!cr6.lt) goto loc_83681638;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
loc_83681638:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8368163C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8368163c
	if (!cr6.eq) goto loc_8368163C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,744
	ctx.r3.s64 = ctx.r1.s64 + 744;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x83681660;
	sub_824208C8(ctx, base);
	// lwz r10,308(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83681674
	if (cr6.lt) goto loc_83681674;
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82416268
	ctx.lr = 0x83681674;
	sub_82416268(ctx, base);
loc_83681674:
	// stw r29,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r29.u32);
	// stw r30,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r30.u32);
	// stb r30,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r30.u8);
loc_83681680:
	// addi r6,r23,-52
	ctx.r6.s64 = ctx.r23.s64 + -52;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x83681698;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8368172c
	if (!cr6.eq) goto loc_8368172C;
	// stw r29,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r29.u32);
	// addi r11,r1,544
	ctx.r11.s64 = ctx.r1.s64 + 544;
	// stw r30,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r30.u32);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// stb r30,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r30.u8);
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,552(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 552);
	// lwz r4,556(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 556);
	// bl 0x82472fc0
	ctx.lr = 0x836816D0;
	sub_82472FC0(ctx, base);
	// lwz r8,372(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r4,352(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x836816e4
	if (!cr6.lt) goto loc_836816E4;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
loc_836816E4:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836816E8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836816e8
	if (!cr6.eq) goto loc_836816E8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,772
	ctx.r3.s64 = ctx.r1.s64 + 772;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x8368170C;
	sub_824208C8(ctx, base);
	// lwz r10,372(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83681720
	if (cr6.lt) goto loc_83681720;
	// lwz r3,352(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// bl 0x82416268
	ctx.lr = 0x83681720;
	sub_82416268(ctx, base);
loc_83681720:
	// stw r29,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r29.u32);
	// stw r30,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r30.u32);
	// stb r30,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r30.u8);
loc_8368172C:
	// addi r6,r23,-44
	ctx.r6.s64 = ctx.r23.s64 + -44;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x83681744;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836817d8
	if (!cr6.eq) goto loc_836817D8;
	// stw r29,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r29.u32);
	// addi r11,r1,576
	ctx.r11.s64 = ctx.r1.s64 + 576;
	// stw r30,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r30.u32);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// stb r30,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r30.u8);
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,584(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 584);
	// lwz r4,588(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 588);
	// bl 0x82472fc0
	ctx.lr = 0x8368177C;
	sub_82472FC0(ctx, base);
	// lwz r8,340(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r4,320(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x83681790
	if (!cr6.lt) goto loc_83681790;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
loc_83681790:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83681794:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83681794
	if (!cr6.eq) goto loc_83681794;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,800
	ctx.r3.s64 = ctx.r1.s64 + 800;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836817B8;
	sub_824208C8(ctx, base);
	// lwz r10,340(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836817cc
	if (cr6.lt) goto loc_836817CC;
	// lwz r3,320(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x82416268
	ctx.lr = 0x836817CC;
	sub_82416268(ctx, base);
loc_836817CC:
	// stw r29,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r29.u32);
	// stw r30,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r30.u32);
	// stb r30,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r30.u8);
loc_836817D8:
	// addi r6,r23,-36
	ctx.r6.s64 = ctx.r23.s64 + -36;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,10
	ctx.r7.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836817F0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83681884
	if (!cr6.eq) goto loc_83681884;
	// stw r29,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r29.u32);
	// addi r11,r1,608
	ctx.r11.s64 = ctx.r1.s64 + 608;
	// stw r30,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r30.u32);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// stb r30,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r30.u8);
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,616(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 616);
	// lwz r4,620(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 620);
	// bl 0x82472fc0
	ctx.lr = 0x83681828;
	sub_82472FC0(ctx, base);
	// lwz r8,276(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r4,256(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x8368183c
	if (!cr6.lt) goto loc_8368183C;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
loc_8368183C:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83681840:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83681840
	if (!cr6.eq) goto loc_83681840;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,828
	ctx.r3.s64 = ctx.r1.s64 + 828;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x83681864;
	sub_824208C8(ctx, base);
	// lwz r10,276(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83681878
	if (cr6.lt) goto loc_83681878;
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x82416268
	ctx.lr = 0x83681878;
	sub_82416268(ctx, base);
loc_83681878:
	// stw r29,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r29.u32);
	// stw r30,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r30.u32);
	// stb r30,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r30.u8);
loc_83681884:
	// addi r6,r23,-24
	ctx.r6.s64 = ctx.r23.s64 + -24;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,10
	ctx.r7.s64 = 10;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8368189C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836818d8
	if (!cr6.eq) goto loc_836818D8;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r10,r1,640
	ctx.r10.s64 = ctx.r1.s64 + 640;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,640(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 640);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x836818d0
	if (!cr6.eq) goto loc_836818D0;
	// ld r11,648(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 648);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836818d4
	goto loc_836818D4;
loc_836818D0:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_836818D4:
	// stw r11,856(r1)
	PPC_STORE_U32(ctx.r1.u32 + 856, ctx.r11.u32);
loc_836818D8:
	// addi r6,r23,-12
	ctx.r6.s64 = ctx.r23.s64 + -12;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836818F0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83681984
	if (!cr6.eq) goto loc_83681984;
	// stw r29,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r29.u32);
	// addi r11,r1,512
	ctx.r11.s64 = ctx.r1.s64 + 512;
	// stw r30,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r30.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stb r30,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r30.u8);
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,520(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 520);
	// lwz r4,524(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 524);
	// bl 0x82472fc0
	ctx.lr = 0x83681928;
	sub_82472FC0(ctx, base);
	// lwz r8,180(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x8368193c
	if (!cr6.lt) goto loc_8368193C;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
loc_8368193C:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83681940:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83681940
	if (!cr6.eq) goto loc_83681940;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,860
	ctx.r3.s64 = ctx.r1.s64 + 860;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x83681964;
	sub_824208C8(ctx, base);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83681978
	if (cr6.lt) goto loc_83681978;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x83681978;
	sub_82416268(ctx, base);
loc_83681978:
	// stw r29,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r29.u32);
	// stw r30,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r30.u32);
	// stb r30,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r30.u8);
loc_83681984:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83681998
	if (cr6.lt) goto loc_83681998;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82416268
	ctx.lr = 0x83681998;
	sub_82416268(ctx, base);
loc_83681998:
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// bne 0x836814f8
	if (!cr0.eq) goto loc_836814F8;
loc_836819B0:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x83681a0c
	if (cr6.lt) goto loc_83681A0C;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x836819fc
	if (!cr6.gt) goto loc_836819FC;
	// stw r26,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r26.u32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// stw r27,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r27.u32);
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// stw r25,424(r1)
	PPC_STORE_U32(ctx.r1.u32 + 424, ctx.r25.u32);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// stw r18,428(r1)
	PPC_STORE_U32(ctx.r1.u32 + 428, ctx.r18.u32);
	// stw r19,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r19.u32);
	// stw r20,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r20.u32);
	// bl 0x8247b270
	ctx.lr = 0x836819F4;
	sub_8247B270(ctx, base);
	// stw r17,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r17.u32);
	// b 0x83681a00
	goto loc_83681A00;
loc_836819FC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83681A00:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83681a34
	if (cr6.eq) goto loc_83681A34;
loc_83681A0C:
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mulli r10,r10,152
	ctx.r10.s64 = ctx.r10.s64 * 152;
	// add. r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x83681a28
	if (cr0.eq) goto loc_83681A28;
	// addi r4,r1,736
	ctx.r4.s64 = ctx.r1.s64 + 736;
	// bl 0x836808e0
	ctx.lr = 0x83681A28;
	sub_836808E0(ctx, base);
loc_83681A28:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_83681A34:
	// lwz r31,496(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 496);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83681a50
	if (cr6.eq) goto loc_83681A50;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x83681A48;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x83681A50;
	sub_82416268(ctx, base);
loc_83681A50:
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// bl 0x83680808
	ctx.lr = 0x83681A58;
	sub_83680808(ctx, base);
	// addic. r22,r22,-1
	xer.ca = ctx.r22.u32 > 0;
	ctx.r22.s64 = ctx.r22.s64 + -1;
	cr0.compare<int32_t>(ctx.r22.s32, 0, xer);
	// addi r24,r24,16
	ctx.r24.s64 = ctx.r24.s64 + 16;
	// bne 0x836814a8
	if (!cr0.eq) goto loc_836814A8;
loc_83681A64:
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r7,13
	ctx.r7.s64 = 13;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x827a8810
	ctx.lr = 0x83681A7C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83681abc
	if (!cr6.eq) goto loc_83681ABC;
	// ld r11,16(r21)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r21.u32 + 16);
	// addi r10,r1,704
	ctx.r10.s64 = ctx.r1.s64 + 704;
	// ld r9,24(r21)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r21.u32 + 24);
	// addi r8,r21,16
	ctx.r8.s64 = ctx.r21.s64 + 16;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r7,704(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 704);
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// bne cr6,0x83681ab4
	if (!cr6.eq) goto loc_83681AB4;
	// ld r11,712(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 712);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83681ab8
	goto loc_83681AB8;
loc_83681AB4:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_83681AB8:
	// stw r11,168(r15)
	PPC_STORE_U32(ctx.r15.u32 + 168, ctx.r11.u32);
loc_83681ABC:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83681ad0
	if (cr6.lt) goto loc_83681AD0;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x83681AD0;
	sub_82416268(ctx, base);
loc_83681AD0:
	// addi r21,r21,32
	ctx.r21.s64 = ctx.r21.s64 + 32;
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// cmplw cr6,r21,r14
	cr6.compare<uint32_t>(ctx.r21.u32, ctx.r14.u32, xer);
	// stb r30,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r30.u8);
	// blt cr6,0x83681220
	if (cr6.lt) goto loc_83681220;
loc_83681AE8:
	// lwz r31,464(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 464);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83681b04
	if (cr6.eq) goto loc_83681B04;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x83681AFC;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x83681B04;
	sub_82416268(ctx, base);
loc_83681B04:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1040
	ctx.r1.s64 = ctx.r1.s64 + 1040;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83681B10"))) PPC_WEAK_FUNC(sub_83681B10);
PPC_FUNC_IMPL(__imp__sub_83681B10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83681B18;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d95768
	ctx.lr = 0x83681B24;
	sub_82D95768(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r29,r11,-26272
	ctx.r29.s64 = ctx.r11.s64 + -26272;
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824208c8
	ctx.lr = 0x83681B3C;
	sub_824208C8(ctx, base);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// addi r7,r10,-25832
	ctx.r7.s64 = ctx.r10.s64 + -25832;
	// addi r5,r8,-25848
	ctx.r5.s64 = ctx.r8.s64 + -25848;
	// addi r6,r9,-25844
	ctx.r6.s64 = ctx.r9.s64 + -25844;
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
	ctx.lr = 0x83681B84;
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
	ctx.lr = 0x83681BA0;
	sub_824208C8(ctx, base);
	// stw r30,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r30.u32);
	// stw r28,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r28.u32);
	// addi r3,r31,376
	ctx.r3.s64 = ctx.r31.s64 + 376;
	// stw r30,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r30.u32);
	// addi r4,r29,60
	ctx.r4.s64 = ctx.r29.s64 + 60;
	// stb r30,376(r31)
	PPC_STORE_U8(ctx.r31.u32 + 376, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x83681BC0;
	sub_824208C8(ctx, base);
	// stw r28,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r28.u32);
	// stw r30,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r30.u32);
	// addi r3,r31,404
	ctx.r3.s64 = ctx.r31.s64 + 404;
	// stb r30,404(r31)
	PPC_STORE_U8(ctx.r31.u32 + 404, ctx.r30.u8);
	// addi r4,r29,76
	ctx.r4.s64 = ctx.r29.s64 + 76;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x83681BDC;
	sub_824208C8(ctx, base);
	// stw r28,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r28.u32);
	// stw r30,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r30.u32);
	// addi r3,r31,432
	ctx.r3.s64 = ctx.r31.s64 + 432;
	// stb r30,432(r31)
	PPC_STORE_U8(ctx.r31.u32 + 432, ctx.r30.u8);
	// addi r4,r29,92
	ctx.r4.s64 = ctx.r29.s64 + 92;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x83681BF8;
	sub_824208C8(ctx, base);
	// stw r28,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r28.u32);
	// stw r30,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r30.u32);
	// addi r3,r31,460
	ctx.r3.s64 = ctx.r31.s64 + 460;
	// stb r30,460(r31)
	PPC_STORE_U8(ctx.r31.u32 + 460, ctx.r30.u8);
	// addi r4,r29,108
	ctx.r4.s64 = ctx.r29.s64 + 108;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x83681C14;
	sub_824208C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83681C20"))) PPC_WEAK_FUNC(sub_83681C20);
PPC_FUNC_IMPL(__imp__sub_83681C20) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x83681d58
	sub_83681D58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83681C28"))) PPC_WEAK_FUNC(sub_83681C28);
PPC_FUNC_IMPL(__imp__sub_83681C28) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x83681d58
	sub_83681D58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83681C30"))) PPC_WEAK_FUNC(sub_83681C30);
PPC_FUNC_IMPL(__imp__sub_83681C30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83681C38;
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
	// addi r8,r11,-25832
	ctx.r8.s64 = ctx.r11.s64 + -25832;
	// addi r7,r10,-25844
	ctx.r7.s64 = ctx.r10.s64 + -25844;
	// addi r6,r9,-25848
	ctx.r6.s64 = ctx.r9.s64 + -25848;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r6,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r6.u32);
	// addi r29,r3,460
	ctx.r29.s64 = ctx.r3.s64 + 460;
	// lwz r5,480(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 480);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x83681c7c
	if (cr6.lt) goto loc_83681C7C;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83681C7C;
	sub_8386D088(ctx, base);
loc_83681C7C:
	// li r31,0
	ctx.r31.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// addi r28,r30,432
	ctx.r28.s64 = ctx.r30.s64 + 432;
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// lwz r11,452(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 452);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83681ca8
	if (cr6.lt) goto loc_83681CA8;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83681CA8;
	sub_8386D088(ctx, base);
loc_83681CA8:
	// stw r27,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r27.u32);
	// addi r29,r30,404
	ctx.r29.s64 = ctx.r30.s64 + 404;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// lwz r11,424(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 424);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83681ccc
	if (cr6.lt) goto loc_83681CCC;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83681CCC;
	sub_8386D088(ctx, base);
loc_83681CCC:
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// addi r28,r30,376
	ctx.r28.s64 = ctx.r30.s64 + 376;
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// lwz r11,396(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 396);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83681cf0
	if (cr6.lt) goto loc_83681CF0;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83681CF0;
	sub_8386D088(ctx, base);
loc_83681CF0:
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
	// blt cr6,0x83681d14
	if (cr6.lt) goto loc_83681D14;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83681D14;
	sub_8386D088(ctx, base);
loc_83681D14:
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
	// blt cr6,0x83681d38
	if (cr6.lt) goto loc_83681D38;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83681D38;
	sub_8386D088(ctx, base);
loc_83681D38:
	// stw r27,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// bl 0x82b6a590
	ctx.lr = 0x83681D4C;
	sub_82B6A590(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83681D54"))) PPC_WEAK_FUNC(sub_83681D54);
PPC_FUNC_IMPL(__imp__sub_83681D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83681D58"))) PPC_WEAK_FUNC(sub_83681D58);
PPC_FUNC_IMPL(__imp__sub_83681D58) {
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
	// bl 0x83681c30
	ctx.lr = 0x83681D78;
	sub_83681C30(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83681d98
	if (cr6.eq) goto loc_83681D98;
	// bl 0x82595188
	ctx.lr = 0x83681D88;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x83681D98;
	sub_825952B8(ctx, base);
loc_83681D98:
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

__attribute__((alias("__imp__sub_83681DB4"))) PPC_WEAK_FUNC(sub_83681DB4);
PPC_FUNC_IMPL(__imp__sub_83681DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83681DB8"))) PPC_WEAK_FUNC(sub_83681DB8);
PPC_FUNC_IMPL(__imp__sub_83681DB8) {
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
	ctx.lr = 0x83681DD4;
	sub_82EAF8D8(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r4,r11,-26272
	ctx.r4.s64 = ctx.r11.s64 + -26272;
	// li r5,24
	ctx.r5.s64 = 24;
	// bl 0x824208c8
	ctx.lr = 0x83681DE8;
	sub_824208C8(ctx, base);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// lis r7,-32216
	ctx.r7.s64 = -2111307776;
	// addi r4,r8,-25812
	ctx.r4.s64 = ctx.r8.s64 + -25812;
	// addi r3,r7,-25816
	ctx.r3.s64 = ctx.r7.s64 + -25816;
	// addi r6,r10,-25796
	ctx.r6.s64 = ctx.r10.s64 + -25796;
	// stw r4,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r4.u32);
	// addi r5,r9,-25808
	ctx.r5.s64 = ctx.r9.s64 + -25808;
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
	// li r4,30
	ctx.r4.s64 = 30;
	// stw r30,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r30.u32);
	// std r30,360(r31)
	PPC_STORE_U64(ctx.r31.u32 + 360, ctx.r30.u64);
	// bl 0x83680708
	ctx.lr = 0x83681E34;
	sub_83680708(ctx, base);
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

__attribute__((alias("__imp__sub_83681E54"))) PPC_WEAK_FUNC(sub_83681E54);
PPC_FUNC_IMPL(__imp__sub_83681E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83681E58"))) PPC_WEAK_FUNC(sub_83681E58);
PPC_FUNC_IMPL(__imp__sub_83681E58) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x83681e70
	sub_83681E70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83681E60"))) PPC_WEAK_FUNC(sub_83681E60);
PPC_FUNC_IMPL(__imp__sub_83681E60) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x83681e70
	sub_83681E70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83681E68"))) PPC_WEAK_FUNC(sub_83681E68);
PPC_FUNC_IMPL(__imp__sub_83681E68) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-312
	ctx.r3.s64 = ctx.r3.s64 + -312;
	// b 0x83681e70
	sub_83681E70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83681E70"))) PPC_WEAK_FUNC(sub_83681E70);
PPC_FUNC_IMPL(__imp__sub_83681E70) {
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
	// addi r7,r11,-25796
	ctx.r7.s64 = ctx.r11.s64 + -25796;
	// addi r6,r10,-25808
	ctx.r6.s64 = ctx.r10.s64 + -25808;
	// addi r5,r9,-25812
	ctx.r5.s64 = ctx.r9.s64 + -25812;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r8,-25816
	ctx.r4.s64 = ctx.r8.s64 + -25816;
	// stw r6,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r6.u32);
	// stw r5,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r5.u32);
	// addi r3,r3,352
	ctx.r3.s64 = ctx.r3.s64 + 352;
	// stw r4,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r4.u32);
	// bl 0x83680788
	ctx.lr = 0x83681EC4;
	sub_83680788(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eaf978
	ctx.lr = 0x83681ECC;
	sub_82EAF978(ctx, base);
	// clrlwi r3,r30,31
	ctx.r3.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83681eec
	if (cr6.eq) goto loc_83681EEC;
	// bl 0x82595188
	ctx.lr = 0x83681EDC;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x83681EEC;
	sub_825952B8(ctx, base);
loc_83681EEC:
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

__attribute__((alias("__imp__sub_83681F08"))) PPC_WEAK_FUNC(sub_83681F08);
PPC_FUNC_IMPL(__imp__sub_83681F08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83681F10;
	__savegprlr_27(ctx, base);
	// stwu r1,-592(r1)
	ea = -592 + ctx.r1.u32;
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
	// li r10,136
	ctx.r10.s64 = 136;
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
	// bge cr6,0x83681f50
	if (!cr6.lt) goto loc_83681F50;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e745e0
	ctx.lr = 0x83681F50;
	sub_82E745E0(ctx, base);
loc_83681F50:
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
	// addi r27,r11,-25596
	ctx.r27.s64 = ctx.r11.s64 + -25596;
	// li r5,5
	ctx.r5.s64 = 5;
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r4,r27,-68
	ctx.r4.s64 = ctx.r27.s64 + -68;
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
	ctx.lr = 0x83681F98;
	sub_82472FC0(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83681FA4;
	sub_82E74C08(ctx, base);
	// lwz r5,308(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x83681fb8
	if (cr6.lt) goto loc_83681FB8;
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82416268
	ctx.lr = 0x83681FB8;
	sub_82416268(ctx, base);
loc_83681FB8:
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
	// blt cr6,0x83681fd8
	if (cr6.lt) goto loc_83681FD8;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83681FD8:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
loc_83681FE8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83681fe8
	if (!cr6.eq) goto loc_83681FE8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8368200C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83682018;
	sub_82E74C08(ctx, base);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8368202c
	if (cr6.lt) goto loc_8368202C;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x8368202C;
	sub_82416268(ctx, base);
loc_8368202C:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// addi r4,r27,-60
	ctx.r4.s64 = ctx.r27.s64 + -60;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// stw r30,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r30.u32);
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x83682054;
	sub_82472FC0(ctx, base);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83682060;
	sub_82E74C08(ctx, base);
	// lwz r11,372(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83682074
	if (cr6.lt) goto loc_83682074;
	// lwz r3,352(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// bl 0x82416268
	ctx.lr = 0x83682074;
	sub_82416268(ctx, base);
loc_83682074:
	// stw r30,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
	// lwz r4,48(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// bl 0x82e746c0
	ctx.lr = 0x8368208C;
	sub_82E746C0(ctx, base);
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// addi r4,r27,-52
	ctx.r4.s64 = ctx.r27.s64 + -52;
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82472fc0
	ctx.lr = 0x836820A8;
	sub_82472FC0(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836820B4;
	sub_82E74C08(ctx, base);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836820c8
	if (cr6.lt) goto loc_836820C8;
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82416268
	ctx.lr = 0x836820C8;
	sub_82416268(ctx, base);
loc_836820C8:
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
	// blt cr6,0x836820e8
	if (cr6.lt) goto loc_836820E8;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836820E8:
	// stw r30,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r31.u32);
	// stb r31,480(r1)
	PPC_STORE_U8(ctx.r1.u32 + 480, ctx.r31.u8);
loc_836820F8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836820f8
	if (!cr6.eq) goto loc_836820F8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8368211C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83682128;
	sub_82E74C08(ctx, base);
	// lwz r10,500(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 500);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8368213c
	if (cr6.lt) goto loc_8368213C;
	// lwz r3,480(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 480);
	// bl 0x82416268
	ctx.lr = 0x8368213C;
	sub_82416268(ctx, base);
loc_8368213C:
	// stw r30,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r30.u32);
	// addi r4,r27,-44
	ctx.r4.s64 = ctx.r27.s64 + -44;
	// stw r31,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r31.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stb r31,480(r1)
	PPC_STORE_U8(ctx.r1.u32 + 480, ctx.r31.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x83682164;
	sub_82472FC0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83682170;
	sub_82E74C08(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83682184
	if (cr6.lt) goto loc_83682184;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x83682184;
	sub_82416268(ctx, base);
loc_83682184:
	// lwz r11,164(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 164);
	// addi r4,r28,144
	ctx.r4.s64 = ctx.r28.s64 + 144;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// blt cr6,0x836821a4
	if (cr6.lt) goto loc_836821A4;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836821A4:
	// stw r30,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r31.u32);
	// stb r31,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r31.u8);
loc_836821B4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836821b4
	if (!cr6.eq) goto loc_836821B4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836821D8;
	sub_82472FC0(ctx, base);
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836821E4;
	sub_82E74C08(ctx, base);
	// lwz r10,436(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836821f8
	if (cr6.lt) goto loc_836821F8;
	// lwz r3,416(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// bl 0x82416268
	ctx.lr = 0x836821F8;
	sub_82416268(ctx, base);
loc_836821F8:
	// stw r30,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r30.u32);
	// addi r4,r27,-36
	ctx.r4.s64 = ctx.r27.s64 + -36;
	// stw r31,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r31.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// stb r31,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r31.u8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x83682220;
	sub_82472FC0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8368222C;
	sub_82E74C08(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83682240
	if (cr6.lt) goto loc_83682240;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x83682240;
	sub_82416268(ctx, base);
loc_83682240:
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// lwz r4,172(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 172);
	// bl 0x82e746c0
	ctx.lr = 0x83682258;
	sub_82E746C0(ctx, base);
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// addi r4,r27,-32
	ctx.r4.s64 = ctx.r27.s64 + -32;
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82472fc0
	ctx.lr = 0x83682274;
	sub_82472FC0(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83682280;
	sub_82E74C08(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83682294
	if (cr6.lt) goto loc_83682294;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82416268
	ctx.lr = 0x83682294;
	sub_82416268(ctx, base);
loc_83682294:
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// lwz r4,176(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 176);
	// bl 0x82e746c0
	ctx.lr = 0x836822AC;
	sub_82E746C0(ctx, base);
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// addi r4,r27,-12
	ctx.r4.s64 = ctx.r27.s64 + -12;
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82472fc0
	ctx.lr = 0x836822C8;
	sub_82472FC0(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836822D4;
	sub_82E74C08(ctx, base);
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836822e8
	if (cr6.lt) goto loc_836822E8;
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x82416268
	ctx.lr = 0x836822E8;
	sub_82416268(ctx, base);
loc_836822E8:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// lis r11,0
	ctx.r11.s64 = 0;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// addi r6,r1,512
	ctx.r6.s64 = ctx.r1.s64 + 512;
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// ori r10,r11,32948
	ctx.r10.u64 = ctx.r11.u64 | 32948;
	// stw r30,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r30.u32);
	// addi r4,r28,180
	ctx.r4.s64 = ctx.r28.s64 + 180;
	// stw r31,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r31.u32);
	// addi r3,r28,-200
	ctx.r3.s64 = ctx.r28.s64 + -200;
	// stb r31,512(r1)
	PPC_STORE_U8(ctx.r1.u32 + 512, ctx.r31.u8);
	// lwzx r5,r28,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// bl 0x83354d50
	ctx.lr = 0x8368231C;
	sub_83354D50(ctx, base);
	// lwz r9,532(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 532);
	// lwz r4,512(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 512);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// bge cr6,0x83682330
	if (!cr6.lt) goto loc_83682330;
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
loc_83682330:
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
loc_83682340:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83682340
	if (!cr6.eq) goto loc_83682340;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x83682364;
	sub_82472FC0(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83682370;
	sub_82E74C08(ctx, base);
	// lwz r10,340(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83682384
	if (cr6.lt) goto loc_83682384;
	// lwz r3,320(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x82416268
	ctx.lr = 0x83682384;
	sub_82416268(ctx, base);
loc_83682384:
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// li r5,10
	ctx.r5.s64 = 10;
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// stw r30,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r30.u32);
	// stw r31,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r31.u32);
	// stb r31,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836823AC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836823B8;
	sub_82E74C08(ctx, base);
	// lwz r11,404(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836823cc
	if (cr6.lt) goto loc_836823CC;
	// lwz r3,384(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// bl 0x82416268
	ctx.lr = 0x836823CC;
	sub_82416268(ctx, base);
loc_836823CC:
	// addis r4,r28,1
	ctx.r4.s64 = ctx.r28.s64 + 65536;
	// stw r30,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r30.u32);
	// stw r31,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r31.u32);
	// addi r4,r4,-32584
	ctx.r4.s64 = ctx.r4.s64 + -32584;
	// stb r31,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r31.u8);
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836823f0
	if (cr6.lt) goto loc_836823F0;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836823F0:
	// stw r30,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r31.u32);
	// stb r31,448(r1)
	PPC_STORE_U8(ctx.r1.u32 + 448, ctx.r31.u8);
loc_83682400:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83682400
	if (!cr6.eq) goto loc_83682400;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x83682424;
	sub_82472FC0(ctx, base);
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83682430;
	sub_82E74C08(ctx, base);
	// lwz r10,468(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83682444
	if (cr6.lt) goto loc_83682444;
	// lwz r3,448(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// bl 0x82416268
	ctx.lr = 0x83682444;
	sub_82416268(ctx, base);
loc_83682444:
	// lwz r11,532(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 532);
	// stw r30,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r30.u32);
	// stw r31,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,448(r1)
	PPC_STORE_U8(ctx.r1.u32 + 448, ctx.r31.u8);
	// blt cr6,0x83682464
	if (cr6.lt) goto loc_83682464;
	// lwz r3,512(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 512);
	// bl 0x8386d088
	ctx.lr = 0x83682464;
	sub_8386D088(ctx, base);
loc_83682464:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83682470"))) PPC_WEAK_FUNC(sub_83682470);
PPC_FUNC_IMPL(__imp__sub_83682470) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83682478;
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
	ctx.lr = 0x836824A0;
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
	// bge cr6,0x836826e4
	if (!cr6.lt) goto loc_836826E4;
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
	// addi r26,r11,-25568
	ctx.r26.s64 = ctx.r11.s64 + -25568;
loc_836824D8:
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
	ctx.lr = 0x8368250C;
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
	ctx.lr = 0x83682524;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836825b8
	if (!cr6.eq) goto loc_836825B8;
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
	ctx.lr = 0x8368255C;
	sub_82472FC0(ctx, base);
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x83682570
	if (!cr6.lt) goto loc_83682570;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
loc_83682570:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83682574:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83682574
	if (!cr6.eq) goto loc_83682574;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,20
	ctx.r3.s64 = ctx.r28.s64 + 20;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x83682598;
	sub_824208C8(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836825ac
	if (cr6.lt) goto loc_836825AC;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82416268
	ctx.lr = 0x836825AC;
	sub_82416268(ctx, base);
loc_836825AC:
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
loc_836825B8:
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
	ctx.lr = 0x836825D0;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8368260c
	if (!cr6.eq) goto loc_8368260C;
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
	// bne cr6,0x83682604
	if (!cr6.eq) goto loc_83682604;
	// ld r11,248(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 248);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83682608
	goto loc_83682608;
loc_83682604:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_83682608:
	// stw r11,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r11.u32);
loc_8368260C:
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
	ctx.lr = 0x83682624;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836826b8
	if (!cr6.eq) goto loc_836826B8;
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
	ctx.lr = 0x8368265C;
	sub_82472FC0(ctx, base);
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x83682670
	if (!cr6.lt) goto loc_83682670;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_83682670:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83682674:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83682674
	if (!cr6.eq) goto loc_83682674;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,116
	ctx.r3.s64 = ctx.r28.s64 + 116;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x83682698;
	sub_824208C8(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836826ac
	if (cr6.lt) goto loc_836826AC;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82416268
	ctx.lr = 0x836826AC;
	sub_82416268(ctx, base);
loc_836826AC:
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
loc_836826B8:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836826cc
	if (cr6.lt) goto loc_836826CC;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82416268
	ctx.lr = 0x836826CC;
	sub_82416268(ctx, base);
loc_836826CC:
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
	// bne 0x836824d8
	if (!cr0.eq) goto loc_836824D8;
loc_836826E4:
	// lwz r31,192(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83682700
	if (cr6.eq) goto loc_83682700;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x836826F8;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x83682700;
	sub_82416268(ctx, base);
loc_83682700:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368270C"))) PPC_WEAK_FUNC(sub_8368270C);
PPC_FUNC_IMPL(__imp__sub_8368270C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83682710"))) PPC_WEAK_FUNC(sub_83682710);
PPC_FUNC_IMPL(__imp__sub_83682710) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83682718;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d95768
	ctx.lr = 0x83682724;
	sub_82D95768(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r29,r11,-25728
	ctx.r29.s64 = ctx.r11.s64 + -25728;
	// li r5,14
	ctx.r5.s64 = 14;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824208c8
	ctx.lr = 0x8368273C;
	sub_824208C8(ctx, base);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// addi r7,r10,-25460
	ctx.r7.s64 = ctx.r10.s64 + -25460;
	// addi r5,r8,-25476
	ctx.r5.s64 = ctx.r8.s64 + -25476;
	// addi r6,r9,-25472
	ctx.r6.s64 = ctx.r9.s64 + -25472;
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
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x83682784;
	sub_824208C8(ctx, base);
	// stw r28,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r28.u32);
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// stb r30,344(r31)
	PPC_STORE_U8(ctx.r31.u32 + 344, ctx.r30.u8);
	// addi r4,r29,32
	ctx.r4.s64 = ctx.r29.s64 + 32;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836827A0;
	sub_824208C8(ctx, base);
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// stw r30,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r30.u32);
	// addi r4,r29,48
	ctx.r4.s64 = ctx.r29.s64 + 48;
	// addi r3,r3,-32384
	ctx.r3.s64 = ctx.r3.s64 + -32384;
	// stw r30,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r30.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stw r28,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r28.u32);
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// stb r30,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r30.u8);
	// bl 0x824208c8
	ctx.lr = 0x836827C8;
	sub_824208C8(ctx, base);
	// lis r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,380
	ctx.r3.s64 = ctx.r31.s64 + 380;
	// ori r30,r4,32768
	ctx.r30.u64 = ctx.r4.u64 | 32768;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x836827E0;
	sub_831CDCF0(ctx, base);
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r11,r3,33148
	ctx.r11.u64 = ctx.r3.u64 | 33148;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r30,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836827F8"))) PPC_WEAK_FUNC(sub_836827F8);
PPC_FUNC_IMPL(__imp__sub_836827F8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x836828c8
	sub_836828C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83682800"))) PPC_WEAK_FUNC(sub_83682800);
PPC_FUNC_IMPL(__imp__sub_83682800) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x836828c8
	sub_836828C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83682808"))) PPC_WEAK_FUNC(sub_83682808);
PPC_FUNC_IMPL(__imp__sub_83682808) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83682810;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r29,r3,1
	ctx.r29.s64 = ctx.r3.s64 + 65536;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// addi r29,r29,-32384
	ctx.r29.s64 = ctx.r29.s64 + -32384;
	// addi r8,r11,-25460
	ctx.r8.s64 = ctx.r11.s64 + -25460;
	// addi r7,r10,-25472
	ctx.r7.s64 = ctx.r10.s64 + -25472;
	// addi r6,r9,-25476
	ctx.r6.s64 = ctx.r9.s64 + -25476;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r6,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r6.u32);
	// lwz r5,20(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x83682858
	if (cr6.lt) goto loc_83682858;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83682858;
	sub_8386D088(ctx, base);
loc_83682858:
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
	// blt cr6,0x83682884
	if (cr6.lt) goto loc_83682884;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83682884;
	sub_8386D088(ctx, base);
loc_83682884:
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
	// blt cr6,0x836828a8
	if (cr6.lt) goto loc_836828A8;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836828A8;
	sub_8386D088(ctx, base);
loc_836828A8:
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// stb r30,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r30.u8);
	// bl 0x82b6a590
	ctx.lr = 0x836828BC;
	sub_82B6A590(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836828C4"))) PPC_WEAK_FUNC(sub_836828C4);
PPC_FUNC_IMPL(__imp__sub_836828C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836828C8"))) PPC_WEAK_FUNC(sub_836828C8);
PPC_FUNC_IMPL(__imp__sub_836828C8) {
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
	// bl 0x83682808
	ctx.lr = 0x836828E8;
	sub_83682808(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83682908
	if (cr6.eq) goto loc_83682908;
	// bl 0x82595188
	ctx.lr = 0x836828F8;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x83682908;
	sub_825952B8(ctx, base);
loc_83682908:
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

__attribute__((alias("__imp__sub_83682924"))) PPC_WEAK_FUNC(sub_83682924);
PPC_FUNC_IMPL(__imp__sub_83682924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83682928"))) PPC_WEAK_FUNC(sub_83682928);
PPC_FUNC_IMPL(__imp__sub_83682928) {
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
	ctx.lr = 0x83682940;
	sub_82EAF8D8(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r4,r11,-25728
	ctx.r4.s64 = ctx.r11.s64 + -25728;
	// li r5,14
	ctx.r5.s64 = 14;
	// bl 0x824208c8
	ctx.lr = 0x83682954;
	sub_824208C8(ctx, base);
	// lis r7,-32216
	ctx.r7.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// addi r3,r7,-25412
	ctx.r3.s64 = ctx.r7.s64 + -25412;
	// addi r6,r10,-25428
	ctx.r6.s64 = ctx.r10.s64 + -25428;
	// addi r5,r9,-25440
	ctx.r5.s64 = ctx.r9.s64 + -25440;
	// stw r3,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r3.u32);
	// addi r4,r8,-25444
	ctx.r4.s64 = ctx.r8.s64 + -25444;
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

__attribute__((alias("__imp__sub_8368299C"))) PPC_WEAK_FUNC(sub_8368299C);
PPC_FUNC_IMPL(__imp__sub_8368299C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836829A0"))) PPC_WEAK_FUNC(sub_836829A0);
PPC_FUNC_IMPL(__imp__sub_836829A0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x836829b8
	sub_836829B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836829A8"))) PPC_WEAK_FUNC(sub_836829A8);
PPC_FUNC_IMPL(__imp__sub_836829A8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x836829b8
	sub_836829B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836829B0"))) PPC_WEAK_FUNC(sub_836829B0);
PPC_FUNC_IMPL(__imp__sub_836829B0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-312
	ctx.r3.s64 = ctx.r3.s64 + -312;
	// b 0x836829b8
	sub_836829B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836829B8"))) PPC_WEAK_FUNC(sub_836829B8);
PPC_FUNC_IMPL(__imp__sub_836829B8) {
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
	// addi r7,r11,-25428
	ctx.r7.s64 = ctx.r11.s64 + -25428;
	// addi r6,r10,-25440
	ctx.r6.s64 = ctx.r10.s64 + -25440;
	// addi r5,r9,-25444
	ctx.r5.s64 = ctx.r9.s64 + -25444;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r8,-25412
	ctx.r4.s64 = ctx.r8.s64 + -25412;
	// stw r6,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r6.u32);
	// stw r5,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r4.u32);
	// bl 0x82eaf978
	ctx.lr = 0x83682A08;
	sub_82EAF978(ctx, base);
	// clrlwi r3,r30,31
	ctx.r3.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83682a28
	if (cr6.eq) goto loc_83682A28;
	// bl 0x82595188
	ctx.lr = 0x83682A18;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x83682A28;
	sub_825952B8(ctx, base);
loc_83682A28:
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

__attribute__((alias("__imp__sub_83682A44"))) PPC_WEAK_FUNC(sub_83682A44);
PPC_FUNC_IMPL(__imp__sub_83682A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83682A48"))) PPC_WEAK_FUNC(sub_83682A48);
PPC_FUNC_IMPL(__imp__sub_83682A48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83682A50;
	__savegprlr_27(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
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
	// li r10,134
	ctx.r10.s64 = 134;
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
	// bge cr6,0x83682a90
	if (!cr6.lt) goto loc_83682A90;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e745e0
	ctx.lr = 0x83682A90;
	sub_82E745E0(ctx, base);
loc_83682A90:
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
	// addi r27,r11,-25260
	ctx.r27.s64 = ctx.r11.s64 + -25260;
	// li r5,5
	ctx.r5.s64 = 5;
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// addi r4,r27,-36
	ctx.r4.s64 = ctx.r27.s64 + -36;
	// stbx r7,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u8);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r6.u32);
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x83682AD8;
	sub_82472FC0(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83682AE4;
	sub_82E74C08(ctx, base);
	// lwz r5,340(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x83682af8
	if (cr6.lt) goto loc_83682AF8;
	// lwz r3,320(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x82416268
	ctx.lr = 0x83682AF8;
	sub_82416268(ctx, base);
loc_83682AF8:
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// addi r4,r28,20
	ctx.r4.s64 = ctx.r28.s64 + 20;
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// blt cr6,0x83682b18
	if (cr6.lt) goto loc_83682B18;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83682B18:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
loc_83682B28:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83682b28
	if (!cr6.eq) goto loc_83682B28;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x83682B4C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83682B58;
	sub_82E74C08(ctx, base);
	// lwz r10,276(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83682b6c
	if (cr6.lt) goto loc_83682B6C;
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x82416268
	ctx.lr = 0x83682B6C;
	sub_82416268(ctx, base);
loc_83682B6C:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// addi r4,r27,-28
	ctx.r4.s64 = ctx.r27.s64 + -28;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x83682B94;
	sub_82472FC0(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83682BA0;
	sub_82E74C08(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83682bb4
	if (cr6.lt) goto loc_83682BB4;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82416268
	ctx.lr = 0x83682BB4;
	sub_82416268(ctx, base);
loc_83682BB4:
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// lwz r4,48(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// bl 0x82e746c0
	ctx.lr = 0x83682BCC;
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
	ctx.lr = 0x83682BE8;
	sub_82472FC0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83682BF4;
	sub_82E74C08(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83682c08
	if (cr6.lt) goto loc_83682C08;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x83682C08;
	sub_82416268(ctx, base);
loc_83682C08:
	// lwz r11,136(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 136);
	// addi r4,r28,116
	ctx.r4.s64 = ctx.r28.s64 + 116;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// blt cr6,0x83682c28
	if (cr6.lt) goto loc_83682C28;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83682C28:
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
loc_83682C38:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83682c38
	if (!cr6.eq) goto loc_83682C38;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x83682C5C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83682C68;
	sub_82E74C08(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83682c7c
	if (cr6.lt) goto loc_83682C7C;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x83682C7C;
	sub_82416268(ctx, base);
loc_83682C7C:
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// addi r4,r27,-12
	ctx.r4.s64 = ctx.r27.s64 + -12;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x83682CA4;
	sub_82472FC0(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83682CB0;
	sub_82E74C08(ctx, base);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83682cc4
	if (cr6.lt) goto loc_83682CC4;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x83682CC4;
	sub_82416268(ctx, base);
loc_83682CC4:
	// lwz r11,164(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 164);
	// addi r4,r28,144
	ctx.r4.s64 = ctx.r28.s64 + 144;
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// blt cr6,0x83682ce4
	if (cr6.lt) goto loc_83682CE4;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83682CE4:
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
loc_83682CF4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83682cf4
	if (!cr6.eq) goto loc_83682CF4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x83682D18;
	sub_82472FC0(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83682D24;
	sub_82E74C08(ctx, base);
	// lwz r10,244(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83682d38
	if (cr6.lt) goto loc_83682D38;
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82416268
	ctx.lr = 0x83682D38;
	sub_82416268(ctx, base);
loc_83682D38:
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// addi r4,r27,-4
	ctx.r4.s64 = ctx.r27.s64 + -4;
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x83682D60;
	sub_82472FC0(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83682D6C;
	sub_82E74C08(ctx, base);
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83682d80
	if (cr6.lt) goto loc_83682D80;
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82416268
	ctx.lr = 0x83682D80;
	sub_82416268(ctx, base);
loc_83682D80:
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// lwz r4,172(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 172);
	// bl 0x82e746c0
	ctx.lr = 0x83682D98;
	sub_82E746C0(ctx, base);
	// stw r30,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r30.u32);
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82472fc0
	ctx.lr = 0x83682DB4;
	sub_82472FC0(ctx, base);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83682DC0;
	sub_82E74C08(ctx, base);
	// lwz r11,372(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83682dd4
	if (cr6.lt) goto loc_83682DD4;
	// lwz r3,352(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// bl 0x82416268
	ctx.lr = 0x83682DD4;
	sub_82416268(ctx, base);
loc_83682DD4:
	// stw r30,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
	// lwz r4,176(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 176);
	// bl 0x82e746c0
	ctx.lr = 0x83682DEC;
	sub_82E746C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83682DF8"))) PPC_WEAK_FUNC(sub_83682DF8);
PPC_FUNC_IMPL(__imp__sub_83682DF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x83682E00;
	__savegprlr_19(ctx, base);
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r31.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x83691bb8
	ctx.lr = 0x83682E28;
	sub_83691BB8(ctx, base);
	// lwz r10,296(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	// lwz r11,300(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x8368323c
	if (!cr6.lt) goto loc_8368323C;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r26,r11,16
	ctx.r26.s64 = ctx.r11.s64 + 16;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// addi r19,r11,1
	ctx.r19.s64 = ctx.r11.s64 + 1;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// li r27,15
	ctx.r27.s64 = 15;
	// li r21,8
	ctx.r21.s64 = 8;
	// li r22,28
	ctx.r22.s64 = 28;
	// addi r23,r11,-25216
	ctx.r23.s64 = ctx.r11.s64 + -25216;
	// addi r20,r10,8980
	ctx.r20.s64 = ctx.r10.s64 + 8980;
	// addi r24,r9,27920
	ctx.r24.s64 = ctx.r9.s64 + 27920;
loc_83682E78:
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// addi r11,r1,336
	ctx.r11.s64 = ctx.r1.s64 + 336;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// addi r10,r26,-16
	ctx.r10.s64 = ctx.r26.s64 + -16;
	// ld r9,-8(r26)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r26.u32 + -8);
	// ld r8,-16(r26)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r26.u32 + -16);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,344(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	// lwz r4,348(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// bl 0x82472fc0
	ctx.lr = 0x83682EAC;
	sub_82472FC0(ctx, base);
	// addi r6,r23,-36
	ctx.r6.s64 = ctx.r23.s64 + -36;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x83682EC4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83682f58
	if (!cr6.eq) goto loc_83682F58;
	// stw r27,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r27.u32);
	// addi r11,r1,368
	ctx.r11.s64 = ctx.r1.s64 + 368;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// ld r9,8(r26)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r26.u32 + 8);
	// ld r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r26.u32 + 0);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,376(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 376);
	// lwz r4,380(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// bl 0x82472fc0
	ctx.lr = 0x83682EFC;
	sub_82472FC0(ctx, base);
	// lwz r8,212(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x83682f10
	if (!cr6.lt) goto loc_83682F10;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
loc_83682F10:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83682F14:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83682f14
	if (!cr6.eq) goto loc_83682F14;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r25,20
	ctx.r3.s64 = ctx.r25.s64 + 20;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x83682F38;
	sub_824208C8(ctx, base);
	// lwz r10,212(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83682f4c
	if (cr6.lt) goto loc_83682F4C;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82416268
	ctx.lr = 0x83682F4C;
	sub_82416268(ctx, base);
loc_83682F4C:
	// stw r27,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r27.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
loc_83682F58:
	// addi r6,r23,-28
	ctx.r6.s64 = ctx.r23.s64 + -28;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x83682F70;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83682fac
	if (!cr6.eq) goto loc_83682FAC;
	// ld r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r26.u32 + 8);
	// addi r10,r1,400
	ctx.r10.s64 = ctx.r1.s64 + 400;
	// ld r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r26.u32 + 0);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// lwz r8,400(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x83682fa4
	if (!cr6.eq) goto loc_83682FA4;
	// ld r11,408(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 408);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83682fa8
	goto loc_83682FA8;
loc_83682FA4:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_83682FA8:
	// stw r11,48(r25)
	PPC_STORE_U32(ctx.r25.u32 + 48, ctx.r11.u32);
loc_83682FAC:
	// addi r6,r23,-20
	ctx.r6.s64 = ctx.r23.s64 + -20;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x83682FC4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83683058
	if (!cr6.eq) goto loc_83683058;
	// stw r27,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r27.u32);
	// addi r11,r1,352
	ctx.r11.s64 = ctx.r1.s64 + 352;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// ld r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r26.u32 + 8);
	// ld r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r26.u32 + 0);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// lwz r5,360(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 360);
	// lwz r4,364(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// bl 0x82472fc0
	ctx.lr = 0x83682FFC;
	sub_82472FC0(ctx, base);
	// lwz r8,180(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x83683010
	if (!cr6.lt) goto loc_83683010;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
loc_83683010:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83683014:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83683014
	if (!cr6.eq) goto loc_83683014;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r25,116
	ctx.r3.s64 = ctx.r25.s64 + 116;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x83683038;
	sub_824208C8(ctx, base);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8368304c
	if (cr6.lt) goto loc_8368304C;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x8368304C;
	sub_82416268(ctx, base);
loc_8368304C:
	// stw r27,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r27.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
loc_83683058:
	// addi r6,r23,-12
	ctx.r6.s64 = ctx.r23.s64 + -12;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,9
	ctx.r7.s64 = 9;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x83683070;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836830ac
	if (!cr6.eq) goto loc_836830AC;
	// ld r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r26.u32 + 0);
	// addi r10,r1,384
	ctx.r10.s64 = ctx.r1.s64 + 384;
	// ld r9,8(r26)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r26.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,384(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x836830a4
	if (!cr6.eq) goto loc_836830A4;
	// ld r11,392(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 392);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836830a8
	goto loc_836830A8;
loc_836830A4:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_836830A8:
	// stw r11,148(r25)
	PPC_STORE_U32(ctx.r25.u32 + 148, ctx.r11.u32);
loc_836830AC:
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,13
	ctx.r7.s64 = 13;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x836830C4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83683210
	if (!cr6.eq) goto loc_83683210;
	// addi r28,r25,152
	ctx.r28.s64 = ctx.r25.s64 + 152;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// stw r21,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r21.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r30,r28,8
	ctx.r30.s64 = ctx.r28.s64 + 8;
	// stw r28,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r28.u32);
	// addi r29,r28,4
	ctx.r29.s64 = ctx.r28.s64 + 4;
	// stw r22,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r22.u32);
	// stw r30,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r30.u32);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// stw r29,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r29.u32);
	// bl 0x8247b7d8
	ctx.lr = 0x836830FC;
	sub_8247B7D8(ctx, base);
	// lwz r3,160(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 160);
	// stw r31,152(r25)
	PPC_STORE_U32(ctx.r25.u32 + 152, ctx.r31.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83683120
	if (cr6.eq) goto loc_83683120;
	// lis r4,11
	ctx.r4.s64 = 720896;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x8247b268
	ctx.lr = 0x83683118;
	sub_8247B268(ctx, base);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
loc_83683120:
	// stw r20,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r20.u32);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// bge cr6,0x83683210
	if (!cr6.lt) goto loc_83683210;
loc_83683140:
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r27.u32);
	// addi r11,r1,320
	ctx.r11.s64 = ctx.r1.s64 + 320;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// ld r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// ld r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,328(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// lwz r4,332(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// bl 0x82472fc0
	ctx.lr = 0x83683170;
	sub_82472FC0(ctx, base);
	// lwz r8,148(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x83683184
	if (!cr6.lt) goto loc_83683184;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
loc_83683184:
	// stw r27,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r27.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
loc_83683194:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83683194
	if (!cr6.eq) goto loc_83683194;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836831B8;
	sub_824208C8(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d8ffa0
	ctx.lr = 0x836831C4;
	sub_82D8FFA0(ctx, base);
	// lwz r10,244(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836831d8
	if (cr6.lt) goto loc_836831D8;
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x8386d088
	ctx.lr = 0x836831D8;
	sub_8386D088(ctx, base);
loc_836831D8:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r27,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r27.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// blt cr6,0x836831f8
	if (cr6.lt) goto loc_836831F8;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x836831F8;
	sub_82416268(ctx, base);
loc_836831F8:
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r27.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// blt cr6,0x83683140
	if (cr6.lt) goto loc_83683140;
loc_83683210:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83683224
	if (cr6.lt) goto loc_83683224;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x83683224;
	sub_82416268(ctx, base);
loc_83683224:
	// addic. r19,r19,-1
	xer.ca = ctx.r19.u32 > 0;
	ctx.r19.s64 = ctx.r19.s64 + -1;
	cr0.compare<int32_t>(ctx.r19.s32, 0, xer);
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// addi r26,r26,32
	ctx.r26.s64 = ctx.r26.s64 + 32;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// bne 0x83682e78
	if (!cr0.eq) goto loc_83682E78;
loc_8368323C:
	// lwz r31,304(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83683258
	if (cr6.eq) goto loc_83683258;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x83683250;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x83683258;
	sub_82416268(ctx, base);
loc_83683258:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83683264"))) PPC_WEAK_FUNC(sub_83683264);
PPC_FUNC_IMPL(__imp__sub_83683264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83683268"))) PPC_WEAK_FUNC(sub_83683268);
PPC_FUNC_IMPL(__imp__sub_83683268) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83683270;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d95768
	ctx.lr = 0x8368327C;
	sub_82D95768(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r29,r11,-25360
	ctx.r29.s64 = ctx.r11.s64 + -25360;
	// li r5,30
	ctx.r5.s64 = 30;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824208c8
	ctx.lr = 0x83683294;
	sub_824208C8(ctx, base);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// addi r7,r10,-25100
	ctx.r7.s64 = ctx.r10.s64 + -25100;
	// addi r5,r8,-25116
	ctx.r5.s64 = ctx.r8.s64 + -25116;
	// addi r6,r9,-25112
	ctx.r6.s64 = ctx.r9.s64 + -25112;
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
	ctx.lr = 0x836832DC;
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
	ctx.lr = 0x836832F8;
	sub_824208C8(ctx, base);
	// stw r30,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r30.u32);
	// stw r30,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368330C"))) PPC_WEAK_FUNC(sub_8368330C);
PPC_FUNC_IMPL(__imp__sub_8368330C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83683310"))) PPC_WEAK_FUNC(sub_83683310);
PPC_FUNC_IMPL(__imp__sub_83683310) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x836833b8
	sub_836833B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83683318"))) PPC_WEAK_FUNC(sub_83683318);
PPC_FUNC_IMPL(__imp__sub_83683318) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x836833b8
	sub_836833B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83683320"))) PPC_WEAK_FUNC(sub_83683320);
PPC_FUNC_IMPL(__imp__sub_83683320) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83683328;
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
	// addi r8,r11,-25100
	ctx.r8.s64 = ctx.r11.s64 + -25100;
	// addi r7,r10,-25112
	ctx.r7.s64 = ctx.r10.s64 + -25112;
	// addi r6,r9,-25116
	ctx.r6.s64 = ctx.r9.s64 + -25116;
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
	// blt cr6,0x8368336c
	if (cr6.lt) goto loc_8368336C;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x8368336C;
	sub_8386D088(ctx, base);
loc_8368336C:
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
	// blt cr6,0x83683398
	if (cr6.lt) goto loc_83683398;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83683398;
	sub_8386D088(ctx, base);
loc_83683398:
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// bl 0x82b6a590
	ctx.lr = 0x836833AC;
	sub_82B6A590(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836833B4"))) PPC_WEAK_FUNC(sub_836833B4);
PPC_FUNC_IMPL(__imp__sub_836833B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836833B8"))) PPC_WEAK_FUNC(sub_836833B8);
PPC_FUNC_IMPL(__imp__sub_836833B8) {
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
	// bl 0x83683320
	ctx.lr = 0x836833D8;
	sub_83683320(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836833f8
	if (cr6.eq) goto loc_836833F8;
	// bl 0x82595188
	ctx.lr = 0x836833E8;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x836833F8;
	sub_825952B8(ctx, base);
loc_836833F8:
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

__attribute__((alias("__imp__sub_83683414"))) PPC_WEAK_FUNC(sub_83683414);
PPC_FUNC_IMPL(__imp__sub_83683414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83683418"))) PPC_WEAK_FUNC(sub_83683418);
PPC_FUNC_IMPL(__imp__sub_83683418) {
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
	ctx.lr = 0x83683430;
	sub_82EAF8D8(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r4,r11,-25360
	ctx.r4.s64 = ctx.r11.s64 + -25360;
	// li r5,30
	ctx.r5.s64 = 30;
	// bl 0x824208c8
	ctx.lr = 0x83683444;
	sub_824208C8(ctx, base);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// lis r7,-32216
	ctx.r7.s64 = -2111307776;
	// addi r6,r10,-25064
	ctx.r6.s64 = ctx.r10.s64 + -25064;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r8,-25080
	ctx.r4.s64 = ctx.r8.s64 + -25080;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// addi r5,r9,-25076
	ctx.r5.s64 = ctx.r9.s64 + -25076;
	// stw r11,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r11.u32);
	// addi r10,r7,-25084
	ctx.r10.s64 = ctx.r7.s64 + -25084;
	// stw r4,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r4.u32);
	// stw r5,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r5.u32);
	// addi r3,r31,352
	ctx.r3.s64 = ctx.r31.s64 + 352;
	// stw r10,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r10.u32);
	// li r4,22
	ctx.r4.s64 = 22;
	// stw r11,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r11.u32);
	// stw r11,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r11.u32);
	// std r11,360(r31)
	PPC_STORE_U64(ctx.r31.u32 + 360, ctx.r11.u64);
	// bl 0x82d8c9b0
	ctx.lr = 0x83683494;
	sub_82D8C9B0(ctx, base);
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

__attribute__((alias("__imp__sub_836834AC"))) PPC_WEAK_FUNC(sub_836834AC);
PPC_FUNC_IMPL(__imp__sub_836834AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836834B0"))) PPC_WEAK_FUNC(sub_836834B0);
PPC_FUNC_IMPL(__imp__sub_836834B0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x836834c8
	sub_836834C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836834B8"))) PPC_WEAK_FUNC(sub_836834B8);
PPC_FUNC_IMPL(__imp__sub_836834B8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-312
	ctx.r3.s64 = ctx.r3.s64 + -312;
	// b 0x836834c8
	sub_836834C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836834C0"))) PPC_WEAK_FUNC(sub_836834C0);
PPC_FUNC_IMPL(__imp__sub_836834C0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x836834c8
	sub_836834C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836834C8"))) PPC_WEAK_FUNC(sub_836834C8);
PPC_FUNC_IMPL(__imp__sub_836834C8) {
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
	// addi r7,r11,-25064
	ctx.r7.s64 = ctx.r11.s64 + -25064;
	// addi r6,r10,-25076
	ctx.r6.s64 = ctx.r10.s64 + -25076;
	// addi r5,r9,-25080
	ctx.r5.s64 = ctx.r9.s64 + -25080;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r8,-25084
	ctx.r4.s64 = ctx.r8.s64 + -25084;
	// stw r6,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r6.u32);
	// stw r5,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r5.u32);
	// addi r3,r3,352
	ctx.r3.s64 = ctx.r3.s64 + 352;
	// stw r4,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r4.u32);
	// bl 0x82d8d2e8
	ctx.lr = 0x8368351C;
	sub_82D8D2E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82eaf978
	ctx.lr = 0x83683524;
	sub_82EAF978(ctx, base);
	// clrlwi r3,r30,31
	ctx.r3.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83683544
	if (cr6.eq) goto loc_83683544;
	// bl 0x82595188
	ctx.lr = 0x83683534;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x83683544;
	sub_825952B8(ctx, base);
loc_83683544:
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

__attribute__((alias("__imp__sub_83683560"))) PPC_WEAK_FUNC(sub_83683560);
PPC_FUNC_IMPL(__imp__sub_83683560) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83683568;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r28,r3,64
	ctx.r28.s64 = ctx.r3.s64 + 64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83683588
	if (cr6.lt) goto loc_83683588;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83683588;
	sub_8386D088(ctx, base);
loc_83683588:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r30,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r30.u32);
	// addi r31,r29,28
	ctx.r31.s64 = ctx.r29.s64 + 28;
	// stw r27,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r27.u32);
	// stb r30,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r30.u8);
	// lwz r11,48(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836835b4
	if (cr6.lt) goto loc_836835B4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836835B4;
	sub_8386D088(ctx, base);
loc_836835B4:
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836835d4
	if (cr6.lt) goto loc_836835D4;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836835D4;
	sub_8386D088(ctx, base);
loc_836835D4:
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

__attribute__((alias("__imp__sub_836835E8"))) PPC_WEAK_FUNC(sub_836835E8);
PPC_FUNC_IMPL(__imp__sub_836835E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x836835F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// stw r29,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r29.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stb r30,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r30.u8);
	// addi r28,r11,27936
	ctx.r28.s64 = ctx.r11.s64 + 27936;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x824208c8
	ctx.lr = 0x83683620;
	sub_824208C8(ctx, base);
	// stw r29,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r29.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// stb r30,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r30.u8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x8368363C;
	sub_824208C8(ctx, base);
	// std r30,56(r31)
	PPC_STORE_U64(ctx.r31.u32 + 56, ctx.r30.u64);
	// stw r29,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stb r30,64(r31)
	PPC_STORE_U8(ctx.r31.u32 + 64, ctx.r30.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x8368365C;
	sub_824208C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83683668"))) PPC_WEAK_FUNC(sub_83683668);
PPC_FUNC_IMPL(__imp__sub_83683668) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83683670;
	__savegprlr_27(ctx, base);
	// stwu r1,-704(r1)
	ea = -704 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r27,r3,4
	ctx.r27.s64 = ctx.r3.s64 + 4;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,134
	ctx.r11.s64 = 134;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// rotlwi r10,r31,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// lwz r9,8(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bge cr6,0x836836b0
	if (!cr6.lt) goto loc_836836B0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e745e0
	ctx.lr = 0x836836B0;
	sub_82E745E0(ctx, base);
loc_836836B0:
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// li r30,15
	ctx.r30.s64 = 15;
	// addi r29,r11,-24836
	ctx.r29.s64 = ctx.r11.s64 + -24836;
	// li r5,5
	ctx.r5.s64 = 5;
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// addi r4,r29,-100
	ctx.r4.s64 = ctx.r29.s64 + -100;
	// stbx r7,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u8);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r6.u32);
	// stw r30,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r30.u32);
	// stw r31,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r31.u32);
	// stb r31,336(r1)
	PPC_STORE_U8(ctx.r1.u32 + 336, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836836F8;
	sub_82472FC0(ctx, base);
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83683704;
	sub_82E74C08(ctx, base);
	// lwz r5,356(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x83683718
	if (cr6.lt) goto loc_83683718;
	// lwz r3,336(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// bl 0x82416268
	ctx.lr = 0x83683718;
	sub_82416268(ctx, base);
loc_83683718:
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// addi r4,r28,20
	ctx.r4.s64 = ctx.r28.s64 + 20;
	// stw r30,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r30.u32);
	// stw r31,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,336(r1)
	PPC_STORE_U8(ctx.r1.u32 + 336, ctx.r31.u8);
	// blt cr6,0x83683738
	if (cr6.lt) goto loc_83683738;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83683738:
	// stw r30,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r31.u32);
	// stb r31,400(r1)
	PPC_STORE_U8(ctx.r1.u32 + 400, ctx.r31.u8);
loc_83683748:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83683748
	if (!cr6.eq) goto loc_83683748;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8368376C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83683778;
	sub_82E74C08(ctx, base);
	// lwz r10,420(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8368378c
	if (cr6.lt) goto loc_8368378C;
	// lwz r3,400(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	// bl 0x82416268
	ctx.lr = 0x8368378C;
	sub_82416268(ctx, base);
loc_8368378C:
	// stw r30,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r30.u32);
	// addi r4,r29,-92
	ctx.r4.s64 = ctx.r29.s64 + -92;
	// stw r31,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,400(r1)
	PPC_STORE_U8(ctx.r1.u32 + 400, ctx.r31.u8);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stw r30,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r30.u32);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// stb r31,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836837B4;
	sub_82472FC0(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836837C0;
	sub_82E74C08(ctx, base);
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836837d4
	if (cr6.lt) goto loc_836837D4;
	// lwz r3,208(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x82416268
	ctx.lr = 0x836837D4;
	sub_82416268(ctx, base);
loc_836837D4:
	// stw r30,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r30.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// stb r31,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r31.u8);
	// lwz r4,48(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// bl 0x82e746c0
	ctx.lr = 0x836837EC;
	sub_82E746C0(ctx, base);
	// stw r30,548(r1)
	PPC_STORE_U32(ctx.r1.u32 + 548, ctx.r30.u32);
	// stw r31,544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 544, ctx.r31.u32);
	// addi r4,r29,-84
	ctx.r4.s64 = ctx.r29.s64 + -84;
	// stb r31,528(r1)
	PPC_STORE_U8(ctx.r1.u32 + 528, ctx.r31.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// bl 0x82472fc0
	ctx.lr = 0x83683808;
	sub_82472FC0(ctx, base);
	// addi r4,r1,528
	ctx.r4.s64 = ctx.r1.s64 + 528;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83683814;
	sub_82E74C08(ctx, base);
	// lwz r11,548(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 548);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83683828
	if (cr6.lt) goto loc_83683828;
	// lwz r3,528(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 528);
	// bl 0x82416268
	ctx.lr = 0x83683828;
	sub_82416268(ctx, base);
loc_83683828:
	// lwz r11,136(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 136);
	// addi r4,r28,116
	ctx.r4.s64 = ctx.r28.s64 + 116;
	// stw r30,548(r1)
	PPC_STORE_U32(ctx.r1.u32 + 548, ctx.r30.u32);
	// stw r31,544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 544, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,528(r1)
	PPC_STORE_U8(ctx.r1.u32 + 528, ctx.r31.u8);
	// blt cr6,0x83683848
	if (cr6.lt) goto loc_83683848;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83683848:
	// stw r30,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r31.u32);
	// stb r31,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r31.u8);
loc_83683858:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83683858
	if (!cr6.eq) goto loc_83683858;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x8368387C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83683888;
	sub_82E74C08(ctx, base);
	// lwz r10,292(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8368389c
	if (cr6.lt) goto loc_8368389C;
	// lwz r3,272(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// bl 0x82416268
	ctx.lr = 0x8368389C;
	sub_82416268(ctx, base);
loc_8368389C:
	// stw r30,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r30.u32);
	// addi r4,r29,-76
	ctx.r4.s64 = ctx.r29.s64 + -76;
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r31.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stb r31,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r31.u8);
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// stw r30,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r30.u32);
	// stw r31,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, ctx.r31.u32);
	// stb r31,464(r1)
	PPC_STORE_U8(ctx.r1.u32 + 464, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836838C4;
	sub_82472FC0(ctx, base);
	// addi r4,r1,464
	ctx.r4.s64 = ctx.r1.s64 + 464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836838D0;
	sub_82E74C08(ctx, base);
	// lwz r11,484(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 484);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836838e4
	if (cr6.lt) goto loc_836838E4;
	// lwz r3,464(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 464);
	// bl 0x82416268
	ctx.lr = 0x836838E4;
	sub_82416268(ctx, base);
loc_836838E4:
	// lwz r11,164(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 164);
	// addi r4,r28,144
	ctx.r4.s64 = ctx.r28.s64 + 144;
	// stw r30,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r30.u32);
	// stw r31,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,464(r1)
	PPC_STORE_U8(ctx.r1.u32 + 464, ctx.r31.u8);
	// blt cr6,0x83683904
	if (cr6.lt) goto loc_83683904;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83683904:
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
loc_83683914:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83683914
	if (!cr6.eq) goto loc_83683914;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x83683938;
	sub_82472FC0(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83683944;
	sub_82E74C08(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83683958
	if (cr6.lt) goto loc_83683958;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82416268
	ctx.lr = 0x83683958;
	sub_82416268(ctx, base);
loc_83683958:
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// addi r4,r29,-68
	ctx.r4.s64 = ctx.r29.s64 + -68;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// li r5,15
	ctx.r5.s64 = 15;
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// stw r30,612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 612, ctx.r30.u32);
	// stw r31,608(r1)
	PPC_STORE_U32(ctx.r1.u32 + 608, ctx.r31.u32);
	// stb r31,592(r1)
	PPC_STORE_U8(ctx.r1.u32 + 592, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x83683980;
	sub_82472FC0(ctx, base);
	// addi r4,r1,592
	ctx.r4.s64 = ctx.r1.s64 + 592;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8368398C;
	sub_82E74C08(ctx, base);
	// lwz r11,612(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 612);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836839a0
	if (cr6.lt) goto loc_836839A0;
	// lwz r3,592(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 592);
	// bl 0x82416268
	ctx.lr = 0x836839A0;
	sub_82416268(ctx, base);
loc_836839A0:
	// lwz r11,192(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 192);
	// addi r4,r28,172
	ctx.r4.s64 = ctx.r28.s64 + 172;
	// stw r30,612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 612, ctx.r30.u32);
	// stw r31,608(r1)
	PPC_STORE_U32(ctx.r1.u32 + 608, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,592(r1)
	PPC_STORE_U8(ctx.r1.u32 + 592, ctx.r31.u8);
	// blt cr6,0x836839c0
	if (cr6.lt) goto loc_836839C0;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836839C0:
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
loc_836839D0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836839d0
	if (!cr6.eq) goto loc_836839D0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836839F4;
	sub_82472FC0(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83683A00;
	sub_82E74C08(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83683a14
	if (cr6.lt) goto loc_83683A14;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82416268
	ctx.lr = 0x83683A14;
	sub_82416268(ctx, base);
loc_83683A14:
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// addi r4,r29,-52
	ctx.r4.s64 = ctx.r29.s64 + -52;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// li r5,10
	ctx.r5.s64 = 10;
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r30,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r30.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x83683A3C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83683A48;
	sub_82E74C08(ctx, base);
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83683a5c
	if (cr6.lt) goto loc_83683A5C;
	// lwz r3,176(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x82416268
	ctx.lr = 0x83683A5C;
	sub_82416268(ctx, base);
loc_83683A5C:
	// li r3,8192
	ctx.r3.s64 = 8192;
	// stw r30,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r30.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
	// bl 0x831d2bf8
	ctx.lr = 0x83683A70;
	sub_831D2BF8(ctx, base);
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// li r9,132
	ctx.r9.s64 = 132;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// li r8,8192
	ctx.r8.s64 = 8192;
	// stb r9,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r9.u8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r4,r29,-40
	ctx.r4.s64 = ctx.r29.s64 + -40;
	// stb r6,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r6.u8);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r30,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r30.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// stb r31,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r31.u8);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// bl 0x82472fc0
	ctx.lr = 0x83683AC8;
	sub_82472FC0(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83683AD4;
	sub_82E74C08(ctx, base);
	// lwz r9,260(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x83683ae8
	if (cr6.lt) goto loc_83683AE8;
	// lwz r3,240(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x82416268
	ctx.lr = 0x83683AE8;
	sub_82416268(ctx, base);
loc_83683AE8:
	// lwz r11,220(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 220);
	// addi r4,r28,200
	ctx.r4.s64 = ctx.r28.s64 + 200;
	// stw r30,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r30.u32);
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r31.u8);
	// blt cr6,0x83683b08
	if (cr6.lt) goto loc_83683B08;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83683B08:
	// stw r30,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r31.u32);
	// stb r31,304(r1)
	PPC_STORE_U8(ctx.r1.u32 + 304, ctx.r31.u8);
loc_83683B18:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83683b18
	if (!cr6.eq) goto loc_83683B18;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x83683B3C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83683B48;
	sub_82E74C08(ctx, base);
	// lwz r10,324(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83683b5c
	if (cr6.lt) goto loc_83683B5C;
	// lwz r3,304(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// bl 0x82416268
	ctx.lr = 0x83683B5C;
	sub_82416268(ctx, base);
loc_83683B5C:
	// stw r30,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r30.u32);
	// addi r4,r29,-32
	ctx.r4.s64 = ctx.r29.s64 + -32;
	// stw r31,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r31.u32);
	// li r5,17
	ctx.r5.s64 = 17;
	// stb r31,304(r1)
	PPC_STORE_U8(ctx.r1.u32 + 304, ctx.r31.u8);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// stw r30,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r30.u32);
	// stw r31,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r31.u32);
	// stb r31,368(r1)
	PPC_STORE_U8(ctx.r1.u32 + 368, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x83683B84;
	sub_82472FC0(ctx, base);
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83683B90;
	sub_82E74C08(ctx, base);
	// lwz r11,388(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83683ba4
	if (cr6.lt) goto loc_83683BA4;
	// lwz r3,368(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// bl 0x82416268
	ctx.lr = 0x83683BA4;
	sub_82416268(ctx, base);
loc_83683BA4:
	// lwz r11,248(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 248);
	// addi r4,r28,228
	ctx.r4.s64 = ctx.r28.s64 + 228;
	// stw r30,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r30.u32);
	// stw r31,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,368(r1)
	PPC_STORE_U8(ctx.r1.u32 + 368, ctx.r31.u8);
	// blt cr6,0x83683bc4
	if (cr6.lt) goto loc_83683BC4;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83683BC4:
	// stw r30,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r31.u32);
	// stb r31,432(r1)
	PPC_STORE_U8(ctx.r1.u32 + 432, ctx.r31.u8);
loc_83683BD4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83683bd4
	if (!cr6.eq) goto loc_83683BD4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x83683BF8;
	sub_82472FC0(ctx, base);
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83683C04;
	sub_82E74C08(ctx, base);
	// lwz r10,452(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83683c18
	if (cr6.lt) goto loc_83683C18;
	// lwz r3,432(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 432);
	// bl 0x82416268
	ctx.lr = 0x83683C18;
	sub_82416268(ctx, base);
loc_83683C18:
	// stw r30,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r30.u32);
	// addi r4,r29,-12
	ctx.r4.s64 = ctx.r29.s64 + -12;
	// stw r31,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r31.u32);
	// li r5,10
	ctx.r5.s64 = 10;
	// stb r31,432(r1)
	PPC_STORE_U8(ctx.r1.u32 + 432, ctx.r31.u8);
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// stw r30,516(r1)
	PPC_STORE_U32(ctx.r1.u32 + 516, ctx.r30.u32);
	// stw r31,512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 512, ctx.r31.u32);
	// stb r31,496(r1)
	PPC_STORE_U8(ctx.r1.u32 + 496, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x83683C40;
	sub_82472FC0(ctx, base);
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83683C4C;
	sub_82E74C08(ctx, base);
	// lwz r11,516(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 516);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83683c60
	if (cr6.lt) goto loc_83683C60;
	// lwz r3,496(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 496);
	// bl 0x82416268
	ctx.lr = 0x83683C60;
	sub_82416268(ctx, base);
loc_83683C60:
	// stw r30,516(r1)
	PPC_STORE_U32(ctx.r1.u32 + 516, ctx.r30.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r31,512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 512, ctx.r31.u32);
	// stb r31,496(r1)
	PPC_STORE_U8(ctx.r1.u32 + 496, ctx.r31.u8);
	// ld r4,256(r28)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r28.u32 + 256);
	// bl 0x82ead258
	ctx.lr = 0x83683C78;
	sub_82EAD258(ctx, base);
	// stw r30,580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 580, ctx.r30.u32);
	// stw r31,576(r1)
	PPC_STORE_U32(ctx.r1.u32 + 576, ctx.r31.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stb r31,560(r1)
	PPC_STORE_U8(ctx.r1.u32 + 560, ctx.r31.u8);
	// li r5,14
	ctx.r5.s64 = 14;
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// bl 0x82472fc0
	ctx.lr = 0x83683C94;
	sub_82472FC0(ctx, base);
	// addi r4,r1,560
	ctx.r4.s64 = ctx.r1.s64 + 560;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83683CA0;
	sub_82E74C08(ctx, base);
	// lwz r11,580(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 580);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83683cb4
	if (cr6.lt) goto loc_83683CB4;
	// lwz r3,560(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 560);
	// bl 0x82416268
	ctx.lr = 0x83683CB4;
	sub_82416268(ctx, base);
loc_83683CB4:
	// lwz r11,284(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 284);
	// addi r4,r28,264
	ctx.r4.s64 = ctx.r28.s64 + 264;
	// stw r30,580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 580, ctx.r30.u32);
	// stw r31,576(r1)
	PPC_STORE_U32(ctx.r1.u32 + 576, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,560(r1)
	PPC_STORE_U8(ctx.r1.u32 + 560, ctx.r31.u8);
	// blt cr6,0x83683cd4
	if (cr6.lt) goto loc_83683CD4;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83683CD4:
	// stw r30,644(r1)
	PPC_STORE_U32(ctx.r1.u32 + 644, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,640(r1)
	PPC_STORE_U32(ctx.r1.u32 + 640, ctx.r31.u32);
	// stb r31,624(r1)
	PPC_STORE_U8(ctx.r1.u32 + 624, ctx.r31.u8);
loc_83683CE4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83683ce4
	if (!cr6.eq) goto loc_83683CE4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x83683D08;
	sub_82472FC0(ctx, base);
	// addi r4,r1,624
	ctx.r4.s64 = ctx.r1.s64 + 624;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83683D14;
	sub_82E74C08(ctx, base);
	// lwz r10,644(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 644);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83683d28
	if (cr6.lt) goto loc_83683D28;
	// lwz r3,624(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 624);
	// bl 0x82416268
	ctx.lr = 0x83683D28;
	sub_82416268(ctx, base);
loc_83683D28:
	// stw r30,644(r1)
	PPC_STORE_U32(ctx.r1.u32 + 644, ctx.r30.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r31,640(r1)
	PPC_STORE_U32(ctx.r1.u32 + 640, ctx.r31.u32);
	// stb r31,624(r1)
	PPC_STORE_U8(ctx.r1.u32 + 624, ctx.r31.u8);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82e74890
	ctx.lr = 0x83683D40;
	sub_82E74890(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// lwz r30,92(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bge cr6,0x83683d68
	if (!cr6.lt) goto loc_83683D68;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e745e0
	ctx.lr = 0x83683D68;
	sub_82E745E0(ctx, base);
loc_83683D68:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x831ce980
	ctx.lr = 0x83683D80;
	sub_831CE980(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x831cf100
	ctx.lr = 0x83683D94;
	sub_831CF100(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83683DA0"))) PPC_WEAK_FUNC(sub_83683DA0);
PPC_FUNC_IMPL(__imp__sub_83683DA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83683DA8;
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
	ctx.lr = 0x83683DD0;
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
	// bge cr6,0x83684014
	if (!cr6.lt) goto loc_83684014;
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
	// addi r26,r11,-24804
	ctx.r26.s64 = ctx.r11.s64 + -24804;
loc_83683E08:
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
	ctx.lr = 0x83683E3C;
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
	ctx.lr = 0x83683E54;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83683ee8
	if (!cr6.eq) goto loc_83683EE8;
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
	ctx.lr = 0x83683E8C;
	sub_82472FC0(ctx, base);
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x83683ea0
	if (!cr6.lt) goto loc_83683EA0;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
loc_83683EA0:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83683EA4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83683ea4
	if (!cr6.eq) goto loc_83683EA4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,20
	ctx.r3.s64 = ctx.r28.s64 + 20;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x83683EC8;
	sub_824208C8(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83683edc
	if (cr6.lt) goto loc_83683EDC;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82416268
	ctx.lr = 0x83683EDC;
	sub_82416268(ctx, base);
loc_83683EDC:
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
loc_83683EE8:
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
	ctx.lr = 0x83683F00;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83683f3c
	if (!cr6.eq) goto loc_83683F3C;
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
	// bne cr6,0x83683f34
	if (!cr6.eq) goto loc_83683F34;
	// ld r11,248(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 248);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83683f38
	goto loc_83683F38;
loc_83683F34:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_83683F38:
	// stw r11,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r11.u32);
loc_83683F3C:
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
	ctx.lr = 0x83683F54;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83683fe8
	if (!cr6.eq) goto loc_83683FE8;
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
	ctx.lr = 0x83683F8C;
	sub_82472FC0(ctx, base);
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x83683fa0
	if (!cr6.lt) goto loc_83683FA0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_83683FA0:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83683FA4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83683fa4
	if (!cr6.eq) goto loc_83683FA4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,116
	ctx.r3.s64 = ctx.r28.s64 + 116;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x83683FC8;
	sub_824208C8(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83683fdc
	if (cr6.lt) goto loc_83683FDC;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82416268
	ctx.lr = 0x83683FDC;
	sub_82416268(ctx, base);
loc_83683FDC:
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
loc_83683FE8:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83683ffc
	if (cr6.lt) goto loc_83683FFC;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82416268
	ctx.lr = 0x83683FFC;
	sub_82416268(ctx, base);
loc_83683FFC:
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
	// bne 0x83683e08
	if (!cr0.eq) goto loc_83683E08;
loc_83684014:
	// lwz r31,192(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83684030
	if (cr6.eq) goto loc_83684030;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x83684028;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x83684030;
	sub_82416268(ctx, base);
loc_83684030:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368403C"))) PPC_WEAK_FUNC(sub_8368403C);
PPC_FUNC_IMPL(__imp__sub_8368403C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83684040"))) PPC_WEAK_FUNC(sub_83684040);
PPC_FUNC_IMPL(__imp__sub_83684040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83684048;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d95768
	ctx.lr = 0x83684054;
	sub_82D95768(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r29,r11,-25000
	ctx.r29.s64 = ctx.r11.s64 + -25000;
	// li r5,13
	ctx.r5.s64 = 13;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824208c8
	ctx.lr = 0x8368406C;
	sub_824208C8(ctx, base);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// addi r7,r10,-24696
	ctx.r7.s64 = ctx.r10.s64 + -24696;
	// addi r5,r8,-24712
	ctx.r5.s64 = ctx.r8.s64 + -24712;
	// addi r6,r9,-24708
	ctx.r6.s64 = ctx.r9.s64 + -24708;
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
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836840B4;
	sub_824208C8(ctx, base);
	// stw r28,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r28.u32);
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// stb r30,344(r31)
	PPC_STORE_U8(ctx.r31.u32 + 344, ctx.r30.u8);
	// addi r4,r29,32
	ctx.r4.s64 = ctx.r29.s64 + 32;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836840D0;
	sub_824208C8(ctx, base);
	// stw r28,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r28.u32);
	// stw r30,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r30.u32);
	// addi r3,r31,372
	ctx.r3.s64 = ctx.r31.s64 + 372;
	// stb r30,372(r31)
	PPC_STORE_U8(ctx.r31.u32 + 372, ctx.r30.u8);
	// addi r4,r29,48
	ctx.r4.s64 = ctx.r29.s64 + 48;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836840EC;
	sub_824208C8(ctx, base);
	// addi r3,r31,400
	ctx.r3.s64 = ctx.r31.s64 + 400;
	// bl 0x836835e8
	ctx.lr = 0x836840F4;
	sub_836835E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83684100"))) PPC_WEAK_FUNC(sub_83684100);
PPC_FUNC_IMPL(__imp__sub_83684100) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x836841d0
	sub_836841D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83684108"))) PPC_WEAK_FUNC(sub_83684108);
PPC_FUNC_IMPL(__imp__sub_83684108) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x836841d0
	sub_836841D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83684110"))) PPC_WEAK_FUNC(sub_83684110);
PPC_FUNC_IMPL(__imp__sub_83684110) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83684118;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// addi r8,r11,-24696
	ctx.r8.s64 = ctx.r11.s64 + -24696;
	// addi r7,r10,-24708
	ctx.r7.s64 = ctx.r10.s64 + -24708;
	// addi r6,r9,-24712
	ctx.r6.s64 = ctx.r9.s64 + -24712;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r7,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r7.u32);
	// addi r3,r3,400
	ctx.r3.s64 = ctx.r3.s64 + 400;
	// stw r6,216(r28)
	PPC_STORE_U32(ctx.r28.u32 + 216, ctx.r6.u32);
	// bl 0x83683560
	ctx.lr = 0x8368414C;
	sub_83683560(ctx, base);
	// lwz r5,392(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 392);
	// addi r29,r28,372
	ctx.r29.s64 = ctx.r28.s64 + 372;
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x83684164
	if (cr6.lt) goto loc_83684164;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83684164;
	sub_8386D088(ctx, base);
loc_83684164:
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
	// blt cr6,0x83684190
	if (cr6.lt) goto loc_83684190;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83684190;
	sub_8386D088(ctx, base);
loc_83684190:
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
	// blt cr6,0x836841b4
	if (cr6.lt) goto loc_836841B4;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836841B4;
	sub_8386D088(ctx, base);
loc_836841B4:
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// stb r30,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r30.u8);
	// bl 0x82b6a590
	ctx.lr = 0x836841C8;
	sub_82B6A590(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836841D0"))) PPC_WEAK_FUNC(sub_836841D0);
PPC_FUNC_IMPL(__imp__sub_836841D0) {
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
	// bl 0x83684110
	ctx.lr = 0x836841F0;
	sub_83684110(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83684210
	if (cr6.eq) goto loc_83684210;
	// bl 0x82595188
	ctx.lr = 0x83684200;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x83684210;
	sub_825952B8(ctx, base);
loc_83684210:
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

__attribute__((alias("__imp__sub_8368422C"))) PPC_WEAK_FUNC(sub_8368422C);
PPC_FUNC_IMPL(__imp__sub_8368422C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83684230"))) PPC_WEAK_FUNC(sub_83684230);
PPC_FUNC_IMPL(__imp__sub_83684230) {
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
	ctx.lr = 0x83684248;
	sub_82EAF8D8(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r4,r11,-25000
	ctx.r4.s64 = ctx.r11.s64 + -25000;
	// li r5,13
	ctx.r5.s64 = 13;
	// bl 0x824208c8
	ctx.lr = 0x8368425C;
	sub_824208C8(ctx, base);
	// lis r7,-32216
	ctx.r7.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// addi r3,r7,-24648
	ctx.r3.s64 = ctx.r7.s64 + -24648;
	// addi r6,r10,-24664
	ctx.r6.s64 = ctx.r10.s64 + -24664;
	// addi r5,r9,-24676
	ctx.r5.s64 = ctx.r9.s64 + -24676;
	// stw r3,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r3.u32);
	// addi r4,r8,-24680
	ctx.r4.s64 = ctx.r8.s64 + -24680;
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

__attribute__((alias("__imp__sub_836842A4"))) PPC_WEAK_FUNC(sub_836842A4);
PPC_FUNC_IMPL(__imp__sub_836842A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836842A8"))) PPC_WEAK_FUNC(sub_836842A8);
PPC_FUNC_IMPL(__imp__sub_836842A8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x836842c0
	sub_836842C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836842B0"))) PPC_WEAK_FUNC(sub_836842B0);
PPC_FUNC_IMPL(__imp__sub_836842B0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x836842c0
	sub_836842C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836842B8"))) PPC_WEAK_FUNC(sub_836842B8);
PPC_FUNC_IMPL(__imp__sub_836842B8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-312
	ctx.r3.s64 = ctx.r3.s64 + -312;
	// b 0x836842c0
	sub_836842C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836842C0"))) PPC_WEAK_FUNC(sub_836842C0);
PPC_FUNC_IMPL(__imp__sub_836842C0) {
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
	// addi r7,r11,-24664
	ctx.r7.s64 = ctx.r11.s64 + -24664;
	// addi r6,r10,-24676
	ctx.r6.s64 = ctx.r10.s64 + -24676;
	// addi r5,r9,-24680
	ctx.r5.s64 = ctx.r9.s64 + -24680;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r8,-24648
	ctx.r4.s64 = ctx.r8.s64 + -24648;
	// stw r6,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r6.u32);
	// stw r5,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r4.u32);
	// bl 0x82eaf978
	ctx.lr = 0x83684310;
	sub_82EAF978(ctx, base);
	// clrlwi r3,r30,31
	ctx.r3.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83684330
	if (cr6.eq) goto loc_83684330;
	// bl 0x82595188
	ctx.lr = 0x83684320;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x83684330;
	sub_825952B8(ctx, base);
loc_83684330:
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

__attribute__((alias("__imp__sub_8368434C"))) PPC_WEAK_FUNC(sub_8368434C);
PPC_FUNC_IMPL(__imp__sub_8368434C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83684350"))) PPC_WEAK_FUNC(sub_83684350);
PPC_FUNC_IMPL(__imp__sub_83684350) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83684358;
	__savegprlr_27(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
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
	// li r11,133
	ctx.r11.s64 = 133;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bge cr6,0x83684398
	if (!cr6.lt) goto loc_83684398;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e745e0
	ctx.lr = 0x83684398;
	sub_82E745E0(ctx, base);
loc_83684398:
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
	// addi r27,r11,-24496
	ctx.r27.s64 = ctx.r11.s64 + -24496;
	// li r5,5
	ctx.r5.s64 = 5;
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
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
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836843E0;
	sub_82472FC0(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836843EC;
	sub_82E74C08(ctx, base);
	// lwz r5,340(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x83684400
	if (cr6.lt) goto loc_83684400;
	// lwz r3,320(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x82416268
	ctx.lr = 0x83684400;
	sub_82416268(ctx, base);
loc_83684400:
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// addi r4,r28,20
	ctx.r4.s64 = ctx.r28.s64 + 20;
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// blt cr6,0x83684420
	if (cr6.lt) goto loc_83684420;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83684420:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
loc_83684430:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83684430
	if (!cr6.eq) goto loc_83684430;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x83684454;
	sub_82472FC0(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83684460;
	sub_82E74C08(ctx, base);
	// lwz r10,276(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83684474
	if (cr6.lt) goto loc_83684474;
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x82416268
	ctx.lr = 0x83684474;
	sub_82416268(ctx, base);
loc_83684474:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// addi r4,r27,-24
	ctx.r4.s64 = ctx.r27.s64 + -24;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x8368449C;
	sub_82472FC0(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836844A8;
	sub_82E74C08(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836844bc
	if (cr6.lt) goto loc_836844BC;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82416268
	ctx.lr = 0x836844BC;
	sub_82416268(ctx, base);
loc_836844BC:
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// lwz r4,48(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// bl 0x82e746c0
	ctx.lr = 0x836844D4;
	sub_82E746C0(ctx, base);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// addi r4,r27,-16
	ctx.r4.s64 = ctx.r27.s64 + -16;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82472fc0
	ctx.lr = 0x836844F0;
	sub_82472FC0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836844FC;
	sub_82E74C08(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83684510
	if (cr6.lt) goto loc_83684510;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x83684510;
	sub_82416268(ctx, base);
loc_83684510:
	// lwz r11,136(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 136);
	// addi r4,r28,116
	ctx.r4.s64 = ctx.r28.s64 + 116;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// blt cr6,0x83684530
	if (cr6.lt) goto loc_83684530;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83684530:
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
loc_83684540:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83684540
	if (!cr6.eq) goto loc_83684540;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x83684564;
	sub_82472FC0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83684570;
	sub_82E74C08(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83684584
	if (cr6.lt) goto loc_83684584;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x83684584;
	sub_82416268(ctx, base);
loc_83684584:
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
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x836845AC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836845B8;
	sub_82E74C08(ctx, base);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x836845cc
	if (cr6.lt) goto loc_836845CC;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x836845CC;
	sub_82416268(ctx, base);
loc_836845CC:
	// lwz r11,164(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 164);
	// addi r4,r28,144
	ctx.r4.s64 = ctx.r28.s64 + 144;
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// blt cr6,0x836845ec
	if (cr6.lt) goto loc_836845EC;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836845EC:
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
loc_836845FC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836845fc
	if (!cr6.eq) goto loc_836845FC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x83684620;
	sub_82472FC0(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x8368462C;
	sub_82E74C08(ctx, base);
	// lwz r10,244(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83684640
	if (cr6.lt) goto loc_83684640;
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82416268
	ctx.lr = 0x83684640;
	sub_82416268(ctx, base);
loc_83684640:
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// li r5,18
	ctx.r5.s64 = 18;
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x83684668;
	sub_82472FC0(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x83684674;
	sub_82E74C08(ctx, base);
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83684688
	if (cr6.lt) goto loc_83684688;
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82416268
	ctx.lr = 0x83684688;
	sub_82416268(ctx, base);
loc_83684688:
	// lwz r11,192(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 192);
	// addi r4,r28,172
	ctx.r4.s64 = ctx.r28.s64 + 172;
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// blt cr6,0x836846a8
	if (cr6.lt) goto loc_836846A8;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_836846A8:
	// stw r30,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
loc_836846B8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836846b8
	if (!cr6.eq) goto loc_836846B8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x836846DC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74c08
	ctx.lr = 0x836846E8;
	sub_82E74C08(ctx, base);
	// lwz r10,372(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836846fc
	if (cr6.lt) goto loc_836846FC;
	// lwz r3,352(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// bl 0x82416268
	ctx.lr = 0x836846FC;
	sub_82416268(ctx, base);
loc_836846FC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83684708"))) PPC_WEAK_FUNC(sub_83684708);
PPC_FUNC_IMPL(__imp__sub_83684708) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83684710;
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
	ctx.lr = 0x83684738;
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
	// bge cr6,0x8368497c
	if (!cr6.lt) goto loc_8368497C;
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
	// addi r26,r11,-24460
	ctx.r26.s64 = ctx.r11.s64 + -24460;
loc_83684770:
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
	ctx.lr = 0x836847A4;
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
	ctx.lr = 0x836847BC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83684850
	if (!cr6.eq) goto loc_83684850;
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
	ctx.lr = 0x836847F4;
	sub_82472FC0(ctx, base);
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x83684808
	if (!cr6.lt) goto loc_83684808;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
loc_83684808:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8368480C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8368480c
	if (!cr6.eq) goto loc_8368480C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,20
	ctx.r3.s64 = ctx.r28.s64 + 20;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x83684830;
	sub_824208C8(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83684844
	if (cr6.lt) goto loc_83684844;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82416268
	ctx.lr = 0x83684844;
	sub_82416268(ctx, base);
loc_83684844:
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
loc_83684850:
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
	ctx.lr = 0x83684868;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836848a4
	if (!cr6.eq) goto loc_836848A4;
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
	// bne cr6,0x8368489c
	if (!cr6.eq) goto loc_8368489C;
	// ld r11,248(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 248);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836848a0
	goto loc_836848A0;
loc_8368489C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_836848A0:
	// stw r11,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r11.u32);
loc_836848A4:
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
	ctx.lr = 0x836848BC;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83684950
	if (!cr6.eq) goto loc_83684950;
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
	ctx.lr = 0x836848F4;
	sub_82472FC0(ctx, base);
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x83684908
	if (!cr6.lt) goto loc_83684908;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_83684908:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8368490C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8368490c
	if (!cr6.eq) goto loc_8368490C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,116
	ctx.r3.s64 = ctx.r28.s64 + 116;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x83684930;
	sub_824208C8(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83684944
	if (cr6.lt) goto loc_83684944;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82416268
	ctx.lr = 0x83684944;
	sub_82416268(ctx, base);
loc_83684944:
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
loc_83684950:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83684964
	if (cr6.lt) goto loc_83684964;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82416268
	ctx.lr = 0x83684964;
	sub_82416268(ctx, base);
loc_83684964:
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
	// bne 0x83684770
	if (!cr0.eq) goto loc_83684770;
loc_8368497C:
	// lwz r31,192(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83684998
	if (cr6.eq) goto loc_83684998;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x83684990;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x83684998;
	sub_82416268(ctx, base);
loc_83684998:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836849A4"))) PPC_WEAK_FUNC(sub_836849A4);
PPC_FUNC_IMPL(__imp__sub_836849A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836849A8"))) PPC_WEAK_FUNC(sub_836849A8);
PPC_FUNC_IMPL(__imp__sub_836849A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x836849B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d95768
	ctx.lr = 0x836849BC;
	sub_82D95768(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r29,r11,-24592
	ctx.r29.s64 = ctx.r11.s64 + -24592;
	// li r5,13
	ctx.r5.s64 = 13;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824208c8
	ctx.lr = 0x836849D4;
	sub_824208C8(ctx, base);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// addi r7,r10,-24352
	ctx.r7.s64 = ctx.r10.s64 + -24352;
	// addi r5,r8,-24368
	ctx.r5.s64 = ctx.r8.s64 + -24368;
	// addi r6,r9,-24364
	ctx.r6.s64 = ctx.r9.s64 + -24364;
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
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x83684A1C;
	sub_824208C8(ctx, base);
	// stw r28,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r28.u32);
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// stb r30,344(r31)
	PPC_STORE_U8(ctx.r31.u32 + 344, ctx.r30.u8);
	// addi r4,r29,32
	ctx.r4.s64 = ctx.r29.s64 + 32;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x83684A38;
	sub_824208C8(ctx, base);
	// stw r28,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r28.u32);
	// stw r30,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r30.u32);
	// addi r3,r31,372
	ctx.r3.s64 = ctx.r31.s64 + 372;
	// stb r30,372(r31)
	PPC_STORE_U8(ctx.r31.u32 + 372, ctx.r30.u8);
	// addi r4,r29,48
	ctx.r4.s64 = ctx.r29.s64 + 48;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x83684A54;
	sub_824208C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83684A60"))) PPC_WEAK_FUNC(sub_83684A60);
PPC_FUNC_IMPL(__imp__sub_83684A60) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x83684b28
	sub_83684B28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83684A68"))) PPC_WEAK_FUNC(sub_83684A68);
PPC_FUNC_IMPL(__imp__sub_83684A68) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x83684b28
	sub_83684B28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83684A70"))) PPC_WEAK_FUNC(sub_83684A70);
PPC_FUNC_IMPL(__imp__sub_83684A70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83684A78;
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
	// addi r8,r11,-24352
	ctx.r8.s64 = ctx.r11.s64 + -24352;
	// addi r7,r10,-24364
	ctx.r7.s64 = ctx.r10.s64 + -24364;
	// addi r6,r9,-24368
	ctx.r6.s64 = ctx.r9.s64 + -24368;
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
	// blt cr6,0x83684abc
	if (cr6.lt) goto loc_83684ABC;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83684ABC;
	sub_8386D088(ctx, base);
loc_83684ABC:
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
	// blt cr6,0x83684ae8
	if (cr6.lt) goto loc_83684AE8;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83684AE8;
	sub_8386D088(ctx, base);
loc_83684AE8:
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
	// blt cr6,0x83684b0c
	if (cr6.lt) goto loc_83684B0C;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83684B0C;
	sub_8386D088(ctx, base);
loc_83684B0C:
	// stw r27,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r27.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// stb r30,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r30.u8);
	// bl 0x82b6a590
	ctx.lr = 0x83684B20;
	sub_82B6A590(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83684B28"))) PPC_WEAK_FUNC(sub_83684B28);
PPC_FUNC_IMPL(__imp__sub_83684B28) {
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
	// bl 0x83684a70
	ctx.lr = 0x83684B48;
	sub_83684A70(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83684b68
	if (cr6.eq) goto loc_83684B68;
	// bl 0x82595188
	ctx.lr = 0x83684B58;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x83684B68;
	sub_825952B8(ctx, base);
loc_83684B68:
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

__attribute__((alias("__imp__sub_83684B84"))) PPC_WEAK_FUNC(sub_83684B84);
PPC_FUNC_IMPL(__imp__sub_83684B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83684B88"))) PPC_WEAK_FUNC(sub_83684B88);
PPC_FUNC_IMPL(__imp__sub_83684B88) {
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
	ctx.lr = 0x83684BA0;
	sub_82EAF8D8(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r4,r11,-24592
	ctx.r4.s64 = ctx.r11.s64 + -24592;
	// li r5,13
	ctx.r5.s64 = 13;
	// bl 0x824208c8
	ctx.lr = 0x83684BB4;
	sub_824208C8(ctx, base);
	// lis r7,-32216
	ctx.r7.s64 = -2111307776;
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// addi r3,r7,-24304
	ctx.r3.s64 = ctx.r7.s64 + -24304;
	// addi r6,r10,-24320
	ctx.r6.s64 = ctx.r10.s64 + -24320;
	// addi r5,r9,-24332
	ctx.r5.s64 = ctx.r9.s64 + -24332;
	// stw r3,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r3.u32);
	// addi r4,r8,-24336
	ctx.r4.s64 = ctx.r8.s64 + -24336;
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

__attribute__((alias("__imp__sub_83684BFC"))) PPC_WEAK_FUNC(sub_83684BFC);
PPC_FUNC_IMPL(__imp__sub_83684BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83684C00"))) PPC_WEAK_FUNC(sub_83684C00);
PPC_FUNC_IMPL(__imp__sub_83684C00) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x83684c18
	sub_83684C18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83684C08"))) PPC_WEAK_FUNC(sub_83684C08);
PPC_FUNC_IMPL(__imp__sub_83684C08) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x83684c18
	sub_83684C18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83684C10"))) PPC_WEAK_FUNC(sub_83684C10);
PPC_FUNC_IMPL(__imp__sub_83684C10) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-312
	ctx.r3.s64 = ctx.r3.s64 + -312;
	// b 0x83684c18
	sub_83684C18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83684C18"))) PPC_WEAK_FUNC(sub_83684C18);
PPC_FUNC_IMPL(__imp__sub_83684C18) {
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
	// addi r7,r11,-24320
	ctx.r7.s64 = ctx.r11.s64 + -24320;
	// addi r6,r10,-24332
	ctx.r6.s64 = ctx.r10.s64 + -24332;
	// addi r5,r9,-24336
	ctx.r5.s64 = ctx.r9.s64 + -24336;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r8,-24304
	ctx.r4.s64 = ctx.r8.s64 + -24304;
	// stw r6,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r6.u32);
	// stw r5,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r4.u32);
	// bl 0x82eaf978
	ctx.lr = 0x83684C68;
	sub_82EAF978(ctx, base);
	// clrlwi r3,r30,31
	ctx.r3.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83684c88
	if (cr6.eq) goto loc_83684C88;
	// bl 0x82595188
	ctx.lr = 0x83684C78;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x83684C88;
	sub_825952B8(ctx, base);
loc_83684C88:
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

__attribute__((alias("__imp__sub_83684CA4"))) PPC_WEAK_FUNC(sub_83684CA4);
PPC_FUNC_IMPL(__imp__sub_83684CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83684CA8"))) PPC_WEAK_FUNC(sub_83684CA8);
PPC_FUNC_IMPL(__imp__sub_83684CA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83684CB0;
	__savegprlr_27(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
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
	// bge cr6,0x83684cf0
	if (!cr6.lt) goto loc_83684CF0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e745e0
	ctx.lr = 0x83684CF0;
	sub_82E745E0(ctx, base);
loc_83684CF0:
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// li r30,15
	ctx.r30.s64 = 15;
	// addi r27,r11,-24164
	ctx.r27.s64 = ctx.r11.s64 + -24164;
	// li r5,5
	ctx.r5.s64 = 5;
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r27,-24
	ctx.r4.s64 = ctx.r27.s64 + -24;
	// stbx r7,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u8);
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
	ctx.lr = 0x83684D38;
	sub_82472FC0(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x83684D44;
	sub_82E74C08(ctx, base);
	// lwz r5,212(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x83684d58
	if (cr6.lt) goto loc_83684D58;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82416268
	ctx.lr = 0x83684D58;
	sub_82416268(ctx, base);
loc_83684D58:
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
	// blt cr6,0x83684d78
	if (cr6.lt) goto loc_83684D78;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83684D78:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
loc_83684D88:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83684d88
	if (!cr6.eq) goto loc_83684D88;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x83684DAC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x83684DB8;
	sub_82E74C08(ctx, base);
	// lwz r10,276(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83684dcc
	if (cr6.lt) goto loc_83684DCC;
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x82416268
	ctx.lr = 0x83684DCC;
	sub_82416268(ctx, base);
loc_83684DCC:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// addi r4,r27,-16
	ctx.r4.s64 = ctx.r27.s64 + -16;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x83684DF4;
	sub_82472FC0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x83684E00;
	sub_82E74C08(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83684e14
	if (cr6.lt) goto loc_83684E14;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82416268
	ctx.lr = 0x83684E14;
	sub_82416268(ctx, base);
loc_83684E14:
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
	ctx.lr = 0x83684E2C;
	sub_82E746C0(ctx, base);
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// addi r4,r27,-8
	ctx.r4.s64 = ctx.r27.s64 + -8;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82472fc0
	ctx.lr = 0x83684E48;
	sub_82472FC0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x83684E54;
	sub_82E74C08(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83684e68
	if (cr6.lt) goto loc_83684E68;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82416268
	ctx.lr = 0x83684E68;
	sub_82416268(ctx, base);
loc_83684E68:
	// lwz r11,136(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 136);
	// addi r4,r28,116
	ctx.r4.s64 = ctx.r28.s64 + 116;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// blt cr6,0x83684e88
	if (cr6.lt) goto loc_83684E88;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83684E88:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
loc_83684E98:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83684e98
	if (!cr6.eq) goto loc_83684E98;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x83684EBC;
	sub_82472FC0(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x83684EC8;
	sub_82E74C08(ctx, base);
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83684edc
	if (cr6.lt) goto loc_83684EDC;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82416268
	ctx.lr = 0x83684EDC;
	sub_82416268(ctx, base);
loc_83684EDC:
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// bl 0x82472fc0
	ctx.lr = 0x83684F04;
	sub_82472FC0(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x83684F10;
	sub_82E74C08(ctx, base);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83684f24
	if (cr6.lt) goto loc_83684F24;
	// lwz r3,224(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x82416268
	ctx.lr = 0x83684F24;
	sub_82416268(ctx, base);
loc_83684F24:
	// lwz r11,164(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 164);
	// addi r4,r28,144
	ctx.r4.s64 = ctx.r28.s64 + 144;
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// blt cr6,0x83684f44
	if (cr6.lt) goto loc_83684F44;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_83684F44:
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
loc_83684F54:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83684f54
	if (!cr6.eq) goto loc_83684F54;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82472fc0
	ctx.lr = 0x83684F78;
	sub_82472FC0(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e74c08
	ctx.lr = 0x83684F84;
	sub_82E74C08(ctx, base);
	// lwz r10,308(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83684f98
	if (cr6.lt) goto loc_83684F98;
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x82416268
	ctx.lr = 0x83684F98;
	sub_82416268(ctx, base);
loc_83684F98:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83684FA4"))) PPC_WEAK_FUNC(sub_83684FA4);
PPC_FUNC_IMPL(__imp__sub_83684FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83684FA8"))) PPC_WEAK_FUNC(sub_83684FA8);
PPC_FUNC_IMPL(__imp__sub_83684FA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x83684FB0;
	__savegprlr_26(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x83691bb8
	ctx.lr = 0x83684FD8;
	sub_83691BB8(ctx, base);
	// lwz r10,216(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r11,220(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x8368531c
	if (!cr6.lt) goto loc_8368531C;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r30,r11,16
	ctx.r30.s64 = ctx.r11.s64 + 16;
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
	// addi r26,r11,-24096
	ctx.r26.s64 = ctx.r11.s64 + -24096;
loc_83685010:
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
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
	ctx.lr = 0x83685044;
	sub_82472FC0(ctx, base);
	// addi r6,r26,-44
	ctx.r6.s64 = ctx.r26.s64 + -44;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,5
	ctx.r7.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8368505C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836850f0
	if (!cr6.eq) goto loc_836850F0;
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// addi r11,r1,272
	ctx.r11.s64 = ctx.r1.s64 + 272;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// ld r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// ld r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r5,280(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// lwz r4,284(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// bl 0x82472fc0
	ctx.lr = 0x83685094;
	sub_82472FC0(ctx, base);
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x836850a8
	if (!cr6.lt) goto loc_836850A8;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
loc_836850A8:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836850AC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836850ac
	if (!cr6.eq) goto loc_836850AC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,20
	ctx.r3.s64 = ctx.r28.s64 + 20;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836850D0;
	sub_824208C8(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836850e4
	if (cr6.lt) goto loc_836850E4;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82416268
	ctx.lr = 0x836850E4;
	sub_82416268(ctx, base);
loc_836850E4:
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
loc_836850F0:
	// addi r6,r26,-36
	ctx.r6.s64 = ctx.r26.s64 + -36;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x83685108;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83685144
	if (!cr6.eq) goto loc_83685144;
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
	// bne cr6,0x8368513c
	if (!cr6.eq) goto loc_8368513C;
	// ld r11,312(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 312);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x83685140
	goto loc_83685140;
loc_8368513C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_83685140:
	// stw r11,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r11.u32);
loc_83685144:
	// addi r6,r26,-28
	ctx.r6.s64 = ctx.r26.s64 + -28;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x8368515C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836851f0
	if (!cr6.eq) goto loc_836851F0;
	// stw r29,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r29.u32);
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
	// ld r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// ld r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// std r9,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// lwz r5,264(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// lwz r4,268(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// bl 0x82472fc0
	ctx.lr = 0x83685194;
	sub_82472FC0(ctx, base);
	// lwz r8,196(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x836851a8
	if (!cr6.lt) goto loc_836851A8;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
loc_836851A8:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_836851AC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x836851ac
	if (!cr6.eq) goto loc_836851AC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,116
	ctx.r3.s64 = ctx.r28.s64 + 116;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x836851D0;
	sub_824208C8(ctx, base);
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x836851e4
	if (cr6.lt) goto loc_836851E4;
	// lwz r3,176(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x82416268
	ctx.lr = 0x836851E4;
	sub_82416268(ctx, base);
loc_836851E4:
	// stw r29,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r29.u32);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stb r31,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r31.u8);
loc_836851F0:
	// addi r6,r26,-20
	ctx.r6.s64 = ctx.r26.s64 + -20;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,16
	ctx.r7.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x83685208;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8368529c
	if (!cr6.eq) goto loc_8368529C;
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
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
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// lwz r5,296(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	// lwz r4,300(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// bl 0x82472fc0
	ctx.lr = 0x83685240;
	sub_82472FC0(ctx, base);
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x83685254
	if (!cr6.lt) goto loc_83685254;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_83685254:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_83685258:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83685258
	if (!cr6.eq) goto loc_83685258;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r28,148
	ctx.r3.s64 = ctx.r28.s64 + 148;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x8368527C;
	sub_824208C8(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83685290
	if (cr6.lt) goto loc_83685290;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82416268
	ctx.lr = 0x83685290;
	sub_82416268(ctx, base);
loc_83685290:
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
loc_8368529C:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r7,16
	ctx.r7.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827a8810
	ctx.lr = 0x836852B4;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x836852f0
	if (!cr6.eq) goto loc_836852F0;
	// ld r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// ld r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,240(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// bne cr6,0x836852e8
	if (!cr6.eq) goto loc_836852E8;
	// ld r11,248(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 248);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x836852ec
	goto loc_836852EC;
loc_836852E8:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_836852EC:
	// stw r11,176(r28)
	PPC_STORE_U32(ctx.r28.u32 + 176, ctx.r11.u32);
loc_836852F0:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83685304
	if (cr6.lt) goto loc_83685304;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82416268
	ctx.lr = 0x83685304;
	sub_82416268(ctx, base);
loc_83685304:
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// bne 0x83685010
	if (!cr0.eq) goto loc_83685010;
loc_8368531C:
	// lwz r31,224(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83685338
	if (cr6.eq) goto loc_83685338;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e56b8
	ctx.lr = 0x83685330;
	sub_839E56B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x83685338;
	sub_82416268(ctx, base);
loc_83685338:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83685344"))) PPC_WEAK_FUNC(sub_83685344);
PPC_FUNC_IMPL(__imp__sub_83685344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83685348"))) PPC_WEAK_FUNC(sub_83685348);
PPC_FUNC_IMPL(__imp__sub_83685348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83685350;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d95768
	ctx.lr = 0x8368535C;
	sub_82D95768(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r30,r11,-24248
	ctx.r30.s64 = ctx.r11.s64 + -24248;
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824208c8
	ctx.lr = 0x83685374;
	sub_824208C8(ctx, base);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// addi r7,r10,-23976
	ctx.r7.s64 = ctx.r10.s64 + -23976;
	// addi r5,r8,-23992
	ctx.r5.s64 = ctx.r8.s64 + -23992;
	// addi r6,r9,-23988
	ctx.r6.s64 = ctx.r9.s64 + -23988;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r5,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r5.u32);
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r6,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r6.u32);
	// stw r29,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r29.u32);
	// addi r3,r31,316
	ctx.r3.s64 = ctx.r31.s64 + 316;
	// stw r28,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r28.u32);
	// addi r4,r30,28
	ctx.r4.s64 = ctx.r30.s64 + 28;
	// stb r29,316(r31)
	PPC_STORE_U8(ctx.r31.u32 + 316, ctx.r29.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836853BC;
	sub_824208C8(ctx, base);
	// stw r28,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r28.u32);
	// stw r29,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r29.u32);
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// stb r29,344(r31)
	PPC_STORE_U8(ctx.r31.u32 + 344, ctx.r29.u8);
	// addi r4,r30,44
	ctx.r4.s64 = ctx.r30.s64 + 44;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x836853D8;
	sub_824208C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836853E4"))) PPC_WEAK_FUNC(sub_836853E4);
PPC_FUNC_IMPL(__imp__sub_836853E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836853E8"))) PPC_WEAK_FUNC(sub_836853E8);
PPC_FUNC_IMPL(__imp__sub_836853E8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x83685490
	sub_83685490(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836853F0"))) PPC_WEAK_FUNC(sub_836853F0);
PPC_FUNC_IMPL(__imp__sub_836853F0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x83685490
	sub_83685490(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_836853F8"))) PPC_WEAK_FUNC(sub_836853F8);
PPC_FUNC_IMPL(__imp__sub_836853F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x83685400;
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
	// addi r8,r11,-23976
	ctx.r8.s64 = ctx.r11.s64 + -23976;
	// addi r7,r10,-23988
	ctx.r7.s64 = ctx.r10.s64 + -23988;
	// addi r6,r9,-23992
	ctx.r6.s64 = ctx.r9.s64 + -23992;
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
	// blt cr6,0x83685444
	if (cr6.lt) goto loc_83685444;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83685444;
	sub_8386D088(ctx, base);
loc_83685444:
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
	// blt cr6,0x83685470
	if (cr6.lt) goto loc_83685470;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x83685470;
	sub_8386D088(ctx, base);
loc_83685470:
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// bl 0x82b6a590
	ctx.lr = 0x83685484;
	sub_82B6A590(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8368548C"))) PPC_WEAK_FUNC(sub_8368548C);
PPC_FUNC_IMPL(__imp__sub_8368548C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83685490"))) PPC_WEAK_FUNC(sub_83685490);
PPC_FUNC_IMPL(__imp__sub_83685490) {
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
	// bl 0x836853f8
	ctx.lr = 0x836854B0;
	sub_836853F8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x836854d0
	if (cr6.eq) goto loc_836854D0;
	// bl 0x82595188
	ctx.lr = 0x836854C0;
	sub_82595188(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x836854D0;
	sub_825952B8(ctx, base);
loc_836854D0:
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

__attribute__((alias("__imp__sub_836854EC"))) PPC_WEAK_FUNC(sub_836854EC);
PPC_FUNC_IMPL(__imp__sub_836854EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_836854F0"))) PPC_WEAK_FUNC(sub_836854F0);
PPC_FUNC_IMPL(__imp__sub_836854F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x836854F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82eaf8d8
	ctx.lr = 0x83685504;
	sub_82EAF8D8(ctx, base);
	// lis r11,-32216
	ctx.r11.s64 = -2111307776;
	// addi r3,r31,220
	ctx.r3.s64 = ctx.r31.s64 + 220;
	// addi r30,r11,-24248
	ctx.r30.s64 = ctx.r11.s64 + -24248;
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824208c8
	ctx.lr = 0x8368551C;
	sub_824208C8(ctx, base);
	// lis r10,-32216
	ctx.r10.s64 = -2111307776;
	// lis r9,-32216
	ctx.r9.s64 = -2111307776;
	// lis r8,-32216
	ctx.r8.s64 = -2111307776;
	// lis r7,-32216
	ctx.r7.s64 = -2111307776;
	// addi r5,r9,-23952
	ctx.r5.s64 = ctx.r9.s64 + -23952;
	// addi r4,r8,-23956
	ctx.r4.s64 = ctx.r8.s64 + -23956;
	// addi r3,r7,-23960
	ctx.r3.s64 = ctx.r7.s64 + -23960;
	// stw r5,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r5.u32);
	// addi r6,r10,-23940
	ctx.r6.s64 = ctx.r10.s64 + -23940;
	// stw r4,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r4.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r3,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r3.u32);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// stw r29,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r29.u32);
	// addi r3,r31,348
	ctx.r3.s64 = ctx.r31.s64 + 348;
	// stw r11,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r11.u32);
	// addi r4,r30,92
	ctx.r4.s64 = ctx.r30.s64 + 92;
	// stb r29,348(r31)
	PPC_STORE_U8(ctx.r31.u32 + 348, ctx.r29.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x824208c8
	ctx.lr = 0x83685570;
	sub_824208C8(ctx, base);
	// stw r29,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83685580"))) PPC_WEAK_FUNC(sub_83685580);
PPC_FUNC_IMPL(__imp__sub_83685580) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-200
	ctx.r3.s64 = ctx.r3.s64 + -200;
	// b 0x83685630
	sub_83685630(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83685588"))) PPC_WEAK_FUNC(sub_83685588);
PPC_FUNC_IMPL(__imp__sub_83685588) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-216
	ctx.r3.s64 = ctx.r3.s64 + -216;
	// b 0x83685630
	sub_83685630(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83685590"))) PPC_WEAK_FUNC(sub_83685590);
PPC_FUNC_IMPL(__imp__sub_83685590) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-312
	ctx.r3.s64 = ctx.r3.s64 + -312;
	// b 0x83685630
	sub_83685630(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83685598"))) PPC_WEAK_FUNC(sub_83685598);
PPC_FUNC_IMPL(__imp__sub_83685598) {
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
	// addi r7,r11,-23940
	ctx.r7.s64 = ctx.r11.s64 + -23940;
	// addi r6,r10,-23952
	ctx.r6.s64 = ctx.r10.s64 + -23952;
	// addi r5,r9,-23956
	ctx.r5.s64 = ctx.r9.s64 + -23956;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r8,-23960
	ctx.r4.s64 = ctx.r8.s64 + -23960;
	// stw r6,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, ctx.r6.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r5,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r5.u32);
	// addi r30,r3,348
	ctx.r30.s64 = ctx.r3.s64 + 348;
	// stw r4,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r4.u32);
	// lwz r3,368(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 368);
	// cmplwi cr6,r3,16
	cr6.compare<uint32_t>(ctx.r3.u32, 16, xer);
	// blt cr6,0x836855f8
	if (cr6.lt) goto loc_836855F8;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8386d088
	ctx.lr = 0x836855F8;
	sub_8386D088(ctx, base);
loc_836855F8:
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
	// bl 0x82eaf978
	ctx.lr = 0x83685614;
	sub_82EAF978(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8368562C"))) PPC_WEAK_FUNC(sub_8368562C);
PPC_FUNC_IMPL(__imp__sub_8368562C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

