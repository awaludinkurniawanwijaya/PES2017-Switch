#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83BE91A0"))) PPC_WEAK_FUNC(sub_83BE91A0);
PPC_FUNC_IMPL(__imp__sub_83BE91A0) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,25808
	ctx.r3.s64 = ctx.r11.s64 + 25808;
	// bl 0x83523120
	ctx.lr = 0x83BE91B8;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-20936
	ctx.r3.s64 = ctx.r10.s64 + -20936;
	// bl 0x831cdcc8
	ctx.lr = 0x83BE91C4;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BE91D4"))) PPC_WEAK_FUNC(sub_83BE91D4);
PPC_FUNC_IMPL(__imp__sub_83BE91D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE91D8"))) PPC_WEAK_FUNC(sub_83BE91D8);
PPC_FUNC_IMPL(__imp__sub_83BE91D8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,26508
	ctx.r7.s64 = ctx.r8.s64 + 26508;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,26508(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26508);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,26508(r8)
	PPC_STORE_U32(ctx.r8.u32 + 26508, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BE9200"))) PPC_WEAK_FUNC(sub_83BE9200);
PPC_FUNC_IMPL(__imp__sub_83BE9200) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-12204
	ctx.r6.s64 = ctx.r7.s64 + -12204;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-12276(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -12276);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,26508(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 26508);
	// oris r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 4294901760;
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
	// stw r11,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r11.u32);
	// stw r11,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r11.u32);
	// std r9,-12204(r7)
	PPC_STORE_U64(ctx.r7.u32 + -12204, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BE9248"))) PPC_WEAK_FUNC(sub_83BE9248);
PPC_FUNC_IMPL(__imp__sub_83BE9248) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-20920
	ctx.r3.s64 = ctx.r11.s64 + -20920;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE9254"))) PPC_WEAK_FUNC(sub_83BE9254);
PPC_FUNC_IMPL(__imp__sub_83BE9254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE9258"))) PPC_WEAK_FUNC(sub_83BE9258);
PPC_FUNC_IMPL(__imp__sub_83BE9258) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,26520
	ctx.r3.s64 = ctx.r11.s64 + 26520;
	// bl 0x8259af80
	ctx.lr = 0x83BE9270;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-20904
	ctx.r3.s64 = ctx.r10.s64 + -20904;
	// bl 0x831cdcc8
	ctx.lr = 0x83BE927C;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BE928C"))) PPC_WEAK_FUNC(sub_83BE928C);
PPC_FUNC_IMPL(__imp__sub_83BE928C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE9290"))) PPC_WEAK_FUNC(sub_83BE9290);
PPC_FUNC_IMPL(__imp__sub_83BE9290) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,26496
	ctx.r11.s64 = ctx.r8.s64 + 26496;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-12228(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -12228);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-20912
	ctx.r3.s64 = ctx.r6.s64 + -20912;
	// stw r10,26496(r8)
	PPC_STORE_U32(ctx.r8.u32 + 26496, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE92C0"))) PPC_WEAK_FUNC(sub_83BE92C0);
PPC_FUNC_IMPL(__imp__sub_83BE92C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x83BE92C8;
	__savegprlr_25(ctx, base);
	// stwu r1,-1056(r1)
	ea = -1056 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,15
	ctx.r30.s64 = 15;
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// addi r28,r11,-24020
	ctx.r28.s64 = ctx.r11.s64 + -24020;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r4,r28,184
	ctx.r4.s64 = ctx.r28.s64 + 184;
	// bl 0x8259cc28
	ctx.lr = 0x83BE92F8;
	sub_8259CC28(ctx, base);
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// addi r4,r28,172
	ctx.r4.s64 = ctx.r28.s64 + 172;
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x8259cc28
	ctx.lr = 0x83BE9314;
	sub_8259CC28(ctx, base);
	// li r26,2
	ctx.r26.s64 = 2;
	// stw r31,564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 564, ctx.r31.u32);
	// li r27,-1
	ctx.r27.s64 = -1;
	// stb r31,548(r1)
	PPC_STORE_U8(ctx.r1.u32 + 548, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r26,544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 544, ctx.r26.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r30,568(r1)
	PPC_STORE_U32(ctx.r1.u32 + 568, ctx.r30.u32);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,548
	ctx.r3.s64 = ctx.r1.s64 + 548;
	// bl 0x8259cb28
	ctx.lr = 0x83BE9340;
	sub_8259CB28(ctx, base);
	// stw r31,592(r1)
	PPC_STORE_U32(ctx.r1.u32 + 592, ctx.r31.u32);
	// stb r31,576(r1)
	PPC_STORE_U8(ctx.r1.u32 + 576, ctx.r31.u8);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r30,596(r1)
	PPC_STORE_U32(ctx.r1.u32 + 596, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// bl 0x8259cb28
	ctx.lr = 0x83BE9360;
	sub_8259CB28(ctx, base);
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// li r25,1
	ctx.r25.s64 = 1;
	// addi r29,r11,25816
	ctx.r29.s64 = ctx.r11.s64 + 25816;
	// stw r25,604(r1)
	PPC_STORE_U32(ctx.r1.u32 + 604, ctx.r25.u32);
	// addi r4,r1,544
	ctx.r4.s64 = ctx.r1.s64 + 544;
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// bl 0x82c4b220
	ctx.lr = 0x83BE9384;
	sub_82C4B220(ctx, base);
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// bl 0x8378e240
	ctx.lr = 0x83BE938C;
	sub_8378E240(ctx, base);
	// lwz r11,340(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83be93a8
	if (cr6.lt) goto loc_83BE93A8;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lwz r4,320(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x825952b8
	ctx.lr = 0x83BE93A8;
	sub_825952B8(ctx, base);
loc_83BE93A8:
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// blt cr6,0x83be93d0
	if (cr6.lt) goto loc_83BE93D0;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x825952b8
	ctx.lr = 0x83BE93D0;
	sub_825952B8(ctx, base);
loc_83BE93D0:
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// addi r4,r28,164
	ctx.r4.s64 = ctx.r28.s64 + 164;
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// bl 0x8259cc28
	ctx.lr = 0x83BE93F8;
	sub_8259CC28(ctx, base);
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// addi r4,r28,152
	ctx.r4.s64 = ctx.r28.s64 + 152;
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x8259cc28
	ctx.lr = 0x83BE9414;
	sub_8259CC28(ctx, base);
	// stw r26,864(r1)
	PPC_STORE_U32(ctx.r1.u32 + 864, ctx.r26.u32);
	// stw r30,888(r1)
	PPC_STORE_U32(ctx.r1.u32 + 888, ctx.r30.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r31,884(r1)
	PPC_STORE_U32(ctx.r1.u32 + 884, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,868(r1)
	PPC_STORE_U8(ctx.r1.u32 + 868, ctx.r31.u8);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,868
	ctx.r3.s64 = ctx.r1.s64 + 868;
	// bl 0x8259cb28
	ctx.lr = 0x83BE9438;
	sub_8259CB28(ctx, base);
	// stw r30,916(r1)
	PPC_STORE_U32(ctx.r1.u32 + 916, ctx.r30.u32);
	// stw r31,912(r1)
	PPC_STORE_U32(ctx.r1.u32 + 912, ctx.r31.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stb r31,896(r1)
	PPC_STORE_U8(ctx.r1.u32 + 896, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,896
	ctx.r3.s64 = ctx.r1.s64 + 896;
	// bl 0x8259cb28
	ctx.lr = 0x83BE9458;
	sub_8259CB28(ctx, base);
	// stw r26,924(r1)
	PPC_STORE_U32(ctx.r1.u32 + 924, ctx.r26.u32);
	// stw r25,68(r29)
	PPC_STORE_U32(ctx.r29.u32 + 68, ctx.r25.u32);
	// addi r4,r1,864
	ctx.r4.s64 = ctx.r1.s64 + 864;
	// addi r3,r29,72
	ctx.r3.s64 = ctx.r29.s64 + 72;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// bl 0x82c4b220
	ctx.lr = 0x83BE9470;
	sub_82C4B220(ctx, base);
	// addi r3,r1,864
	ctx.r3.s64 = ctx.r1.s64 + 864;
	// bl 0x8378e240
	ctx.lr = 0x83BE9478;
	sub_8378E240(ctx, base);
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x83be9494
	if (cr6.lt) goto loc_83BE9494;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,288(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x825952b8
	ctx.lr = 0x83BE9494;
	sub_825952B8(ctx, base);
loc_83BE9494:
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// blt cr6,0x83be94bc
	if (cr6.lt) goto loc_83BE94BC;
	// stw r26,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// lwz r4,256(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x825952b8
	ctx.lr = 0x83BE94BC;
	sub_825952B8(ctx, base);
loc_83BE94BC:
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// addi r4,r28,144
	ctx.r4.s64 = ctx.r28.s64 + 144;
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
	// bl 0x8259cc28
	ctx.lr = 0x83BE94E4;
	sub_8259CC28(ctx, base);
	// stw r30,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r30.u32);
	// stw r31,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r31.u32);
	// addi r4,r28,132
	ctx.r4.s64 = ctx.r28.s64 + 132;
	// stb r31,448(r1)
	PPC_STORE_U8(ctx.r1.u32 + 448, ctx.r31.u8);
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x8259cc28
	ctx.lr = 0x83BE9500;
	sub_8259CC28(ctx, base);
	// stw r26,736(r1)
	PPC_STORE_U32(ctx.r1.u32 + 736, ctx.r26.u32);
	// stw r30,760(r1)
	PPC_STORE_U32(ctx.r1.u32 + 760, ctx.r30.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r31,756(r1)
	PPC_STORE_U32(ctx.r1.u32 + 756, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,740(r1)
	PPC_STORE_U8(ctx.r1.u32 + 740, ctx.r31.u8);
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// addi r3,r1,740
	ctx.r3.s64 = ctx.r1.s64 + 740;
	// bl 0x8259cb28
	ctx.lr = 0x83BE9524;
	sub_8259CB28(ctx, base);
	// stw r30,788(r1)
	PPC_STORE_U32(ctx.r1.u32 + 788, ctx.r30.u32);
	// stw r31,784(r1)
	PPC_STORE_U32(ctx.r1.u32 + 784, ctx.r31.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stb r31,768(r1)
	PPC_STORE_U8(ctx.r1.u32 + 768, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,768
	ctx.r3.s64 = ctx.r1.s64 + 768;
	// bl 0x8259cb28
	ctx.lr = 0x83BE9544;
	sub_8259CB28(ctx, base);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r26,136(r29)
	PPC_STORE_U32(ctx.r29.u32 + 136, ctx.r26.u32);
	// addi r4,r1,736
	ctx.r4.s64 = ctx.r1.s64 + 736;
	// stw r10,796(r1)
	PPC_STORE_U32(ctx.r1.u32 + 796, ctx.r10.u32);
	// addi r3,r29,140
	ctx.r3.s64 = ctx.r29.s64 + 140;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// bl 0x82c4b220
	ctx.lr = 0x83BE9560;
	sub_82C4B220(ctx, base);
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// bl 0x8378e240
	ctx.lr = 0x83BE9568;
	sub_8378E240(ctx, base);
	// lwz r9,468(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x83be9584
	if (cr6.lt) goto loc_83BE9584;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,448(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// bl 0x825952b8
	ctx.lr = 0x83BE9584;
	sub_825952B8(ctx, base);
loc_83BE9584:
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// stw r30,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r30.u32);
	// stw r31,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,448(r1)
	PPC_STORE_U8(ctx.r1.u32 + 448, ctx.r31.u8);
	// blt cr6,0x83be95ac
	if (cr6.lt) goto loc_83BE95AC;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x825952b8
	ctx.lr = 0x83BE95AC;
	sub_825952B8(ctx, base);
loc_83BE95AC:
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// addi r4,r28,124
	ctx.r4.s64 = ctx.r28.s64 + 124;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r31.u8);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// stw r30,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r30.u32);
	// stw r31,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r31.u32);
	// stb r31,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r31.u8);
	// bl 0x8259cc28
	ctx.lr = 0x83BE95D4;
	sub_8259CC28(ctx, base);
	// stw r30,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r30.u32);
	// stw r31,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r31.u32);
	// addi r4,r28,112
	ctx.r4.s64 = ctx.r28.s64 + 112;
	// stb r31,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r31.u8);
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x8259cc28
	ctx.lr = 0x83BE95F0;
	sub_8259CC28(ctx, base);
	// stw r26,608(r1)
	PPC_STORE_U32(ctx.r1.u32 + 608, ctx.r26.u32);
	// stw r30,632(r1)
	PPC_STORE_U32(ctx.r1.u32 + 632, ctx.r30.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r31,628(r1)
	PPC_STORE_U32(ctx.r1.u32 + 628, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,612(r1)
	PPC_STORE_U8(ctx.r1.u32 + 612, ctx.r31.u8);
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// addi r3,r1,612
	ctx.r3.s64 = ctx.r1.s64 + 612;
	// bl 0x8259cb28
	ctx.lr = 0x83BE9614;
	sub_8259CB28(ctx, base);
	// stw r30,660(r1)
	PPC_STORE_U32(ctx.r1.u32 + 660, ctx.r30.u32);
	// stw r31,656(r1)
	PPC_STORE_U32(ctx.r1.u32 + 656, ctx.r31.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stb r31,640(r1)
	PPC_STORE_U8(ctx.r1.u32 + 640, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// bl 0x8259cb28
	ctx.lr = 0x83BE9634;
	sub_8259CB28(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,204(r29)
	PPC_STORE_U32(ctx.r29.u32 + 204, ctx.r11.u32);
	// addi r4,r1,608
	ctx.r4.s64 = ctx.r1.s64 + 608;
	// stw r10,668(r1)
	PPC_STORE_U32(ctx.r1.u32 + 668, ctx.r10.u32);
	// addi r3,r29,208
	ctx.r3.s64 = ctx.r29.s64 + 208;
	// bl 0x82c4b220
	ctx.lr = 0x83BE9650;
	sub_82C4B220(ctx, base);
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// bl 0x8378e240
	ctx.lr = 0x83BE9658;
	sub_8378E240(ctx, base);
	// lwz r9,436(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x83be9674
	if (cr6.lt) goto loc_83BE9674;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,416(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// bl 0x825952b8
	ctx.lr = 0x83BE9674;
	sub_825952B8(ctx, base);
loc_83BE9674:
	// lwz r11,404(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// stw r30,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r30.u32);
	// stw r31,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,416(r1)
	PPC_STORE_U8(ctx.r1.u32 + 416, ctx.r31.u8);
	// blt cr6,0x83be969c
	if (cr6.lt) goto loc_83BE969C;
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,384(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// bl 0x825952b8
	ctx.lr = 0x83BE969C;
	sub_825952B8(ctx, base);
loc_83BE969C:
	// stw r30,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r30.u32);
	// addi r4,r28,100
	ctx.r4.s64 = ctx.r28.s64 + 100;
	// stw r31,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r31.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// stb r31,384(r1)
	PPC_STORE_U8(ctx.r1.u32 + 384, ctx.r31.u8);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// stw r30,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r30.u32);
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
	// bl 0x8259cc28
	ctx.lr = 0x83BE96C4;
	sub_8259CC28(ctx, base);
	// stw r26,672(r1)
	PPC_STORE_U32(ctx.r1.u32 + 672, ctx.r26.u32);
	// stw r30,696(r1)
	PPC_STORE_U32(ctx.r1.u32 + 696, ctx.r30.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r31,692(r1)
	PPC_STORE_U32(ctx.r1.u32 + 692, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,676(r1)
	PPC_STORE_U8(ctx.r1.u32 + 676, ctx.r31.u8);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r3,r1,676
	ctx.r3.s64 = ctx.r1.s64 + 676;
	// bl 0x8259cb28
	ctx.lr = 0x83BE96E8;
	sub_8259CB28(ctx, base);
	// stw r30,724(r1)
	PPC_STORE_U32(ctx.r1.u32 + 724, ctx.r30.u32);
	// stw r31,720(r1)
	PPC_STORE_U32(ctx.r1.u32 + 720, ctx.r31.u32);
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// stb r31,704(r1)
	PPC_STORE_U8(ctx.r1.u32 + 704, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-22544
	ctx.r4.s64 = ctx.r11.s64 + -22544;
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// bl 0x8259cc28
	ctx.lr = 0x83BE9708;
	sub_8259CC28(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r31,732(r1)
	PPC_STORE_U32(ctx.r1.u32 + 732, ctx.r31.u32);
	// addi r4,r1,672
	ctx.r4.s64 = ctx.r1.s64 + 672;
	// stw r11,272(r29)
	PPC_STORE_U32(ctx.r29.u32 + 272, ctx.r11.u32);
	// addi r3,r29,276
	ctx.r3.s64 = ctx.r29.s64 + 276;
	// bl 0x82c4b220
	ctx.lr = 0x83BE9720;
	sub_82C4B220(ctx, base);
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// bl 0x8378e240
	ctx.lr = 0x83BE9728;
	sub_8378E240(ctx, base);
	// lwz r10,372(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x83be9744
	if (cr6.lt) goto loc_83BE9744;
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,352(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// bl 0x825952b8
	ctx.lr = 0x83BE9744;
	sub_825952B8(ctx, base);
loc_83BE9744:
	// stw r30,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r30.u32);
	// addi r4,r28,92
	ctx.r4.s64 = ctx.r28.s64 + 92;
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r31,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r31.u8);
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// stw r30,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r30.u32);
	// stw r31,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r31.u32);
	// stb r31,512(r1)
	PPC_STORE_U8(ctx.r1.u32 + 512, ctx.r31.u8);
	// bl 0x8259cc28
	ctx.lr = 0x83BE976C;
	sub_8259CC28(ctx, base);
	// stw r30,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r30.u32);
	// stw r31,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r31.u32);
	// addi r4,r28,80
	ctx.r4.s64 = ctx.r28.s64 + 80;
	// stb r31,480(r1)
	PPC_STORE_U8(ctx.r1.u32 + 480, ctx.r31.u8);
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x8259cc28
	ctx.lr = 0x83BE9788;
	sub_8259CC28(ctx, base);
	// stw r26,800(r1)
	PPC_STORE_U32(ctx.r1.u32 + 800, ctx.r26.u32);
	// stw r30,824(r1)
	PPC_STORE_U32(ctx.r1.u32 + 824, ctx.r30.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r31,820(r1)
	PPC_STORE_U32(ctx.r1.u32 + 820, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,804(r1)
	PPC_STORE_U8(ctx.r1.u32 + 804, ctx.r31.u8);
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// addi r3,r1,804
	ctx.r3.s64 = ctx.r1.s64 + 804;
	// bl 0x8259cb28
	ctx.lr = 0x83BE97AC;
	sub_8259CB28(ctx, base);
	// stw r30,852(r1)
	PPC_STORE_U32(ctx.r1.u32 + 852, ctx.r30.u32);
	// stw r31,848(r1)
	PPC_STORE_U32(ctx.r1.u32 + 848, ctx.r31.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stb r31,832(r1)
	PPC_STORE_U8(ctx.r1.u32 + 832, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
	// addi r3,r1,832
	ctx.r3.s64 = ctx.r1.s64 + 832;
	// bl 0x8259cb28
	ctx.lr = 0x83BE97CC;
	sub_8259CB28(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r25,860(r1)
	PPC_STORE_U32(ctx.r1.u32 + 860, ctx.r25.u32);
	// addi r4,r1,800
	ctx.r4.s64 = ctx.r1.s64 + 800;
	// stw r11,340(r29)
	PPC_STORE_U32(ctx.r29.u32 + 340, ctx.r11.u32);
	// addi r3,r29,344
	ctx.r3.s64 = ctx.r29.s64 + 344;
	// bl 0x82c4b220
	ctx.lr = 0x83BE97E4;
	sub_82C4B220(ctx, base);
	// addi r3,r1,800
	ctx.r3.s64 = ctx.r1.s64 + 800;
	// bl 0x8378e240
	ctx.lr = 0x83BE97EC;
	sub_8378E240(ctx, base);
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x8387e8e0
	ctx.lr = 0x83BE97F4;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x8387e8e0
	ctx.lr = 0x83BE97FC;
	sub_8387E8E0(ctx, base);
	// addi r4,r28,72
	ctx.r4.s64 = ctx.r28.s64 + 72;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x83BE9808;
	sub_837B0C10(ctx, base);
	// addi r4,r28,60
	ctx.r4.s64 = ctx.r28.s64 + 60;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x837b0c10
	ctx.lr = 0x83BE9814;
	sub_837B0C10(ctx, base);
	// li r7,2
	ctx.r7.s64 = 2;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,928
	ctx.r3.s64 = ctx.r1.s64 + 928;
	// bl 0x82c4b1a0
	ctx.lr = 0x83BE982C;
	sub_82C4B1A0(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r11,408(r29)
	PPC_STORE_U32(ctx.r29.u32 + 408, ctx.r11.u32);
	// addi r3,r29,412
	ctx.r3.s64 = ctx.r29.s64 + 412;
	// bl 0x82c4b220
	ctx.lr = 0x83BE9840;
	sub_82C4B220(ctx, base);
	// addi r3,r1,928
	ctx.r3.s64 = ctx.r1.s64 + 928;
	// bl 0x8378e240
	ctx.lr = 0x83BE9848;
	sub_8378E240(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x83BE9850;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x83BE9858;
	sub_8387E8E0(ctx, base);
	// addi r4,r28,52
	ctx.r4.s64 = ctx.r28.s64 + 52;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x837b0c10
	ctx.lr = 0x83BE9864;
	sub_837B0C10(ctx, base);
	// addi r4,r28,40
	ctx.r4.s64 = ctx.r28.s64 + 40;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x83BE9870;
	sub_837B0C10(ctx, base);
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,928
	ctx.r3.s64 = ctx.r1.s64 + 928;
	// bl 0x82c4b1a0
	ctx.lr = 0x83BE9888;
	sub_82C4B1A0(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r11,476(r29)
	PPC_STORE_U32(ctx.r29.u32 + 476, ctx.r11.u32);
	// addi r3,r29,480
	ctx.r3.s64 = ctx.r29.s64 + 480;
	// bl 0x82c4b220
	ctx.lr = 0x83BE989C;
	sub_82C4B220(ctx, base);
	// addi r3,r1,928
	ctx.r3.s64 = ctx.r1.s64 + 928;
	// bl 0x8378e240
	ctx.lr = 0x83BE98A4;
	sub_8378E240(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x83BE98AC;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x83BE98B4;
	sub_8387E8E0(ctx, base);
	// addi r4,r28,32
	ctx.r4.s64 = ctx.r28.s64 + 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x837b0c10
	ctx.lr = 0x83BE98C0;
	sub_837B0C10(ctx, base);
	// addi r4,r28,20
	ctx.r4.s64 = ctx.r28.s64 + 20;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x83BE98CC;
	sub_837B0C10(ctx, base);
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,928
	ctx.r3.s64 = ctx.r1.s64 + 928;
	// bl 0x82c4b1a0
	ctx.lr = 0x83BE98E4;
	sub_82C4B1A0(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r11,544(r29)
	PPC_STORE_U32(ctx.r29.u32 + 544, ctx.r11.u32);
	// addi r3,r29,548
	ctx.r3.s64 = ctx.r29.s64 + 548;
	// bl 0x82c4b220
	ctx.lr = 0x83BE98F8;
	sub_82C4B220(ctx, base);
	// addi r3,r1,928
	ctx.r3.s64 = ctx.r1.s64 + 928;
	// bl 0x8378e240
	ctx.lr = 0x83BE9900;
	sub_8378E240(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x83BE9908;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x83BE9910;
	sub_8387E8E0(ctx, base);
	// addi r4,r28,12
	ctx.r4.s64 = ctx.r28.s64 + 12;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x837b0c10
	ctx.lr = 0x83BE991C;
	sub_837B0C10(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x83BE9928;
	sub_837B0C10(ctx, base);
	// li r7,5
	ctx.r7.s64 = 5;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,928
	ctx.r3.s64 = ctx.r1.s64 + 928;
	// bl 0x82c4b1a0
	ctx.lr = 0x83BE9940;
	sub_82C4B1A0(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r11,612(r29)
	PPC_STORE_U32(ctx.r29.u32 + 612, ctx.r11.u32);
	// addi r3,r29,616
	ctx.r3.s64 = ctx.r29.s64 + 616;
	// bl 0x82c4b220
	ctx.lr = 0x83BE9954;
	sub_82C4B220(ctx, base);
	// addi r3,r1,928
	ctx.r3.s64 = ctx.r1.s64 + 928;
	// bl 0x8378e240
	ctx.lr = 0x83BE995C;
	sub_8378E240(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x83BE9964;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x83BE996C;
	sub_8387E8E0(ctx, base);
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-20568
	ctx.r3.s64 = ctx.r11.s64 + -20568;
	// bl 0x831cdcc8
	ctx.lr = 0x83BE9978;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,1056
	ctx.r1.s64 = ctx.r1.s64 + 1056;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE9980"))) PPC_WEAK_FUNC(sub_83BE9980);
PPC_FUNC_IMPL(__imp__sub_83BE9980) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x83BE9988;
	__savegprlr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,15
	ctx.r29.s64 = 15;
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stb r30,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r30.u8);
	// addi r31,r11,-23820
	ctx.r31.s64 = ctx.r11.s64 + -23820;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// bl 0x8259cc28
	ctx.lr = 0x83BE99B8;
	sub_8259CC28(ctx, base);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x83BE99D4;
	sub_8259CC28(ctx, base);
	// lis r7,-31760
	ctx.r7.s64 = -2081423360;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r31,r7,26864
	ctx.r31.s64 = ctx.r7.s64 + 26864;
	// li r28,-1
	ctx.r28.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,26864(r7)
	PPC_STORE_U32(ctx.r7.u32 + 26864, ctx.r11.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stb r30,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r30.u8);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// bl 0x8259cb28
	ctx.lr = 0x83BE9A14;
	sub_8259CB28(ctx, base);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stb r30,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r30.u8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r29,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// bl 0x8259cb28
	ctx.lr = 0x83BE9A40;
	sub_8259CB28(ctx, base);
	// lwz r6,116(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// li r28,2
	ctx.r28.s64 = 2;
	// cmplwi cr6,r6,16
	cr6.compare<uint32_t>(ctx.r6.u32, 16, xer);
	// blt cr6,0x83be9a68
	if (cr6.lt) goto loc_83BE9A68;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x83BE9A68;
	sub_825952B8(ctx, base);
loc_83BE9A68:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// blt cr6,0x83be9a90
	if (cr6.lt) goto loc_83BE9A90;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x83BE9A90;
	sub_825952B8(ctx, base);
loc_83BE9A90:
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// stb r30,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r30.u8);
	// addi r3,r11,-20896
	ctx.r3.s64 = ctx.r11.s64 + -20896;
	// bl 0x831cdcc8
	ctx.lr = 0x83BE9AA8;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE9AB0"))) PPC_WEAK_FUNC(sub_83BE9AB0);
PPC_FUNC_IMPL(__imp__sub_83BE9AB0) {
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
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// addi r4,r11,-23808
	ctx.r4.s64 = ctx.r11.s64 + -23808;
	// addi r3,r10,-12180
	ctx.r3.s64 = ctx.r10.s64 + -12180;
	// li r5,42
	ctx.r5.s64 = 42;
	// bl 0x8259cc28
	ctx.lr = 0x83BE9AD4;
	sub_8259CC28(ctx, base);
	// lis r9,-31790
	ctx.r9.s64 = -2083389440;
	// addi r3,r9,-20880
	ctx.r3.s64 = ctx.r9.s64 + -20880;
	// bl 0x831cdcc8
	ctx.lr = 0x83BE9AE0;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BE9AF0"))) PPC_WEAK_FUNC(sub_83BE9AF0);
PPC_FUNC_IMPL(__imp__sub_83BE9AF0) {
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
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// addi r4,r11,-23764
	ctx.r4.s64 = ctx.r11.s64 + -23764;
	// addi r3,r10,-12152
	ctx.r3.s64 = ctx.r10.s64 + -12152;
	// li r5,18
	ctx.r5.s64 = 18;
	// bl 0x8259cc28
	ctx.lr = 0x83BE9B14;
	sub_8259CC28(ctx, base);
	// lis r9,-31790
	ctx.r9.s64 = -2083389440;
	// addi r3,r9,-20776
	ctx.r3.s64 = ctx.r9.s64 + -20776;
	// bl 0x831cdcc8
	ctx.lr = 0x83BE9B20;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BE9B30"))) PPC_WEAK_FUNC(sub_83BE9B30);
PPC_FUNC_IMPL(__imp__sub_83BE9B30) {
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
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// addi r4,r11,-23692
	ctx.r4.s64 = ctx.r11.s64 + -23692;
	// addi r3,r10,-12124
	ctx.r3.s64 = ctx.r10.s64 + -12124;
	// li r5,26
	ctx.r5.s64 = 26;
	// bl 0x8259cc28
	ctx.lr = 0x83BE9B54;
	sub_8259CC28(ctx, base);
	// lis r9,-31790
	ctx.r9.s64 = -2083389440;
	// addi r3,r9,-20672
	ctx.r3.s64 = ctx.r9.s64 + -20672;
	// bl 0x831cdcc8
	ctx.lr = 0x83BE9B60;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BE9B70"))) PPC_WEAK_FUNC(sub_83BE9B70);
PPC_FUNC_IMPL(__imp__sub_83BE9B70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-20432
	ctx.r3.s64 = ctx.r11.s64 + -20432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE9B7C"))) PPC_WEAK_FUNC(sub_83BE9B7C);
PPC_FUNC_IMPL(__imp__sub_83BE9B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE9B80"))) PPC_WEAK_FUNC(sub_83BE9B80);
PPC_FUNC_IMPL(__imp__sub_83BE9B80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-20424
	ctx.r3.s64 = ctx.r11.s64 + -20424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE9B8C"))) PPC_WEAK_FUNC(sub_83BE9B8C);
PPC_FUNC_IMPL(__imp__sub_83BE9B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE9B90"))) PPC_WEAK_FUNC(sub_83BE9B90);
PPC_FUNC_IMPL(__imp__sub_83BE9B90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-20416
	ctx.r3.s64 = ctx.r11.s64 + -20416;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE9B9C"))) PPC_WEAK_FUNC(sub_83BE9B9C);
PPC_FUNC_IMPL(__imp__sub_83BE9B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE9BA0"))) PPC_WEAK_FUNC(sub_83BE9BA0);
PPC_FUNC_IMPL(__imp__sub_83BE9BA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-20408
	ctx.r3.s64 = ctx.r11.s64 + -20408;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE9BAC"))) PPC_WEAK_FUNC(sub_83BE9BAC);
PPC_FUNC_IMPL(__imp__sub_83BE9BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE9BB0"))) PPC_WEAK_FUNC(sub_83BE9BB0);
PPC_FUNC_IMPL(__imp__sub_83BE9BB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-20400
	ctx.r3.s64 = ctx.r11.s64 + -20400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE9BBC"))) PPC_WEAK_FUNC(sub_83BE9BBC);
PPC_FUNC_IMPL(__imp__sub_83BE9BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE9BC0"))) PPC_WEAK_FUNC(sub_83BE9BC0);
PPC_FUNC_IMPL(__imp__sub_83BE9BC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-20392
	ctx.r3.s64 = ctx.r11.s64 + -20392;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE9BCC"))) PPC_WEAK_FUNC(sub_83BE9BCC);
PPC_FUNC_IMPL(__imp__sub_83BE9BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE9BD0"))) PPC_WEAK_FUNC(sub_83BE9BD0);
PPC_FUNC_IMPL(__imp__sub_83BE9BD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-20384
	ctx.r3.s64 = ctx.r11.s64 + -20384;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE9BDC"))) PPC_WEAK_FUNC(sub_83BE9BDC);
PPC_FUNC_IMPL(__imp__sub_83BE9BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE9BE0"))) PPC_WEAK_FUNC(sub_83BE9BE0);
PPC_FUNC_IMPL(__imp__sub_83BE9BE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-20376
	ctx.r3.s64 = ctx.r11.s64 + -20376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE9BEC"))) PPC_WEAK_FUNC(sub_83BE9BEC);
PPC_FUNC_IMPL(__imp__sub_83BE9BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE9BF0"))) PPC_WEAK_FUNC(sub_83BE9BF0);
PPC_FUNC_IMPL(__imp__sub_83BE9BF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-20368
	ctx.r3.s64 = ctx.r11.s64 + -20368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE9BFC"))) PPC_WEAK_FUNC(sub_83BE9BFC);
PPC_FUNC_IMPL(__imp__sub_83BE9BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE9C00"))) PPC_WEAK_FUNC(sub_83BE9C00);
PPC_FUNC_IMPL(__imp__sub_83BE9C00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-20360
	ctx.r3.s64 = ctx.r11.s64 + -20360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE9C0C"))) PPC_WEAK_FUNC(sub_83BE9C0C);
PPC_FUNC_IMPL(__imp__sub_83BE9C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE9C10"))) PPC_WEAK_FUNC(sub_83BE9C10);
PPC_FUNC_IMPL(__imp__sub_83BE9C10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-20352
	ctx.r3.s64 = ctx.r11.s64 + -20352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE9C1C"))) PPC_WEAK_FUNC(sub_83BE9C1C);
PPC_FUNC_IMPL(__imp__sub_83BE9C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE9C20"))) PPC_WEAK_FUNC(sub_83BE9C20);
PPC_FUNC_IMPL(__imp__sub_83BE9C20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-20344
	ctx.r3.s64 = ctx.r11.s64 + -20344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE9C2C"))) PPC_WEAK_FUNC(sub_83BE9C2C);
PPC_FUNC_IMPL(__imp__sub_83BE9C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE9C30"))) PPC_WEAK_FUNC(sub_83BE9C30);
PPC_FUNC_IMPL(__imp__sub_83BE9C30) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,26932
	ctx.r3.s64 = ctx.r11.s64 + 26932;
	// bl 0x83523120
	ctx.lr = 0x83BE9C48;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-20336
	ctx.r3.s64 = ctx.r10.s64 + -20336;
	// bl 0x831cdcc8
	ctx.lr = 0x83BE9C54;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BE9C64"))) PPC_WEAK_FUNC(sub_83BE9C64);
PPC_FUNC_IMPL(__imp__sub_83BE9C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE9C68"))) PPC_WEAK_FUNC(sub_83BE9C68);
PPC_FUNC_IMPL(__imp__sub_83BE9C68) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,26948
	ctx.r7.s64 = ctx.r8.s64 + 26948;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,26948(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 26948);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,26948(r8)
	PPC_STORE_U32(ctx.r8.u32 + 26948, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BE9C90"))) PPC_WEAK_FUNC(sub_83BE9C90);
PPC_FUNC_IMPL(__imp__sub_83BE9C90) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-11980
	ctx.r6.s64 = ctx.r7.s64 + -11980;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-12052(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -12052);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,26948(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 26948);
	// oris r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 4294901760;
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
	// stw r11,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r11.u32);
	// stw r11,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r11.u32);
	// std r9,-11980(r7)
	PPC_STORE_U64(ctx.r7.u32 + -11980, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BE9CD8"))) PPC_WEAK_FUNC(sub_83BE9CD8);
PPC_FUNC_IMPL(__imp__sub_83BE9CD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-20320
	ctx.r3.s64 = ctx.r11.s64 + -20320;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE9CE4"))) PPC_WEAK_FUNC(sub_83BE9CE4);
PPC_FUNC_IMPL(__imp__sub_83BE9CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE9CE8"))) PPC_WEAK_FUNC(sub_83BE9CE8);
PPC_FUNC_IMPL(__imp__sub_83BE9CE8) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,26960
	ctx.r3.s64 = ctx.r11.s64 + 26960;
	// bl 0x8259af80
	ctx.lr = 0x83BE9D00;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-20304
	ctx.r3.s64 = ctx.r10.s64 + -20304;
	// bl 0x831cdcc8
	ctx.lr = 0x83BE9D0C;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BE9D1C"))) PPC_WEAK_FUNC(sub_83BE9D1C);
PPC_FUNC_IMPL(__imp__sub_83BE9D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE9D20"))) PPC_WEAK_FUNC(sub_83BE9D20);
PPC_FUNC_IMPL(__imp__sub_83BE9D20) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,26936
	ctx.r11.s64 = ctx.r8.s64 + 26936;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-12004(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -12004);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-20312
	ctx.r3.s64 = ctx.r6.s64 + -20312;
	// stw r10,26936(r8)
	PPC_STORE_U32(ctx.r8.u32 + 26936, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE9D50"))) PPC_WEAK_FUNC(sub_83BE9D50);
PPC_FUNC_IMPL(__imp__sub_83BE9D50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-20296
	ctx.r3.s64 = ctx.r11.s64 + -20296;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE9D5C"))) PPC_WEAK_FUNC(sub_83BE9D5C);
PPC_FUNC_IMPL(__imp__sub_83BE9D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE9D60"))) PPC_WEAK_FUNC(sub_83BE9D60);
PPC_FUNC_IMPL(__imp__sub_83BE9D60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-20288
	ctx.r3.s64 = ctx.r11.s64 + -20288;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE9D6C"))) PPC_WEAK_FUNC(sub_83BE9D6C);
PPC_FUNC_IMPL(__imp__sub_83BE9D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE9D70"))) PPC_WEAK_FUNC(sub_83BE9D70);
PPC_FUNC_IMPL(__imp__sub_83BE9D70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-20280
	ctx.r3.s64 = ctx.r11.s64 + -20280;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE9D7C"))) PPC_WEAK_FUNC(sub_83BE9D7C);
PPC_FUNC_IMPL(__imp__sub_83BE9D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE9D80"))) PPC_WEAK_FUNC(sub_83BE9D80);
PPC_FUNC_IMPL(__imp__sub_83BE9D80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-20272
	ctx.r3.s64 = ctx.r11.s64 + -20272;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE9D8C"))) PPC_WEAK_FUNC(sub_83BE9D8C);
PPC_FUNC_IMPL(__imp__sub_83BE9D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE9D90"))) PPC_WEAK_FUNC(sub_83BE9D90);
PPC_FUNC_IMPL(__imp__sub_83BE9D90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-20264
	ctx.r3.s64 = ctx.r11.s64 + -20264;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE9D9C"))) PPC_WEAK_FUNC(sub_83BE9D9C);
PPC_FUNC_IMPL(__imp__sub_83BE9D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE9DA0"))) PPC_WEAK_FUNC(sub_83BE9DA0);
PPC_FUNC_IMPL(__imp__sub_83BE9DA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-20256
	ctx.r3.s64 = ctx.r11.s64 + -20256;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE9DAC"))) PPC_WEAK_FUNC(sub_83BE9DAC);
PPC_FUNC_IMPL(__imp__sub_83BE9DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE9DB0"))) PPC_WEAK_FUNC(sub_83BE9DB0);
PPC_FUNC_IMPL(__imp__sub_83BE9DB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-20248
	ctx.r3.s64 = ctx.r11.s64 + -20248;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE9DBC"))) PPC_WEAK_FUNC(sub_83BE9DBC);
PPC_FUNC_IMPL(__imp__sub_83BE9DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE9DC0"))) PPC_WEAK_FUNC(sub_83BE9DC0);
PPC_FUNC_IMPL(__imp__sub_83BE9DC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-20240
	ctx.r3.s64 = ctx.r11.s64 + -20240;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE9DCC"))) PPC_WEAK_FUNC(sub_83BE9DCC);
PPC_FUNC_IMPL(__imp__sub_83BE9DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE9DD0"))) PPC_WEAK_FUNC(sub_83BE9DD0);
PPC_FUNC_IMPL(__imp__sub_83BE9DD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-20232
	ctx.r3.s64 = ctx.r11.s64 + -20232;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE9DDC"))) PPC_WEAK_FUNC(sub_83BE9DDC);
PPC_FUNC_IMPL(__imp__sub_83BE9DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE9DE0"))) PPC_WEAK_FUNC(sub_83BE9DE0);
PPC_FUNC_IMPL(__imp__sub_83BE9DE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-20224
	ctx.r3.s64 = ctx.r11.s64 + -20224;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE9DEC"))) PPC_WEAK_FUNC(sub_83BE9DEC);
PPC_FUNC_IMPL(__imp__sub_83BE9DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE9DF0"))) PPC_WEAK_FUNC(sub_83BE9DF0);
PPC_FUNC_IMPL(__imp__sub_83BE9DF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-20216
	ctx.r3.s64 = ctx.r11.s64 + -20216;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE9DFC"))) PPC_WEAK_FUNC(sub_83BE9DFC);
PPC_FUNC_IMPL(__imp__sub_83BE9DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE9E00"))) PPC_WEAK_FUNC(sub_83BE9E00);
PPC_FUNC_IMPL(__imp__sub_83BE9E00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-20208
	ctx.r3.s64 = ctx.r11.s64 + -20208;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE9E0C"))) PPC_WEAK_FUNC(sub_83BE9E0C);
PPC_FUNC_IMPL(__imp__sub_83BE9E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE9E10"))) PPC_WEAK_FUNC(sub_83BE9E10);
PPC_FUNC_IMPL(__imp__sub_83BE9E10) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,27304
	ctx.r3.s64 = ctx.r11.s64 + 27304;
	// bl 0x83523120
	ctx.lr = 0x83BE9E28;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-20200
	ctx.r3.s64 = ctx.r10.s64 + -20200;
	// bl 0x831cdcc8
	ctx.lr = 0x83BE9E34;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BE9E44"))) PPC_WEAK_FUNC(sub_83BE9E44);
PPC_FUNC_IMPL(__imp__sub_83BE9E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE9E48"))) PPC_WEAK_FUNC(sub_83BE9E48);
PPC_FUNC_IMPL(__imp__sub_83BE9E48) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,27320
	ctx.r7.s64 = ctx.r8.s64 + 27320;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,27320(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 27320);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,27320(r8)
	PPC_STORE_U32(ctx.r8.u32 + 27320, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BE9E70"))) PPC_WEAK_FUNC(sub_83BE9E70);
PPC_FUNC_IMPL(__imp__sub_83BE9E70) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-11840
	ctx.r6.s64 = ctx.r7.s64 + -11840;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-11912(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -11912);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,27320(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 27320);
	// oris r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 4294901760;
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
	// stw r11,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r11.u32);
	// stw r11,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r11.u32);
	// std r9,-11840(r7)
	PPC_STORE_U64(ctx.r7.u32 + -11840, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BE9EB8"))) PPC_WEAK_FUNC(sub_83BE9EB8);
PPC_FUNC_IMPL(__imp__sub_83BE9EB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-20184
	ctx.r3.s64 = ctx.r11.s64 + -20184;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE9EC4"))) PPC_WEAK_FUNC(sub_83BE9EC4);
PPC_FUNC_IMPL(__imp__sub_83BE9EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE9EC8"))) PPC_WEAK_FUNC(sub_83BE9EC8);
PPC_FUNC_IMPL(__imp__sub_83BE9EC8) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,27328
	ctx.r3.s64 = ctx.r11.s64 + 27328;
	// bl 0x8259af80
	ctx.lr = 0x83BE9EE0;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-20168
	ctx.r3.s64 = ctx.r10.s64 + -20168;
	// bl 0x831cdcc8
	ctx.lr = 0x83BE9EEC;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BE9EFC"))) PPC_WEAK_FUNC(sub_83BE9EFC);
PPC_FUNC_IMPL(__imp__sub_83BE9EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE9F00"))) PPC_WEAK_FUNC(sub_83BE9F00);
PPC_FUNC_IMPL(__imp__sub_83BE9F00) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,27308
	ctx.r11.s64 = ctx.r8.s64 + 27308;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-11864(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -11864);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-20176
	ctx.r3.s64 = ctx.r6.s64 + -20176;
	// stw r10,27308(r8)
	PPC_STORE_U32(ctx.r8.u32 + 27308, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE9F30"))) PPC_WEAK_FUNC(sub_83BE9F30);
PPC_FUNC_IMPL(__imp__sub_83BE9F30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-20160
	ctx.r3.s64 = ctx.r11.s64 + -20160;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE9F3C"))) PPC_WEAK_FUNC(sub_83BE9F3C);
PPC_FUNC_IMPL(__imp__sub_83BE9F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE9F40"))) PPC_WEAK_FUNC(sub_83BE9F40);
PPC_FUNC_IMPL(__imp__sub_83BE9F40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-20152
	ctx.r3.s64 = ctx.r11.s64 + -20152;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE9F4C"))) PPC_WEAK_FUNC(sub_83BE9F4C);
PPC_FUNC_IMPL(__imp__sub_83BE9F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE9F50"))) PPC_WEAK_FUNC(sub_83BE9F50);
PPC_FUNC_IMPL(__imp__sub_83BE9F50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-20144
	ctx.r3.s64 = ctx.r11.s64 + -20144;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE9F5C"))) PPC_WEAK_FUNC(sub_83BE9F5C);
PPC_FUNC_IMPL(__imp__sub_83BE9F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE9F60"))) PPC_WEAK_FUNC(sub_83BE9F60);
PPC_FUNC_IMPL(__imp__sub_83BE9F60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-20136
	ctx.r3.s64 = ctx.r11.s64 + -20136;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE9F6C"))) PPC_WEAK_FUNC(sub_83BE9F6C);
PPC_FUNC_IMPL(__imp__sub_83BE9F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE9F70"))) PPC_WEAK_FUNC(sub_83BE9F70);
PPC_FUNC_IMPL(__imp__sub_83BE9F70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-20128
	ctx.r3.s64 = ctx.r11.s64 + -20128;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE9F7C"))) PPC_WEAK_FUNC(sub_83BE9F7C);
PPC_FUNC_IMPL(__imp__sub_83BE9F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE9F80"))) PPC_WEAK_FUNC(sub_83BE9F80);
PPC_FUNC_IMPL(__imp__sub_83BE9F80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-20120
	ctx.r3.s64 = ctx.r11.s64 + -20120;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE9F8C"))) PPC_WEAK_FUNC(sub_83BE9F8C);
PPC_FUNC_IMPL(__imp__sub_83BE9F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE9F90"))) PPC_WEAK_FUNC(sub_83BE9F90);
PPC_FUNC_IMPL(__imp__sub_83BE9F90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-20112
	ctx.r3.s64 = ctx.r11.s64 + -20112;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE9F9C"))) PPC_WEAK_FUNC(sub_83BE9F9C);
PPC_FUNC_IMPL(__imp__sub_83BE9F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE9FA0"))) PPC_WEAK_FUNC(sub_83BE9FA0);
PPC_FUNC_IMPL(__imp__sub_83BE9FA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-20104
	ctx.r3.s64 = ctx.r11.s64 + -20104;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE9FAC"))) PPC_WEAK_FUNC(sub_83BE9FAC);
PPC_FUNC_IMPL(__imp__sub_83BE9FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE9FB0"))) PPC_WEAK_FUNC(sub_83BE9FB0);
PPC_FUNC_IMPL(__imp__sub_83BE9FB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-20096
	ctx.r3.s64 = ctx.r11.s64 + -20096;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE9FBC"))) PPC_WEAK_FUNC(sub_83BE9FBC);
PPC_FUNC_IMPL(__imp__sub_83BE9FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE9FC0"))) PPC_WEAK_FUNC(sub_83BE9FC0);
PPC_FUNC_IMPL(__imp__sub_83BE9FC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-20088
	ctx.r3.s64 = ctx.r11.s64 + -20088;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE9FCC"))) PPC_WEAK_FUNC(sub_83BE9FCC);
PPC_FUNC_IMPL(__imp__sub_83BE9FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE9FD0"))) PPC_WEAK_FUNC(sub_83BE9FD0);
PPC_FUNC_IMPL(__imp__sub_83BE9FD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-20080
	ctx.r3.s64 = ctx.r11.s64 + -20080;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE9FDC"))) PPC_WEAK_FUNC(sub_83BE9FDC);
PPC_FUNC_IMPL(__imp__sub_83BE9FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE9FE0"))) PPC_WEAK_FUNC(sub_83BE9FE0);
PPC_FUNC_IMPL(__imp__sub_83BE9FE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-20072
	ctx.r3.s64 = ctx.r11.s64 + -20072;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BE9FEC"))) PPC_WEAK_FUNC(sub_83BE9FEC);
PPC_FUNC_IMPL(__imp__sub_83BE9FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BE9FF0"))) PPC_WEAK_FUNC(sub_83BE9FF0);
PPC_FUNC_IMPL(__imp__sub_83BE9FF0) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,27672
	ctx.r3.s64 = ctx.r11.s64 + 27672;
	// bl 0x83523120
	ctx.lr = 0x83BEA008;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-20064
	ctx.r3.s64 = ctx.r10.s64 + -20064;
	// bl 0x831cdcc8
	ctx.lr = 0x83BEA014;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BEA024"))) PPC_WEAK_FUNC(sub_83BEA024);
PPC_FUNC_IMPL(__imp__sub_83BEA024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEA028"))) PPC_WEAK_FUNC(sub_83BEA028);
PPC_FUNC_IMPL(__imp__sub_83BEA028) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,27688
	ctx.r7.s64 = ctx.r8.s64 + 27688;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,27688(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 27688);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,27688(r8)
	PPC_STORE_U32(ctx.r8.u32 + 27688, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BEA050"))) PPC_WEAK_FUNC(sub_83BEA050);
PPC_FUNC_IMPL(__imp__sub_83BEA050) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-11704
	ctx.r6.s64 = ctx.r7.s64 + -11704;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-11776(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -11776);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,27688(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 27688);
	// oris r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 4294901760;
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
	// stw r11,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r11.u32);
	// stw r11,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r11.u32);
	// std r9,-11704(r7)
	PPC_STORE_U64(ctx.r7.u32 + -11704, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BEA098"))) PPC_WEAK_FUNC(sub_83BEA098);
PPC_FUNC_IMPL(__imp__sub_83BEA098) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-20048
	ctx.r3.s64 = ctx.r11.s64 + -20048;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEA0A4"))) PPC_WEAK_FUNC(sub_83BEA0A4);
PPC_FUNC_IMPL(__imp__sub_83BEA0A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEA0A8"))) PPC_WEAK_FUNC(sub_83BEA0A8);
PPC_FUNC_IMPL(__imp__sub_83BEA0A8) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,27696
	ctx.r3.s64 = ctx.r11.s64 + 27696;
	// bl 0x8259af80
	ctx.lr = 0x83BEA0C0;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-20032
	ctx.r3.s64 = ctx.r10.s64 + -20032;
	// bl 0x831cdcc8
	ctx.lr = 0x83BEA0CC;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BEA0DC"))) PPC_WEAK_FUNC(sub_83BEA0DC);
PPC_FUNC_IMPL(__imp__sub_83BEA0DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEA0E0"))) PPC_WEAK_FUNC(sub_83BEA0E0);
PPC_FUNC_IMPL(__imp__sub_83BEA0E0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,27676
	ctx.r11.s64 = ctx.r8.s64 + 27676;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-11728(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -11728);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-20040
	ctx.r3.s64 = ctx.r6.s64 + -20040;
	// stw r10,27676(r8)
	PPC_STORE_U32(ctx.r8.u32 + 27676, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEA110"))) PPC_WEAK_FUNC(sub_83BEA110);
PPC_FUNC_IMPL(__imp__sub_83BEA110) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-20024
	ctx.r3.s64 = ctx.r11.s64 + -20024;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEA11C"))) PPC_WEAK_FUNC(sub_83BEA11C);
PPC_FUNC_IMPL(__imp__sub_83BEA11C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEA120"))) PPC_WEAK_FUNC(sub_83BEA120);
PPC_FUNC_IMPL(__imp__sub_83BEA120) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-20016
	ctx.r3.s64 = ctx.r11.s64 + -20016;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEA12C"))) PPC_WEAK_FUNC(sub_83BEA12C);
PPC_FUNC_IMPL(__imp__sub_83BEA12C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEA130"))) PPC_WEAK_FUNC(sub_83BEA130);
PPC_FUNC_IMPL(__imp__sub_83BEA130) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-20008
	ctx.r3.s64 = ctx.r11.s64 + -20008;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEA13C"))) PPC_WEAK_FUNC(sub_83BEA13C);
PPC_FUNC_IMPL(__imp__sub_83BEA13C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEA140"))) PPC_WEAK_FUNC(sub_83BEA140);
PPC_FUNC_IMPL(__imp__sub_83BEA140) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-20000
	ctx.r3.s64 = ctx.r11.s64 + -20000;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEA14C"))) PPC_WEAK_FUNC(sub_83BEA14C);
PPC_FUNC_IMPL(__imp__sub_83BEA14C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEA150"))) PPC_WEAK_FUNC(sub_83BEA150);
PPC_FUNC_IMPL(__imp__sub_83BEA150) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-19992
	ctx.r3.s64 = ctx.r11.s64 + -19992;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEA15C"))) PPC_WEAK_FUNC(sub_83BEA15C);
PPC_FUNC_IMPL(__imp__sub_83BEA15C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEA160"))) PPC_WEAK_FUNC(sub_83BEA160);
PPC_FUNC_IMPL(__imp__sub_83BEA160) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-19984
	ctx.r3.s64 = ctx.r11.s64 + -19984;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEA16C"))) PPC_WEAK_FUNC(sub_83BEA16C);
PPC_FUNC_IMPL(__imp__sub_83BEA16C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEA170"))) PPC_WEAK_FUNC(sub_83BEA170);
PPC_FUNC_IMPL(__imp__sub_83BEA170) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-19976
	ctx.r3.s64 = ctx.r11.s64 + -19976;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEA17C"))) PPC_WEAK_FUNC(sub_83BEA17C);
PPC_FUNC_IMPL(__imp__sub_83BEA17C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEA180"))) PPC_WEAK_FUNC(sub_83BEA180);
PPC_FUNC_IMPL(__imp__sub_83BEA180) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-19968
	ctx.r3.s64 = ctx.r11.s64 + -19968;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEA18C"))) PPC_WEAK_FUNC(sub_83BEA18C);
PPC_FUNC_IMPL(__imp__sub_83BEA18C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEA190"))) PPC_WEAK_FUNC(sub_83BEA190);
PPC_FUNC_IMPL(__imp__sub_83BEA190) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-19960
	ctx.r3.s64 = ctx.r11.s64 + -19960;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEA19C"))) PPC_WEAK_FUNC(sub_83BEA19C);
PPC_FUNC_IMPL(__imp__sub_83BEA19C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEA1A0"))) PPC_WEAK_FUNC(sub_83BEA1A0);
PPC_FUNC_IMPL(__imp__sub_83BEA1A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-19952
	ctx.r3.s64 = ctx.r11.s64 + -19952;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEA1AC"))) PPC_WEAK_FUNC(sub_83BEA1AC);
PPC_FUNC_IMPL(__imp__sub_83BEA1AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEA1B0"))) PPC_WEAK_FUNC(sub_83BEA1B0);
PPC_FUNC_IMPL(__imp__sub_83BEA1B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-19944
	ctx.r3.s64 = ctx.r11.s64 + -19944;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEA1BC"))) PPC_WEAK_FUNC(sub_83BEA1BC);
PPC_FUNC_IMPL(__imp__sub_83BEA1BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEA1C0"))) PPC_WEAK_FUNC(sub_83BEA1C0);
PPC_FUNC_IMPL(__imp__sub_83BEA1C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-19936
	ctx.r3.s64 = ctx.r11.s64 + -19936;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEA1CC"))) PPC_WEAK_FUNC(sub_83BEA1CC);
PPC_FUNC_IMPL(__imp__sub_83BEA1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEA1D0"))) PPC_WEAK_FUNC(sub_83BEA1D0);
PPC_FUNC_IMPL(__imp__sub_83BEA1D0) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,28040
	ctx.r3.s64 = ctx.r11.s64 + 28040;
	// bl 0x83523120
	ctx.lr = 0x83BEA1E8;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-19928
	ctx.r3.s64 = ctx.r10.s64 + -19928;
	// bl 0x831cdcc8
	ctx.lr = 0x83BEA1F4;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BEA204"))) PPC_WEAK_FUNC(sub_83BEA204);
PPC_FUNC_IMPL(__imp__sub_83BEA204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEA208"))) PPC_WEAK_FUNC(sub_83BEA208);
PPC_FUNC_IMPL(__imp__sub_83BEA208) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,28056
	ctx.r7.s64 = ctx.r8.s64 + 28056;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,28056(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28056);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,28056(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28056, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BEA230"))) PPC_WEAK_FUNC(sub_83BEA230);
PPC_FUNC_IMPL(__imp__sub_83BEA230) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-11564
	ctx.r6.s64 = ctx.r7.s64 + -11564;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-11636(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -11636);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,28056(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28056);
	// oris r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 4294901760;
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
	// stw r11,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r11.u32);
	// stw r11,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r11.u32);
	// std r9,-11564(r7)
	PPC_STORE_U64(ctx.r7.u32 + -11564, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BEA278"))) PPC_WEAK_FUNC(sub_83BEA278);
PPC_FUNC_IMPL(__imp__sub_83BEA278) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-19912
	ctx.r3.s64 = ctx.r11.s64 + -19912;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEA284"))) PPC_WEAK_FUNC(sub_83BEA284);
PPC_FUNC_IMPL(__imp__sub_83BEA284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEA288"))) PPC_WEAK_FUNC(sub_83BEA288);
PPC_FUNC_IMPL(__imp__sub_83BEA288) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,28064
	ctx.r3.s64 = ctx.r11.s64 + 28064;
	// bl 0x8259af80
	ctx.lr = 0x83BEA2A0;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-19896
	ctx.r3.s64 = ctx.r10.s64 + -19896;
	// bl 0x831cdcc8
	ctx.lr = 0x83BEA2AC;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BEA2BC"))) PPC_WEAK_FUNC(sub_83BEA2BC);
PPC_FUNC_IMPL(__imp__sub_83BEA2BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEA2C0"))) PPC_WEAK_FUNC(sub_83BEA2C0);
PPC_FUNC_IMPL(__imp__sub_83BEA2C0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,28044
	ctx.r11.s64 = ctx.r8.s64 + 28044;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-11588(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -11588);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-19904
	ctx.r3.s64 = ctx.r6.s64 + -19904;
	// stw r10,28044(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28044, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEA2F0"))) PPC_WEAK_FUNC(sub_83BEA2F0);
PPC_FUNC_IMPL(__imp__sub_83BEA2F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-19888
	ctx.r3.s64 = ctx.r11.s64 + -19888;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEA2FC"))) PPC_WEAK_FUNC(sub_83BEA2FC);
PPC_FUNC_IMPL(__imp__sub_83BEA2FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEA300"))) PPC_WEAK_FUNC(sub_83BEA300);
PPC_FUNC_IMPL(__imp__sub_83BEA300) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-19880
	ctx.r3.s64 = ctx.r11.s64 + -19880;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEA30C"))) PPC_WEAK_FUNC(sub_83BEA30C);
PPC_FUNC_IMPL(__imp__sub_83BEA30C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEA310"))) PPC_WEAK_FUNC(sub_83BEA310);
PPC_FUNC_IMPL(__imp__sub_83BEA310) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-19872
	ctx.r3.s64 = ctx.r11.s64 + -19872;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEA31C"))) PPC_WEAK_FUNC(sub_83BEA31C);
PPC_FUNC_IMPL(__imp__sub_83BEA31C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEA320"))) PPC_WEAK_FUNC(sub_83BEA320);
PPC_FUNC_IMPL(__imp__sub_83BEA320) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-19864
	ctx.r3.s64 = ctx.r11.s64 + -19864;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEA32C"))) PPC_WEAK_FUNC(sub_83BEA32C);
PPC_FUNC_IMPL(__imp__sub_83BEA32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEA330"))) PPC_WEAK_FUNC(sub_83BEA330);
PPC_FUNC_IMPL(__imp__sub_83BEA330) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-19856
	ctx.r3.s64 = ctx.r11.s64 + -19856;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEA33C"))) PPC_WEAK_FUNC(sub_83BEA33C);
PPC_FUNC_IMPL(__imp__sub_83BEA33C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEA340"))) PPC_WEAK_FUNC(sub_83BEA340);
PPC_FUNC_IMPL(__imp__sub_83BEA340) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-19848
	ctx.r3.s64 = ctx.r11.s64 + -19848;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEA34C"))) PPC_WEAK_FUNC(sub_83BEA34C);
PPC_FUNC_IMPL(__imp__sub_83BEA34C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEA350"))) PPC_WEAK_FUNC(sub_83BEA350);
PPC_FUNC_IMPL(__imp__sub_83BEA350) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-19840
	ctx.r3.s64 = ctx.r11.s64 + -19840;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEA35C"))) PPC_WEAK_FUNC(sub_83BEA35C);
PPC_FUNC_IMPL(__imp__sub_83BEA35C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEA360"))) PPC_WEAK_FUNC(sub_83BEA360);
PPC_FUNC_IMPL(__imp__sub_83BEA360) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-19832
	ctx.r3.s64 = ctx.r11.s64 + -19832;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEA36C"))) PPC_WEAK_FUNC(sub_83BEA36C);
PPC_FUNC_IMPL(__imp__sub_83BEA36C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEA370"))) PPC_WEAK_FUNC(sub_83BEA370);
PPC_FUNC_IMPL(__imp__sub_83BEA370) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-19824
	ctx.r3.s64 = ctx.r11.s64 + -19824;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEA37C"))) PPC_WEAK_FUNC(sub_83BEA37C);
PPC_FUNC_IMPL(__imp__sub_83BEA37C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEA380"))) PPC_WEAK_FUNC(sub_83BEA380);
PPC_FUNC_IMPL(__imp__sub_83BEA380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-19816
	ctx.r3.s64 = ctx.r11.s64 + -19816;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEA38C"))) PPC_WEAK_FUNC(sub_83BEA38C);
PPC_FUNC_IMPL(__imp__sub_83BEA38C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEA390"))) PPC_WEAK_FUNC(sub_83BEA390);
PPC_FUNC_IMPL(__imp__sub_83BEA390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-19808
	ctx.r3.s64 = ctx.r11.s64 + -19808;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEA39C"))) PPC_WEAK_FUNC(sub_83BEA39C);
PPC_FUNC_IMPL(__imp__sub_83BEA39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEA3A0"))) PPC_WEAK_FUNC(sub_83BEA3A0);
PPC_FUNC_IMPL(__imp__sub_83BEA3A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-19800
	ctx.r3.s64 = ctx.r11.s64 + -19800;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEA3AC"))) PPC_WEAK_FUNC(sub_83BEA3AC);
PPC_FUNC_IMPL(__imp__sub_83BEA3AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEA3B0"))) PPC_WEAK_FUNC(sub_83BEA3B0);
PPC_FUNC_IMPL(__imp__sub_83BEA3B0) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,28408
	ctx.r3.s64 = ctx.r11.s64 + 28408;
	// bl 0x83523120
	ctx.lr = 0x83BEA3C8;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-19792
	ctx.r3.s64 = ctx.r10.s64 + -19792;
	// bl 0x831cdcc8
	ctx.lr = 0x83BEA3D4;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BEA3E4"))) PPC_WEAK_FUNC(sub_83BEA3E4);
PPC_FUNC_IMPL(__imp__sub_83BEA3E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEA3E8"))) PPC_WEAK_FUNC(sub_83BEA3E8);
PPC_FUNC_IMPL(__imp__sub_83BEA3E8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,28424
	ctx.r7.s64 = ctx.r8.s64 + 28424;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,28424(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28424);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,28424(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28424, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BEA410"))) PPC_WEAK_FUNC(sub_83BEA410);
PPC_FUNC_IMPL(__imp__sub_83BEA410) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-11356
	ctx.r6.s64 = ctx.r7.s64 + -11356;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-11428(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -11428);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,28424(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28424);
	// oris r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 4294901760;
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
	// stw r11,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r11.u32);
	// stw r11,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r11.u32);
	// std r9,-11356(r7)
	PPC_STORE_U64(ctx.r7.u32 + -11356, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BEA458"))) PPC_WEAK_FUNC(sub_83BEA458);
PPC_FUNC_IMPL(__imp__sub_83BEA458) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-19776
	ctx.r3.s64 = ctx.r11.s64 + -19776;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEA464"))) PPC_WEAK_FUNC(sub_83BEA464);
PPC_FUNC_IMPL(__imp__sub_83BEA464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEA468"))) PPC_WEAK_FUNC(sub_83BEA468);
PPC_FUNC_IMPL(__imp__sub_83BEA468) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,28432
	ctx.r3.s64 = ctx.r11.s64 + 28432;
	// bl 0x8259af80
	ctx.lr = 0x83BEA480;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-19760
	ctx.r3.s64 = ctx.r10.s64 + -19760;
	// bl 0x831cdcc8
	ctx.lr = 0x83BEA48C;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BEA49C"))) PPC_WEAK_FUNC(sub_83BEA49C);
PPC_FUNC_IMPL(__imp__sub_83BEA49C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEA4A0"))) PPC_WEAK_FUNC(sub_83BEA4A0);
PPC_FUNC_IMPL(__imp__sub_83BEA4A0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,28412
	ctx.r11.s64 = ctx.r8.s64 + 28412;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-11380(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -11380);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-19768
	ctx.r3.s64 = ctx.r6.s64 + -19768;
	// stw r10,28412(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28412, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEA4D0"))) PPC_WEAK_FUNC(sub_83BEA4D0);
PPC_FUNC_IMPL(__imp__sub_83BEA4D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-19752
	ctx.r3.s64 = ctx.r11.s64 + -19752;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEA4DC"))) PPC_WEAK_FUNC(sub_83BEA4DC);
PPC_FUNC_IMPL(__imp__sub_83BEA4DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEA4E0"))) PPC_WEAK_FUNC(sub_83BEA4E0);
PPC_FUNC_IMPL(__imp__sub_83BEA4E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-19744
	ctx.r3.s64 = ctx.r11.s64 + -19744;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEA4EC"))) PPC_WEAK_FUNC(sub_83BEA4EC);
PPC_FUNC_IMPL(__imp__sub_83BEA4EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEA4F0"))) PPC_WEAK_FUNC(sub_83BEA4F0);
PPC_FUNC_IMPL(__imp__sub_83BEA4F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-19736
	ctx.r3.s64 = ctx.r11.s64 + -19736;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEA4FC"))) PPC_WEAK_FUNC(sub_83BEA4FC);
PPC_FUNC_IMPL(__imp__sub_83BEA4FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEA500"))) PPC_WEAK_FUNC(sub_83BEA500);
PPC_FUNC_IMPL(__imp__sub_83BEA500) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-19728
	ctx.r3.s64 = ctx.r11.s64 + -19728;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEA50C"))) PPC_WEAK_FUNC(sub_83BEA50C);
PPC_FUNC_IMPL(__imp__sub_83BEA50C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEA510"))) PPC_WEAK_FUNC(sub_83BEA510);
PPC_FUNC_IMPL(__imp__sub_83BEA510) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-19720
	ctx.r3.s64 = ctx.r11.s64 + -19720;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEA51C"))) PPC_WEAK_FUNC(sub_83BEA51C);
PPC_FUNC_IMPL(__imp__sub_83BEA51C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEA520"))) PPC_WEAK_FUNC(sub_83BEA520);
PPC_FUNC_IMPL(__imp__sub_83BEA520) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-19712
	ctx.r3.s64 = ctx.r11.s64 + -19712;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEA52C"))) PPC_WEAK_FUNC(sub_83BEA52C);
PPC_FUNC_IMPL(__imp__sub_83BEA52C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEA530"))) PPC_WEAK_FUNC(sub_83BEA530);
PPC_FUNC_IMPL(__imp__sub_83BEA530) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-19704
	ctx.r3.s64 = ctx.r11.s64 + -19704;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEA53C"))) PPC_WEAK_FUNC(sub_83BEA53C);
PPC_FUNC_IMPL(__imp__sub_83BEA53C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEA540"))) PPC_WEAK_FUNC(sub_83BEA540);
PPC_FUNC_IMPL(__imp__sub_83BEA540) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-19696
	ctx.r3.s64 = ctx.r11.s64 + -19696;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEA54C"))) PPC_WEAK_FUNC(sub_83BEA54C);
PPC_FUNC_IMPL(__imp__sub_83BEA54C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEA550"))) PPC_WEAK_FUNC(sub_83BEA550);
PPC_FUNC_IMPL(__imp__sub_83BEA550) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-19688
	ctx.r3.s64 = ctx.r11.s64 + -19688;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEA55C"))) PPC_WEAK_FUNC(sub_83BEA55C);
PPC_FUNC_IMPL(__imp__sub_83BEA55C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEA560"))) PPC_WEAK_FUNC(sub_83BEA560);
PPC_FUNC_IMPL(__imp__sub_83BEA560) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-19680
	ctx.r3.s64 = ctx.r11.s64 + -19680;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEA56C"))) PPC_WEAK_FUNC(sub_83BEA56C);
PPC_FUNC_IMPL(__imp__sub_83BEA56C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEA570"))) PPC_WEAK_FUNC(sub_83BEA570);
PPC_FUNC_IMPL(__imp__sub_83BEA570) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-19672
	ctx.r3.s64 = ctx.r11.s64 + -19672;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEA57C"))) PPC_WEAK_FUNC(sub_83BEA57C);
PPC_FUNC_IMPL(__imp__sub_83BEA57C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEA580"))) PPC_WEAK_FUNC(sub_83BEA580);
PPC_FUNC_IMPL(__imp__sub_83BEA580) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-19664
	ctx.r3.s64 = ctx.r11.s64 + -19664;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEA58C"))) PPC_WEAK_FUNC(sub_83BEA58C);
PPC_FUNC_IMPL(__imp__sub_83BEA58C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEA590"))) PPC_WEAK_FUNC(sub_83BEA590);
PPC_FUNC_IMPL(__imp__sub_83BEA590) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,28776
	ctx.r3.s64 = ctx.r11.s64 + 28776;
	// bl 0x83523120
	ctx.lr = 0x83BEA5A8;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-19656
	ctx.r3.s64 = ctx.r10.s64 + -19656;
	// bl 0x831cdcc8
	ctx.lr = 0x83BEA5B4;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BEA5C4"))) PPC_WEAK_FUNC(sub_83BEA5C4);
PPC_FUNC_IMPL(__imp__sub_83BEA5C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEA5C8"))) PPC_WEAK_FUNC(sub_83BEA5C8);
PPC_FUNC_IMPL(__imp__sub_83BEA5C8) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,28792
	ctx.r7.s64 = ctx.r8.s64 + 28792;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,28792(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28792);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,28792(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28792, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BEA5F0"))) PPC_WEAK_FUNC(sub_83BEA5F0);
PPC_FUNC_IMPL(__imp__sub_83BEA5F0) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-11212
	ctx.r6.s64 = ctx.r7.s64 + -11212;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-11284(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -11284);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,28792(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28792);
	// oris r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 4294901760;
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
	// stw r11,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r11.u32);
	// stw r11,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r11.u32);
	// std r9,-11212(r7)
	PPC_STORE_U64(ctx.r7.u32 + -11212, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BEA638"))) PPC_WEAK_FUNC(sub_83BEA638);
PPC_FUNC_IMPL(__imp__sub_83BEA638) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-19640
	ctx.r3.s64 = ctx.r11.s64 + -19640;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEA644"))) PPC_WEAK_FUNC(sub_83BEA644);
PPC_FUNC_IMPL(__imp__sub_83BEA644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEA648"))) PPC_WEAK_FUNC(sub_83BEA648);
PPC_FUNC_IMPL(__imp__sub_83BEA648) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,28800
	ctx.r3.s64 = ctx.r11.s64 + 28800;
	// bl 0x8259af80
	ctx.lr = 0x83BEA660;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-19624
	ctx.r3.s64 = ctx.r10.s64 + -19624;
	// bl 0x831cdcc8
	ctx.lr = 0x83BEA66C;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BEA67C"))) PPC_WEAK_FUNC(sub_83BEA67C);
PPC_FUNC_IMPL(__imp__sub_83BEA67C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEA680"))) PPC_WEAK_FUNC(sub_83BEA680);
PPC_FUNC_IMPL(__imp__sub_83BEA680) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,28780
	ctx.r11.s64 = ctx.r8.s64 + 28780;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-11236(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -11236);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-19632
	ctx.r3.s64 = ctx.r6.s64 + -19632;
	// stw r10,28780(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28780, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEA6B0"))) PPC_WEAK_FUNC(sub_83BEA6B0);
PPC_FUNC_IMPL(__imp__sub_83BEA6B0) {
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
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r31,r11,-11184
	ctx.r31.s64 = ctx.r11.s64 + -11184;
	// addi r30,r10,-14828
	ctx.r30.s64 = ctx.r10.s64 + -14828;
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r4,r30,1740
	ctx.r4.s64 = ctx.r30.s64 + 1740;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x8259cc28
	ctx.lr = 0x83BEA6E4;
	sub_8259CC28(ctx, base);
	// lis r11,550
	ctx.r11.s64 = 36044800;
	// li r10,15
	ctx.r10.s64 = 15;
	// ori r11,r11,531
	ctx.r11.u64 = ctx.r11.u64 | 531;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r9.u32);
	// addi r4,r30,1724
	ctx.r4.s64 = ctx.r30.s64 + 1724;
	// stb r11,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r11.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x8259cc28
	ctx.lr = 0x83BEA718;
	sub_8259CC28(ctx, base);
	// lis r11,550
	ctx.r11.s64 = 36044800;
	// li r10,15
	ctx.r10.s64 = 15;
	// ori r11,r11,532
	ctx.r11.u64 = ctx.r11.u64 | 532;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r9.u32);
	// addi r4,r30,1708
	ctx.r4.s64 = ctx.r30.s64 + 1708;
	// stb r11,68(r31)
	PPC_STORE_U8(ctx.r31.u32 + 68, ctx.r11.u8);
	// li r5,13
	ctx.r5.s64 = 13;
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x8259cc28
	ctx.lr = 0x83BEA74C;
	sub_8259CC28(ctx, base);
	// lis r11,932
	ctx.r11.s64 = 61079552;
	// li r10,15
	ctx.r10.s64 = 15;
	// ori r11,r11,20
	ctx.r11.u64 = ctx.r11.u64 | 20;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r10.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r9.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r11,100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 100, ctx.r11.u8);
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x8259cc28
	ctx.lr = 0x83BEA780;
	sub_8259CC28(ctx, base);
	// lis r9,-31790
	ctx.r9.s64 = -2083389440;
	// addi r3,r9,-19616
	ctx.r3.s64 = ctx.r9.s64 + -19616;
	// bl 0x831cdcc8
	ctx.lr = 0x83BEA78C;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BEA7A4"))) PPC_WEAK_FUNC(sub_83BEA7A4);
PPC_FUNC_IMPL(__imp__sub_83BEA7A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEA7A8"))) PPC_WEAK_FUNC(sub_83BEA7A8);
PPC_FUNC_IMPL(__imp__sub_83BEA7A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-19512
	ctx.r3.s64 = ctx.r11.s64 + -19512;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEA7B4"))) PPC_WEAK_FUNC(sub_83BEA7B4);
PPC_FUNC_IMPL(__imp__sub_83BEA7B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEA7B8"))) PPC_WEAK_FUNC(sub_83BEA7B8);
PPC_FUNC_IMPL(__imp__sub_83BEA7B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-19504
	ctx.r3.s64 = ctx.r11.s64 + -19504;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEA7C4"))) PPC_WEAK_FUNC(sub_83BEA7C4);
PPC_FUNC_IMPL(__imp__sub_83BEA7C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEA7C8"))) PPC_WEAK_FUNC(sub_83BEA7C8);
PPC_FUNC_IMPL(__imp__sub_83BEA7C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-19496
	ctx.r3.s64 = ctx.r11.s64 + -19496;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEA7D4"))) PPC_WEAK_FUNC(sub_83BEA7D4);
PPC_FUNC_IMPL(__imp__sub_83BEA7D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEA7D8"))) PPC_WEAK_FUNC(sub_83BEA7D8);
PPC_FUNC_IMPL(__imp__sub_83BEA7D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-19488
	ctx.r3.s64 = ctx.r11.s64 + -19488;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEA7E4"))) PPC_WEAK_FUNC(sub_83BEA7E4);
PPC_FUNC_IMPL(__imp__sub_83BEA7E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEA7E8"))) PPC_WEAK_FUNC(sub_83BEA7E8);
PPC_FUNC_IMPL(__imp__sub_83BEA7E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-19480
	ctx.r3.s64 = ctx.r11.s64 + -19480;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEA7F4"))) PPC_WEAK_FUNC(sub_83BEA7F4);
PPC_FUNC_IMPL(__imp__sub_83BEA7F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEA7F8"))) PPC_WEAK_FUNC(sub_83BEA7F8);
PPC_FUNC_IMPL(__imp__sub_83BEA7F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-19472
	ctx.r3.s64 = ctx.r11.s64 + -19472;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEA804"))) PPC_WEAK_FUNC(sub_83BEA804);
PPC_FUNC_IMPL(__imp__sub_83BEA804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEA808"))) PPC_WEAK_FUNC(sub_83BEA808);
PPC_FUNC_IMPL(__imp__sub_83BEA808) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-19464
	ctx.r3.s64 = ctx.r11.s64 + -19464;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEA814"))) PPC_WEAK_FUNC(sub_83BEA814);
PPC_FUNC_IMPL(__imp__sub_83BEA814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEA818"))) PPC_WEAK_FUNC(sub_83BEA818);
PPC_FUNC_IMPL(__imp__sub_83BEA818) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-19456
	ctx.r3.s64 = ctx.r11.s64 + -19456;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEA824"))) PPC_WEAK_FUNC(sub_83BEA824);
PPC_FUNC_IMPL(__imp__sub_83BEA824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEA828"))) PPC_WEAK_FUNC(sub_83BEA828);
PPC_FUNC_IMPL(__imp__sub_83BEA828) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-19448
	ctx.r3.s64 = ctx.r11.s64 + -19448;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEA834"))) PPC_WEAK_FUNC(sub_83BEA834);
PPC_FUNC_IMPL(__imp__sub_83BEA834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEA838"))) PPC_WEAK_FUNC(sub_83BEA838);
PPC_FUNC_IMPL(__imp__sub_83BEA838) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-19440
	ctx.r3.s64 = ctx.r11.s64 + -19440;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEA844"))) PPC_WEAK_FUNC(sub_83BEA844);
PPC_FUNC_IMPL(__imp__sub_83BEA844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEA848"))) PPC_WEAK_FUNC(sub_83BEA848);
PPC_FUNC_IMPL(__imp__sub_83BEA848) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-19432
	ctx.r3.s64 = ctx.r11.s64 + -19432;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEA854"))) PPC_WEAK_FUNC(sub_83BEA854);
PPC_FUNC_IMPL(__imp__sub_83BEA854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEA858"))) PPC_WEAK_FUNC(sub_83BEA858);
PPC_FUNC_IMPL(__imp__sub_83BEA858) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-19424
	ctx.r3.s64 = ctx.r11.s64 + -19424;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEA864"))) PPC_WEAK_FUNC(sub_83BEA864);
PPC_FUNC_IMPL(__imp__sub_83BEA864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEA868"))) PPC_WEAK_FUNC(sub_83BEA868);
PPC_FUNC_IMPL(__imp__sub_83BEA868) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,29144
	ctx.r3.s64 = ctx.r11.s64 + 29144;
	// bl 0x83523120
	ctx.lr = 0x83BEA880;
	sub_83523120(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-19416
	ctx.r3.s64 = ctx.r10.s64 + -19416;
	// bl 0x831cdcc8
	ctx.lr = 0x83BEA88C;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BEA89C"))) PPC_WEAK_FUNC(sub_83BEA89C);
PPC_FUNC_IMPL(__imp__sub_83BEA89C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEA8A0"))) PPC_WEAK_FUNC(sub_83BEA8A0);
PPC_FUNC_IMPL(__imp__sub_83BEA8A0) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r8,29160
	ctx.r7.s64 = ctx.r8.s64 + 29160;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,29160(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 29160);
	// oris r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 4294901760;
	// stw r11,29160(r8)
	PPC_STORE_U32(ctx.r8.u32 + 29160, ctx.r11.u32);
	// stb r10,2(r7)
	PPC_STORE_U8(ctx.r7.u32 + 2, ctx.r10.u8);
	// stb r9,3(r7)
	PPC_STORE_U8(ctx.r7.u32 + 3, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BEA8C8"))) PPC_WEAK_FUNC(sub_83BEA8C8);
PPC_FUNC_IMPL(__imp__sub_83BEA8C8) {
	PPC_FUNC_PROLOGUE();
	// lis r7,-31776
	ctx.r7.s64 = -2082471936;
	// lis r5,-31776
	ctx.r5.s64 = -2082471936;
	// addi r6,r7,-10880
	ctx.r6.s64 = ctx.r7.s64 + -10880;
	// lis r3,-31760
	ctx.r3.s64 = -2081423360;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// ld r9,-10952(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + -10952);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r8,29160(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 29160);
	// oris r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 4294901760;
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
	// stw r11,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r11.u32);
	// stw r11,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r11.u32);
	// std r9,-10880(r7)
	PPC_STORE_U64(ctx.r7.u32 + -10880, ctx.r9.u64);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BEA910"))) PPC_WEAK_FUNC(sub_83BEA910);
PPC_FUNC_IMPL(__imp__sub_83BEA910) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-19400
	ctx.r3.s64 = ctx.r11.s64 + -19400;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEA91C"))) PPC_WEAK_FUNC(sub_83BEA91C);
PPC_FUNC_IMPL(__imp__sub_83BEA91C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEA920"))) PPC_WEAK_FUNC(sub_83BEA920);
PPC_FUNC_IMPL(__imp__sub_83BEA920) {
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
	// lis r11,-31760
	ctx.r11.s64 = -2081423360;
	// addi r3,r11,29168
	ctx.r3.s64 = ctx.r11.s64 + 29168;
	// bl 0x8259af80
	ctx.lr = 0x83BEA938;
	sub_8259AF80(ctx, base);
	// lis r10,-31790
	ctx.r10.s64 = -2083389440;
	// addi r3,r10,-19384
	ctx.r3.s64 = ctx.r10.s64 + -19384;
	// bl 0x831cdcc8
	ctx.lr = 0x83BEA944;
	sub_831CDCC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83BEA954"))) PPC_WEAK_FUNC(sub_83BEA954);
PPC_FUNC_IMPL(__imp__sub_83BEA954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEA958"))) PPC_WEAK_FUNC(sub_83BEA958);
PPC_FUNC_IMPL(__imp__sub_83BEA958) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r8,-31760
	ctx.r8.s64 = -2081423360;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r8,29148
	ctx.r11.s64 = ctx.r8.s64 + 29148;
	// lis r6,-31790
	ctx.r6.s64 = -2083389440;
	// lwz r10,-10904(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -10904);
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// addi r3,r6,-19392
	ctx.r3.s64 = ctx.r6.s64 + -19392;
	// stw r10,29148(r8)
	PPC_STORE_U32(ctx.r8.u32 + 29148, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r7,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r7.u16);
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEA988"))) PPC_WEAK_FUNC(sub_83BEA988);
PPC_FUNC_IMPL(__imp__sub_83BEA988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-19376
	ctx.r3.s64 = ctx.r11.s64 + -19376;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEA994"))) PPC_WEAK_FUNC(sub_83BEA994);
PPC_FUNC_IMPL(__imp__sub_83BEA994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEA998"))) PPC_WEAK_FUNC(sub_83BEA998);
PPC_FUNC_IMPL(__imp__sub_83BEA998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-19368
	ctx.r3.s64 = ctx.r11.s64 + -19368;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEA9A4"))) PPC_WEAK_FUNC(sub_83BEA9A4);
PPC_FUNC_IMPL(__imp__sub_83BEA9A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEA9A8"))) PPC_WEAK_FUNC(sub_83BEA9A8);
PPC_FUNC_IMPL(__imp__sub_83BEA9A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-19360
	ctx.r3.s64 = ctx.r11.s64 + -19360;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEA9B4"))) PPC_WEAK_FUNC(sub_83BEA9B4);
PPC_FUNC_IMPL(__imp__sub_83BEA9B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEA9B8"))) PPC_WEAK_FUNC(sub_83BEA9B8);
PPC_FUNC_IMPL(__imp__sub_83BEA9B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-19352
	ctx.r3.s64 = ctx.r11.s64 + -19352;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83BEA9C4"))) PPC_WEAK_FUNC(sub_83BEA9C4);
PPC_FUNC_IMPL(__imp__sub_83BEA9C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83BEA9C8"))) PPC_WEAK_FUNC(sub_83BEA9C8);
PPC_FUNC_IMPL(__imp__sub_83BEA9C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31790
	ctx.r11.s64 = -2083389440;
	// addi r3,r11,-19344
	ctx.r3.s64 = ctx.r11.s64 + -19344;
	// b 0x831cdcc8
	sub_831CDCC8(ctx, base);
	return;
}

