#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83249990"))) PPC_WEAK_FUNC(sub_83249990);
PPC_FUNC_IMPL(__imp__sub_83249990) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x83249998;
	__savegprlr_20(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// addi r24,r11,-22544
	ctx.r24.s64 = ctx.r11.s64 + -22544;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x831ff600
	ctx.lr = 0x832499BC;
	sub_831FF600(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x832499d0
	if (cr6.eq) goto loc_832499D0;
	// li r3,-3
	ctx.r3.s64 = -3;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_832499D0:
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r25,r11,24688
	ctx.r25.s64 = ctx.r11.s64 + 24688;
	// lwz r22,44(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 44);
	// lwz r21,48(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + 48);
	// lwz r20,20(r25)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// bl 0x831ffdd8
	ctx.lr = 0x832499EC;
	sub_831FFDD8(ctx, base);
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83249a48
	if (cr6.eq) goto loc_83249A48;
	// lwz r28,404(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 404);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x83249a48
	if (cr6.eq) goto loc_83249A48;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x83249a48
	if (!cr6.gt) goto loc_83249A48;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_83249A18:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// add r30,r29,r11
	ctx.r30.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x83296d78
	ctx.lr = 0x83249A2C;
	sub_83296D78(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x83249a6c
	if (cr6.eq) goto loc_83249A6C;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,24
	ctx.r29.s64 = ctx.r29.s64 + 24;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, xer);
	// blt cr6,0x83249a18
	if (cr6.lt) goto loc_83249A18;
loc_83249A48:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r4,r11,13508
	ctx.r4.s64 = ctx.r11.s64 + 13508;
	// addi r3,r10,13452
	ctx.r3.s64 = ctx.r10.s64 + 13452;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// bl 0x832085e8
	ctx.lr = 0x83249A64;
	sub_832085E8(ctx, base);
	// li r31,-4
	ctx.r31.s64 = -4;
	// b 0x83249c60
	goto loc_83249C60;
loc_83249A6C:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x83254ec0
	ctx.lr = 0x83249A80;
	sub_83254EC0(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x83255a88
	ctx.lr = 0x83249A88;
	sub_83255A88(ctx, base);
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
	// li r29,3
	ctx.r29.s64 = 3;
	// sth r31,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r31.u16);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r10,12288
	ctx.r10.s64 = 12288;
	// sth r29,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r29.u16);
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// lhz r9,16(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 16);
	// lhz r8,18(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 18);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// xori r11,r7,43
	ctx.r11.u64 = ctx.r7.u64 ^ 43;
	// srw r6,r10,r9
	ctx.r6.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// srawi r4,r5,31
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 31;
	// and r11,r4,r6
	ctx.r11.u64 = ctx.r4.u64 & ctx.r6.u64;
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83249b68
	if (cr6.eq) goto loc_83249B68;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// bl 0x832498f8
	ctx.lr = 0x83249B08;
	sub_832498F8(ctx, base);
	// lhz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// sth r31,152(r1)
	PPC_STORE_U16(ctx.r1.u32 + 152, ctx.r31.u16);
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// stb r31,154(r1)
	PPC_STORE_U8(ctx.r1.u32 + 154, ctx.r31.u8);
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r9,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r9.u32);
	// addi r10,r11,-3
	ctx.r10.s64 = ctx.r11.s64 + -3;
	// stw r8,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r8.u32);
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// li r6,33
	ctx.r6.s64 = 33;
	// stw r29,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r29.u32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// stw r7,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r7.u32);
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// stb r31,180(r1)
	PPC_STORE_U8(ctx.r1.u32 + 180, ctx.r31.u8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r10,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r10.u32);
	// bl 0x8322ce48
	ctx.lr = 0x83249B64;
	sub_8322CE48(ctx, base);
	// b 0x83249c28
	goto loc_83249C28;
loc_83249B68:
	// lhz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// lhz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// srw r7,r10,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// xori r11,r8,142
	ctx.r11.u64 = ctx.r8.u64 ^ 142;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// srawi r5,r6,31
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 31;
	// and r4,r5,r7
	ctx.r4.u64 = ctx.r5.u64 & ctx.r7.u64;
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83249c00
	if (cr6.eq) goto loc_83249C00;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r30,20(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x832498f8
	ctx.lr = 0x83249BA4;
	sub_832498F8(ctx, base);
	// lhz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r31,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r31.u32);
	// extsh r4,r7
	ctx.r4.s64 = ctx.r7.s16;
	// stw r31,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r31.u32);
	// addi r8,r1,240
	ctx.r8.s64 = ctx.r1.s64 + 240;
	// stw r29,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r29.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stb r9,228(r1)
	PPC_STORE_U8(ctx.r1.u32 + 228, ctx.r9.u8);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r8,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r8.u32);
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r31.u32);
	// li r6,33
	ctx.r6.s64 = 33;
	// sth r31,200(r1)
	PPC_STORE_U16(ctx.r1.u32 + 200, ctx.r31.u16);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// stw r4,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r4.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r31,202(r1)
	PPC_STORE_U8(ctx.r1.u32 + 202, ctx.r31.u8);
	// stw r11,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r11.u32);
	// stw r10,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r10.u32);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x8322d248
	ctx.lr = 0x83249BFC;
	sub_8322D248(ctx, base);
	// b 0x83249c28
	goto loc_83249C28;
loc_83249C00:
	// bl 0x83225c80
	ctx.lr = 0x83249C04;
	sub_83225C80(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r9,r11,13452
	ctx.r9.s64 = ctx.r11.s64 + 13452;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r4,r10,13472
	ctx.r4.s64 = ctx.r10.s64 + 13472;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x832085e8
	ctx.lr = 0x83249C28;
	sub_832085E8(ctx, base);
loc_83249C28:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8320d9e8
	ctx.lr = 0x83249C30;
	sub_8320D9E8(ctx, base);
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x83249c58
	if (cr6.eq) goto loc_83249C58;
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83249c58
	if (cr6.eq) goto loc_83249C58;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,13464
	ctx.r5.s64 = ctx.r11.s64 + 13464;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83248fe8
	ctx.lr = 0x83249C58;
	sub_83248FE8(ctx, base);
loc_83249C58:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83222030
	ctx.lr = 0x83249C60;
	sub_83222030(ctx, base);
loc_83249C60:
	// stw r20,20(r25)
	PPC_STORE_U32(ctx.r25.u32 + 20, ctx.r20.u32);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stw r22,44(r25)
	PPC_STORE_U32(ctx.r25.u32 + 44, ctx.r22.u32);
	// bl 0x831ffdd8
	ctx.lr = 0x83249C70;
	sub_831FFDD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83249C7C"))) PPC_WEAK_FUNC(sub_83249C7C);
PPC_FUNC_IMPL(__imp__sub_83249C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83249C80"))) PPC_WEAK_FUNC(sub_83249C80);
PPC_FUNC_IMPL(__imp__sub_83249C80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lhz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,1956
	cr6.compare<uint32_t>(ctx.r11.u32, 1956, xer);
	// beq cr6,0x83249c98
	if (cr6.eq) goto loc_83249C98;
	// cmplwi cr6,r11,3074
	cr6.compare<uint32_t>(ctx.r11.u32, 3074, xer);
	// li r3,-4
	ctx.r3.s64 = -4;
	// bnelr cr6
	if (!cr6.eq) return;
loc_83249C98:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83249CA0"))) PPC_WEAK_FUNC(sub_83249CA0);
PPC_FUNC_IMPL(__imp__sub_83249CA0) {
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
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,2075
	cr6.compare<uint32_t>(ctx.r11.u32, 2075, xer);
	// bgt cr6,0x83249d80
	if (cr6.gt) goto loc_83249D80;
	// beq cr6,0x83249d4c
	if (cr6.eq) goto loc_83249D4C;
	// cmplwi cr6,r11,2060
	cr6.compare<uint32_t>(ctx.r11.u32, 2060, xer);
	// bgt cr6,0x83249d10
	if (cr6.gt) goto loc_83249D10;
	// beq cr6,0x83249cfc
	if (cr6.eq) goto loc_83249CFC;
	// cmplwi cr6,r11,1032
	cr6.compare<uint32_t>(ctx.r11.u32, 1032, xer);
	// beq cr6,0x83249cec
	if (cr6.eq) goto loc_83249CEC;
	// cmplwi cr6,r11,1035
	cr6.compare<uint32_t>(ctx.r11.u32, 1035, xer);
	// bne cr6,0x83249f7c
	if (!cr6.eq) goto loc_83249F7C;
loc_83249CE4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83249f80
	goto loc_83249F80;
loc_83249CEC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832836d0
	ctx.lr = 0x83249CF4;
	sub_832836D0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83249f80
	goto loc_83249F80;
loc_83249CFC:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8320cf60
	ctx.lr = 0x83249D08;
	sub_8320CF60(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83249f80
	goto loc_83249F80;
loc_83249D10:
	// cmplwi cr6,r11,2074
	cr6.compare<uint32_t>(ctx.r11.u32, 2074, xer);
	// bne cr6,0x83249f7c
	if (!cr6.eq) goto loc_83249F7C;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83249d34
	if (cr6.eq) goto loc_83249D34;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,13540
	ctx.r3.s64 = ctx.r11.s64 + 13540;
	// bl 0x8320d088
	ctx.lr = 0x83249D34;
	sub_8320D088(ctx, base);
loc_83249D34:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r3,r11,12952
	ctx.r3.s64 = ctx.r11.s64 + 12952;
	// bl 0x8328ed30
	ctx.lr = 0x83249D44;
	sub_8328ED30(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83249f80
	goto loc_83249F80;
loc_83249D4C:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83249d68
	if (cr6.eq) goto loc_83249D68;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,13540
	ctx.r3.s64 = ctx.r11.s64 + 13540;
	// bl 0x8320d088
	ctx.lr = 0x83249D68;
	sub_8320D088(ctx, base);
loc_83249D68:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r3,r11,12952
	ctx.r3.s64 = ctx.r11.s64 + 12952;
	// bl 0x8328edb0
	ctx.lr = 0x83249D78;
	sub_8328EDB0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83249f80
	goto loc_83249F80;
loc_83249D80:
	// addi r11,r11,-2086
	ctx.r11.s64 = ctx.r11.s64 + -2086;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bgt cr6,0x83249f7c
	if (cr6.gt) goto loc_83249F7C;
	// lis r12,-31963
	ctx.r12.s64 = -2094727168;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-25180
	ctx.r12.s64 = ctx.r12.s64 + -25180;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_83249DD4;
	case 1:
		goto loc_83249F7C;
	case 2:
		goto loc_83249F7C;
	case 3:
		goto loc_83249E48;
	case 4:
		goto loc_83249F7C;
	case 5:
		goto loc_83249F7C;
	case 6:
		goto loc_83249F7C;
	case 7:
		goto loc_83249F7C;
	case 8:
		goto loc_83249F7C;
	case 9:
		goto loc_83249F7C;
	case 10:
		goto loc_83249E7C;
	case 11:
		goto loc_83249F10;
	default:
		return;
	}
	// lwz r25,-25132(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -25132);
	// lwz r25,-24708(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -24708);
	// lwz r25,-24708(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -24708);
	// lwz r25,-25016(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -25016);
	// lwz r25,-24708(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -24708);
	// lwz r25,-24708(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -24708);
	// lwz r25,-24708(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -24708);
	// lwz r25,-24708(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -24708);
	// lwz r25,-24708(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -24708);
	// lwz r25,-24708(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -24708);
	// lwz r25,-24964(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -24964);
	// lwz r25,-24816(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -24816);
loc_83249DD4:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x83249df0
	if (cr6.eq) goto loc_83249DF0;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,13540
	ctx.r3.s64 = ctx.r11.s64 + 13540;
	// bl 0x8320d088
	ctx.lr = 0x83249DF0;
	sub_8320D088(ctx, base);
loc_83249DF0:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// blt cr6,0x83249ce4
	if (cr6.lt) goto loc_83249CE4;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x83220140
	ctx.lr = 0x83249E1C;
	sub_83220140(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// li r11,8192
	ctx.r11.s64 = 8192;
	// subfic r10,r6,0
	xer.ca = ctx.r6.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r6.s64;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// lis r4,30720
	ctx.r4.s64 = 2013265920;
	// li r3,7
	ctx.r3.s64 = 7;
	// and r6,r8,r11
	ctx.r6.u64 = ctx.r8.u64 & ctx.r11.u64;
	// bl 0x83203c90
	ctx.lr = 0x83249E40;
	sub_83203C90(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83249f80
	goto loc_83249F80;
loc_83249E48:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x83249e64
	if (cr6.eq) goto loc_83249E64;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,13540
	ctx.r3.s64 = ctx.r11.s64 + 13540;
	// bl 0x8320d088
	ctx.lr = 0x83249E64;
	sub_8320D088(ctx, base);
loc_83249E64:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r3,r11,12952
	ctx.r3.s64 = ctx.r11.s64 + 12952;
	// bl 0x8328ee08
	ctx.lr = 0x83249E74;
	sub_8328EE08(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83249f80
	goto loc_83249F80;
loc_83249E7C:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r30,r11,13540
	ctx.r30.s64 = ctx.r11.s64 + 13540;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// beq cr6,0x83249e9c
	if (cr6.eq) goto loc_83249E9C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8320d088
	ctx.lr = 0x83249E9C;
	sub_8320D088(ctx, base);
loc_83249E9C:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// blt cr6,0x83249ce4
	if (cr6.lt) goto loc_83249CE4;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x83222be8
	ctx.lr = 0x83249ED4;
	sub_83222BE8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r6,-32222
	ctx.r6.s64 = -2111700992;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r6,13664
	ctx.r4.s64 = ctx.r6.s64 + 13664;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x832083d0
	ctx.lr = 0x83249EEC;
	sub_832083D0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r31,r5
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r5.u32, xer);
	// beq cr6,0x83249ce4
	if (cr6.eq) goto loc_83249CE4;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83249ce4
	if (cr6.eq) goto loc_83249CE4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83209d68
	ctx.lr = 0x83249F08;
	sub_83209D68(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83249f80
	goto loc_83249F80;
loc_83249F10:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r30,r11,13540
	ctx.r30.s64 = ctx.r11.s64 + 13540;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// beq cr6,0x83249f30
	if (cr6.eq) goto loc_83249F30;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8320d088
	ctx.lr = 0x83249F30;
	sub_8320D088(ctx, base);
loc_83249F30:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// blt cr6,0x83249ce4
	if (cr6.lt) goto loc_83249CE4;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x83222be8
	ctx.lr = 0x83249F68;
	sub_83222BE8(ctx, base);
	// lis r6,-32222
	ctx.r6.s64 = -2111700992;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r6,13664
	ctx.r4.s64 = ctx.r6.s64 + 13664;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83208568
	ctx.lr = 0x83249F7C;
	sub_83208568(ctx, base);
loc_83249F7C:
	// li r3,-4
	ctx.r3.s64 = -4;
loc_83249F80:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83249F98"))) PPC_WEAK_FUNC(sub_83249F98);
PPC_FUNC_IMPL(__imp__sub_83249F98) {
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
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,3072
	cr6.compare<uint32_t>(ctx.r11.u32, 3072, xer);
	// blt cr6,0x8324a00c
	if (cr6.lt) goto loc_8324A00C;
	// cmplwi cr6,r11,3073
	cr6.compare<uint32_t>(ctx.r11.u32, 3073, xer);
	// ble cr6,0x83249fec
	if (!cr6.gt) goto loc_83249FEC;
	// cmplwi cr6,r11,3074
	cr6.compare<uint32_t>(ctx.r11.u32, 3074, xer);
	// bne cr6,0x8324a00c
	if (!cr6.eq) goto loc_8324A00C;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r11,28(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// rlwinm r4,r11,24,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1;
	// bl 0x8320cf60
	ctx.lr = 0x83249FD8;
	sub_8320CF60(ctx, base);
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
loc_83249FEC:
	// addi r4,r11,-3072
	ctx.r4.s64 = ctx.r11.s64 + -3072;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x8322e5b0
	ctx.lr = 0x83249FF8;
	sub_8322E5B0(ctx, base);
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
loc_8324A00C:
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8324A020"))) PPC_WEAK_FUNC(sub_8324A020);
PPC_FUNC_IMPL(__imp__sub_8324A020) {
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
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,1943
	cr6.compare<uint32_t>(ctx.r11.u32, 1943, xer);
	// bne cr6,0x8324a058
	if (!cr6.eq) goto loc_8324A058;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x8322e5b0
	ctx.lr = 0x8324A044;
	sub_8322E5B0(ctx, base);
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
loc_8324A058:
	// cmplwi cr6,r11,1944
	cr6.compare<uint32_t>(ctx.r11.u32, 1944, xer);
	// bne cr6,0x8324a080
	if (!cr6.eq) goto loc_8324A080;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x8322e5b0
	ctx.lr = 0x8324A06C;
	sub_8322E5B0(ctx, base);
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
loc_8324A080:
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8324A094"))) PPC_WEAK_FUNC(sub_8324A094);
PPC_FUNC_IMPL(__imp__sub_8324A094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8324A098"))) PPC_WEAK_FUNC(sub_8324A098);
PPC_FUNC_IMPL(__imp__sub_8324A098) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8324A0A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x83209aa8
	ctx.lr = 0x8324A0B0;
	sub_83209AA8(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// std r10,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r10.u64);
	// sth r10,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r10.u16);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x8324a0dc
	if (!cr6.eq) goto loc_8324A0DC;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83297bb8
	ctx.lr = 0x8324A0D4;
	sub_83297BB8(ctx, base);
	// std r3,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r3.u64);
	// b 0x8324a278
	goto loc_8324A278;
loc_8324A0DC:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x8324a10c
	if (!cr6.eq) goto loc_8324A10C;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// bl 0x8321ff60
	ctx.lr = 0x8324A104;
	sub_8321FF60(ctx, base);
	// std r3,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r3.u64);
	// b 0x8324a278
	goto loc_8324A278;
loc_8324A10C:
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// ble cr6,0x8324a120
	if (!cr6.gt) goto loc_8324A120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320e738
	ctx.lr = 0x8324A120;
	sub_8320E738(ctx, base);
loc_8324A120:
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83294018
	ctx.lr = 0x8324A130;
	sub_83294018(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// stb r10,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r10.u8);
	// blt cr6,0x8324a230
	if (cr6.lt) goto loc_8324A230;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83222578
	ctx.lr = 0x8324A168;
	sub_83222578(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,100
	cr6.compare<uint32_t>(ctx.r11.u32, 100, xer);
	// bge cr6,0x8324a17c
	if (!cr6.lt) goto loc_8324A17C;
	// addi r11,r11,1900
	ctx.r11.s64 = ctx.r11.s64 + 1900;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
loc_8324A17C:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addis r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 65536;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// addi r9,r9,-1900
	ctx.r9.s64 = ctx.r9.s64 + -1900;
	// sth r9,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r9.u16);
	// blt cr6,0x8324a230
	if (cr6.lt) goto loc_8324A230;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83222578
	ctx.lr = 0x8324A1A4;
	sub_83222578(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stb r3,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r3.u8);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// blt cr6,0x8324a230
	if (cr6.lt) goto loc_8324A230;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83222578
	ctx.lr = 0x8324A1C0;
	sub_83222578(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stb r3,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r3.u8);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// blt cr6,0x8324a230
	if (cr6.lt) goto loc_8324A230;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83222578
	ctx.lr = 0x8324A1DC;
	sub_83222578(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stb r3,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r3.u8);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// blt cr6,0x8324a230
	if (cr6.lt) goto loc_8324A230;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83222578
	ctx.lr = 0x8324A1F8;
	sub_83222578(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stb r3,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r3.u8);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// blt cr6,0x8324a230
	if (cr6.lt) goto loc_8324A230;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83222578
	ctx.lr = 0x8324A214;
	sub_83222578(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stb r3,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r3.u8);
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// blt cr6,0x8324a230
	if (cr6.lt) goto loc_8324A230;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x83222578
	ctx.lr = 0x8324A22C;
	sub_83222578(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_8324A230:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83298ea0
	ctx.lr = 0x8324A238;
	sub_83298EA0(ctx, base);
	// lis r11,4194
	ctx.r11.s64 = 274857984;
	// clrldi r10,r3,32
	ctx.r10.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// ori r9,r11,19923
	ctx.r9.u64 = ctx.r11.u64 | 19923;
	// mulli r8,r10,1000
	ctx.r8.s64 = ctx.r10.s64 * 1000;
	// mulhw r7,r28,r9
	ctx.r7.s64 = (int64_t(ctx.r28.s32) * int64_t(ctx.r9.s32)) >> 32;
	// srawi r11,r7,6
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 6;
	// li r6,1000
	ctx.r6.s64 = 1000;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// divdu r5,r8,r6
	ctx.r5.u64 = PPCDivide(ctx.r8.u64, ctx.r6.u64);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r11,r5,1000
	ctx.r11.s64 = ctx.r5.s64 * 1000;
	// mulli r3,r4,1000
	ctx.r3.s64 = ctx.r4.s64 * 1000;
	// subf r10,r3,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r3.s64;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r9,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r9.u64);
loc_8324A278:
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,8400
	ctx.r10.u64 = ctx.r11.u64 | 8400;
	// lhz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// sraw r7,r10,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r7.s64 = ctx.r10.s32 >> temp.u32;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8324a2a4
	if (cr6.eq) goto loc_8324A2A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x8324A2A4;
	sub_83222030(ctx, base);
loc_8324A2A4:
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// li r10,136
	ctx.r10.s64 = 136;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// sth r10,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r10.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8324A2C0"))) PPC_WEAK_FUNC(sub_8324A2C0);
PPC_FUNC_IMPL(__imp__sub_8324A2C0) {
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
	ctx.lr = 0x8324A2C8;
	__savegprlr_27(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,1246
	cr6.compare<uint32_t>(ctx.r11.u32, 1246, xer);
	// bgt cr6,0x8324a6b8
	if (cr6.gt) goto loc_8324A6B8;
	// beq cr6,0x8324a680
	if (cr6.eq) goto loc_8324A680;
	// addi r11,r11,-1193
	ctx.r11.s64 = ctx.r11.s64 + -1193;
	// cmplwi cr6,r11,14
	cr6.compare<uint32_t>(ctx.r11.u32, 14, xer);
	// bgt cr6,0x8324abdc
	if (cr6.gt) goto loc_8324ABDC;
	// lis r12,-31963
	ctx.r12.s64 = -2094727168;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-23800
	ctx.r12.s64 = ctx.r12.s64 + -23800;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8324A344;
	case 1:
		goto loc_8324A37C;
	case 2:
		goto loc_8324A3B4;
	case 3:
		goto loc_8324A3EC;
	case 4:
		goto loc_8324A424;
	case 5:
		goto loc_8324A45C;
	case 6:
		goto loc_8324A494;
	case 7:
		goto loc_8324A4CC;
	case 8:
		goto loc_8324A504;
	case 9:
		goto loc_8324A53C;
	case 10:
		goto loc_8324A574;
	case 11:
		goto loc_8324A5AC;
	case 12:
		goto loc_8324A5E4;
	case 13:
		goto loc_8324A61C;
	case 14:
		goto loc_8324A650;
	default:
		return;
	}
	// lwz r25,-23740(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -23740);
	// lwz r25,-23684(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -23684);
	// lwz r25,-23628(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -23628);
	// lwz r25,-23572(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -23572);
	// lwz r25,-23516(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -23516);
	// lwz r25,-23460(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -23460);
	// lwz r25,-23404(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -23404);
	// lwz r25,-23348(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -23348);
	// lwz r25,-23292(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -23292);
	// lwz r25,-23236(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -23236);
	// lwz r25,-23180(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -23180);
	// lwz r25,-23124(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -23124);
	// lwz r25,-23068(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -23068);
	// lwz r25,-23012(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -23012);
	// lwz r25,-22960(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -22960);
loc_8324A344:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8324a360
	if (cr6.eq) goto loc_8324A360;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,13060
	ctx.r3.s64 = ctx.r11.s64 + 13060;
	// bl 0x8320d088
	ctx.lr = 0x8324A360;
	sub_8320D088(ctx, base);
loc_8324A360:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83243aa8
	ctx.lr = 0x8324A370;
	sub_83243AA8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8324A37C:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8324a398
	if (cr6.eq) goto loc_8324A398;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,13060
	ctx.r3.s64 = ctx.r11.s64 + 13060;
	// bl 0x8320d088
	ctx.lr = 0x8324A398;
	sub_8320D088(ctx, base);
loc_8324A398:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83243aa8
	ctx.lr = 0x8324A3A8;
	sub_83243AA8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8324A3B4:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8324a3d0
	if (cr6.eq) goto loc_8324A3D0;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,13060
	ctx.r3.s64 = ctx.r11.s64 + 13060;
	// bl 0x8320d088
	ctx.lr = 0x8324A3D0;
	sub_8320D088(ctx, base);
loc_8324A3D0:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83243b48
	ctx.lr = 0x8324A3E0;
	sub_83243B48(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8324A3EC:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8324a408
	if (cr6.eq) goto loc_8324A408;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,13060
	ctx.r3.s64 = ctx.r11.s64 + 13060;
	// bl 0x8320d088
	ctx.lr = 0x8324A408;
	sub_8320D088(ctx, base);
loc_8324A408:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83243b48
	ctx.lr = 0x8324A418;
	sub_83243B48(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8324A424:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8324a440
	if (cr6.eq) goto loc_8324A440;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,13060
	ctx.r3.s64 = ctx.r11.s64 + 13060;
	// bl 0x8320d088
	ctx.lr = 0x8324A440;
	sub_8320D088(ctx, base);
loc_8324A440:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83243be0
	ctx.lr = 0x8324A450;
	sub_83243BE0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8324A45C:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8324a478
	if (cr6.eq) goto loc_8324A478;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,13060
	ctx.r3.s64 = ctx.r11.s64 + 13060;
	// bl 0x8320d088
	ctx.lr = 0x8324A478;
	sub_8320D088(ctx, base);
loc_8324A478:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83243be0
	ctx.lr = 0x8324A488;
	sub_83243BE0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8324A494:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8324a4b0
	if (cr6.eq) goto loc_8324A4B0;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,13060
	ctx.r3.s64 = ctx.r11.s64 + 13060;
	// bl 0x8320d088
	ctx.lr = 0x8324A4B0;
	sub_8320D088(ctx, base);
loc_8324A4B0:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83243c78
	ctx.lr = 0x8324A4C0;
	sub_83243C78(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8324A4CC:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8324a4e8
	if (cr6.eq) goto loc_8324A4E8;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,13060
	ctx.r3.s64 = ctx.r11.s64 + 13060;
	// bl 0x8320d088
	ctx.lr = 0x8324A4E8;
	sub_8320D088(ctx, base);
loc_8324A4E8:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83243d10
	ctx.lr = 0x8324A4F8;
	sub_83243D10(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8324A504:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8324a520
	if (cr6.eq) goto loc_8324A520;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,13060
	ctx.r3.s64 = ctx.r11.s64 + 13060;
	// bl 0x8320d088
	ctx.lr = 0x8324A520;
	sub_8320D088(ctx, base);
loc_8324A520:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83243d10
	ctx.lr = 0x8324A530;
	sub_83243D10(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8324A53C:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8324a558
	if (cr6.eq) goto loc_8324A558;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,13060
	ctx.r3.s64 = ctx.r11.s64 + 13060;
	// bl 0x8320d088
	ctx.lr = 0x8324A558;
	sub_8320D088(ctx, base);
loc_8324A558:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83243da8
	ctx.lr = 0x8324A568;
	sub_83243DA8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8324A574:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8324a590
	if (cr6.eq) goto loc_8324A590;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,13060
	ctx.r3.s64 = ctx.r11.s64 + 13060;
	// bl 0x8320d088
	ctx.lr = 0x8324A590;
	sub_8320D088(ctx, base);
loc_8324A590:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83243da8
	ctx.lr = 0x8324A5A0;
	sub_83243DA8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8324A5AC:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8324a5c8
	if (cr6.eq) goto loc_8324A5C8;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,13060
	ctx.r3.s64 = ctx.r11.s64 + 13060;
	// bl 0x8320d088
	ctx.lr = 0x8324A5C8;
	sub_8320D088(ctx, base);
loc_8324A5C8:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83243e40
	ctx.lr = 0x8324A5D8;
	sub_83243E40(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8324A5E4:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8324a600
	if (cr6.eq) goto loc_8324A600;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,13060
	ctx.r3.s64 = ctx.r11.s64 + 13060;
	// bl 0x8320d088
	ctx.lr = 0x8324A600;
	sub_8320D088(ctx, base);
loc_8324A600:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83243e40
	ctx.lr = 0x8324A610;
	sub_83243E40(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8324A61C:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8324a638
	if (cr6.eq) goto loc_8324A638;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,13060
	ctx.r3.s64 = ctx.r11.s64 + 13060;
	// bl 0x8320d088
	ctx.lr = 0x8324A638;
	sub_8320D088(ctx, base);
loc_8324A638:
	// ld r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x832238c0
	ctx.lr = 0x8324A644;
	sub_832238C0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8324A650:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8324a66c
	if (cr6.eq) goto loc_8324A66C;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,13060
	ctx.r3.s64 = ctx.r11.s64 + 13060;
	// bl 0x8320d088
	ctx.lr = 0x8324A66C;
	sub_8320D088(ctx, base);
loc_8324A66C:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83243f78
	ctx.lr = 0x8324A674;
	sub_83243F78(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8324A680:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8324a69c
	if (cr6.eq) goto loc_8324A69C;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,13060
	ctx.r3.s64 = ctx.r11.s64 + 13060;
	// bl 0x8320d088
	ctx.lr = 0x8324A69C;
	sub_8320D088(ctx, base);
loc_8324A69C:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83243c78
	ctx.lr = 0x8324A6AC;
	sub_83243C78(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8324A6B8:
	// cmplwi cr6,r11,2314
	cr6.compare<uint32_t>(ctx.r11.u32, 2314, xer);
	// bgt cr6,0x8324a8bc
	if (cr6.gt) goto loc_8324A8BC;
	// beq cr6,0x8324a8a0
	if (cr6.eq) goto loc_8324A8A0;
	// cmplwi cr6,r11,2308
	cr6.compare<uint32_t>(ctx.r11.u32, 2308, xer);
	// bgt cr6,0x8324a7c4
	if (cr6.gt) goto loc_8324A7C4;
	// beq cr6,0x8324a7a8
	if (cr6.eq) goto loc_8324A7A8;
	// cmplwi cr6,r11,2305
	cr6.compare<uint32_t>(ctx.r11.u32, 2305, xer);
	// bgt cr6,0x8324a760
	if (cr6.gt) goto loc_8324A760;
	// beq cr6,0x8324a744
	if (cr6.eq) goto loc_8324A744;
	// cmplwi cr6,r11,1247
	cr6.compare<uint32_t>(ctx.r11.u32, 1247, xer);
	// blt cr6,0x8324abdc
	if (cr6.lt) goto loc_8324ABDC;
	// cmplwi cr6,r11,1248
	cr6.compare<uint32_t>(ctx.r11.u32, 1248, xer);
	// ble cr6,0x8324a710
	if (!cr6.gt) goto loc_8324A710;
	// cmplwi cr6,r11,2304
	cr6.compare<uint32_t>(ctx.r11.u32, 2304, xer);
	// bne cr6,0x8324abdc
	if (!cr6.eq) goto loc_8324ABDC;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83244058
	ctx.lr = 0x8324A704;
	sub_83244058(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8324A710:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8324a72c
	if (cr6.eq) goto loc_8324A72C;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,13060
	ctx.r3.s64 = ctx.r11.s64 + 13060;
	// bl 0x8320d088
	ctx.lr = 0x8324A72C;
	sub_8320D088(ctx, base);
loc_8324A72C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83243ed8
	ctx.lr = 0x8324A738;
	sub_83243ED8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8324A744:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83244058
	ctx.lr = 0x8324A754;
	sub_83244058(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8324A760:
	// cmplwi cr6,r11,2306
	cr6.compare<uint32_t>(ctx.r11.u32, 2306, xer);
	// beq cr6,0x8324a78c
	if (cr6.eq) goto loc_8324A78C;
	// cmplwi cr6,r11,2307
	cr6.compare<uint32_t>(ctx.r11.u32, 2307, xer);
	// bne cr6,0x8324abdc
	if (!cr6.eq) goto loc_8324ABDC;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83244170
	ctx.lr = 0x8324A780;
	sub_83244170(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8324A78C:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83244170
	ctx.lr = 0x8324A79C;
	sub_83244170(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8324A7A8:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832443c8
	ctx.lr = 0x8324A7B8;
	sub_832443C8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8324A7C4:
	// addi r11,r11,-2309
	ctx.r11.s64 = ctx.r11.s64 + -2309;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x8324abdc
	if (cr6.gt) goto loc_8324ABDC;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8324a804
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8324A804;
	// bdzf 4*cr6+eq,0x8324a804
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8324A804;
	// bdzf 4*cr6+eq,0x8324a868
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8324A868;
	// bne cr6,0x8324a884
	if (!cr6.eq) goto loc_8324A884;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832443c8
	ctx.lr = 0x8324A7F8;
	sub_832443C8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8324A804:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x8324a820
	if (cr6.eq) goto loc_8324A820;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,13060
	ctx.r3.s64 = ctx.r11.s64 + 13060;
	// bl 0x8320d088
	ctx.lr = 0x8324A820;
	sub_8320D088(ctx, base);
loc_8324A820:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// blt cr6,0x8324abd0
	if (cr6.lt) goto loc_8324ABD0;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x83244358
	ctx.lr = 0x8324A850;
	sub_83244358(ctx, base);
	// ld r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x832238c0
	ctx.lr = 0x8324A85C;
	sub_832238C0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8324A868:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832444a8
	ctx.lr = 0x8324A878;
	sub_832444A8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8324A884:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832444a8
	ctx.lr = 0x8324A894;
	sub_832444A8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8324A8A0:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83244588
	ctx.lr = 0x8324A8B0;
	sub_83244588(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8324A8BC:
	// cmplwi cr6,r11,2375
	cr6.compare<uint32_t>(ctx.r11.u32, 2375, xer);
	// bgt cr6,0x8324a9c8
	if (cr6.gt) goto loc_8324A9C8;
	// beq cr6,0x8324a9a0
	if (cr6.eq) goto loc_8324A9A0;
	// addi r11,r11,-2315
	ctx.r11.s64 = ctx.r11.s64 + -2315;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x8324abdc
	if (cr6.gt) goto loc_8324ABDC;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8324a904
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8324A904;
	// bdzf 4*cr6+eq,0x8324a920
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8324A920;
	// bne cr6,0x8324a93c
	if (!cr6.eq) goto loc_8324A93C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83244588
	ctx.lr = 0x8324A8F8;
	sub_83244588(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8324A904:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83244600
	ctx.lr = 0x8324A914;
	sub_83244600(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8324A920:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83244600
	ctx.lr = 0x8324A930;
	sub_83244600(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8324A93C:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x8324a958
	if (cr6.eq) goto loc_8324A958;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,13060
	ctx.r3.s64 = ctx.r11.s64 + 13060;
	// bl 0x8320d088
	ctx.lr = 0x8324A958;
	sub_8320D088(ctx, base);
loc_8324A958:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// blt cr6,0x8324abd0
	if (cr6.lt) goto loc_8324ABD0;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8321ff60
	ctx.lr = 0x8324A984;
	sub_8321FF60(ctx, base);
	// std r3,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r3.u64);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x832238c0
	ctx.lr = 0x8324A994;
	sub_832238C0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8324A9A0:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832447c8
	ctx.lr = 0x8324A9B0;
	sub_832447C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83223bd0
	ctx.lr = 0x8324A9BC;
	sub_83223BD0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8324A9C8:
	// addi r11,r11,-2395
	ctx.r11.s64 = ctx.r11.s64 + -2395;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x8324abdc
	if (cr6.gt) goto loc_8324ABDC;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8324a9ec
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8324A9EC;
	// bdzf 4*cr6+eq,0x8324aa8c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8324AA8C;
	// bdzf 4*cr6+eq,0x8324aa6c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8324AA6C;
	// bne cr6,0x8324ab28
	if (!cr6.eq) goto loc_8324AB28;
loc_8324A9EC:
	// ld r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// li r10,1000
	ctx.r10.s64 = 1000;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// divdu r9,r11,r10
	ctx.r9.u64 = PPCDivide(ctx.r11.u64, ctx.r10.u64);
	// rotlwi r4,r9,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// bl 0x83298e68
	ctx.lr = 0x8324AA04;
	sub_83298E68(ctx, base);
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r1,140
	ctx.r11.s64 = ctx.r1.s64 + 140;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8324AA14:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8324aa14
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8324AA14;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lbz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 124);
	// lbz r9,125(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 125);
	// lis r8,-32221
	ctx.r8.s64 = -2111635456;
	// addi r11,r11,8216
	ctx.r11.s64 = ctx.r11.s64 + 8216;
	// lhz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// rotlwi r6,r10,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lbz r4,123(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 123);
	// addi r3,r11,-48
	ctx.r3.s64 = ctx.r11.s64 + -48;
	// rotlwi r30,r9,2
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// addi r5,r8,13144
	ctx.r5.s64 = ctx.r8.s64 + 13144;
	// addi r9,r7,1900
	ctx.r9.s64 = ctx.r7.s64 + 1900;
	// lwzx r7,r6,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// lwzx r6,r30,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x83297a40
	ctx.lr = 0x8324AA68;
	sub_83297A40(ctx, base);
	// b 0x8324abbc
	goto loc_8324ABBC;
loc_8324AA6C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832448f8
	ctx.lr = 0x8324AA74;
	sub_832448F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83223bd0
	ctx.lr = 0x8324AA80;
	sub_83223BD0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8324AA8C:
	// ld r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// li r10,1000
	ctx.r10.s64 = 1000;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// divdu r9,r11,r10
	ctx.r9.u64 = PPCDivide(ctx.r11.u64, ctx.r10.u64);
	// rotlwi r4,r9,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// bl 0x83298e68
	ctx.lr = 0x8324AAA4;
	sub_83298E68(ctx, base);
	// lbz r6,138(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 138);
	// li r10,12
	ctx.r10.s64 = 12;
	// li r8,-1
	ctx.r8.s64 = -1;
	// subfc r11,r10,r6
	xer.ca = ctx.r6.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// subfze r11,r8
	temp.u8 = ~ctx.r8.u32 + xer.ca < xer.ca;
	ctx.r11.u64 = ~ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// subfic r5,r8,0
	xer.ca = ctx.r8.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r8.s64;
	// subfe r3,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r3,r10
	ctx.r11.u64 = ctx.r3.u64 & ctx.r10.u64;
	// subf. r6,r11,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r11.s64;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne 0x8324aad4
	if (!cr0.eq) goto loc_8324AAD4;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
loc_8324AAD4:
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r1,140
	ctx.r11.s64 = ctx.r1.s64 + 140;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8324AAE4:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8324aae4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8324AAE4;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8324ab00
	if (cr6.eq) goto loc_8324AB00;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r9,r11,6464
	ctx.r9.s64 = ctx.r11.s64 + 6464;
	// b 0x8324ab08
	goto loc_8324AB08;
loc_8324AB00:
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// addi r9,r11,6468
	ctx.r9.s64 = ctx.r11.s64 + 6468;
loc_8324AB08:
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lbz r8,136(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 136);
	// li r4,64
	ctx.r4.s64 = 64;
	// lbz r7,137(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 137);
	// addi r5,r10,13188
	ctx.r5.s64 = ctx.r10.s64 + 13188;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x83297a40
	ctx.lr = 0x8324AB24;
	sub_83297A40(ctx, base);
	// b 0x8324abbc
	goto loc_8324ABBC;
loc_8324AB28:
	// ld r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// li r10,1000
	ctx.r10.s64 = 1000;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// divdu r9,r11,r10
	ctx.r9.u64 = PPCDivide(ctx.r11.u64, ctx.r10.u64);
	// rotlwi r4,r9,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// bl 0x83298cb0
	ctx.lr = 0x8324AB40;
	sub_83298CB0(ctx, base);
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r1,140
	ctx.r11.s64 = ctx.r1.s64 + 140;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8324AB50:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8324ab50
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8324AB50;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lbz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 108);
	// lbz r7,109(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 109);
	// lis r8,-32221
	ctx.r8.s64 = -2111635456;
	// addi r11,r11,8216
	ctx.r11.s64 = ctx.r11.s64 + 8216;
	// lhz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 100);
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// lbz r3,105(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 105);
	// addi r4,r11,-48
	ctx.r4.s64 = ctx.r11.s64 + -48;
	// lbz r27,104(r1)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r1.u32 + 104);
	// rotlwi r29,r7,2
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// lbz r30,106(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 106);
	// addi r7,r10,1900
	ctx.r7.s64 = ctx.r10.s64 + 1900;
	// lbz r28,107(r1)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r1.u32 + 107);
	// addi r5,r8,13208
	ctx.r5.s64 = ctx.r8.s64 + 13208;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwzx r7,r9,r4
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// lwzx r6,r29,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// li r4,64
	ctx.r4.s64 = 64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x83297a40
	ctx.lr = 0x8324ABBC;
	sub_83297A40(ctx, base);
loc_8324ABBC:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x83209c20
	ctx.lr = 0x8324ABC4;
	sub_83209C20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x83223bd0
	ctx.lr = 0x8324ABD0;
	sub_83223BD0(ctx, base);
loc_8324ABD0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8324ABDC:
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8324ABE8"))) PPC_WEAK_FUNC(sub_8324ABE8);
PPC_FUNC_IMPL(__imp__sub_8324ABE8) {
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
	// lhz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-1859
	ctx.r11.s64 = ctx.r11.s64 + -1859;
	// cmplwi cr6,r11,17
	cr6.compare<uint32_t>(ctx.r11.u32, 17, xer);
	// bgt cr6,0x8324ae18
	if (cr6.gt) goto loc_8324AE18;
	// lis r12,-31963
	ctx.r12.s64 = -2094727168;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-21464
	ctx.r12.s64 = ctx.r12.s64 + -21464;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8324AC70;
	case 1:
		goto loc_8324ACB8;
	case 2:
		goto loc_8324AD00;
	case 3:
		goto loc_8324AD18;
	case 4:
		goto loc_8324AD30;
	case 5:
		goto loc_8324AD48;
	case 6:
		goto loc_8324AE18;
	case 7:
		goto loc_8324AE18;
	case 8:
		goto loc_8324AD60;
	case 9:
		goto loc_8324AD78;
	case 10:
		goto loc_8324AD90;
	case 11:
		goto loc_8324ADA8;
	case 12:
		goto loc_8324ADC0;
	case 13:
		goto loc_8324ADD8;
	case 14:
		goto loc_8324ADF0;
	case 15:
		goto loc_8324ADF0;
	case 16:
		goto loc_8324AE18;
	case 17:
		goto loc_8324AE04;
	default:
		return;
	}
	// lwz r25,-21392(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -21392);
	// lwz r25,-21320(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -21320);
	// lwz r25,-21248(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -21248);
	// lwz r25,-21224(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -21224);
	// lwz r25,-21200(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -21200);
	// lwz r25,-21176(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -21176);
	// lwz r25,-20968(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -20968);
	// lwz r25,-20968(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -20968);
	// lwz r25,-21152(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -21152);
	// lwz r25,-21128(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -21128);
	// lwz r25,-21104(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -21104);
	// lwz r25,-21080(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -21080);
	// lwz r25,-21056(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -21056);
	// lwz r25,-21032(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -21032);
	// lwz r25,-21008(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -21008);
	// lwz r25,-21008(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -21008);
	// lwz r25,-20968(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -20968);
	// lwz r25,-20988(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -20988);
loc_8324AC70:
	// lwz r3,12(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// bl 0x83222578
	ctx.lr = 0x8324AC78;
	sub_83222578(ctx, base);
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// li r10,1000
	ctx.r10.s64 = 1000;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// divdu r9,r11,r10
	ctx.r9.u64 = PPCDivide(ctx.r11.u64, ctx.r10.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rotlwi r4,r9,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// bl 0x83298e68
	ctx.lr = 0x8324AC94;
	sub_83298E68(ctx, base);
	// addis r8,r30,1
	ctx.r8.s64 = ctx.r30.s64 + 65536;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r8,r8,-1900
	ctx.r8.s64 = ctx.r8.s64 + -1900;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r8,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r8.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83243a00
	ctx.lr = 0x8324ACB0;
	sub_83243A00(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8324ae1c
	goto loc_8324AE1C;
loc_8324ACB8:
	// lwz r3,12(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// bl 0x83222578
	ctx.lr = 0x8324ACC0;
	sub_83222578(ctx, base);
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// li r10,1000
	ctx.r10.s64 = 1000;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// divdu r9,r11,r10
	ctx.r9.u64 = PPCDivide(ctx.r11.u64, ctx.r10.u64);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rotlwi r4,r9,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// bl 0x83298cb0
	ctx.lr = 0x8324ACDC;
	sub_83298CB0(ctx, base);
	// addis r8,r30,1
	ctx.r8.s64 = ctx.r30.s64 + 65536;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r8,r8,-1900
	ctx.r8.s64 = ctx.r8.s64 + -1900;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// sth r8,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r8.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83243a00
	ctx.lr = 0x8324ACF8;
	sub_83243A00(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8324ae1c
	goto loc_8324AE1C;
loc_8324AD00:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,12(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83244520
	ctx.lr = 0x8324AD10;
	sub_83244520(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8324ae1c
	goto loc_8324AE1C;
loc_8324AD18:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,12(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83244520
	ctx.lr = 0x8324AD28;
	sub_83244520(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8324ae1c
	goto loc_8324AE1C;
loc_8324AD30:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,12(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83243ff0
	ctx.lr = 0x8324AD40;
	sub_83243FF0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8324ae1c
	goto loc_8324AE1C;
loc_8324AD48:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,12(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83243ff0
	ctx.lr = 0x8324AD58;
	sub_83243FF0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8324ae1c
	goto loc_8324AE1C;
loc_8324AD60:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,12(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83244220
	ctx.lr = 0x8324AD70;
	sub_83244220(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8324ae1c
	goto loc_8324AE1C;
loc_8324AD78:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,12(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83244220
	ctx.lr = 0x8324AD88;
	sub_83244220(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8324ae1c
	goto loc_8324AE1C;
loc_8324AD90:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,12(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83244288
	ctx.lr = 0x8324ADA0;
	sub_83244288(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8324ae1c
	goto loc_8324AE1C;
loc_8324ADA8:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,12(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83244288
	ctx.lr = 0x8324ADB8;
	sub_83244288(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8324ae1c
	goto loc_8324AE1C;
loc_8324ADC0:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,12(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832442f0
	ctx.lr = 0x8324ADD0;
	sub_832442F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8324ae1c
	goto loc_8324AE1C;
loc_8324ADD8:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,12(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832442f0
	ctx.lr = 0x8324ADE8;
	sub_832442F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8324ae1c
	goto loc_8324AE1C;
loc_8324ADF0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,12(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// bl 0x83244358
	ctx.lr = 0x8324ADFC;
	sub_83244358(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8324ae1c
	goto loc_8324AE1C;
loc_8324AE04:
	// lwz r3,12(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// bl 0x8321ff60
	ctx.lr = 0x8324AE0C;
	sub_8321FF60(ctx, base);
	// std r3,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r3.u64);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8324ae1c
	goto loc_8324AE1C;
loc_8324AE18:
	// li r3,-4
	ctx.r3.s64 = -4;
loc_8324AE1C:
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

__attribute__((alias("__imp__sub_8324AE34"))) PPC_WEAK_FUNC(sub_8324AE34);
PPC_FUNC_IMPL(__imp__sub_8324AE34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8324AE38"))) PPC_WEAK_FUNC(sub_8324AE38);
PPC_FUNC_IMPL(__imp__sub_8324AE38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8324AE40;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,16
	ctx.r29.s64 = ctx.r3.s64 + 16;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83222030
	ctx.lr = 0x8324AE54;
	sub_83222030(ctx, base);
	// addi r28,r31,24
	ctx.r28.s64 = ctx.r31.s64 + 24;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83222030
	ctx.lr = 0x8324AE60;
	sub_83222030(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8324ae88
	if (cr6.eq) goto loc_8324AE88;
	// bl 0x8320d9e8
	ctx.lr = 0x8324AE74;
	sub_8320D9E8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8324ae88
	if (cr6.eq) goto loc_8324AE88;
	// bl 0x83209d68
	ctx.lr = 0x8324AE84;
	sub_83209D68(ctx, base);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
loc_8324AE88:
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83294018
	ctx.lr = 0x8324AE98;
	sub_83294018(ctx, base);
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// stw r30,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8324AEB4"))) PPC_WEAK_FUNC(sub_8324AEB4);
PPC_FUNC_IMPL(__imp__sub_8324AEB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8324AEB8"))) PPC_WEAK_FUNC(sub_8324AEB8);
PPC_FUNC_IMPL(__imp__sub_8324AEB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8324AEC0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x8324af70
	if (!cr6.gt) goto loc_8324AF70;
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
loc_8324AEE0:
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwzx r31,r26,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8324af5c
	if (cr6.eq) goto loc_8324AF5C;
	// addi r29,r31,16
	ctx.r29.s64 = ctx.r31.s64 + 16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83222030
	ctx.lr = 0x8324AEFC;
	sub_83222030(ctx, base);
	// addi r28,r31,24
	ctx.r28.s64 = ctx.r31.s64 + 24;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83222030
	ctx.lr = 0x8324AF08;
	sub_83222030(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8324af2c
	if (cr6.eq) goto loc_8324AF2C;
	// bl 0x8320d9e8
	ctx.lr = 0x8324AF18;
	sub_8320D9E8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8324af2c
	if (cr6.eq) goto loc_8324AF2C;
	// bl 0x83209d68
	ctx.lr = 0x8324AF28;
	sub_83209D68(ctx, base);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
loc_8324AF2C:
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83294018
	ctx.lr = 0x8324AF3C;
	sub_83294018(ctx, base);
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// stw r30,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r30.u32);
	// bl 0x83209d68
	ctx.lr = 0x8324AF54;
	sub_83209D68(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// stwx r30,r26,r11
	PPC_STORE_U32(ctx.r26.u32 + ctx.r11.u32, ctx.r30.u32);
loc_8324AF5C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmpw cr6,r25,r11
	cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, xer);
	// blt cr6,0x8324aee0
	if (cr6.lt) goto loc_8324AEE0;
loc_8324AF70:
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8324af84
	if (cr6.eq) goto loc_8324AF84;
	// bl 0x83209d68
	ctx.lr = 0x8324AF80;
	sub_83209D68(ctx, base);
	// stw r30,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r30.u32);
loc_8324AF84:
	// stw r30,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r30.u32);
	// stw r30,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r30.u32);
	// stw r30,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r30.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8324AF98"))) PPC_WEAK_FUNC(sub_8324AF98);
PPC_FUNC_IMPL(__imp__sub_8324AF98) {
	PPC_FUNC_PROLOGUE();
	// b 0x8324aeb8
	sub_8324AEB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8324AF9C"))) PPC_WEAK_FUNC(sub_8324AF9C);
PPC_FUNC_IMPL(__imp__sub_8324AF9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8324AFA0"))) PPC_WEAK_FUNC(sub_8324AFA0);
PPC_FUNC_IMPL(__imp__sub_8324AFA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8324AFA8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r11,24688
	ctx.r28.s64 = ctx.r11.s64 + 24688;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8324afd4
	if (cr6.eq) goto loc_8324AFD4;
	// lwz r31,400(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 400);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x8324affc
	if (!cr6.eq) goto loc_8324AFFC;
loc_8324AFD4:
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x83209aa8
	ctx.lr = 0x8324AFDC;
	sub_83209AA8(ctx, base);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8324affc
	if (cr6.eq) goto loc_8324AFFC;
	// stw r3,400(r11)
	PPC_STORE_U32(ctx.r11.u32 + 400, ctx.r3.u32);
loc_8324AFFC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x8324b078
	if (!cr6.gt) goto loc_8324B078;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8324B014:
	// lwzx r30,r11,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8324b044
	if (cr6.eq) goto loc_8324B044;
	// lhz r9,2(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8324b078
	if (cr6.eq) goto loc_8324B078;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r28,r9
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r9.s32, xer);
	// blt cr6,0x8324b014
	if (cr6.lt) goto loc_8324B014;
	// b 0x8324b078
	goto loc_8324B078;
loc_8324B044:
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x83209aa8
	ctx.lr = 0x8324B04C;
	sub_83209AA8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
	// bl 0x83294018
	ctx.lr = 0x8324B068;
	sub_83294018(ctx, base);
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// stw r29,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r29.u32);
	// stw r29,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r29.u32);
loc_8324B078:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, xer);
	// blt cr6,0x8324b0dc
	if (cr6.lt) goto loc_8324B0DC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x83209df8
	ctx.lr = 0x8324B094;
	sub_83209DF8(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x83209aa8
	ctx.lr = 0x8324B0A0;
	sub_83209AA8(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,32
	ctx.r5.s64 = 32;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stwx r3,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r3.u32);
	// bl 0x83294018
	ctx.lr = 0x8324B0C0;
	sub_83294018(ctx, base);
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// stw r29,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r29.u32);
	// stw r29,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r29.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
loc_8324B0DC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addic. r11,r11,1
	xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r11.s64 = ctx.r11.s64 + 1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne 0x8324b0f4
	if (!cr0.eq) goto loc_8324B0F4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_8324B0F4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// sth r11,2(r30)
	PPC_STORE_U16(ctx.r30.u32 + 2, ctx.r11.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8324B108"))) PPC_WEAK_FUNC(sub_8324B108);
PPC_FUNC_IMPL(__imp__sub_8324B108) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8324B110;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8324afa0
	ctx.lr = 0x8324B120;
	sub_8324AFA0(ctx, base);
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8324b13c
	if (cr6.eq) goto loc_8324B13C;
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// sth r10,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r10.u16);
loc_8324B13C:
	// lwz r31,12(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lhz r28,2(r30)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// ori r10,r11,8400
	ctx.r10.u64 = ctx.r11.u64 | 8400;
	// lhz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// sraw r7,r10,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r7.s64 = ctx.r10.s32 >> temp.u32;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8324b16c
	if (cr6.eq) goto loc_8324B16C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x8324B16C;
	sub_83222030(ctx, base);
loc_8324B16C:
	// li r27,3
	ctx.r27.s64 = 3;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// sth r27,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r27.u16);
	// lwz r4,28(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// blt cr6,0x8324b224
	if (cr6.lt) goto loc_8324B224;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// subf r8,r4,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r4.s64;
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r7,2(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// cmplwi cr6,r7,142
	cr6.compare<uint32_t>(ctx.r7.u32, 142, xer);
	// bne cr6,0x8324b208
	if (!cr6.eq) goto loc_8324B208;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x832240b8
	ctx.lr = 0x8324B1BC;
	sub_832240B8(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83220448
	ctx.lr = 0x8324B1C8;
	sub_83220448(ctx, base);
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// addi r28,r31,8
	ctx.r28.s64 = ctx.r31.s64 + 8;
	// lfs f0,23372(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23372);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// addi r31,r11,-2
	ctx.r31.s64 = ctx.r11.s64 + -2;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bge cr6,0x8324b230
	if (!cr6.lt) goto loc_8324B230;
loc_8324B1EC:
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,2(r30)
	PPC_STORE_U16(ctx.r30.u32 + 2, ctx.r11.u16);
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x83222030
	ctx.lr = 0x8324B1FC;
	sub_83222030(ctx, base);
	// li r3,-18
	ctx.r3.s64 = -18;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8324B208:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lhz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r29.u32 + 8);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r4,r11,13548
	ctx.r4.s64 = ctx.r11.s64 + 13548;
	// li r5,142
	ctx.r5.s64 = 142;
	// bl 0x8320d3b8
	ctx.lr = 0x8324B220;
	sub_8320D3B8(ctx, base);
	// b 0x8324b1ec
	goto loc_8324B1EC;
loc_8324B224:
	// li r3,1060
	ctx.r3.s64 = 1060;
	// bl 0x8320cfc8
	ctx.lr = 0x8324B22C;
	sub_8320CFC8(ctx, base);
	// b 0x8324b1ec
	goto loc_8324B1EC;
loc_8324B230:
	// ble cr6,0x8324b2bc
	if (!cr6.gt) goto loc_8324B2BC;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x83209aa8
	ctx.lr = 0x8324B23C;
	sub_83209AA8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// sth r27,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r27.u16);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x8320db50
	ctx.lr = 0x8324B278;
	sub_8320DB50(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// subf r8,r31,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r31.s64;
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ble cr6,0x8324b2bc
	if (!cr6.gt) goto loc_8324B2BC;
loc_8324B29C:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832240b8
	ctx.lr = 0x8324B2AC;
	sub_832240B8(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// bne 0x8324b29c
	if (!cr0.eq) goto loc_8324B29C;
loc_8324B2BC:
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8324b2e8
	if (!cr6.eq) goto loc_8324B2E8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8324B2E8:
	// lfs f0,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8324B2FC"))) PPC_WEAK_FUNC(sub_8324B2FC);
PPC_FUNC_IMPL(__imp__sub_8324B2FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8324B300"))) PPC_WEAK_FUNC(sub_8324B300);
PPC_FUNC_IMPL(__imp__sub_8324B300) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x8324B308;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// lwz r4,28(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// beq cr6,0x8324b328
	if (cr6.eq) goto loc_8324B328;
	// li r3,1061
	ctx.r3.s64 = 1061;
	// bl 0x8320cfc8
	ctx.lr = 0x8324B328;
	sub_8320CFC8(ctx, base);
loc_8324B328:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8324b388
	if (cr6.eq) goto loc_8324B388;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222578
	ctx.lr = 0x8324B358;
	sub_83222578(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8324b394
	if (!cr6.eq) goto loc_8324B394;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83225c80
	ctx.lr = 0x8324B36C;
	sub_83225C80(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r9,r11,13716
	ctx.r9.s64 = ctx.r11.s64 + 13716;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r10,13676
	ctx.r4.s64 = ctx.r10.s64 + 13676;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x832085e8
	ctx.lr = 0x8324B388;
	sub_832085E8(ctx, base);
loc_8324B388:
	// li r3,-7
	ctx.r3.s64 = -7;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_8324B394:
	// lis r10,-31748
	ctx.r10.s64 = -2080636928;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r9,r10,24688
	ctx.r9.s64 = ctx.r10.s64 + 24688;
	// addi r24,r11,13716
	ctx.r24.s64 = ctx.r11.s64 + 13716;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8324b488
	if (cr6.eq) goto loc_8324B488;
	// lwz r23,400(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 400);
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(ctx.r23.u32, 0, xer);
	// beq cr6,0x8324b488
	if (cr6.eq) goto loc_8324B488;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// li r22,0
	ctx.r22.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x8324b488
	if (!cr6.gt) goto loc_8324B488;
	// lis r8,-32221
	ctx.r8.s64 = -2111635456;
	// lis r7,-32221
	ctx.r7.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r29,r8,13664
	ctx.r29.s64 = ctx.r8.s64 + 13664;
	// addi r28,r7,13648
	ctx.r28.s64 = ctx.r7.s64 + 13648;
	// addi r30,r9,13612
	ctx.r30.s64 = ctx.r9.s64 + 13612;
	// addi r27,r10,13600
	ctx.r27.s64 = ctx.r10.s64 + 13600;
	// addi r26,r11,13584
	ctx.r26.s64 = ctx.r11.s64 + 13584;
loc_8324B3FC:
	// lwz r11,8(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// lwzx r31,r11,r25
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8324b474
	if (cr6.eq) goto loc_8324B474;
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// cmpw cr6,r11,r21
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r21.s32, xer);
	// bne cr6,0x8324b474
	if (!cr6.eq) goto loc_8324B474;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8324b488
	if (!cr6.eq) goto loc_8324B488;
	// clrlwi r10,r20,24
	ctx.r10.u64 = ctx.r20.u32 & 0xFF;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8324b44c
	if (cr6.eq) goto loc_8324B44C;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8324b468
	if (!cr6.eq) goto loc_8324B468;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// b 0x8324b45c
	goto loc_8324B45C;
loc_8324B44C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8324b468
	if (cr6.eq) goto loc_8324B468;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_8324B45C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x832085e8
	ctx.lr = 0x8324B468;
	sub_832085E8(ctx, base);
loc_8324B468:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8324ae38
	ctx.lr = 0x8324B470;
	sub_8324AE38(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
loc_8324B474:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// cmpw cr6,r22,r11
	cr6.compare<int32_t>(ctx.r22.s32, ctx.r11.s32, xer);
	// blt cr6,0x8324b3fc
	if (cr6.lt) goto loc_8324B3FC;
loc_8324B488:
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8324b4a8
	if (!cr6.eq) goto loc_8324B4A8;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r4,r11,13556
	ctx.r4.s64 = ctx.r11.s64 + 13556;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// bl 0x832085e8
	ctx.lr = 0x8324B4A8;
	sub_832085E8(ctx, base);
loc_8324B4A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8324B4B4"))) PPC_WEAK_FUNC(sub_8324B4B4);
PPC_FUNC_IMPL(__imp__sub_8324B4B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8324B4B8"))) PPC_WEAK_FUNC(sub_8324B4B8);
PPC_FUNC_IMPL(__imp__sub_8324B4B8) {
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
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fsubs f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blt cr6,0x8324b4f4
	if (cr6.lt) goto loc_8324B4F4;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8324B4F4:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8324b5f8
	if (!cr6.eq) goto loc_8324B5F8;
	// lhz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// addi r5,r31,16
	ctx.r5.s64 = ctx.r31.s64 + 16;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8324b548
	if (cr6.eq) goto loc_8324B548;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8324b528
	if (cr6.eq) goto loc_8324B528;
	// lhz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
loc_8324B528:
	// addi r9,r31,24
	ctx.r9.s64 = ctx.r31.s64 + 24;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// li r8,20
	ctx.r8.s64 = 20;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8320ef78
	ctx.lr = 0x8324B544;
	sub_8320EF78(ctx, base);
	// b 0x8324b5dc
	goto loc_8324B5DC;
loc_8324B548:
	// lhz r10,26(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 26);
	// li r9,12288
	ctx.r9.s64 = 12288;
	// lhz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 24);
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// srw r6,r9,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r8.u8 & 0x3F));
	// xori r10,r7,142
	ctx.r10.u64 = ctx.r7.u64 ^ 142;
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// srawi r4,r5,31
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 31;
	// and r3,r4,r6
	ctx.r3.u64 = ctx.r4.u64 & ctx.r6.u64;
	// clrlwi r10,r3,31
	ctx.r10.u64 = ctx.r3.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8324b5dc
	if (cr6.eq) goto loc_8324B5DC;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r9,3
	ctx.r9.s64 = 3;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r11.u8);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// stb r8,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r8.u8);
	// beq cr6,0x8324b5c4
	if (cr6.eq) goto loc_8324B5C4;
	// lhz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
loc_8324B5C4:
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// li r6,22
	ctx.r6.s64 = 22;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x8322d248
	ctx.lr = 0x8324B5DC;
	sub_8322D248(ctx, base);
loc_8324B5DC:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// stfs f31,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8324b5f8
	if (cr6.eq) goto loc_8324B5F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8324ae38
	ctx.lr = 0x8324B5F8;
	sub_8324AE38(ctx, base);
loc_8324B5F8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8324B610"))) PPC_WEAK_FUNC(sub_8324B610);
PPC_FUNC_IMPL(__imp__sub_8324B610) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8324B618;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8324b730
	if (cr6.eq) goto loc_8324B730;
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// li r31,0
	ctx.r31.s64 = 0;
	// fsubs f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x8324b65c
	if (!cr6.lt) goto loc_8324B65C;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8324B65C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8324b744
	if (cr6.eq) goto loc_8324B744;
	// li r11,1847
	ctx.r11.s64 = 1847;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// sth r11,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r11.u16);
	// stb r31,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, ctx.r31.u8);
	// bl 0x8322c808
	ctx.lr = 0x8324B694;
	sub_8322C808(ctx, base);
	// li r10,1848
	ctx.r10.s64 = 1848;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// sth r10,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r10.u16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r31,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, ctx.r31.u8);
	// bl 0x8322c808
	ctx.lr = 0x8324B6B8;
	sub_8322C808(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// bl 0x8322bef0
	ctx.lr = 0x8324B6D0;
	sub_8322BEF0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,26
	ctx.r4.s64 = 26;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83266348
	ctx.lr = 0x8324B6E4;
	sub_83266348(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stfs f31,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x8324b744
	if (!cr6.gt) goto loc_8324B744;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// blt cr6,0x8324b744
	if (cr6.lt) goto loc_8324B744;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,31
	ctx.r4.s64 = 31;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83266348
	ctx.lr = 0x8324B714;
	sub_83266348(ctx, base);
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r10,r10,0,30,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// sth r10,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r10.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8324B730:
	// lhz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8324b744
	if (!cr6.eq) goto loc_8324B744;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8324ae38
	ctx.lr = 0x8324B744;
	sub_8324AE38(ctx, base);
loc_8324B744:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8324B750"))) PPC_WEAK_FUNC(sub_8324B750);
PPC_FUNC_IMPL(__imp__sub_8324B750) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8324B758;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8324b784
	if (!cr6.eq) goto loc_8324B784;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// b 0x8324b788
	goto loc_8324B788;
loc_8324B784:
	// lfs f31,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f31.f64 = double(temp.f32);
loc_8324B788:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x8324b808
	if (!cr6.gt) goto loc_8324B808;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_8324B7A0:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8324b7f4
	if (cr6.eq) goto loc_8324B7F4;
	// lhz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8324b7cc
	if (!cr6.eq) goto loc_8324B7CC;
	// bl 0x83209d68
	ctx.lr = 0x8324B7C0;
	sub_83209D68(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stwx r28,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r28.u32);
	// b 0x8324b7f4
	goto loc_8324B7F4;
loc_8324B7CC:
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8324b7f0
	if (cr6.eq) goto loc_8324B7F0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// bl 0x8324b610
	ctx.lr = 0x8324B7EC;
	sub_8324B610(ctx, base);
	// b 0x8324b7f4
	goto loc_8324B7F4;
loc_8324B7F0:
	// bl 0x8324b4b8
	ctx.lr = 0x8324B7F4;
	sub_8324B4B8(ctx, base);
loc_8324B7F4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, xer);
	// blt cr6,0x8324b7a0
	if (cr6.lt) goto loc_8324B7A0;
loc_8324B808:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8324B814"))) PPC_WEAK_FUNC(sub_8324B814);
PPC_FUNC_IMPL(__imp__sub_8324B814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8324B818"))) PPC_WEAK_FUNC(sub_8324B818);
PPC_FUNC_IMPL(__imp__sub_8324B818) {
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
	// bl 0x83235198
	ctx.lr = 0x8324B828;
	sub_83235198(ctx, base);
	// lhz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// li r11,62
	ctx.r11.s64 = 62;
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// li r10,196
	ctx.r10.s64 = 196;
	// sth r11,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r11.u16);
	// rlwinm r8,r8,0,25,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// sth r10,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, ctx.r10.u16);
	// sth r8,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r8.u16);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8324B858"))) PPC_WEAK_FUNC(sub_8324B858);
PPC_FUNC_IMPL(__imp__sub_8324B858) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8324B860;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,28(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83220448
	ctx.lr = 0x8324B8A0;
	sub_83220448(ctx, base);
	// lwz r6,28(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// cmpwi cr6,r6,2
	cr6.compare<int32_t>(ctx.r6.s32, 2, xer);
	// bgt cr6,0x8324b8bc
	if (cr6.gt) goto loc_8324B8BC;
	// addi r3,r28,8
	ctx.r3.s64 = ctx.r28.s64 + 8;
	// bl 0x83222578
	ctx.lr = 0x8324B8B8;
	sub_83222578(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_8324B8BC:
	// li r11,1847
	ctx.r11.s64 = 1847;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8322bef0
	ctx.lr = 0x8324B8E0;
	sub_8322BEF0(ctx, base);
	// li r10,1848
	ctx.r10.s64 = 1848;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r10,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r10.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r30,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r30.u8);
	// bl 0x8322bef0
	ctx.lr = 0x8324B904;
	sub_8322BEF0(ctx, base);
	// bl 0x8324afa0
	ctx.lr = 0x8324B908;
	sub_8324AFA0(ctx, base);
	// lis r9,-32208
	ctx.r9.s64 = -2110783488;
	// lhz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r5,r6,2
	ctx.r5.u64 = ctx.r6.u64 | 2;
	// addi r29,r3,16
	ctx.r29.s64 = ctx.r3.s64 + 16;
	// lfs f0,23372(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 23372);
	ctx.f0.f64 = double(temp.f32);
	// sth r5,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r5.u16);
	// fmuls f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lhz r4,16(r3)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r3.u32 + 16);
	// ori r7,r8,8400
	ctx.r7.u64 = ctx.r8.u64 | 8400;
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// lhz r28,8(r31)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// sraw r11,r7,r3
	temp.u32 = ctx.r3.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r7.s32 < 0) & (((ctx.r7.s32 >> temp.u32) << temp.u32) != ctx.r7.s32);
	ctx.r11.s64 = ctx.r7.s32 >> temp.u32;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8324b958
	if (cr6.eq) goto loc_8324B958;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83222030
	ctx.lr = 0x8324B958;
	sub_83222030(ctx, base);
loc_8324B958:
	// li r11,13
	ctx.r11.s64 = 13;
	// sth r28,2(r29)
	PPC_STORE_U16(ctx.r29.u32 + 2, ctx.r28.u16);
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// li r4,39
	ctx.r4.s64 = 39;
	// sth r11,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r11.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// sth r10,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r10.u16);
	// lhz r5,2(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// bl 0x8322bf60
	ctx.lr = 0x8324B984;
	sub_8322BF60(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8324B990"))) PPC_WEAK_FUNC(sub_8324B990);
PPC_FUNC_IMPL(__imp__sub_8324B990) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8324B998;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x8324b9b8
	if (cr6.eq) goto loc_8324B9B8;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x8324b9b8
	if (cr6.eq) goto loc_8324B9B8;
	// bl 0x8320e738
	ctx.lr = 0x8324B9B8;
	sub_8320E738(ctx, base);
loc_8324B9B8:
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// blt cr6,0x8324ba34
	if (cr6.lt) goto loc_8324BA34;
	// bl 0x83235198
	ctx.lr = 0x8324B9C8;
	sub_83235198(ctx, base);
	// lhz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// li r28,62
	ctx.r28.s64 = 62;
	// clrlwi r7,r9,16
	ctx.r7.u64 = ctx.r9.u32 & 0xFFFF;
	// li r11,196
	ctx.r11.s64 = 196;
	// sth r28,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r28.u16);
	// rlwinm r7,r7,0,25,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// sth r11,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, ctx.r11.u16);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// sth r7,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r7.u16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,12(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// ori r8,r10,8400
	ctx.r8.u64 = ctx.r10.u64 | 8400;
	// lhz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// sraw r4,r8,r5
	temp.u32 = ctx.r5.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r4.s64 = ctx.r8.s32 >> temp.u32;
	// clrlwi r3,r4,31
	ctx.r3.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8324ba18
	if (cr6.eq) goto loc_8324BA18;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83222030
	ctx.lr = 0x8324BA18;
	sub_83222030(ctx, base);
loc_8324BA18:
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// sth r28,2(r30)
	PPC_STORE_U16(ctx.r30.u32 + 2, ctx.r28.u16);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8324b858
	ctx.lr = 0x8324BA34;
	sub_8324B858(ctx, base);
loc_8324BA34:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8324BA3C"))) PPC_WEAK_FUNC(sub_8324BA3C);
PPC_FUNC_IMPL(__imp__sub_8324BA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8324BA40"))) PPC_WEAK_FUNC(sub_8324BA40);
PPC_FUNC_IMPL(__imp__sub_8324BA40) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,39
	ctx.r4.s64 = 39;
	// bl 0x8322c870
	ctx.lr = 0x8324BA60;
	sub_8322C870(ctx, base);
	// lis r10,-31748
	ctx.r10.s64 = -2080636928;
	// addi r9,r10,24688
	ctx.r9.s64 = ctx.r10.s64 + 24688;
	// lwz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8324bac4
	if (cr6.eq) goto loc_8324BAC4;
	// lwz r11,400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 400);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8324bac4
	if (cr6.eq) goto loc_8324BAC4;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x8324bac4
	if (!cr6.gt) goto loc_8324BAC4;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8324BA9C:
	// lwzx r3,r11,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8324bab4
	if (cr6.eq) goto loc_8324BAB4;
	// lhz r6,2(r3)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// cmpw cr6,r6,r7
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, xer);
	// beq cr6,0x8324bac8
	if (cr6.eq) goto loc_8324BAC8;
loc_8324BAB4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// blt cr6,0x8324ba9c
	if (cr6.lt) goto loc_8324BA9C;
loc_8324BAC4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8324BAC8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8324BAD8"))) PPC_WEAK_FUNC(sub_8324BAD8);
PPC_FUNC_IMPL(__imp__sub_8324BAD8) {
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
	// lhz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,1846
	cr6.compare<uint32_t>(ctx.r11.u32, 1846, xer);
	// beq cr6,0x8324bb54
	if (cr6.eq) goto loc_8324BB54;
	// cmplwi cr6,r11,1849
	cr6.compare<uint32_t>(ctx.r11.u32, 1849, xer);
	// beq cr6,0x8324bb0c
	if (cr6.eq) goto loc_8324BB0C;
	// li r3,-4
	ctx.r3.s64 = -4;
	// b 0x8324bb78
	goto loc_8324BB78;
loc_8324BB0C:
	// bl 0x8324ba40
	ctx.lr = 0x8324BB10;
	sub_8324BA40(ctx, base);
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// ori r9,r11,8400
	ctx.r9.u64 = ctx.r11.u64 | 8400;
	// rlwinm r30,r10,30,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	// lhz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// sraw r6,r9,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r6.s64 = ctx.r9.s32 >> temp.u32;
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8324bb44
	if (cr6.eq) goto loc_8324BB44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x8324BB44;
	sub_83222030(ctx, base);
loc_8324BB44:
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r30,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r30.u8);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// b 0x8324bb74
	goto loc_8324BB74;
loc_8324BB54:
	// bl 0x8324ba40
	ctx.lr = 0x8324BB58;
	sub_8324BA40(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-23580(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23580);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x832248d8
	ctx.lr = 0x8324BB74;
	sub_832248D8(ctx, base);
loc_8324BB74:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8324BB78:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8324BB90"))) PPC_WEAK_FUNC(sub_8324BB90);
PPC_FUNC_IMPL(__imp__sub_8324BB90) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1088
	cr6.compare<uint32_t>(ctx.r11.u32, 1088, xer);
	// beq cr6,0x8324bcac
	if (cr6.eq) goto loc_8324BCAC;
	// cmplwi cr6,r11,1228
	cr6.compare<uint32_t>(ctx.r11.u32, 1228, xer);
	// beq cr6,0x8324bc40
	if (cr6.eq) goto loc_8324BC40;
	// cmplwi cr6,r11,2381
	cr6.compare<uint32_t>(ctx.r11.u32, 2381, xer);
	// beq cr6,0x8324bbd8
	if (cr6.eq) goto loc_8324BBD8;
	// li r3,-4
	ctx.r3.s64 = -4;
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
loc_8324BBD8:
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8324bbf0
	if (cr6.eq) goto loc_8324BBF0;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,13728
	ctx.r3.s64 = ctx.r11.s64 + 13728;
	// bl 0x8320d088
	ctx.lr = 0x8324BBF0;
	sub_8320D088(ctx, base);
loc_8324BBF0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8324ba40
	ctx.lr = 0x8324BBF8;
	sub_8324BA40(ctx, base);
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8324bc14
	if (cr6.eq) goto loc_8324BC14;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
loc_8324BC14:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1848
	ctx.r10.s64 = 1848;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r10,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r10.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r11.u8);
	// bl 0x8322bef0
	ctx.lr = 0x8324BC3C;
	sub_8322BEF0(ctx, base);
	// b 0x8324bce8
	goto loc_8324BCE8;
loc_8324BC40:
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8324bc58
	if (cr6.eq) goto loc_8324BC58;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,13728
	ctx.r3.s64 = ctx.r11.s64 + 13728;
	// bl 0x8320d088
	ctx.lr = 0x8324BC58;
	sub_8320D088(ctx, base);
loc_8324BC58:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8324ba40
	ctx.lr = 0x8324BC60;
	sub_8324BA40(ctx, base);
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8324bce8
	if (!cr6.eq) goto loc_8324BCE8;
	// lis r10,-31748
	ctx.r10.s64 = -2080636928;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r8,r10,24688
	ctx.r8.s64 = ctx.r10.s64 + 24688;
	// ori r7,r9,4
	ctx.r7.u64 = ctx.r9.u64 | 4;
	// sth r7,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r7.u16);
	// lwz r11,16(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8324bca0
	if (!cr6.eq) goto loc_8324BCA0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// b 0x8324bce8
	goto loc_8324BCE8;
loc_8324BCA0:
	// lfs f0,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// b 0x8324bce8
	goto loc_8324BCE8;
loc_8324BCAC:
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8324bcc4
	if (cr6.eq) goto loc_8324BCC4;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,13728
	ctx.r3.s64 = ctx.r11.s64 + 13728;
	// bl 0x8320d088
	ctx.lr = 0x8324BCC4;
	sub_8320D088(ctx, base);
loc_8324BCC4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8324ba40
	ctx.lr = 0x8324BCCC;
	sub_8324BA40(ctx, base);
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8324bce8
	if (cr6.eq) goto loc_8324BCE8;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
loc_8324BCE8:
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

__attribute__((alias("__imp__sub_8324BD00"))) PPC_WEAK_FUNC(sub_8324BD00);
PPC_FUNC_IMPL(__imp__sub_8324BD00) {
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
	// lhz r30,8(r3)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,1256
	cr6.compare<uint32_t>(ctx.r30.u32, 1256, xer);
	// blt cr6,0x8324bd74
	if (cr6.lt) goto loc_8324BD74;
	// cmplwi cr6,r30,1257
	cr6.compare<uint32_t>(ctx.r30.u32, 1257, xer);
	// bgt cr6,0x8324bd74
	if (cr6.gt) goto loc_8324BD74;
	// lwz r31,12(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,8400
	ctx.r10.u64 = ctx.r11.u64 | 8400;
	// lhz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// sraw r7,r10,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r7.s64 = ctx.r10.s32 >> temp.u32;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8324bd58
	if (cr6.eq) goto loc_8324BD58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x8324BD58;
	sub_83222030(ctx, base);
loc_8324BD58:
	// li r11,15
	ctx.r11.s64 = 15;
	// sth r30,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r30.u16);
	// li r10,43
	ctx.r10.s64 = 43;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r10,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r10.u16);
	// b 0x8324bd78
	goto loc_8324BD78;
loc_8324BD74:
	// li r3,-4
	ctx.r3.s64 = -4;
loc_8324BD78:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8324BD90"))) PPC_WEAK_FUNC(sub_8324BD90);
PPC_FUNC_IMPL(__imp__sub_8324BD90) {
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
	// lhz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,476
	cr6.compare<uint32_t>(ctx.r11.u32, 476, xer);
	// beq cr6,0x8324bdbc
	if (cr6.eq) goto loc_8324BDBC;
	// li r3,-4
	ctx.r3.s64 = -4;
	// b 0x8324be10
	goto loc_8324BE10;
loc_8324BDBC:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lhz r4,6(r3)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// lwz r3,68(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// bl 0x832117c0
	ctx.lr = 0x8324BDCC;
	sub_832117C0(ctx, base);
	// bl 0x832117e8
	ctx.lr = 0x8324BDD0;
	sub_832117E8(ctx, base);
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r9,r10,8400
	ctx.r9.u64 = ctx.r10.u64 | 8400;
	// lhz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// sraw r6,r9,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r6.s64 = ctx.r9.s32 >> temp.u32;
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8324be00
	if (cr6.eq) goto loc_8324BE00;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x8324BE00;
	sub_83222030(ctx, base);
loc_8324BE00:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
loc_8324BE10:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8324BE28"))) PPC_WEAK_FUNC(sub_8324BE28);
PPC_FUNC_IMPL(__imp__sub_8324BE28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8324BE30;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// add r4,r6,r11
	ctx.r4.u64 = ctx.r6.u64 + ctx.r11.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x8320db50
	ctx.lr = 0x8324BE50;
	sub_8320DB50(ctx, base);
	// lwz r9,16(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// lhz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// lwz r7,24(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lhz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// subf r11,r7,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r7.s64;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// subf r8,r7,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r7.s64;
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r7,r28,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r28.s64;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r30,r11,-8
	ctx.r30.s64 = ctx.r11.s64 + -8;
	// ble cr6,0x8324bebc
	if (!cr6.gt) goto loc_8324BEBC;
loc_8324BE9C:
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832240b8
	ctx.lr = 0x8324BEAC;
	sub_832240B8(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,-8
	ctx.r30.s64 = ctx.r30.s64 + -8;
	// addi r29,r29,-8
	ctx.r29.s64 = ctx.r29.s64 + -8;
	// bne 0x8324be9c
	if (!cr0.eq) goto loc_8324BE9C;
loc_8324BEBC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8324BEC8"))) PPC_WEAK_FUNC(sub_8324BEC8);
PPC_FUNC_IMPL(__imp__sub_8324BEC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8324BED0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r9,28(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// li r31,0
	ctx.r31.s64 = 0;
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// subf r11,r9,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r9.s64;
	// add r6,r11,r5
	ctx.r6.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r7,r11,-8
	ctx.r7.s64 = ctx.r11.s64 + -8;
	// lhz r10,-8(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + -8);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8324c018
	if (cr6.eq) goto loc_8324C018;
	// lhz r9,2(r7)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r7.u32 + 2);
	// li r8,12288
	ctx.r8.s64 = 12288;
	// lwz r29,4(r7)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// srw r6,r8,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r11.u8 & 0x3F));
	// addi r5,r9,-163
	ctx.r5.s64 = ctx.r9.s64 + -163;
	// clrlwi r3,r6,24
	ctx.r3.u64 = ctx.r6.u32 & 0xFF;
	// srawi r11,r5,31
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 31;
	// cntlzw r6,r29
	ctx.r6.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r11,r6,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// and r6,r5,r3
	ctx.r6.u64 = ctx.r5.u64 & ctx.r3.u64;
	// and r5,r6,r11
	ctx.r5.u64 = ctx.r6.u64 & ctx.r11.u64;
	// clrlwi r3,r5,31
	ctx.r3.u64 = ctx.r5.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8324c018
	if (!cr6.eq) goto loc_8324C018;
	// xori r11,r9,32
	ctx.r11.u64 = ctx.r9.u64 ^ 32;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// srw r8,r8,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
	// srawi r6,r9,31
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 31;
	// and r5,r6,r8
	ctx.r5.u64 = ctx.r6.u64 & ctx.r8.u64;
	// clrlwi r3,r5,31
	ctx.r3.u64 = ctx.r5.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8324bf9c
	if (!cr6.eq) goto loc_8324BF9C;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lhz r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r11,13748
	ctx.r5.s64 = ctx.r11.s64 + 13748;
	// li r3,43
	ctx.r3.s64 = 43;
	// bl 0x8320d428
	ctx.lr = 0x8324BF90;
	sub_8320D428(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8324BF9C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x8324bfb0
	if (!cr6.eq) goto loc_8324BFB0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8324BFB0:
	// lwz r31,36(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(ctx.r31.s32, 1, xer);
	// blt cr6,0x8324c018
	if (cr6.lt) goto loc_8324C018;
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x8320db50
	ctx.lr = 0x8324BFCC;
	sub_8320DB50(ctx, base);
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// lwz r9,32(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r7,r31,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r31.s64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r30,0(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// ble cr6,0x8324c018
	if (!cr6.gt) goto loc_8324C018;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_8324BFF8:
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832240b8
	ctx.lr = 0x8324C008;
	sub_832240B8(ctx, base);
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// bne 0x8324bff8
	if (!cr0.eq) goto loc_8324BFF8;
loc_8324C018:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8324C024"))) PPC_WEAK_FUNC(sub_8324C024);
PPC_FUNC_IMPL(__imp__sub_8324C024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8324C028"))) PPC_WEAK_FUNC(sub_8324C028);
PPC_FUNC_IMPL(__imp__sub_8324C028) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8324C030;
	__savegprlr_27(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// sth r9,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r9.u16);
	// sth r31,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r31.u16);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// blt cr6,0x8324c0a0
	if (cr6.lt) goto loc_8324C0A0;
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// rlwinm r10,r6,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r27,r10,r9
	ctx.r27.u64 = ctx.r10.u64 + ctx.r9.u64;
	// b 0x8324c0a4
	goto loc_8324C0A4;
loc_8324C0A0:
	// addi r27,r1,80
	ctx.r27.s64 = ctx.r1.s64 + 80;
loc_8324C0A4:
	// addic. r29,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r29.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bge 0x8324c0b4
	if (!cr0.lt) goto loc_8324C0B4;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// b 0x8324c0d0
	goto loc_8324C0D0;
loc_8324C0B4:
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(ctx.r29.s32, 1, xer);
	// blt cr6,0x8324c0d0
	if (cr6.lt) goto loc_8324C0D0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8324be28
	ctx.lr = 0x8324C0D0;
	sub_8324BE28(ctx, base);
loc_8324C0D0:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r8,24(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r7,32(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lbz r6,36(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 36);
	// lwz r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// stw r9,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
	// sth r31,136(r1)
	PPC_STORE_U16(ctx.r1.u32 + 136, ctx.r31.u16);
	// stw r8,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r8.u32);
	// stb r31,138(r1)
	PPC_STORE_U8(ctx.r1.u32 + 138, ctx.r31.u8);
	// stw r7,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r7.u32);
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// stb r6,164(r1)
	PPC_STORE_U8(ctx.r1.u32 + 164, ctx.r6.u8);
	// stw r29,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r29.u32);
	// beq cr6,0x8324c144
	if (cr6.eq) goto loc_8324C144;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8324c144
	if (cr6.eq) goto loc_8324C144;
	// li r6,30
	ctx.r6.s64 = 30;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8322d248
	ctx.lr = 0x8324C140;
	sub_8322D248(ctx, base);
	// b 0x8324c160
	goto loc_8324C160;
loc_8324C144:
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r7,30
	ctx.r7.s64 = 30;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8322d130
	ctx.lr = 0x8324C160;
	sub_8322D130(ctx, base);
loc_8324C160:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8320d9e8
	ctx.lr = 0x8324C168;
	sub_8320D9E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83222030
	ctx.lr = 0x8324C170;
	sub_83222030(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8324C17C"))) PPC_WEAK_FUNC(sub_8324C17C);
PPC_FUNC_IMPL(__imp__sub_8324C17C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8324C180"))) PPC_WEAK_FUNC(sub_8324C180);
PPC_FUNC_IMPL(__imp__sub_8324C180) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8324C188;
	__savegprlr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x8324c1b4
	if (cr6.eq) goto loc_8324C1B4;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x8324c1b4
	if (cr6.eq) goto loc_8324C1B4;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r3,r11,13736
	ctx.r3.s64 = ctx.r11.s64 + 13736;
	// bl 0x8320d088
	ctx.lr = 0x8324C1B4;
	sub_8320D088(ctx, base);
loc_8324C1B4:
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// sth r9,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r9.u16);
	// sth r31,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r31.u16);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// blt cr6,0x8324c218
	if (cr6.lt) goto loc_8324C218;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// rlwinm r9,r7,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r29,r9,r10
	ctx.r29.u64 = ctx.r9.u64 + ctx.r10.u64;
	// b 0x8324c21c
	goto loc_8324C21C;
loc_8324C218:
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
loc_8324C21C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// blt cr6,0x8324c238
	if (cr6.lt) goto loc_8324C238;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8324bec8
	ctx.lr = 0x8324C238;
	sub_8324BEC8(ctx, base);
loc_8324C238:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r8,24(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r7,32(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lbz r6,36(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 36);
	// lwz r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// stw r9,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
	// sth r31,136(r1)
	PPC_STORE_U16(ctx.r1.u32 + 136, ctx.r31.u16);
	// stw r8,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r8.u32);
	// stb r31,138(r1)
	PPC_STORE_U8(ctx.r1.u32 + 138, ctx.r31.u8);
	// stw r7,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r7.u32);
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// stb r6,164(r1)
	PPC_STORE_U8(ctx.r1.u32 + 164, ctx.r6.u8);
	// stw r3,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r3.u32);
	// beq cr6,0x8324c2ac
	if (cr6.eq) goto loc_8324C2AC;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8324c2ac
	if (cr6.eq) goto loc_8324C2AC;
	// li r6,31
	ctx.r6.s64 = 31;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8322d248
	ctx.lr = 0x8324C2A8;
	sub_8322D248(ctx, base);
	// b 0x8324c2c8
	goto loc_8324C2C8;
loc_8324C2AC:
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r7,31
	ctx.r7.s64 = 31;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8322d130
	ctx.lr = 0x8324C2C8;
	sub_8322D130(ctx, base);
loc_8324C2C8:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8320d9e8
	ctx.lr = 0x8324C2D0;
	sub_8320D9E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83222030
	ctx.lr = 0x8324C2D8;
	sub_83222030(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8324C2E4"))) PPC_WEAK_FUNC(sub_8324C2E4);
PPC_FUNC_IMPL(__imp__sub_8324C2E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8324C2E8"))) PPC_WEAK_FUNC(sub_8324C2E8);
PPC_FUNC_IMPL(__imp__sub_8324C2E8) {
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
	// lhz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,1256
	cr6.compare<uint32_t>(ctx.r11.u32, 1256, xer);
	// beq cr6,0x8324c334
	if (cr6.eq) goto loc_8324C334;
	// cmplwi cr6,r11,1257
	cr6.compare<uint32_t>(ctx.r11.u32, 1257, xer);
	// beq cr6,0x8324c31c
	if (cr6.eq) goto loc_8324C31C;
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8324C31C:
	// bl 0x8324c028
	ctx.lr = 0x8324C320;
	sub_8324C028(ctx, base);
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
loc_8324C334:
	// bl 0x8324c180
	ctx.lr = 0x8324C338;
	sub_8324C180(ctx, base);
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

__attribute__((alias("__imp__sub_8324C34C"))) PPC_WEAK_FUNC(sub_8324C34C);
PPC_FUNC_IMPL(__imp__sub_8324C34C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8324C350"))) PPC_WEAK_FUNC(sub_8324C350);
PPC_FUNC_IMPL(__imp__sub_8324C350) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8324C358;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8324c3b0
	if (cr6.eq) goto loc_8324C3B0;
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r30,4(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// ori r9,r10,8400
	ctx.r9.u64 = ctx.r10.u64 | 8400;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// sraw r7,r9,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r7.s64 = ctx.r9.s32 >> temp.u32;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// lhz r29,8(r30)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8324c398
	if (cr6.eq) goto loc_8324C398;
	// bl 0x83222030
	ctx.lr = 0x8324C398;
	sub_83222030(ctx, base);
loc_8324C398:
	// li r11,12
	ctx.r11.s64 = 12;
	// sth r29,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r29.u16);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8324C3B0:
	// lhz r30,0(r4)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// extsh r11,r30
	ctx.r11.s64 = ctx.r30.s16;
	// addi r10,r11,-349
	ctx.r10.s64 = ctx.r11.s64 + -349;
	// srawi r9,r10,31
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// subfic r8,r11,162
	xer.ca = ctx.r11.u32 <= 162;
	ctx.r8.s64 = 162 - ctx.r11.s64;
	// srawi r7,r8,31
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 31;
	// and r6,r9,r7
	ctx.r6.u64 = ctx.r9.u64 & ctx.r7.u64;
	// clrlwi r5,r6,31
	ctx.r5.u64 = ctx.r6.u32 & 0x1;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8324c414
	if (cr6.eq) goto loc_8324C414;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,8400
	ctx.r9.u64 = ctx.r10.u64 | 8400;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// sraw r7,r9,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r7.s64 = ctx.r9.s32 >> temp.u32;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8324c400
	if (cr6.eq) goto loc_8324C400;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x8324C400;
	sub_83222030(ctx, base);
loc_8324C400:
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r30,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r30.u16);
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
loc_8324C414:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8324C41C"))) PPC_WEAK_FUNC(sub_8324C41C);
PPC_FUNC_IMPL(__imp__sub_8324C41C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8324C420"))) PPC_WEAK_FUNC(sub_8324C420);
PPC_FUNC_IMPL(__imp__sub_8324C420) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8324C428;
	__savegprlr_27(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(ctx.r11.u32, 15, xer);
	// bne cr6,0x8324c454
	if (!cr6.eq) goto loc_8324C454;
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// lhz r27,6(r3)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// b 0x8324c46c
	goto loc_8324C46C;
loc_8324C454:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lhz r27,2(r11)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
loc_8324C46C:
	// sth r27,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r27.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// bl 0x8324c350
	ctx.lr = 0x8324C484;
	sub_8324C350(ctx, base);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// li r28,3
	ctx.r28.s64 = 3;
	// sth r31,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r31.u16);
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// addi r30,r11,-1
	ctx.r30.s64 = ctx.r11.s64 + -1;
	// sth r28,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r28.u16);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(ctx.r30.s32, 1, xer);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// blt cr6,0x8324c4d4
	if (cr6.lt) goto loc_8324C4D4;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8324be28
	ctx.lr = 0x8324C4D4;
	sub_8324BE28(ctx, base);
loc_8324C4D4:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r9,12(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// li r29,1
	ctx.r29.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,68(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r9,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// sth r27,136(r1)
	PPC_STORE_U16(ctx.r1.u32 + 136, ctx.r27.u16);
	// stb r31,138(r1)
	PPC_STORE_U8(ctx.r1.u32 + 138, ctx.r31.u8);
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// stw r30,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r30.u32);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r31.u32);
	// stw r28,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r28.u32);
	// stb r29,164(r1)
	PPC_STORE_U8(ctx.r1.u32 + 164, ctx.r29.u8);
	// bl 0x832794a8
	ctx.lr = 0x8324C52C;
	sub_832794A8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8320d9e8
	ctx.lr = 0x8324C534;
	sub_8320D9E8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83222030
	ctx.lr = 0x8324C53C;
	sub_83222030(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8324C548"))) PPC_WEAK_FUNC(sub_8324C548);
PPC_FUNC_IMPL(__imp__sub_8324C548) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8324C550;
	__savegprlr_27(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(ctx.r11.u32, 15, xer);
	// bne cr6,0x8324c584
	if (!cr6.eq) goto loc_8324C584;
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// lhz r10,6(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// sth r10,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r10.u16);
	// b 0x8324c5a0
	goto loc_8324C5A0;
loc_8324C584:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// sth r9,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r9.u16);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
loc_8324C5A0:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x8324c5c4
	if (cr6.eq) goto loc_8324C5C4;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x8324c5c4
	if (cr6.eq) goto loc_8324C5C4;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,13736
	ctx.r3.s64 = ctx.r11.s64 + 13736;
	// bl 0x8320d088
	ctx.lr = 0x8324C5C4;
	sub_8320D088(ctx, base);
loc_8324C5C4:
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8324c350
	ctx.lr = 0x8324C5D8;
	sub_8324C350(ctx, base);
	// lwz r9,28(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// li r29,3
	ctx.r29.s64 = 3;
	// sth r31,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r31.u16);
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// sth r29,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r29.u16);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// blt cr6,0x8324c628
	if (cr6.lt) goto loc_8324C628;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8324bec8
	ctx.lr = 0x8324C624;
	sub_8324BEC8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8324C628:
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lhz r28,6(r28)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r28.u32 + 6);
	// li r27,1
	ctx.r27.s64 = 1;
	// lwz r30,12(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,68(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// sth r28,136(r1)
	PPC_STORE_U16(ctx.r1.u32 + 136, ctx.r28.u16);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// stw r30,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r30.u32);
	// stb r31,138(r1)
	PPC_STORE_U8(ctx.r1.u32 + 138, ctx.r31.u8);
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r31.u32);
	// stw r29,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r29.u32);
	// stb r27,164(r1)
	PPC_STORE_U8(ctx.r1.u32 + 164, ctx.r27.u8);
	// bl 0x832794a8
	ctx.lr = 0x8324C684;
	sub_832794A8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8320d9e8
	ctx.lr = 0x8324C68C;
	sub_8320D9E8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83222030
	ctx.lr = 0x8324C694;
	sub_83222030(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8324C6A0"))) PPC_WEAK_FUNC(sub_8324C6A0);
PPC_FUNC_IMPL(__imp__sub_8324C6A0) {
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
	// lhz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,1256
	cr6.compare<uint32_t>(ctx.r11.u32, 1256, xer);
	// beq cr6,0x8324c6ec
	if (cr6.eq) goto loc_8324C6EC;
	// cmplwi cr6,r11,1257
	cr6.compare<uint32_t>(ctx.r11.u32, 1257, xer);
	// beq cr6,0x8324c6d4
	if (cr6.eq) goto loc_8324C6D4;
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8324C6D4:
	// bl 0x8324c420
	ctx.lr = 0x8324C6D8;
	sub_8324C420(ctx, base);
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
loc_8324C6EC:
	// bl 0x8324c548
	ctx.lr = 0x8324C6F0;
	sub_8324C548(ctx, base);
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

__attribute__((alias("__imp__sub_8324C704"))) PPC_WEAK_FUNC(sub_8324C704);
PPC_FUNC_IMPL(__imp__sub_8324C704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8324C708"))) PPC_WEAK_FUNC(sub_8324C708);
PPC_FUNC_IMPL(__imp__sub_8324C708) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8324c79c
	if (cr6.eq) goto loc_8324C79C;
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8324c774
	if (cr6.eq) goto loc_8324C774;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r11.u8);
	// bl 0x83217740
	ctx.lr = 0x8324C744;
	sub_83217740(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8324c7a4
	if (!cr6.eq) goto loc_8324C7A4;
	// lhz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// bl 0x832277f8
	ctx.lr = 0x8324C758;
	sub_832277F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8324c7a4
	if (!cr6.eq) goto loc_8324C7A4;
	// bl 0x83227908
	ctx.lr = 0x8324C764;
	sub_83227908(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8324C774:
	// lhz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8324c79c
	if (!cr6.eq) goto loc_8324C79C;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r10,r11,8244
	ctx.r10.s64 = ctx.r11.s64 + 8244;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8324C79C:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lwz r3,8244(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8244);
loc_8324C7A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8324C7B4"))) PPC_WEAK_FUNC(sub_8324C7B4);
PPC_FUNC_IMPL(__imp__sub_8324C7B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8324C7B8"))) PPC_WEAK_FUNC(sub_8324C7B8);
PPC_FUNC_IMPL(__imp__sub_8324C7B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8324C7C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x8324c82c
	if (!cr6.eq) goto loc_8324C82C;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8324c804
	if (cr6.eq) goto loc_8324C804;
	// lwz r6,0(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x8324c80c
	if (!cr6.eq) goto loc_8324C80C;
	// lhz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// bl 0x832277f8
	ctx.lr = 0x8324C7F8;
	sub_832277F8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8324c80c
	if (!cr6.eq) goto loc_8324C80C;
loc_8324C804:
	// bl 0x83227908
	ctx.lr = 0x8324C808;
	sub_83227908(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_8324C80C:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lhz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r5,r11,13772
	ctx.r5.s64 = ctx.r11.s64 + 13772;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83297a40
	ctx.lr = 0x8324C824;
	sub_83297A40(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8324C82C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8324c854
	if (cr6.eq) goto loc_8324C854;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x8324c85c
	if (!cr6.eq) goto loc_8324C85C;
	// lhz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// bl 0x832277f8
	ctx.lr = 0x8324C848;
	sub_832277F8(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8324c85c
	if (!cr6.eq) goto loc_8324C85C;
loc_8324C854:
	// bl 0x83227908
	ctx.lr = 0x8324C858;
	sub_83227908(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
loc_8324C85C:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lhz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,13760
	ctx.r5.s64 = ctx.r11.s64 + 13760;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83297a40
	ctx.lr = 0x8324C878;
	sub_83297A40(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8324C880"))) PPC_WEAK_FUNC(sub_8324C880);
PPC_FUNC_IMPL(__imp__sub_8324C880) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8324C888;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r31,r5,24
	ctx.r31.u64 = ctx.r5.u32 & 0xFF;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// cmplwi cr6,r31,37
	cr6.compare<uint32_t>(ctx.r31.u32, 37, xer);
	// blt cr6,0x8324c8cc
	if (cr6.lt) goto loc_8324C8CC;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,13820
	ctx.r5.s64 = ctx.r11.s64 + 13820;
	// bl 0x83297a40
	ctx.lr = 0x8324C8C0;
	sub_83297A40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83255a88
	ctx.lr = 0x8324C8C8;
	sub_83255A88(ctx, base);
	// b 0x8324c8e8
	goto loc_8324C8E8;
loc_8324C8CC:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,8256
	ctx.r9.s64 = ctx.r11.s64 + 8256;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwzx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x83254ec0
	ctx.lr = 0x8324C8E8;
	sub_83254EC0(ctx, base);
loc_8324C8E8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83255980
	ctx.lr = 0x8324C8F0;
	sub_83255980(ctx, base);
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,34
	cr6.compare<uint32_t>(ctx.r11.u32, 34, xer);
	// bgt cr6,0x8324cbd4
	if (cr6.gt) goto loc_8324CBD4;
	// lis r12,-31963
	ctx.r12.s64 = -2094727168;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-14056
	ctx.r12.s64 = ctx.r12.s64 + -14056;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8324C9A4;
	case 1:
		goto loc_8324CBD4;
	case 2:
		goto loc_8324C9C8;
	case 3:
		goto loc_8324CAB0;
	case 4:
		goto loc_8324CAB0;
	case 5:
		goto loc_8324CBD4;
	case 6:
		goto loc_8324CA20;
	case 7:
		goto loc_8324CBD4;
	case 8:
		goto loc_8324CBD4;
	case 9:
		goto loc_8324CBD4;
	case 10:
		goto loc_8324CBD4;
	case 11:
		goto loc_8324CA20;
	case 12:
		goto loc_8324CA20;
	case 13:
		goto loc_8324CA20;
	case 14:
		goto loc_8324CA20;
	case 15:
		goto loc_8324CB7C;
	case 16:
		goto loc_8324CBD4;
	case 17:
		goto loc_8324CBD4;
	case 18:
		goto loc_8324CBD4;
	case 19:
		goto loc_8324CA20;
	case 20:
		goto loc_8324CA20;
	case 21:
		goto loc_8324CC24;
	case 22:
		goto loc_8324CBD4;
	case 23:
		goto loc_8324CBD4;
	case 24:
		goto loc_8324CBD4;
	case 25:
		goto loc_8324CBD4;
	case 26:
		goto loc_8324CAB0;
	case 27:
		goto loc_8324CAB0;
	case 28:
		goto loc_8324CAB0;
	case 29:
		goto loc_8324CA20;
	case 30:
		goto loc_8324CA20;
	case 31:
		goto loc_8324CBD4;
	case 32:
		goto loc_8324CBD4;
	case 33:
		goto loc_8324CBD4;
	case 34:
		goto loc_8324CBA8;
	default:
		return;
	}
	// lwz r25,-13916(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -13916);
	// lwz r25,-13356(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -13356);
	// lwz r25,-13880(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -13880);
	// lwz r25,-13648(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -13648);
	// lwz r25,-13648(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -13648);
	// lwz r25,-13356(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -13356);
	// lwz r25,-13792(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -13792);
	// lwz r25,-13356(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -13356);
	// lwz r25,-13356(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -13356);
	// lwz r25,-13356(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -13356);
	// lwz r25,-13356(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -13356);
	// lwz r25,-13792(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -13792);
	// lwz r25,-13792(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -13792);
	// lwz r25,-13792(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -13792);
	// lwz r25,-13792(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -13792);
	// lwz r25,-13444(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -13444);
	// lwz r25,-13356(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -13356);
	// lwz r25,-13356(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -13356);
	// lwz r25,-13356(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -13356);
	// lwz r25,-13792(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -13792);
	// lwz r25,-13792(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -13792);
	// lwz r25,-13276(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -13276);
	// lwz r25,-13356(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -13356);
	// lwz r25,-13356(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -13356);
	// lwz r25,-13356(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -13356);
	// lwz r25,-13356(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -13356);
	// lwz r25,-13648(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -13648);
	// lwz r25,-13648(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -13648);
	// lwz r25,-13648(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -13648);
	// lwz r25,-13792(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -13792);
	// lwz r25,-13792(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -13792);
	// lwz r25,-13356(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -13356);
	// lwz r25,-13356(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -13356);
	// lwz r25,-13356(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -13356);
	// lwz r25,-13400(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -13400);
loc_8324C9A4:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// subf r29,r31,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r31.s64;
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
	// bl 0x8324c708
	ctx.lr = 0x8324C9B4;
	sub_8324C708(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r11,13812
	ctx.r5.s64 = ctx.r11.s64 + 13812;
	// addi r7,r26,1
	ctx.r7.s64 = ctx.r26.s64 + 1;
	// b 0x8324cc18
	goto loc_8324CC18;
loc_8324C9C8:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x8324cc24
	if (cr6.eq) goto loc_8324CC24;
	// lwz r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x8324c9f8
	if (!cr6.eq) goto loc_8324C9F8;
	// lhz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r28.u32 + 8);
	// bl 0x832277f8
	ctx.lr = 0x8324C9E4;
	sub_832277F8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8324c9f8
	if (!cr6.eq) goto loc_8324C9F8;
	// bl 0x83227908
	ctx.lr = 0x8324C9F4;
	sub_83227908(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_8324C9F8:
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// add r3,r31,r30
	ctx.r3.u64 = ctx.r31.u64 + ctx.r30.u64;
	// subf r4,r31,r29
	ctx.r4.s64 = ctx.r29.s64 - ctx.r31.s64;
	// addi r5,r10,13804
	ctx.r5.s64 = ctx.r10.s64 + 13804;
	// bl 0x83297a40
	ctx.lr = 0x8324CA0C;
	sub_83297A40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83255a88
	ctx.lr = 0x8324CA14;
	sub_83255A88(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8324CA20:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x8324ca88
	if (cr6.eq) goto loc_8324CA88;
	// lhz r11,2(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 2);
	// li r10,12288
	ctx.r10.s64 = 12288;
	// lhz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// srw r7,r10,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// xori r11,r8,122
	ctx.r11.u64 = ctx.r8.u64 ^ 122;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// srawi r5,r6,31
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 31;
	// and r4,r5,r7
	ctx.r4.u64 = ctx.r5.u64 & ctx.r7.u64;
	// clrlwi r3,r4,31
	ctx.r3.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8324ca88
	if (cr6.eq) goto loc_8324CA88;
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// bl 0x8324c708
	ctx.lr = 0x8324CA60;
	sub_8324C708(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// add r3,r31,r30
	ctx.r3.u64 = ctx.r31.u64 + ctx.r30.u64;
	// subf r4,r31,r29
	ctx.r4.s64 = ctx.r29.s64 - ctx.r31.s64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bl 0x8324c7b8
	ctx.lr = 0x8324CA74;
	sub_8324C7B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83255a88
	ctx.lr = 0x8324CA7C;
	sub_83255A88(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8324CA88:
	// li r5,0
	ctx.r5.s64 = 0;
	// add r3,r31,r30
	ctx.r3.u64 = ctx.r31.u64 + ctx.r30.u64;
	// subf r4,r31,r29
	ctx.r4.s64 = ctx.r29.s64 - ctx.r31.s64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bl 0x8324c7b8
	ctx.lr = 0x8324CA9C;
	sub_8324C7B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83255a88
	ctx.lr = 0x8324CAA4;
	sub_83255A88(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8324CAB0:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x8324caf8
	if (cr6.eq) goto loc_8324CAF8;
	// lhz r11,2(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 2);
	// li r10,12288
	ctx.r10.s64 = 12288;
	// lhz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// srw r7,r10,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// xori r11,r8,122
	ctx.r11.u64 = ctx.r8.u64 ^ 122;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// srawi r5,r6,31
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 31;
	// and r4,r5,r7
	ctx.r4.u64 = ctx.r5.u64 & ctx.r7.u64;
	// clrlwi r3,r4,31
	ctx.r3.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8324caf8
	if (cr6.eq) goto loc_8324CAF8;
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// bl 0x8324c708
	ctx.lr = 0x8324CAF0;
	sub_8324C708(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x8324cafc
	goto loc_8324CAFC;
loc_8324CAF8:
	// li r27,0
	ctx.r27.s64 = 0;
loc_8324CAFC:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x8324cb24
	if (cr6.eq) goto loc_8324CB24;
	// lwz r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x8324cb2c
	if (!cr6.eq) goto loc_8324CB2C;
	// lhz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r28.u32 + 8);
	// bl 0x832277f8
	ctx.lr = 0x8324CB18;
	sub_832277F8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8324cb2c
	if (!cr6.eq) goto loc_8324CB2C;
loc_8324CB24:
	// bl 0x83227908
	ctx.lr = 0x8324CB28;
	sub_83227908(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_8324CB2C:
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// add r3,r31,r30
	ctx.r3.u64 = ctx.r31.u64 + ctx.r30.u64;
	// subf r4,r31,r29
	ctx.r4.s64 = ctx.r29.s64 - ctx.r31.s64;
	// addi r5,r10,-29028
	ctx.r5.s64 = ctx.r10.s64 + -29028;
	// bl 0x83297a40
	ctx.lr = 0x8324CB40;
	sub_83297A40(ctx, base);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x8324cc24
	if (cr6.eq) goto loc_8324CC24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83255988
	ctx.lr = 0x8324CB50;
	sub_83255988(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// subf r4,r3,r29
	ctx.r4.s64 = ctx.r29.s64 - ctx.r3.s64;
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + ctx.r30.u64;
	// addi r5,r11,13804
	ctx.r5.s64 = ctx.r11.s64 + 13804;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// bl 0x83297a40
	ctx.lr = 0x8324CB68;
	sub_83297A40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83255a88
	ctx.lr = 0x8324CB70;
	sub_83255A88(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8324CB7C:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// add r3,r31,r30
	ctx.r3.u64 = ctx.r31.u64 + ctx.r30.u64;
	// subf r4,r31,r29
	ctx.r4.s64 = ctx.r29.s64 - ctx.r31.s64;
	// addi r5,r11,13796
	ctx.r5.s64 = ctx.r11.s64 + 13796;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bl 0x8324c7b8
	ctx.lr = 0x8324CB94;
	sub_8324C7B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83255a88
	ctx.lr = 0x8324CB9C;
	sub_83255A88(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8324CBA8:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// add r3,r31,r30
	ctx.r3.u64 = ctx.r31.u64 + ctx.r30.u64;
	// subf r4,r31,r29
	ctx.r4.s64 = ctx.r29.s64 - ctx.r31.s64;
	// addi r5,r11,13784
	ctx.r5.s64 = ctx.r11.s64 + 13784;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// bl 0x83297a40
	ctx.lr = 0x8324CBC0;
	sub_83297A40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83255a88
	ctx.lr = 0x8324CBC8;
	sub_83255A88(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8324CBD4:
	// subf r29,r31,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r31.s64;
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x8324cc04
	if (cr6.eq) goto loc_8324CC04;
	// lwz r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x8324cc0c
	if (!cr6.eq) goto loc_8324CC0C;
	// lhz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r28.u32 + 8);
	// bl 0x832277f8
	ctx.lr = 0x8324CBF8;
	sub_832277F8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8324cc0c
	if (!cr6.eq) goto loc_8324CC0C;
loc_8324CC04:
	// bl 0x83227908
	ctx.lr = 0x8324CC08;
	sub_83227908(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_8324CC0C:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lhz r7,8(r28)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r28.u32 + 8);
	// addi r5,r11,13772
	ctx.r5.s64 = ctx.r11.s64 + 13772;
loc_8324CC18:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83297a40
	ctx.lr = 0x8324CC24;
	sub_83297A40(ctx, base);
loc_8324CC24:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83255a88
	ctx.lr = 0x8324CC2C;
	sub_83255A88(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8324CC38"))) PPC_WEAK_FUNC(sub_8324CC38);
PPC_FUNC_IMPL(__imp__sub_8324CC38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8324cc4c
	if (!cr6.eq) goto loc_8324CC4C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8324CC4C:
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8324CC5C"))) PPC_WEAK_FUNC(sub_8324CC5C);
PPC_FUNC_IMPL(__imp__sub_8324CC5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8324CC60"))) PPC_WEAK_FUNC(sub_8324CC60);
PPC_FUNC_IMPL(__imp__sub_8324CC60) {
	PPC_FUNC_PROLOGUE();
	// b 0x8322b2e0
	sub_8322B2E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8324CC64"))) PPC_WEAK_FUNC(sub_8324CC64);
PPC_FUNC_IMPL(__imp__sub_8324CC64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8324CC68"))) PPC_WEAK_FUNC(sub_8324CC68);
PPC_FUNC_IMPL(__imp__sub_8324CC68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x8324CC70;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r27,r3,12
	ctx.r27.s64 = ctx.r3.s64 + 12;
	// addi r28,r3,40
	ctx.r28.s64 = ctx.r3.s64 + 40;
	// li r25,13
	ctx.r25.s64 = 13;
	// li r26,0
	ctx.r26.s64 = 0;
loc_8324CC88:
	// lhz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// extsh r31,r11
	ctx.r31.s64 = ctx.r11.s16;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// ble cr6,0x8324ccc0
	if (!cr6.gt) goto loc_8324CCC0;
	// lwz r29,0(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r30,r29,-4
	ctx.r30.s64 = ctx.r29.s64 + -4;
loc_8324CCA0:
	// lwzu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x832356e0
	ctx.lr = 0x8324CCA8;
	sub_832356E0(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x8324cca0
	if (!cr0.eq) goto loc_8324CCA0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83209d68
	ctx.lr = 0x8324CCB8;
	sub_83209D68(ctx, base);
	// stw r26,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r26.u32);
	// sth r26,0(r27)
	PPC_STORE_U16(ctx.r27.u32 + 0, ctx.r26.u16);
loc_8324CCC0:
	// addic. r25,r25,-1
	xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	cr0.compare<int32_t>(ctx.r25.s32, 0, xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r27,r27,2
	ctx.r27.s64 = ctx.r27.s64 + 2;
	// bne 0x8324cc88
	if (!cr0.eq) goto loc_8324CC88;
	// li r11,-1
	ctx.r11.s64 = -1;
	// sth r26,10(r24)
	PPC_STORE_U16(ctx.r24.u32 + 10, ctx.r26.u16);
	// li r10,13
	ctx.r10.s64 = 13;
	// stw r26,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r26.u32);
	// sth r11,6(r24)
	PPC_STORE_U16(ctx.r24.u32 + 6, ctx.r11.u16);
	// sth r10,4(r24)
	PPC_STORE_U16(ctx.r24.u32 + 4, ctx.r10.u16);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8324CCF0"))) PPC_WEAK_FUNC(sub_8324CCF0);
PPC_FUNC_IMPL(__imp__sub_8324CCF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x8324CCF8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8324ce60
	if (!cr6.eq) goto loc_8324CE60;
	// lhz r10,10(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x8324ce60
	if (!cr6.gt) goto loc_8324CE60;
	// lhz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// ori r9,r11,1
	ctx.r9.u64 = ctx.r11.u64 | 1;
	// lhz r8,6(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// extsh r27,r10
	ctx.r27.s64 = ctx.r10.s16;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// cmpw cr6,r27,r7
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r7.s32, xer);
	// bgt cr6,0x8324ce4c
	if (cr6.gt) goto loc_8324CE4C;
	// addi r11,r27,6
	ctx.r11.s64 = ctx.r27.s64 + 6;
	// addi r10,r27,10
	ctx.r10.s64 = ctx.r27.s64 + 10;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r11,r3
	ctx.r28.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r24,r10,r3
	ctx.r24.u64 = ctx.r10.u64 + ctx.r3.u64;
	// li r25,0
	ctx.r25.s64 = 0;
loc_8324CD5C:
	// sth r27,8(r26)
	PPC_STORE_U16(ctx.r26.u32 + 8, ctx.r27.u16);
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// lhz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x8324ce30
	if (!cr6.gt) goto loc_8324CE30;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_8324CD78:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwzx r31,r11,r30
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8324ce18
	if (cr6.eq) goto loc_8324CE18;
	// lhz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 44);
	// cmplwi cr6,r11,2719
	cr6.compare<uint32_t>(ctx.r11.u32, 2719, xer);
	// bne cr6,0x8324cdb0
	if (!cr6.eq) goto loc_8324CDB0;
	// lbz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bne cr6,0x8324cdb0
	if (!cr6.eq) goto loc_8324CDB0;
	// bl 0x83203a80
	ctx.lr = 0x8324CDA4;
	sub_83203A80(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8324ce18
	if (cr6.eq) goto loc_8324CE18;
loc_8324CDB0:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r31,72
	ctx.r4.s64 = ctx.r31.s64 + 72;
	// oris r10,r11,2048
	ctx.r10.u64 = ctx.r11.u64 | 134217728;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// bl 0x8320df88
	ctx.lr = 0x8324CDD4;
	sub_8320DF88(ctx, base);
	// cmpwi cr6,r3,-17
	cr6.compare<int32_t>(ctx.r3.s32, -17, xer);
	// bne cr6,0x8324cde4
	if (!cr6.eq) goto loc_8324CDE4;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8324cdfc
	goto loc_8324CDFC;
loc_8324CDE4:
	// cmpwi cr6,r3,-1000
	cr6.compare<int32_t>(ctx.r3.s32, -1000, xer);
	// bgt cr6,0x8324cdf8
	if (cr6.gt) goto loc_8324CDF8;
	// cmpwi cr6,r3,-3000
	cr6.compare<int32_t>(ctx.r3.s32, -3000, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x8324cdfc
	if (cr6.gt) goto loc_8324CDFC;
loc_8324CDF8:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_8324CDFC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8324ce10
	if (cr6.eq) goto loc_8324CE10;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83285fd8
	ctx.lr = 0x8324CE10;
	sub_83285FD8(ctx, base);
loc_8324CE10:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83222030
	ctx.lr = 0x8324CE18;
	sub_83222030(ctx, base);
loc_8324CE18:
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r29,r10
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, xer);
	// blt cr6,0x8324cd78
	if (cr6.lt) goto loc_8324CD78;
loc_8324CE30:
	// lhz r11,6(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 6);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// cmpw cr6,r27,r10
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r10.s32, xer);
	// ble cr6,0x8324cd5c
	if (!cr6.gt) goto loc_8324CD5C;
loc_8324CE4C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8324cc68
	ctx.lr = 0x8324CE54;
	sub_8324CC68(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
loc_8324CE60:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8324CE68"))) PPC_WEAK_FUNC(sub_8324CE68);
PPC_FUNC_IMPL(__imp__sub_8324CE68) {
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
	// bl 0x83222030
	ctx.lr = 0x8324CE80;
	sub_83222030(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x83222030
	ctx.lr = 0x8324CE88;
	sub_83222030(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x83222030
	ctx.lr = 0x8324CE90;
	sub_83222030(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x83209d68
	ctx.lr = 0x8324CE98;
	sub_83209D68(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83294018
	ctx.lr = 0x8324CEA8;
	sub_83294018(ctx, base);
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

__attribute__((alias("__imp__sub_8324CEBC"))) PPC_WEAK_FUNC(sub_8324CEBC);
PPC_FUNC_IMPL(__imp__sub_8324CEBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8324CEC0"))) PPC_WEAK_FUNC(sub_8324CEC0);
PPC_FUNC_IMPL(__imp__sub_8324CEC0) {
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
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x83209aa8
	ctx.lr = 0x8324CED8;
	sub_83209AA8(ctx, base);
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83294018
	ctx.lr = 0x8324CEE8;
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

__attribute__((alias("__imp__sub_8324CF00"))) PPC_WEAK_FUNC(sub_8324CF00);
PPC_FUNC_IMPL(__imp__sub_8324CF00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8324CF08;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8324cfa8
	if (cr6.eq) goto loc_8324CFA8;
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x8324cfa8
	if (!cr6.gt) goto loc_8324CFA8;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// ble cr6,0x8324cf98
	if (!cr6.gt) goto loc_8324CF98;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_8324CF3C:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// add r31,r30,r11
	ctx.r31.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8324cf80
	if (cr6.eq) goto loc_8324CF80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222030
	ctx.lr = 0x8324CF58;
	sub_83222030(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x83222030
	ctx.lr = 0x8324CF60;
	sub_83222030(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x83222030
	ctx.lr = 0x8324CF68;
	sub_83222030(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x83209d68
	ctx.lr = 0x8324CF70;
	sub_83209D68(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83294018
	ctx.lr = 0x8324CF80;
	sub_83294018(ctx, base);
loc_8324CF80:
	// lhz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r28,r10
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, xer);
	// blt cr6,0x8324cf3c
	if (cr6.lt) goto loc_8324CF3C;
loc_8324CF98:
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x83209d68
	ctx.lr = 0x8324CFA0;
	sub_83209D68(ctx, base);
	// stw r27,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r27.u32);
	// sth r27,4(r29)
	PPC_STORE_U16(ctx.r29.u32 + 4, ctx.r27.u16);
loc_8324CFA8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8324CFB0"))) PPC_WEAK_FUNC(sub_8324CFB0);
PPC_FUNC_IMPL(__imp__sub_8324CFB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8324CFB8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8324cfd8
	if (!cr6.eq) goto loc_8324CFD8;
loc_8324CFCC:
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8324CFD8:
	// lhz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x8324cfcc
	if (!cr6.gt) goto loc_8324CFCC;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8324CFF4:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// add r31,r30,r11
	ctx.r31.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8324d04c
	if (cr6.eq) goto loc_8324D04C;
	// lhz r11,30(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 30);
	// clrlwi r10,r26,16
	ctx.r10.u64 = ctx.r26.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8324d04c
	if (!cr6.eq) goto loc_8324D04C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r27,1
	ctx.r27.s64 = 1;
	// bl 0x83222030
	ctx.lr = 0x8324D024;
	sub_83222030(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x83222030
	ctx.lr = 0x8324D02C;
	sub_83222030(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x83222030
	ctx.lr = 0x8324D034;
	sub_83222030(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x83209d68
	ctx.lr = 0x8324D03C;
	sub_83209D68(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83294018
	ctx.lr = 0x8324D04C;
	sub_83294018(ctx, base);
loc_8324D04C:
	// lhz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r28,r10
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, xer);
	// blt cr6,0x8324cff4
	if (cr6.lt) goto loc_8324CFF4;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// li r10,-4
	ctx.r10.s64 = -4;
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8324D080"))) PPC_WEAK_FUNC(sub_8324D080);
PPC_FUNC_IMPL(__imp__sub_8324D080) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x8324D088;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8324d174
	if (cr6.eq) goto loc_8324D174;
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x8324d174
	if (!cr6.gt) goto loc_8324D174;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8324d174
	if (cr6.eq) goto loc_8324D174;
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// li r24,12288
	ctx.r24.s64 = 12288;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// srw r8,r24,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r24.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8324d174
	if (cr6.eq) goto loc_8324D174;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x8324d174
	if (!cr6.gt) goto loc_8324D174;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r27,r10,14244
	ctx.r27.s64 = ctx.r10.s64 + 14244;
	// addi r26,r11,14204
	ctx.r26.s64 = ctx.r11.s64 + 14204;
loc_8324D0F4:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8324d15c
	if (cr6.eq) goto loc_8324D15C;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// srw r9,r24,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r24.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8324d15c
	if (cr6.eq) goto loc_8324D15C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8324d15c
	if (!cr6.eq) goto loc_8324D15C;
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8324d154
	if (cr6.eq) goto loc_8324D154;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83225c80
	ctx.lr = 0x8324D144;
	sub_83225C80(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83208330
	ctx.lr = 0x8324D154;
	sub_83208330(ctx, base);
loc_8324D154:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8324ce68
	ctx.lr = 0x8324D15C;
	sub_8324CE68(ctx, base);
loc_8324D15C:
	// lhz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r28,r10
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, xer);
	// blt cr6,0x8324d0f4
	if (cr6.lt) goto loc_8324D0F4;
loc_8324D174:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8324D180"))) PPC_WEAK_FUNC(sub_8324D180);
PPC_FUNC_IMPL(__imp__sub_8324D180) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8324D188;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8324d1f0
	if (cr6.eq) goto loc_8324D1F0;
	// lhz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x8324d1f0
	if (!cr6.gt) goto loc_8324D1F0;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// ble cr6,0x8324d1e0
	if (!cr6.gt) goto loc_8324D1E0;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_8324D1BC:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x83209d68
	ctx.lr = 0x8324D1C8;
	sub_83209D68(ctx, base);
	// lhz r10,6(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpw cr6,r29,r9
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r9.s32, xer);
	// blt cr6,0x8324d1bc
	if (cr6.lt) goto loc_8324D1BC;
loc_8324D1E0:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x83209d68
	ctx.lr = 0x8324D1E8;
	sub_83209D68(ctx, base);
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// sth r28,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r28.u16);
loc_8324D1F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8324cf00
	ctx.lr = 0x8324D1F8;
	sub_8324CF00(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8324d208
	if (cr6.eq) goto loc_8324D208;
	// bl 0x832356e0
	ctx.lr = 0x8324D208;
	sub_832356E0(ctx, base);
loc_8324D208:
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83294018
	ctx.lr = 0x8324D218;
	sub_83294018(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8324D220"))) PPC_WEAK_FUNC(sub_8324D220);
PPC_FUNC_IMPL(__imp__sub_8324D220) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8324D228;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x83201c78
	ctx.lr = 0x8324D234;
	sub_83201C78(ctx, base);
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x8324d27c
	if (!cr6.gt) goto loc_8324D27C;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
loc_8324D254:
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r7,24(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8324d2e4
	if (cr6.eq) goto loc_8324D2E4;
	// lhz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// cmpw cr6,r10,r6
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, xer);
	// blt cr6,0x8324d254
	if (cr6.lt) goto loc_8324D254;
loc_8324D27C:
	// addi r11,r8,8
	ctx.r11.s64 = ctx.r8.s64 + 8;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r28,r11,0,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// rlwinm r4,r28,5,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 5) & 0xFFFFFFE0;
	// bl 0x83209df8
	ctx.lr = 0x8324D290;
	sub_83209DF8(ctx, base);
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, xer);
	// bge cr6,0x8324d2cc
	if (!cr6.lt) goto loc_8324D2CC;
	// rlwinm r29,r11,5,0,26
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r30,r11,r28
	ctx.r30.s64 = ctx.r28.s64 - ctx.r11.s64;
loc_8324D2AC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x83294018
	ctx.lr = 0x8324D2C0;
	sub_83294018(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r29,r29,32
	ctx.r29.s64 = ctx.r29.s64 + 32;
	// bne 0x8324d2ac
	if (!cr0.eq) goto loc_8324D2AC;
loc_8324D2CC:
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// sth r28,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r28.u16);
	// rlwinm r11,r8,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8324D2E4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8324D2EC"))) PPC_WEAK_FUNC(sub_8324D2EC);
PPC_FUNC_IMPL(__imp__sub_8324D2EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8324D2F0"))) PPC_WEAK_FUNC(sub_8324D2F0);
PPC_FUNC_IMPL(__imp__sub_8324D2F0) {
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
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// li r10,29
	ctx.r10.s64 = 29;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// li r5,1
	ctx.r5.s64 = 1;
	// sth r10,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r10.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8324d080
	ctx.lr = 0x8324D31C;
	sub_8324D080(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83222030
	ctx.lr = 0x8324D324;
	sub_83222030(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8324D334"))) PPC_WEAK_FUNC(sub_8324D334);
PPC_FUNC_IMPL(__imp__sub_8324D334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8324D338"))) PPC_WEAK_FUNC(sub_8324D338);
PPC_FUNC_IMPL(__imp__sub_8324D338) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac0
	ctx.lr = 0x8324D340;
	__savegprlr_18(ctx, base);
	// stwu r1,-560(r1)
	ea = -560 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// lhz r20,6(r3)
	ctx.r20.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
	// lwz r18,16(r3)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r21,3
	ctx.r21.s64 = 3;
	// sth r31,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r31.u16);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// sth r31,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r31.u16);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// sth r21,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r21.u16);
	// bl 0x8320db50
	ctx.lr = 0x8324D39C;
	sub_8320DB50(ctx, base);
	// lhz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r23,r31
	ctx.r23.u64 = ctx.r31.u64;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// lhz r9,4(r26)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r26.u32 + 4);
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// addi r22,r11,-8
	ctx.r22.s64 = ctx.r11.s64 + -8;
	// ble cr6,0x8324d510
	if (!cr6.gt) goto loc_8324D510;
	// mr r24,r31
	ctx.r24.u64 = ctx.r31.u64;
	// li r25,1
	ctx.r25.s64 = 1;
	// li r19,12288
	ctx.r19.s64 = 12288;
loc_8324D3D4:
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// add r28,r24,r11
	ctx.r28.u64 = ctx.r24.u64 + ctx.r11.u64;
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8324d4f8
	if (cr6.eq) goto loc_8324D4F8;
	// lbz r11,29(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 29);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8324d400
	if (!cr6.eq) goto loc_8324D400;
loc_8324D3F8:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// b 0x8324d440
	goto loc_8324D440;
loc_8324D400:
	// extsh r27,r20
	ctx.r27.s64 = ctx.r20.s16;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// ble cr6,0x8324d43c
	if (!cr6.gt) goto loc_8324D43C;
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
loc_8324D414:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lbz r5,28(r28)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r28.u32 + 28);
	// lwz r3,24(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// bl 0x83296de8
	ctx.lr = 0x8324D424;
	sub_83296DE8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8324d3f8
	if (cr6.eq) goto loc_8324D3F8;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r27
	cr6.compare<int32_t>(ctx.r29.s32, ctx.r27.s32, xer);
	// blt cr6,0x8324d414
	if (cr6.lt) goto loc_8324D414;
loc_8324D43C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8324D440:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8324d4f8
	if (cr6.eq) goto loc_8324D4F8;
	// lhz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 16);
	// addi r4,r28,16
	ctx.r4.s64 = ctx.r28.s64 + 16;
	// srw r10,r19,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r19.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8324d4ec
	if (cr6.eq) goto loc_8324D4EC;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8324d4ec
	if (cr6.eq) goto loc_8324D4EC;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x832240b8
	ctx.lr = 0x8324D47C;
	sub_832240B8(ctx, base);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// li r6,256
	ctx.r6.s64 = 256;
	// sth r31,136(r1)
	PPC_STORE_U16(ctx.r1.u32 + 136, ctx.r31.u16);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// stb r31,138(r1)
	PPC_STORE_U8(ctx.r1.u32 + 138, ctx.r31.u8);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// addi r3,r28,8
	ctx.r3.s64 = ctx.r28.s64 + 8;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r31.u32);
	// stw r21,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r21.u32);
	// stb r25,164(r1)
	PPC_STORE_U8(ctx.r1.u32 + 164, ctx.r25.u8);
	// bl 0x832264e0
	ctx.lr = 0x8324D4BC;
	sub_832264E0(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r25,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r25.u32);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x832794a8
	ctx.lr = 0x8324D4EC;
	sub_832794A8(ctx, base);
loc_8324D4EC:
	// lbz r11,29(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 29);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stb r10,29(r28)
	PPC_STORE_U8(ctx.r28.u32 + 29, ctx.r10.u8);
loc_8324D4F8:
	// lhz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 4);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r24,r24,32
	ctx.r24.s64 = ctx.r24.s64 + 32;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r23,r10
	cr6.compare<int32_t>(ctx.r23.s32, ctx.r10.s32, xer);
	// blt cr6,0x8324d3d4
	if (cr6.lt) goto loc_8324D3D4;
loc_8324D510:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8320d9e8
	ctx.lr = 0x8324D518;
	sub_8320D9E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83222030
	ctx.lr = 0x8324D520;
	sub_83222030(ctx, base);
	// extsh r31,r20
	ctx.r31.s64 = ctx.r20.s16;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// ble cr6,0x8324d548
	if (!cr6.gt) goto loc_8324D548;
	// addi r30,r18,-4
	ctx.r30.s64 = ctx.r18.s64 + -4;
loc_8324D530:
	// lwzu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x83209d68
	ctx.lr = 0x8324D538;
	sub_83209D68(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// bne 0x8324d530
	if (!cr0.eq) goto loc_8324D530;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x83209d68
	ctx.lr = 0x8324D548;
	sub_83209D68(ctx, base);
loc_8324D548:
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// b 0x831cdb10
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8324D550"))) PPC_WEAK_FUNC(sub_8324D550);
PPC_FUNC_IMPL(__imp__sub_8324D550) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8324d5b8
	if (cr6.eq) goto loc_8324D5B8;
	// bl 0x83255980
	ctx.lr = 0x8324D574;
	sub_83255980(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(ctx.r11.u32, 47, xer);
	// bne cr6,0x8324d5a0
	if (!cr6.eq) goto loc_8324D5A0;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r5,r11,0,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83254f98
	ctx.lr = 0x8324D59C;
	sub_83254F98(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
loc_8324D5A0:
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi cr6,r10,47
	cr6.compare<uint32_t>(ctx.r10.u32, 47, xer);
	// bne cr6,0x8324d5b8
	if (!cr6.eq) goto loc_8324D5B8;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r10.u8);
loc_8324D5B8:
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

__attribute__((alias("__imp__sub_8324D5D4"))) PPC_WEAK_FUNC(sub_8324D5D4);
PPC_FUNC_IMPL(__imp__sub_8324D5D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8324D5D8"))) PPC_WEAK_FUNC(sub_8324D5D8);
PPC_FUNC_IMPL(__imp__sub_8324D5D8) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83201c78
	ctx.lr = 0x8324D5F8;
	sub_83201C78(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8324d660
	if (cr6.eq) goto loc_8324D660;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x8324d614
	if (!cr6.eq) goto loc_8324D614;
	// li r3,-4
	ctx.r3.s64 = -4;
	// b 0x8324d664
	goto loc_8324D664;
loc_8324D614:
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x83209df8
	ctx.lr = 0x8324D62C;
	sub_83209DF8(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83209c20
	ctx.lr = 0x8324D638;
	sub_83209C20(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8324d550
	ctx.lr = 0x8324D640;
	sub_8324D550(ctx, base);
	// lhz r9,6(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r6,r8
	PPC_STORE_U32(ctx.r6.u32 + ctx.r8.u32, ctx.r30.u32);
	// lhz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// sth r4,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r4.u16);
loc_8324D660:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8324D664:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8324D67C"))) PPC_WEAK_FUNC(sub_8324D67C);
PPC_FUNC_IMPL(__imp__sub_8324D67C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8324D680"))) PPC_WEAK_FUNC(sub_8324D680);
PPC_FUNC_IMPL(__imp__sub_8324D680) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8324D688;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplw cr6,r4,r3
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, xer);
	// beq cr6,0x8324d720
	if (cr6.eq) goto loc_8324D720;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83295570
	ctx.lr = 0x8324D6B0;
	sub_83295570(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x8324d680
	ctx.lr = 0x8324D6C4;
	sub_8324D680(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83295b88
	ctx.lr = 0x8324D6D4;
	sub_83295B88(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8324d6fc
	if (!cr6.eq) goto loc_8324D6FC;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83254ec0
	ctx.lr = 0x8324D6F4;
	sub_83254EC0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8324D6FC:
	// bl 0x83255980
	ctx.lr = 0x8324D700;
	sub_83255980(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// subf r4,r3,r29
	ctx.r4.s64 = ctx.r29.s64 - ctx.r3.s64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,14260
	ctx.r5.s64 = ctx.r11.s64 + 14260;
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + ctx.r31.u64;
	// bl 0x83297a40
	ctx.lr = 0x8324D718;
	sub_83297A40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83255a88
	ctx.lr = 0x8324D720;
	sub_83255A88(ctx, base);
loc_8324D720:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8324D728"))) PPC_WEAK_FUNC(sub_8324D728);
PPC_FUNC_IMPL(__imp__sub_8324D728) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8324D730;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x83201c78
	ctx.lr = 0x8324D748;
	sub_83201C78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8324d79c
	if (cr6.eq) goto loc_8324D79C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8324d79c
	if (cr6.eq) goto loc_8324D79C;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8324d79c
	if (cr6.eq) goto loc_8324D79C;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x8324d77c
	if (!cr6.eq) goto loc_8324D77C;
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8324D77C:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,36(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// bl 0x8324d680
	ctx.lr = 0x8324D79C;
	sub_8324D680(ctx, base);
loc_8324D79C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8324D7A8"))) PPC_WEAK_FUNC(sub_8324D7A8);
PPC_FUNC_IMPL(__imp__sub_8324D7A8) {
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
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x8324d7dc
	if (cr6.eq) goto loc_8324D7DC;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,14264
	ctx.r3.s64 = ctx.r11.s64 + 14264;
	// bl 0x8320d088
	ctx.lr = 0x8324D7DC;
	sub_8320D088(ctx, base);
loc_8324D7DC:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x8324d8a4
	if (!cr6.gt) goto loc_8324D8A4;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r9,12288
	ctx.r9.s64 = 12288;
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// subf r6,r10,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r10.s64;
	// rlwinm r10,r6,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// srw r4,r9,r5
	ctx.r4.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r5.u8 & 0x3F));
	// clrlwi r3,r4,31
	ctx.r3.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8324d828
	if (cr6.eq) goto loc_8324D828;
	// lwz r30,4(r7)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x8324d844
	if (!cr6.eq) goto loc_8324D844;
loc_8324D828:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lhz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// li r6,34
	ctx.r6.s64 = 34;
	// addi r5,r11,14276
	ctx.r5.s64 = ctx.r11.s64 + 14276;
	// li r3,340
	ctx.r3.s64 = 340;
	// bl 0x8320d428
	ctx.lr = 0x8324D840;
	sub_8320D428(ctx, base);
	// b 0x8324d8a4
	goto loc_8324D8A4;
loc_8324D844:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8324d86c
	if (!cr6.eq) goto loc_8324D86C;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lhz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// addi r5,r11,14276
	ctx.r5.s64 = ctx.r11.s64 + 14276;
	// li r3,340
	ctx.r3.s64 = 340;
	// bl 0x8320d548
	ctx.lr = 0x8324D868;
	sub_8320D548(ctx, base);
	// b 0x8324d8a4
	goto loc_8324D8A4;
loc_8324D86C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x83201c78
	ctx.lr = 0x8324D874;
	sub_83201C78(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8324d888
	if (cr6.eq) goto loc_8324D888;
	// bl 0x832356e0
	ctx.lr = 0x8324D888;
	sub_832356E0(ctx, base);
loc_8324D888:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8328b960
	ctx.lr = 0x8324D898;
	sub_8328B960(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8328b940
	ctx.lr = 0x8324D8A4;
	sub_8328B940(ctx, base);
loc_8324D8A4:
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

__attribute__((alias("__imp__sub_8324D8C0"))) PPC_WEAK_FUNC(sub_8324D8C0);
PPC_FUNC_IMPL(__imp__sub_8324D8C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8324D8C8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x8324d8ec
	if (cr6.eq) goto loc_8324D8EC;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,14264
	ctx.r3.s64 = ctx.r11.s64 + 14264;
	// bl 0x8320d088
	ctx.lr = 0x8324D8EC;
	sub_8320D088(ctx, base);
loc_8324D8EC:
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// ble cr6,0x8324da50
	if (!cr6.gt) goto loc_8324DA50;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x83201c78
	ctx.lr = 0x8324D900;
	sub_83201C78(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8324d220
	ctx.lr = 0x8324D908;
	sub_8324D220(ctx, base);
	// lhz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// sth r11,30(r3)
	PPC_STORE_U16(ctx.r3.u32 + 30, ctx.r11.u16);
	// lhz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// sth r9,8(r30)
	PPC_STORE_U16(ctx.r30.u32 + 8, ctx.r9.u16);
	// lwz r7,16(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r6,28(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lhz r4,0(r7)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r7.u32 + 0);
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// subf r9,r6,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r6.s64;
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x832240b8
	ctx.lr = 0x8324D950;
	sub_832240B8(ctx, base);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83222be8
	ctx.lr = 0x8324D968;
	sub_83222BE8(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// bl 0x8324d550
	ctx.lr = 0x8324D970;
	sub_8324D550(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x83255980
	ctx.lr = 0x8324D978;
	sub_83255980(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,255
	cr6.compare<int32_t>(ctx.r3.s32, 255, xer);
	// ble cr6,0x8324d998
	if (!cr6.gt) goto loc_8324D998;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,14280
	ctx.r4.s64 = ctx.r11.s64 + 14280;
	// addi r3,r10,14244
	ctx.r3.s64 = ctx.r10.s64 + 14244;
	// bl 0x83208568
	ctx.lr = 0x8324D998;
	sub_83208568(ctx, base);
loc_8324D998:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r11,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r11.u8);
	// addi r4,r29,8
	ctx.r4.s64 = ctx.r29.s64 + 8;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x832240b8
	ctx.lr = 0x8324D9B0;
	sub_832240B8(ctx, base);
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8324d9fc
	if (cr6.eq) goto loc_8324D9FC;
	// lwz r4,36(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x8324d9d4
	if (!cr6.eq) goto loc_8324D9D4;
	// li r27,0
	ctx.r27.s64 = 0;
	// b 0x8324d9e0
	goto loc_8324D9E0;
loc_8324D9D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83295250
	ctx.lr = 0x8324D9DC;
	sub_83295250(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_8324D9E0:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,44(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x8328ba08
	ctx.lr = 0x8324D9F4;
	sub_8328BA08(ctx, base);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// bne cr6,0x8324da14
	if (!cr6.eq) goto loc_8324DA14;
loc_8324D9FC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lhz r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r28.u32 + 8);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,11628
	ctx.r5.s64 = ctx.r11.s64 + 11628;
	// li r3,340
	ctx.r3.s64 = 340;
	// bl 0x8320d548
	ctx.lr = 0x8324DA14;
	sub_8320D548(ctx, base);
loc_8324DA14:
	// lwz r30,12(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lhz r31,30(r31)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r31.u32 + 30);
	// ori r10,r11,8400
	ctx.r10.u64 = ctx.r11.u64 | 8400;
	// lhz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// sraw r7,r10,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r7.s64 = ctx.r10.s32 >> temp.u32;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8324da44
	if (cr6.eq) goto loc_8324DA44;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83222030
	ctx.lr = 0x8324DA44;
	sub_83222030(ctx, base);
loc_8324DA44:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
loc_8324DA50:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8324DA5C"))) PPC_WEAK_FUNC(sub_8324DA5C);
PPC_FUNC_IMPL(__imp__sub_8324DA5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8324DA60"))) PPC_WEAK_FUNC(sub_8324DA60);
PPC_FUNC_IMPL(__imp__sub_8324DA60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8324DA68;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83201c78
	ctx.lr = 0x8324DA78;
	sub_83201C78(ctx, base);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8324daa0
	if (cr6.eq) goto loc_8324DAA0;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x8324daa0
	if (cr6.eq) goto loc_8324DAA0;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,14264
	ctx.r3.s64 = ctx.r11.s64 + 14264;
	// bl 0x8320d088
	ctx.lr = 0x8324DAA0;
	sub_8320D088(ctx, base);
loc_8324DAA0:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x8324db48
	if (cr6.eq) goto loc_8324DB48;
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bgt cr6,0x8324dac8
	if (cr6.gt) goto loc_8324DAC8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8324cf00
	ctx.lr = 0x8324DABC;
	sub_8324CF00(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8324DAC8:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832217a8
	ctx.lr = 0x8324DAEC;
	sub_832217A8(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8324db38
	if (cr6.eq) goto loc_8324DB38;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83222578
	ctx.lr = 0x8324DB00;
	sub_83222578(ctx, base);
	// clrlwi r4,r3,16
	ctx.r4.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8324cfb0
	ctx.lr = 0x8324DB0C;
	sub_8324CFB0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8324db48
	if (cr6.eq) goto loc_8324DB48;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lhz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,12088
	ctx.r5.s64 = ctx.r11.s64 + 12088;
	// li r3,340
	ctx.r3.s64 = 340;
	// bl 0x8320d548
	ctx.lr = 0x8324DB2C;
	sub_8320D548(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8324DB38:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8324d080
	ctx.lr = 0x8324DB48;
	sub_8324D080(ctx, base);
loc_8324DB48:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8324DB54"))) PPC_WEAK_FUNC(sub_8324DB54);
PPC_FUNC_IMPL(__imp__sub_8324DB54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8324DB58"))) PPC_WEAK_FUNC(sub_8324DB58);
PPC_FUNC_IMPL(__imp__sub_8324DB58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8324DB60;
	__savegprlr_26(ctx, base);
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x8324db94
	if (cr6.eq) goto loc_8324DB94;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x8324db94
	if (cr6.eq) goto loc_8324DB94;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,14264
	ctx.r3.s64 = ctx.r11.s64 + 14264;
	// bl 0x8320d088
	ctx.lr = 0x8324DB94;
	sub_8320D088(ctx, base);
loc_8324DB94:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// blt cr6,0x8324ddc0
	if (cr6.lt) goto loc_8324DDC0;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bne cr6,0x8324dc20
	if (!cr6.eq) goto loc_8324DC20;
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// li r10,12288
	ctx.r10.s64 = 12288;
	// lhz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// li r8,640
	ctx.r8.s64 = 640;
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// srw r5,r10,r9
	ctx.r5.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// xori r11,r7,40
	ctx.r11.u64 = ctx.r7.u64 ^ 40;
	// extsh r3,r9
	ctx.r3.s64 = ctx.r9.s16;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// srw r10,r8,r3
	ctx.r10.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r3.u8 & 0x3F));
	// srawi r11,r4,31
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 31;
	// addi r27,r31,8
	ctx.r27.s64 = ctx.r31.s64 + 8;
	// and r9,r11,r5
	ctx.r9.u64 = ctx.r11.u64 & ctx.r5.u64;
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8324dc18
	if (cr6.eq) goto loc_8324DC18;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// b 0x8324dc44
	goto loc_8324DC44;
loc_8324DC18:
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// b 0x8324dc28
	goto loc_8324DC28;
loc_8324DC20:
	// addi r28,r31,8
	ctx.r28.s64 = ctx.r31.s64 + 8;
	// addi r27,r28,8
	ctx.r27.s64 = ctx.r28.s64 + 8;
loc_8324DC28:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8324dc44
	if (cr6.eq) goto loc_8324DC44;
	// li r4,34
	ctx.r4.s64 = 34;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83266d78
	ctx.lr = 0x8324DC3C;
	sub_83266D78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8324dc68
	if (!cr6.eq) goto loc_8324DC68;
loc_8324DC44:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83201c78
	ctx.lr = 0x8324DC4C;
	sub_83201C78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8324dd7c
	if (cr6.eq) goto loc_8324DD7C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8324dd7c
	if (cr6.eq) goto loc_8324DD7C;
	// lwz r29,36(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// b 0x8324dc6c
	goto loc_8324DC6C;
loc_8324DC68:
	// lwz r29,36(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
loc_8324DC6C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x8324dd7c
	if (cr6.eq) goto loc_8324DD7C;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// beq cr6,0x8324dc94
	if (cr6.eq) goto loc_8324DC94;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83222be8
	ctx.lr = 0x8324DC94;
	sub_83222BE8(ctx, base);
loc_8324DC94:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83295250
	ctx.lr = 0x8324DCA4;
	sub_83295250(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8324dd7c
	if (cr6.eq) goto loc_8324DD7C;
	// stw r26,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r26.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// bl 0x8328c2e8
	ctx.lr = 0x8324DCC8;
	sub_8328C2E8(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83224ad0
	ctx.lr = 0x8324DCD8;
	sub_83224AD0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8328baa8
	ctx.lr = 0x8324DCE4;
	sub_8328BAA8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83222030
	ctx.lr = 0x8324DCEC;
	sub_83222030(ctx, base);
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8324d728
	ctx.lr = 0x8324DCFC;
	sub_8324D728(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8324ddc0
	if (!cr6.eq) goto loc_8324DDC0;
	// lbz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 224);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8324dd40
	if (!cr6.eq) goto loc_8324DD40;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x83255c58
	ctx.lr = 0x8324DD24;
	sub_83255C58(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x83255a88
	ctx.lr = 0x8324DD2C;
	sub_83255A88(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8324d5d8
	ctx.lr = 0x8324DD34;
	sub_8324D5D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8324DD40:
	// bl 0x83255980
	ctx.lr = 0x8324DD44;
	sub_83255980(ctx, base);
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// subfic r4,r3,256
	xer.ca = ctx.r3.u32 <= 256;
	ctx.r4.s64 = 256 - ctx.r3.s64;
	// addi r5,r10,14260
	ctx.r5.s64 = ctx.r10.s64 + 14260;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// bl 0x83297a40
	ctx.lr = 0x8324DD60;
	sub_83297A40(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x83255a88
	ctx.lr = 0x8324DD68;
	sub_83255A88(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8324d5d8
	ctx.lr = 0x8324DD70;
	sub_8324D5D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8324DD7C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83225c80
	ctx.lr = 0x8324DD84;
	sub_83225C80(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83225c80
	ctx.lr = 0x8324DD90;
	sub_83225C80(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83225c80
	ctx.lr = 0x8324DD9C;
	sub_83225C80(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r9,r11,14244
	ctx.r9.s64 = ctx.r11.s64 + 14244;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r10,14308
	ctx.r4.s64 = ctx.r10.s64 + 14308;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bl 0x832085e8
	ctx.lr = 0x8324DDC0;
	sub_832085E8(ctx, base);
loc_8324DDC0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8324DDCC"))) PPC_WEAK_FUNC(sub_8324DDCC);
PPC_FUNC_IMPL(__imp__sub_8324DDCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8324DDD0"))) PPC_WEAK_FUNC(sub_8324DDD0);
PPC_FUNC_IMPL(__imp__sub_8324DDD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8324DDD8;
	__savegprlr_26(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x8324de10
	if (cr6.eq) goto loc_8324DE10;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x8324de10
	if (cr6.eq) goto loc_8324DE10;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x8324de10
	if (cr6.eq) goto loc_8324DE10;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,14264
	ctx.r3.s64 = ctx.r11.s64 + 14264;
	// bl 0x8320d088
	ctx.lr = 0x8324DE10;
	sub_8320D088(ctx, base);
loc_8324DE10:
	// lwz r9,28(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// blt cr6,0x8324dff8
	if (cr6.lt) goto loc_8324DFF8;
	// lwz r11,16(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// li r28,12288
	ctx.r28.s64 = 12288;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// subf r6,r10,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r10.s64;
	// rlwinm r10,r6,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bne cr6,0x8324de7c
	if (!cr6.eq) goto loc_8324DE7C;
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// srw r8,r28,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r28.u32 >> (ctx.r10.u8 & 0x3F));
	// xori r11,r9,34
	ctx.r11.u64 = ctx.r9.u64 ^ 34;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// srawi r6,r7,31
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 31;
	// and r5,r6,r8
	ctx.r5.u64 = ctx.r6.u64 & ctx.r8.u64;
	// clrlwi r4,r5,31
	ctx.r4.u64 = ctx.r5.u32 & 0x1;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8324deb8
	if (cr6.eq) goto loc_8324DEB8;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x8324dec8
	goto loc_8324DEC8;
loc_8324DE7C:
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// bne cr6,0x8324dec4
	if (!cr6.eq) goto loc_8324DEC4;
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// srw r8,r28,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r28.u32 >> (ctx.r10.u8 & 0x3F));
	// xori r11,r9,34
	ctx.r11.u64 = ctx.r9.u64 ^ 34;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// srawi r6,r7,31
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 31;
	// and r5,r6,r8
	ctx.r5.u64 = ctx.r6.u64 & ctx.r8.u64;
	// clrlwi r4,r5,31
	ctx.r4.u64 = ctx.r5.u32 & 0x1;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x8324dec8
	if (!cr6.eq) goto loc_8324DEC8;
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
loc_8324DEB8:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x8324dee4
	goto loc_8324DEE4;
loc_8324DEC4:
	// addi r26,r30,8
	ctx.r26.s64 = ctx.r30.s64 + 8;
loc_8324DEC8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8324dee4
	if (cr6.eq) goto loc_8324DEE4;
	// li r4,34
	ctx.r4.s64 = 34;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83266d78
	ctx.lr = 0x8324DEDC;
	sub_83266D78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8324df08
	if (!cr6.eq) goto loc_8324DF08;
loc_8324DEE4:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83201c78
	ctx.lr = 0x8324DEEC;
	sub_83201C78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8324dfac
	if (cr6.eq) goto loc_8324DFAC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8324dfac
	if (cr6.eq) goto loc_8324DFAC;
	// lwz r29,36(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// b 0x8324df0c
	goto loc_8324DF0C;
loc_8324DF08:
	// lwz r29,36(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
loc_8324DF0C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x8324dfac
	if (cr6.eq) goto loc_8324DFAC;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x8324df7c
	if (cr6.eq) goto loc_8324DF7C;
	// lhz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// lhz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// addi r7,r11,-163
	ctx.r7.s64 = ctx.r11.s64 + -163;
	// srw r6,r28,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r28.u32 >> (ctx.r8.u8 & 0x3F));
	// srawi r5,r7,31
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 31;
	// clrlwi r4,r6,24
	ctx.r4.u64 = ctx.r6.u32 & 0xFF;
	// clrlwi r3,r5,24
	ctx.r3.u64 = ctx.r5.u32 & 0xFF;
	// cntlzw r11,r9
	ctx.r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// and r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 & ctx.r4.u64;
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// and r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 & ctx.r9.u64;
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x8324df7c
	if (!cr6.eq) goto loc_8324DF7C;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83222be8
	ctx.lr = 0x8324DF7C;
	sub_83222BE8(ctx, base);
loc_8324DF7C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83295250
	ctx.lr = 0x8324DF8C;
	sub_83295250(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8324dfac
	if (cr6.eq) goto loc_8324DFAC;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,12(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// bl 0x8328c2e8
	ctx.lr = 0x8324DFA0;
	sub_8328C2E8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8324DFAC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83225c80
	ctx.lr = 0x8324DFB4;
	sub_83225C80(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83225c80
	ctx.lr = 0x8324DFC0;
	sub_83225C80(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r9,r11,14244
	ctx.r9.s64 = ctx.r11.s64 + 14244;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r10,14352
	ctx.r4.s64 = ctx.r10.s64 + 14352;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x832085e8
	ctx.lr = 0x8324DFE0;
	sub_832085E8(ctx, base);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x8324dff8
	if (cr6.eq) goto loc_8324DFF8;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,12(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x832240b8
	ctx.lr = 0x8324DFF8;
	sub_832240B8(ctx, base);
loc_8324DFF8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8324E004"))) PPC_WEAK_FUNC(sub_8324E004);
PPC_FUNC_IMPL(__imp__sub_8324E004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8324E008"))) PPC_WEAK_FUNC(sub_8324E008);
PPC_FUNC_IMPL(__imp__sub_8324E008) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8324E010;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,2(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// li r10,12288
	ctx.r10.s64 = 12288;
	// lhz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// srw r7,r10,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// xori r11,r8,32
	ctx.r11.u64 = ctx.r8.u64 ^ 32;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// srawi r3,r6,31
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 31;
	// and r11,r3,r7
	ctx.r11.u64 = ctx.r3.u64 & ctx.r7.u64;
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8324e184
	if (cr6.eq) goto loc_8324E184;
	// lhz r11,2(r5)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 2);
	// lhz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// srw r7,r10,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// xori r11,r8,32
	ctx.r11.u64 = ctx.r8.u64 ^ 32;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// srawi r3,r6,31
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 31;
	// and r11,r3,r7
	ctx.r11.u64 = ctx.r3.u64 & ctx.r7.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8324e0a4
	if (cr6.eq) goto loc_8324E0A4;
	// lwz r30,4(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r29,4(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8324e08c
	if (cr6.eq) goto loc_8324E08C;
	// lwz r28,36(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
loc_8324E08C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x8324e09c
	if (cr6.eq) goto loc_8324E09C;
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
loc_8324E09C:
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, xer);
	// beq cr6,0x8324e0b8
	if (cr6.eq) goto loc_8324E0B8;
loc_8324E0A4:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8324E0B8:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// ble cr6,0x8324e164
	if (!cr6.gt) goto loc_8324E164;
loc_8324E0C4:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x8324e0d4
	if (!cr6.eq) goto loc_8324E0D4;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8324e100
	goto loc_8324E100;
loc_8324E0D4:
	// srawi r11,r31,3
	xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r31.s32 >> 3;
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// addze r9,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r8,r31,3
	xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r31.s32 >> 3;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r6,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r6.s64 = temp.s64;
	// rlwinm r5,r6,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r4,r5,r31
	ctx.r4.s64 = ctx.r31.s64 - ctx.r5.s64;
	// lwzx r11,r7,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8324E100:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x8324e110
	if (!cr6.eq) goto loc_8324E110;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x8324e13c
	goto loc_8324E13C;
loc_8324E110:
	// srawi r11,r31,3
	xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r31.s32 >> 3;
	// lwz r10,32(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// addze r9,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r8,r31,3
	xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r31.s32 >> 3;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r6,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r6.s64 = temp.s64;
	// rlwinm r5,r6,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r3,r5,r31
	ctx.r3.s64 = ctx.r31.s64 - ctx.r5.s64;
	// lwzx r11,r7,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8324E13C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8324e008
	ctx.lr = 0x8324E144;
	sub_8324E008(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8324e190
	if (!cr6.eq) goto loc_8324E190;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x8324e178
	if (!cr6.eq) goto loc_8324E178;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, xer);
	// blt cr6,0x8324e0c4
	if (cr6.lt) goto loc_8324E0C4;
loc_8324E164:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8324E178:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8324E184:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83226fe8
	ctx.lr = 0x8324E190;
	sub_83226FE8(ctx, base);
loc_8324E190:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8324E198"))) PPC_WEAK_FUNC(sub_8324E198);
PPC_FUNC_IMPL(__imp__sub_8324E198) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8324E1A0;
	__savegprlr_26(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// bl 0x8328c2e8
	ctx.lr = 0x8324E1D0;
	sub_8328C2E8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83295c40
	ctx.lr = 0x8324E1D8;
	sub_83295C40(ctx, base);
	// cmplwi cr6,r3,13
	cr6.compare<uint32_t>(ctx.r3.u32, 13, xer);
	// bne cr6,0x8324e294
	if (!cr6.eq) goto loc_8324E294;
	// lhz r11,82(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// li r30,12288
	ctx.r30.s64 = 12288;
	// lhz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// srw r7,r30,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r8.u8 & 0x3F));
	// xori r11,r9,136
	ctx.r11.u64 = ctx.r9.u64 ^ 136;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// srawi r5,r6,31
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 31;
	// and r4,r5,r7
	ctx.r4.u64 = ctx.r5.u64 & ctx.r7.u64;
	// clrlwi r3,r4,31
	ctx.r3.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8324e220
	if (cr6.eq) goto loc_8324E220;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x83245978
	ctx.lr = 0x8324E218;
	sub_83245978(ctx, base);
	// clrldi r28,r3,32
	ctx.r28.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// b 0x8324e22c
	goto loc_8324E22C;
loc_8324E220:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8321ff60
	ctx.lr = 0x8324E228;
	sub_8321FF60(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_8324E22C:
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// srw r8,r30,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r10.u8 & 0x3F));
	// xori r11,r9,136
	ctx.r11.u64 = ctx.r9.u64 ^ 136;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// srawi r6,r7,31
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 31;
	// and r5,r6,r8
	ctx.r5.u64 = ctx.r6.u64 & ctx.r8.u64;
	// clrlwi r4,r5,31
	ctx.r4.u64 = ctx.r5.u32 & 0x1;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8324e278
	if (cr6.eq) goto loc_8324E278;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x83245978
	ctx.lr = 0x8324E260;
	sub_83245978(ctx, base);
	// clrldi r3,r3,32
	ctx.r3.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// extsw r10,r28
	ctx.r10.s64 = ctx.r28.s32;
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// b 0x8324e2ac
	goto loc_8324E2AC;
loc_8324E278:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8321ff60
	ctx.lr = 0x8324E280;
	sub_8321FF60(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// extsw r10,r28
	ctx.r10.s64 = ctx.r28.s32;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// b 0x8324e2ac
	goto loc_8324E2AC;
loc_8324E294:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8324e008
	ctx.lr = 0x8324E2A4;
	sub_8324E008(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8324e2b8
	if (!cr6.eq) goto loc_8324E2B8;
loc_8324E2AC:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8324e330
	if (cr6.eq) goto loc_8324E330;
loc_8324E2B8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8328baa8
	ctx.lr = 0x8324E2C4;
	sub_8328BAA8(ctx, base);
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8324d728
	ctx.lr = 0x8324E2D4;
	sub_8324D728(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8324e330
	if (!cr6.eq) goto loc_8324E330;
	// lbz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8324e300
	if (!cr6.eq) goto loc_8324E300;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x83255c58
	ctx.lr = 0x8324E2FC;
	sub_83255C58(ctx, base);
	// b 0x8324e320
	goto loc_8324E320;
loc_8324E300:
	// bl 0x83255980
	ctx.lr = 0x8324E304;
	sub_83255980(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// subfic r4,r3,256
	xer.ca = ctx.r3.u32 <= 256;
	ctx.r4.s64 = 256 - ctx.r3.s64;
	// addi r5,r10,14260
	ctx.r5.s64 = ctx.r10.s64 + 14260;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// bl 0x83297a40
	ctx.lr = 0x8324E320;
	sub_83297A40(ctx, base);
loc_8324E320:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83255a88
	ctx.lr = 0x8324E328;
	sub_83255A88(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8324d5d8
	ctx.lr = 0x8324E330;
	sub_8324D5D8(ctx, base);
loc_8324E330:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83222030
	ctx.lr = 0x8324E338;
	sub_83222030(ctx, base);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8324E340"))) PPC_WEAK_FUNC(sub_8324E340);
PPC_FUNC_IMPL(__imp__sub_8324E340) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8324E348;
	__savegprlr_27(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x8324e37c
	if (cr6.eq) goto loc_8324E37C;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x8324e37c
	if (cr6.eq) goto loc_8324E37C;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,14264
	ctx.r3.s64 = ctx.r11.s64 + 14264;
	// bl 0x8320d088
	ctx.lr = 0x8324E37C;
	sub_8320D088(ctx, base);
loc_8324E37C:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// blt cr6,0x8324e4f4
	if (cr6.lt) goto loc_8324E4F4;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bne cr6,0x8324e408
	if (!cr6.eq) goto loc_8324E408;
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// li r10,12288
	ctx.r10.s64 = 12288;
	// lhz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// li r8,640
	ctx.r8.s64 = 640;
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// srw r5,r10,r9
	ctx.r5.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// xori r11,r7,40
	ctx.r11.u64 = ctx.r7.u64 ^ 40;
	// extsh r3,r9
	ctx.r3.s64 = ctx.r9.s16;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// srw r10,r8,r3
	ctx.r10.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r3.u8 & 0x3F));
	// srawi r11,r4,31
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 31;
	// addi r28,r31,8
	ctx.r28.s64 = ctx.r31.s64 + 8;
	// and r9,r11,r5
	ctx.r9.u64 = ctx.r11.u64 & ctx.r5.u64;
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8324e400
	if (cr6.eq) goto loc_8324E400;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// b 0x8324e42c
	goto loc_8324E42C;
loc_8324E400:
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// b 0x8324e410
	goto loc_8324E410;
loc_8324E408:
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
	// addi r28,r29,8
	ctx.r28.s64 = ctx.r29.s64 + 8;
loc_8324E410:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8324e42c
	if (cr6.eq) goto loc_8324E42C;
	// li r4,34
	ctx.r4.s64 = 34;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83266d78
	ctx.lr = 0x8324E424;
	sub_83266D78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8324e450
	if (!cr6.eq) goto loc_8324E450;
loc_8324E42C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83201c78
	ctx.lr = 0x8324E434;
	sub_83201C78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8324e494
	if (cr6.eq) goto loc_8324E494;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8324e494
	if (cr6.eq) goto loc_8324E494;
	// lwz r30,36(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// b 0x8324e454
	goto loc_8324E454;
loc_8324E450:
	// lwz r30,36(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
loc_8324E454:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8324e494
	if (cr6.eq) goto loc_8324E494;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// beq cr6,0x8324e47c
	if (cr6.eq) goto loc_8324E47C;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83222be8
	ctx.lr = 0x8324E47C;
	sub_83222BE8(ctx, base);
loc_8324E47C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83295250
	ctx.lr = 0x8324E48C;
	sub_83295250(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8324e4e4
	if (!cr6.eq) goto loc_8324E4E4;
loc_8324E494:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83225c80
	ctx.lr = 0x8324E49C;
	sub_83225C80(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83225c80
	ctx.lr = 0x8324E4A8;
	sub_83225C80(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83225c80
	ctx.lr = 0x8324E4B4;
	sub_83225C80(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r9,r11,14244
	ctx.r9.s64 = ctx.r11.s64 + 14244;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r10,14392
	ctx.r4.s64 = ctx.r10.s64 + 14392;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bl 0x832085e8
	ctx.lr = 0x8324E4D8;
	sub_832085E8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_8324E4E4:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8324e198
	ctx.lr = 0x8324E4F4;
	sub_8324E198(ctx, base);
loc_8324E4F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8324E500"))) PPC_WEAK_FUNC(sub_8324E500);
PPC_FUNC_IMPL(__imp__sub_8324E500) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8324E508;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,2071
	cr6.compare<uint32_t>(ctx.r11.u32, 2071, xer);
	// bgt cr6,0x8324e60c
	if (cr6.gt) goto loc_8324E60C;
	// beq cr6,0x8324e5c8
	if (cr6.eq) goto loc_8324E5C8;
	// cmplwi cr6,r11,2056
	cr6.compare<uint32_t>(ctx.r11.u32, 2056, xer);
	// bgt cr6,0x8324e590
	if (cr6.gt) goto loc_8324E590;
	// beq cr6,0x8324e57c
	if (cr6.eq) goto loc_8324E57C;
	// cmplwi cr6,r11,1159
	cr6.compare<uint32_t>(ctx.r11.u32, 1159, xer);
	// beq cr6,0x8324e568
	if (cr6.eq) goto loc_8324E568;
	// cmplwi cr6,r11,2054
	cr6.compare<uint32_t>(ctx.r11.u32, 2054, xer);
	// beq cr6,0x8324e554
	if (cr6.eq) goto loc_8324E554;
	// cmplwi cr6,r11,2055
	cr6.compare<uint32_t>(ctx.r11.u32, 2055, xer);
	// bne cr6,0x8324e82c
	if (!cr6.eq) goto loc_8324E82C;
	// bl 0x8324d8c0
	ctx.lr = 0x8324E548;
	sub_8324D8C0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8324E554:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8324d7a8
	ctx.lr = 0x8324E55C;
	sub_8324D7A8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8324E568:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8324db58
	ctx.lr = 0x8324E570;
	sub_8324DB58(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8324E57C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8324da60
	ctx.lr = 0x8324E584;
	sub_8324DA60(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8324E590:
	// cmplwi cr6,r11,2057
	cr6.compare<uint32_t>(ctx.r11.u32, 2057, xer);
	// beq cr6,0x8324e5b4
	if (cr6.eq) goto loc_8324E5B4;
	// cmplwi cr6,r11,2058
	cr6.compare<uint32_t>(ctx.r11.u32, 2058, xer);
	// bne cr6,0x8324e82c
	if (!cr6.eq) goto loc_8324E82C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8324ddd0
	ctx.lr = 0x8324E5A8;
	sub_8324DDD0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8324E5B4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8324e340
	ctx.lr = 0x8324E5BC;
	sub_8324E340(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8324E5C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83201c78
	ctx.lr = 0x8324E5D0;
	sub_83201C78(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8324e5f0
	if (cr6.eq) goto loc_8324E5F0;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,14264
	ctx.r3.s64 = ctx.r11.s64 + 14264;
	// bl 0x8320d088
	ctx.lr = 0x8324E5F0;
	sub_8320D088(ctx, base);
loc_8324E5F0:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8324e820
	if (cr6.eq) goto loc_8324E820;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8324cf00
	ctx.lr = 0x8324E600;
	sub_8324CF00(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8324E60C:
	// addi r11,r11,-2072
	ctx.r11.s64 = ctx.r11.s64 + -2072;
	// cmplwi cr6,r11,18
	cr6.compare<uint32_t>(ctx.r11.u32, 18, xer);
	// bgt cr6,0x8324e82c
	if (cr6.gt) goto loc_8324E82C;
	// lis r12,-31963
	ctx.r12.s64 = -2094727168;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-6608
	ctx.r12.s64 = ctx.r12.s64 + -6608;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8324E67C;
	case 1:
		goto loc_8324E714;
	case 2:
		goto loc_8324E784;
	case 3:
		goto loc_8324E7BC;
	case 4:
		goto loc_8324E82C;
	case 5:
		goto loc_8324E82C;
	case 6:
		goto loc_8324E82C;
	case 7:
		goto loc_8324E82C;
	case 8:
		goto loc_8324E82C;
	case 9:
		goto loc_8324E82C;
	case 10:
		goto loc_8324E82C;
	case 11:
		goto loc_8324E82C;
	case 12:
		goto loc_8324E82C;
	case 13:
		goto loc_8324E82C;
	case 14:
		goto loc_8324E82C;
	case 15:
		goto loc_8324E82C;
	case 16:
		goto loc_8324E82C;
	case 17:
		goto loc_8324E7F4;
	case 18:
		goto loc_8324E820;
	default:
		return;
	}
	// lwz r25,-6532(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -6532);
	// lwz r25,-6380(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -6380);
	// lwz r25,-6268(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -6268);
	// lwz r25,-6212(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -6212);
	// lwz r25,-6100(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -6100);
	// lwz r25,-6100(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -6100);
	// lwz r25,-6100(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -6100);
	// lwz r25,-6100(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -6100);
	// lwz r25,-6100(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -6100);
	// lwz r25,-6100(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -6100);
	// lwz r25,-6100(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -6100);
	// lwz r25,-6100(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -6100);
	// lwz r25,-6100(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -6100);
	// lwz r25,-6100(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -6100);
	// lwz r25,-6100(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -6100);
	// lwz r25,-6100(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -6100);
	// lwz r25,-6100(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -6100);
	// lwz r25,-6156(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -6156);
	// lwz r25,-6112(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + -6112);
loc_8324E67C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83201c78
	ctx.lr = 0x8324E684;
	sub_83201C78(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x8324e6a4
	if (cr6.eq) goto loc_8324E6A4;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,14264
	ctx.r3.s64 = ctx.r11.s64 + 14264;
	// bl 0x8320d088
	ctx.lr = 0x8324E6A4;
	sub_8320D088(ctx, base);
loc_8324E6A4:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// blt cr6,0x8324e820
	if (cr6.lt) goto loc_8324E820;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x8324e820
	if (cr6.eq) goto loc_8324E820;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83222578
	ctx.lr = 0x8324E6DC;
	sub_83222578(ctx, base);
	// clrlwi r4,r3,16
	ctx.r4.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8324cfb0
	ctx.lr = 0x8324E6E8;
	sub_8324CFB0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8324e820
	if (cr6.eq) goto loc_8324E820;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lhz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,12088
	ctx.r5.s64 = ctx.r11.s64 + 12088;
	// li r3,340
	ctx.r3.s64 = 340;
	// bl 0x8320d548
	ctx.lr = 0x8324E708;
	sub_8320D548(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8324E714:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83201c78
	ctx.lr = 0x8324E71C;
	sub_83201C78(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x8324e73c
	if (cr6.eq) goto loc_8324E73C;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,14264
	ctx.r3.s64 = ctx.r11.s64 + 14264;
	// bl 0x8320d088
	ctx.lr = 0x8324E73C;
	sub_8320D088(ctx, base);
loc_8324E73C:
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// blt cr6,0x8324e820
	if (cr6.lt) goto loc_8324E820;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8324e820
	if (cr6.eq) goto loc_8324E820;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8324d080
	ctx.lr = 0x8324E778;
	sub_8324D080(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8324E784:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8324e7a0
	if (cr6.eq) goto loc_8324E7A0;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,14264
	ctx.r3.s64 = ctx.r11.s64 + 14264;
	// bl 0x8320d088
	ctx.lr = 0x8324E7A0;
	sub_8320D088(ctx, base);
loc_8324E7A0:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r3,r11,14184
	ctx.r3.s64 = ctx.r11.s64 + 14184;
	// bl 0x8328ed30
	ctx.lr = 0x8324E7B0;
	sub_8328ED30(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8324E7BC:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8324e7d8
	if (cr6.eq) goto loc_8324E7D8;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,14264
	ctx.r3.s64 = ctx.r11.s64 + 14264;
	// bl 0x8320d088
	ctx.lr = 0x8324E7D8;
	sub_8320D088(ctx, base);
loc_8324E7D8:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r3,r11,14184
	ctx.r3.s64 = ctx.r11.s64 + 14184;
	// bl 0x8328edb0
	ctx.lr = 0x8324E7E8;
	sub_8328EDB0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8324E7F4:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8324e810
	if (cr6.eq) goto loc_8324E810;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,14264
	ctx.r3.s64 = ctx.r11.s64 + 14264;
	// bl 0x8320d088
	ctx.lr = 0x8324E810;
	sub_8320D088(ctx, base);
loc_8324E810:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r3,r11,14184
	ctx.r3.s64 = ctx.r11.s64 + 14184;
	// bl 0x8328ee08
	ctx.lr = 0x8324E820;
	sub_8328EE08(ctx, base);
loc_8324E820:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8324E82C:
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8324E838"))) PPC_WEAK_FUNC(sub_8324E838);
PPC_FUNC_IMPL(__imp__sub_8324E838) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r11.u8);
	// bl 0x83217740
	ctx.lr = 0x8324E860;
	sub_83217740(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8324e880
	if (!cr6.eq) goto loc_8324E880;
	// lhz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// bl 0x832277f8
	ctx.lr = 0x8324E874;
	sub_832277F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8324e880
	if (!cr6.eq) goto loc_8324E880;
	// bl 0x83227908
	ctx.lr = 0x8324E880;
	sub_83227908(ctx, base);
loc_8324E880:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8324E890"))) PPC_WEAK_FUNC(sub_8324E890);
PPC_FUNC_IMPL(__imp__sub_8324E890) {
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
	// li r3,615
	ctx.r3.s64 = 615;
	// bl 0x832277f8
	ctx.lr = 0x8324E8A4;
	sub_832277F8(ctx, base);
	// lis r10,-31748
	ctx.r10.s64 = -2080636928;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r10,26672
	ctx.r11.s64 = ctx.r10.s64 + 26672;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r4,26672(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26672, ctx.r4.u32);
	// lbz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// bl 0x83210848
	ctx.lr = 0x8324E8C0;
	sub_83210848(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8324E8D0"))) PPC_WEAK_FUNC(sub_8324E8D0);
PPC_FUNC_IMPL(__imp__sub_8324E8D0) {
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
	// rlwinm r11,r3,0,1,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x78000000;
	// lis r10,8192
	ctx.r10.s64 = 536870912;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x8324e908
	if (!cr6.eq) goto loc_8324E908;
	// bl 0x83234f88
	ctx.lr = 0x8324E900;
	sub_83234F88(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8324e930
	if (!cr6.eq) goto loc_8324E930;
loc_8324E908:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8324e92c
	if (cr6.eq) goto loc_8324E92C;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,14520
	ctx.r4.s64 = ctx.r11.s64 + 14520;
	// addi r3,r10,14436
	ctx.r3.s64 = ctx.r10.s64 + 14436;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x83208330
	ctx.lr = 0x8324E92C;
	sub_83208330(ctx, base);
loc_8324E92C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8324E930:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8324E948"))) PPC_WEAK_FUNC(sub_8324E948);
PPC_FUNC_IMPL(__imp__sub_8324E948) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x8324E950;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,56(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8324eaf4
	if (cr6.eq) goto loc_8324EAF4;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lis r8,1024
	ctx.r8.s64 = 67108864;
loc_8324E974:
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x8324ea0c
	if (!cr6.eq) goto loc_8324EA0C;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r10,r11,0,5,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FFFFFC;
	// rlwinm r10,r10,0,29,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFC000007;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bne cr6,0x8324ea0c
	if (!cr6.eq) goto loc_8324EA0C;
	// lwz r10,68(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8324e9b0
	if (!cr6.eq) goto loc_8324E9B0;
	// addic r11,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r11.s64 = ctx.r28.s64 + -1;
	// subfe r11,r11,r28
	temp.u8 = (~ctx.r11.u32 + ctx.r28.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r28.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r28.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x8324ea00
	goto loc_8324EA00;
loc_8324E9B0:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x8324e9c0
	if (!cr6.eq) goto loc_8324E9C0;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8324ea00
	goto loc_8324EA00;
loc_8324E9C0:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// subf. r5,r6,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r6.s64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne 0x8324e9f4
	if (!cr0.eq) goto loc_8324E9F4;
	// subf r10,r28,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r28.s64;
loc_8324E9D4:
	// lbz r7,3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8324e9fc
	if (cr6.eq) goto loc_8324E9FC;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf. r5,r6,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r6.s64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq 0x8324e9d4
	if (cr0.eq) goto loc_8324E9D4;
loc_8324E9F4:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8324ea00
	goto loc_8324EA00;
loc_8324E9FC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8324EA00:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8324eaf8
	if (cr6.eq) goto loc_8324EAF8;
loc_8324EA0C:
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8324e974
	if (!cr6.eq) goto loc_8324E974;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8324eaf4
	if (cr6.eq) goto loc_8324EAF4;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,26672
	ctx.r10.s64 = ctx.r11.s64 + 26672;
	// lwz r30,26672(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26672);
	// lwz r29,4(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_8324EA30:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8324eae8
	if (!cr6.eq) goto loc_8324EAE8;
	// rlwinm r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8324ead0
	if (cr6.eq) goto loc_8324EAD0;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// bne cr6,0x8324eae8
	if (!cr6.eq) goto loc_8324EAE8;
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8324ea74
	if (!cr6.eq) goto loc_8324EA74;
	// addic r11,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// subfe r11,r11,r30
	temp.u8 = (~ctx.r11.u32 + ctx.r30.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r30.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r30.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x8324eac4
	goto loc_8324EAC4;
loc_8324EA74:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x8324ea84
	if (!cr6.eq) goto loc_8324EA84;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8324eac4
	goto loc_8324EAC4;
loc_8324EA84:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf. r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x8324eab8
	if (!cr0.eq) goto loc_8324EAB8;
	// subf r10,r30,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r30.s64;
loc_8324EA98:
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8324eac0
	if (cr6.eq) goto loc_8324EAC0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf. r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x8324ea98
	if (cr0.eq) goto loc_8324EA98;
loc_8324EAB8:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8324eac4
	goto loc_8324EAC4;
loc_8324EAC0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8324EAC4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8324eae8
	if (!cr6.eq) goto loc_8324EAE8;
loc_8324EAD0:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8324e948
	ctx.lr = 0x8324EAE0;
	sub_8324E948(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8324eaf8
	if (!cr6.eq) goto loc_8324EAF8;
loc_8324EAE8:
	// lwz r31,64(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x8324ea30
	if (!cr6.eq) goto loc_8324EA30;
loc_8324EAF4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8324EAF8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8324EB00"))) PPC_WEAK_FUNC(sub_8324EB00);
PPC_FUNC_IMPL(__imp__sub_8324EB00) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8324eb28
	if (!cr6.eq) goto loc_8324EB28;
loc_8324EB20:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8324ebc8
	goto loc_8324EBC8;
loc_8324EB28:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8324eb20
	if (cr6.eq) goto loc_8324EB20;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
loc_8324EB3C:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r31,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r31.u32);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// subf r6,r7,r4
	ctx.r6.s64 = ctx.r4.s64 - ctx.r7.s64;
loc_8324EB4C:
	// lbzx r9,r6,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x8324eb90
	if (cr6.eq) goto loc_8324EB90;
	// cmpwi cr6,r8,47
	cr6.compare<int32_t>(ctx.r8.s32, 47, xer);
	// beq cr6,0x8324ebe0
	if (cr6.eq) goto loc_8324EBE0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// blt cr6,0x8324eb4c
	if (cr6.lt) goto loc_8324EB4C;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmpwi cr6,r5,128
	cr6.compare<int32_t>(ctx.r5.s32, 128, xer);
	// blt cr6,0x8324eb3c
	if (cr6.lt) goto loc_8324EB3C;
	// stb r31,223(r1)
	PPC_STORE_U8(ctx.r1.u32 + 223, ctx.r31.u8);
loc_8324EB90:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lbz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83210848
	ctx.lr = 0x8324EBA0;
	sub_83210848(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8324e948
	ctx.lr = 0x8324EBB0;
	sub_8324E948(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8324ebc8
	if (cr6.eq) goto loc_8324EBC8;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8324eb20
	if (cr6.eq) goto loc_8324EB20;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8324eb00
	ctx.lr = 0x8324EBC8;
	sub_8324EB00(ctx, base);
loc_8324EBC8:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8324EBE0:
	// add r11,r10,r4
	ctx.r11.u64 = ctx.r10.u64 + ctx.r4.u64;
	// stbx r31,r10,r7
	PPC_STORE_U8(ctx.r10.u32 + ctx.r7.u32, ctx.r31.u8);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r31,r7,r9
	ctx.r31.u64 = ctx.r7.u64 & ctx.r9.u64;
	// b 0x8324eb90
	goto loc_8324EB90;
}

__attribute__((alias("__imp__sub_8324EC00"))) PPC_WEAK_FUNC(sub_8324EC00);
PPC_FUNC_IMPL(__imp__sub_8324EC00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8324EC08;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,56(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8324ed0c
	if (cr6.eq) goto loc_8324ED0C;
	// lwz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lis r9,1024
	ctx.r9.s64 = 67108864;
loc_8324EC2C:
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// bne cr6,0x8324ecc4
	if (!cr6.eq) goto loc_8324ECC4;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r10,r11,0,5,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FFFFFC;
	// rlwinm r10,r10,0,29,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFC000007;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x8324ecc4
	if (!cr6.eq) goto loc_8324ECC4;
	// lwz r10,68(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8324ec68
	if (!cr6.eq) goto loc_8324EC68;
	// addic r11,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// subfe r11,r11,r30
	temp.u8 = (~ctx.r11.u32 + ctx.r30.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r30.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r30.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x8324ecb8
	goto loc_8324ECB8;
loc_8324EC68:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x8324ec78
	if (!cr6.eq) goto loc_8324EC78;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8324ecb8
	goto loc_8324ECB8;
loc_8324EC78:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf. r5,r6,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r6.s64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne 0x8324ecac
	if (!cr0.eq) goto loc_8324ECAC;
	// subf r10,r30,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r30.s64;
loc_8324EC8C:
	// lbz r7,3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8324ecb4
	if (cr6.eq) goto loc_8324ECB4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf. r5,r6,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r6.s64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq 0x8324ec8c
	if (cr0.eq) goto loc_8324EC8C;
loc_8324ECAC:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8324ecb8
	goto loc_8324ECB8;
loc_8324ECB4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8324ECB8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8324ed10
	if (cr6.eq) goto loc_8324ED10;
loc_8324ECC4:
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8324ec2c
	if (!cr6.eq) goto loc_8324EC2C;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8324ed0c
	if (cr6.eq) goto loc_8324ED0C;
loc_8324ECD8:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8324ed00
	if (!cr6.eq) goto loc_8324ED00;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8324ec00
	ctx.lr = 0x8324ECF8;
	sub_8324EC00(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8324ed10
	if (!cr6.eq) goto loc_8324ED10;
loc_8324ED00:
	// lwz r31,64(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x8324ecd8
	if (!cr6.eq) goto loc_8324ECD8;
loc_8324ED0C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8324ED10:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8324ED18"))) PPC_WEAK_FUNC(sub_8324ED18);
PPC_FUNC_IMPL(__imp__sub_8324ED18) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8324ed40
	if (!cr6.eq) goto loc_8324ED40;
loc_8324ED38:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8324ee68
	goto loc_8324EE68;
loc_8324ED40:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8324ed38
	if (cr6.eq) goto loc_8324ED38;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
loc_8324ED54:
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// stw r31,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r31.u32);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// subf r6,r7,r4
	ctx.r6.s64 = ctx.r4.s64 - ctx.r7.s64;
loc_8324ED64:
	// lbzx r10,r6,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8324eda8
	if (cr6.eq) goto loc_8324EDA8;
	// cmpwi cr6,r9,47
	cr6.compare<int32_t>(ctx.r9.s32, 47, xer);
	// beq cr6,0x8324edf8
	if (cr6.eq) goto loc_8324EDF8;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r8,4
	cr6.compare<int32_t>(ctx.r8.s32, 4, xer);
	// blt cr6,0x8324ed64
	if (cr6.lt) goto loc_8324ED64;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmpwi cr6,r5,128
	cr6.compare<int32_t>(ctx.r5.s32, 128, xer);
	// blt cr6,0x8324ed54
	if (cr6.lt) goto loc_8324ED54;
	// stb r31,223(r1)
	PPC_STORE_U8(ctx.r1.u32 + 223, ctx.r31.u8);
loc_8324EDA8:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lbz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83210848
	ctx.lr = 0x8324EDB8;
	sub_83210848(ctx, base);
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8324ee58
	if (!cr6.eq) goto loc_8324EE58;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lis r10,1024
	ctx.r10.s64 = 67108864;
	// rlwinm r9,r11,0,5,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FFFFFC;
	// rlwinm r9,r9,0,29,5
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFC000007;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bne cr6,0x8324ee58
	if (!cr6.eq) goto loc_8324EE58;
	// lwz r10,68(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8324ee00
	if (!cr6.eq) goto loc_8324EE00;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8324ee44
	goto loc_8324EE44;
loc_8324EDF8:
	// stbx r31,r8,r7
	PPC_STORE_U8(ctx.r8.u32 + ctx.r7.u32, ctx.r31.u8);
	// b 0x8324eda8
	goto loc_8324EDA8;
loc_8324EE00:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// subf. r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x8324ee38
	if (!cr0.eq) goto loc_8324EE38;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
loc_8324EE18:
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8324ee40
	if (cr6.eq) goto loc_8324EE40;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf. r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x8324ee18
	if (cr0.eq) goto loc_8324EE18;
loc_8324EE38:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8324ee44
	goto loc_8324EE44;
loc_8324EE40:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8324EE44:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8324ee58
	if (!cr6.eq) goto loc_8324EE58;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8324ee68
	goto loc_8324EE68;
loc_8324EE58:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8324ec00
	ctx.lr = 0x8324EE68;
	sub_8324EC00(ctx, base);
loc_8324EE68:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8324EE80"))) PPC_WEAK_FUNC(sub_8324EE80);
PPC_FUNC_IMPL(__imp__sub_8324EE80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x8324EE88;
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
	// bl 0x83296ba8
	ctx.lr = 0x8324EE9C;
	sub_83296BA8(ctx, base);
	// clrlwi r11,r30,30
	ctx.r11.u64 = ctx.r30.u32 & 0x3;
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// rlwinm r31,r10,0,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// bne cr6,0x8324eef4
	if (!cr6.eq) goto loc_8324EEF4;
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, xer);
	// bge cr6,0x8324eee8
	if (!cr6.lt) goto loc_8324EEE8;
loc_8324EEBC:
	// lbzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8324eee0
	if (!cr6.eq) goto loc_8324EEE0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, xer);
	// blt cr6,0x8324eebc
	if (cr6.lt) goto loc_8324EEBC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8324EEE0:
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, xer);
	// blt cr6,0x8324eef4
	if (cr6.lt) goto loc_8324EEF4;
loc_8324EEE8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_8324EEF4:
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, xer);
	// ble cr6,0x8324ef08
	if (!cr6.gt) goto loc_8324EF08;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83209aa8
	ctx.lr = 0x8324EF04;
	sub_83209AA8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_8324EF08:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83254ec0
	ctx.lr = 0x8324EF1C;
	sub_83254EC0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8324EF28"))) PPC_WEAK_FUNC(sub_8324EF28);
PPC_FUNC_IMPL(__imp__sub_8324EF28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8324EF30;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x8324ef64
	if (!cr6.eq) goto loc_8324EF64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32203
	ctx.r10.s64 = -2110455808;
	// addi r4,r11,11628
	ctx.r4.s64 = ctx.r11.s64 + 11628;
	// addi r3,r10,-22544
	ctx.r3.s64 = ctx.r10.s64 + -22544;
	// bl 0x8320d918
	ctx.lr = 0x8324EF58;
	sub_8320D918(ctx, base);
loc_8324EF58:
	// li r3,-3
	ctx.r3.s64 = -3;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8324EF64:
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-22544
	ctx.r4.s64 = ctx.r11.s64 + -22544;
	// bl 0x831ff600
	ctx.lr = 0x8324EF74;
	sub_831FF600(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8324ef58
	if (!cr6.eq) goto loc_8324EF58;
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r31,r11,24688
	ctx.r31.s64 = ctx.r11.s64 + 24688;
	// lwz r28,44(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r27,48(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r26,20(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x831ffe38
	ctx.lr = 0x8324EF98;
	sub_831FFE38(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8324efac
	if (cr6.eq) goto loc_8324EFAC;
	// lwz r30,348(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 348);
loc_8324EFAC:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,14552
	ctx.r4.s64 = ctx.r11.s64 + 14552;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83296de8
	ctx.lr = 0x8324EFC0;
	sub_83296DE8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8324f008
	if (!cr6.eq) goto loc_8324F008;
	// lwz r11,268(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 268);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8324eff4
	if (cr6.eq) goto loc_8324EFF4;
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8324eff4
	if (cr6.eq) goto loc_8324EFF4;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r11,r11,0,24,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC0;
	// addi r11,r11,-192
	ctx.r11.s64 = ctx.r11.s64 + -192;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_8324EFF4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8324f004
	if (cr6.eq) goto loc_8324F004;
	// lwz r30,56(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
loc_8324F004:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_8324F008:
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(ctx.r11.u32, 47, xer);
	// bne cr6,0x8324f01c
	if (!cr6.eq) goto loc_8324F01C;
	// addi r4,r29,1
	ctx.r4.s64 = ctx.r29.s64 + 1;
loc_8324F01C:
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8324f030
	if (cr6.eq) goto loc_8324F030;
	// bl 0x8324eb00
	ctx.lr = 0x8324F030;
	sub_8324EB00(ctx, base);
loc_8324F030:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r30,-4
	ctx.r30.s64 = -4;
	// beq cr6,0x8324f040
	if (cr6.eq) goto loc_8324F040;
	// lwz r30,264(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
loc_8324F040:
	// stw r26,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r26.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r28,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r28.u32);
	// bl 0x831ffdd8
	ctx.lr = 0x8324F050;
	sub_831FFDD8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8324F05C"))) PPC_WEAK_FUNC(sub_8324F05C);
PPC_FUNC_IMPL(__imp__sub_8324F05C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8324F060"))) PPC_WEAK_FUNC(sub_8324F060);
PPC_FUNC_IMPL(__imp__sub_8324F060) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8324F068;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x8324f098
	if (!cr6.eq) goto loc_8324F098;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32203
	ctx.r10.s64 = -2110455808;
	// addi r4,r11,11628
	ctx.r4.s64 = ctx.r11.s64 + 11628;
	// addi r3,r10,-22544
	ctx.r3.s64 = ctx.r10.s64 + -22544;
	// bl 0x8320d918
	ctx.lr = 0x8324F08C;
	sub_8320D918(ctx, base);
	// li r3,-3
	ctx.r3.s64 = -3;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8324F098:
	// rlwinm r11,r3,0,1,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x78000000;
	// lis r10,8192
	ctx.r10.s64 = 536870912;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x8324f0b8
	if (!cr6.eq) goto loc_8324F0B8;
	// bl 0x83234f88
	ctx.lr = 0x8324F0AC;
	sub_83234F88(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8324f0c4
	if (!cr6.eq) goto loc_8324F0C4;
loc_8324F0B8:
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8324F0C4:
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r31,r11,24688
	ctx.r31.s64 = ctx.r11.s64 + 24688;
	// lwz r28,44(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r27,48(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r26,20(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x831ffe38
	ctx.lr = 0x8324F0E0;
	sub_831FFE38(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,14552
	ctx.r4.s64 = ctx.r11.s64 + 14552;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83296de8
	ctx.lr = 0x8324F0F4;
	sub_83296DE8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8324f13c
	if (!cr6.eq) goto loc_8324F13C;
	// lwz r11,268(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 268);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8324f128
	if (cr6.eq) goto loc_8324F128;
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8324f128
	if (cr6.eq) goto loc_8324F128;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r11,r11,0,24,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC0;
	// addi r11,r11,-192
	ctx.r11.s64 = ctx.r11.s64 + -192;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_8324F128:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8324f138
	if (cr6.eq) goto loc_8324F138;
	// lwz r30,56(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
loc_8324F138:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_8324F13C:
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(ctx.r11.u32, 47, xer);
	// bne cr6,0x8324f150
	if (!cr6.eq) goto loc_8324F150;
	// addi r4,r29,1
	ctx.r4.s64 = ctx.r29.s64 + 1;
loc_8324F150:
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8324f168
	if (cr6.eq) goto loc_8324F168;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8324eb00
	ctx.lr = 0x8324F164;
	sub_8324EB00(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8324F168:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x8324f178
	if (!cr6.eq) goto loc_8324F178;
	// li r30,-4
	ctx.r30.s64 = -4;
	// b 0x8324f17c
	goto loc_8324F17C;
loc_8324F178:
	// lwz r30,264(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
loc_8324F17C:
	// stw r26,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r26.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r28,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r28.u32);
	// bl 0x831ffdd8
	ctx.lr = 0x8324F18C;
	sub_831FFDD8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8324F198"))) PPC_WEAK_FUNC(sub_8324F198);
PPC_FUNC_IMPL(__imp__sub_8324F198) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8324F1A0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x8324f1d0
	if (!cr6.eq) goto loc_8324F1D0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32203
	ctx.r10.s64 = -2110455808;
	// addi r4,r11,11612
	ctx.r4.s64 = ctx.r11.s64 + 11612;
	// addi r3,r10,-22544
	ctx.r3.s64 = ctx.r10.s64 + -22544;
	// bl 0x8320d918
	ctx.lr = 0x8324F1C4;
	sub_8320D918(ctx, base);
	// li r3,-3
	ctx.r3.s64 = -3;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8324F1D0:
	// rlwinm r11,r3,0,1,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x78000000;
	// lis r10,8192
	ctx.r10.s64 = 536870912;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x8324f1f0
	if (!cr6.eq) goto loc_8324F1F0;
	// bl 0x83234f88
	ctx.lr = 0x8324F1E4;
	sub_83234F88(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8324f200
	if (!cr6.eq) goto loc_8324F200;
loc_8324F1F0:
	// li r30,-4
	ctx.r30.s64 = -4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8324F200:
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r31,r11,24688
	ctx.r31.s64 = ctx.r11.s64 + 24688;
	// lwz r29,44(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r28,48(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r27,20(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x831ffe38
	ctx.lr = 0x8324F21C;
	sub_831FFE38(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8324ed18
	ctx.lr = 0x8324F228;
	sub_8324ED18(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r30,-4
	ctx.r30.s64 = -4;
	// beq cr6,0x8324f238
	if (cr6.eq) goto loc_8324F238;
	// lwz r30,264(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
loc_8324F238:
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r29,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r29.u32);
	// bl 0x831ffdd8
	ctx.lr = 0x8324F248;
	sub_831FFDD8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8324F254"))) PPC_WEAK_FUNC(sub_8324F254);
PPC_FUNC_IMPL(__imp__sub_8324F254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8324F258"))) PPC_WEAK_FUNC(sub_8324F258);
PPC_FUNC_IMPL(__imp__sub_8324F258) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8324f2b4
	if (cr6.eq) goto loc_8324F2B4;
	// lwz r31,56(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8324f2b4
	if (cr6.eq) goto loc_8324F2B4;
loc_8324F27C:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8324f2a8
	if (!cr6.eq) goto loc_8324F2A8;
	// rlwinm r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8324f2b8
	if (!cr6.eq) goto loc_8324F2B8;
	// bl 0x8324f258
	ctx.lr = 0x8324F2A0;
	sub_8324F258(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8324f2b8
	if (!cr6.eq) goto loc_8324F2B8;
loc_8324F2A8:
	// lwz r31,64(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x8324f27c
	if (!cr6.eq) goto loc_8324F27C;
loc_8324F2B4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8324F2B8:
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

__attribute__((alias("__imp__sub_8324F2CC"))) PPC_WEAK_FUNC(sub_8324F2CC);
PPC_FUNC_IMPL(__imp__sub_8324F2CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8324F2D0"))) PPC_WEAK_FUNC(sub_8324F2D0);
PPC_FUNC_IMPL(__imp__sub_8324F2D0) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8324f348
	if (cr6.eq) goto loc_8324F348;
	// lwz r31,56(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8324f348
	if (cr6.eq) goto loc_8324F348;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8324f310
	if (cr6.eq) goto loc_8324F310;
loc_8324F300:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8324f300
	if (!cr6.eq) goto loc_8324F300;
loc_8324F310:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8324f33c
	if (!cr6.eq) goto loc_8324F33C;
	// rlwinm r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8324f34c
	if (!cr6.eq) goto loc_8324F34C;
	// bl 0x8324f2d0
	ctx.lr = 0x8324F334;
	sub_8324F2D0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8324f34c
	if (!cr6.eq) goto loc_8324F34C;
loc_8324F33C:
	// lwz r31,60(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x8324f310
	if (!cr6.eq) goto loc_8324F310;
loc_8324F348:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8324F34C:
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

__attribute__((alias("__imp__sub_8324F360"))) PPC_WEAK_FUNC(sub_8324F360);
PPC_FUNC_IMPL(__imp__sub_8324F360) {
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
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8324f3e0
	if (cr6.eq) goto loc_8324F3E0;
loc_8324F378:
	// lwz r9,64(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 64);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8324f3bc
	if (cr6.eq) goto loc_8324F3BC;
loc_8324F384:
	// lwz r11,32(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8324f3b0
	if (!cr6.eq) goto loc_8324F3B0;
	// rlwinm r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8324f3e4
	if (!cr6.eq) goto loc_8324F3E4;
	// bl 0x8324f258
	ctx.lr = 0x8324F3A8;
	sub_8324F258(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8324f3e4
	if (!cr6.eq) goto loc_8324F3E4;
loc_8324F3B0:
	// lwz r9,64(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8324f384
	if (!cr6.eq) goto loc_8324F384;
loc_8324F3BC:
	// lwz r11,52(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8324f3e0
	if (cr6.eq) goto loc_8324F3E0;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r9,r10,0,5,5
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8324f3e0
	if (!cr6.eq) goto loc_8324F3E0;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// b 0x8324f378
	goto loc_8324F378;
loc_8324F3E0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8324F3E4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8324F3F4"))) PPC_WEAK_FUNC(sub_8324F3F4);
PPC_FUNC_IMPL(__imp__sub_8324F3F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8324F3F8"))) PPC_WEAK_FUNC(sub_8324F3F8);
PPC_FUNC_IMPL(__imp__sub_8324F3F8) {
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
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8324f478
	if (cr6.eq) goto loc_8324F478;
loc_8324F410:
	// lwz r9,60(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 60);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8324f454
	if (cr6.eq) goto loc_8324F454;
loc_8324F41C:
	// lwz r11,32(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8324f448
	if (!cr6.eq) goto loc_8324F448;
	// rlwinm r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8324f47c
	if (!cr6.eq) goto loc_8324F47C;
	// bl 0x8324f2d0
	ctx.lr = 0x8324F440;
	sub_8324F2D0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8324f47c
	if (!cr6.eq) goto loc_8324F47C;
loc_8324F448:
	// lwz r9,60(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8324f41c
	if (!cr6.eq) goto loc_8324F41C;
loc_8324F454:
	// lwz r11,52(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8324f478
	if (cr6.eq) goto loc_8324F478;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r9,r10,0,5,5
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8324f478
	if (!cr6.eq) goto loc_8324F478;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// b 0x8324f410
	goto loc_8324F410;
loc_8324F478:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8324F47C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8324F48C"))) PPC_WEAK_FUNC(sub_8324F48C);
PPC_FUNC_IMPL(__imp__sub_8324F48C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8324F490"))) PPC_WEAK_FUNC(sub_8324F490);
PPC_FUNC_IMPL(__imp__sub_8324F490) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8324f520
	if (cr6.eq) goto loc_8324F520;
	// lwz r31,56(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8324f520
	if (cr6.eq) goto loc_8324F520;
loc_8324F4BC:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8324f514
	if (!cr6.eq) goto loc_8324F514;
	// rlwinm r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8324f500
	if (cr6.eq) goto loc_8324F500;
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8324f514
	if (cr6.eq) goto loc_8324F514;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83237ad0
	ctx.lr = 0x8324F4EC;
	sub_83237AD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8324f514
	if (!cr6.eq) goto loc_8324F514;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8324f524
	goto loc_8324F524;
loc_8324F500:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8324f490
	ctx.lr = 0x8324F50C;
	sub_8324F490(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8324f524
	if (!cr6.eq) goto loc_8324F524;
loc_8324F514:
	// lwz r31,64(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x8324f4bc
	if (!cr6.eq) goto loc_8324F4BC;
loc_8324F520:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8324F524:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8324F53C"))) PPC_WEAK_FUNC(sub_8324F53C);
PPC_FUNC_IMPL(__imp__sub_8324F53C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8324F540"))) PPC_WEAK_FUNC(sub_8324F540);
PPC_FUNC_IMPL(__imp__sub_8324F540) {
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
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
loc_8324F554:
	// lwz r7,64(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 64);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8324f5d0
	if (cr6.eq) goto loc_8324F5D0;
loc_8324F560:
	// lwz r11,32(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 32);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8324f5c4
	if (!cr6.eq) goto loc_8324F5C4;
	// rlwinm r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8324f5b0
	if (cr6.eq) goto loc_8324F5B0;
	// lwz r3,68(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 68);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8324f5c4
	if (cr6.eq) goto loc_8324F5C4;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x83237ad0
	ctx.lr = 0x8324F590;
	sub_83237AD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8324f5c4
	if (!cr6.eq) goto loc_8324F5C4;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8324F5B0:
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x8324f490
	ctx.lr = 0x8324F5BC;
	sub_8324F490(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8324f5f8
	if (!cr6.eq) goto loc_8324F5F8;
loc_8324F5C4:
	// lwz r7,64(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 64);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x8324f560
	if (!cr6.eq) goto loc_8324F560;
loc_8324F5D0:
	// lwz r11,52(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 52);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8324f5f4
	if (cr6.eq) goto loc_8324F5F4;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r9,r10,0,5,5
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8324f5f4
	if (!cr6.eq) goto loc_8324F5F4;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// b 0x8324f554
	goto loc_8324F554;
loc_8324F5F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8324F5F8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8324F608"))) PPC_WEAK_FUNC(sub_8324F608);
PPC_FUNC_IMPL(__imp__sub_8324F608) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8324f6b4
	if (cr6.eq) goto loc_8324F6B4;
	// lwz r31,56(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x8324f6b4
	if (cr6.eq) goto loc_8324F6B4;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8324f650
	if (cr6.eq) goto loc_8324F650;
loc_8324F640:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8324f640
	if (!cr6.eq) goto loc_8324F640;
loc_8324F650:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8324f6a8
	if (!cr6.eq) goto loc_8324F6A8;
	// rlwinm r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8324f694
	if (cr6.eq) goto loc_8324F694;
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8324f6a8
	if (cr6.eq) goto loc_8324F6A8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83237ad0
	ctx.lr = 0x8324F680;
	sub_83237AD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8324f6a8
	if (!cr6.eq) goto loc_8324F6A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8324f6b8
	goto loc_8324F6B8;
loc_8324F694:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8324f608
	ctx.lr = 0x8324F6A0;
	sub_8324F608(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8324f6b8
	if (!cr6.eq) goto loc_8324F6B8;
loc_8324F6A8:
	// lwz r31,60(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x8324f650
	if (!cr6.eq) goto loc_8324F650;
loc_8324F6B4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8324F6B8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8324F6D0"))) PPC_WEAK_FUNC(sub_8324F6D0);
PPC_FUNC_IMPL(__imp__sub_8324F6D0) {
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
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
loc_8324F6E4:
	// lwz r7,60(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8324f760
	if (cr6.eq) goto loc_8324F760;
loc_8324F6F0:
	// lwz r11,32(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 32);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8324f754
	if (!cr6.eq) goto loc_8324F754;
	// rlwinm r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8324f740
	if (cr6.eq) goto loc_8324F740;
	// lwz r3,68(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 68);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8324f754
	if (cr6.eq) goto loc_8324F754;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x83237ad0
	ctx.lr = 0x8324F720;
	sub_83237AD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8324f754
	if (!cr6.eq) goto loc_8324F754;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8324F740:
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x8324f608
	ctx.lr = 0x8324F74C;
	sub_8324F608(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8324f788
	if (!cr6.eq) goto loc_8324F788;
loc_8324F754:
	// lwz r7,60(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 60);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x8324f6f0
	if (!cr6.eq) goto loc_8324F6F0;
loc_8324F760:
	// lwz r11,52(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 52);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8324f784
	if (cr6.eq) goto loc_8324F784;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r9,r10,0,5,5
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8324f784
	if (!cr6.eq) goto loc_8324F784;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// b 0x8324f6e4
	goto loc_8324F6E4;
loc_8324F784:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8324F788:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8324F798"))) PPC_WEAK_FUNC(sub_8324F798);
PPC_FUNC_IMPL(__imp__sub_8324F798) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x8324F7A0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r3,0,1,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x78000000;
	// lis r10,8192
	ctx.r10.s64 = 536870912;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x8324f7c8
	if (!cr6.eq) goto loc_8324F7C8;
	// bl 0x83234f88
	ctx.lr = 0x8324F7BC;
	sub_83234F88(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8324f7d4
	if (!cr6.eq) goto loc_8324F7D4;
loc_8324F7C8:
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8324F7D4:
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r29,r11,24688
	ctx.r29.s64 = ctx.r11.s64 + 24688;
	// lwz r28,44(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// lwz r27,48(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// lwz r26,20(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// bl 0x831ffe38
	ctx.lr = 0x8324F7F0;
	sub_831FFE38(ctx, base);
	// cmplwi cr6,r30,7
	cr6.compare<uint32_t>(ctx.r30.u32, 7, xer);
	// bgt cr6,0x8324f96c
	if (cr6.gt) goto loc_8324F96C;
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8324f868
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8324F868;
	// bdzf 4*cr6+eq,0x8324f874
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8324F874;
	// bdzf 4*cr6+eq,0x8324f8c0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8324F8C0;
	// bdzf 4*cr6+eq,0x8324f8cc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8324F8CC;
	// bdzf 4*cr6+eq,0x8324f8d8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8324F8D8;
	// bdzf 4*cr6+eq,0x8324f91c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8324F91C;
	// bne cr6,0x8324f944
	if (!cr6.eq) goto loc_8324F944;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8324f860
	if (cr6.eq) goto loc_8324F860;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r10,r11,0,5,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8324f858
	if (!cr6.eq) goto loc_8324F858;
loc_8324F838:
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8324f858
	if (cr6.eq) goto loc_8324F858;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// rlwinm r9,r10,0,5,5
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8324f838
	if (cr6.eq) goto loc_8324F838;
loc_8324F858:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8324f99c
	if (!cr6.eq) goto loc_8324F99C;
loc_8324F860:
	// li r31,-4
	ctx.r31.s64 = -4;
	// b 0x8324f9a0
	goto loc_8324F9A0;
loc_8324F868:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8324F86C:
	// bl 0x8324f258
	ctx.lr = 0x8324F870;
	sub_8324F258(ctx, base);
	// b 0x8324f858
	goto loc_8324F858;
loc_8324F874:
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8324f8b8
	if (cr6.eq) goto loc_8324F8B8;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r10,r11,0,5,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8324f86c
	if (!cr6.eq) goto loc_8324F86C;
loc_8324F890:
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8324f86c
	if (cr6.eq) goto loc_8324F86C;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// rlwinm r9,r10,0,5,5
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8324f890
	if (cr6.eq) goto loc_8324F890;
	// bl 0x8324f258
	ctx.lr = 0x8324F8B4;
	sub_8324F258(ctx, base);
	// b 0x8324f858
	goto loc_8324F858;
loc_8324F8B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8324f858
	goto loc_8324F858;
loc_8324F8C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8324f360
	ctx.lr = 0x8324F8C8;
	sub_8324F360(ctx, base);
	// b 0x8324f858
	goto loc_8324F858;
loc_8324F8CC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8324f3f8
	ctx.lr = 0x8324F8D4;
	sub_8324F3F8(ctx, base);
	// b 0x8324f858
	goto loc_8324F858;
loc_8324F8D8:
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8324f8b8
	if (cr6.eq) goto loc_8324F8B8;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r10,r11,0,5,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8324f914
	if (!cr6.eq) goto loc_8324F914;
loc_8324F8F4:
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8324f914
	if (cr6.eq) goto loc_8324F914;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// rlwinm r9,r10,0,5,5
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8324f8f4
	if (cr6.eq) goto loc_8324F8F4;
loc_8324F914:
	// bl 0x8324f2d0
	ctx.lr = 0x8324F918;
	sub_8324F2D0(ctx, base);
	// b 0x8324f858
	goto loc_8324F858;
loc_8324F91C:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r10,r11,0,5,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8324f860
	if (cr6.eq) goto loc_8324F860;
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8324f860
	if (cr6.eq) goto loc_8324F860;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8324f540
	ctx.lr = 0x8324F940;
	sub_8324F540(ctx, base);
	// b 0x8324f858
	goto loc_8324F858;
loc_8324F944:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r10,r11,0,5,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8324f860
	if (cr6.eq) goto loc_8324F860;
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8324f860
	if (cr6.eq) goto loc_8324F860;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8324f6d0
	ctx.lr = 0x8324F968;
	sub_8324F6D0(ctx, base);
	// b 0x8324f858
	goto loc_8324F858;
loc_8324F96C:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32203
	ctx.r10.s64 = -2110455808;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// lis r8,-32221
	ctx.r8.s64 = -2111635456;
	// addi r6,r11,14560
	ctx.r6.s64 = ctx.r11.s64 + 14560;
	// addi r5,r10,-22544
	ctx.r5.s64 = ctx.r10.s64 + -22544;
	// addi r4,r9,14472
	ctx.r4.s64 = ctx.r9.s64 + 14472;
	// addi r3,r8,14436
	ctx.r3.s64 = ctx.r8.s64 + 14436;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bl 0x83208330
	ctx.lr = 0x8324F994;
	sub_83208330(ctx, base);
	// li r31,-2
	ctx.r31.s64 = -2;
	// b 0x8324f9a0
	goto loc_8324F9A0;
loc_8324F99C:
	// lwz r31,264(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
loc_8324F9A0:
	// stw r26,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r26.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r28,44(r29)
	PPC_STORE_U32(ctx.r29.u32 + 44, ctx.r28.u32);
	// bl 0x831ffdd8
	ctx.lr = 0x8324F9B0;
	sub_831FFDD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8324F9BC"))) PPC_WEAK_FUNC(sub_8324F9BC);
PPC_FUNC_IMPL(__imp__sub_8324F9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8324F9C0"))) PPC_WEAK_FUNC(sub_8324F9C0);
PPC_FUNC_IMPL(__imp__sub_8324F9C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x8324F9C8;
	__savegprlr_24(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x8324fa04
	if (!cr6.eq) goto loc_8324FA04;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// addi r4,r11,11628
	ctx.r4.s64 = ctx.r11.s64 + 11628;
	// bl 0x8320d918
	ctx.lr = 0x8324F9F8;
	sub_8320D918(ctx, base);
	// li r3,-3
	ctx.r3.s64 = -3;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_8324FA04:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x8324fa28
	if (!cr6.eq) goto loc_8324FA28;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r11,12932
	ctx.r4.s64 = ctx.r11.s64 + 12932;
	// bl 0x8320d918
	ctx.lr = 0x8324FA1C;
	sub_8320D918(ctx, base);
	// li r3,-3
	ctx.r3.s64 = -3;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_8324FA28:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(ctx.r11.u32, 47, xer);
	// bne cr6,0x8324fa40
	if (!cr6.eq) goto loc_8324FA40;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_8324FA40:
	// li r4,47
	ctx.r4.s64 = 47;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83296d40
	ctx.lr = 0x8324FA4C;
	sub_83296D40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8324fad0
	if (cr6.eq) goto loc_8324FAD0;
	// subf r6,r31,r3
	ctx.r6.s64 = ctx.r3.s64 - ctx.r31.s64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x832553f0
	ctx.lr = 0x8324FA70;
	sub_832553F0(ctx, base);
	// lbz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(ctx.r11.u32, 47, xer);
	// bne cr6,0x8324fa84
	if (!cr6.eq) goto loc_8324FA84;
	// addi r4,r1,113
	ctx.r4.s64 = ctx.r1.s64 + 113;
loc_8324FA84:
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8324fa9c
	if (cr6.eq) goto loc_8324FA9C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8324eb00
	ctx.lr = 0x8324FA98;
	sub_8324EB00(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_8324FA9C:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x8324fac4
	if (!cr6.eq) goto loc_8324FAC4;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,14568
	ctx.r4.s64 = ctx.r11.s64 + 14568;
	// addi r3,r10,14436
	ctx.r3.s64 = ctx.r10.s64 + 14436;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x83208330
	ctx.lr = 0x8324FAC0;
	sub_83208330(ctx, base);
	// li r25,-4
	ctx.r25.s64 = -4;
loc_8324FAC4:
	// addi r31,r30,1
	ctx.r31.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(ctx.r25.s32, 0, xer);
	// bne cr6,0x8324fba0
	if (!cr6.eq) goto loc_8324FBA0;
loc_8324FAD0:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(ctx.r26.s32, 0, xer);
	// bge cr6,0x8324fae4
	if (!cr6.lt) goto loc_8324FAE4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83214178
	ctx.lr = 0x8324FAE0;
	sub_83214178(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_8324FAE4:
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// rlwinm r10,r11,3,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8324fb10
	if (cr6.eq) goto loc_8324FB10;
	// bl 0x83234fc8
	ctx.lr = 0x8324FAF8;
	sub_83234FC8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8320c190
	ctx.lr = 0x8324FB0C;
	sub_8320C190(ctx, base);
	// b 0x8324fb20
	goto loc_8324FB20;
loc_8324FB10:
	// addi r4,r26,16384
	ctx.r4.s64 = ctx.r26.s64 + 16384;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83217e18
	ctx.lr = 0x8324FB1C;
	sub_83217E18(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_8324FB20:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x8324fb3c
	if (!cr6.eq) goto loc_8324FB3C;
	// li r25,-4
	ctx.r25.s64 = -4;
	// stw r29,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r29.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_8324FB3C:
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r5,32
	ctx.r5.s64 = 32;
	// rlwimi r11,r10,1,30,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0x2) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFD);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rlwimi r11,r10,1,7,7
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0x1000000) | (ctx.r11.u64 & 0xFFFFFFFFFEFFFFFF);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r11.u32);
	// lwz r9,268(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 268);
	// stw r9,268(r29)
	PPC_STORE_U32(ctx.r29.u32 + 268, ctx.r9.u32);
	// bl 0x8324ee80
	ctx.lr = 0x8324FB68;
	sub_8324EE80(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8321c860
	ctx.lr = 0x8324FB7C;
	sub_8321C860(ctx, base);
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, xer);
	// beq cr6,0x8324fba0
	if (cr6.eq) goto loc_8324FBA0;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// beq cr6,0x8324fba0
	if (cr6.eq) goto loc_8324FBA0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x8324fba0
	if (cr6.eq) goto loc_8324FBA0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83209d68
	ctx.lr = 0x8324FBA0;
	sub_83209D68(ctx, base);
loc_8324FBA0:
	// stw r29,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r29.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8324FBB0"))) PPC_WEAK_FUNC(sub_8324FBB0);
PPC_FUNC_IMPL(__imp__sub_8324FBB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x8324FBB8;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r3,0,1,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x78000000;
	// lis r10,8192
	ctx.r10.s64 = 536870912;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x8324fbe4
	if (!cr6.eq) goto loc_8324FBE4;
	// bl 0x83234f88
	ctx.lr = 0x8324FBD8;
	sub_83234F88(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8324fbf0
	if (!cr6.eq) goto loc_8324FBF0;
loc_8324FBE4:
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8324FBF0:
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r31,r11,24688
	ctx.r31.s64 = ctx.r11.s64 + 24688;
	// lwz r27,44(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r26,48(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r25,20(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x831ffe38
	ctx.lr = 0x8324FC0C;
	sub_831FFE38(ctx, base);
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r11,-22544
	ctx.r7.s64 = ctx.r11.s64 + -22544;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8324f9c0
	ctx.lr = 0x8324FC30;
	sub_8324F9C0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8324fc54
	if (!cr6.eq) goto loc_8324FC54;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8324fc4c
	if (!cr6.eq) goto loc_8324FC4C;
	// li r30,-4
	ctx.r30.s64 = -4;
	// b 0x8324fc58
	goto loc_8324FC58;
loc_8324FC4C:
	// lwz r30,264(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// b 0x8324fc58
	goto loc_8324FC58;
loc_8324FC54:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8324FC58:
	// lhz r11,38(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 38);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,38(r31)
	PPC_STORE_U16(ctx.r31.u32 + 38, ctx.r11.u16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8324fc78
	if (!cr6.eq) goto loc_8324FC78;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r11,38(r31)
	PPC_STORE_U16(ctx.r31.u32 + 38, ctx.r11.u16);
loc_8324FC78:
	// stw r25,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r25.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r27,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r27.u32);
	// bl 0x831ffdd8
	ctx.lr = 0x8324FC88;
	sub_831FFDD8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8324FC94"))) PPC_WEAK_FUNC(sub_8324FC94);
PPC_FUNC_IMPL(__imp__sub_8324FC94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8324FC98"))) PPC_WEAK_FUNC(sub_8324FC98);
PPC_FUNC_IMPL(__imp__sub_8324FC98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x8324FCA0;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r28,r11,-22544
	ctx.r28.s64 = ctx.r11.s64 + -22544;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x831ff670
	ctx.lr = 0x8324FCC0;
	sub_831FF670(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8324fcf8
	if (cr6.eq) goto loc_8324FCF8;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r6,r11,14604
	ctx.r6.s64 = ctx.r11.s64 + 14604;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r10,14448
	ctx.r4.s64 = ctx.r10.s64 + 14448;
	// addi r3,r9,14436
	ctx.r3.s64 = ctx.r9.s64 + 14436;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bl 0x83208330
	ctx.lr = 0x8324FCEC;
	sub_83208330(ctx, base);
	// li r3,-18
	ctx.r3.s64 = -18;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_8324FCF8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832043c8
	ctx.lr = 0x8324FD04;
	sub_832043C8(ctx, base);
	// rlwinm r11,r31,0,1,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x78000000;
	// lis r10,8192
	ctx.r10.s64 = 536870912;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x8324fd2c
	if (!cr6.eq) goto loc_8324FD2C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83234f88
	ctx.lr = 0x8324FD20;
	sub_83234F88(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8324fd38
	if (!cr6.eq) goto loc_8324FD38;
loc_8324FD2C:
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_8324FD38:
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r29,r11,24688
	ctx.r29.s64 = ctx.r11.s64 + 24688;
	// lwz r26,44(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// lwz r25,48(r29)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// lwz r24,20(r29)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// bl 0x831ffe38
	ctx.lr = 0x8324FD54;
	sub_831FFE38(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r10,r11,3,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8324fe28
	if (cr6.eq) goto loc_8324FE28;
	// bl 0x83229658
	ctx.lr = 0x8324FD6C;
	sub_83229658(ctx, base);
	// lhz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,12(r3)
	PPC_STORE_U16(ctx.r3.u32 + 12, ctx.r11.u16);
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// bl 0x83229630
	ctx.lr = 0x8324FD84;
	sub_83229630(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x83228fe8
	ctx.lr = 0x8324FD8C;
	sub_83228FE8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// bl 0x832290d0
	ctx.lr = 0x8324FD98;
	sub_832290D0(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r9,1935
	ctx.r9.s64 = 1935;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// sth r9,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r9.u16);
	// li r5,160
	ctx.r5.s64 = 160;
	// stb r28,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r28.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8322c328
	ctx.lr = 0x8324FDC4;
	sub_8322C328(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83229e28
	ctx.lr = 0x8324FDDC;
	sub_83229E28(ctx, base);
	// li r8,1856
	ctx.r8.s64 = 1856;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r8,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r8.u16);
	// stb r28,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r28.u8);
	// bl 0x8322ab20
	ctx.lr = 0x8324FDFC;
	sub_8322AB20(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8324fe1c
	if (!cr6.eq) goto loc_8324FE1C;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8322c4b8
	ctx.lr = 0x8324FE18;
	sub_8322C4B8(ctx, base);
	// b 0x8324fe4c
	goto loc_8324FE4C;
loc_8324FE1C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832356e0
	ctx.lr = 0x8324FE24;
	sub_832356E0(ctx, base);
	// b 0x8324fe4c
	goto loc_8324FE4C;
loc_8324FE28:
	// bl 0x8321b8f0
	ctx.lr = 0x8324FE2C;
	sub_8321B8F0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832043c8
	ctx.lr = 0x8324FE38;
	sub_832043C8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x83200388
	ctx.lr = 0x8324FE40;
	sub_83200388(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83217288
	ctx.lr = 0x8324FE4C;
	sub_83217288(ctx, base);
loc_8324FE4C:
	// lhz r11,38(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 38);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,38(r29)
	PPC_STORE_U16(ctx.r29.u32 + 38, ctx.r11.u16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8324fe6c
	if (!cr6.eq) goto loc_8324FE6C;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r11,38(r29)
	PPC_STORE_U16(ctx.r29.u32 + 38, ctx.r11.u16);
loc_8324FE6C:
	// stw r24,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r24.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r26,44(r29)
	PPC_STORE_U32(ctx.r29.u32 + 44, ctx.r26.u32);
	// bl 0x831ffdd8
	ctx.lr = 0x8324FE7C;
	sub_831FFDD8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8324FE88"))) PPC_WEAK_FUNC(sub_8324FE88);
PPC_FUNC_IMPL(__imp__sub_8324FE88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8324FE90;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,268(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832592d8
	ctx.lr = 0x8324FEA8;
	sub_832592D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,65535
	cr6.compare<uint32_t>(ctx.r3.u32, 65535, xer);
	// beq cr6,0x8324fec8
	if (cr6.eq) goto loc_8324FEC8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83259198
	ctx.lr = 0x8324FEBC;
	sub_83259198(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8324fef4
	if (!cr6.eq) goto loc_8324FEF4;
loc_8324FEC8:
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r5,r11,-22544
	ctx.r5.s64 = ctx.r11.s64 + -22544;
	// addi r4,r10,14508
	ctx.r4.s64 = ctx.r10.s64 + 14508;
	// addi r3,r9,14436
	ctx.r3.s64 = ctx.r9.s64 + 14436;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x83208330
	ctx.lr = 0x8324FEE8;
	sub_83208330(ctx, base);
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8324FEF4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8321b8f0
	ctx.lr = 0x8324FEFC;
	sub_8321B8F0(ctx, base);
	// stw r31,44(r29)
	PPC_STORE_U32(ctx.r29.u32 + 44, ctx.r31.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8324ff6c
	if (cr6.eq) goto loc_8324FF6C;
	// rlwinm r11,r11,0,21,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FE;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8324ff6c
	if (cr6.eq) goto loc_8324FF6C;
	// lwz r11,268(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 268);
	// li r9,0
	ctx.r9.s64 = 0;
	// lhz r7,28(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 28);
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// ble cr6,0x8324ff6c
	if (!cr6.gt) goto loc_8324FF6C;
	// lwz r8,72(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// li r11,0
	ctx.r11.s64 = 0;
loc_8324FF38:
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r6,r10,8
	ctx.r6.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r6,r31
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r31.u32, xer);
	// beq cr6,0x8324ff5c
	if (cr6.eq) goto loc_8324FF5C;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// cmpw cr6,r9,r7
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, xer);
	// blt cr6,0x8324ff38
	if (cr6.lt) goto loc_8324FF38;
	// b 0x8324ff6c
	goto loc_8324FF6C;
loc_8324FF5C:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8324ff6c
	if (cr6.eq) goto loc_8324FF6C;
	// stw r11,268(r29)
	PPC_STORE_U32(ctx.r29.u32 + 268, ctx.r11.u32);
loc_8324FF6C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83215368
	ctx.lr = 0x8324FF74;
	sub_83215368(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x832146c8
	ctx.lr = 0x8324FF80;
	sub_832146C8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8324FF8C"))) PPC_WEAK_FUNC(sub_8324FF8C);
PPC_FUNC_IMPL(__imp__sub_8324FF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8324FF90"))) PPC_WEAK_FUNC(sub_8324FF90);
PPC_FUNC_IMPL(__imp__sub_8324FF90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x8324FF98;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,268(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x83229630
	ctx.lr = 0x8324FFAC;
	sub_83229630(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x8324ffc0
	if (cr6.eq) goto loc_8324FFC0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x8324ffdc
	goto loc_8324FFDC;
loc_8324FFC0:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x832277f8
	ctx.lr = 0x8324FFC8;
	sub_832277F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8324ffdc
	if (!cr6.eq) goto loc_8324FFDC;
	// bl 0x83227908
	ctx.lr = 0x8324FFD8;
	sub_83227908(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_8324FFDC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832291a0
	ctx.lr = 0x8324FFE4;
	sub_832291A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8325009c
	if (cr6.eq) goto loc_8325009C;
	// bl 0x83238688
	ctx.lr = 0x8324FFF4;
	sub_83238688(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8325001c
	if (cr6.eq) goto loc_8325001C;
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r11,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r11.u32);
	// bl 0x83215368
	ctx.lr = 0x83250010;
	sub_83215368(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832146c8
	ctx.lr = 0x8325001C;
	sub_832146C8(ctx, base);
loc_8325001C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r11.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stb r9,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r9.u8);
	// bl 0x8327a2d0
	ctx.lr = 0x83250064;
	sub_8327A2D0(ctx, base);
	// lwz r8,276(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8325008c
	if (cr6.eq) goto loc_8325008C;
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r10,r11,23,9,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7FFFFF;
	// not r9,r10
	ctx.r9.u64 = ~ctx.r10.u64;
	// clrlwi r5,r9,31
	ctx.r5.u64 = ctx.r9.u32 & 0x1;
	// bl 0x83212128
	ctx.lr = 0x8325008C;
	sub_83212128(ctx, base);
loc_8325008C:
	// bl 0x83200508
	ctx.lr = 0x83250090;
	sub_83200508(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8325009C:
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r5,r11,-22544
	ctx.r5.s64 = ctx.r11.s64 + -22544;
	// addi r4,r10,14508
	ctx.r4.s64 = ctx.r10.s64 + 14508;
	// addi r3,r9,14436
	ctx.r3.s64 = ctx.r9.s64 + 14436;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x83208330
	ctx.lr = 0x832500BC;
	sub_83208330(ctx, base);
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832500C8"))) PPC_WEAK_FUNC(sub_832500C8);
PPC_FUNC_IMPL(__imp__sub_832500C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x832500D0;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83250100
	if (!cr6.eq) goto loc_83250100;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32203
	ctx.r10.s64 = -2110455808;
	// addi r4,r11,14616
	ctx.r4.s64 = ctx.r11.s64 + 14616;
	// addi r3,r10,-22544
	ctx.r3.s64 = ctx.r10.s64 + -22544;
	// bl 0x8320d918
	ctx.lr = 0x832500F4;
	sub_8320D918(ctx, base);
	// li r3,-3
	ctx.r3.s64 = -3;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83250100:
	// rlwinm r11,r3,0,1,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x78000000;
	// lis r10,8192
	ctx.r10.s64 = 536870912;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x83250120
	if (!cr6.eq) goto loc_83250120;
	// bl 0x83234f88
	ctx.lr = 0x83250114;
	sub_83234F88(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8325012c
	if (!cr6.eq) goto loc_8325012C;
loc_83250120:
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_8325012C:
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r31,r11,24688
	ctx.r31.s64 = ctx.r11.s64 + 24688;
	// lwz r27,44(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r26,48(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r25,20(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x831ffe38
	ctx.lr = 0x83250148;
	sub_831FFE38(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8324ee80
	ctx.lr = 0x83250158;
	sub_8324EE80(ctx, base);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm r10,r11,3,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8325017c
	if (cr6.eq) goto loc_8325017C;
	// bl 0x8324ff90
	ctx.lr = 0x83250178;
	sub_8324FF90(ctx, base);
	// b 0x83250180
	goto loc_83250180;
loc_8325017C:
	// bl 0x8324fe88
	ctx.lr = 0x83250180;
	sub_8324FE88(ctx, base);
loc_83250180:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, xer);
	// beq cr6,0x832501a8
	if (cr6.eq) goto loc_832501A8;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// beq cr6,0x832501a8
	if (cr6.eq) goto loc_832501A8;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x832501a8
	if (cr6.eq) goto loc_832501A8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83209d68
	ctx.lr = 0x832501A8;
	sub_83209D68(ctx, base);
loc_832501A8:
	// lhz r11,38(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 38);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,38(r31)
	PPC_STORE_U16(ctx.r31.u32 + 38, ctx.r11.u16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832501c8
	if (!cr6.eq) goto loc_832501C8;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r11,38(r31)
	PPC_STORE_U16(ctx.r31.u32 + 38, ctx.r11.u16);
loc_832501C8:
	// stw r25,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r25.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r27,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r27.u32);
	// bl 0x831ffdd8
	ctx.lr = 0x832501D8;
	sub_831FFDD8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832501E4"))) PPC_WEAK_FUNC(sub_832501E4);
PPC_FUNC_IMPL(__imp__sub_832501E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832501E8"))) PPC_WEAK_FUNC(sub_832501E8);
PPC_FUNC_IMPL(__imp__sub_832501E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832501F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x83250280
	if (!cr6.eq) goto loc_83250280;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83250238
	if (!cr6.eq) goto loc_83250238;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// addi r4,r11,10496
	ctx.r4.s64 = ctx.r11.s64 + 10496;
	// bl 0x8320d918
	ctx.lr = 0x83250228;
	sub_8320D918(ctx, base);
	// li r29,-3
	ctx.r29.s64 = -3;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83250238:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83206de0
	ctx.lr = 0x83250248;
	sub_83206DE0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8325028c
	if (cr6.eq) goto loc_8325028C;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,14508
	ctx.r4.s64 = ctx.r11.s64 + 14508;
	// addi r3,r10,14436
	ctx.r3.s64 = ctx.r10.s64 + 14436;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x83208330
	ctx.lr = 0x83250270;
	sub_83208330(ctx, base);
	// li r29,-4
	ctx.r29.s64 = -4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_83250280:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831fe658
	ctx.lr = 0x8325028C;
	sub_831FE658(ctx, base);
loc_8325028C:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,81
	ctx.r5.s64 = 81;
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8322cc08
	ctx.lr = 0x832502A0;
	sub_8322CC08(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x832502c4
	if (cr6.eq) goto loc_832502C4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831fe510
	ctx.lr = 0x832502B4;
	sub_831FE510(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x832502c4
	if (!cr6.eq) goto loc_832502C4;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_832502C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8321b8f0
	ctx.lr = 0x832502CC;
	sub_8321B8F0(ctx, base);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r9,r10,16
	ctx.r9.u64 = ctx.r10.u64 | 16;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// stw r11,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r11.u32);
	// stw r9,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x832502fc
	if (cr6.eq) goto loc_832502FC;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x83260568
	ctx.lr = 0x832502F8;
	sub_83260568(ctx, base);
	// b 0x83250300
	goto loc_83250300;
loc_832502FC:
	// bl 0x83260468
	ctx.lr = 0x83250300;
	sub_83260468(ctx, base);
loc_83250300:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,57
	ctx.r4.s64 = 57;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8322c128
	ctx.lr = 0x83250310;
	sub_8322C128(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x83209aa8
	ctx.lr = 0x83250318;
	sub_83209AA8(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x83293ec8
	ctx.lr = 0x83250328;
	sub_83293EC8(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,81
	ctx.r5.s64 = 81;
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8322c600
	ctx.lr = 0x8325033C;
	sub_8322C600(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83250348"))) PPC_WEAK_FUNC(sub_83250348);
PPC_FUNC_IMPL(__imp__sub_83250348) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83250350;
	__savegprlr_25(ctx, base);
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r3,0,1,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x78000000;
	// lis r10,8192
	ctx.r10.s64 = 536870912;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x83250384
	if (!cr6.eq) goto loc_83250384;
	// bl 0x83234f88
	ctx.lr = 0x83250378;
	sub_83234F88(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x83250398
	if (!cr6.eq) goto loc_83250398;
loc_83250384:
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_83250398:
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r31,r11,24688
	ctx.r31.s64 = ctx.r11.s64 + 24688;
	// lwz r27,44(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r26,48(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r25,20(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x831ffe38
	ctx.lr = 0x832503B4;
	sub_831FFE38(ctx, base);
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83250478
	if (cr6.eq) goto loc_83250478;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832196d0
	ctx.lr = 0x832503D0;
	sub_832196D0(ctx, base);
	// lfs f12,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f12,f11
	cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// beq cr6,0x832503e8
	if (cr6.eq) goto loc_832503E8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_832503E8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83250420
	if (!cr6.eq) goto loc_83250420;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8325040c
	if (cr6.eq) goto loc_8325040C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8325040C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83250420
	if (!cr6.eq) goto loc_83250420;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// b 0x8325047c
	goto loc_8325047C;
loc_83250420:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fsubs f31,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsubs f30,f11,f12
	ctx.f30.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// bl 0x8324e838
	ctx.lr = 0x83250430;
	sub_8324E838(ctx, base);
	// stfd f30,56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.f30.u64);
	// stfd f31,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.f31.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 56);
	// ld r9,64(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 64);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r7,-32221
	ctx.r7.s64 = -2111635456;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// lis r10,-32203
	ctx.r10.s64 = -2110455808;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r11,r11,14436
	ctx.r11.s64 = ctx.r11.s64 + 14436;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r7,14624
	ctx.r4.s64 = ctx.r7.s64 + 14624;
	// addi r5,r10,-22544
	ctx.r5.s64 = ctx.r10.s64 + -22544;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// bl 0x83208330
	ctx.lr = 0x83250470;
	sub_83208330(ctx, base);
	// li r30,-18
	ctx.r30.s64 = -18;
	// b 0x83250498
	goto loc_83250498;
loc_83250478:
	// li r6,0
	ctx.r6.s64 = 0;
loc_8325047C:
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r7,r11,-22544
	ctx.r7.s64 = ctx.r11.s64 + -22544;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832501e8
	ctx.lr = 0x83250494;
	sub_832501E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_83250498:
	// lhz r11,38(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 38);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,38(r31)
	PPC_STORE_U16(ctx.r31.u32 + 38, ctx.r11.u16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832504b8
	if (!cr6.eq) goto loc_832504B8;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r11,38(r31)
	PPC_STORE_U16(ctx.r31.u32 + 38, ctx.r11.u16);
loc_832504B8:
	// stw r25,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r25.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r27,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r27.u32);
	// bl 0x831ffdd8
	ctx.lr = 0x832504C8;
	sub_831FFDD8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832504DC"))) PPC_WEAK_FUNC(sub_832504DC);
PPC_FUNC_IMPL(__imp__sub_832504DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832504E0"))) PPC_WEAK_FUNC(sub_832504E0);
PPC_FUNC_IMPL(__imp__sub_832504E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832504E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x83213dd8
	ctx.lr = 0x832504F8;
	sub_83213DD8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bge cr6,0x83250508
	if (!cr6.lt) goto loc_83250508;
	// li r31,1
	ctx.r31.s64 = 1;
loc_83250508:
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, xer);
	// blt cr6,0x8325053c
	if (cr6.lt) goto loc_8325053C;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r11,14696
	ctx.r4.s64 = ctx.r11.s64 + 14696;
	// addi r3,r10,14436
	ctx.r3.s64 = ctx.r10.s64 + 14436;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x832085e8
	ctx.lr = 0x83250530;
	sub_832085E8(ctx, base);
	// addi r3,r31,-1
	ctx.r3.s64 = ctx.r31.s64 + -1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_8325053C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83250548"))) PPC_WEAK_FUNC(sub_83250548);
PPC_FUNC_IMPL(__imp__sub_83250548) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x83250550;
	__savegprlr_24(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// bne cr6,0x83250594
	if (!cr6.eq) goto loc_83250594;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// addi r4,r11,14768
	ctx.r4.s64 = ctx.r11.s64 + 14768;
	// bl 0x8320d918
	ctx.lr = 0x83250588;
	sub_8320D918(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_83250594:
	// lbz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 0);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832505dc
	if (cr6.eq) goto loc_832505DC;
loc_832505A4:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(ctx.r11.s32, 48, xer);
	// blt cr6,0x832505bc
	if (cr6.lt) goto loc_832505BC;
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(ctx.r11.s32, 57, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x832505c0
	if (!cr6.gt) goto loc_832505C0;
loc_832505BC:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_832505C0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83250614
	if (cr6.eq) goto loc_83250614;
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x832505a4
	if (!cr6.eq) goto loc_832505A4;
loc_832505DC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_832505E0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8325061c
	if (cr6.eq) goto loc_8325061C;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,14740
	ctx.r4.s64 = ctx.r11.s64 + 14740;
	// addi r3,r10,14436
	ctx.r3.s64 = ctx.r10.s64 + 14436;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x832085e8
	ctx.lr = 0x83250608;
	sub_832085E8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_83250614:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x832505e0
	goto loc_832505E0;
loc_8325061C:
	// lwz r7,56(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// addi r30,r11,26672
	ctx.r30.s64 = ctx.r11.s64 + 26672;
	// beq cr6,0x83250664
	if (cr6.eq) goto loc_83250664;
	// lwz r11,32(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 32);
	// rlwinm r10,r11,0,5,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83250664
	if (cr6.eq) goto loc_83250664;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,68(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 68);
	// bl 0x83237ad0
	ctx.lr = 0x83250654;
	sub_83237AD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83250664
	if (!cr6.eq) goto loc_83250664;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
loc_83250664:
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8324ee80
	ctx.lr = 0x83250674;
	sub_8324EE80(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83213da0
	ctx.lr = 0x83250680;
	sub_83213DA0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,268(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// bl 0x83259608
	ctx.lr = 0x8325069C;
	sub_83259608(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-4
	cr6.compare<int32_t>(ctx.r3.s32, -4, xer);
	// bne cr6,0x832506c8
	if (!cr6.eq) goto loc_832506C8;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r4,r11,14724
	ctx.r4.s64 = ctx.r11.s64 + 14724;
	// addi r3,r10,14436
	ctx.r3.s64 = ctx.r10.s64 + 14436;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x832085e8
	ctx.lr = 0x832506C4;
	sub_832085E8(ctx, base);
	// b 0x83250784
	goto loc_83250784;
loc_832506C8:
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83250700
	if (cr6.eq) goto loc_83250700;
	// bl 0x832182d0
	ctx.lr = 0x832506E0;
	sub_832182D0(ctx, base);
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832506f8
	if (cr6.eq) goto loc_832506F8;
	// bl 0x83219c48
	ctx.lr = 0x832506F4;
	sub_83219C48(ctx, base);
	// b 0x83250784
	goto loc_83250784;
loc_832506F8:
	// bl 0x83219d48
	ctx.lr = 0x832506FC;
	sub_83219D48(ctx, base);
	// b 0x83250784
	goto loc_83250784;
loc_83250700:
	// bl 0x832181c8
	ctx.lr = 0x83250704;
	sub_832181C8(ctx, base);
	// clrlwi r29,r26,24
	ctx.r29.u64 = ctx.r26.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x8325071c
	if (cr6.eq) goto loc_8325071C;
	// bl 0x83219c00
	ctx.lr = 0x83250718;
	sub_83219C00(ctx, base);
	// b 0x83250720
	goto loc_83250720;
loc_8325071C:
	// bl 0x83219cf0
	ctx.lr = 0x83250720;
	sub_83219CF0(ctx, base);
loc_83250720:
	// lwz r31,56(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83250784
	if (cr6.eq) goto loc_83250784;
loc_8325072C:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83250778
	if (cr6.eq) goto loc_83250778;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x83250778
	if (!cr6.eq) goto loc_83250778;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,68(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// bl 0x83237ad0
	ctx.lr = 0x83250754;
	sub_83237AD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83250778
	if (!cr6.eq) goto loc_83250778;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x83250774
	if (cr6.eq) goto loc_83250774;
	// bl 0x83219c00
	ctx.lr = 0x83250770;
	sub_83219C00(ctx, base);
	// b 0x83250778
	goto loc_83250778;
loc_83250774:
	// bl 0x83219cf0
	ctx.lr = 0x83250778;
	sub_83219CF0(ctx, base);
loc_83250778:
	// lwz r31,64(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x8325072c
	if (!cr6.eq) goto loc_8325072C;
loc_83250784:
	// cmplw cr6,r28,r25
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r25.u32, xer);
	// beq cr6,0x832507a8
	if (cr6.eq) goto loc_832507A8;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// beq cr6,0x832507a8
	if (cr6.eq) goto loc_832507A8;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x832507a8
	if (cr6.eq) goto loc_832507A8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83209d68
	ctx.lr = 0x832507A8;
	sub_83209D68(ctx, base);
loc_832507A8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832507B4"))) PPC_WEAK_FUNC(sub_832507B4);
PPC_FUNC_IMPL(__imp__sub_832507B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832507B8"))) PPC_WEAK_FUNC(sub_832507B8);
PPC_FUNC_IMPL(__imp__sub_832507B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x832507C0;
	__savegprlr_26(ctx, base);
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r3,0,1,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x78000000;
	// stw r4,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r4.u32);
	// lis r10,8192
	ctx.r10.s64 = 536870912;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x83250800
	if (!cr6.eq) goto loc_83250800;
	// bl 0x83234f88
	ctx.lr = 0x832507F4;
	sub_83234F88(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8325080c
	if (!cr6.eq) goto loc_8325080C;
loc_83250800:
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_8325080C:
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r11,24688
	ctx.r30.s64 = ctx.r11.s64 + 24688;
	// lwz r28,44(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// lwz r27,48(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r26,20(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x831ffe38
	ctx.lr = 0x8325082C;
	sub_831FFE38(ctx, base);
	// lwz r7,172(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// addi r11,r7,-3840
	ctx.r11.s64 = ctx.r7.s64 + -3840;
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(ctx.r11.u32, 15, xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// bgt cr6,0x83250a70
	if (cr6.gt) goto loc_83250A70;
	// lis r12,-31963
	ctx.r12.s64 = -2094727168;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,2144
	ctx.r12.s64 = ctx.r12.s64 + 2144;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_83250904;
	case 1:
		goto loc_832508CC;
	case 2:
		goto loc_832508D8;
	case 3:
		goto loc_8325094C;
	case 4:
		goto loc_832508A0;
	case 5:
		goto loc_83250920;
	case 6:
		goto loc_83250A40;
	case 7:
		goto loc_83250A4C;
	case 8:
		goto loc_832509B0;
	case 9:
		goto loc_83250A14;
	case 10:
		goto loc_83250978;
	case 11:
		goto loc_832509E8;
	case 12:
		goto loc_832509DC;
	case 13:
		goto loc_832509A4;
	case 14:
		goto loc_83250A58;
	case 15:
		goto loc_83250A64;
	default:
		return;
	}
	// lwz r25,2308(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 2308);
	// lwz r25,2252(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 2252);
	// lwz r25,2264(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 2264);
	// lwz r25,2380(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 2380);
	// lwz r25,2208(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 2208);
	// lwz r25,2336(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 2336);
	// lwz r25,2624(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 2624);
	// lwz r25,2636(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 2636);
	// lwz r25,2480(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 2480);
	// lwz r25,2580(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 2580);
	// lwz r25,2424(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 2424);
	// lwz r25,2536(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 2536);
	// lwz r25,2524(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 2524);
	// lwz r25,2468(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 2468);
	// lwz r25,2648(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 2648);
	// lwz r25,2660(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 2660);
loc_832508A0:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r9,r11,7
	ctx.r9.s64 = ctx.r11.s64 + 7;
	// addi r5,r10,14952
	ctx.r5.s64 = ctx.r10.s64 + 14952;
	// rlwinm r11,r9,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x832504e0
	ctx.lr = 0x832508C0;
	sub_832504E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832181c8
	ctx.lr = 0x832508CC;
	sub_832181C8(ctx, base);
loc_832508CC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83219c00
	ctx.lr = 0x832508D4;
	sub_83219C00(ctx, base);
	// b 0x8325090c
	goto loc_8325090C;
loc_832508D8:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r9,r11,7
	ctx.r9.s64 = ctx.r11.s64 + 7;
	// addi r5,r10,14932
	ctx.r5.s64 = ctx.r10.s64 + 14932;
	// rlwinm r11,r9,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x832504e0
	ctx.lr = 0x832508F8;
	sub_832504E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832181c8
	ctx.lr = 0x83250904;
	sub_832181C8(ctx, base);
loc_83250904:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83219cf0
	ctx.lr = 0x8325090C;
	sub_83219CF0(ctx, base);
loc_8325090C:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83250a9c
	if (!cr6.eq) goto loc_83250A9C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x83250ac0
	goto loc_83250AC0;
loc_83250920:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r9,r11,7
	ctx.r9.s64 = ctx.r11.s64 + 7;
	// addi r7,r10,14908
	ctx.r7.s64 = ctx.r10.s64 + 14908;
	// rlwinm r11,r9,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x83250548
	ctx.lr = 0x83250948;
	sub_83250548(ctx, base);
	// b 0x8325090c
	goto loc_8325090C;
loc_8325094C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r9,r11,7
	ctx.r9.s64 = ctx.r11.s64 + 7;
	// addi r7,r10,14884
	ctx.r7.s64 = ctx.r10.s64 + 14884;
	// rlwinm r11,r9,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x83250548
	ctx.lr = 0x83250974;
	sub_83250548(ctx, base);
	// b 0x8325090c
	goto loc_8325090C;
loc_83250978:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r9,r11,7
	ctx.r9.s64 = ctx.r11.s64 + 7;
	// addi r5,r10,14860
	ctx.r5.s64 = ctx.r10.s64 + 14860;
	// rlwinm r11,r9,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x832504e0
	ctx.lr = 0x83250998;
	sub_832504E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832182d0
	ctx.lr = 0x832509A4;
	sub_832182D0(ctx, base);
loc_832509A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83219c48
	ctx.lr = 0x832509AC;
	sub_83219C48(ctx, base);
	// b 0x8325090c
	goto loc_8325090C;
loc_832509B0:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r9,r11,7
	ctx.r9.s64 = ctx.r11.s64 + 7;
	// addi r5,r10,14836
	ctx.r5.s64 = ctx.r10.s64 + 14836;
	// rlwinm r11,r9,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x832504e0
	ctx.lr = 0x832509D0;
	sub_832504E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832182d0
	ctx.lr = 0x832509DC;
	sub_832182D0(ctx, base);
loc_832509DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83219d48
	ctx.lr = 0x832509E4;
	sub_83219D48(ctx, base);
	// b 0x8325090c
	goto loc_8325090C;
loc_832509E8:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r9,r11,7
	ctx.r9.s64 = ctx.r11.s64 + 7;
	// addi r7,r10,14808
	ctx.r7.s64 = ctx.r10.s64 + 14808;
	// rlwinm r11,r9,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x83250548
	ctx.lr = 0x83250A10;
	sub_83250548(ctx, base);
	// b 0x8325090c
	goto loc_8325090C;
loc_83250A14:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r9,r11,7
	ctx.r9.s64 = ctx.r11.s64 + 7;
	// addi r7,r10,14780
	ctx.r7.s64 = ctx.r10.s64 + 14780;
	// rlwinm r11,r9,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x83250548
	ctx.lr = 0x83250A3C;
	sub_83250548(ctx, base);
	// b 0x8325090c
	goto loc_8325090C;
loc_83250A40:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8321b360
	ctx.lr = 0x83250A48;
	sub_8321B360(ctx, base);
	// b 0x8325090c
	goto loc_8325090C;
loc_83250A4C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8321b660
	ctx.lr = 0x83250A54;
	sub_8321B660(ctx, base);
	// b 0x8325090c
	goto loc_8325090C;
loc_83250A58:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8321b4b8
	ctx.lr = 0x83250A60;
	sub_8321B4B8(ctx, base);
	// b 0x8325090c
	goto loc_8325090C;
loc_83250A64:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8321b788
	ctx.lr = 0x83250A6C;
	sub_8321B788(ctx, base);
	// b 0x8325090c
	goto loc_8325090C;
loc_83250A70:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32203
	ctx.r10.s64 = -2110455808;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// lis r8,-32221
	ctx.r8.s64 = -2111635456;
	// addi r6,r11,14776
	ctx.r6.s64 = ctx.r11.s64 + 14776;
	// addi r5,r10,-22544
	ctx.r5.s64 = ctx.r10.s64 + -22544;
	// addi r4,r9,14472
	ctx.r4.s64 = ctx.r9.s64 + 14472;
	// addi r3,r8,14436
	ctx.r3.s64 = ctx.r8.s64 + 14436;
	// bl 0x83208330
	ctx.lr = 0x83250A94;
	sub_83208330(ctx, base);
	// li r29,-2
	ctx.r29.s64 = -2;
	// b 0x83250ad0
	goto loc_83250AD0;
loc_83250A9C:
	// addic. r3,r11,120
	xer.ca = ctx.r11.u32 > 4294967175;
	ctx.r3.s64 = ctx.r11.s64 + 120;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x83250aac
	if (!cr0.eq) goto loc_83250AAC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x83250ac0
	goto loc_83250AC0;
loc_83250AAC:
	// lhz r11,10(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// neg r9,r10
	ctx.r9.s64 = -ctx.r10.s64;
	// andc r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// rlwinm r11,r8,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
loc_83250AC0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83250ad0
	if (cr6.eq) goto loc_83250AD0;
	// bl 0x8324ccf0
	ctx.lr = 0x83250AD0;
	sub_8324CCF0(ctx, base);
loc_83250AD0:
	// bl 0x832027f8
	ctx.lr = 0x83250AD4;
	sub_832027F8(ctx, base);
	// bl 0x83202880
	ctx.lr = 0x83250AD8;
	sub_83202880(ctx, base);
	// lhz r11,38(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 38);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,38(r30)
	PPC_STORE_U16(ctx.r30.u32 + 38, ctx.r11.u16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83250af8
	if (!cr6.eq) goto loc_83250AF8;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r11,38(r30)
	PPC_STORE_U16(ctx.r30.u32 + 38, ctx.r11.u16);
loc_83250AF8:
	// stw r26,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r26.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r28,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r28.u32);
	// bl 0x831ffdd8
	ctx.lr = 0x83250B08;
	sub_831FFDD8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83250B14"))) PPC_WEAK_FUNC(sub_83250B14);
PPC_FUNC_IMPL(__imp__sub_83250B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83250B18"))) PPC_WEAK_FUNC(sub_83250B18);
PPC_FUNC_IMPL(__imp__sub_83250B18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83250B20;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// li r10,12288
	ctx.r10.s64 = 12288;
	// lhz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// srw r7,r10,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// xori r11,r8,92
	ctx.r11.u64 = ctx.r8.u64 ^ 92;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// srawi r5,r6,31
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 31;
	// and r4,r5,r7
	ctx.r4.u64 = ctx.r5.u64 & ctx.r7.u64;
	// clrlwi r3,r4,31
	ctx.r3.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83250b74
	if (cr6.eq) goto loc_83250B74;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83250B74:
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832133d0
	ctx.lr = 0x83250B80;
	sub_832133D0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83250b98
	if (cr6.eq) goto loc_83250B98;
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83250B98:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83225c80
	ctx.lr = 0x83250BA0;
	sub_83225C80(ctx, base);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r9,r11,14436
	ctx.r9.s64 = ctx.r11.s64 + 14436;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r10,14972
	ctx.r4.s64 = ctx.r10.s64 + 14972;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x832085e8
	ctx.lr = 0x83250BC0;
	sub_832085E8(ctx, base);
	// li r3,-18
	ctx.r3.s64 = -18;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83250BCC"))) PPC_WEAK_FUNC(sub_83250BCC);
PPC_FUNC_IMPL(__imp__sub_83250BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83250BD0"))) PPC_WEAK_FUNC(sub_83250BD0);
PPC_FUNC_IMPL(__imp__sub_83250BD0) {
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
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// rlwinm r10,r11,3,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83250c4c
	if (cr6.eq) goto loc_83250C4C;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x83213fc0
	ctx.lr = 0x83250C14;
	sub_83213FC0(ctx, base);
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,-22544
	ctx.r5.s64 = ctx.r11.s64 + -22544;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83250b18
	ctx.lr = 0x83250C28;
	sub_83250B18(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83250c40
	if (!cr6.eq) goto loc_83250C40;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8320ad60
	ctx.lr = 0x83250C3C;
	sub_8320AD60(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
loc_83250C40:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83222030
	ctx.lr = 0x83250C48;
	sub_83222030(ctx, base);
	// b 0x83250c58
	goto loc_83250C58;
loc_83250C4C:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r11,r11,-16384
	ctx.r11.s64 = ctx.r11.s64 + -16384;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_83250C58:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_83250C74"))) PPC_WEAK_FUNC(sub_83250C74);
PPC_FUNC_IMPL(__imp__sub_83250C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83250C78"))) PPC_WEAK_FUNC(sub_83250C78);
PPC_FUNC_IMPL(__imp__sub_83250C78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83250C80;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r10,r11,3,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	// li r4,-1
	ctx.r4.s64 = -1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83250cb4
	if (cr6.eq) goto loc_83250CB4;
	// rlwinm r11,r11,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83250cb4
	if (cr6.eq) goto loc_83250CB4;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x83250cc8
	goto loc_83250CC8;
loc_83250CB4:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83250cc8
	if (cr6.eq) goto loc_83250CC8;
	// bl 0x831fbd90
	ctx.lr = 0x83250CC4;
	sub_831FBD90(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_83250CC8:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x83250cec
	if (cr6.lt) goto loc_83250CEC;
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// bl 0x83211db8
	ctx.lr = 0x83250CDC;
	sub_83211DB8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83250cec
	if (cr6.eq) goto loc_83250CEC;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// li r30,1
	ctx.r30.s64 = 1;
loc_83250CEC:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83250d38
	if (!cr6.eq) goto loc_83250D38;
	// lhz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83250d10
	if (!cr6.eq) goto loc_83250D10;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// addi r6,r11,-29012
	ctx.r6.s64 = ctx.r11.s64 + -29012;
	// b 0x83250d1c
	goto loc_83250D1C;
loc_83250D10:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8324e838
	ctx.lr = 0x83250D18;
	sub_8324E838(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_83250D1C:
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r5,r11,-22544
	ctx.r5.s64 = ctx.r11.s64 + -22544;
	// addi r4,r10,15040
	ctx.r4.s64 = ctx.r10.s64 + 15040;
	// addi r3,r9,14436
	ctx.r3.s64 = ctx.r9.s64 + 14436;
	// bl 0x832085e8
	ctx.lr = 0x83250D38;
	sub_832085E8(ctx, base);
loc_83250D38:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83250D44"))) PPC_WEAK_FUNC(sub_83250D44);
PPC_FUNC_IMPL(__imp__sub_83250D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83250D48"))) PPC_WEAK_FUNC(sub_83250D48);
PPC_FUNC_IMPL(__imp__sub_83250D48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83250D50;
	__savegprlr_25(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x8324ee80
	ctx.lr = 0x83250D74;
	sub_8324EE80(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// sth r31,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r31.u16);
	// stb r31,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r31.u8);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// bl 0x832277e8
	ctx.lr = 0x83250D9C;
	sub_832277E8(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// sth r11,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r11.u16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83250db4
	if (!cr6.eq) goto loc_83250DB4;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r11,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r11.u16);
loc_83250DB4:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// rlwinm r9,r11,3,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x83250de4
	if (cr6.eq) goto loc_83250DE4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8321fa30
	ctx.lr = 0x83250DE0;
	sub_8321FA30(ctx, base);
	// b 0x83250df8
	goto loc_83250DF8;
loc_83250DE4:
	// lhz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// bl 0x83216ad0
	ctx.lr = 0x83250DF8;
	sub_83216AD0(ctx, base);
loc_83250DF8:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83250e80
	if (!cr6.eq) goto loc_83250E80;
	// clrlwi r11,r27,30
	ctx.r11.u64 = ctx.r27.u32 & 0x3;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83250e34
	if (!cr6.eq) goto loc_83250E34;
	// clrlwi r11,r28,30
	ctx.r11.u64 = ctx.r28.u32 & 0x3;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x83250e34
	if (!cr6.eq) goto loc_83250E34;
	// li r6,10
	ctx.r6.s64 = 10;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83222be8
	ctx.lr = 0x83250E30;
	sub_83222BE8(ctx, base);
	// b 0x83250ea0
	goto loc_83250EA0;
loc_83250E34:
	// addi r11,r28,3
	ctx.r11.s64 = ctx.r28.s64 + 3;
	// rlwinm r25,r11,0,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83209aa8
	ctx.lr = 0x83250E44;
	sub_83209AA8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,10
	ctx.r6.s64 = 10;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83222be8
	ctx.lr = 0x83250E5C;
	sub_83222BE8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83296be0
	ctx.lr = 0x83250E6C;
	sub_83296BE0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83250ea0
	if (cr6.eq) goto loc_83250EA0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83209d68
	ctx.lr = 0x83250E7C;
	sub_83209D68(ctx, base);
	// b 0x83250ea0
	goto loc_83250EA0;
loc_83250E80:
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r5,r11,-22544
	ctx.r5.s64 = ctx.r11.s64 + -22544;
	// addi r4,r10,15072
	ctx.r4.s64 = ctx.r10.s64 + 15072;
	// addi r3,r9,14436
	ctx.r3.s64 = ctx.r9.s64 + 14436;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// bl 0x83208330
	ctx.lr = 0x83250EA0;
	sub_83208330(ctx, base);
loc_83250EA0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83222030
	ctx.lr = 0x83250EA8;
	sub_83222030(ctx, base);
	// cmplw cr6,r29,r26
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, xer);
	// beq cr6,0x83250ecc
	if (cr6.eq) goto loc_83250ECC;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// beq cr6,0x83250ecc
	if (cr6.eq) goto loc_83250ECC;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83250ecc
	if (cr6.eq) goto loc_83250ECC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83209d68
	ctx.lr = 0x83250ECC;
	sub_83209D68(ctx, base);
loc_83250ECC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83250ED8"))) PPC_WEAK_FUNC(sub_83250ED8);
PPC_FUNC_IMPL(__imp__sub_83250ED8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// rlwinm r9,r11,0,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83250ef8
	if (!cr6.eq) goto loc_83250EF8;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_83250EF8:
	// lfs f0,144(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f13,148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83250F10"))) PPC_WEAK_FUNC(sub_83250F10);
PPC_FUNC_IMPL(__imp__sub_83250F10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83250f2c
	if (!cr6.eq) goto loc_83250F2C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_83250F2C:
	// lfs f0,256(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	ctx.f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83250F3C"))) PPC_WEAK_FUNC(sub_83250F3C);
PPC_FUNC_IMPL(__imp__sub_83250F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83250F40"))) PPC_WEAK_FUNC(sub_83250F40);
PPC_FUNC_IMPL(__imp__sub_83250F40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83250f5c
	if (!cr6.eq) goto loc_83250F5C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_83250F5C:
	// b 0x83250bd0
	sub_83250BD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83250F60"))) PPC_WEAK_FUNC(sub_83250F60);
PPC_FUNC_IMPL(__imp__sub_83250F60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// rlwinm r9,r11,0,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83250f80
	if (!cr6.eq) goto loc_83250F80;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_83250F80:
	// lfs f0,240(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 240);
	ctx.f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f13,244(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 244);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83250F98"))) PPC_WEAK_FUNC(sub_83250F98);
PPC_FUNC_IMPL(__imp__sub_83250F98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// rlwinm r9,r11,0,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83250fb8
	if (!cr6.eq) goto loc_83250FB8;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_83250FB8:
	// lfs f0,176(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f13,180(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f12,184(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 184);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f11,188(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 188);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83250FE0"))) PPC_WEAK_FUNC(sub_83250FE0);
PPC_FUNC_IMPL(__imp__sub_83250FE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// rlwinm r9,r11,0,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83251000
	if (!cr6.eq) goto loc_83251000;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_83251000:
	// lfs f0,192(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f13,196(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f12,200(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 200);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f11,204(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 204);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83251028"))) PPC_WEAK_FUNC(sub_83251028);
PPC_FUNC_IMPL(__imp__sub_83251028) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83251044
	if (!cr6.eq) goto loc_83251044;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_83251044:
	// lbz r10,79(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 79);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83251054"))) PPC_WEAK_FUNC(sub_83251054);
PPC_FUNC_IMPL(__imp__sub_83251054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83251058"))) PPC_WEAK_FUNC(sub_83251058);
PPC_FUNC_IMPL(__imp__sub_83251058) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83251074
	if (!cr6.eq) goto loc_83251074;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_83251074:
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r3,0
	ctx.r3.s64 = 0;
	// not r9,r10
	ctx.r9.u64 = ~ctx.r10.u64;
	// rlwinm r8,r9,15,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 15) & 0x1;
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325108C"))) PPC_WEAK_FUNC(sub_8325108C);
PPC_FUNC_IMPL(__imp__sub_8325108C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83251090"))) PPC_WEAK_FUNC(sub_83251090);
PPC_FUNC_IMPL(__imp__sub_83251090) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x832510c4
	if (!cr6.eq) goto loc_832510C4;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83251124
	goto loc_83251124;
loc_832510C4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x832183c8
	ctx.lr = 0x832510D0;
	sub_832183C8(ctx, base);
	// lbz r11,173(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 173);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83251110
	if (cr6.eq) goto loc_83251110;
	// lfs f0,160(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f13,164(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x831fcbb0
	ctx.lr = 0x832510FC;
	sub_831FCBB0(ctx, base);
	// lfs f12,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,4(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// b 0x83251120
	goto loc_83251120;
loc_83251110:
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
loc_83251120:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83251124:
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

__attribute__((alias("__imp__sub_8325113C"))) PPC_WEAK_FUNC(sub_8325113C);
PPC_FUNC_IMPL(__imp__sub_8325113C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83251140"))) PPC_WEAK_FUNC(sub_83251140);
PPC_FUNC_IMPL(__imp__sub_83251140) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// subfic r8,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r9.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r7,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83251160"))) PPC_WEAK_FUNC(sub_83251160);
PPC_FUNC_IMPL(__imp__sub_83251160) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x8325119c
	if (!cr6.eq) goto loc_8325119C;
	// li r3,-1
	ctx.r3.s64 = -1;
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
loc_8325119C:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832149a8
	ctx.lr = 0x832511A8;
	sub_832149A8(ctx, base);
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x832511d4
	if (cr6.eq) goto loc_832511D4;
	// lwz r4,344(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 344);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x832511d4
	if (cr6.eq) goto loc_832511D4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831fbe80
	ctx.lr = 0x832511D4;
	sub_831FBE80(ctx, base);
loc_832511D4:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f11,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
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

__attribute__((alias("__imp__sub_8325120C"))) PPC_WEAK_FUNC(sub_8325120C);
PPC_FUNC_IMPL(__imp__sub_8325120C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83251210"))) PPC_WEAK_FUNC(sub_83251210);
PPC_FUNC_IMPL(__imp__sub_83251210) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r30,4(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83251244
	if (!cr6.eq) goto loc_83251244;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x832512a8
	goto loc_832512A8;
loc_83251244:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831fbe28
	ctx.lr = 0x8325124C;
	sub_831FBE28(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832149a8
	ctx.lr = 0x83251258;
	sub_832149A8(ctx, base);
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83251284
	if (cr6.eq) goto loc_83251284;
	// lwz r4,344(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 344);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83251284
	if (cr6.eq) goto loc_83251284;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831fbe80
	ctx.lr = 0x83251284;
	sub_831FBE80(ctx, base);
loc_83251284:
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// lfs f11,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
loc_832512A8:
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

__attribute__((alias("__imp__sub_832512C0"))) PPC_WEAK_FUNC(sub_832512C0);
PPC_FUNC_IMPL(__imp__sub_832512C0) {
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
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x832512fc
	if (!cr6.eq) goto loc_832512FC;
	// li r3,-1
	ctx.r3.s64 = -1;
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
loc_832512FC:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832183c8
	ctx.lr = 0x83251308;
	sub_832183C8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831fd100
	ctx.lr = 0x83251318;
	sub_831FD100(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_83251330"))) PPC_WEAK_FUNC(sub_83251330);
PPC_FUNC_IMPL(__imp__sub_83251330) {
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
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x8325136c
	if (!cr6.eq) goto loc_8325136C;
	// li r3,-1
	ctx.r3.s64 = -1;
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
loc_8325136C:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832183c8
	ctx.lr = 0x83251378;
	sub_832183C8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831fd100
	ctx.lr = 0x83251388;
	sub_831FD100(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_832513A0"))) PPC_WEAK_FUNC(sub_832513A0);
PPC_FUNC_IMPL(__imp__sub_832513A0) {
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
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x832513d4
	if (!cr6.eq) goto loc_832513D4;
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
loc_832513D4:
	// addi r3,r3,96
	ctx.r3.s64 = ctx.r3.s64 + 96;
	// bl 0x831fd8e8
	ctx.lr = 0x832513DC;
	sub_831FD8E8(ctx, base);
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

__attribute__((alias("__imp__sub_832513F0"))) PPC_WEAK_FUNC(sub_832513F0);
PPC_FUNC_IMPL(__imp__sub_832513F0) {
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
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83251424
	if (!cr6.eq) goto loc_83251424;
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
loc_83251424:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x832183c8
	ctx.lr = 0x83251430;
	sub_832183C8(ctx, base);
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

__attribute__((alias("__imp__sub_83251444"))) PPC_WEAK_FUNC(sub_83251444);
PPC_FUNC_IMPL(__imp__sub_83251444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83251448"))) PPC_WEAK_FUNC(sub_83251448);
PPC_FUNC_IMPL(__imp__sub_83251448) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83251464
	if (!cr6.eq) goto loc_83251464;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_83251464:
	// lhz r10,86(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 86);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83251474"))) PPC_WEAK_FUNC(sub_83251474);
PPC_FUNC_IMPL(__imp__sub_83251474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83251478"))) PPC_WEAK_FUNC(sub_83251478);
PPC_FUNC_IMPL(__imp__sub_83251478) {
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
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x832514b4
	if (!cr6.eq) goto loc_832514B4;
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
loc_832514B4:
	// bl 0x83213dd8
	ctx.lr = 0x832514B8;
	sub_83213DD8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_832514D4"))) PPC_WEAK_FUNC(sub_832514D4);
PPC_FUNC_IMPL(__imp__sub_832514D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832514D8"))) PPC_WEAK_FUNC(sub_832514D8);
PPC_FUNC_IMPL(__imp__sub_832514D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x832514E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r10,r11,7
	ctx.r10.s64 = ctx.r11.s64 + 7;
	// rlwinm r9,r10,0,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r31,-4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// lwz r28,4(r9)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// beq cr6,0x832515bc
	if (cr6.eq) goto loc_832515BC;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x832515bc
	if (cr6.eq) goto loc_832515BC;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,32
	ctx.r5.s64 = 32;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8324ee80
	ctx.lr = 0x8325152C;
	sub_8324EE80(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83213da0
	ctx.lr = 0x83251538;
	sub_83213DA0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,268(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 268);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// bl 0x83259608
	ctx.lr = 0x83251554;
	sub_83259608(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8325156c
	if (!cr6.eq) goto loc_8325156C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// b 0x8325158c
	goto loc_8325158C;
loc_8325156C:
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r5,r11,-22544
	ctx.r5.s64 = ctx.r11.s64 + -22544;
	// addi r4,r10,14724
	ctx.r4.s64 = ctx.r10.s64 + 14724;
	// addi r3,r9,14436
	ctx.r3.s64 = ctx.r9.s64 + 14436;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x832085e8
	ctx.lr = 0x8325158C;
	sub_832085E8(ctx, base);
loc_8325158C:
	// cmplw cr6,r29,r31
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, xer);
	// beq cr6,0x832515b0
	if (cr6.eq) goto loc_832515B0;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// beq cr6,0x832515b0
	if (cr6.eq) goto loc_832515B0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x832515b0
	if (cr6.eq) goto loc_832515B0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83209d68
	ctx.lr = 0x832515B0;
	sub_83209D68(ctx, base);
loc_832515B0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832515BC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832515C8"))) PPC_WEAK_FUNC(sub_832515C8);
PPC_FUNC_IMPL(__imp__sub_832515C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832515e4
	if (!cr6.eq) goto loc_832515E4;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_832515E4:
	// lhz r10,228(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 228);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832515F4"))) PPC_WEAK_FUNC(sub_832515F4);
PPC_FUNC_IMPL(__imp__sub_832515F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832515F8"))) PPC_WEAK_FUNC(sub_832515F8);
PPC_FUNC_IMPL(__imp__sub_832515F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83251614
	if (!cr6.eq) goto loc_83251614;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_83251614:
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r9,r11,24688
	ctx.r9.s64 = ctx.r11.s64 + 24688;
	// lwz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8325163c
	if (!cr6.eq) goto loc_8325163C;
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,-26260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// blr 
	return;
loc_8325163C:
	// lfs f0,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325164C"))) PPC_WEAK_FUNC(sub_8325164C);
PPC_FUNC_IMPL(__imp__sub_8325164C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83251650"))) PPC_WEAK_FUNC(sub_83251650);
PPC_FUNC_IMPL(__imp__sub_83251650) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83251658;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r29,4(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x83251680
	if (!cr6.eq) goto loc_83251680;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83251680:
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// lhz r10,238(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 238);
	// addi r9,r11,24688
	ctx.r9.s64 = ctx.r11.s64 + 24688;
	// lhz r30,38(r9)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r9.u32 + 38);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, xer);
	// beq cr6,0x832516ac
	if (cr6.eq) goto loc_832516AC;
	// addi r4,r31,208
	ctx.r4.s64 = ctx.r31.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8321d9a0
	ctx.lr = 0x832516A8;
	sub_8321D9A0(ctx, base);
	// sth r30,238(r31)
	PPC_STORE_U16(ctx.r31.u32 + 238, ctx.r30.u16);
loc_832516AC:
	// lfs f0,212(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	ctx.f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f13,208(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f12,0(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832516C8"))) PPC_WEAK_FUNC(sub_832516C8);
PPC_FUNC_IMPL(__imp__sub_832516C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832516D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r29,4(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x832516f8
	if (!cr6.eq) goto loc_832516F8;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_832516F8:
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// lhz r10,238(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 238);
	// addi r9,r11,24688
	ctx.r9.s64 = ctx.r11.s64 + 24688;
	// lhz r30,38(r9)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r9.u32 + 38);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, xer);
	// beq cr6,0x83251724
	if (cr6.eq) goto loc_83251724;
	// addi r4,r31,208
	ctx.r4.s64 = ctx.r31.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8321d9a0
	ctx.lr = 0x83251720;
	sub_8321D9A0(ctx, base);
	// sth r30,238(r31)
	PPC_STORE_U16(ctx.r31.u32 + 238, ctx.r30.u16);
loc_83251724:
	// lfs f0,220(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	ctx.f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f13,216(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f12,0(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83251740"))) PPC_WEAK_FUNC(sub_83251740);
PPC_FUNC_IMPL(__imp__sub_83251740) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83251748;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r30,4(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83251770
	if (!cr6.eq) goto loc_83251770;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83251770:
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// lhz r10,238(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 238);
	// addi r9,r11,24688
	ctx.r9.s64 = ctx.r11.s64 + 24688;
	// lhz r29,38(r9)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r9.u32 + 38);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// cmplw cr6,r10,r29
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, xer);
	// beq cr6,0x8325179c
	if (cr6.eq) goto loc_8325179C;
	// addi r4,r31,208
	ctx.r4.s64 = ctx.r31.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8321d9a0
	ctx.lr = 0x83251798;
	sub_8321D9A0(ctx, base);
	// sth r29,238(r31)
	PPC_STORE_U16(ctx.r31.u32 + 238, ctx.r29.u16);
loc_8325179C:
	// lfs f0,208(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f13,212(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f12,216(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// lfs f11,220(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832517C8"))) PPC_WEAK_FUNC(sub_832517C8);
PPC_FUNC_IMPL(__imp__sub_832517C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// rlwinm r9,r11,0,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832517e8
	if (!cr6.eq) goto loc_832517E8;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_832517E8:
	// lhz r9,234(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 234);
	// li r3,0
	ctx.r3.s64 = 0;
	// lhz r8,232(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 232);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83251800"))) PPC_WEAK_FUNC(sub_83251800);
PPC_FUNC_IMPL(__imp__sub_83251800) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8325181c
	if (!cr6.eq) goto loc_8325181C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_8325181C:
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r3,0
	ctx.r3.s64 = 0;
	// not r9,r10
	ctx.r9.u64 = ~ctx.r10.u64;
	// rlwinm r8,r9,5,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0x1;
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83251834"))) PPC_WEAK_FUNC(sub_83251834);
PPC_FUNC_IMPL(__imp__sub_83251834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83251838"))) PPC_WEAK_FUNC(sub_83251838);
PPC_FUNC_IMPL(__imp__sub_83251838) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83251854
	if (!cr6.eq) goto loc_83251854;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_83251854:
	// lwz r11,280(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83251868
	if (!cr6.eq) goto loc_83251868;
	// li r3,-4
	ctx.r3.s64 = -4;
	// blr 
	return;
loc_83251868:
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83251878"))) PPC_WEAK_FUNC(sub_83251878);
PPC_FUNC_IMPL(__imp__sub_83251878) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// rlwinm r9,r11,0,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83251898
	if (!cr6.eq) goto loc_83251898;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_83251898:
	// lfs f0,160(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f13,164(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832518B0"))) PPC_WEAK_FUNC(sub_832518B0);
PPC_FUNC_IMPL(__imp__sub_832518B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832518cc
	if (!cr6.eq) goto loc_832518CC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_832518CC:
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r3,0
	ctx.r3.s64 = 0;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832518E0"))) PPC_WEAK_FUNC(sub_832518E0);
PPC_FUNC_IMPL(__imp__sub_832518E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832518fc
	if (!cr6.eq) goto loc_832518FC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_832518FC:
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r9,r10,31,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83251910"))) PPC_WEAK_FUNC(sub_83251910);
PPC_FUNC_IMPL(__imp__sub_83251910) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8325192c
	if (!cr6.eq) goto loc_8325192C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_8325192C:
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r3,0
	ctx.r3.s64 = 0;
	// not r9,r10
	ctx.r9.u64 = ~ctx.r10.u64;
	// rlwinm r8,r9,14,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 14) & 0x1;
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83251944"))) PPC_WEAK_FUNC(sub_83251944);
PPC_FUNC_IMPL(__imp__sub_83251944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83251948"))) PPC_WEAK_FUNC(sub_83251948);
PPC_FUNC_IMPL(__imp__sub_83251948) {
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
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83251984
	if (!cr6.eq) goto loc_83251984;
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
loc_83251984:
	// bl 0x83213da0
	ctx.lr = 0x83251988;
	sub_83213DA0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8325199c
	if (cr6.eq) goto loc_8325199C;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lhz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
loc_8325199C:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_832519B8"))) PPC_WEAK_FUNC(sub_832519B8);
PPC_FUNC_IMPL(__imp__sub_832519B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x832519C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r10,r11,7
	ctx.r10.s64 = ctx.r11.s64 + 7;
	// rlwinm r10,r10,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r31,-4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// addi r9,r11,7
	ctx.r9.s64 = ctx.r11.s64 + 7;
	// lwz r29,4(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r8,r9,0,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r28,4(r8)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x83213da0
	ctx.lr = 0x83251A04;
	sub_83213DA0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r5,268(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 268);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// bl 0x83259a60
	ctx.lr = 0x83251A1C;
	sub_83259A60(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83251a54
	if (!cr6.eq) goto loc_83251A54;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x83251a38
	if (cr6.eq) goto loc_83251A38;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_83251A38:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x83251a78
	if (cr6.eq) goto loc_83251A78;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83251A54:
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r5,r11,-22544
	ctx.r5.s64 = ctx.r11.s64 + -22544;
	// addi r4,r10,14996
	ctx.r4.s64 = ctx.r10.s64 + 14996;
	// addi r3,r9,14436
	ctx.r3.s64 = ctx.r9.s64 + 14436;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x832085e8
	ctx.lr = 0x83251A74;
	sub_832085E8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_83251A78:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83251A80"))) PPC_WEAK_FUNC(sub_83251A80);
PPC_FUNC_IMPL(__imp__sub_83251A80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83251a9c
	if (!cr6.eq) goto loc_83251A9C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_83251A9C:
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r9,r10,24,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x1;
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83251AB0"))) PPC_WEAK_FUNC(sub_83251AB0);
PPC_FUNC_IMPL(__imp__sub_83251AB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83251AB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r29,4(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x83251adc
	if (!cr6.eq) goto loc_83251ADC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83251ADC:
	// lwz r6,36(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r11,r6,0,20,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xE00;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83251b34
	if (cr6.eq) goto loc_83251B34;
	// lwz r7,24(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83251b34
	if (cr6.eq) goto loc_83251B34;
	// dcbt r0,r7
	// li r10,0
	ctx.r10.s64 = 0;
	// lhz r11,14(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x83251b34
	if (!cr6.gt) goto loc_83251B34;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83251B14:
	// add r9,r11,r7
	ctx.r9.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lbz r5,5(r9)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// cmplwi cr6,r5,65
	cr6.compare<uint32_t>(ctx.r5.u32, 65, xer);
	// beq cr6,0x83251b40
	if (cr6.eq) goto loc_83251B40;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// blt cr6,0x83251b14
	if (cr6.lt) goto loc_83251B14;
loc_83251B34:
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83251B40:
	// lhz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 16);
	// li r10,12288
	ctx.r10.s64 = 12288;
	// srw r8,r10,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83251b60
	if (cr6.eq) goto loc_83251B60;
	// lwz r31,20(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// b 0x83251b64
	goto loc_83251B64;
loc_83251B60:
	// li r31,0
	ctx.r31.s64 = 0;
loc_83251B64:
	// rlwinm r11,r6,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x200;
	// li r30,8
	ctx.r30.s64 = 8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83251bec
	if (!cr6.eq) goto loc_83251BEC;
	// rlwinm r11,r6,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x400;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83251ba8
	if (cr6.eq) goto loc_83251BA8;
	// lwz r4,52(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83251b90
	if (!cr6.eq) goto loc_83251B90;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_83251B90:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832148c8
	ctx.lr = 0x83251B98;
	sub_832148C8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83210350
	ctx.lr = 0x83251BA4;
	sub_83210350(ctx, base);
	// b 0x83251bd0
	goto loc_83251BD0;
loc_83251BA8:
	// rlwinm r11,r6,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83251bec
	if (cr6.eq) goto loc_83251BEC;
	// addi r10,r1,72
	ctx.r10.s64 = ctx.r1.s64 + 72;
	// mtctr r30
	ctr.u64 = ctx.r30.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// addi r11,r3,88
	ctx.r11.s64 = ctx.r3.s64 + 88;
loc_83251BC4:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x83251bc4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83251BC4;
loc_83251BD0:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8325acb0
	ctx.lr = 0x83251BD8;
	sub_8325ACB0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8325b058
	ctx.lr = 0x83251BE8;
	sub_8325B058(ctx, base);
	// addi r31,r1,144
	ctx.r31.s64 = ctx.r1.s64 + 144;
loc_83251BEC:
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r11,4
	ctx.r11.s64 = 4;
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f13,0,r29
	PPC_STORE_U32(ctx.r29.u32, ctx.f13.u32);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfiwx f11,r29,r11
	PPC_STORE_U32(ctx.r29.u32 + ctx.r11.u32, ctx.f11.u32);
	// li r10,12
	ctx.r10.s64 = 12;
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f9,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// fctiwz f7,f8
	ctx.f7.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfiwx f7,r29,r30
	PPC_STORE_U32(ctx.r29.u32 + ctx.r30.u32, ctx.f7.u32);
	// lfs f6,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// fctiwz f3,f4
	ctx.f3.s64 = (ctx.f4.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f4.f64));
	// stfiwx f3,r29,r10
	PPC_STORE_U32(ctx.r29.u32 + ctx.r10.u32, ctx.f3.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83251C40"))) PPC_WEAK_FUNC(sub_83251C40);
PPC_FUNC_IMPL(__imp__sub_83251C40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83251C48;
	__savegprlr_29(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r29,4(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// bne cr6,0x83251c70
	if (!cr6.eq) goto loc_83251C70;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83251C70:
	// lwz r6,36(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// rlwinm r11,r6,0,20,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xE00;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83251cc8
	if (cr6.eq) goto loc_83251CC8;
	// lwz r7,24(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83251cc8
	if (cr6.eq) goto loc_83251CC8;
	// dcbt r0,r7
	// li r10,0
	ctx.r10.s64 = 0;
	// lhz r11,14(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 14);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x83251cc8
	if (!cr6.gt) goto loc_83251CC8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83251CA8:
	// add r9,r11,r7
	ctx.r9.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lbz r5,5(r9)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// cmplwi cr6,r5,65
	cr6.compare<uint32_t>(ctx.r5.u32, 65, xer);
	// beq cr6,0x83251cd4
	if (cr6.eq) goto loc_83251CD4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// blt cr6,0x83251ca8
	if (cr6.lt) goto loc_83251CA8;
loc_83251CC8:
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83251CD4:
	// lhz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 16);
	// li r10,12288
	ctx.r10.s64 = 12288;
	// srw r8,r10,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83251cf4
	if (cr6.eq) goto loc_83251CF4;
	// lwz r31,20(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// b 0x83251cf8
	goto loc_83251CF8;
loc_83251CF4:
	// li r31,0
	ctx.r31.s64 = 0;
loc_83251CF8:
	// rlwinm r11,r6,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83251d20
	if (cr6.eq) goto loc_83251D20;
	// lwz r4,52(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83251d14
	if (!cr6.eq) goto loc_83251D14;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_83251D14:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x832148c8
	ctx.lr = 0x83251D1C;
	sub_832148C8(ctx, base);
	// b 0x83251d88
	goto loc_83251D88;
loc_83251D20:
	// rlwinm r11,r6,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x400;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83251da4
	if (!cr6.eq) goto loc_83251DA4;
	// rlwinm r11,r6,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83251da4
	if (cr6.eq) goto loc_83251DA4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x832148c8
	ctx.lr = 0x83251D44;
	sub_832148C8(ctx, base);
	// lbz r11,173(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 173);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83251d88
	if (cr6.eq) goto loc_83251D88;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lfs f0,160(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r10,r11,5696
	ctx.r10.s64 = ctx.r11.s64 + 5696;
	// lfs f13,164(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,168(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f0,132(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x832102f8
	ctx.lr = 0x83251D88;
	sub_832102F8(ctx, base);
loc_83251D88:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8325acb0
	ctx.lr = 0x83251D90;
	sub_8325ACB0(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8325b058
	ctx.lr = 0x83251DA0;
	sub_8325B058(ctx, base);
	// addi r31,r1,160
	ctx.r31.s64 = ctx.r1.s64 + 160;
loc_83251DA4:
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r11,4
	ctx.r11.s64 = 4;
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f13,0,r29
	PPC_STORE_U32(ctx.r29.u32, ctx.f13.u32);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfiwx f11,r29,r11
	PPC_STORE_U32(ctx.r29.u32 + ctx.r11.u32, ctx.f11.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// li r9,12
	ctx.r9.s64 = 12;
	// lfs f9,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// fctiwz f7,f8
	ctx.f7.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfiwx f7,r29,r10
	PPC_STORE_U32(ctx.r29.u32 + ctx.r10.u32, ctx.f7.u32);
	// lfs f6,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f5,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// fctiwz f3,f4
	ctx.f3.s64 = (ctx.f4.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f4.f64));
	// stfiwx f3,r29,r9
	PPC_STORE_U32(ctx.r29.u32 + ctx.r9.u32, ctx.f3.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83251DFC"))) PPC_WEAK_FUNC(sub_83251DFC);
PPC_FUNC_IMPL(__imp__sub_83251DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83251E00"))) PPC_WEAK_FUNC(sub_83251E00);
PPC_FUNC_IMPL(__imp__sub_83251E00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83251E08;
	__savegprlr_28(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r28,4(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x83251e30
	if (!cr6.eq) goto loc_83251E30;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83251E30:
	// lwz r6,36(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// rlwinm r11,r6,0,20,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xE00;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83251e88
	if (cr6.eq) goto loc_83251E88;
	// lwz r7,24(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83251e88
	if (cr6.eq) goto loc_83251E88;
	// dcbt r0,r7
	// li r10,0
	ctx.r10.s64 = 0;
	// lhz r11,14(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 14);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x83251e88
	if (!cr6.gt) goto loc_83251E88;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83251E68:
	// add r9,r11,r7
	ctx.r9.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lbz r5,5(r9)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// cmplwi cr6,r5,65
	cr6.compare<uint32_t>(ctx.r5.u32, 65, xer);
	// beq cr6,0x83251e94
	if (cr6.eq) goto loc_83251E94;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// blt cr6,0x83251e68
	if (cr6.lt) goto loc_83251E68;
loc_83251E88:
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83251E94:
	// lhz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 16);
	// li r10,12288
	ctx.r10.s64 = 12288;
	// srw r8,r10,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83251eb4
	if (cr6.eq) goto loc_83251EB4;
	// lwz r31,20(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// b 0x83251eb8
	goto loc_83251EB8;
loc_83251EB4:
	// li r31,0
	ctx.r31.s64 = 0;
loc_83251EB8:
	// rlwinm r11,r6,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x200;
	// li r29,8
	ctx.r29.s64 = 8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83251ee8
	if (cr6.eq) goto loc_83251EE8;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// addi r11,r30,88
	ctx.r11.s64 = ctx.r30.s64 + 88;
loc_83251ED8:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x83251ed8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_83251ED8;
	// b 0x83251f44
	goto loc_83251F44;
loc_83251EE8:
	// rlwinm r11,r6,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x400;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83251f6c
	if (cr6.eq) goto loc_83251F6C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x832148c8
	ctx.lr = 0x83251F00;
	sub_832148C8(ctx, base);
	// lbz r11,173(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 173);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83251f44
	if (cr6.eq) goto loc_83251F44;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lfs f0,160(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r10,r11,5696
	ctx.r10.s64 = ctx.r11.s64 + 5696;
	// lfs f13,164(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,168(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f0,132(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x832102f8
	ctx.lr = 0x83251F44;
	sub_832102F8(ctx, base);
loc_83251F44:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83210350
	ctx.lr = 0x83251F50;
	sub_83210350(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8325acb0
	ctx.lr = 0x83251F58;
	sub_8325ACB0(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8325b058
	ctx.lr = 0x83251F68;
	sub_8325B058(ctx, base);
	// addi r31,r1,160
	ctx.r31.s64 = ctx.r1.s64 + 160;
loc_83251F6C:
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r11,4
	ctx.r11.s64 = 4;
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f13,0,r28
	PPC_STORE_U32(ctx.r28.u32, ctx.f13.u32);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfiwx f11,r28,r11
	PPC_STORE_U32(ctx.r28.u32 + ctx.r11.u32, ctx.f11.u32);
	// li r10,12
	ctx.r10.s64 = 12;
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f9,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// fctiwz f7,f8
	ctx.f7.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfiwx f7,r28,r29
	PPC_STORE_U32(ctx.r28.u32 + ctx.r29.u32, ctx.f7.u32);
	// lfs f6,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// fctiwz f3,f4
	ctx.f3.s64 = (ctx.f4.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f4.f64));
	// stfiwx f3,r28,r10
	PPC_STORE_U32(ctx.r28.u32 + ctx.r10.u32, ctx.f3.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83251FC0"))) PPC_WEAK_FUNC(sub_83251FC0);
PPC_FUNC_IMPL(__imp__sub_83251FC0) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83251ffc
	if (!cr6.eq) goto loc_83251FFC;
	// li r3,-1
	ctx.r3.s64 = -1;
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
loc_83251FFC:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832196d0
	ctx.lr = 0x8325200C;
	sub_832196D0(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f11,12(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
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

__attribute__((alias("__imp__sub_83252044"))) PPC_WEAK_FUNC(sub_83252044);
PPC_FUNC_IMPL(__imp__sub_83252044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83252048"))) PPC_WEAK_FUNC(sub_83252048);
PPC_FUNC_IMPL(__imp__sub_83252048) {
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
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83252084
	if (!cr6.eq) goto loc_83252084;
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
loc_83252084:
	// bl 0x8320ab38
	ctx.lr = 0x83252088;
	sub_8320AB38(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_832520A4"))) PPC_WEAK_FUNC(sub_832520A4);
PPC_FUNC_IMPL(__imp__sub_832520A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832520A8"))) PPC_WEAK_FUNC(sub_832520A8);
PPC_FUNC_IMPL(__imp__sub_832520A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x832520c4
	if (!cr6.eq) goto loc_832520C4;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_832520C4:
	// b 0x83250c78
	sub_83250C78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832520C8"))) PPC_WEAK_FUNC(sub_832520C8);
PPC_FUNC_IMPL(__imp__sub_832520C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r10,r11,7
	ctx.r10.s64 = ctx.r11.s64 + 7;
	// rlwinm r10,r10,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r4,-4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// addi r9,r11,7
	ctx.r9.s64 = ctx.r11.s64 + 7;
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r8,r9,0,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// beq cr6,0x83252108
	if (cr6.eq) goto loc_83252108;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x83252108
	if (cr6.eq) goto loc_83252108;
	// b 0x83250d48
	sub_83250D48(ctx, base);
	return;
loc_83252108:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83252110"))) PPC_WEAK_FUNC(sub_83252110);
PPC_FUNC_IMPL(__imp__sub_83252110) {
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
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r9,r11,7
	ctx.r9.s64 = ctx.r11.s64 + 7;
	// rlwinm r8,r9,0,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r31,-4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// lwz r30,4(r8)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bne cr6,0x83252154
	if (!cr6.eq) goto loc_83252154;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x832521b4
	goto loc_832521B4;
loc_83252154:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// beq cr6,0x832521b4
	if (cr6.eq) goto loc_832521B4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// stb r11,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r11.u8);
	// bl 0x83217740
	ctx.lr = 0x83252180;
	sub_83217740(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x832521a8
	if (!cr6.eq) goto loc_832521A8;
	// lhz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// bl 0x832277f8
	ctx.lr = 0x83252194;
	sub_832277F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832521a8
	if (!cr6.eq) goto loc_832521A8;
	// bl 0x83227908
	ctx.lr = 0x832521A4;
	sub_83227908(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_832521A8:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83296be0
	ctx.lr = 0x832521B4;
	sub_83296BE0(ctx, base);
loc_832521B4:
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

__attribute__((alias("__imp__sub_832521CC"))) PPC_WEAK_FUNC(sub_832521CC);
PPC_FUNC_IMPL(__imp__sub_832521CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832521D0"))) PPC_WEAK_FUNC(sub_832521D0);
PPC_FUNC_IMPL(__imp__sub_832521D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x832521D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r10,r11,7
	ctx.r10.s64 = ctx.r11.s64 + 7;
	// rlwinm r9,r10,0,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r31,-4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// lwz r28,4(r9)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// beq cr6,0x832522ac
	if (cr6.eq) goto loc_832522AC;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x832522ac
	if (cr6.eq) goto loc_832522AC;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,32
	ctx.r5.s64 = 32;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8324ee80
	ctx.lr = 0x83252224;
	sub_8324EE80(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83213da0
	ctx.lr = 0x83252230;
	sub_83213DA0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,268(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 268);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x83259988
	ctx.lr = 0x83252244;
	sub_83259988(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8325225c
	if (!cr6.eq) goto loc_8325225C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// b 0x8325227c
	goto loc_8325227C;
loc_8325225C:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r5,r11,15012
	ctx.r5.s64 = ctx.r11.s64 + 15012;
	// addi r4,r10,14724
	ctx.r4.s64 = ctx.r10.s64 + 14724;
	// addi r3,r9,14436
	ctx.r3.s64 = ctx.r9.s64 + 14436;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x832085e8
	ctx.lr = 0x8325227C;
	sub_832085E8(ctx, base);
loc_8325227C:
	// cmplw cr6,r29,r31
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, xer);
	// beq cr6,0x832522a0
	if (cr6.eq) goto loc_832522A0;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// beq cr6,0x832522a0
	if (cr6.eq) goto loc_832522A0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x832522a0
	if (cr6.eq) goto loc_832522A0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83209d68
	ctx.lr = 0x832522A0;
	sub_83209D68(ctx, base);
loc_832522A0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832522AC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832522B8"))) PPC_WEAK_FUNC(sub_832522B8);
PPC_FUNC_IMPL(__imp__sub_832522B8) {
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
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x832522f4
	if (!cr6.eq) goto loc_832522F4;
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
loc_832522F4:
	// bl 0x83213da0
	ctx.lr = 0x832522F8;
	sub_83213DA0(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83252334
	if (cr6.eq) goto loc_83252334;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lhz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// rlwinm r8,r11,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x83252334
	if (cr6.eq) goto loc_83252334;
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// rlwinm r9,r11,31,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// addi r11,r8,3
	ctx.r11.s64 = ctx.r8.s64 + 3;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r8,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
loc_83252334:
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_83252350"))) PPC_WEAK_FUNC(sub_83252350);
PPC_FUNC_IMPL(__imp__sub_83252350) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83252358;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r10,r11,7
	ctx.r10.s64 = ctx.r11.s64 + 7;
	// rlwinm r10,r10,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r31,-4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// addi r9,r11,7
	ctx.r9.s64 = ctx.r11.s64 + 7;
	// lwz r29,4(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r8,r9,0,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r28,4(r8)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x83213da0
	ctx.lr = 0x8325239C;
	sub_83213DA0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r5,268(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 268);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// bl 0x83259788
	ctx.lr = 0x832523B4;
	sub_83259788(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x832523ec
	if (!cr6.eq) goto loc_832523EC;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x832523d0
	if (cr6.eq) goto loc_832523D0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_832523D0:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x83252410
	if (cr6.eq) goto loc_83252410;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832523EC:
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r5,r11,-22544
	ctx.r5.s64 = ctx.r11.s64 + -22544;
	// addi r4,r10,14996
	ctx.r4.s64 = ctx.r10.s64 + 14996;
	// addi r3,r9,14436
	ctx.r3.s64 = ctx.r9.s64 + 14436;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x832085e8
	ctx.lr = 0x8325240C;
	sub_832085E8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_83252410:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83252418"))) PPC_WEAK_FUNC(sub_83252418);
PPC_FUNC_IMPL(__imp__sub_83252418) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x8325244c
	if (!cr6.eq) goto loc_8325244C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x832524c0
	goto loc_832524C0;
loc_8325244C:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832196d0
	ctx.lr = 0x8325245C;
	sub_832196D0(ctx, base);
	// lbz r11,173(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 173);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83252484
	if (cr6.eq) goto loc_83252484;
	// lfs f0,164(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f13,160(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fneg f2,f0
	ctx.f2.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fneg f1,f13
	ctx.f1.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// bl 0x8325aba8
	ctx.lr = 0x83252484;
	sub_8325ABA8(ctx, base);
loc_83252484:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8325acb0
	ctx.lr = 0x8325248C;
	sub_8325ACB0(ctx, base);
	// addi r5,r30,96
	ctx.r5.s64 = ctx.r30.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8325b058
	ctx.lr = 0x8325249C;
	sub_8325B058(ctx, base);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f11,12(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
loc_832524C0:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832524D8"))) PPC_WEAK_FUNC(sub_832524D8);
PPC_FUNC_IMPL(__imp__sub_832524D8) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x83252514
	if (!cr6.eq) goto loc_83252514;
	// li r3,-1
	ctx.r3.s64 = -1;
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
loc_83252514:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832196d0
	ctx.lr = 0x83252524;
	sub_832196D0(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f11,12(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
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

__attribute__((alias("__imp__sub_8325255C"))) PPC_WEAK_FUNC(sub_8325255C);
PPC_FUNC_IMPL(__imp__sub_8325255C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83252560"))) PPC_WEAK_FUNC(sub_83252560);
PPC_FUNC_IMPL(__imp__sub_83252560) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83252568;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r28,4(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// bne cr6,0x83252590
	if (!cr6.eq) goto loc_83252590;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_83252590:
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r30,268(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// sth r29,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r29.u16);
	// stb r29,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r29.u8);
	// bl 0x83213da0
	ctx.lr = 0x832525B0;
	sub_83213DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x832525fc
	if (cr6.eq) goto loc_832525FC;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lhz r5,86(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 86);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r10,r11,3,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x832525e0
	if (cr6.eq) goto loc_832525E0;
	// bl 0x83259ce0
	ctx.lr = 0x832525DC;
	sub_83259CE0(ctx, base);
	// b 0x832525e4
	goto loc_832525E4;
loc_832525E0:
	// bl 0x83259c20
	ctx.lr = 0x832525E4;
	sub_83259C20(ctx, base);
loc_832525E4:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x832525fc
	if (!cr6.eq) goto loc_832525FC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_832525FC:
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8325260C"))) PPC_WEAK_FUNC(sub_8325260C);
PPC_FUNC_IMPL(__imp__sub_8325260C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83252610"))) PPC_WEAK_FUNC(sub_83252610);
PPC_FUNC_IMPL(__imp__sub_83252610) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8325262c
	if (!cr6.eq) goto loc_8325262C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_8325262C:
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// rlwinm r7,r9,0,6,6
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2000000;
	// addic r6,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r6.s64 = ctx.r8.s64 + -1;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// addic r9,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r9.s64 = ctx.r7.s64 + -1;
	// and r7,r4,r10
	ctx.r7.u64 = ctx.r4.u64 & ctx.r10.u64;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 & ctx.r7.u64;
	// stb r5,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r5.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83252660"))) PPC_WEAK_FUNC(sub_83252660);
PPC_FUNC_IMPL(__imp__sub_83252660) {
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
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83252694
	if (!cr6.eq) goto loc_83252694;
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
loc_83252694:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83214910
	ctx.lr = 0x832526A0;
	sub_83214910(ctx, base);
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

__attribute__((alias("__imp__sub_832526B4"))) PPC_WEAK_FUNC(sub_832526B4);
PPC_FUNC_IMPL(__imp__sub_832526B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832526B8"))) PPC_WEAK_FUNC(sub_832526B8);
PPC_FUNC_IMPL(__imp__sub_832526B8) {
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
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832526ec
	if (!cr6.eq) goto loc_832526EC;
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
loc_832526EC:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x832148c8
	ctx.lr = 0x832526F8;
	sub_832148C8(ctx, base);
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

__attribute__((alias("__imp__sub_8325270C"))) PPC_WEAK_FUNC(sub_8325270C);
PPC_FUNC_IMPL(__imp__sub_8325270C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83252710"))) PPC_WEAK_FUNC(sub_83252710);
PPC_FUNC_IMPL(__imp__sub_83252710) {
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
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83252744
	if (!cr6.eq) goto loc_83252744;
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
loc_83252744:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83217818
	ctx.lr = 0x83252750;
	sub_83217818(ctx, base);
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

__attribute__((alias("__imp__sub_83252764"))) PPC_WEAK_FUNC(sub_83252764);
PPC_FUNC_IMPL(__imp__sub_83252764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83252768"))) PPC_WEAK_FUNC(sub_83252768);
PPC_FUNC_IMPL(__imp__sub_83252768) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83252784
	if (!cr6.eq) goto loc_83252784;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_83252784:
	// lbz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 36);
	// li r3,0
	ctx.r3.s64 = 0;
	// not r9,r10
	ctx.r9.u64 = ~ctx.r10.u64;
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8325279C"))) PPC_WEAK_FUNC(sub_8325279C);
PPC_FUNC_IMPL(__imp__sub_8325279C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832527A0"))) PPC_WEAK_FUNC(sub_832527A0);
PPC_FUNC_IMPL(__imp__sub_832527A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x832527A8;
	__savegprlr_27(ctx, base);
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r3,0,1,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x78000000;
	// stw r4,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r4.u32);
	// lis r10,8192
	ctx.r10.s64 = 536870912;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x832527e8
	if (!cr6.eq) goto loc_832527E8;
	// bl 0x83234f88
	ctx.lr = 0x832527DC;
	sub_83234F88(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x832527f4
	if (!cr6.eq) goto loc_832527F4;
loc_832527E8:
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_832527F4:
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r31,r11,24688
	ctx.r31.s64 = ctx.r11.s64 + 24688;
	// lwz r29,44(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r28,48(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r27,20(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x831ffe38
	ctx.lr = 0x83252810;
	sub_831FFE38(ctx, base);
	// lwz r7,172(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmplwi cr6,r7,4096
	cr6.compare<uint32_t>(ctx.r7.u32, 4096, xer);
	// blt cr6,0x8325285c
	if (cr6.lt) goto loc_8325285C;
	// cmplwi cr6,r7,4150
	cr6.compare<uint32_t>(ctx.r7.u32, 4150, xer);
	// bge cr6,0x8325285c
	if (!cr6.lt) goto loc_8325285C;
	// addi r11,r7,-4096
	ctx.r11.s64 = ctx.r7.s64 + -4096;
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,8408
	ctx.r8.s64 = ctx.r10.s64 + 8408;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r5,r9,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// stw r6,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x83252854;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x83252884
	goto loc_83252884;
loc_8325285C:
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32203
	ctx.r10.s64 = -2110455808;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// lis r8,-32221
	ctx.r8.s64 = -2111635456;
	// addi r6,r11,15088
	ctx.r6.s64 = ctx.r11.s64 + 15088;
	// addi r5,r10,-22544
	ctx.r5.s64 = ctx.r10.s64 + -22544;
	// addi r4,r9,14472
	ctx.r4.s64 = ctx.r9.s64 + 14472;
	// addi r3,r8,14436
	ctx.r3.s64 = ctx.r8.s64 + 14436;
	// bl 0x83208330
	ctx.lr = 0x83252880;
	sub_83208330(ctx, base);
	// li r30,-2
	ctx.r30.s64 = -2;
loc_83252884:
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r29,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r29.u32);
	// bl 0x831ffdd8
	ctx.lr = 0x83252894;
	sub_831FFDD8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832528A0"))) PPC_WEAK_FUNC(sub_832528A0);
PPC_FUNC_IMPL(__imp__sub_832528A0) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,52(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x832528dc
	if (cr6.eq) goto loc_832528DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832183c8
	ctx.lr = 0x832528C8;
	sub_832183C8(ctx, base);
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
loc_832528DC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83200b78
	ctx.lr = 0x832528E4;
	sub_83200B78(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f9.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f11,12(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f10,16(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f9,20(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
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

__attribute__((alias("__imp__sub_83252928"))) PPC_WEAK_FUNC(sub_83252928);
PPC_FUNC_IMPL(__imp__sub_83252928) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32222
	ctx.r11.s64 = -2111700992;
	// lfs f13,240(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,244(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 244);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f0,25236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25236);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fmuls f8,f12,f12
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f7,f9,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f8.f64));
	// fneg f6,f7
	ctx.f6.u64 = ctx.f7.u64 ^ 0x8000000000000000;
	// fsel f5,f7,f7,f6
	ctx.f5.f64 = ctx.f7.f64 >= 0.0 ? ctx.f7.f64 : ctx.f6.f64;
	// fcmpu cr6,f5,f0
	cr6.compare(ctx.f5.f64, ctx.f0.f64);
	// blt cr6,0x83252968
	if (cr6.lt) goto loc_83252968;
	// li r11,0
	ctx.r11.s64 = 0;
loc_83252968:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83252980
	if (!cr6.eq) goto loc_83252980;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// ori r10,r11,8
	ctx.r10.u64 = ctx.r11.u64 | 8;
	// stw r10,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
loc_83252980:
	// lfs f13,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f12,256(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fneg f10,f11
	ctx.f10.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fsel f9,f11,f11,f10
	ctx.f9.f64 = ctx.f11.f64 >= 0.0 ? ctx.f11.f64 : ctx.f10.f64;
	// fcmpu cr6,f9,f0
	cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// blt cr6,0x832529a4
	if (cr6.lt) goto loc_832529A4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_832529A4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x832529bc
	if (!cr6.eq) goto loc_832529BC;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// ori r10,r11,16
	ctx.r10.u64 = ctx.r11.u64 | 16;
	// stw r10,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
loc_832529BC:
	// lfs f13,12(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f12,144(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f10,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,148(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// fmuls f7,f11,f11
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f6,f8,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f7.f64));
	// fneg f5,f6
	ctx.f5.u64 = ctx.f6.u64 ^ 0x8000000000000000;
	// fsel f4,f6,f6,f5
	ctx.f4.f64 = ctx.f6.f64 >= 0.0 ? ctx.f6.f64 : ctx.f5.f64;
	// fcmpu cr6,f4,f0
	cr6.compare(ctx.f4.f64, ctx.f0.f64);
	// blt cr6,0x832529f4
	if (cr6.lt) goto loc_832529F4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_832529F4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// ori r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 4;
	// stw r10,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83252A10"))) PPC_WEAK_FUNC(sub_83252A10);
PPC_FUNC_IMPL(__imp__sub_83252A10) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,144(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 144, temp.u32);
	// stb r11,172(r3)
	PPC_STORE_U8(ctx.r3.u32 + 172, ctx.r11.u8);
	// stfs f0,148(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 148, temp.u32);
	// stb r10,174(r3)
	PPC_STORE_U8(ctx.r3.u32 + 174, ctx.r10.u8);
	// lwz r7,32(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lbz r8,81(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 81);
	// lwz r9,36(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// ori r5,r9,4
	ctx.r5.u64 = ctx.r9.u64 | 4;
	// oris r6,r7,4
	ctx.r6.u64 = ctx.r7.u64 | 262144;
	// stw r5,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r5.u32);
	// cmplwi cr6,r8,2
	cr6.compare<uint32_t>(ctx.r8.u32, 2, xer);
	// stw r6,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r6.u32);
	// blt cr6,0x83252a64
	if (cr6.lt) goto loc_83252A64;
	// bl 0x83217670
	ctx.lr = 0x83252A64;
	sub_83217670(ctx, base);
loc_83252A64:
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,24688
	ctx.r11.s64 = ctx.r11.s64 + 24688;
	// lhz r10,38(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 38);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r10,38(r11)
	PPC_STORE_U16(ctx.r11.u32 + 38, ctx.r10.u16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83252a90
	if (!cr6.eq) goto loc_83252A90;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r10,38(r11)
	PPC_STORE_U16(ctx.r11.u32 + 38, ctx.r10.u16);
loc_83252A90:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83252AA0"))) PPC_WEAK_FUNC(sub_83252AA0);
PPC_FUNC_IMPL(__imp__sub_83252AA0) {
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
	// li r31,1
	ctx.r31.s64 = 1;
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,160(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 160, temp.u32);
	// stb r31,174(r3)
	PPC_STORE_U8(ctx.r3.u32 + 174, ctx.r31.u8);
	// stfs f0,164(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 164, temp.u32);
	// stb r31,173(r3)
	PPC_STORE_U8(ctx.r3.u32 + 173, ctx.r31.u8);
	// lbz r11,81(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 81);
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// oris r9,r10,4
	ctx.r9.u64 = ctx.r10.u64 | 262144;
	// stw r9,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r9.u32);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// blt cr6,0x83252ae8
	if (cr6.lt) goto loc_83252AE8;
	// bl 0x83217670
	ctx.lr = 0x83252AE8;
	sub_83217670(ctx, base);
loc_83252AE8:
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,24688
	ctx.r11.s64 = ctx.r11.s64 + 24688;
	// lhz r10,38(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 38);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r10,38(r11)
	PPC_STORE_U16(ctx.r11.u32 + 38, ctx.r10.u16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83252b14
	if (!cr6.eq) goto loc_83252B14;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// sth r31,38(r11)
	PPC_STORE_U16(ctx.r11.u32 + 38, ctx.r31.u16);
loc_83252B14:
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

__attribute__((alias("__imp__sub_83252B28"))) PPC_WEAK_FUNC(sub_83252B28);
PPC_FUNC_IMPL(__imp__sub_83252B28) {
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
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,240(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 240, temp.u32);
	// stfs f0,244(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 244, temp.u32);
	// bl 0x83213740
	ctx.lr = 0x83252B50;
	sub_83213740(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lbz r9,81(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 81);
	// oris r8,r11,4
	ctx.r8.u64 = ctx.r11.u64 | 262144;
	// ori r7,r10,8
	ctx.r7.u64 = ctx.r10.u64 | 8;
	// stw r8,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
	// cmplwi cr6,r9,2
	cr6.compare<uint32_t>(ctx.r9.u32, 2, xer);
	// stw r7,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r7.u32);
	// blt cr6,0x83252b7c
	if (cr6.lt) goto loc_83252B7C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83217670
	ctx.lr = 0x83252B7C;
	sub_83217670(ctx, base);
loc_83252B7C:
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,24688
	ctx.r11.s64 = ctx.r11.s64 + 24688;
	// lhz r10,38(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 38);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r10,38(r11)
	PPC_STORE_U16(ctx.r11.u32 + 38, ctx.r10.u16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83252ba8
	if (!cr6.eq) goto loc_83252BA8;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r10,38(r11)
	PPC_STORE_U16(ctx.r11.u32 + 38, ctx.r10.u16);
loc_83252BA8:
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

__attribute__((alias("__imp__sub_83252BBC"))) PPC_WEAK_FUNC(sub_83252BBC);
PPC_FUNC_IMPL(__imp__sub_83252BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83252BC0"))) PPC_WEAK_FUNC(sub_83252BC0);
PPC_FUNC_IMPL(__imp__sub_83252BC0) {
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
	// stfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// bl 0x832528a0
	ctx.lr = 0x83252BEC;
	sub_832528A0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f0,240(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,244(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,256(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,144(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,148(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	ctx.f10.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f11,124(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f10,128(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// bl 0x832183c8
	ctx.lr = 0x83252C20;
	sub_832183C8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x831fc4f0
	ctx.lr = 0x83252C34;
	sub_831FC4F0(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x831fc978
	ctx.lr = 0x83252C40;
	sub_831FC978(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831fc278
	ctx.lr = 0x83252C50;
	sub_831FC278(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x831fe158
	ctx.lr = 0x83252C58;
	sub_831FE158(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32222
	ctx.r9.s64 = -2111700992;
	// lfs f9,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f8,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f8.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f7,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f6.f64 = double(temp.f32);
	// stb r11,222(r1)
	PPC_STORE_U8(ctx.r1.u32 + 222, ctx.r11.u8);
	// lfs f0,9008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stb r11,223(r1)
	PPC_STORE_U8(ctx.r1.u32 + 223, ctx.r11.u8);
	// lfs f13,-26260(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -26260);
	ctx.f13.f64 = double(temp.f32);
	// stb r8,220(r1)
	PPC_STORE_U8(ctx.r1.u32 + 220, ctx.r8.u8);
	// lfs f5,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f5.f64 = double(temp.f32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lfs f4,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f4.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f0,172(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f13,184(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f0,188(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f0,200(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f13,204(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stfs f9,144(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f8,148(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f7,160(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f6,164(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f5,192(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f4,196(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// bl 0x83213480
	ctx.lr = 0x83252CE0;
	sub_83213480(ctx, base);
	// lwz r7,32(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lbz r6,81(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 81);
	// oris r5,r7,4
	ctx.r5.u64 = ctx.r7.u64 | 262144;
	// cmplwi cr6,r6,2
	cr6.compare<uint32_t>(ctx.r6.u32, 2, xer);
	// stw r5,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r5.u32);
	// blt cr6,0x83252d00
	if (cr6.lt) goto loc_83252D00;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83217670
	ctx.lr = 0x83252D00;
	sub_83217670(ctx, base);
loc_83252D00:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83252928
	ctx.lr = 0x83252D0C;
	sub_83252928(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83252D2C"))) PPC_WEAK_FUNC(sub_83252D2C);
PPC_FUNC_IMPL(__imp__sub_83252D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83252D30"))) PPC_WEAK_FUNC(sub_83252D30);
PPC_FUNC_IMPL(__imp__sub_83252D30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83252D38;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// rlwinm r10,r11,3,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x83252df8
	if (cr6.eq) goto loc_83252DF8;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x83213fc0
	ctx.lr = 0x83252D6C;
	sub_83213FC0(ctx, base);
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r30,r11,-22544
	ctx.r30.s64 = ctx.r11.s64 + -22544;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x83250b18
	ctx.lr = 0x83252D84;
	sub_83250B18(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x83252de4
	if (!cr6.eq) goto loc_83252DE4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320ab38
	ctx.lr = 0x83252D94;
	sub_8320AB38(ctx, base);
	// cmplw cr6,r29,r3
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, xer);
	// blt cr6,0x83252dcc
	if (cr6.lt) goto loc_83252DCC;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,15096
	ctx.r4.s64 = ctx.r11.s64 + 15096;
	// addi r3,r10,14436
	ctx.r3.s64 = ctx.r10.s64 + 14436;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x832085e8
	ctx.lr = 0x83252DB8;
	sub_832085E8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83222030
	ctx.lr = 0x83252DC0;
	sub_83222030(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83252DCC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8320b580
	ctx.lr = 0x83252DD4;
	sub_8320B580(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8320c190
	ctx.lr = 0x83252DE4;
	sub_8320C190(ctx, base);
loc_83252DE4:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x83222030
	ctx.lr = 0x83252DEC;
	sub_83222030(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83252DF8:
	// addi r29,r29,16384
	ctx.r29.s64 = ctx.r29.s64 + 16384;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x83214078
	ctx.lr = 0x83252E08;
	sub_83214078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x83252e54
	if (cr6.eq) goto loc_83252E54;
	// cmplw cr6,r3,r31
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, xer);
	// beq cr6,0x83252e6c
	if (cr6.eq) goto loc_83252E6C;
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x832140b0
	ctx.lr = 0x83252E24;
	sub_832140B0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832140b0
	ctx.lr = 0x83252E30;
	sub_832140B0(ctx, base);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// li r3,0
	ctx.r3.s64 = 0;
	// oris r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 262144;
	// stw r10,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r10.u32);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// oris r8,r9,4
	ctx.r8.u64 = ctx.r9.u64 | 262144;
	// stw r8,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_83252E54:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832140b0
	ctx.lr = 0x83252E60;
	sub_832140B0(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// oris r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 262144;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
loc_83252E6C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83252E78"))) PPC_WEAK_FUNC(sub_83252E78);
PPC_FUNC_IMPL(__imp__sub_83252E78) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// lfs f13,7944(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7944);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,7088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7088);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctiwz f11,f0
	ctx.f11.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// blt cr6,0x83252eec
	if (cr6.lt) goto loc_83252EEC;
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// lfs f12,11112(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11112);
	ctx.f12.f64 = double(temp.f32);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fnmsubs f0,f8,f13,f1
	ctx.f0.f64 = double(float(-(ctx.f8.f64 * ctx.f13.f64 - ctx.f1.f64)));
	// fcmpu cr6,f0,f12
	cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x83252f20
	if (!cr6.gt) goto loc_83252F20;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// b 0x83252f20
	goto loc_83252F20;
loc_83252EEC:
	// stfd f11,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lfs f12,8776(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8776);
	ctx.f12.f64 = double(temp.f32);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fnmsubs f0,f8,f13,f1
	ctx.f0.f64 = double(float(-(ctx.f8.f64 * ctx.f13.f64 - ctx.f1.f64)));
	// fcmpu cr6,f0,f12
	cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x83252f20
	if (!cr6.lt) goto loc_83252F20;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
loc_83252F20:
	// stfs f0,256(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 256, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83213740
	ctx.lr = 0x83252F2C;
	sub_83213740(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lbz r9,81(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 81);
	// oris r8,r11,4
	ctx.r8.u64 = ctx.r11.u64 | 262144;
	// ori r7,r10,16
	ctx.r7.u64 = ctx.r10.u64 | 16;
	// stw r8,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
	// cmplwi cr6,r9,2
	cr6.compare<uint32_t>(ctx.r9.u32, 2, xer);
	// stw r7,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r7.u32);
	// blt cr6,0x83252f58
	if (cr6.lt) goto loc_83252F58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83217670
	ctx.lr = 0x83252F58;
	sub_83217670(ctx, base);
loc_83252F58:
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

__attribute__((alias("__imp__sub_83252F6C"))) PPC_WEAK_FUNC(sub_83252F6C);
PPC_FUNC_IMPL(__imp__sub_83252F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83252F70"))) PPC_WEAK_FUNC(sub_83252F70);
PPC_FUNC_IMPL(__imp__sub_83252F70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x83252F78;
	__savegprlr_29(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lfs f0,240(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,244(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,256(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,144(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,148(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	ctx.f10.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x831fe158
	ctx.lr = 0x83252FB4;
	sub_831FE158(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f9,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfs f8,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// li r30,1
	ctx.r30.s64 = 1;
	// lfs f7,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f6,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,16(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// stb r30,190(r1)
	PPC_STORE_U8(ctx.r1.u32 + 190, ctx.r30.u8);
	// lfs f0,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stb r30,191(r1)
	PPC_STORE_U8(ctx.r1.u32 + 191, ctx.r30.u8);
	// lfs f13,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f13.f64 = double(temp.f32);
	// stb r9,188(r1)
	PPC_STORE_U8(ctx.r1.u32 + 188, ctx.r9.u8);
	// lfs f4,20(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	ctx.f4.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f13,152(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f13,172(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f9,112(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f8,116(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f7,128(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f6,132(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f5,160(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f4,164(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// bl 0x83213480
	ctx.lr = 0x8325303C;
	sub_83213480(ctx, base);
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lbz r7,81(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 81);
	// oris r6,r8,4
	ctx.r6.u64 = ctx.r8.u64 | 262144;
	// cmplwi cr6,r7,2
	cr6.compare<uint32_t>(ctx.r7.u32, 2, xer);
	// stw r6,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r6.u32);
	// blt cr6,0x8325305c
	if (cr6.lt) goto loc_8325305C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83217670
	ctx.lr = 0x8325305C;
	sub_83217670(ctx, base);
loc_8325305C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83252928
	ctx.lr = 0x83253068;
	sub_83252928(ctx, base);
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,24688
	ctx.r11.s64 = ctx.r11.s64 + 24688;
	// lhz r10,38(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 38);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r10,38(r11)
	PPC_STORE_U16(ctx.r11.u32 + 38, ctx.r10.u16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83253094
	if (!cr6.eq) goto loc_83253094;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// sth r30,38(r11)
	PPC_STORE_U16(ctx.r11.u32 + 38, ctx.r30.u16);
loc_83253094:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8325309C"))) PPC_WEAK_FUNC(sub_8325309C);
PPC_FUNC_IMPL(__imp__sub_8325309C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832530A0"))) PPC_WEAK_FUNC(sub_832530A0);
PPC_FUNC_IMPL(__imp__sub_832530A0) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lfs f0,240(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f13,244(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 244);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,256(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	ctx.f12.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f11,144(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,148(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	ctx.f10.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x832528a0
	ctx.lr = 0x832530EC;
	sub_832528A0(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x831fc978
	ctx.lr = 0x832530F8;
	sub_831FC978(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x831fc278
	ctx.lr = 0x83253108;
	sub_831FC278(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x831fe158
	ctx.lr = 0x83253110;
	sub_831FE158(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// lfs f9,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f9.f64 = double(temp.f32);
	// li r30,1
	ctx.r30.s64 = 1;
	// lfs f8,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f8.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f7,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f6.f64 = double(temp.f32);
	// stb r30,222(r1)
	PPC_STORE_U8(ctx.r1.u32 + 222, ctx.r30.u8);
	// lfs f0,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stb r30,223(r1)
	PPC_STORE_U8(ctx.r1.u32 + 223, ctx.r30.u8);
	// lfs f13,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f13.f64 = double(temp.f32);
	// stb r9,220(r1)
	PPC_STORE_U8(ctx.r1.u32 + 220, ctx.r9.u8);
	// lfs f5,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f5.f64 = double(temp.f32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lfs f4,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f4.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f0,172(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f13,184(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f0,188(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f0,200(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f13,204(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stfs f9,144(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f8,148(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f7,160(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f6,164(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f5,192(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f4,196(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// bl 0x83213480
	ctx.lr = 0x83253198;
	sub_83213480(ctx, base);
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lbz r7,81(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 81);
	// oris r6,r8,4
	ctx.r6.u64 = ctx.r8.u64 | 262144;
	// cmplwi cr6,r7,2
	cr6.compare<uint32_t>(ctx.r7.u32, 2, xer);
	// stw r6,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r6.u32);
	// blt cr6,0x832531b8
	if (cr6.lt) goto loc_832531B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83217670
	ctx.lr = 0x832531B8;
	sub_83217670(ctx, base);
loc_832531B8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83252928
	ctx.lr = 0x832531C4;
	sub_83252928(ctx, base);
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,24688
	ctx.r11.s64 = ctx.r11.s64 + 24688;
	// lhz r10,38(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 38);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r10,38(r11)
	PPC_STORE_U16(ctx.r11.u32 + 38, ctx.r10.u16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x832531f0
	if (!cr6.eq) goto loc_832531F0;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// sth r30,38(r11)
	PPC_STORE_U16(ctx.r11.u32 + 38, ctx.r30.u16);
loc_832531F0:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83253208"))) PPC_WEAK_FUNC(sub_83253208);
PPC_FUNC_IMPL(__imp__sub_83253208) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,52(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// beq cr6,0x8325323c
	if (cr6.eq) goto loc_8325323C;
	// bl 0x832148c8
	ctx.lr = 0x83253238;
	sub_832148C8(ctx, base);
	// b 0x83253240
	goto loc_83253240;
loc_8325323C:
	// bl 0x83200c10
	ctx.lr = 0x83253240;
	sub_83200C10(ctx, base);
loc_83253240:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f0,240(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f13,244(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,256(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,144(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,148(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	ctx.f10.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x83210350
	ctx.lr = 0x83253274;
	sub_83210350(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83210238
	ctx.lr = 0x83253284;
	sub_83210238(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832137f0
	ctx.lr = 0x83253290;
	sub_832137F0(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lbz r10,81(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 81);
	// oris r9,r11,4
	ctx.r9.u64 = ctx.r11.u64 | 262144;
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// stw r9,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// blt cr6,0x832532b0
	if (cr6.lt) goto loc_832532B0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83217670
	ctx.lr = 0x832532B0;
	sub_83217670(ctx, base);
loc_832532B0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83252928
	ctx.lr = 0x832532BC;
	sub_83252928(ctx, base);
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,24688
	ctx.r11.s64 = ctx.r11.s64 + 24688;
	// lhz r10,38(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 38);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r10,38(r11)
	PPC_STORE_U16(ctx.r11.u32 + 38, ctx.r10.u16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x832532e8
	if (!cr6.eq) goto loc_832532E8;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r10,38(r11)
	PPC_STORE_U16(ctx.r11.u32 + 38, ctx.r10.u16);
loc_832532E8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83253300"))) PPC_WEAK_FUNC(sub_83253300);
PPC_FUNC_IMPL(__imp__sub_83253300) {
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
	// stfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f30,9008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f30.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fcmpu cr6,f1,f30
	cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// lfs f0,7088(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7088);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f0,7944(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7944);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// blt cr6,0x8325337c
	if (cr6.lt) goto loc_8325337C;
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// lfs f13,11112(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11112);
	ctx.f13.f64 = double(temp.f32);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fnmsubs f31,f8,f0,f1
	ctx.f31.f64 = double(float(-(ctx.f8.f64 * ctx.f0.f64 - ctx.f1.f64)));
	// fcmpu cr6,f31,f13
	cr6.compare(ctx.f31.f64, ctx.f13.f64);
	// ble cr6,0x832533b0
	if (!cr6.gt) goto loc_832533B0;
	// fsubs f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// b 0x832533b0
	goto loc_832533B0;
loc_8325337C:
	// stfd f11,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lfs f13,8776(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8776);
	ctx.f13.f64 = double(temp.f32);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fnmsubs f31,f8,f0,f1
	ctx.f31.f64 = double(float(-(ctx.f8.f64 * ctx.f0.f64 - ctx.f1.f64)));
	// fcmpu cr6,f31,f13
	cr6.compare(ctx.f31.f64, ctx.f13.f64);
	// bge cr6,0x832533b0
	if (!cr6.lt) goto loc_832533B0;
	// fadds f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
loc_832533B0:
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832528a0
	ctx.lr = 0x832533BC;
	sub_832528A0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f0,240(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,244(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,256(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,144(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,148(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	ctx.f10.f64 = double(temp.f32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f11,140(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f10,144(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// bl 0x832183c8
	ctx.lr = 0x832533F0;
	sub_832183C8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831fc850
	ctx.lr = 0x83253400;
	sub_831FC850(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x831fc978
	ctx.lr = 0x8325340C;
	sub_831FC978(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831fc278
	ctx.lr = 0x8325341C;
	sub_831FC278(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x831fe158
	ctx.lr = 0x83253424;
	sub_831FE158(ctx, base);
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f9,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f8,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f7.f64 = double(temp.f32);
	// stb r11,238(r1)
	PPC_STORE_U8(ctx.r1.u32 + 238, ctx.r11.u8);
	// lfs f6,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f6.f64 = double(temp.f32);
	// stb r11,239(r1)
	PPC_STORE_U8(ctx.r1.u32 + 239, ctx.r11.u8);
	// lfs f0,-26260(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26260);
	ctx.f0.f64 = double(temp.f32);
	// stb r9,236(r1)
	PPC_STORE_U8(ctx.r1.u32 + 236, ctx.r9.u8);
	// lfs f5,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f5.f64 = double(temp.f32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lfs f4,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f4.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f30,168(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f30,172(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f30,184(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f30,188(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f30,192(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f30,196(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f0,200(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f30,204(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stfs f30,216(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f0,220(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stfs f9,160(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f8,164(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f7,176(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f6,180(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f5,208(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f4,212(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// bl 0x83213480
	ctx.lr = 0x832534A4;
	sub_83213480(ctx, base);
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lbz r7,81(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 81);
	// oris r6,r8,4
	ctx.r6.u64 = ctx.r8.u64 | 262144;
	// cmplwi cr6,r7,2
	cr6.compare<uint32_t>(ctx.r7.u32, 2, xer);
	// stw r6,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r6.u32);
	// blt cr6,0x832534c4
	if (cr6.lt) goto loc_832534C4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83217670
	ctx.lr = 0x832534C4;
	sub_83217670(ctx, base);
loc_832534C4:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83252928
	ctx.lr = 0x832534D0;
	sub_83252928(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832534EC"))) PPC_WEAK_FUNC(sub_832534EC);
PPC_FUNC_IMPL(__imp__sub_832534EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832534F0"))) PPC_WEAK_FUNC(sub_832534F0);
PPC_FUNC_IMPL(__imp__sub_832534F0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x831fbe28
	ctx.lr = 0x83253514;
	sub_831FBE28(ctx, base);
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83253554
	if (cr6.eq) goto loc_83253554;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x832149a8
	ctx.lr = 0x83253528;
	sub_832149A8(ctx, base);
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83253554
	if (cr6.eq) goto loc_83253554;
	// lwz r4,344(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 344);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83253554
	if (cr6.eq) goto loc_83253554;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831fbe80
	ctx.lr = 0x83253554;
	sub_831FBE80(ctx, base);
loc_83253554:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// oris r10,r11,2048
	ctx.r10.u64 = ctx.r11.u64 | 134217728;
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f11.f64 = double(temp.f32);
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// lfs f10,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// stfs f9,192(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 192, temp.u32);
	// lfs f8,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// stfs f7,196(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 196, temp.u32);
	// lfs f6,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f6,f12
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f12.f64));
	// stfs f5,200(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 200, temp.u32);
	// lfs f4,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f4,f11
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f11.f64));
	// stfs f3,204(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 204, temp.u32);
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

__attribute__((alias("__imp__sub_832535BC"))) PPC_WEAK_FUNC(sub_832535BC);
PPC_FUNC_IMPL(__imp__sub_832535BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832535C0"))) PPC_WEAK_FUNC(sub_832535C0);
PPC_FUNC_IMPL(__imp__sub_832535C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x832535C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,280(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x832535f8
	if (!cr6.eq) goto loc_832535F8;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x83209aa8
	ctx.lr = 0x832535E8;
	sub_83209AA8(ctx, base);
	// stw r3,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x832173b0
	ctx.lr = 0x832535F4;
	sub_832173B0(ctx, base);
	// b 0x83253600
	goto loc_83253600;
loc_832535F8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x832173b0
	ctx.lr = 0x83253600;
	sub_832173B0(ctx, base);
loc_83253600:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r9,173(r31)
	PPC_STORE_U8(ctx.r31.u32 + 173, ctx.r9.u8);
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// stb r8,174(r31)
	PPC_STORE_U8(ctx.r31.u32 + 174, ctx.r8.u8);
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,24688
	ctx.r11.s64 = ctx.r11.s64 + 24688;
	// stfs f0,160(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// stfs f0,164(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
	// stfs f0,168(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 168, temp.u32);
	// lwz r7,32(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// oris r6,r7,4096
	ctx.r6.u64 = ctx.r7.u64 | 268435456;
	// stw r6,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r6.u32);
	// lhz r10,38(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 38);
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r5,16
	ctx.r10.u64 = ctx.r5.u32 & 0xFFFF;
	// sth r10,38(r11)
	PPC_STORE_U16(ctx.r11.u32 + 38, ctx.r10.u16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8325365c
	if (!cr6.eq) goto loc_8325365C;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r10,38(r11)
	PPC_STORE_U16(ctx.r11.u32 + 38, ctx.r10.u16);
loc_8325365C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83206f30
	ctx.lr = 0x83253668;
	sub_83206F30(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83253670"))) PPC_WEAK_FUNC(sub_83253670);
PPC_FUNC_IMPL(__imp__sub_83253670) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83253678;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x832536a4
	if (!cr6.eq) goto loc_832536A4;
	// li r4,65
	ctx.r4.s64 = 65;
	// bl 0x8322b7d0
	ctx.lr = 0x83253698;
	sub_8322B7D0(ctx, base);
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// rlwinm r10,r11,0,23,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFF1FF;
	// b 0x832537d0
	goto loc_832537D0;
loc_832536A4:
	// lwz r8,24(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x832536f4
	if (cr6.eq) goto loc_832536F4;
	// dcbt r0,r8
	// li r9,0
	ctx.r9.s64 = 0;
	// lhz r11,14(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 14);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x832536f4
	if (!cr6.gt) goto loc_832536F4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_832536CC:
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lbz r7,5(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// cmplwi cr6,r7,65
	cr6.compare<uint32_t>(ctx.r7.u32, 65, xer);
	// beq cr6,0x83253720
	if (cr6.eq) goto loc_83253720;
	// lhz r10,14(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 14);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// cmpw cr6,r9,r7
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, xer);
	// blt cr6,0x832536cc
	if (cr6.lt) goto loc_832536CC;
loc_832536F4:
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x83209aa8
	ctx.lr = 0x832536FC;
	sub_83209AA8(ctx, base);
	// vspltisw128 v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x0)));
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,65
	ctx.r5.s64 = 65;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// stvx128 v63,r0,r31
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8322c600
	ctx.lr = 0x8325371C;
	sub_8322C600(ctx, base);
	// b 0x83253744
	goto loc_83253744;
loc_83253720:
	// lhz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 16);
	// li r9,12288
	ctx.r9.s64 = 12288;
	// srw r8,r9,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x83253740
	if (cr6.eq) goto loc_83253740;
	// lwz r31,20(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// b 0x83253744
	goto loc_83253744;
loc_83253740:
	// li r31,0
	ctx.r31.s64 = 0;
loc_83253744:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// stfs f9,8(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f8,80(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// stfs f6,4(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f5,80(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// stfs f3,12(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lwz r3,36(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// rlwinm r11,r3,0,23,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFFFF1FF;
	// or r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 | ctx.r28.u64;
loc_832537D0:
	// stw r10,36(r29)
	PPC_STORE_U32(ctx.r29.u32 + 36, ctx.r10.u32);
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,24688
	ctx.r11.s64 = ctx.r11.s64 + 24688;
	// lhz r10,38(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 38);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r10,38(r11)
	PPC_STORE_U16(ctx.r11.u32 + 38, ctx.r10.u16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83253800
	if (!cr6.eq) goto loc_83253800;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r10,38(r11)
	PPC_STORE_U16(ctx.r11.u32 + 38, ctx.r10.u16);
loc_83253800:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83253808"))) PPC_WEAK_FUNC(sub_83253808);
PPC_FUNC_IMPL(__imp__sub_83253808) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83253810;
	__savegprlr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8324ee80
	ctx.lr = 0x83253830;
	sub_8324EE80(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// sth r11,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r11.u16);
	// stb r11,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r11.u8);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bl 0x832277e8
	ctx.lr = 0x83253858;
	sub_832277E8(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// sth r11,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r11.u16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83253870
	if (!cr6.eq) goto loc_83253870;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r11,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r11.u16);
loc_83253870:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// li r9,7
	ctx.r9.s64 = 7;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// sth r9,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r9.u16);
	// rlwinm r28,r10,3,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x1;
	// bl 0x83209b18
	ctx.lr = 0x83253890;
	sub_83209B18(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x832538ac
	if (cr6.eq) goto loc_832538AC;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8321ee08
	ctx.lr = 0x832538A8;
	sub_8321EE08(ctx, base);
	// b 0x832538c0
	goto loc_832538C0;
loc_832538AC:
	// lhz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// bl 0x83217198
	ctx.lr = 0x832538C0;
	sub_83217198(ctx, base);
loc_832538C0:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x832538ec
	if (cr6.eq) goto loc_832538EC;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// lis r9,-32221
	ctx.r9.s64 = -2111635456;
	// addi r5,r11,-22544
	ctx.r5.s64 = ctx.r11.s64 + -22544;
	// addi r4,r10,15072
	ctx.r4.s64 = ctx.r10.s64 + 15072;
	// addi r3,r9,14436
	ctx.r3.s64 = ctx.r9.s64 + 14436;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x83208330
	ctx.lr = 0x832538EC;
	sub_83208330(ctx, base);
loc_832538EC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83222030
	ctx.lr = 0x832538F4;
	sub_83222030(ctx, base);
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// beq cr6,0x83253918
	if (cr6.eq) goto loc_83253918;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x83253918
	if (cr6.eq) goto loc_83253918;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x83253918
	if (cr6.eq) goto loc_83253918;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83209d68
	ctx.lr = 0x83253918;
	sub_83209D68(ctx, base);
loc_83253918:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83253924"))) PPC_WEAK_FUNC(sub_83253924);
PPC_FUNC_IMPL(__imp__sub_83253924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83253928"))) PPC_WEAK_FUNC(sub_83253928);
PPC_FUNC_IMPL(__imp__sub_83253928) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x83253944
	if (!cr6.eq) goto loc_83253944;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_83253944:
	// b 0x83252a10
	sub_83252A10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83253948"))) PPC_WEAK_FUNC(sub_83253948);
PPC_FUNC_IMPL(__imp__sub_83253948) {
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
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lfd f0,0(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// bl 0x83252e78
	ctx.lr = 0x83253968;
	sub_83252E78(ctx, base);
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,24688
	ctx.r11.s64 = ctx.r11.s64 + 24688;
	// lhz r10,38(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 38);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r10,38(r11)
	PPC_STORE_U16(ctx.r11.u32 + 38, ctx.r10.u16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83253994
	if (!cr6.eq) goto loc_83253994;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r10,38(r11)
	PPC_STORE_U16(ctx.r11.u32 + 38, ctx.r10.u16);
loc_83253994:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_832539A4"))) PPC_WEAK_FUNC(sub_832539A4);
PPC_FUNC_IMPL(__imp__sub_832539A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_832539A8"))) PPC_WEAK_FUNC(sub_832539A8);
PPC_FUNC_IMPL(__imp__sub_832539A8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x83252d30
	sub_83252D30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832539B8"))) PPC_WEAK_FUNC(sub_832539B8);
PPC_FUNC_IMPL(__imp__sub_832539B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x832539d4
	if (!cr6.eq) goto loc_832539D4;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_832539D4:
	// b 0x83252b28
	sub_83252B28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_832539D8"))) PPC_WEAK_FUNC(sub_832539D8);
PPC_FUNC_IMPL(__imp__sub_832539D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// addi r10,r4,7
	ctx.r10.s64 = ctx.r4.s64 + 7;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rlwinm r9,r10,0,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x832539f8
	if (!cr6.eq) goto loc_832539F8;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_832539F8:
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// li r3,0
	ctx.r3.s64 = 0;
	// oris r8,r9,2048
	ctx.r8.u64 = ctx.r9.u64 | 134217728;
	// stw r8,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r8.u32);
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,176(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 176, temp.u32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,180(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 180, temp.u32);
	// lfs f12,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,184(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 184, temp.u32);
	// lfs f11,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,188(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 188, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83253A2C"))) PPC_WEAK_FUNC(sub_83253A2C);
PPC_FUNC_IMPL(__imp__sub_83253A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83253A30"))) PPC_WEAK_FUNC(sub_83253A30);
PPC_FUNC_IMPL(__imp__sub_83253A30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// addi r10,r4,7
	ctx.r10.s64 = ctx.r4.s64 + 7;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rlwinm r9,r10,0,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83253a50
	if (!cr6.eq) goto loc_83253A50;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_83253A50:
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// li r3,0
	ctx.r3.s64 = 0;
	// oris r8,r9,2048
	ctx.r8.u64 = ctx.r9.u64 | 134217728;
	// stw r8,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r8.u32);
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,192(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 192, temp.u32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,196(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 196, temp.u32);
	// lfs f12,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,200(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 200, temp.u32);
	// lfs f11,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,204(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 204, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83253A84"))) PPC_WEAK_FUNC(sub_83253A84);
PPC_FUNC_IMPL(__imp__sub_83253A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83253A88"))) PPC_WEAK_FUNC(sub_83253A88);
PPC_FUNC_IMPL(__imp__sub_83253A88) {
	PPC_FUNC_PROLOGUE();
	// addi r10,r4,7
	ctx.r10.s64 = ctx.r4.s64 + 7;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rlwinm r9,r10,0,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r8,79(r11)
	PPC_STORE_U8(ctx.r11.u32 + 79, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83253AA4"))) PPC_WEAK_FUNC(sub_83253AA4);
PPC_FUNC_IMPL(__imp__sub_83253AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83253AA8"))) PPC_WEAK_FUNC(sub_83253AA8);
PPC_FUNC_IMPL(__imp__sub_83253AA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addi r10,r4,7
	ctx.r10.s64 = ctx.r4.s64 + 7;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rlwinm r9,r10,0,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r9,r10,0,15,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFDFFFF;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x83253ad0
	if (!cr6.eq) goto loc_83253AD0;
	// oris r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 131072;
loc_83253AD0:
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83253AD8"))) PPC_WEAK_FUNC(sub_83253AD8);
PPC_FUNC_IMPL(__imp__sub_83253AD8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r30,4(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// bne cr6,0x83253b0c
	if (!cr6.eq) goto loc_83253B0C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x83253ba0
	goto loc_83253BA0;
loc_83253B0C:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x832528a0
	ctx.lr = 0x83253B18;
	sub_832528A0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831fcce0
	ctx.lr = 0x83253B28;
	sub_831FCCE0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// stb r11,172(r31)
	PPC_STORE_U8(ctx.r31.u32 + 172, ctx.r11.u8);
	// stfs f0,144(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// stb r10,174(r31)
	PPC_STORE_U8(ctx.r31.u32 + 174, ctx.r10.u8);
	// stfs f13,148(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// lwz r7,32(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lbz r8,81(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 81);
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// ori r5,r9,4
	ctx.r5.u64 = ctx.r9.u64 | 4;
	// oris r6,r7,4
	ctx.r6.u64 = ctx.r7.u64 | 262144;
	// stw r5,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r5.u32);
	// cmplwi cr6,r8,2
	cr6.compare<uint32_t>(ctx.r8.u32, 2, xer);
	// stw r6,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r6.u32);
	// blt cr6,0x83253b74
	if (cr6.lt) goto loc_83253B74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83217670
	ctx.lr = 0x83253B74;
	sub_83217670(ctx, base);
loc_83253B74:
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r11,r11,24688
	ctx.r11.s64 = ctx.r11.s64 + 24688;
	// lhz r10,38(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 38);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r10,38(r11)
	PPC_STORE_U16(ctx.r11.u32 + 38, ctx.r10.u16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x83253b9c
	if (!cr6.eq) goto loc_83253B9C;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r10,38(r11)
	PPC_STORE_U16(ctx.r11.u32 + 38, ctx.r10.u16);
loc_83253B9C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_83253BA0:
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

__attribute__((alias("__imp__sub_83253BB8"))) PPC_WEAK_FUNC(sub_83253BB8);
PPC_FUNC_IMPL(__imp__sub_83253BB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r3,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83253BD0"))) PPC_WEAK_FUNC(sub_83253BD0);
PPC_FUNC_IMPL(__imp__sub_83253BD0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x83253c10
	if (!cr6.eq) goto loc_83253C10;
	// li r3,-1
	ctx.r3.s64 = -1;
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
loc_83253C10:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x831fbe28
	ctx.lr = 0x83253C1C;
	sub_831FBE28(ctx, base);
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83253c5c
	if (cr6.eq) goto loc_83253C5C;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x832149a8
	ctx.lr = 0x83253C30;
	sub_832149A8(ctx, base);
	// lis r11,-31748
	ctx.r11.s64 = -2080636928;
	// addi r10,r11,24688
	ctx.r10.s64 = ctx.r11.s64 + 24688;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x83253c5c
	if (cr6.eq) goto loc_83253C5C;
	// lwz r4,344(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 344);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x83253c5c
	if (cr6.eq) goto loc_83253C5C;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831fbe80
	ctx.lr = 0x83253C5C;
	sub_831FBE80(ctx, base);
loc_83253C5C:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// vspltisw128 v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x2)));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r8,16
	ctx.r8.s64 = 16;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// vcsxwfp128 v12,v63,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// li r6,176
	ctx.r6.s64 = 176;
	// lvx128 v13,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// oris r5,r9,2048
	ctx.r5.u64 = ctx.r9.u64 | 134217728;
	// vrefp128 v62,v13
	simde_mm_store_ps(ctx.v62.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_load_ps(ctx.v13.f32)));
	// li r3,0
	ctx.r3.s64 = 0;
	// lvrx128 v61,r8,r10
	temp.u32 = ctx.r8.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// stw r5,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r5.u32);
	// lvlx128 v60,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v59,v60,v61
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// vor128 v0,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v62.u8));
	// vnmsubfp v12,v13,v0,v12
	simde_mm_store_ps(ctx.v12.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v12.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vmulfp128 v58,v12,v62
	simde_mm_store_ps(ctx.v58.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v62.f32)));
	// vmulfp128 v57,v59,v58
	simde_mm_store_ps(ctx.v57.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v58.f32)));
	// stvx128 v57,r31,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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

__attribute__((alias("__imp__sub_83253CC4"))) PPC_WEAK_FUNC(sub_83253CC4);
PPC_FUNC_IMPL(__imp__sub_83253CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

