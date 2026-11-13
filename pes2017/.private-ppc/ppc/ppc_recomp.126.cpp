#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82B005C8"))) PPC_WEAK_FUNC(sub_82B005C8);
PPC_FUNC_IMPL(__imp__sub_82B005C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x82B005D0;
	__savegprlr_20(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// srawi. r8,r9,5
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 5;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82b006d4
	if (cr0.eq) goto loc_82B006D4;
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// li r26,15
	ctx.r26.s64 = 15;
	// li r23,-1
	ctx.r23.s64 = -1;
	// li r20,2
	ctx.r20.s64 = 2;
	// addi r25,r11,-22544
	ctx.r25.s64 = ctx.r11.s64 + -22544;
loc_82B00618:
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x82B00634;
	sub_8259CC28(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r9,0(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// srawi r7,r8,5
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 5;
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// cmplw cr6,r7,r28
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r28.u32, xer);
	// ble cr6,0x82b006dc
	if (!cr6.gt) goto loc_82B006DC;
	// add r29,r27,r11
	ctx.r29.u64 = ctx.r27.u64 + ctx.r11.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82B00674;
	sub_8259CB28(ctx, base);
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// stw r21,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r21.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r22,96
	ctx.r3.s64 = ctx.r22.s64 + 96;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// bl 0x839e5070
	ctx.lr = 0x82B0068C;
	sub_839E5070(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82b006a8
	if (cr6.lt) goto loc_82B006A8;
	// stw r20,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r20.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82B006A8;
	sub_825952B8(ctx, base);
loc_82B006A8:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r27,r27,32
	ctx.r27.s64 = ctx.r27.s64 + 32;
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// srawi r8,r9,5
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 5;
	// cmplw cr6,r28,r8
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r8.u32, xer);
	// blt cr6,0x82b00618
	if (cr6.lt) goto loc_82B00618;
loc_82B006D4:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_82B006DC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B006E8;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82B006E8"))) PPC_WEAK_FUNC(sub_82B006E8);
PPC_FUNC_IMPL(__imp__sub_82B006E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B006F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82f06520
	ctx.lr = 0x82B006FC;
	sub_82F06520(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,15
	ctx.r30.s64 = 15;
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// stw r30,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r31.u8);
	// addi r28,r11,-22544
	ctx.r28.s64 = ctx.r11.s64 + -22544;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8259cc28
	ctx.lr = 0x82B00728;
	sub_8259CC28(ctx, base);
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r31,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r31.u32);
	// lis r4,260
	ctx.r4.s64 = 17039360;
	// stw r10,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r10.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r31,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r31.u32);
	// ori r4,r4,63
	ctx.r4.u64 = ctx.r4.u64 | 63;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// bl 0x82d042a8
	ctx.lr = 0x82B00760;
	sub_82D042A8(ctx, base);
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8259cb28
	ctx.lr = 0x82B00780;
	sub_8259CB28(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82b00308
	ctx.lr = 0x82B00790;
	sub_82B00308(ctx, base);
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8259cc28
	ctx.lr = 0x82B007AC;
	sub_8259CC28(ctx, base);
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r31,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r31.u32);
	// addi r3,r29,96
	ctx.r3.s64 = ctx.r29.s64 + 96;
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r31.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stw r28,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r28.u32);
	// bl 0x839e5070
	ctx.lr = 0x82B007C8;
	sub_839E5070(ctx, base);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b005c8
	ctx.lr = 0x82B007E0;
	sub_82B005C8(ctx, base);
	// lwz r9,180(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// li r28,2
	ctx.r28.s64 = 2;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82b00800
	if (cr6.lt) goto loc_82B00800;
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x825952b8
	ctx.lr = 0x82B00800;
	sub_825952B8(ctx, base);
loc_82B00800:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// blt cr6,0x82b00828
	if (cr6.lt) goto loc_82B00828;
	// stw r28,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r28.u32);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82B00828;
	sub_825952B8(ctx, base);
loc_82B00828:
	// lwz r29,96(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// beq cr6,0x82b00864
	if (cr6.eq) goto loc_82B00864;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82aff248
	ctx.lr = 0x82B00854;
	sub_82AFF248(ctx, base);
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825952b8
	ctx.lr = 0x82B00864;
	sub_825952B8(ctx, base);
loc_82B00864:
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b00880
	if (cr6.lt) goto loc_82B00880;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x825952b8
	ctx.lr = 0x82B00880;
	sub_825952B8(ctx, base);
loc_82B00880:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B00888"))) PPC_WEAK_FUNC(sub_82B00888);
PPC_FUNC_IMPL(__imp__sub_82B00888) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82B00890;
	__savegprlr_24(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82a69b90
	ctx.lr = 0x82B008B0;
	sub_82A69B90(ctx, base);
	// lbz r11,156(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b008dc
	if (cr6.eq) goto loc_82B008DC;
	// bl 0x82f00728
	ctx.lr = 0x82B008C0;
	sub_82F00728(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r9,r11,22974
	ctx.r9.u64 = ctx.r11.u64 | 22974;
	// stbx r10,r3,r9
	PPC_STORE_U8(ctx.r3.u32 + ctx.r9.u32, ctx.r10.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82B008DC:
	// bl 0x83a7d958
	ctx.lr = 0x82B008E0;
	sub_83A7D958(ctx, base);
	// bl 0x83524138
	ctx.lr = 0x82B008E4;
	sub_83524138(ctx, base);
	// std r3,112(r28)
	PPC_STORE_U64(ctx.r28.u32 + 112, ctx.r3.u64);
	// bl 0x831156e8
	ctx.lr = 0x82B008EC;
	sub_831156E8(ctx, base);
	// lwz r24,48(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x82d26640
	ctx.lr = 0x82B008F4;
	sub_82D26640(ctx, base);
	// bl 0x82d25ab8
	ctx.lr = 0x82B008F8;
	sub_82D25AB8(ctx, base);
	// bl 0x82d34e50
	ctx.lr = 0x82B008FC;
	sub_82D34E50(ctx, base);
	// bl 0x82d34d38
	ctx.lr = 0x82B00900;
	sub_82D34D38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b00a58
	if (cr6.eq) goto loc_82B00A58;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82d462e8
	ctx.lr = 0x82B00914;
	sub_82D462E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b00a58
	if (cr6.eq) goto loc_82B00A58;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a69b90
	ctx.lr = 0x82B00934;
	sub_82A69B90(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B00944;
	sub_82D19788(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B0094C;
	sub_82D19A78(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r31,r11,7620
	ctx.r31.s64 = ctx.r11.s64 + 7620;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r4,r31,-68
	ctx.r4.s64 = ctx.r31.s64 + -68;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B00970;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r25,r28,128
	ctx.r25.s64 = ctx.r28.s64 + 128;
	// addi r4,r31,-52
	ctx.r4.s64 = ctx.r31.s64 + -52;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8259d6c0
	ctx.lr = 0x82B00980;
	sub_8259D6C0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b006e8
	ctx.lr = 0x82B00988;
	sub_82B006E8(ctx, base);
	// lwz r9,100(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 100);
	// addi r30,r26,100
	ctx.r30.s64 = ctx.r26.s64 + 100;
	// addi r4,r31,-36
	ctx.r4.s64 = ctx.r31.s64 + -36;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B009A4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b00a58
	if (cr6.eq) goto loc_82B00A58;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B009C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b00a58
	if (cr6.eq) goto loc_82B00A58;
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x82d284d0
	ctx.lr = 0x82B009D8;
	sub_82D284D0(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r7,5
	ctx.r7.s64 = 5;
	// stb r29,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r29.u8);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,140
	ctx.r4.u64 = ctx.r4.u64 | 140;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d042a8
	ctx.lr = 0x82B00A04;
	sub_82D042A8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82B00A18;
	sub_82D291E0(ctx, base);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r5,r31,-620
	ctx.r5.s64 = ctx.r31.s64 + -620;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x831178a0
	ctx.lr = 0x82B00A30;
	sub_831178A0(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B00A48;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b00a64
	if (!cr6.eq) goto loc_82B00A64;
loc_82B00A50:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82B00A58;
	sub_8387E8E0(ctx, base);
loc_82B00A58:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82B00A64:
	// lwz r11,324(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r29,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r29.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82b00a7c
	if (cr6.eq) goto loc_82B00A7C;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82B00A7C:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82d329f8
	ctx.lr = 0x82B00A8C;
	sub_82D329F8(ctx, base);
	// lwz r11,20(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b00aa0
	if (cr6.lt) goto loc_82B00AA0;
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// b 0x82b00aa4
	goto loc_82B00AA4;
loc_82B00AA0:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_82B00AA4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d2f098
	ctx.lr = 0x82B00AAC;
	sub_82D2F098(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b00a50
	if (cr6.eq) goto loc_82B00A50;
	// bl 0x82d33c10
	ctx.lr = 0x82B00ABC;
	sub_82D33C10(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r26,40
	ctx.r26.s64 = 40;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b00b2c
	if (cr6.eq) goto loc_82B00B2C;
loc_82B00AD0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B00ADC;
	sub_82D33DB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b00b1c
	if (cr6.eq) goto loc_82B00B1C;
	// lwz r10,100(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// lwz r11,96(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r10,r9,r26
	ctx.r10.s32 = PPCDivide(ctx.r9.s32, ctx.r26.s32);
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, xer);
	// bgt cr6,0x82b00b0c
	if (cr6.gt) goto loc_82B00B0C;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82B00B08;
	sub_82D2AEC8(ctx, base);
	// b 0x82b00b1c
	goto loc_82B00B1C;
loc_82B00B0C:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// add r5,r29,r11
	ctx.r5.u64 = ctx.r29.u64 + ctx.r11.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82affb58
	ctx.lr = 0x82B00B1C;
	sub_82AFFB58(ctx, base);
loc_82B00B1C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,40
	ctx.r29.s64 = ctx.r29.s64 + 40;
	// cmplw cr6,r31,r27
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, xer);
	// blt cr6,0x82b00ad0
	if (cr6.lt) goto loc_82B00AD0;
loc_82B00B2C:
	// lwz r11,100(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,96(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// divw r5,r9,r26
	ctx.r5.s32 = PPCDivide(ctx.r9.s32, ctx.r26.s32);
	// bl 0x82d20f50
	ctx.lr = 0x82B00B50;
	sub_82D20F50(ctx, base);
	// bl 0x82d26ed8
	ctx.lr = 0x82B00B54;
	sub_82D26ED8(ctx, base);
	// li r4,38
	ctx.r4.s64 = 38;
	// bl 0x82d26b18
	ctx.lr = 0x82B00B5C;
	sub_82D26B18(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83102db0
	ctx.lr = 0x82B00B68;
	sub_83102DB0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82B00B70;
	sub_8387E8E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B00B7C"))) PPC_WEAK_FUNC(sub_82B00B7C);
PPC_FUNC_IMPL(__imp__sub_82B00B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B00B80"))) PPC_WEAK_FUNC(sub_82B00B80);
PPC_FUNC_IMPL(__imp__sub_82B00B80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,108(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x82c11b10
	sub_82C11B10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B00B90"))) PPC_WEAK_FUNC(sub_82B00B90);
PPC_FUNC_IMPL(__imp__sub_82B00B90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B00B94"))) PPC_WEAK_FUNC(sub_82B00B94);
PPC_FUNC_IMPL(__imp__sub_82B00B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B00B98"))) PPC_WEAK_FUNC(sub_82B00B98);
PPC_FUNC_IMPL(__imp__sub_82B00B98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// li r5,224
	ctx.r5.s64 = 224;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x82B00BB8;
	sub_831CDCF0(ctx, base);
	// lis r8,-31777
	ctx.r8.s64 = -2082537472;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r10,r31,120
	ctx.r10.s64 = ctx.r31.s64 + 120;
	// li r9,12
	ctx.r9.s64 = 12;
	// ld r8,-3596(r8)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r8.u32 + -3596);
	// std r8,44(r31)
	PPC_STORE_U64(ctx.r31.u32 + 44, ctx.r8.u64);
	// lwz r8,-3548(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3548);
	// lwz r7,208(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// rlwimi r7,r8,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// stw r7,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r7.u32);
	// lwz r8,-3548(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3548);
	// rlwimi r6,r8,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r6.u32);
	// lwz r8,-3548(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3548);
	// lwz r5,212(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// rlwimi r5,r8,0,0,13
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r5.u64 & 0xFFFFFFFF0003FFFF);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stw r5,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r5.u32);
	// lwz r8,-3548(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3548);
	// rlwimi r4,r8,0,14,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3FFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFC0000);
	// stw r4,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r4.u32);
	// lwz r8,-3548(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3548);
	// lwz r3,192(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// rlwimi r3,r8,0,0,13
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r3.u64 & 0xFFFFFFFF0003FFFF);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r3,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r3.u32);
	// lwz r8,-3548(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3548);
	// rlwimi r7,r8,0,14,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3FFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFC0000);
	// stw r7,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,188(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// oris r5,r6,65535
	ctx.r5.u64 = ctx.r6.u64 | 4294901760;
	// stw r5,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r5.u32);
loc_82B00C40:
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// oris r6,r7,65535
	ctx.r6.u64 = ctx.r7.u64 | 4294901760;
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x82b00c40
	if (!cr0.eq) goto loc_82B00C40;
	// stw r8,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r8.u32);
	// li r5,100
	ctx.r5.s64 = 100;
	// lwz r10,-3548(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3548);
	// li r4,95
	ctx.r4.s64 = 95;
	// lwz r9,168(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// rlwimi r10,r9,0,14,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFC0000);
	// stw r10,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r10.u32);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// lwz r10,-3548(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3548);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwimi r8,r10,0,14,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFC0000);
	// stw r8,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r8.u32);
	// lwz r10,-3548(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3548);
	// lwz r7,172(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// rlwimi r7,r10,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// stw r7,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r7.u32);
	// lwz r11,-3548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3548);
	// rlwimi r7,r11,0,14,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFC0000);
	// stw r7,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r7.u32);
	// bl 0x83121088
	ctx.lr = 0x82B00CAC;
	sub_83121088(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,96
	ctx.r4.s64 = 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83121088
	ctx.lr = 0x82B00CBC;
	sub_83121088(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,97
	ctx.r4.s64 = 97;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83121088
	ctx.lr = 0x82B00CCC;
	sub_83121088(ctx, base);
	// lis r6,-31762
	ctx.r6.s64 = -2081554432;
	// lwz r11,26136(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 26136);
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
	// lwz r11,26136(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 26136);
	// stw r11,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r11.u32);
	// lwz r11,26136(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 26136);
	// stw r11,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82B00CFC"))) PPC_WEAK_FUNC(sub_82B00CFC);
PPC_FUNC_IMPL(__imp__sub_82B00CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B00D00"))) PPC_WEAK_FUNC(sub_82B00D00);
PPC_FUNC_IMPL(__imp__sub_82B00D00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// clrlwi r7,r10,5
	ctx.r7.u64 = ctx.r10.u32 & 0x7FFFFFF;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// stb r11,1(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1, ctx.r11.u8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r11,2(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2, ctx.r11.u8);
	// addi r10,r3,120
	ctx.r10.s64 = ctx.r3.s64 + 120;
	// stb r11,3(r3)
	PPC_STORE_U8(ctx.r3.u32 + 3, ctx.r11.u8);
	// li r9,11
	ctx.r9.s64 = 11;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
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
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r7,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r7.u32);
	// sth r8,44(r3)
	PPC_STORE_U16(ctx.r3.u32 + 44, ctx.r8.u16);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
loc_82B00D70:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// oris r7,r8,65535
	ctx.r7.u64 = ctx.r8.u64 | 4294901760;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bge 0x82b00d70
	if (!cr0.lt) goto loc_82B00D70;
	// li r10,-1
	ctx.r10.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r10.u32);
	// stw r10,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r10.u32);
	// lwz r9,176(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// oris r8,r9,65535
	ctx.r8.u64 = ctx.r9.u64 | 4294901760;
	// stw r8,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r8.u32);
	// stb r11,178(r31)
	PPC_STORE_U8(ctx.r31.u32 + 178, ctx.r11.u8);
	// stb r11,179(r31)
	PPC_STORE_U8(ctx.r31.u32 + 179, ctx.r11.u8);
	// stw r10,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r10.u32);
	// stw r10,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r10.u32);
	// stw r10,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r10.u32);
	// addi r10,r31,168
	ctx.r10.s64 = ctx.r31.s64 + 168;
	// lwz r7,216(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// oris r6,r7,65535
	ctx.r6.u64 = ctx.r7.u64 | 4294901760;
	// stw r6,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r6.u32);
	// stb r11,218(r31)
	PPC_STORE_U8(ctx.r31.u32 + 218, ctx.r11.u8);
	// stb r11,219(r31)
	PPC_STORE_U8(ctx.r31.u32 + 219, ctx.r11.u8);
	// lwz r5,220(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// oris r4,r5,65535
	ctx.r4.u64 = ctx.r5.u64 | 4294901760;
	// stw r4,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r4.u32);
	// stb r11,222(r31)
	PPC_STORE_U8(ctx.r31.u32 + 222, ctx.r11.u8);
	// stb r11,223(r31)
	PPC_STORE_U8(ctx.r31.u32 + 223, ctx.r11.u8);
	// bl 0x82b00b98
	ctx.lr = 0x82B00DEC;
	sub_82B00B98(ctx, base);
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

__attribute__((alias("__imp__sub_82B00E04"))) PPC_WEAK_FUNC(sub_82B00E04);
PPC_FUNC_IMPL(__imp__sub_82B00E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B00E08"))) PPC_WEAK_FUNC(sub_82B00E08);
PPC_FUNC_IMPL(__imp__sub_82B00E08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// bl 0x82b00d00
	ctx.lr = 0x82B00E20;
	sub_82B00D00(ctx, base);
	// li r10,11
	ctx.r10.s64 = 11;
	// addi r8,r31,224
	ctx.r8.s64 = ctx.r31.s64 + 224;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r8,-4
	ctx.r11.s64 = ctx.r8.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
loc_82B00E3C:
	// sth r10,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r10.u16);
	// stwu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82b00e3c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B00E3C;
	// lis r11,16
	ctx.r11.s64 = 1048576;
	// sth r9,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r9.u16);
	// li r10,11
	ctx.r10.s64 = 11;
	// ori r9,r11,188
	ctx.r9.u64 = ctx.r11.u64 | 188;
	// addi r11,r8,-8
	ctx.r11.s64 = ctx.r8.s64 + -8;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lis r9,-31777
	ctx.r9.s64 = -2082537472;
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// std r8,44(r31)
	PPC_STORE_U64(ctx.r31.u32 + 44, ctx.r8.u64);
loc_82B00E70:
	// ld r10,-3596(r9)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r9.u32 + -3596);
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x82b00e70
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B00E70;
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

__attribute__((alias("__imp__sub_82B00E94"))) PPC_WEAK_FUNC(sub_82B00E94);
PPC_FUNC_IMPL(__imp__sub_82B00E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B00E98"))) PPC_WEAK_FUNC(sub_82B00E98);
PPC_FUNC_IMPL(__imp__sub_82B00E98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82B00EA0;
	__savegprlr_26(ctx, base);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,120(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r27,r11,8208
	ctx.r27.s64 = ctx.r11.s64 + 8208;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b00ecc
	if (!cr6.eq) goto loc_82B00ECC;
	// addi r3,r27,464
	ctx.r3.s64 = ctx.r27.s64 + 464;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82c00618
	ctx.lr = 0x82B00EC8;
	sub_82C00618(ctx, base);
	// stw r3,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r3.u32);
loc_82B00ECC:
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b011c0
	if (cr6.eq) goto loc_82B011C0;
	// bl 0x831156e8
	ctx.lr = 0x82B00EDC;
	sub_831156E8(ctx, base);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lwz r29,48(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r26,1
	ctx.r26.s64 = 1;
	// addi r11,r11,-3596
	ctx.r11.s64 = ctx.r11.s64 + -3596;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b00f0c
	if (!cr6.eq) goto loc_82B00F0C;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x82b00f34
	goto loc_82B00F34;
loc_82B00F0C:
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 100);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x82b00f2c
	if (!cr6.eq) goto loc_82B00F2C;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// beq cr6,0x82b00f30
	if (cr6.eq) goto loc_82B00F30;
loc_82B00F2C:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82B00F30:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82B00F34:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b011c0
	if (!cr6.eq) goto loc_82B011C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x83103100
	ctx.lr = 0x82B00F4C;
	sub_83103100(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// li r4,1024
	ctx.r4.s64 = 1024;
	// bl 0x82bff970
	ctx.lr = 0x82B00F60;
	sub_82BFF970(ctx, base);
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// li r30,108
	ctx.r30.s64 = 108;
	// lwz r11,76(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// lwz r10,80(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw. r8,r9,r30
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r30.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82b00f88
	if (!cr0.eq) goto loc_82B00F88;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B00F88;
	sub_831CC188(ctx, base);
loc_82B00F88:
	// li r10,21
	ctx.r10.s64 = 21;
	// stw r10,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r11,76(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// lwz r9,80(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw. r7,r8,r30
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r30.s32);
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x82b00fb4
	if (!cr0.eq) goto loc_82B00FB4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B00FB4;
	sub_831CC188(ctx, base);
loc_82B00FB4:
	// stw r26,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r26.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// li r4,31
	ctx.r4.s64 = 31;
	// bl 0x82a942d8
	ctx.lr = 0x82B00FCC;
	sub_82A942D8(ctx, base);
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r11,76(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// lwz r10,80(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw. r8,r9,r30
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r30.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82b00ff0
	if (!cr0.eq) goto loc_82B00FF0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B00FF0;
	sub_831CC188(ctx, base);
loc_82B00FF0:
	// stw r28,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r28.u32);
	// lis r10,16
	ctx.r10.s64 = 1048576;
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// ori r9,r10,187
	ctx.r9.u64 = ctx.r10.u64 | 187;
	// sth r28,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r28.u16);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// lwz r8,80(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// divw. r6,r7,r30
	ctx.r6.s32 = PPCDivide(ctx.r7.s32, ctx.r30.s32);
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne 0x82b01028
	if (!cr0.eq) goto loc_82B01028;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B01028;
	sub_831CC188(ctx, base);
loc_82B01028:
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,60(r10)
	PPC_STORE_U64(ctx.r10.u32 + 60, ctx.r11.u64);
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r9,80(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// lwz r11,76(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw. r7,r8,r30
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r30.s32);
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x82b01054
	if (!cr0.eq) goto loc_82B01054;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B01054;
	sub_831CC188(ctx, base);
loc_82B01054:
	// stw r28,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r28.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x831178a0
	ctx.lr = 0x82B01070;
	sub_831178A0(ctx, base);
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw. r7,r8,r30
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r30.s32);
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x82b01098
	if (!cr0.eq) goto loc_82B01098;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B01098;
	sub_831CC188(ctx, base);
loc_82B01098:
	// stw r9,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r9.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82b00e08
	ctx.lr = 0x82B010A4;
	sub_82B00E08(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83120738
	ctx.lr = 0x82B010BC;
	sub_83120738(ctx, base);
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cntlzw r6,r8
	ctx.r6.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// lwz r9,80(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// subf r7,r10,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r10.s64;
	// rlwinm r9,r6,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// divw. r5,r7,r30
	ctx.r5.s32 = PPCDivide(ctx.r7.s32, ctx.r30.s32);
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne 0x82b010ec
	if (!cr0.eq) goto loc_82B010EC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B010EC;
	sub_831CC188(ctx, base);
loc_82B010EC:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// addic r9,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r8,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// stb r8,72(r10)
	PPC_STORE_U8(ctx.r10.u32 + 72, ctx.r8.u8);
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r7,80(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// subf r6,r10,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r10.s64;
	// divw. r5,r6,r30
	ctx.r5.s32 = PPCDivide(ctx.r6.s32, ctx.r30.s32);
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne 0x82b01120
	if (!cr0.eq) goto loc_82B01120;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B01120;
	sub_831CC188(ctx, base);
loc_82B01120:
	// stw r28,56(r10)
	PPC_STORE_U32(ctx.r10.u32 + 56, ctx.r28.u32);
	// bl 0x83763ef8
	ctx.lr = 0x82B01128;
	sub_83763EF8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x830ff290
	ctx.lr = 0x82B01130;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b0118c
	if (!cr6.eq) goto loc_82B0118C;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82b0118c
	if (cr6.eq) goto loc_82B0118C;
	// lbz r11,209(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 209);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b0118c
	if (cr6.eq) goto loc_82B0118C;
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw. r8,r9,r30
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r30.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82b01174
	if (!cr0.eq) goto loc_82B01174;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B01174;
	sub_831CC188(ctx, base);
loc_82B01174:
	// stb r26,96(r10)
	PPC_STORE_U8(ctx.r10.u32 + 96, ctx.r26.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x82bff800
	ctx.lr = 0x82B01184;
	sub_82BFF800(ctx, base);
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82B0118C:
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw. r8,r9,r30
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r30.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82b011b0
	if (!cr0.eq) goto loc_82B011B0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B011B0;
	sub_831CC188(ctx, base);
loc_82B011B0:
	// stb r28,96(r10)
	PPC_STORE_U8(ctx.r10.u32 + 96, ctx.r28.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x82bff800
	ctx.lr = 0x82B011C0;
	sub_82BFF800(ctx, base);
loc_82B011C0:
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B011C8"))) PPC_WEAK_FUNC(sub_82B011C8);
PPC_FUNC_IMPL(__imp__sub_82B011C8) {
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
	// lwz r11,124(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r9,128(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// addi r30,r3,124
	ctx.r30.s64 = ctx.r3.s64 + 124;
	// lbz r10,99(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 99);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r7,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82b0120c
	if (cr6.gt) goto loc_82B0120C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B0120C;
	sub_831CC188(ctx, base);
loc_82B0120C:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// blt cr6,0x82b01244
	if (cr6.lt) goto loc_82B01244;
	// bne cr6,0x82b012d0
	if (!cr6.eq) goto loc_82B012D0;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x82d19a68
	ctx.lr = 0x82B01228;
	sub_82D19A68(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d2aec8
	ctx.lr = 0x82B01234;
	sub_82D2AEC8(ctx, base);
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// bl 0x82d19a68
	ctx.lr = 0x82B0123C;
	sub_82D19A68(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82b012c8
	goto loc_82B012C8;
loc_82B01244:
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x82b01280
	if (cr6.gt) goto loc_82B01280;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82b01268
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B01268;
	// bdzf 4*cr6+eq,0x82b01270
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B01270;
	// bne cr6,0x82b01278
	if (!cr6.eq) goto loc_82B01278;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82b01284
	goto loc_82B01284;
loc_82B01268:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82b01284
	goto loc_82B01284;
loc_82B01270:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82b01284
	goto loc_82B01284;
loc_82B01278:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82b01284
	goto loc_82B01284;
loc_82B01280:
	// li r11,8
	ctx.r11.s64 = 8;
loc_82B01284:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,296(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B012A0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x82d19a68
	ctx.lr = 0x82B012A8;
	sub_82D19A68(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d2aec8
	ctx.lr = 0x82B012B4;
	sub_82D2AEC8(ctx, base);
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b012d0
	if (cr6.eq) goto loc_82B012D0;
	// bl 0x82d19a68
	ctx.lr = 0x82B012C4;
	sub_82D19A68(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
loc_82B012C8:
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d2aec8
	ctx.lr = 0x82B012D0;
	sub_82D2AEC8(ctx, base);
loc_82B012D0:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lbz r4,99(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 99);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// srawi r5,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 2;
	// bl 0x82be5308
	ctx.lr = 0x82B012EC;
	sub_82BE5308(ctx, base);
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

__attribute__((alias("__imp__sub_82B01304"))) PPC_WEAK_FUNC(sub_82B01304);
PPC_FUNC_IMPL(__imp__sub_82B01304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B01308"))) PPC_WEAK_FUNC(sub_82B01308);
PPC_FUNC_IMPL(__imp__sub_82B01308) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B01310;
	__savegprlr_29(ctx, base);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8378cba8
	ctx.lr = 0x82B0131C;
	sub_8378CBA8(ctx, base);
	// li r4,14
	ctx.r4.s64 = 14;
	// bl 0x8378cc08
	ctx.lr = 0x82B01324;
	sub_8378CC08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b0133c
	if (!cr6.eq) goto loc_82B0133C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82B0133C:
	// bl 0x831156e8
	ctx.lr = 0x82B01340;
	sub_831156E8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82b00e08
	ctx.lr = 0x82B01348;
	sub_82B00E08(ctx, base);
	// ld r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 140);
	// lbz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 96);
	// addi r29,r31,100
	ctx.r29.s64 = ctx.r31.s64 + 100;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// std r11,100(r31)
	PPC_STORE_U64(ctx.r31.u32 + 100, ctx.r11.u64);
	// bne cr6,0x82b01380
	if (!cr6.eq) goto loc_82B01380;
	// lbz r11,97(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 97);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// bne cr6,0x82b0137c
	if (!cr6.eq) goto loc_82B0137C;
	// li r4,1
	ctx.r4.s64 = 1;
loc_82B0137C:
	// bl 0x82d19788
	ctx.lr = 0x82B01380;
	sub_82D19788(ctx, base);
loc_82B01380:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B01390;
	sub_82D19788(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B013A0;
	sub_82D19788(ctx, base);
	// lbz r4,98(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 98);
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x82a16f00
	ctx.lr = 0x82B013AC;
	sub_82A16F00(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82be53d8
	ctx.lr = 0x82B013BC;
	sub_82BE53D8(ctx, base);
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// addi r30,r31,124
	ctx.r30.s64 = ctx.r31.s64 + 124;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82b013e0
	if (!cr0.eq) goto loc_82B013E0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B013E0;
	sub_831CC188(ctx, base);
loc_82B013E0:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x82b01420
	if (cr6.gt) goto loc_82B01420;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82b01408
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B01408;
	// bdzf 4*cr6+eq,0x82b01410
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B01410;
	// bne cr6,0x82b01418
	if (!cr6.eq) goto loc_82B01418;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82b01424
	goto loc_82B01424;
loc_82B01408:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82b01424
	goto loc_82B01424;
loc_82B01410:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82b01424
	goto loc_82B01424;
loc_82B01418:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82b01424
	goto loc_82B01424;
loc_82B01420:
	// li r11,8
	ctx.r11.s64 = 8;
loc_82B01424:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x82be5388
	ctx.lr = 0x82B01438;
	sub_82BE5388(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r5,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 2;
	// bl 0x82be5308
	ctx.lr = 0x82B01454;
	sub_82BE5308(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// ld r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// bl 0x82c12cb8
	ctx.lr = 0x82B01464;
	sub_82C12CB8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82c10c08
	ctx.lr = 0x82B01474;
	sub_82C10C08(ctx, base);
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b014c8
	if (cr6.eq) goto loc_82B014C8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subf r7,r11,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r5,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 2;
	// srawi r11,r7,2
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 2;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x82c0fe20
	ctx.lr = 0x82B014A4;
	sub_82C0FE20(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// ld r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// bl 0x82c106e0
	ctx.lr = 0x82B014B4;
	sub_82C106E0(ctx, base);
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// bl 0x82d19a68
	ctx.lr = 0x82B014BC;
	sub_82D19A68(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d2aec8
	ctx.lr = 0x82B014C8;
	sub_82D2AEC8(ctx, base);
loc_82B014C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82B014D0;
	sub_82D19A68(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,-3632(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3632);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B014EC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b01558
	if (cr6.eq) goto loc_82B01558;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r11,r1,152
	ctx.r11.s64 = ctx.r1.s64 + 152;
	// addi r10,r10,8211
	ctx.r10.s64 = ctx.r10.s64 + 8211;
loc_82B01500:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82b01524
	if (cr6.eq) goto loc_82B01524;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82b01500
	if (cr6.eq) goto loc_82B01500;
loc_82B01524:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// li r5,0
	ctx.r5.s64 = 0;
	// beq cr6,0x82b0154c
	if (cr6.eq) goto loc_82B0154C;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// bl 0x82d30138
	ctx.lr = 0x82B01538;
	sub_82D30138(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b00e98
	ctx.lr = 0x82B01540;
	sub_82B00E98(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82B0154C:
	// lis r4,29
	ctx.r4.s64 = 1900544;
	// ori r4,r4,433
	ctx.r4.u64 = ctx.r4.u64 | 433;
	// bl 0x82d30340
	ctx.lr = 0x82B01558;
	sub_82D30340(ctx, base);
loc_82B01558:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b00e98
	ctx.lr = 0x82B01560;
	sub_82B00E98(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B0156C"))) PPC_WEAK_FUNC(sub_82B0156C);
PPC_FUNC_IMPL(__imp__sub_82B0156C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B01570"))) PPC_WEAK_FUNC(sub_82B01570);
PPC_FUNC_IMPL(__imp__sub_82B01570) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,99(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 99);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// stb r10,99(r3)
	PPC_STORE_U8(ctx.r3.u32 + 99, ctx.r10.u8);
	// lwz r9,128(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// lwz r8,124(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// srawi r6,r7,2
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 2;
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// blt cr6,0x82b015a0
	if (cr6.lt) goto loc_82B015A0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,99(r3)
	PPC_STORE_U8(ctx.r3.u32 + 99, ctx.r11.u8);
loc_82B015A0:
	// b 0x82b011c8
	sub_82B011C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B015A4"))) PPC_WEAK_FUNC(sub_82B015A4);
PPC_FUNC_IMPL(__imp__sub_82B015A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B015A8"))) PPC_WEAK_FUNC(sub_82B015A8);
PPC_FUNC_IMPL(__imp__sub_82B015A8) {
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
	// addi r9,r11,8776
	ctx.r9.s64 = ctx.r11.s64 + 8776;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// lwz r4,124(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82b015f0
	if (cr6.eq) goto loc_82B015F0;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B015F0;
	sub_825952B8(ctx, base);
loc_82B015F0:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// bl 0x82c0fc10
	ctx.lr = 0x82B01608;
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

__attribute__((alias("__imp__sub_82B0161C"))) PPC_WEAK_FUNC(sub_82B0161C);
PPC_FUNC_IMPL(__imp__sub_82B0161C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B01620"))) PPC_WEAK_FUNC(sub_82B01620);
PPC_FUNC_IMPL(__imp__sub_82B01620) {
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
	// bl 0x82b015a8
	ctx.lr = 0x82B01640;
	sub_82B015A8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b01658
	if (cr6.eq) goto loc_82B01658;
	// bl 0x82416268
	ctx.lr = 0x82B01654;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B01658:
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

__attribute__((alias("__imp__sub_82B01670"))) PPC_WEAK_FUNC(sub_82B01670);
PPC_FUNC_IMPL(__imp__sub_82B01670) {
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
	// lwz r11,120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b01720
	if (cr6.eq) goto loc_82B01720;
	// lbz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 72);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b01720
	if (cr6.eq) goto loc_82B01720;
	// bl 0x82d19a78
	ctx.lr = 0x82B016A4;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,-3636(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3636);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B016C0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b01720
	if (cr6.eq) goto loc_82B01720;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a946c0
	ctx.lr = 0x82B016DC;
	sub_82A946C0(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b016f0
	if (cr6.lt) goto loc_82B016F0;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b016f4
	goto loc_82B016F4;
loc_82B016F0:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82B016F4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B0170C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82B01714;
	sub_8387E8E0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83545640
	ctx.lr = 0x82B01720;
	sub_83545640(ctx, base);
loc_82B01720:
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

__attribute__((alias("__imp__sub_82B01738"))) PPC_WEAK_FUNC(sub_82B01738);
PPC_FUNC_IMPL(__imp__sub_82B01738) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82B01740;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x82c0fbb8
	ctx.lr = 0x82B01754;
	sub_82C0FBB8(ctx, base);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// stb r29,98(r31)
	PPC_STORE_U8(ctx.r31.u32 + 98, ctx.r29.u8);
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// stb r30,97(r31)
	PPC_STORE_U8(ctx.r31.u32 + 97, ctx.r30.u8);
	// lis r7,-31777
	ctx.r7.s64 = -2082537472;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// addi r6,r9,8776
	ctx.r6.s64 = ctx.r9.s64 + 8776;
	// stb r11,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r11.u8);
	// addi r5,r8,-17088
	ctx.r5.s64 = ctx.r8.s64 + -17088;
	// stb r11,99(r31)
	PPC_STORE_U8(ctx.r31.u32 + 99, ctx.r11.u8);
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// addi r29,r10,-3652
	ctx.r29.s64 = ctx.r10.s64 + -3652;
	// stw r5,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r31,124
	ctx.r30.s64 = ctx.r31.s64 + 124;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// ld r10,-3596(r7)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r7.u32 + -3596);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// std r10,100(r31)
	PPC_STORE_U64(ctx.r31.u32 + 100, ctx.r10.u64);
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// bl 0x82d20ae0
	ctx.lr = 0x82B017B8;
	sub_82D20AE0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x82d23390
	ctx.lr = 0x82B017C8;
	sub_82D23390(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82B017CC;
	sub_831156E8(ctx, base);
	// lis r4,236
	ctx.r4.s64 = 15466496;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ori r11,r4,5128
	ctx.r11.u64 = ctx.r4.u64 | 5128;
	// lwzx r10,r3,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82b017ec
	if (!cr6.eq) goto loc_82B017EC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,96(r31)
	PPC_STORE_U8(ctx.r31.u32 + 96, ctx.r11.u8);
loc_82B017EC:
	// lbz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r26,r11,8652
	ctx.r26.s64 = ctx.r11.s64 + 8652;
	// beq cr6,0x82b01824
	if (cr6.eq) goto loc_82B01824;
	// li r28,3
	ctx.r28.s64 = 3;
	// addi r27,r26,-224
	ctx.r27.s64 = ctx.r26.s64 + -224;
loc_82B01808:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835977d8
	ctx.lr = 0x82B01814;
	sub_835977D8(ctx, base);
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// bne 0x82b01808
	if (!cr0.eq) goto loc_82B01808;
	// b 0x82b01844
	goto loc_82B01844;
loc_82B01824:
	// li r28,5
	ctx.r28.s64 = 5;
	// addi r27,r26,-212
	ctx.r27.s64 = ctx.r26.s64 + -212;
loc_82B0182C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x835977d8
	ctx.lr = 0x82B01838;
	sub_835977D8(ctx, base);
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// bne 0x82b0182c
	if (!cr0.eq) goto loc_82B0182C;
loc_82B01844:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d199f0
	ctx.lr = 0x82B0184C;
	sub_82D199F0(ctx, base);
	// addi r11,r26,-36
	ctx.r11.s64 = ctx.r26.s64 + -36;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82c0fea0
	ctx.lr = 0x82B0185C;
	sub_82C0FEA0(ctx, base);
	// stw r3,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d199f0
	ctx.lr = 0x82B01868;
	sub_82D199F0(ctx, base);
	// addi r10,r26,-20
	ctx.r10.s64 = ctx.r26.s64 + -20;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x82c10e90
	ctx.lr = 0x82B0187C;
	sub_82C10E90(ctx, base);
	// stw r3,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d199f0
	ctx.lr = 0x82B01888;
	sub_82D199F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82be5db0
	ctx.lr = 0x82B01898;
	sub_82BE5DB0(ctx, base);
	// lwz r6,116(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82b018b8
	if (cr6.eq) goto loc_82B018B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x82d23900
	ctx.lr = 0x82B018B8;
	sub_82D23900(ctx, base);
loc_82B018B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r6,112(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x82d23900
	ctx.lr = 0x82B018CC;
	sub_82D23900(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,12(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r6,108(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// bl 0x82d23900
	ctx.lr = 0x82B018E0;
	sub_82D23900(ctx, base);
	// lbz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b01910
	if (cr6.eq) goto loc_82B01910;
	// bl 0x830ff290
	ctx.lr = 0x82B018F0;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82B018F4;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,13
	cr6.compare<uint32_t>(ctx.r3.u32, 13, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82b01914
	if (!cr6.eq) goto loc_82B01914;
	// lis r4,631
	ctx.r4.s64 = 41353216;
	// li r5,5
	ctx.r5.s64 = 5;
	// ori r4,r4,584
	ctx.r4.u64 = ctx.r4.u64 | 584;
	// bl 0x82d21730
	ctx.lr = 0x82B01910;
	sub_82D21730(ctx, base);
loc_82B01910:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B01914:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B0191C"))) PPC_WEAK_FUNC(sub_82B0191C);
PPC_FUNC_IMPL(__imp__sub_82B0191C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B01920"))) PPC_WEAK_FUNC(sub_82B01920);
PPC_FUNC_IMPL(__imp__sub_82B01920) {
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
	// blt cr6,0x82b01948
	if (cr6.lt) goto loc_82B01948;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b0194c
	goto loc_82B0194C;
loc_82B01948:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82B0194C:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,140
	ctx.r4.s64 = 140;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B01968;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b0198c
	if (cr6.eq) goto loc_82B0198C;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82b01738
	ctx.lr = 0x82B01984;
	sub_82B01738(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b01990
	if (!cr6.eq) goto loc_82B01990;
loc_82B0198C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B01990:
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

__attribute__((alias("__imp__sub_82B019A8"))) PPC_WEAK_FUNC(sub_82B019A8);
PPC_FUNC_IMPL(__imp__sub_82B019A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// subfc r9,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r7,31
	ctx.r3.u64 = ctx.r7.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B019C0"))) PPC_WEAK_FUNC(sub_82B019C0);
PPC_FUNC_IMPL(__imp__sub_82B019C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82B019C8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// srawi r10,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// cmpw cr6,r5,r4
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, xer);
	// addze r31,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r31.s64 = temp.s64;
	// bge cr6,0x82b01a3c
	if (!cr6.lt) goto loc_82B01A3C;
loc_82B019F4:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r25
	ctr.u64 = ctx.r25.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r29,r11,r28
	ctx.r29.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x82B01A0C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b01a3c
	if (cr6.eq) goto loc_82B01A3C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r31,-1
	ctx.r9.s64 = ctx.r31.s64 + -1;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// srawi r8,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// cmpw cr6,r26,r31
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r31.s32, xer);
	// stwx r11,r10,r28
	PPC_STORE_U32(ctx.r10.u32 + ctx.r28.u32, ctx.r11.u32);
	// addze r31,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r31.s64 = temp.s64;
	// blt cr6,0x82b019f4
	if (cr6.lt) goto loc_82B019F4;
loc_82B01A3C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r10,r28
	PPC_STORE_U32(ctx.r10.u32 + ctx.r28.u32, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B01A50"))) PPC_WEAK_FUNC(sub_82B01A50);
PPC_FUNC_IMPL(__imp__sub_82B01A50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82B01A58;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r31,r11,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmpw cr6,r31,r5
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r5.s32, xer);
	// bge cr6,0x82b01ad0
	if (!cr6.lt) goto loc_82B01AD0;
loc_82B01A84:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r3,-4
	ctx.r4.s64 = ctx.r3.s64 + -4;
	// bctrl 
	ctx.lr = 0x82B01A98;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b01aa8
	if (cr6.eq) goto loc_82B01AA8;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_82B01AA8:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 1;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// rlwinm r31,r9,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r8,r11,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, xer);
	// stwx r8,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r8.u32);
	// blt cr6,0x82b01a84
	if (cr6.lt) goto loc_82B01A84;
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, xer);
loc_82B01AD0:
	// bne cr6,0x82b01aec
	if (!cr6.eq) goto loc_82B01AEC;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r29,r28,-1
	ctx.r29.s64 = ctx.r28.s64 + -1;
	// lwz r8,-4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// stwx r8,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r8.u32);
loc_82B01AEC:
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// srawi r10,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// cmpw cr6,r26,r29
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r29.s32, xer);
	// addze r31,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r31.s64 = temp.s64;
	// bge cr6,0x82b01b4c
	if (!cr6.lt) goto loc_82B01B4C;
loc_82B01B04:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// add r29,r11,r30
	ctx.r29.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x82B01B1C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b01b4c
	if (cr6.eq) goto loc_82B01B4C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r31,-1
	ctx.r9.s64 = ctx.r31.s64 + -1;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// srawi r8,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// cmpw cr6,r26,r31
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r31.s32, xer);
	// stwx r11,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r11.u32);
	// addze r31,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r31.s64 = temp.s64;
	// blt cr6,0x82b01b04
	if (cr6.lt) goto loc_82B01B04;
loc_82B01B4C:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B01B60"))) PPC_WEAK_FUNC(sub_82B01B60);
PPC_FUNC_IMPL(__imp__sub_82B01B60) {
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
	// lwz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b01b94
	if (!cr6.eq) goto loc_82B01B94;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,9540
	ctx.r3.s64 = ctx.r11.s64 + 9540;
	// bl 0x82c00618
	ctx.lr = 0x82B01B90;
	sub_82C00618(ctx, base);
	// stw r3,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r3.u32);
loc_82B01B94:
	// lwz r4,108(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82b01ce8
	if (cr6.eq) goto loc_82B01CE8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82B01BA8;
	sub_83103100(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// li r4,1024
	ctx.r4.s64 = 1024;
	// bl 0x82bff970
	ctx.lr = 0x82B01BBC;
	sub_82BFF970(ctx, base);
	// lwz r9,108(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// li r11,108
	ctx.r11.s64 = 108;
	// lwz r10,76(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	// lwz r9,80(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 80);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// divw. r7,r8,r11
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r11.s32);
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x82b01be4
	if (!cr0.eq) goto loc_82B01BE4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B01BE4;
	sub_831CC188(ctx, base);
loc_82B01BE4:
	// li r9,44
	ctx.r9.s64 = 44;
	// stw r9,84(r10)
	PPC_STORE_U32(ctx.r10.u32 + 84, ctx.r9.u32);
	// lwz r9,108(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r10,76(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	// lwz r8,80(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 80);
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// divw. r6,r7,r11
	ctx.r6.s32 = PPCDivide(ctx.r7.s32, ctx.r11.s32);
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne 0x82b01c10
	if (!cr0.eq) goto loc_82B01C10;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B01C10;
	sub_831CC188(ctx, base);
loc_82B01C10:
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r7,88(r10)
	PPC_STORE_U32(ctx.r10.u32 + 88, ctx.r7.u32);
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// addi r10,r10,76
	ctx.r10.s64 = ctx.r10.s64 + 76;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// subf r6,r9,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r9.s64;
	// divw. r5,r6,r11
	ctx.r5.s32 = PPCDivide(ctx.r6.s32, ctx.r11.s32);
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne 0x82b01c40
	if (!cr0.eq) goto loc_82B01C40;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B01C40;
	sub_831CC188(ctx, base);
loc_82B01C40:
	// li r8,38
	ctx.r8.s64 = 38;
	// stw r8,92(r9)
	PPC_STORE_U32(ctx.r9.u32 + 92, ctx.r8.u32);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// subf r5,r10,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r10.s64;
	// divw. r4,r5,r11
	ctx.r4.s32 = PPCDivide(ctx.r5.s32, ctx.r11.s32);
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x82b01c68
	if (!cr0.eq) goto loc_82B01C68;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B01C68;
	sub_831CC188(ctx, base);
loc_82B01C68:
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r8,99(r10)
	PPC_STORE_U8(ctx.r10.u32 + 99, ctx.r8.u8);
	// lwz r9,108(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r6,80(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 80);
	// lwz r10,76(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	// subf r5,r10,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r10.s64;
	// divw. r4,r5,r11
	ctx.r4.s32 = PPCDivide(ctx.r5.s32, ctx.r11.s32);
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x82b01c94
	if (!cr0.eq) goto loc_82B01C94;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B01C94;
	sub_831CC188(ctx, base);
loc_82B01C94:
	// stw r8,104(r10)
	PPC_STORE_U32(ctx.r10.u32 + 104, ctx.r8.u32);
	// lwz r9,108(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r10,76(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	// lwz r9,80(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 80);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// divw. r6,r8,r11
	ctx.r6.s32 = PPCDivide(ctx.r8.s32, ctx.r11.s32);
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne 0x82b01cbc
	if (!cr0.eq) goto loc_82B01CBC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B01CBC;
	sub_831CC188(ctx, base);
loc_82B01CBC:
	// stw r7,56(r10)
	PPC_STORE_U32(ctx.r10.u32 + 56, ctx.r7.u32);
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r9,76(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// lwz r10,80(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw. r6,r8,r11
	ctx.r6.s32 = PPCDivide(ctx.r8.s32, ctx.r11.s32);
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne 0x82b01ce4
	if (!cr0.eq) goto loc_82B01CE4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B01CE4;
	sub_831CC188(ctx, base);
loc_82B01CE4:
	// stb r7,96(r9)
	PPC_STORE_U8(ctx.r9.u32 + 96, ctx.r7.u8);
loc_82B01CE8:
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

__attribute__((alias("__imp__sub_82B01CFC"))) PPC_WEAK_FUNC(sub_82B01CFC);
PPC_FUNC_IMPL(__imp__sub_82B01CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B01D00"))) PPC_WEAK_FUNC(sub_82B01D00);
PPC_FUNC_IMPL(__imp__sub_82B01D00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac4
	ctx.lr = 0x82B01D08;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r22,r11,9796
	ctx.r22.s64 = ctx.r11.s64 + 9796;
	// beq cr6,0x82b01d68
	if (cr6.eq) goto loc_82B01D68;
	// addi r4,r22,-64
	ctx.r4.s64 = ctx.r22.s64 + -64;
	// lwz r3,104(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// bl 0x82d2f098
	ctx.lr = 0x82B01D34;
	sub_82D2F098(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b01f90
	if (cr6.eq) goto loc_82B01F90;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82B01D48;
	sub_82D2AEC8(ctx, base);
	// addi r4,r22,-40
	ctx.r4.s64 = ctx.r22.s64 + -40;
	// lwz r3,104(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 104);
	// bl 0x82d2f098
	ctx.lr = 0x82B01D54;
	sub_82D2F098(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b01f90
	if (cr6.eq) goto loc_82B01F90;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82B01D68;
	sub_82D2AEC8(ctx, base);
loc_82B01D68:
	// addi r4,r22,-24
	ctx.r4.s64 = ctx.r22.s64 + -24;
	// lwz r3,104(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 104);
	// bl 0x82d2f098
	ctx.lr = 0x82B01D74;
	sub_82D2F098(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b01f90
	if (cr6.eq) goto loc_82B01F90;
	// lbz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r19.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b01d98
	if (cr6.eq) goto loc_82B01D98;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x82B01D98;
	sub_82D2AEC8(ctx, base);
loc_82B01D98:
	// lwz r11,100(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 100);
	// addi r3,r24,100
	ctx.r3.s64 = ctx.r24.s64 + 100;
	// addi r4,r22,-12
	ctx.r4.s64 = ctx.r22.s64 + -12;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B01DB0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b01f90
	if (cr6.eq) goto loc_82B01F90;
	// lis r4,75
	ctx.r4.s64 = 4915200;
	// ori r4,r4,65
	ctx.r4.u64 = ctx.r4.u64 | 65;
	// bl 0x82d29598
	ctx.lr = 0x82B01DC4;
	sub_82D29598(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82B01DC8;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r23,48(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x82d33c10
	ctx.lr = 0x82B01DD8;
	sub_82D33C10(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x82d33c10
	ctx.lr = 0x82B01DE4;
	sub_82D33C10(ctx, base);
	// li r27,404
	ctx.r27.s64 = 404;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b01f60
	if (cr6.eq) goto loc_82B01F60;
	// li r25,0
	ctx.r25.s64 = 0;
	// lis r21,-31777
	ctx.r21.s64 = -2082537472;
loc_82B01DF8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B01E04;
	sub_82D33DB0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b01f48
	if (cr6.eq) goto loc_82B01F48;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B01E2C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b01f48
	if (cr6.eq) goto loc_82B01F48;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,25
	ctx.r4.s64 = 25;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2d510
	ctx.lr = 0x82B01E48;
	sub_82D2D510(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b01f48
	if (cr6.eq) goto loc_82B01F48;
	// lwz r11,3764(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 3764);
	// addi r31,r20,3764
	ctx.r31.s64 = ctx.r20.s64 + 3764;
	// lwz r10,3768(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 3768);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r27
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r27.s32);
	// cmplw cr6,r28,r8
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r8.u32, xer);
	// blt cr6,0x82b01ec4
	if (cr6.lt) goto loc_82B01EC4;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2b608
	ctx.lr = 0x82B01E84;
	sub_82D2B608(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82B01E94;
	sub_82D2AEC8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r31,-3452(r21)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r21.u32 + -3452);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82aa38e0
	ctx.lr = 0x82B01EA4;
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
	ctx.lr = 0x82B01EB8;
	sub_82D32C58(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82b01f40
	goto loc_82B01F40;
loc_82B01EC4:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x82B01ED0;
	sub_82D2AEC8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r27
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r27.s32);
	// cmplw cr6,r8,r28
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r28.u32, xer);
	// ble cr6,0x82b01f98
	if (!cr6.gt) goto loc_82B01F98;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lhzx r4,r25,r11
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r25.u32 + ctx.r11.u32);
	// bl 0x8311c338
	ctx.lr = 0x82B01EF4;
	sub_8311C338(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r29,88(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82aa38e0
	ctx.lr = 0x82B01F08;
	sub_82AA38E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82d32c58
	ctx.lr = 0x82B01F1C;
	sub_82D32C58(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r27
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r27.s32);
	// cmplw cr6,r8,r28
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r28.u32, xer);
	// ble cr6,0x82b01fa4
	if (!cr6.gt) goto loc_82B01FA4;
	// add r11,r25,r11
	ctx.r11.u64 = ctx.r25.u64 + ctx.r11.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lbz r4,402(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 402);
loc_82B01F40:
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d2aec8
	ctx.lr = 0x82B01F48;
	sub_82D2AEC8(ctx, base);
loc_82B01F48:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r25,r25,404
	ctx.r25.s64 = ctx.r25.s64 + 404;
	// bl 0x82d33c10
	ctx.lr = 0x82B01F58;
	sub_82D33C10(ctx, base);
	// cmplw cr6,r28,r3
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r3.u32, xer);
	// blt cr6,0x82b01df8
	if (cr6.lt) goto loc_82B01DF8;
loc_82B01F60:
	// lbz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r19.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b01f90
	if (cr6.eq) goto loc_82B01F90;
	// lwz r11,3768(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 3768);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,3764(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 3764);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// divw r5,r9,r27
	ctx.r5.s32 = PPCDivide(ctx.r9.s32, ctx.r27.s32);
	// bl 0x82d20f50
	ctx.lr = 0x82B01F90;
	sub_82D20F50(ctx, base);
loc_82B01F90:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb14
	__restgprlr_19(ctx, base);
	return;
loc_82B01F98:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B01FA4;
	sub_831CC188(ctx, base);
loc_82B01FA4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B01FB0;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82B01FB0"))) PPC_WEAK_FUNC(sub_82B01FB0);
PPC_FUNC_IMPL(__imp__sub_82B01FB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B01FB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B01FC8;
	sub_831156E8(ctx, base);
	// li r5,404
	ctx.r5.s64 = 404;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831cdcf0
	ctx.lr = 0x82B01FD8;
	sub_831CDCF0(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r5,404
	ctx.r5.s64 = 404;
	// ori r31,r11,65535
	ctx.r31.u64 = ctx.r11.u64 | 65535;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// sth r31,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r31.u16);
	// bl 0x831cdcf0
	ctx.lr = 0x82B01FF4;
	sub_831CDCF0(ctx, base);
	// lwz r8,112(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// lwz r10,116(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// li r9,404
	ctx.r9.s64 = 404;
	// sth r31,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r31.u16);
	// li r11,0
	ctx.r11.s64 = 0;
	// subf r7,r8,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r8.s64;
	// divw. r9,r7,r9
	ctx.r9.s32 = PPCDivide(ctx.r7.s32, ctx.r9.s32);
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82b02040
	if (cr0.eq) goto loc_82B02040;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// ble cr6,0x82b0205c
	if (!cr6.gt) goto loc_82B0205C;
loc_82B02020:
	// lhzx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r8.u32);
	// lhz r6,3784(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 3784);
	// cmplw cr6,r7,r6
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, xer);
	// beq cr6,0x82b02068
	if (cr6.eq) goto loc_82B02068;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,404
	ctx.r10.s64 = ctx.r10.s64 + 404;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82b02020
	if (cr6.gt) goto loc_82B02020;
loc_82B02040:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_82B02044:
	// li r5,404
	ctx.r5.s64 = 404;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ce980
	ctx.lr = 0x82B02050;
	sub_831CE980(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82B0205C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B02068;
	sub_831CC188(ctx, base);
loc_82B02068:
	// mulli r11,r11,404
	ctx.r11.s64 = ctx.r11.s64 * 404;
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// b 0x82b02044
	goto loc_82B02044;
}

__attribute__((alias("__imp__sub_82B02074"))) PPC_WEAK_FUNC(sub_82B02074);
PPC_FUNC_IMPL(__imp__sub_82B02074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B02078"))) PPC_WEAK_FUNC(sub_82B02078);
PPC_FUNC_IMPL(__imp__sub_82B02078) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B02080;
	__savegprlr_29(ctx, base);
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B02090;
	sub_831156E8(ctx, base);
	// li r5,404
	ctx.r5.s64 = 404;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831cdcf0
	ctx.lr = 0x82B020A0;
	sub_831CDCF0(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r5,404
	ctx.r5.s64 = 404;
	// ori r31,r11,65535
	ctx.r31.u64 = ctx.r11.u64 | 65535;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// sth r31,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r31.u16);
	// bl 0x831cdcf0
	ctx.lr = 0x82B020BC;
	sub_831CDCF0(ctx, base);
	// lwz r8,112(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// lwz r10,116(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// li r9,404
	ctx.r9.s64 = 404;
	// sth r31,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r31.u16);
	// li r11,0
	ctx.r11.s64 = 0;
	// subf r7,r8,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r8.s64;
	// divw. r9,r7,r9
	ctx.r9.s32 = PPCDivide(ctx.r7.s32, ctx.r9.s32);
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82b02108
	if (cr0.eq) goto loc_82B02108;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// ble cr6,0x82b02124
	if (!cr6.gt) goto loc_82B02124;
loc_82B020E8:
	// lhzx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r8.u32);
	// lhz r6,3786(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 3786);
	// cmplw cr6,r7,r6
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, xer);
	// beq cr6,0x82b02130
	if (cr6.eq) goto loc_82B02130;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,404
	ctx.r10.s64 = ctx.r10.s64 + 404;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82b020e8
	if (cr6.gt) goto loc_82B020E8;
loc_82B02108:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_82B0210C:
	// li r5,404
	ctx.r5.s64 = 404;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ce980
	ctx.lr = 0x82B02118;
	sub_831CE980(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82B02124:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B02130;
	sub_831CC188(ctx, base);
loc_82B02130:
	// mulli r11,r11,404
	ctx.r11.s64 = ctx.r11.s64 * 404;
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// b 0x82b0210c
	goto loc_82B0210C;
}

__attribute__((alias("__imp__sub_82B0213C"))) PPC_WEAK_FUNC(sub_82B0213C);
PPC_FUNC_IMPL(__imp__sub_82B0213C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B02140"))) PPC_WEAK_FUNC(sub_82B02140);
PPC_FUNC_IMPL(__imp__sub_82B02140) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B02148;
	__savegprlr_29(ctx, base);
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B02158;
	sub_831156E8(ctx, base);
	// li r5,404
	ctx.r5.s64 = 404;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831cdcf0
	ctx.lr = 0x82B02168;
	sub_831CDCF0(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r5,404
	ctx.r5.s64 = 404;
	// ori r31,r11,65535
	ctx.r31.u64 = ctx.r11.u64 | 65535;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// sth r31,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r31.u16);
	// bl 0x831cdcf0
	ctx.lr = 0x82B02184;
	sub_831CDCF0(ctx, base);
	// lwz r8,112(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// lwz r10,116(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// li r9,404
	ctx.r9.s64 = 404;
	// sth r31,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r31.u16);
	// li r11,0
	ctx.r11.s64 = 0;
	// subf r7,r8,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r8.s64;
	// divw. r9,r7,r9
	ctx.r9.s32 = PPCDivide(ctx.r7.s32, ctx.r9.s32);
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82b021d0
	if (cr0.eq) goto loc_82B021D0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// ble cr6,0x82b021ec
	if (!cr6.gt) goto loc_82B021EC;
loc_82B021B0:
	// lhzx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r8.u32);
	// lhz r6,3788(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 3788);
	// cmplw cr6,r7,r6
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, xer);
	// beq cr6,0x82b021f8
	if (cr6.eq) goto loc_82B021F8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,404
	ctx.r10.s64 = ctx.r10.s64 + 404;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82b021b0
	if (cr6.gt) goto loc_82B021B0;
loc_82B021D0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_82B021D4:
	// li r5,404
	ctx.r5.s64 = 404;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831ce980
	ctx.lr = 0x82B021E0;
	sub_831CE980(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82B021EC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B021F8;
	sub_831CC188(ctx, base);
loc_82B021F8:
	// mulli r11,r11,404
	ctx.r11.s64 = ctx.r11.s64 * 404;
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// b 0x82b021d4
	goto loc_82B021D4;
}

__attribute__((alias("__imp__sub_82B02204"))) PPC_WEAK_FUNC(sub_82B02204);
PPC_FUNC_IMPL(__imp__sub_82B02204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B02208"))) PPC_WEAK_FUNC(sub_82B02208);
PPC_FUNC_IMPL(__imp__sub_82B02208) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B02210;
	__savegprlr_28(ctx, base);
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,404
	ctx.r5.s64 = 404;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831cdcf0
	ctx.lr = 0x82B02230;
	sub_831CDCF0(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r5,404
	ctx.r5.s64 = 404;
	// ori r31,r11,65535
	ctx.r31.u64 = ctx.r11.u64 | 65535;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// sth r31,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r31.u16);
	// bl 0x831cdcf0
	ctx.lr = 0x82B0224C;
	sub_831CDCF0(ctx, base);
	// lwz r8,112(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 112);
	// lwz r10,116(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 116);
	// li r9,404
	ctx.r9.s64 = 404;
	// sth r31,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r31.u16);
	// li r11,0
	ctx.r11.s64 = 0;
	// subf r7,r8,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r8.s64;
	// divw. r9,r7,r9
	ctx.r9.s32 = PPCDivide(ctx.r7.s32, ctx.r9.s32);
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82b02298
	if (cr0.eq) goto loc_82B02298;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// ble cr6,0x82b022b4
	if (!cr6.gt) goto loc_82B022B4;
loc_82B02278:
	// lhzx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r8.u32);
	// lhz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// cmplw cr6,r7,r6
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, xer);
	// beq cr6,0x82b022c0
	if (cr6.eq) goto loc_82B022C0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,404
	ctx.r10.s64 = ctx.r10.s64 + 404;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82b02278
	if (cr6.gt) goto loc_82B02278;
loc_82B02298:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_82B0229C:
	// li r5,404
	ctx.r5.s64 = 404;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ce980
	ctx.lr = 0x82B022A8;
	sub_831CE980(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82B022B4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B022C0;
	sub_831CC188(ctx, base);
loc_82B022C0:
	// mulli r11,r11,404
	ctx.r11.s64 = ctx.r11.s64 * 404;
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// b 0x82b0229c
	goto loc_82B0229C;
}

__attribute__((alias("__imp__sub_82B022CC"))) PPC_WEAK_FUNC(sub_82B022CC);
PPC_FUNC_IMPL(__imp__sub_82B022CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B022D0"))) PPC_WEAK_FUNC(sub_82B022D0);
PPC_FUNC_IMPL(__imp__sub_82B022D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lwz r9,116(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// li r10,404
	ctx.r10.s64 = 404;
	// lwz r8,112(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// li r11,0
	ctx.r11.s64 = 0;
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// divw. r9,r7,r10
	ctx.r9.s32 = PPCDivide(ctx.r7.s32, ctx.r10.s32);
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82b02318
	if (cr0.eq) goto loc_82B02318;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// ble cr6,0x82b02320
	if (!cr6.gt) goto loc_82B02320;
loc_82B022F8:
	// lhzx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r8.u32);
	// lhz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplw cr6,r7,r6
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, xer);
	// beq cr6,0x82b0232c
	if (cr6.eq) goto loc_82B0232C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,404
	ctx.r10.s64 = ctx.r10.s64 + 404;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82b022f8
	if (cr6.gt) goto loc_82B022F8;
loc_82B02318:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82B02320:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// b 0x831cc188
	sub_831CC188(ctx, base);
	return;
loc_82B0232C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B02334"))) PPC_WEAK_FUNC(sub_82B02334);
PPC_FUNC_IMPL(__imp__sub_82B02334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B02338"))) PPC_WEAK_FUNC(sub_82B02338);
PPC_FUNC_IMPL(__imp__sub_82B02338) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82B02340;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B02354;
	sub_831156E8(ctx, base);
	// addi r31,r31,100
	ctx.r31.s64 = ctx.r31.s64 + 100;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,9912
	ctx.r4.s64 = ctx.r10.s64 + 9912;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r26,48(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B0237C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b02440
	if (cr6.eq) goto loc_82B02440;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,25
	ctx.r4.s64 = 25;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2d510
	ctx.lr = 0x82B02398;
	sub_82D2D510(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b02440
	if (cr6.eq) goto loc_82B02440;
	// lwz r11,3764(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3764);
	// li r27,404
	ctx.r27.s64 = 404;
	// lwz r10,3768(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3768);
	// addi r31,r28,3764
	ctx.r31.s64 = ctx.r28.s64 + 3764;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r27
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r27.s32);
	// cmplw cr6,r8,r30
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, xer);
	// bgt cr6,0x82b023d0
	if (cr6.gt) goto loc_82B023D0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B023D0;
	sub_831CC188(ctx, base);
loc_82B023D0:
	// mulli r28,r30,404
	ctx.r28.s64 = ctx.r30.s64 * 404;
	// lhzx r4,r11,r28
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r28.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8311c338
	ctx.lr = 0x82B023E0;
	sub_8311C338(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r26,88(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82aa38e0
	ctx.lr = 0x82B023F4;
	sub_82AA38E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82d32c58
	ctx.lr = 0x82B02408;
	sub_82D32C58(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r27
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r27.s32);
	// cmplw cr6,r8,r30
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, xer);
	// bgt cr6,0x82b0242c
	if (cr6.gt) goto loc_82B0242C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B0242C;
	sub_831CC188(ctx, base);
loc_82B0242C:
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lbz r4,402(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 402);
	// bl 0x82d2aec8
	ctx.lr = 0x82B02440;
	sub_82D2AEC8(ctx, base);
loc_82B02440:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B02448"))) PPC_WEAK_FUNC(sub_82B02448);
PPC_FUNC_IMPL(__imp__sub_82B02448) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82B02450;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// srawi r28,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r28.s64 = ctx.r11.s32 >> 2;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// srawi r10,r28,1
	xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r28.s32 >> 1;
	// addze. r27,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r27.s64 = temp.s64;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// ble 0x82b02528
	if (!cr0.gt) goto loc_82B02528;
	// addi r10,r27,1
	ctx.r10.s64 = ctx.r27.s64 + 1;
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r26,r10,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r24,r11,r3
	ctx.r24.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_82B02480:
	// lwzu r11,-4(r24)
	ea = -4 + ctx.r24.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r24.u32 = ea;
	// addi r26,r26,-2
	ctx.r26.s64 = ctx.r26.s64 + -2;
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// cmpw cr6,r26,r28
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r28.s32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bge cr6,0x82b024e8
	if (!cr6.lt) goto loc_82B024E8;
loc_82B024A0:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r25
	ctr.u64 = ctx.r25.u64;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r3,-4
	ctx.r4.s64 = ctx.r3.s64 + -4;
	// bctrl 
	ctx.lr = 0x82B024B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b024c4
	if (cr6.eq) goto loc_82B024C4;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_82B024C4:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 1;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// rlwinm r31,r9,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r8,r11,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, xer);
	// stwx r8,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r8.u32);
	// blt cr6,0x82b024a0
	if (cr6.lt) goto loc_82B024A0;
loc_82B024E8:
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, xer);
	// bne cr6,0x82b02508
	if (!cr6.eq) goto loc_82B02508;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r29,r28,-1
	ctx.r29.s64 = ctx.r28.s64 + -1;
	// lwz r8,-4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// stwx r8,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r8.u32);
loc_82B02508:
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b019c0
	ctx.lr = 0x82B02520;
	sub_82B019C0(ctx, base);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// bgt cr6,0x82b02480
	if (cr6.gt) goto loc_82B02480;
loc_82B02528:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B02530"))) PPC_WEAK_FUNC(sub_82B02530);
PPC_FUNC_IMPL(__imp__sub_82B02530) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82B02538;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82b02618
	if (cr6.eq) goto loc_82B02618;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, xer);
	// beq cr6,0x82b02618
	if (cr6.eq) goto loc_82B02618;
	// addi r27,r30,-4
	ctx.r27.s64 = ctx.r30.s64 + -4;
	// subfic r25,r3,4
	xer.ca = ctx.r3.u32 <= 4;
	ctx.r25.s64 = 4 - ctx.r3.s64;
loc_82B02564:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r26
	ctr.u64 = ctx.r26.u64;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bctrl 
	ctx.lr = 0x82B02580;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b025b4
	if (cr6.eq) goto loc_82B025B4;
	// add r11,r25,r27
	ctx.r11.u64 = ctx.r25.u64 + ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r5,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r5.s64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x831ce420
	ctx.lr = 0x82B025A8;
	sub_831CE420(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// b 0x82b02608
	goto loc_82B02608;
loc_82B025B4:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mtctr r26
	ctr.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x82B025C8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b02600
	if (cr6.eq) goto loc_82B02600;
loc_82B025D4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r26
	ctr.u64 = ctx.r26.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82B025F4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b025d4
	if (!cr6.eq) goto loc_82B025D4;
loc_82B02600:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_82B02608:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmplw cr6,r30,r24
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r24.u32, xer);
	// bne cr6,0x82b02564
	if (!cr6.eq) goto loc_82B02564;
loc_82B02618:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B02620"))) PPC_WEAK_FUNC(sub_82B02620);
PPC_FUNC_IMPL(__imp__sub_82B02620) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B02628;
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
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82B0264C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b02668
	if (cr6.eq) goto loc_82B02668;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
loc_82B02668:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x82B02678;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b02694
	if (cr6.eq) goto loc_82B02694;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_82B02694:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82B026A4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b026c0
	if (cr6.eq) goto loc_82B026C0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
loc_82B026C0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B026C8"))) PPC_WEAK_FUNC(sub_82B026C8);
PPC_FUNC_IMPL(__imp__sub_82B026C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B026D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82b02710
	if (cr6.eq) goto loc_82B02710;
	// subf r30,r5,r3
	ctx.r30.s64 = ctx.r3.s64 - ctx.r5.s64;
loc_82B026E8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82b02700
	if (cr6.eq) goto loc_82B02700;
	// add r4,r30,r31
	ctx.r4.u64 = ctx.r30.u64 + ctx.r31.u64;
	// li r5,404
	ctx.r5.s64 = 404;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x82B02700;
	sub_831CE980(ctx, base);
loc_82B02700:
	// addi r31,r31,404
	ctx.r31.s64 = ctx.r31.s64 + 404;
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// bne cr6,0x82b026e8
	if (!cr6.eq) goto loc_82B026E8;
loc_82B02710:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B0271C"))) PPC_WEAK_FUNC(sub_82B0271C);
PPC_FUNC_IMPL(__imp__sub_82B0271C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B02720"))) PPC_WEAK_FUNC(sub_82B02720);
PPC_FUNC_IMPL(__imp__sub_82B02720) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82B02728;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r3,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r3.s64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,40
	cr6.compare<int32_t>(ctx.r11.s32, 40, xer);
	// ble cr6,0x82b027b4
	if (!cr6.gt) goto loc_82B027B4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srawi r10,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r26,r11,3,0,28
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r27,r29,r3
	ctx.r27.u64 = ctx.r29.u64 + ctx.r3.u64;
	// add r5,r26,r3
	ctx.r5.u64 = ctx.r26.u64 + ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82b02620
	ctx.lr = 0x82B0276C;
	sub_82B02620(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// add r5,r29,r31
	ctx.r5.u64 = ctx.r29.u64 + ctx.r31.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// subf r3,r29,r31
	ctx.r3.s64 = ctx.r31.s64 - ctx.r29.s64;
	// bl 0x82b02620
	ctx.lr = 0x82B02780;
	sub_82B02620(ctx, base);
	// subf r29,r29,r28
	ctx.r29.s64 = ctx.r28.s64 - ctx.r29.s64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// subf r3,r26,r28
	ctx.r3.s64 = ctx.r28.s64 - ctx.r26.s64;
	// bl 0x82b02620
	ctx.lr = 0x82B02798;
	sub_82B02620(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82b02620
	ctx.lr = 0x82B027AC;
	sub_82B02620(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82B027B4:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82b02620
	ctx.lr = 0x82B027C0;
	sub_82B02620(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B027C8"))) PPC_WEAK_FUNC(sub_82B027C8);
PPC_FUNC_IMPL(__imp__sub_82B027C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82B027D0;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r4,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r4.s64;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// srawi r10,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// srawi r9,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r5,-4
	ctx.r5.s64 = ctx.r5.s64 + -4;
	// add r31,r11,r4
	ctx.r31.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82b02720
	ctx.lr = 0x82B0280C;
	sub_82B02720(ctx, base);
	// addi r26,r31,4
	ctx.r26.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r25,r31
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r31.u32, xer);
	// bge cr6,0x82b02860
	if (!cr6.lt) goto loc_82B02860;
loc_82B02818:
	// addi r30,r31,-4
	ctx.r30.s64 = ctx.r31.s64 + -4;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82B0282C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b02860
	if (!cr6.eq) goto loc_82B02860;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82B02848;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b02860
	if (!cr6.eq) goto loc_82B02860;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplw cr6,r25,r30
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r30.u32, xer);
	// blt cr6,0x82b02818
	if (cr6.lt) goto loc_82B02818;
loc_82B02860:
	// cmplw cr6,r26,r24
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r24.u32, xer);
	// bge cr6,0x82b028ac
	if (!cr6.lt) goto loc_82B028AC;
loc_82B02868:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bctrl 
	ctx.lr = 0x82B02878;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b028ac
	if (!cr6.eq) goto loc_82B028AC;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82B02894;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b028ac
	if (!cr6.eq) goto loc_82B028AC;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmplw cr6,r26,r24
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r24.u32, xer);
	// blt cr6,0x82b02868
	if (cr6.lt) goto loc_82B02868;
loc_82B028AC:
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_82B028B4:
	// cmplw cr6,r29,r24
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, xer);
	// bge cr6,0x82b02918
	if (!cr6.lt) goto loc_82B02918;
loc_82B028BC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82B028CC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b0290c
	if (!cr6.eq) goto loc_82B0290C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x82B028E8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b02918
	if (!cr6.eq) goto loc_82B02918;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
loc_82B0290C:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r29,r24
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, xer);
	// blt cr6,0x82b028bc
	if (cr6.lt) goto loc_82B028BC;
loc_82B02918:
	// cmplw cr6,r28,r25
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r25.u32, xer);
	// ble cr6,0x82b02984
	if (!cr6.gt) goto loc_82B02984;
	// addi r30,r28,-4
	ctx.r30.s64 = ctx.r28.s64 + -4;
loc_82B02924:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82B02934;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b0296c
	if (!cr6.eq) goto loc_82B0296C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82B02950;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b02980
	if (!cr6.eq) goto loc_82B02980;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwzu r11,-4(r31)
	ea = -4 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82B0296C:
	// addi r11,r28,-4
	ctx.r11.s64 = ctx.r28.s64 + -4;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, xer);
	// blt cr6,0x82b02924
	if (cr6.lt) goto loc_82B02924;
loc_82B02980:
	// cmplw cr6,r28,r25
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r25.u32, xer);
loc_82B02984:
	// bne cr6,0x82b029d0
	if (!cr6.eq) goto loc_82B029D0;
	// cmplw cr6,r29,r24
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, xer);
	// beq cr6,0x82b02a28
	if (cr6.eq) goto loc_82B02A28;
	// cmplw cr6,r26,r29
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r29.u32, xer);
	// beq cr6,0x82b029a8
	if (cr6.eq) goto loc_82B029A8;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
loc_82B029A8:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// b 0x82b028b4
	goto loc_82B028B4;
loc_82B029D0:
	// addi r11,r28,-4
	ctx.r11.s64 = ctx.r28.s64 + -4;
	// cmplw cr6,r29,r24
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, xer);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// bne cr6,0x82b02a10
	if (!cr6.eq) goto loc_82B02A10;
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// beq cr6,0x82b029fc
	if (cr6.eq) goto loc_82B029FC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_82B029FC:
	// lwzu r11,-4(r26)
	ea = -4 + ctx.r26.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r26.u32 = ea;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x82b028b4
	goto loc_82B028B4;
loc_82B02A10:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82b028b4
	goto loc_82B028B4;
loc_82B02A28:
	// stw r31,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r31.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r26,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r26.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B02A3C"))) PPC_WEAK_FUNC(sub_82B02A3C);
PPC_FUNC_IMPL(__imp__sub_82B02A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B02A40"))) PPC_WEAK_FUNC(sub_82B02A40);
PPC_FUNC_IMPL(__imp__sub_82B02A40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B02A48;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// ble cr6,0x82b02aa4
	if (!cr6.gt) goto loc_82B02AA4;
	// addi r29,r3,-4
	ctx.r29.s64 = ctx.r3.s64 + -4;
loc_82B02A68:
	// lwzx r10,r29,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// addi r31,r11,-4
	ctx.r31.s64 = ctx.r11.s64 + -4;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// srawi r5,r31,2
	xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r31.s32 >> 2;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stwx r9,r29,r11
	PPC_STORE_U32(ctx.r29.u32 + ctx.r11.u32, ctx.r9.u32);
	// bl 0x82b01a50
	ctx.lr = 0x82B02A94;
	sub_82B01A50(ctx, base);
	// rlwinm r8,r31,0,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFC;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmpwi cr6,r8,4
	cr6.compare<int32_t>(ctx.r8.s32, 4, xer);
	// bgt cr6,0x82b02a68
	if (cr6.gt) goto loc_82B02A68;
loc_82B02AA4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B02AAC"))) PPC_WEAK_FUNC(sub_82B02AAC);
PPC_FUNC_IMPL(__imp__sub_82B02AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B02AB0"))) PPC_WEAK_FUNC(sub_82B02AB0);
PPC_FUNC_IMPL(__imp__sub_82B02AB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82B02AB8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,162
	ctx.r11.s64 = 10616832;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,14275
	ctx.r10.u64 = ctx.r11.u64 | 14275;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82b02adc
	if (!cr6.gt) goto loc_82B02ADC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x82B02ADC;
	sub_831CC150(ctx, base);
loc_82B02ADC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r28,404
	ctx.r28.s64 = 404;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r28
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r28.s32);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// bge cr6,0x82b02b68
	if (!cr6.lt) goto loc_82B02B68;
	// li r27,2
	ctx.r27.s64 = 2;
	// mulli r29,r4,404
	ctx.r29.s64 = ctx.r4.s64 * 404;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B02B14;
	sub_82595718(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r6,r31,12
	ctx.r6.s64 = ctx.r31.s64 + 12;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82b026c8
	ctx.lr = 0x82B02B2C;
	sub_82B026C8(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// divw r28,r10,r28
	ctx.r28.s32 = PPCDivide(ctx.r10.s32, ctx.r28.s32);
	// beq cr6,0x82b02b50
	if (cr6.eq) goto loc_82B02B50;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x82B02B50;
	sub_825952B8(ctx, base);
loc_82B02B50:
	// mulli r11,r28,404
	ctx.r11.s64 = ctx.r28.s64 * 404;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// add r10,r29,r30
	ctx.r10.u64 = ctx.r29.u64 + ctx.r30.u64;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
loc_82B02B68:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B02B70"))) PPC_WEAK_FUNC(sub_82B02B70);
PPC_FUNC_IMPL(__imp__sub_82B02B70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,162
	ctx.r10.s64 = 10616832;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,404
	ctx.r9.s64 = 404;
	// ori r8,r10,14275
	ctx.r8.u64 = ctx.r10.u64 | 14275;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// subf r5,r4,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r4.s64;
	// divw r10,r6,r9
	ctx.r10.s32 = PPCDivide(ctx.r6.s32, ctx.r9.s32);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bge cr6,0x82b02ba4
	if (!cr6.lt) goto loc_82B02BA4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// b 0x831cc150
	sub_831CC150(ctx, base);
	return;
loc_82B02BA4:
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// divw r11,r6,r9
	ctx.r11.s32 = PPCDivide(ctx.r6.s32, ctx.r9.s32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r8,r9,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// blt cr6,0x82b02bd4
	if (cr6.lt) goto loc_82B02BD4;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_82B02BD4:
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x82b02be0
	if (!cr6.lt) goto loc_82B02BE0;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_82B02BE0:
	// b 0x82b02ab0
	sub_82B02AB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B02BE4"))) PPC_WEAK_FUNC(sub_82B02BE4);
PPC_FUNC_IMPL(__imp__sub_82B02BE4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B02BE8"))) PPC_WEAK_FUNC(sub_82B02BE8);
PPC_FUNC_IMPL(__imp__sub_82B02BE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82B02BF0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// ble cr6,0x82b02ca0
	if (!cr6.gt) goto loc_82B02CA0;
loc_82B02C14:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble cr6,0x82b02cc4
	if (!cr6.gt) goto loc_82B02CC4;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b027c8
	ctx.lr = 0x82B02C30;
	sub_82B027C8(ctx, base);
	// srawi r11,r29,1
	xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r10,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r27,84(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r9,r27,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r27.s64;
	// subf r8,r30,r26
	ctx.r8.s64 = ctx.r26.s64 - ctx.r30.s64;
	// rlwinm r7,r9,0,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r6,r8,0,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpw cr6,r6,r7
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, xer);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bge cr6,0x82b02c80
	if (!cr6.lt) goto loc_82B02C80;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b02be8
	ctx.lr = 0x82B02C78;
	sub_82B02BE8(ctx, base);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// b 0x82b02c90
	goto loc_82B02C90;
loc_82B02C80:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82b02be8
	ctx.lr = 0x82B02C8C;
	sub_82B02BE8(ctx, base);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_82B02C90:
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// bgt cr6,0x82b02c14
	if (cr6.gt) goto loc_82B02C14;
loc_82B02CA0:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// ble cr6,0x82b02cbc
	if (!cr6.gt) goto loc_82B02CBC;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b02530
	ctx.lr = 0x82B02CBC;
	sub_82B02530(ctx, base);
loc_82B02CBC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82B02CC4:
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// ble cr6,0x82b02ca0
	if (!cr6.gt) goto loc_82B02CA0;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// ble cr6,0x82b02cec
	if (!cr6.gt) goto loc_82B02CEC;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b02448
	ctx.lr = 0x82B02CEC;
	sub_82B02448(ctx, base);
loc_82B02CEC:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b02a40
	ctx.lr = 0x82B02CFC;
	sub_82B02A40(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B02D04"))) PPC_WEAK_FUNC(sub_82B02D04);
PPC_FUNC_IMPL(__imp__sub_82B02D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B02D08"))) PPC_WEAK_FUNC(sub_82B02D08);
PPC_FUNC_IMPL(__imp__sub_82B02D08) {
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
	// lwz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b02db8
	if (cr6.eq) goto loc_82B02DB8;
	// lbz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 72);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b02db8
	if (cr6.eq) goto loc_82B02DB8;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// addi r4,r10,9524
	ctx.r4.s64 = ctx.r10.s64 + 9524;
	// lwz r9,100(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B02D58;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b02db8
	if (cr6.eq) goto loc_82B02DB8;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,108(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a946c0
	ctx.lr = 0x82B02D74;
	sub_82A946C0(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b02d88
	if (cr6.lt) goto loc_82B02D88;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b02d8c
	goto loc_82B02D8C;
loc_82B02D88:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82B02D8C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B02DA4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82B02DAC;
	sub_8387E8E0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83545640
	ctx.lr = 0x82B02DB8;
	sub_83545640(ctx, base);
loc_82B02DB8:
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

__attribute__((alias("__imp__sub_82B02DD0"))) PPC_WEAK_FUNC(sub_82B02DD0);
PPC_FUNC_IMPL(__imp__sub_82B02DD0) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// bge cr6,0x82b02e08
	if (!cr6.lt) goto loc_82B02E08;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x82b02e0c
	if (!cr6.gt) goto loc_82B02E0C;
loc_82B02E08:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82B02E0C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b02e5c
	if (cr6.eq) goto loc_82B02E5C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,404
	ctx.r9.s64 = 404;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r7,r10,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// divw r30,r7,r9
	ctx.r30.s32 = PPCDivide(ctx.r7.s32, ctx.r9.s32);
	// bne cr6,0x82b02e40
	if (!cr6.eq) goto loc_82B02E40;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b02b70
	ctx.lr = 0x82B02E40;
	sub_82B02B70(ctx, base);
loc_82B02E40:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r11,r30,404
	ctx.r11.s64 = ctx.r30.s64 * 404;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b02e8c
	if (cr6.eq) goto loc_82B02E8C;
	// b 0x82b02e84
	goto loc_82B02E84;
loc_82B02E5C:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82b02e74
	if (!cr6.eq) goto loc_82B02E74;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b02b70
	ctx.lr = 0x82B02E74;
	sub_82B02B70(ctx, base);
loc_82B02E74:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b02e8c
	if (cr6.eq) goto loc_82B02E8C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82B02E84:
	// li r5,404
	ctx.r5.s64 = 404;
	// bl 0x831ce980
	ctx.lr = 0x82B02E8C;
	sub_831CE980(ctx, base);
loc_82B02E8C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,404
	ctx.r11.s64 = ctx.r11.s64 + 404;
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

__attribute__((alias("__imp__sub_82B02EB0"))) PPC_WEAK_FUNC(sub_82B02EB0);
PPC_FUNC_IMPL(__imp__sub_82B02EB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82B02EB8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82c0fbb8
	ctx.lr = 0x82B02EC4;
	sub_82C0FBB8(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r9,r11,10048
	ctx.r9.s64 = ctx.r11.s64 + 10048;
	// addi r8,r10,-17088
	ctx.r8.s64 = ctx.r10.s64 + -17088;
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
	// lis r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// addi r28,r31,128
	ctx.r28.s64 = ctx.r31.s64 + 128;
	// stw r29,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r29.u32);
	// li r27,5
	ctx.r27.s64 = 5;
	// stw r29,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r29.u32);
	// ori r30,r11,65535
	ctx.r30.u64 = ctx.r11.u64 | 65535;
	// stw r29,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r29.u32);
	// stw r29,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r29.u32);
	// stw r29,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r29.u32);
	// stw r29,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r29.u32);
loc_82B02F0C:
	// li r5,404
	ctx.r5.s64 = 404;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x82B02F1C;
	sub_831CDCF0(ctx, base);
	// sth r30,0(r28)
	PPC_STORE_U16(ctx.r28.u32 + 0, ctx.r30.u16);
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// addi r28,r28,404
	ctx.r28.s64 = ctx.r28.s64 + 404;
	// bge 0x82b02f0c
	if (!cr0.lt) goto loc_82B02F0C;
	// addi r28,r31,2552
	ctx.r28.s64 = ctx.r31.s64 + 2552;
	// li r27,2
	ctx.r27.s64 = 2;
loc_82B02F34:
	// li r5,404
	ctx.r5.s64 = 404;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x82B02F44;
	sub_831CDCF0(ctx, base);
	// sth r30,0(r28)
	PPC_STORE_U16(ctx.r28.u32 + 0, ctx.r30.u16);
	// addic. r27,r27,-1
	xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// addi r28,r28,404
	ctx.r28.s64 = ctx.r28.s64 + 404;
	// bge 0x82b02f34
	if (!cr0.lt) goto loc_82B02F34;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// stw r29,3764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3764, ctx.r29.u32);
	// stw r29,3768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3768, ctx.r29.u32);
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// stw r29,3772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3772, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r28,r10,-3492
	ctx.r28.s64 = ctx.r10.s64 + -3492;
	// lwz r11,-3400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3400);
	// sth r30,3784(r31)
	PPC_STORE_U16(ctx.r31.u32 + 3784, ctx.r30.u16);
	// sth r30,3786(r31)
	PPC_STORE_U16(ctx.r31.u32 + 3786, ctx.r30.u16);
	// sth r30,3788(r31)
	PPC_STORE_U16(ctx.r31.u32 + 3788, ctx.r30.u16);
	// stw r29,3792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3792, ctx.r29.u32);
	// stw r11,3780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3780, ctx.r11.u32);
	// stw r29,3796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3796, ctx.r29.u32);
	// lwz r4,-3492(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3492);
	// bl 0x82d20ae0
	ctx.lr = 0x82B02F94;
	sub_82D20AE0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x82d23390
	ctx.lr = 0x82B02FA4;
	sub_82D23390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// bl 0x82d20ae0
	ctx.lr = 0x82B02FB0;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B02FBC"))) PPC_WEAK_FUNC(sub_82B02FBC);
PPC_FUNC_IMPL(__imp__sub_82B02FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B02FC0"))) PPC_WEAK_FUNC(sub_82B02FC0);
PPC_FUNC_IMPL(__imp__sub_82B02FC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B02FC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,10048
	ctx.r9.s64 = ctx.r11.s64 + 10048;
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
	// lwz r4,3764(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3764);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82b03004
	if (cr6.eq) goto loc_82B03004;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x82B03004;
	sub_825952B8(ctx, base);
loc_82B03004:
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,3768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3768, ctx.r30.u32);
	// stw r30,3772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3772, ctx.r30.u32);
	// stw r30,3764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3764, ctx.r30.u32);
	// lwz r4,112(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82b0302c
	if (cr6.eq) goto loc_82B0302C;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x82B0302C;
	sub_825952B8(ctx, base);
loc_82B0302C:
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// bl 0x82c0fc10
	ctx.lr = 0x82B03040;
	sub_82C0FC10(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B03048"))) PPC_WEAK_FUNC(sub_82B03048);
PPC_FUNC_IMPL(__imp__sub_82B03048) {
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
	// bl 0x82b02fc0
	ctx.lr = 0x82B03068;
	sub_82B02FC0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b03080
	if (cr6.eq) goto loc_82B03080;
	// bl 0x82416268
	ctx.lr = 0x82B0307C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B03080:
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

__attribute__((alias("__imp__sub_82B03098"))) PPC_WEAK_FUNC(sub_82B03098);
PPC_FUNC_IMPL(__imp__sub_82B03098) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82B030A0;
	__savegprlr_23(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r3,104(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// addi r24,r11,9688
	ctx.r24.s64 = ctx.r11.s64 + 9688;
	// addi r4,r24,-132
	ctx.r4.s64 = ctx.r24.s64 + -132;
	// bl 0x82d2f098
	ctx.lr = 0x82B030BC;
	sub_82D2F098(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b033e0
	if (cr6.eq) goto loc_82B033E0;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82B030D0;
	sub_82D2AEC8(ctx, base);
	// addi r4,r24,-120
	ctx.r4.s64 = ctx.r24.s64 + -120;
	// lwz r3,104(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 104);
	// bl 0x82d2f098
	ctx.lr = 0x82B030DC;
	sub_82D2F098(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b033e0
	if (cr6.eq) goto loc_82B033E0;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x82B030F4;
	sub_82D2AEC8(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82B030F8;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r23,48(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x82d33c10
	ctx.lr = 0x82B0310C;
	sub_82D33C10(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b03248
	if (cr6.eq) goto loc_82B03248;
	// addi r28,r25,128
	ctx.r28.s64 = ctx.r25.s64 + 128;
loc_82B03118:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B03124;
	sub_82D33DB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b03230
	if (cr6.eq) goto loc_82B03230;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// addi r4,r24,-96
	ctx.r4.s64 = ctx.r24.s64 + -96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B0314C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b03230
	if (cr6.eq) goto loc_82B03230;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,25
	ctx.r4.s64 = 25;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2d510
	ctx.lr = 0x82B03168;
	sub_82D2D510(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b03230
	if (cr6.eq) goto loc_82B03230;
	// lhz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r10,99
	cr6.compare<uint32_t>(ctx.r10.u32, 99, xer);
	// bne cr6,0x82b031b0
	if (!cr6.eq) goto loc_82B031B0;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2b608
	ctx.lr = 0x82B03194;
	sub_82D2B608(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82B031A4;
	sub_82D2AEC8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82b03228
	goto loc_82B03228;
loc_82B031B0:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x82B031BC;
	sub_82D2AEC8(ctx, base);
	// lbz r10,403(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 403);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b031ec
	if (!cr6.eq) goto loc_82B031EC;
	// addi r4,r24,-84
	ctx.r4.s64 = ctx.r24.s64 + -84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82B031D4;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d32958
	ctx.lr = 0x82B031E0;
	sub_82D32958(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82B031E8;
	sub_8387E8E0(ctx, base);
	// b 0x82b03220
	goto loc_82B03220;
loc_82B031EC:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lhz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// bl 0x8311c338
	ctx.lr = 0x82B031F8;
	sub_8311C338(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r30,88(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82aa38e0
	ctx.lr = 0x82B0320C;
	sub_82AA38E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82d32c58
	ctx.lr = 0x82B03220;
	sub_82D32C58(ctx, base);
loc_82B03220:
	// lbz r4,402(r28)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r28.u32 + 402);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B03228:
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d2aec8
	ctx.lr = 0x82B03230;
	sub_82D2AEC8(ctx, base);
loc_82B03230:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,404
	ctx.r28.s64 = ctx.r28.s64 + 404;
	// bl 0x82d33c10
	ctx.lr = 0x82B03240;
	sub_82D33C10(ctx, base);
	// cmplw cr6,r27,r3
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r3.u32, xer);
	// blt cr6,0x82b03118
	if (cr6.lt) goto loc_82B03118;
loc_82B03248:
	// addi r4,r24,-40
	ctx.r4.s64 = ctx.r24.s64 + -40;
	// lwz r3,104(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 104);
	// bl 0x82d2f098
	ctx.lr = 0x82B03254;
	sub_82D2F098(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b033e0
	if (cr6.eq) goto loc_82B033E0;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x82B0326C;
	sub_82D2AEC8(ctx, base);
	// lwz r11,100(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 100);
	// addi r3,r27,100
	ctx.r3.s64 = ctx.r27.s64 + 100;
	// addi r4,r24,-24
	ctx.r4.s64 = ctx.r24.s64 + -24;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B03284;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b033e0
	if (cr6.eq) goto loc_82B033E0;
	// lis r4,26
	ctx.r4.s64 = 1703936;
	// ori r4,r4,640
	ctx.r4.u64 = ctx.r4.u64 | 640;
	// bl 0x82d29598
	ctx.lr = 0x82B03298;
	sub_82D29598(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// bl 0x82d33c10
	ctx.lr = 0x82B032A4;
	sub_82D33C10(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b033e0
	if (cr6.eq) goto loc_82B033E0;
	// addi r28,r25,2552
	ctx.r28.s64 = ctx.r25.s64 + 2552;
loc_82B032B0:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B032BC;
	sub_82D33DB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b033c8
	if (cr6.eq) goto loc_82B033C8;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// addi r4,r24,-12
	ctx.r4.s64 = ctx.r24.s64 + -12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B032E4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b033c8
	if (cr6.eq) goto loc_82B033C8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,25
	ctx.r4.s64 = 25;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2d510
	ctx.lr = 0x82B03300;
	sub_82D2D510(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b033c8
	if (cr6.eq) goto loc_82B033C8;
	// lhz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r10,99
	cr6.compare<uint32_t>(ctx.r10.u32, 99, xer);
	// bne cr6,0x82b03348
	if (!cr6.eq) goto loc_82B03348;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2b608
	ctx.lr = 0x82B0332C;
	sub_82D2B608(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82B0333C;
	sub_82D2AEC8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82b033c0
	goto loc_82B033C0;
loc_82B03348:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x82B03354;
	sub_82D2AEC8(ctx, base);
	// lbz r10,403(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 403);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b03384
	if (!cr6.eq) goto loc_82B03384;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82B0336C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d32958
	ctx.lr = 0x82B03378;
	sub_82D32958(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82B03380;
	sub_8387E8E0(ctx, base);
	// b 0x82b033b8
	goto loc_82B033B8;
loc_82B03384:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lhz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// bl 0x8311c338
	ctx.lr = 0x82B03390;
	sub_8311C338(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r30,88(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82aa38e0
	ctx.lr = 0x82B033A4;
	sub_82AA38E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82d32c58
	ctx.lr = 0x82B033B8;
	sub_82D32C58(ctx, base);
loc_82B033B8:
	// lbz r4,402(r28)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r28.u32 + 402);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B033C0:
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d2aec8
	ctx.lr = 0x82B033C8;
	sub_82D2AEC8(ctx, base);
loc_82B033C8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r28,r28,404
	ctx.r28.s64 = ctx.r28.s64 + 404;
	// bl 0x82d33c10
	ctx.lr = 0x82B033D8;
	sub_82D33C10(ctx, base);
	// cmplw cr6,r26,r3
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r3.u32, xer);
	// blt cr6,0x82b032b0
	if (cr6.lt) goto loc_82B032B0;
loc_82B033E0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B033E8"))) PPC_WEAK_FUNC(sub_82B033E8);
PPC_FUNC_IMPL(__imp__sub_82B033E8) {
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
	// li r9,148
	ctx.r9.s64 = 148;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// lis r8,-32203
	ctx.r8.s64 = -2110455808;
	// stb r11,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r11.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// addi r4,r8,-22544
	ctx.r4.s64 = ctx.r8.s64 + -22544;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x8259cc28
	ctx.lr = 0x82B03424;
	sub_8259CC28(ctx, base);
	// lwz r6,120(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// li r7,6
	ctx.r7.s64 = 6;
	// cmplwi cr6,r6,16
	cr6.compare<uint32_t>(ctx.r6.u32, 16, xer);
	// stw r7,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r7.u32);
	// blt cr6,0x82b0344c
	if (cr6.lt) goto loc_82B0344C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B0344C;
	sub_825952B8(ctx, base);
loc_82B0344C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B0345C"))) PPC_WEAK_FUNC(sub_82B0345C);
PPC_FUNC_IMPL(__imp__sub_82B0345C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B03460"))) PPC_WEAK_FUNC(sub_82B03460);
PPC_FUNC_IMPL(__imp__sub_82B03460) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x82B03468;
	__savegprlr_20(ctx, base);
	// stwu r1,-880(r1)
	ea = -880 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r24,r11,9154
	ctx.r24.s64 = ctx.r11.s64 + 9154;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// addi r4,r24,654
	ctx.r4.s64 = ctx.r24.s64 + 654;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B03494;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b03ab4
	if (cr6.eq) goto loc_82B03AB4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19ba0
	ctx.lr = 0x82B034A8;
	sub_82D19BA0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1c1a8
	ctx.lr = 0x82B034B4;
	sub_82D1C1A8(ctx, base);
	// addi r4,r24,670
	ctx.r4.s64 = ctx.r24.s64 + 670;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x82d2f098
	ctx.lr = 0x82B034C4;
	sub_82D2F098(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b03ab4
	if (cr6.eq) goto loc_82B03AB4;
	// li r5,404
	ctx.r5.s64 = 404;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x831cdcf0
	ctx.lr = 0x82B034E0;
	sub_831CDCF0(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r29,1
	cr6.compare<uint32_t>(ctx.r29.u32, 1, xer);
	// ori r20,r11,65535
	ctx.r20.u64 = ctx.r11.u64 | 65535;
	// sth r20,368(r1)
	PPC_STORE_U16(ctx.r1.u32 + 368, ctx.r20.u16);
	// blt cr6,0x82b03540
	if (cr6.lt) goto loc_82B03540;
	// beq cr6,0x82b03528
	if (cr6.eq) goto loc_82B03528;
	// cmplwi cr6,r29,3
	cr6.compare<uint32_t>(ctx.r29.u32, 3, xer);
	// bge cr6,0x82b03560
	if (!cr6.lt) goto loc_82B03560;
	// lwz r11,3764(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3764);
	// li r10,404
	ctx.r10.s64 = 404;
	// lwz r9,3768(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3768);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r10,r8,r10
	ctx.r10.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, xer);
	// ble cr6,0x82b03ab4
	if (!cr6.gt) goto loc_82B03AB4;
	// mulli r10,r30,404
	ctx.r10.s64 = ctx.r30.s64 * 404;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82b03554
	goto loc_82B03554;
loc_82B03528:
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(ctx.r30.u32, 3, xer);
	// bge cr6,0x82b03ab4
	if (!cr6.lt) goto loc_82B03AB4;
	// mulli r11,r30,404
	ctx.r11.s64 = ctx.r30.s64 * 404;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r4,r11,2552
	ctx.r4.s64 = ctx.r11.s64 + 2552;
	// b 0x82b03554
	goto loc_82B03554;
loc_82B03540:
	// cmplwi cr6,r30,6
	cr6.compare<uint32_t>(ctx.r30.u32, 6, xer);
	// bge cr6,0x82b03ab4
	if (!cr6.lt) goto loc_82B03AB4;
	// mulli r11,r30,404
	ctx.r11.s64 = ctx.r30.s64 * 404;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r4,r11,128
	ctx.r4.s64 = ctx.r11.s64 + 128;
loc_82B03554:
	// li r5,404
	ctx.r5.s64 = 404;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x831ce980
	ctx.lr = 0x82B03560;
	sub_831CE980(ctx, base);
loc_82B03560:
	// lhz r11,368(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 368);
	// addi r3,r1,82
	ctx.r3.s64 = ctx.r1.s64 + 82;
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// bl 0x83153330
	ctx.lr = 0x82B03570;
	sub_83153330(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B03578;
	sub_831156E8(ctx, base);
	// lhz r4,82(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311c338
	ctx.lr = 0x82B03584;
	sub_8311C338(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83125548
	ctx.lr = 0x82B035A0;
	sub_83125548(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d2fde0
	ctx.lr = 0x82B035B0;
	sub_82D2FDE0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82B035B8;
	sub_8387E8E0(ctx, base);
	// lwz r10,100(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// addi r23,r28,100
	ctx.r23.s64 = ctx.r28.s64 + 100;
	// addi r4,r24,678
	ctx.r4.s64 = ctx.r24.s64 + 678;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B035D4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b03ab4
	if (cr6.eq) goto loc_82B03AB4;
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// ori r4,r4,644
	ctx.r4.u64 = ctx.r4.u64 | 644;
	// bl 0x82d29598
	ctx.lr = 0x82B035E8;
	sub_82D29598(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// addi r30,r1,370
	ctx.r30.s64 = ctx.r1.s64 + 370;
loc_82B035FC:
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b03628
	if (cr6.eq) goto loc_82B03628;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x835977d8
	ctx.lr = 0x82B03618;
	sub_835977D8(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// cmplwi cr6,r29,200
	cr6.compare<uint32_t>(ctx.r29.u32, 200, xer);
	// blt cr6,0x82b035fc
	if (cr6.lt) goto loc_82B035FC;
loc_82B03628:
	// lwz r26,96(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r11,-32080
	ctx.r11.s64 = -2102394880;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r6,r11,6568
	ctx.r6.s64 = ctx.r11.s64 + 6568;
	// subf r10,r26,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r26.s64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// srawi r25,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r25.s64 = ctx.r10.s32 >> 2;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// bl 0x82b02be8
	ctx.lr = 0x82B0364C;
	sub_82B02BE8(ctx, base);
	// lis r11,26
	ctx.r11.s64 = 1703936;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r28,15
	ctx.r28.s64 = 15;
	// ori r27,r11,641
	ctx.r27.u64 = ctx.r11.u64 | 641;
loc_82B0365C:
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// addi r4,r24,698
	ctx.r4.s64 = ctx.r24.s64 + 698;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// li r5,7
	ctx.r5.s64 = 7;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r31,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r31.u8);
	// bl 0x8259cc28
	ctx.lr = 0x82B0367C;
	sub_8259CC28(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83165d78
	ctx.lr = 0x82B03690;
	sub_83165D78(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82b036a4
	if (!cr6.lt) goto loc_82B036A4;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
loc_82B036A4:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82d2e228
	ctx.lr = 0x82B036AC;
	sub_82D2E228(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b038a0
	if (cr6.eq) goto loc_82B038A0;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r24,706
	ctx.r4.s64 = ctx.r24.s64 + 706;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B036CC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b038ec
	if (cr6.eq) goto loc_82B038EC;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r25
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, xer);
	// blt cr6,0x82b0370c
	if (cr6.lt) goto loc_82B0370C;
	// addi r4,r24,-31
	ctx.r4.s64 = ctx.r24.s64 + -31;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82B036F0;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82B03704;
	sub_82D291E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// b 0x82b03838
	goto loc_82B03838;
loc_82B0370C:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(ctx.r22.s32, 0, xer);
	// lwzx r10,r11,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// stw r28,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r28.u32);
	// stw r31,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r31.u32);
	// clrlwi r30,r10,16
	ctx.r30.u64 = ctx.r10.u32 & 0xFFFF;
	// stb r31,336(r1)
	PPC_STORE_U8(ctx.r1.u32 + 336, ctx.r31.u8);
	// bne cr6,0x82b037e0
	if (!cr6.eq) goto loc_82B037E0;
	// lwz r11,88(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 88);
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// stw r11,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r11.u32);
	// bl 0x8316f500
	ctx.lr = 0x82B0373C;
	sub_8316F500(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b03770
	if (!cr6.eq) goto loc_82B03770;
	// lhz r3,82(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// bl 0x83194b68
	ctx.lr = 0x82B03750;
	sub_83194B68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b03770
	if (!cr6.eq) goto loc_82B03770;
	// lhz r11,82(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// beq cr6,0x82b03770
	if (cr6.eq) goto loc_82B03770;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bne cr6,0x82b0377c
	if (!cr6.eq) goto loc_82B0377C;
loc_82B03770:
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// add r10,r11,r20
	ctx.r10.u64 = ctx.r11.u64 + ctx.r20.u64;
	// clrlwi r30,r10,16
	ctx.r30.u64 = ctx.r10.u32 & 0xFFFF;
loc_82B0377C:
	// stw r28,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r28.u32);
	// clrlwi r5,r30,16
	ctx.r5.u64 = ctx.r30.u32 & 0xFFFF;
	// stw r31,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r31.u32);
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// stb r31,304(r1)
	PPC_STORE_U8(ctx.r1.u32 + 304, ctx.r31.u8);
	// addi r6,r5,1
	ctx.r6.s64 = ctx.r5.s64 + 1;
	// ori r4,r4,369
	ctx.r4.u64 = ctx.r4.u64 | 369;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82d042a8
	ctx.lr = 0x82B037A0;
	sub_82D042A8(ctx, base);
	// lwz r11,324(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// lwz r5,304(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82b037b4
	if (!cr6.lt) goto loc_82B037B4;
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
loc_82B037B4:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82d042a8
	ctx.lr = 0x82B037C0;
	sub_82D042A8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82B037D4;
	sub_82D291E0(ctx, base);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x8387e8e0
	ctx.lr = 0x82B037DC;
	sub_8387E8E0(ctx, base);
	// b 0x82b03834
	goto loc_82B03834;
loc_82B037E0:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// clrldi r4,r30,48
	ctx.r4.u64 = ctx.r30.u64 & 0xFFFF;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83161f10
	ctx.lr = 0x82B037F4;
	sub_83161F10(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b03808
	if (cr6.lt) goto loc_82B03808;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b0380c
	goto loc_82B0380C;
loc_82B03808:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_82B0380C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82d042a8
	ctx.lr = 0x82B03818;
	sub_82D042A8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82B03820;
	sub_8387E8E0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82B03834;
	sub_82D291E0(ctx, base);
loc_82B03834:
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
loc_82B03838:
	// bl 0x8387e8e0
	ctx.lr = 0x82B0383C;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82B03844;
	sub_8387E8E0(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// blt cr6,0x82b0365c
	if (cr6.lt) goto loc_82B0365C;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r4,r24,726
	ctx.r4.s64 = ctx.r24.s64 + 726;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B03870;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b03938
	if (!cr6.eq) goto loc_82B03938;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x82b03ab4
	if (cr6.eq) goto loc_82B03AB4;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,188
	ctx.r3.s64 = ctx.r1.s64 + 188;
	// stw r11,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x825952b8
	ctx.lr = 0x82B03898;
	sub_825952B8(ctx, base);
	// addi r1,r1,880
	ctx.r1.s64 = ctx.r1.s64 + 880;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_82B038A0:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// li r29,2
	ctx.r29.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b038c0
	if (cr6.lt) goto loc_82B038C0;
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82B038C0;
	sub_825952B8(ctx, base);
loc_82B038C0:
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// beq cr6,0x82b03ab4
	if (cr6.eq) goto loc_82B03AB4;
	// stw r29,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r29.u32);
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x825952b8
	ctx.lr = 0x82B038E4;
	sub_825952B8(ctx, base);
	// addi r1,r1,880
	ctx.r1.s64 = ctx.r1.s64 + 880;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_82B038EC:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// li r29,2
	ctx.r29.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b0390c
	if (cr6.lt) goto loc_82B0390C;
	// stw r29,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r29.u32);
	// addi r3,r1,180
	ctx.r3.s64 = ctx.r1.s64 + 180;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82B0390C;
	sub_825952B8(ctx, base);
loc_82B0390C:
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// beq cr6,0x82b03ab4
	if (cr6.eq) goto loc_82B03AB4;
	// stw r29,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r29.u32);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x825952b8
	ctx.lr = 0x82B03930;
	sub_825952B8(ctx, base);
	// addi r1,r1,880
	ctx.r1.s64 = ctx.r1.s64 + 880;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_82B03938:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// bne cr6,0x82b039a0
	if (!cr6.eq) goto loc_82B039A0;
	// stw r28,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r28.u32);
	// addi r4,r24,746
	ctx.r4.s64 = ctx.r24.s64 + 746;
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r31,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r31.u8);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8259cc28
	ctx.lr = 0x82B0395C;
	sub_8259CC28(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82B03970;
	sub_82D291E0(ctx, base);
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// li r29,2
	ctx.r29.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b03990
	if (cr6.lt) goto loc_82B03990;
	// stw r29,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r29.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x825952b8
	ctx.lr = 0x82B03990;
	sub_825952B8(ctx, base);
loc_82B03990:
	// stw r28,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r28.u32);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// stb r31,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r31.u8);
	// b 0x82b03a00
	goto loc_82B03A00;
loc_82B039A0:
	// stw r28,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r28.u32);
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// stb r31,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r31.u8);
	// ori r4,r4,645
	ctx.r4.u64 = ctx.r4.u64 | 645;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82d042a8
	ctx.lr = 0x82B039C0;
	sub_82D042A8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82B039D4;
	sub_82D291E0(ctx, base);
	// lwz r11,260(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// li r29,2
	ctx.r29.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b039f4
	if (cr6.lt) goto loc_82B039F4;
	// stw r29,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r29.u32);
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x825952b8
	ctx.lr = 0x82B039F4;
	sub_825952B8(ctx, base);
loc_82B039F4:
	// stw r28,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r28.u32);
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// stb r31,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r31.u8);
loc_82B03A00:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r4,r24,750
	ctx.r4.s64 = ctx.r24.s64 + 750;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B03A18;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b03a44
	if (!cr6.eq) goto loc_82B03A44;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x82b03ab4
	if (cr6.eq) goto loc_82B03AB4;
	// stw r29,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r29.u32);
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x825952b8
	ctx.lr = 0x82B03A3C;
	sub_825952B8(ctx, base);
	// addi r1,r1,880
	ctx.r1.s64 = ctx.r1.s64 + 880;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
loc_82B03A44:
	// stw r28,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r28.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r31.u8);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x8259cc28
	ctx.lr = 0x82B03A60;
	sub_8259CC28(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82B03A74;
	sub_82D291E0(ctx, base);
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b03a90
	if (cr6.lt) goto loc_82B03A90;
	// stw r29,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r29.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lwz r4,272(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// bl 0x825952b8
	ctx.lr = 0x82B03A90;
	sub_825952B8(ctx, base);
loc_82B03A90:
	// stw r28,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r28.u32);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r31.u32);
	// stb r31,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r31.u8);
	// beq cr6,0x82b03ab4
	if (cr6.eq) goto loc_82B03AB4;
	// stw r29,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r29.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x825952b8
	ctx.lr = 0x82B03AB4;
	sub_825952B8(ctx, base);
loc_82B03AB4:
	// addi r1,r1,880
	ctx.r1.s64 = ctx.r1.s64 + 880;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B03ABC"))) PPC_WEAK_FUNC(sub_82B03ABC);
PPC_FUNC_IMPL(__imp__sub_82B03ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B03AC0"))) PPC_WEAK_FUNC(sub_82B03AC0);
PPC_FUNC_IMPL(__imp__sub_82B03AC0) {
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
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,104(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bne cr6,0x82b03b38
	if (!cr6.eq) goto loc_82B03B38;
	// addi r11,r11,9944
	ctx.r11.s64 = ctx.r11.s64 + 9944;
	// addi r4,r11,-20
	ctx.r4.s64 = ctx.r11.s64 + -20;
	// bctrl 
	ctx.lr = 0x82B03B0C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82b03b28
	if (cr6.eq) goto loc_82B03B28;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1eac0
	ctx.lr = 0x82B03B28;
	sub_82D1EAC0(ctx, base);
loc_82B03B28:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b03098
	ctx.lr = 0x82B03B34;
	sub_82B03098(ctx, base);
	// b 0x82b03b68
	goto loc_82B03B68;
loc_82B03B38:
	// addi r4,r11,9944
	ctx.r4.s64 = ctx.r11.s64 + 9944;
	// bctrl 
	ctx.lr = 0x82B03B40;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82b03b5c
	if (cr6.eq) goto loc_82B03B5C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1eac0
	ctx.lr = 0x82B03B5C;
	sub_82D1EAC0(ctx, base);
loc_82B03B5C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b01d00
	ctx.lr = 0x82B03B68;
	sub_82B01D00(ctx, base);
loc_82B03B68:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b03460
	ctx.lr = 0x82B03B70;
	sub_82B03460(ctx, base);
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

__attribute__((alias("__imp__sub_82B03B88"))) PPC_WEAK_FUNC(sub_82B03B88);
PPC_FUNC_IMPL(__imp__sub_82B03B88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,3796(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3796);
	// bl 0x82d3d908
	ctx.lr = 0x82B03BA8;
	sub_82D3D908(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// bge 0x82b03bc4
	if (!cr0.lt) goto loc_82B03BC4;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_82B03BC4:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// lwz r3,3796(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3796);
	// bl 0x82d3d968
	ctx.lr = 0x82B03BD8;
	sub_82D3D968(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,3796(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3796);
	// bl 0x82d2aec8
	ctx.lr = 0x82B03BE8;
	sub_82D2AEC8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b03ac0
	ctx.lr = 0x82B03BFC;
	sub_82B03AC0(ctx, base);
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

__attribute__((alias("__imp__sub_82B03C10"))) PPC_WEAK_FUNC(sub_82B03C10);
PPC_FUNC_IMPL(__imp__sub_82B03C10) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,3796(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3796);
	// bl 0x82d3d8a8
	ctx.lr = 0x82B03C30;
	sub_82D3D8A8(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// cmpw cr6,r11,r5
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, xer);
	// blt cr6,0x82b03c50
	if (cr6.lt) goto loc_82B03C50;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_82B03C50:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r3,3796(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3796);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x82d3d968
	ctx.lr = 0x82B03C60;
	sub_82D3D968(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,3796(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3796);
	// bl 0x82d2aec8
	ctx.lr = 0x82B03C70;
	sub_82D2AEC8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b03ac0
	ctx.lr = 0x82B03C84;
	sub_82B03AC0(ctx, base);
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

__attribute__((alias("__imp__sub_82B03C98"))) PPC_WEAK_FUNC(sub_82B03C98);
PPC_FUNC_IMPL(__imp__sub_82B03C98) {
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
	// blt cr6,0x82b03cc0
	if (cr6.lt) goto loc_82B03CC0;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b03cc4
	goto loc_82B03CC4;
loc_82B03CC0:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82B03CC4:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,3800
	ctx.r4.s64 = 3800;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B03CE0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b03cfc
	if (cr6.eq) goto loc_82B03CFC;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82b02eb0
	ctx.lr = 0x82B03CF4;
	sub_82B02EB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b03d00
	if (!cr6.eq) goto loc_82B03D00;
loc_82B03CFC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B03D00:
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

__attribute__((alias("__imp__sub_82B03D18"))) PPC_WEAK_FUNC(sub_82B03D18);
PPC_FUNC_IMPL(__imp__sub_82B03D18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab8
	ctx.lr = 0x82B03D20;
	__savegprlr_16(ctx, base);
	// stwu r1,-2352(r1)
	ea = -2352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d34e50
	ctx.lr = 0x82B03D2C;
	sub_82D34E50(ctx, base);
	// bl 0x82d34d38
	ctx.lr = 0x82B03D30;
	sub_82D34D38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b03d48
	if (!cr6.eq) goto loc_82B03D48;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,2352
	ctx.r1.s64 = ctx.r1.s64 + 2352;
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
loc_82B03D48:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B03D50;
	sub_82D19A78(ctx, base);
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b044ac
	if (cr6.eq) goto loc_82B044AC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,9
	ctx.r4.s64 = 9;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bl 0x82d2d510
	ctx.lr = 0x82B03D6C;
	sub_82D2D510(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,3792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3792, ctx.r3.u32);
	// beq cr6,0x82b044ac
	if (cr6.eq) goto loc_82B044AC;
	// lis r4,642
	ctx.r4.s64 = 42074112;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,86
	ctx.r4.u64 = ctx.r4.u64 | 86;
	// bl 0x82d30340
	ctx.lr = 0x82B03D88;
	sub_82D30340(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b01b60
	ctx.lr = 0x82B03D90;
	sub_82B01B60(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82B03D94;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,-3448
	ctx.r4.s64 = ctx.r10.s64 + -3448;
	// lwz r28,48(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// addis r29,r28,222
	ctx.r29.s64 = ctx.r28.s64 + 14548992;
	// addi r29,r29,30348
	ctx.r29.s64 = ctx.r29.s64 + 30348;
	// ld r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// bl 0x825a2298
	ctx.lr = 0x82B03DBC;
	sub_825A2298(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r30,108
	ctx.r30.s64 = 108;
	// li r17,0
	ctx.r17.s64 = 0;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// addi r19,r11,9500
	ctx.r19.s64 = ctx.r11.s64 + 9500;
	// beq cr6,0x82b03e70
	if (cr6.eq) goto loc_82B03E70;
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// ld r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// lwz r11,76(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// lwz r10,80(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw. r7,r8,r30
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r30.s32);
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x82b03e00
	if (!cr0.eq) goto loc_82B03E00;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B03E00;
	sub_831CC188(ctx, base);
loc_82B03E00:
	// std r9,60(r11)
	PPC_STORE_U64(ctx.r11.u32 + 60, ctx.r9.u64);
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r11,76(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// lwz r10,80(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw. r8,r9,r30
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r30.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82b03e28
	if (!cr0.eq) goto loc_82B03E28;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B03E28;
	sub_831CC188(ctx, base);
loc_82B03E28:
	// stw r17,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r17.u32);
	// addi r5,r19,-380
	ctx.r5.s64 = ctx.r19.s64 + -380;
	// stw r17,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r17.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x831178a0
	ctx.lr = 0x82B03E44;
	sub_831178A0(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw. r7,r8,r30
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r30.s32);
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x82b03e6c
	if (!cr0.eq) goto loc_82B03E6C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B03E6C;
	sub_831CC188(ctx, base);
loc_82B03E6C:
	// stw r9,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r9.u32);
loc_82B03E70:
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r11,76(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// lwz r10,80(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw. r8,r9,r30
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r30.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82b03e94
	if (!cr0.eq) goto loc_82B03E94;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B03E94;
	sub_831CC188(ctx, base);
loc_82B03E94:
	// stb r17,72(r11)
	PPC_STORE_U8(ctx.r11.u32 + 72, ctx.r17.u8);
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r11,76(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// lwz r10,80(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw. r8,r9,r30
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r30.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82b03ebc
	if (!cr0.eq) goto loc_82B03EBC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B03EBC;
	sub_831CC188(ctx, base);
loc_82B03EBC:
	// li r16,1
	ctx.r16.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r16,101(r11)
	PPC_STORE_U8(ctx.r11.u32 + 101, ctx.r16.u8);
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// bl 0x82bff800
	ctx.lr = 0x82B03ED0;
	sub_82BFF800(ctx, base);
	// stw r17,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r17.u32);
	// addi r5,r19,-380
	ctx.r5.s64 = ctx.r19.s64 + -380;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x831178a0
	ctx.lr = 0x82B03EE8;
	sub_831178A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,3780(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3780);
	// addi r29,r31,3780
	ctx.r29.s64 = ctx.r31.s64 + 3780;
	// stw r17,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r17.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r10,r9,0,0,13
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFC0000) | (ctx.r10.u64 & 0xFFFFFFFF0003FFFF);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// stw r10,3780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3780, ctx.r10.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r8,r7,0,14,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFC0000);
	// stw r8,3780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3780, ctx.r8.u32);
	// bl 0x8316fb10
	ctx.lr = 0x82B03F20;
	sub_8316FB10(ctx, base);
	// sth r3,3784(r31)
	PPC_STORE_U16(ctx.r31.u32 + 3784, ctx.r3.u16);
	// bl 0x831946f8
	ctx.lr = 0x82B03F28;
	sub_831946F8(ctx, base);
	// sth r3,3786(r31)
	PPC_STORE_U16(ctx.r31.u32 + 3786, ctx.r3.u16);
	// lhz r3,3784(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 3784);
	// bl 0x83195ca8
	ctx.lr = 0x82B03F34;
	sub_83195CA8(ctx, base);
	// clrlwi r6,r3,16
	ctx.r6.u64 = ctx.r3.u32 & 0xFFFF;
	// li r18,99
	ctx.r18.s64 = 99;
	// sth r3,3788(r31)
	PPC_STORE_U16(ctx.r31.u32 + 3788, ctx.r3.u16);
	// cmplwi cr6,r6,65535
	cr6.compare<uint32_t>(ctx.r6.u32, 65535, xer);
	// bne cr6,0x82b03f4c
	if (!cr6.eq) goto loc_82B03F4C;
	// sth r18,3788(r31)
	PPC_STORE_U16(ctx.r31.u32 + 3788, ctx.r18.u16);
loc_82B03F4C:
	// addis r27,r28,222
	ctx.r27.s64 = ctx.r28.s64 + 14548992;
	// stw r17,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r17.u32);
	// stw r17,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r17.u32);
	// mr r26,r17
	ctx.r26.u64 = ctx.r17.u64;
	// addi r27,r27,-1968
	ctx.r27.s64 = ctx.r27.s64 + -1968;
	// stw r17,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r17.u32);
	// mr r28,r17
	ctx.r28.u64 = ctx.r17.u64;
	// stw r17,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r17.u32);
	// stw r17,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r17.u32);
	// stw r17,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r17.u32);
loc_82B03F74:
	// cmplwi cr6,r26,70
	cr6.compare<uint32_t>(ctx.r26.u32, 70, xer);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// bge cr6,0x82b03f84
	if (!cr6.lt) goto loc_82B03F84;
	// add r30,r27,r28
	ctx.r30.u64 = ctx.r27.u64 + ctx.r28.u64;
loc_82B03F84:
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x82b03fa8
	if (cr6.eq) goto loc_82B03FA8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x82b02dd0
	ctx.lr = 0x82B03F9C;
	sub_82B02DD0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82badd90
	ctx.lr = 0x82B03FA8;
	sub_82BADD90(ctx, base);
loc_82B03FA8:
	// addi r28,r28,404
	ctx.r28.s64 = ctx.r28.s64 + 404;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmplwi cr6,r28,28280
	cr6.compare<uint32_t>(ctx.r28.u32, 28280, xer);
	// blt cr6,0x82b03f74
	if (cr6.lt) goto loc_82B03F74;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8314c958
	ctx.lr = 0x82B03FC0;
	sub_8314C958(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b022d0
	ctx.lr = 0x82B03FD8;
	sub_82B022D0(ctx, base);
	// lis r7,0
	ctx.r7.s64 = 0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r28,r17
	ctx.r28.u64 = ctx.r17.u64;
	// addi r23,r31,128
	ctx.r23.s64 = ctx.r31.s64 + 128;
	// mr r29,r17
	ctx.r29.u64 = ctx.r17.u64;
	// ori r21,r7,65535
	ctx.r21.u64 = ctx.r7.u64 | 65535;
	// addi r27,r11,10372
	ctx.r27.s64 = ctx.r11.s64 + 10372;
	// addi r26,r10,10364
	ctx.r26.s64 = ctx.r10.s64 + 10364;
	// addi r25,r9,10356
	ctx.r25.s64 = ctx.r9.s64 + 10356;
	// addi r24,r8,10344
	ctx.r24.s64 = ctx.r8.s64 + 10344;
loc_82B04010:
	// li r5,404
	ctx.r5.s64 = 404;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x831cdcf0
	ctx.lr = 0x82B04020;
	sub_831CDCF0(ctx, base);
	// li r5,404
	ctx.r5.s64 = 404;
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r21,144(r1)
	PPC_STORE_U16(ctx.r1.u32 + 144, ctx.r21.u16);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x831cdcf0
	ctx.lr = 0x82B04034;
	sub_831CDCF0(ctx, base);
	// sth r21,144(r1)
	PPC_STORE_U16(ctx.r1.u32 + 144, ctx.r21.u16);
	// cmplwi cr6,r22,1
	cr6.compare<uint32_t>(ctx.r22.u32, 1, xer);
	// blt cr6,0x82b0413c
	if (cr6.lt) goto loc_82B0413C;
	// beq cr6,0x82b040c4
	if (cr6.eq) goto loc_82B040C4;
	// cmplwi cr6,r22,3
	cr6.compare<uint32_t>(ctx.r22.u32, 3, xer);
	// bge cr6,0x82b041d4
	if (!cr6.lt) goto loc_82B041D4;
	// cmplwi cr6,r28,3
	cr6.compare<uint32_t>(ctx.r28.u32, 3, xer);
	// blt cr6,0x82b04068
	if (cr6.lt) goto loc_82B04068;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r18,144(r1)
	PPC_STORE_U16(ctx.r1.u32 + 144, ctx.r18.u16);
	// bl 0x82d19a68
	ctx.lr = 0x82B04060;
	sub_82D19A68(ctx, base);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// b 0x82b041c0
	goto loc_82B041C0;
loc_82B04068:
	// add r30,r29,r27
	ctx.r30.u64 = ctx.r29.u64 + ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,1808
	ctx.r3.s64 = ctx.r1.s64 + 1808;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82b02208
	ctx.lr = 0x82B0407C;
	sub_82B02208(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// li r5,404
	ctx.r5.s64 = 404;
	// bl 0x831ce980
	ctx.lr = 0x82B0408C;
	sub_831CE980(ctx, base);
	// lhz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 144);
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// bne cr6,0x82b040b0
	if (!cr6.eq) goto loc_82B040B0;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r11,144(r1)
	PPC_STORE_U16(ctx.r1.u32 + 144, ctx.r11.u16);
	// bl 0x82d19a68
	ctx.lr = 0x82B040A8;
	sub_82D19A68(ctx, base);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// b 0x82b041c0
	goto loc_82B041C0;
loc_82B040B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r16,547(r1)
	PPC_STORE_U8(ctx.r1.u32 + 547, ctx.r16.u8);
	// bl 0x82d19a68
	ctx.lr = 0x82B040BC;
	sub_82D19A68(ctx, base);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// b 0x82b041c0
	goto loc_82B041C0;
loc_82B040C4:
	// cmplwi cr6,r28,3
	cr6.compare<uint32_t>(ctx.r28.u32, 3, xer);
	// blt cr6,0x82b040e0
	if (cr6.lt) goto loc_82B040E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r18,144(r1)
	PPC_STORE_U16(ctx.r1.u32 + 144, ctx.r18.u16);
	// bl 0x82d19a68
	ctx.lr = 0x82B040D8;
	sub_82D19A68(ctx, base);
	// addi r4,r19,-24
	ctx.r4.s64 = ctx.r19.s64 + -24;
	// b 0x82b041c0
	goto loc_82B041C0;
loc_82B040E0:
	// add r30,r29,r26
	ctx.r30.u64 = ctx.r29.u64 + ctx.r26.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,976
	ctx.r3.s64 = ctx.r1.s64 + 976;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82b02208
	ctx.lr = 0x82B040F4;
	sub_82B02208(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// li r5,404
	ctx.r5.s64 = 404;
	// bl 0x831ce980
	ctx.lr = 0x82B04104;
	sub_831CE980(ctx, base);
	// lhz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 144);
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// bne cr6,0x82b04128
	if (!cr6.eq) goto loc_82B04128;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sth r11,144(r1)
	PPC_STORE_U16(ctx.r1.u32 + 144, ctx.r11.u16);
	// bl 0x82d19a68
	ctx.lr = 0x82B04120;
	sub_82D19A68(ctx, base);
	// addi r4,r19,-24
	ctx.r4.s64 = ctx.r19.s64 + -24;
	// b 0x82b041c0
	goto loc_82B041C0;
loc_82B04128:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r16,547(r1)
	PPC_STORE_U8(ctx.r1.u32 + 547, ctx.r16.u8);
	// bl 0x82d19a68
	ctx.lr = 0x82B04134;
	sub_82D19A68(ctx, base);
	// addi r4,r19,-24
	ctx.r4.s64 = ctx.r19.s64 + -24;
	// b 0x82b041c0
	goto loc_82B041C0;
loc_82B0413C:
	// clrlwi r11,r20,24
	ctx.r11.u64 = ctx.r20.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b04164
	if (cr6.eq) goto loc_82B04164;
	// cmplwi cr6,r28,5
	cr6.compare<uint32_t>(ctx.r28.u32, 5, xer);
	// blt cr6,0x82b04158
	if (cr6.lt) goto loc_82B04158;
	// sth r18,144(r1)
	PPC_STORE_U16(ctx.r1.u32 + 144, ctx.r18.u16);
	// b 0x82b041b4
	goto loc_82B041B4;
loc_82B04158:
	// add r30,r29,r24
	ctx.r30.u64 = ctx.r29.u64 + ctx.r24.u64;
	// addi r3,r1,1392
	ctx.r3.s64 = ctx.r1.s64 + 1392;
	// b 0x82b0417c
	goto loc_82B0417C;
loc_82B04164:
	// cmplwi cr6,r28,4
	cr6.compare<uint32_t>(ctx.r28.u32, 4, xer);
	// blt cr6,0x82b04174
	if (cr6.lt) goto loc_82B04174;
	// sth r18,144(r1)
	PPC_STORE_U16(ctx.r1.u32 + 144, ctx.r18.u16);
	// b 0x82b041b4
	goto loc_82B041B4;
loc_82B04174:
	// add r30,r29,r25
	ctx.r30.u64 = ctx.r29.u64 + ctx.r25.u64;
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
loc_82B0417C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82b02208
	ctx.lr = 0x82B04188;
	sub_82B02208(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,404
	ctx.r5.s64 = 404;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x831ce980
	ctx.lr = 0x82B04198;
	sub_831CE980(ctx, base);
	// lhz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 144);
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// bne cr6,0x82b041b0
	if (!cr6.eq) goto loc_82B041B0;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// sth r11,144(r1)
	PPC_STORE_U16(ctx.r1.u32 + 144, ctx.r11.u16);
	// b 0x82b041b4
	goto loc_82B041B4;
loc_82B041B0:
	// stb r16,547(r1)
	PPC_STORE_U8(ctx.r1.u32 + 547, ctx.r16.u8);
loc_82B041B4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a68
	ctx.lr = 0x82B041BC;
	sub_82D19A68(ctx, base);
	// addi r4,r19,-48
	ctx.r4.s64 = ctx.r19.s64 + -48;
loc_82B041C0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B041D4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B041D4:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// li r5,404
	ctx.r5.s64 = 404;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x831ce980
	ctx.lr = 0x82B041E4;
	sub_831CE980(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82badd90
	ctx.lr = 0x82B041F0;
	sub_82BADD90(ctx, base);
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r23,r23,404
	ctx.r23.s64 = ctx.r23.s64 + 404;
	// cmplwi cr6,r29,12
	cr6.compare<uint32_t>(ctx.r29.u32, 12, xer);
	// blt cr6,0x82b04010
	if (cr6.lt) goto loc_82B04010;
	// mr r30,r17
	ctx.r30.u64 = ctx.r17.u64;
loc_82B04208:
	// li r5,404
	ctx.r5.s64 = 404;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x831cdcf0
	ctx.lr = 0x82B04218;
	sub_831CDCF0(ctx, base);
	// li r5,404
	ctx.r5.s64 = 404;
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r21,144(r1)
	PPC_STORE_U16(ctx.r1.u32 + 144, ctx.r21.u16);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x831cdcf0
	ctx.lr = 0x82B0422C;
	sub_831CDCF0(ctx, base);
	// sth r21,144(r1)
	PPC_STORE_U16(ctx.r1.u32 + 144, ctx.r21.u16);
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(ctx.r30.u32, 1, xer);
	// blt cr6,0x82b042ac
	if (cr6.lt) goto loc_82B042AC;
	// beq cr6,0x82b04278
	if (cr6.eq) goto loc_82B04278;
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(ctx.r30.u32, 3, xer);
	// bge cr6,0x82b042e4
	if (!cr6.lt) goto loc_82B042E4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// bl 0x82b02140
	ctx.lr = 0x82B04250;
	sub_82B02140(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// li r5,404
	ctx.r5.s64 = 404;
	// bl 0x831ce980
	ctx.lr = 0x82B04260;
	sub_831CE980(ctx, base);
	// lhz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 144);
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// bne cr6,0x82b042e0
	if (!cr6.eq) goto loc_82B042E0;
	// lhz r11,3788(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 3788);
	// sth r11,144(r1)
	PPC_STORE_U16(ctx.r1.u32 + 144, ctx.r11.u16);
	// b 0x82b042e4
	goto loc_82B042E4;
loc_82B04278:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,1392
	ctx.r3.s64 = ctx.r1.s64 + 1392;
	// bl 0x82b02078
	ctx.lr = 0x82B04284;
	sub_82B02078(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// li r5,404
	ctx.r5.s64 = 404;
	// bl 0x831ce980
	ctx.lr = 0x82B04294;
	sub_831CE980(ctx, base);
	// lhz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 144);
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// bne cr6,0x82b042e0
	if (!cr6.eq) goto loc_82B042E0;
	// lhz r11,3786(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 3786);
	// sth r11,144(r1)
	PPC_STORE_U16(ctx.r1.u32 + 144, ctx.r11.u16);
	// b 0x82b042e4
	goto loc_82B042E4;
loc_82B042AC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,976
	ctx.r3.s64 = ctx.r1.s64 + 976;
	// bl 0x82b01fb0
	ctx.lr = 0x82B042B8;
	sub_82B01FB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// li r5,404
	ctx.r5.s64 = 404;
	// bl 0x831ce980
	ctx.lr = 0x82B042C8;
	sub_831CE980(ctx, base);
	// lhz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 144);
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// bne cr6,0x82b042e0
	if (!cr6.eq) goto loc_82B042E0;
	// lhz r11,3784(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 3784);
	// sth r11,144(r1)
	PPC_STORE_U16(ctx.r1.u32 + 144, ctx.r11.u16);
	// b 0x82b042e4
	goto loc_82B042E4;
loc_82B042E0:
	// stb r16,547(r1)
	PPC_STORE_U8(ctx.r1.u32 + 547, ctx.r16.u8);
loc_82B042E4:
	// mulli r11,r30,404
	ctx.r11.s64 = ctx.r30.s64 * 404;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r11,2552
	ctx.r3.s64 = ctx.r11.s64 + 2552;
	// li r5,404
	ctx.r5.s64 = 404;
	// bl 0x831ce980
	ctx.lr = 0x82B042FC;
	sub_831CE980(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82badd90
	ctx.lr = 0x82B04308;
	sub_82BADD90(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(ctx.r30.u32, 3, xer);
	// blt cr6,0x82b04208
	if (cr6.lt) goto loc_82B04208;
	// lwz r25,128(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r26,132(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r27,96(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// cmplw cr6,r25,r26
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r26.u32, xer);
	// beq cr6,0x82b04390
	if (cr6.eq) goto loc_82B04390;
	// lwz r28,100(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
loc_82B04330:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmplw cr6,r27,r28
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r28.u32, xer);
	// beq cr6,0x82b04364
	if (cr6.eq) goto loc_82B04364;
	// lhz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
loc_82B04340:
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x82b0435c
	if (cr6.eq) goto loc_82B0435C;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// bne cr6,0x82b04340
	if (!cr6.eq) goto loc_82B04340;
	// b 0x82b04364
	goto loc_82B04364;
loc_82B0435C:
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// bne cr6,0x82b04384
	if (!cr6.eq) goto loc_82B04384;
loc_82B04364:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// addi r30,r31,3764
	ctx.r30.s64 = ctx.r31.s64 + 3764;
	// bl 0x82b02208
	ctx.lr = 0x82B04378;
	sub_82B02208(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b02dd0
	ctx.lr = 0x82B04384;
	sub_82B02DD0(ctx, base);
loc_82B04384:
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// cmplw cr6,r29,r26
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, xer);
	// bne cr6,0x82b04330
	if (!cr6.eq) goto loc_82B04330;
loc_82B04390:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B043A0;
	sub_82D19788(ctx, base);
	// lwz r11,3764(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3764);
	// lwz r10,3768(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3768);
	// li r30,2
	ctx.r30.s64 = 2;
	// li r4,6
	ctx.r4.s64 = 6;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82b043d0
	if (!cr6.eq) goto loc_82B043D0;
	// stw r16,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r16.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d19788
	ctx.lr = 0x82B043C8;
	sub_82D19788(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82b043e0
	goto loc_82B043E0;
loc_82B043D0:
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82d19788
	ctx.lr = 0x82B043DC;
	sub_82D19788(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
loc_82B043E0:
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B043EC;
	sub_82D19788(ctx, base);
	// stw r17,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r17.u32);
	// lwz r3,3792(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3792);
	// bl 0x82d2fe58
	ctx.lr = 0x82B043F8;
	sub_82D2FE58(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,3796(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3796, ctx.r3.u32);
	// bne cr6,0x82b04440
	if (!cr6.eq) goto loc_82B04440;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x82b0441c
	if (cr6.eq) goto loc_82B0441C;
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x825952b8
	ctx.lr = 0x82B0441C;
	sub_825952B8(ctx, base);
loc_82B0441C:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x82b044ac
	if (cr6.eq) goto loc_82B044AC;
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x825952b8
	ctx.lr = 0x82B04434;
	sub_825952B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,2352
	ctx.r1.s64 = ctx.r1.s64 + 2352;
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
loc_82B04440:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x82d3d968
	ctx.lr = 0x82B04450;
	sub_82D3D968(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,3796(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3796);
	// bl 0x82d2aec8
	ctx.lr = 0x82B04460;
	sub_82D2AEC8(ctx, base);
	// stb r16,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r16.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b03ac0
	ctx.lr = 0x82B04470;
	sub_82B03AC0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83102db0
	ctx.lr = 0x82B0447C;
	sub_83102DB0(ctx, base);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x82b04494
	if (cr6.eq) goto loc_82B04494;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825952b8
	ctx.lr = 0x82B04494;
	sub_825952B8(ctx, base);
loc_82B04494:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x82b044ac
	if (cr6.eq) goto loc_82B044AC;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x825952b8
	ctx.lr = 0x82B044AC;
	sub_825952B8(ctx, base);
loc_82B044AC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,2352
	ctx.r1.s64 = ctx.r1.s64 + 2352;
	// b 0x831cdb08
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B044B8"))) PPC_WEAK_FUNC(sub_82B044B8);
PPC_FUNC_IMPL(__imp__sub_82B044B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B044C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,-1
	ctx.r31.s64 = -1;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// blt cr6,0x82b0454c
	if (cr6.lt) goto loc_82B0454C;
	// beq cr6,0x82b04524
	if (cr6.eq) goto loc_82B04524;
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// bge cr6,0x82b04574
	if (!cr6.lt) goto loc_82B04574;
	// lwz r11,3764(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3764);
	// li r10,404
	ctx.r10.s64 = 404;
	// lwz r9,3768(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3768);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r10,r8,r10
	ctx.r10.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// ble cr6,0x82b045ec
	if (!cr6.gt) goto loc_82B045EC;
	// mulli r10,r5,404
	ctx.r10.s64 = ctx.r5.s64 * 404;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r10,402(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 402);
	// lhz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b04574
	if (cr6.eq) goto loc_82B04574;
	// stb r29,402(r11)
	PPC_STORE_U8(ctx.r11.u32 + 402, ctx.r29.u8);
	// b 0x82b04570
	goto loc_82B04570;
loc_82B04524:
	// cmplwi cr6,r5,3
	cr6.compare<uint32_t>(ctx.r5.u32, 3, xer);
	// bge cr6,0x82b045ec
	if (!cr6.lt) goto loc_82B045EC;
	// mulli r11,r5,404
	ctx.r11.s64 = ctx.r5.s64 * 404;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbz r10,2954(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2954);
	// lhz r31,2552(r11)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2552);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b04574
	if (cr6.eq) goto loc_82B04574;
	// stb r29,2954(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2954, ctx.r29.u8);
	// b 0x82b04570
	goto loc_82B04570;
loc_82B0454C:
	// cmplwi cr6,r5,6
	cr6.compare<uint32_t>(ctx.r5.u32, 6, xer);
	// bge cr6,0x82b045ec
	if (!cr6.lt) goto loc_82B045EC;
	// mulli r11,r5,404
	ctx.r11.s64 = ctx.r5.s64 * 404;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbz r10,530(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 530);
	// lhz r31,128(r11)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r11.u32 + 128);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b04574
	if (cr6.eq) goto loc_82B04574;
	// stb r29,530(r11)
	PPC_STORE_U8(ctx.r11.u32 + 530, ctx.r29.u8);
loc_82B04570:
	// li r28,1
	ctx.r28.s64 = 1;
loc_82B04574:
	// bl 0x831156e8
	ctx.lr = 0x82B04578;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addis r9,r11,222
	ctx.r9.s64 = ctx.r11.s64 + 14548992;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// addi r9,r9,-1968
	ctx.r9.s64 = ctx.r9.s64 + -1968;
	// clrlwi r8,r31,16
	ctx.r8.u64 = ctx.r31.u32 & 0xFFFF;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82B04594:
	// lhz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r5,r8
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, xer);
	// beq cr6,0x82b045b4
	if (cr6.eq) goto loc_82B045B4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,404
	ctx.r11.s64 = ctx.r11.s64 + 404;
	// cmplwi cr6,r10,70
	cr6.compare<uint32_t>(ctx.r10.u32, 70, xer);
	// blt cr6,0x82b04594
	if (cr6.lt) goto loc_82B04594;
	// b 0x82b045b8
	goto loc_82B045B8;
loc_82B045B4:
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
loc_82B045B8:
	// mulli r11,r7,404
	ctx.r11.s64 = ctx.r7.s64 * 404;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stb r29,402(r11)
	PPC_STORE_U8(ctx.r11.u32 + 402, ctx.r29.u8);
	// beq cr6,0x82b045e8
	if (cr6.eq) goto loc_82B045E8;
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82b03ac0
	ctx.lr = 0x82B045E0;
	sub_82B03AC0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82B045E8:
	// bl 0x82b03460
	ctx.lr = 0x82B045EC;
	sub_82B03460(ctx, base);
loc_82B045EC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B045F4"))) PPC_WEAK_FUNC(sub_82B045F4);
PPC_FUNC_IMPL(__imp__sub_82B045F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B045F8"))) PPC_WEAK_FUNC(sub_82B045F8);
PPC_FUNC_IMPL(__imp__sub_82B045F8) {
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
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,3
	cr6.compare<uint32_t>(ctx.r5.u32, 3, xer);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,160
	ctx.r5.s64 = 160;
	// bge cr6,0x82b04634
	if (!cr6.lt) goto loc_82B04634;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r4,r11,104
	ctx.r4.s64 = ctx.r11.s64 + 104;
	// b 0x82b04638
	goto loc_82B04638;
loc_82B04634:
	// addi r4,r4,104
	ctx.r4.s64 = ctx.r4.s64 + 104;
loc_82B04638:
	// bl 0x831ce980
	ctx.lr = 0x82B0463C;
	sub_831CE980(ctx, base);
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

__attribute__((alias("__imp__sub_82B04654"))) PPC_WEAK_FUNC(sub_82B04654);
PPC_FUNC_IMPL(__imp__sub_82B04654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B04658"))) PPC_WEAK_FUNC(sub_82B04658);
PPC_FUNC_IMPL(__imp__sub_82B04658) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B04660;
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
	ctx.lr = 0x82B04678;
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
	ctx.lr = 0x82B04690;
	sub_82D253F8(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// stw r28,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r28.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r10,12208
	ctx.r7.s64 = ctx.r10.s64 + 12208;
	// addi r6,r9,-17088
	ctx.r6.s64 = ctx.r9.s64 + -17088;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// li r4,-1
	ctx.r4.s64 = -1;
	// stw r6,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r6.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r5,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r5.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// lfs f0,9008(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stb r11,112(r31)
	PPC_STORE_U8(ctx.r31.u32 + 112, ctx.r11.u8);
	// lis r9,-31777
	ctx.r9.s64 = -2082537472;
	// sth r4,116(r31)
	PPC_STORE_U16(ctx.r31.u32 + 116, ctx.r4.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r10.u32);
	// stfs f0,124(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// sth r11,116(r31)
	PPC_STORE_U16(ctx.r31.u32 + 116, ctx.r11.u16);
	// lwz r4,-3164(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + -3164);
	// bl 0x82d20ae0
	ctx.lr = 0x82B046FC;
	sub_82D20AE0(ctx, base);
	// lis r8,-31777
	ctx.r8.s64 = -2082537472;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,-3296(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + -3296);
	// bl 0x82d20ae0
	ctx.lr = 0x82B0470C;
	sub_82D20AE0(ctx, base);
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r7,10996
	ctx.r4.s64 = ctx.r7.s64 + 10996;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d23390
	ctx.lr = 0x82B04720;
	sub_82D23390(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a689e8
	ctx.lr = 0x82B04728;
	sub_82A689E8(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// beq cr6,0x82b0473c
	if (cr6.eq) goto loc_82B0473C;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b0474c
	if (!cr6.eq) goto loc_82B0474C;
loc_82B0473C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B0474C;
	sub_82D19788(ctx, base);
loc_82B0474C:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b04774
	if (cr6.eq) goto loc_82B04774;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B04768;
	sub_82D19788(ctx, base);
	// li r4,224
	ctx.r4.s64 = 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d1a998
	ctx.lr = 0x82B04774;
	sub_82D1A998(ctx, base);
loc_82B04774:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B04784;
	sub_82D19788(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B04794;
	sub_82D19788(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bne cr6,0x82b047b8
	if (!cr6.eq) goto loc_82B047B8;
	// lis r5,29
	ctx.r5.s64 = 1900544;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,252
	ctx.r5.u64 = ctx.r5.u64 | 252;
	// bl 0x82d20eb8
	ctx.lr = 0x82B047B4;
	sub_82D20EB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B047B8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B047C0"))) PPC_WEAK_FUNC(sub_82B047C0);
PPC_FUNC_IMPL(__imp__sub_82B047C0) {
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
	// lwz r11,100(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b0483c
	if (!cr6.eq) goto loc_82B0483C;
	// bl 0x8311e3d0
	ctx.lr = 0x82B047EC;
	sub_8311E3D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8311d640
	ctx.lr = 0x82B047FC;
	sub_8311D640(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82B04800;
	sub_831156E8(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311c148
	ctx.lr = 0x82B0480C;
	sub_8311C148(ctx, base);
	// ld r10,504(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 504);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lhz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rotlwi r7,r8,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r8.u32);
	// sth r9,116(r31)
	PPC_STORE_U16(ctx.r31.u32 + 116, ctx.r9.u16);
	// lwz r6,116(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// stw r6,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r6.u32);
	// stw r7,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r7.u32);
	// b 0x82b04868
	goto loc_82B04868;
loc_82B0483C:
	// bl 0x82d86078
	ctx.lr = 0x82B04840;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b04858
	if (cr6.eq) goto loc_82B04858;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x82B04850;
	sub_82DAB6D0(ctx, base);
	// bl 0x82df16a0
	ctx.lr = 0x82B04854;
	sub_82DF16A0(ctx, base);
	// stw r3,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r3.u32);
loc_82B04858:
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
loc_82B04868:
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

__attribute__((alias("__imp__sub_82B04884"))) PPC_WEAK_FUNC(sub_82B04884);
PPC_FUNC_IMPL(__imp__sub_82B04884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B04888"))) PPC_WEAK_FUNC(sub_82B04888);
PPC_FUNC_IMPL(__imp__sub_82B04888) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// cmplwi cr6,r5,12
	cr6.compare<uint32_t>(ctx.r5.u32, 12, xer);
	// bgt cr6,0x82b04a84
	if (cr6.gt) goto loc_82B04A84;
	// lis r12,-32080
	ctx.r12.s64 = -2102394880;
	// rlwinm r0,r5,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,18612
	ctx.r12.s64 = ctx.r12.s64 + 18612;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r5.u32) {
	case 0:
		goto loc_82B048E8;
	case 1:
		goto loc_82B04908;
	case 2:
		goto loc_82B04928;
	case 3:
		goto loc_82B04948;
	case 4:
		goto loc_82B04968;
	case 5:
		goto loc_82B04988;
	case 6:
		goto loc_82B049A8;
	case 7:
		goto loc_82B049C8;
	case 8:
		goto loc_82B049E8;
	case 9:
		goto loc_82B04A08;
	case 10:
		goto loc_82B04A28;
	case 11:
		goto loc_82B04A48;
	case 12:
		goto loc_82B04A68;
	default:
		return;
	}
	// lwz r21,18664(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + 18664);
	// lwz r21,18696(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + 18696);
	// lwz r21,18728(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + 18728);
	// lwz r21,18760(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + 18760);
	// lwz r21,18792(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + 18792);
	// lwz r21,18824(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + 18824);
	// lwz r21,18856(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + 18856);
	// lwz r21,18888(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + 18888);
	// lwz r21,18920(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + 18920);
	// lwz r21,18952(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + 18952);
	// lwz r21,18984(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + 18984);
	// lwz r21,19016(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + 19016);
	// lwz r21,19048(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + 19048);
loc_82B048E8:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r9,11728
	ctx.r11.s64 = ctx.r9.s64 + 11728;
	// addi r4,r11,-180
	ctx.r4.s64 = ctx.r11.s64 + -180;
	// lwz r8,72(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_82B04908:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r9,11728
	ctx.r11.s64 = ctx.r9.s64 + 11728;
	// addi r4,r11,-168
	ctx.r4.s64 = ctx.r11.s64 + -168;
	// lwz r8,72(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_82B04928:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r9,11728
	ctx.r11.s64 = ctx.r9.s64 + 11728;
	// addi r4,r11,-156
	ctx.r4.s64 = ctx.r11.s64 + -156;
	// lwz r8,72(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_82B04948:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r9,11728
	ctx.r11.s64 = ctx.r9.s64 + 11728;
	// addi r4,r11,-140
	ctx.r4.s64 = ctx.r11.s64 + -140;
	// lwz r8,72(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_82B04968:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r9,11728
	ctx.r11.s64 = ctx.r9.s64 + 11728;
	// addi r4,r11,-124
	ctx.r4.s64 = ctx.r11.s64 + -124;
	// lwz r8,72(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_82B04988:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r9,11728
	ctx.r11.s64 = ctx.r9.s64 + 11728;
	// addi r4,r11,-108
	ctx.r4.s64 = ctx.r11.s64 + -108;
	// lwz r8,72(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_82B049A8:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r9,11728
	ctx.r11.s64 = ctx.r9.s64 + 11728;
	// addi r4,r11,-92
	ctx.r4.s64 = ctx.r11.s64 + -92;
	// lwz r8,72(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_82B049C8:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r9,11728
	ctx.r11.s64 = ctx.r9.s64 + 11728;
	// addi r4,r11,-76
	ctx.r4.s64 = ctx.r11.s64 + -76;
	// lwz r8,72(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_82B049E8:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r9,11728
	ctx.r11.s64 = ctx.r9.s64 + 11728;
	// addi r4,r11,-60
	ctx.r4.s64 = ctx.r11.s64 + -60;
	// lwz r8,72(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_82B04A08:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r9,11728
	ctx.r11.s64 = ctx.r9.s64 + 11728;
	// addi r4,r11,-44
	ctx.r4.s64 = ctx.r11.s64 + -44;
	// lwz r8,72(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_82B04A28:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r9,11728
	ctx.r11.s64 = ctx.r9.s64 + 11728;
	// addi r4,r11,-28
	ctx.r4.s64 = ctx.r11.s64 + -28;
	// lwz r8,72(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_82B04A48:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r9,11728
	ctx.r11.s64 = ctx.r9.s64 + 11728;
	// addi r4,r11,-12
	ctx.r4.s64 = ctx.r11.s64 + -12;
	// lwz r8,72(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_82B04A68:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,11728
	ctx.r4.s64 = ctx.r10.s64 + 11728;
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_82B04A84:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r9,11728
	ctx.r11.s64 = ctx.r9.s64 + 11728;
	// addi r4,r11,-196
	ctx.r4.s64 = ctx.r11.s64 + -196;
	// lwz r8,72(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B04AA8"))) PPC_WEAK_FUNC(sub_82B04AA8);
PPC_FUNC_IMPL(__imp__sub_82B04AA8) {
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
	// stfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 112);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b04b80
	if (cr6.eq) goto loc_82B04B80;
	// bl 0x82d19638
	ctx.lr = 0x82B04AD8;
	sub_82D19638(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8353b168
	ctx.lr = 0x82B04AE4;
	sub_8353B168(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b04b80
	if (cr6.eq) goto loc_82B04B80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B04B04;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B04B20;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// lfs f13,124(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// lfs f0,10896(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 10896);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82b04b4c
	if (!cr6.lt) goto loc_82B04B4C;
	// fcmpu cr6,f31,f0
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x82b04b4c
	if (!cr6.gt) goto loc_82B04B4C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// b 0x82b04b6c
	goto loc_82B04B6C;
loc_82B04B4C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,20796(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20796);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82b04b78
	if (!cr6.gt) goto loc_82B04B78;
	// fcmpu cr6,f31,f0
	cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x82b04b78
	if (!cr6.lt) goto loc_82B04B78;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
loc_82B04B6C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B04B78;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B04B78:
	// stfs f31,124(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 124, temp.u32);
	// stfs f30,128(r30)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r30.u32 + 128, temp.u32);
loc_82B04B80:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B04BA0"))) PPC_WEAK_FUNC(sub_82B04BA0);
PPC_FUNC_IMPL(__imp__sub_82B04BA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,296(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82B04BB4"))) PPC_WEAK_FUNC(sub_82B04BB4);
PPC_FUNC_IMPL(__imp__sub_82B04BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B04BB8"))) PPC_WEAK_FUNC(sub_82B04BB8);
PPC_FUNC_IMPL(__imp__sub_82B04BB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r10,296(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82B04BCC"))) PPC_WEAK_FUNC(sub_82B04BCC);
PPC_FUNC_IMPL(__imp__sub_82B04BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B04BD0"))) PPC_WEAK_FUNC(sub_82B04BD0);
PPC_FUNC_IMPL(__imp__sub_82B04BD0) {
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
	// addi r9,r11,12208
	ctx.r9.s64 = ctx.r11.s64 + 12208;
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
	ctx.lr = 0x82B04C08;
	sub_82D25548(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82b04c20
	if (cr6.eq) goto loc_82B04C20;
	// bl 0x82416268
	ctx.lr = 0x82B04C1C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B04C20:
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

__attribute__((alias("__imp__sub_82B04C38"))) PPC_WEAK_FUNC(sub_82B04C38);
PPC_FUNC_IMPL(__imp__sub_82B04C38) {
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
	// blt cr6,0x82b04c60
	if (cr6.lt) goto loc_82B04C60;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b04c64
	goto loc_82B04C64;
loc_82B04C60:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82B04C64:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,132
	ctx.r4.s64 = 132;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B04C80;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b04ca0
	if (cr6.eq) goto loc_82B04CA0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82b04658
	ctx.lr = 0x82B04C98;
	sub_82B04658(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b04ca4
	if (!cr6.eq) goto loc_82B04CA4;
loc_82B04CA0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B04CA4:
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

__attribute__((alias("__imp__sub_82B04CBC"))) PPC_WEAK_FUNC(sub_82B04CBC);
PPC_FUNC_IMPL(__imp__sub_82B04CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B04CC0"))) PPC_WEAK_FUNC(sub_82B04CC0);
PPC_FUNC_IMPL(__imp__sub_82B04CC0) {
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
	// blt cr6,0x82b04ce8
	if (cr6.lt) goto loc_82B04CE8;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b04cec
	goto loc_82B04CEC;
loc_82B04CE8:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82B04CEC:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,132
	ctx.r4.s64 = 132;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B04D08;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b04d28
	if (cr6.eq) goto loc_82B04D28;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82b04658
	ctx.lr = 0x82B04D20;
	sub_82B04658(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b04d2c
	if (!cr6.eq) goto loc_82B04D2C;
loc_82B04D28:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B04D2C:
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

__attribute__((alias("__imp__sub_82B04D44"))) PPC_WEAK_FUNC(sub_82B04D44);
PPC_FUNC_IMPL(__imp__sub_82B04D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B04D48"))) PPC_WEAK_FUNC(sub_82B04D48);
PPC_FUNC_IMPL(__imp__sub_82B04D48) {
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
	// blt cr6,0x82b04d70
	if (cr6.lt) goto loc_82B04D70;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b04d74
	goto loc_82B04D74;
loc_82B04D70:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82B04D74:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,132
	ctx.r4.s64 = 132;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B04D90;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b04db0
	if (cr6.eq) goto loc_82B04DB0;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82b04658
	ctx.lr = 0x82B04DA8;
	sub_82B04658(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b04db4
	if (!cr6.eq) goto loc_82B04DB4;
loc_82B04DB0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B04DB4:
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

__attribute__((alias("__imp__sub_82B04DCC"))) PPC_WEAK_FUNC(sub_82B04DCC);
PPC_FUNC_IMPL(__imp__sub_82B04DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B04DD0"))) PPC_WEAK_FUNC(sub_82B04DD0);
PPC_FUNC_IMPL(__imp__sub_82B04DD0) {
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
	// blt cr6,0x82b04df8
	if (cr6.lt) goto loc_82B04DF8;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b04dfc
	goto loc_82B04DFC;
loc_82B04DF8:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82B04DFC:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,132
	ctx.r4.s64 = 132;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B04E18;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b04e38
	if (cr6.eq) goto loc_82B04E38;
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82b04658
	ctx.lr = 0x82B04E30;
	sub_82B04658(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b04e3c
	if (!cr6.eq) goto loc_82B04E3C;
loc_82B04E38:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B04E3C:
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

__attribute__((alias("__imp__sub_82B04E54"))) PPC_WEAK_FUNC(sub_82B04E54);
PPC_FUNC_IMPL(__imp__sub_82B04E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B04E58"))) PPC_WEAK_FUNC(sub_82B04E58);
PPC_FUNC_IMPL(__imp__sub_82B04E58) {
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
	// blt cr6,0x82b04e80
	if (cr6.lt) goto loc_82B04E80;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b04e84
	goto loc_82B04E84;
loc_82B04E80:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82B04E84:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,132
	ctx.r4.s64 = 132;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B04EA0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b04ec0
	if (cr6.eq) goto loc_82B04EC0;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82b04658
	ctx.lr = 0x82B04EB8;
	sub_82B04658(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b04ec4
	if (!cr6.eq) goto loc_82B04EC4;
loc_82B04EC0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B04EC4:
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

__attribute__((alias("__imp__sub_82B04EDC"))) PPC_WEAK_FUNC(sub_82B04EDC);
PPC_FUNC_IMPL(__imp__sub_82B04EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B04EE0"))) PPC_WEAK_FUNC(sub_82B04EE0);
PPC_FUNC_IMPL(__imp__sub_82B04EE0) {
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
	// blt cr6,0x82b04f08
	if (cr6.lt) goto loc_82B04F08;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b04f0c
	goto loc_82B04F0C;
loc_82B04F08:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82B04F0C:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,132
	ctx.r4.s64 = 132;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B04F28;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b04f48
	if (cr6.eq) goto loc_82B04F48;
	// li r6,5
	ctx.r6.s64 = 5;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82b04658
	ctx.lr = 0x82B04F40;
	sub_82B04658(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b04f4c
	if (!cr6.eq) goto loc_82B04F4C;
loc_82B04F48:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B04F4C:
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

__attribute__((alias("__imp__sub_82B04F64"))) PPC_WEAK_FUNC(sub_82B04F64);
PPC_FUNC_IMPL(__imp__sub_82B04F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B04F68"))) PPC_WEAK_FUNC(sub_82B04F68);
PPC_FUNC_IMPL(__imp__sub_82B04F68) {
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
	// blt cr6,0x82b04f90
	if (cr6.lt) goto loc_82B04F90;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b04f94
	goto loc_82B04F94;
loc_82B04F90:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82B04F94:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,132
	ctx.r4.s64 = 132;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B04FB0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b04fd0
	if (cr6.eq) goto loc_82B04FD0;
	// li r6,6
	ctx.r6.s64 = 6;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82b04658
	ctx.lr = 0x82B04FC8;
	sub_82B04658(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b04fd4
	if (!cr6.eq) goto loc_82B04FD4;
loc_82B04FD0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B04FD4:
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

__attribute__((alias("__imp__sub_82B04FEC"))) PPC_WEAK_FUNC(sub_82B04FEC);
PPC_FUNC_IMPL(__imp__sub_82B04FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B04FF0"))) PPC_WEAK_FUNC(sub_82B04FF0);
PPC_FUNC_IMPL(__imp__sub_82B04FF0) {
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
	// blt cr6,0x82b05018
	if (cr6.lt) goto loc_82B05018;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b0501c
	goto loc_82B0501C;
loc_82B05018:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82B0501C:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,132
	ctx.r4.s64 = 132;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B05038;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b05058
	if (cr6.eq) goto loc_82B05058;
	// li r6,7
	ctx.r6.s64 = 7;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82b04658
	ctx.lr = 0x82B05050;
	sub_82B04658(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b0505c
	if (!cr6.eq) goto loc_82B0505C;
loc_82B05058:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B0505C:
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

__attribute__((alias("__imp__sub_82B05074"))) PPC_WEAK_FUNC(sub_82B05074);
PPC_FUNC_IMPL(__imp__sub_82B05074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B05078"))) PPC_WEAK_FUNC(sub_82B05078);
PPC_FUNC_IMPL(__imp__sub_82B05078) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82B05080;
	__savegprlr_22(ctx, base);
	// stwu r1,-912(r1)
	ea = -912 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B0508C;
	sub_831156E8(ctx, base);
	// lwz r28,48(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ld r4,116(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 116);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8311c260
	ctx.lr = 0x82B0509C;
	sub_8311C260(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// li r5,632
	ctx.r5.s64 = 632;
	// bl 0x831ce980
	ctx.lr = 0x82B050AC;
	sub_831CE980(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B050B4;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r30,r11,11316
	ctx.r30.s64 = ctx.r11.s64 + 11316;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r30,-292
	ctx.r4.s64 = ctx.r30.s64 + -292;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B050D4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b05548
	if (cr6.eq) goto loc_82B05548;
	// addi r4,r1,244
	ctx.r4.s64 = ctx.r1.s64 + 244;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r25,r29,100
	ctx.r25.s64 = ctx.r29.s64 + 100;
	// bl 0x837b0c10
	ctx.lr = 0x82B050F0;
	sub_837B0C10(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r4,r30,-276
	ctx.r4.s64 = ctx.r30.s64 + -276;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82B05100;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82B05110;
	sub_82A69AD0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lhz r4,290(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 290);
	// bl 0x8311c628
	ctx.lr = 0x82B0511C;
	sub_8311C628(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82B05128;
	sub_837B0C10(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r30,-264
	ctx.r4.s64 = ctx.r30.s64 + -264;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x837b0c10
	ctx.lr = 0x82B05138;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82B05148;
	sub_82A69AD0(ctx, base);
	// lwz r10,100(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// addi r4,r30,-244
	ctx.r4.s64 = ctx.r30.s64 + -244;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B05160;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b05548
	if (cr6.eq) goto loc_82B05548;
	// lwz r10,324(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// li r22,0
	ctx.r22.s64 = 0;
	// lhz r11,290(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 290);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// stw r22,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r22.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82b05188
	if (cr6.eq) goto loc_82B05188;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82B05188:
	// li r6,0
	ctx.r6.s64 = 0;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x82d32b60
	ctx.lr = 0x82B05194;
	sub_82D32B60(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r4,r30,-224
	ctx.r4.s64 = ctx.r30.s64 + -224;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B051AC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b05548
	if (cr6.eq) goto loc_82B05548;
	// lis r28,-31777
	ctx.r28.s64 = -2082537472;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r5,1
	ctx.r5.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,-3212(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3212);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bne cr6,0x82b052d4
	if (!cr6.eq) goto loc_82B052D4;
	// addi r4,r30,-216
	ctx.r4.s64 = ctx.r30.s64 + -216;
	// bctrl 
	ctx.lr = 0x82B051EC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d45220
	ctx.lr = 0x82B05200;
	sub_82D45220(ctx, base);
	// bl 0x8311e3d0
	ctx.lr = 0x82B05204;
	sub_8311E3D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8311d640
	ctx.lr = 0x82B05214;
	sub_8311D640(ctx, base);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,-3212(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3212);
	// rlwimi r10,r8,0,14,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3FFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFC0000);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwimi r11,r10,0,0,13
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFC0000) | (ctx.r11.u64 & 0xFFFFFFFF0003FFFF);
	// xor r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// rlwinm r6,r7,0,0,13
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x82b05258
	if (!cr6.eq) goto loc_82B05258;
	// xor r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b0525c
	if (cr6.eq) goto loc_82B0525C;
loc_82B05258:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82B0525C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// beq cr6,0x82b05288
	if (cr6.eq) goto loc_82B05288;
	// addi r4,r30,-200
	ctx.r4.s64 = ctx.r30.s64 + -200;
	// bctrl 
	ctx.lr = 0x82B05284;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82b05500
	goto loc_82B05500;
loc_82B05288:
	// addi r4,r30,-180
	ctx.r4.s64 = ctx.r30.s64 + -180;
	// bctrl 
	ctx.lr = 0x82B05290;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x831156e8
	ctx.lr = 0x82B05294;
	sub_831156E8(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311c148
	ctx.lr = 0x82B052A0;
	sub_8311C148(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x837b0c10
	ctx.lr = 0x82B052B0;
	sub_837B0C10(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r30,-160
	ctx.r4.s64 = ctx.r30.s64 + -160;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x837b0c10
	ctx.lr = 0x82B052C0;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82B052D0;
	sub_82A69AD0(ctx, base);
	// b 0x82b05500
	goto loc_82B05500;
loc_82B052D4:
	// addi r4,r30,-140
	ctx.r4.s64 = ctx.r30.s64 + -140;
	// bctrl 
	ctx.lr = 0x82B052DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x82d86078
	ctx.lr = 0x82B052E0;
	sub_82D86078(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b05548
	if (cr6.eq) goto loc_82B05548;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// ld r4,116(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 116);
	// bl 0x83151610
	ctx.lr = 0x82B052F8;
	sub_83151610(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,-3212(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + -3212);
	// rlwimi r10,r11,0,14,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFC0000);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwimi r11,r10,0,0,13
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFC0000) | (ctx.r11.u64 & 0xFFFFFFFF0003FFFF);
	// xor r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// rlwinm r8,r10,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82b0533c
	if (!cr6.eq) goto loc_82B0533C;
	// xor r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// clrlwi r10,r11,14
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFF;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b05340
	if (cr6.eq) goto loc_82B05340;
loc_82B0533C:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82B05340:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// beq cr6,0x82b0536c
	if (cr6.eq) goto loc_82B0536C;
	// addi r4,r30,-128
	ctx.r4.s64 = ctx.r30.s64 + -128;
	// bctrl 
	ctx.lr = 0x82B05368;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82b053b4
	goto loc_82B053B4;
loc_82B0536C:
	// addi r4,r30,-108
	ctx.r4.s64 = ctx.r30.s64 + -108;
	// bctrl 
	ctx.lr = 0x82B05374;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x831156e8
	ctx.lr = 0x82B05378;
	sub_831156E8(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311c148
	ctx.lr = 0x82B05384;
	sub_8311C148(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x837b0c10
	ctx.lr = 0x82B05394;
	sub_837B0C10(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r30,-88
	ctx.r4.s64 = ctx.r30.s64 + -88;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x837b0c10
	ctx.lr = 0x82B053A4;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82B053B4;
	sub_82A69AD0(ctx, base);
loc_82B053B4:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bgt cr6,0x82b05460
	if (cr6.gt) goto loc_82B05460;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82b053f4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B053F4;
	// bdzf 4*cr6+eq,0x82b053f4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B053F4;
	// bdzf 4*cr6+eq,0x82b053f4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B053F4;
	// bdzf 4*cr6+eq,0x82b05424
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B05424;
	// bdzf 4*cr6+eq,0x82b053f4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B053F4;
	// bne cr6,0x82b05424
	if (!cr6.eq) goto loc_82B05424;
loc_82B053F4:
	// lwz r3,116(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x82B053FC;
	sub_825832D8(ctx, base);
	// bl 0x82d99c08
	ctx.lr = 0x82B05400;
	sub_82D99C08(ctx, base);
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x82d9a978
	ctx.lr = 0x82B05408;
	sub_82D9A978(ctx, base);
	// lwz r29,20(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r28,8(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r27,4(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r26,12(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lbz r6,397(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 397);
	// b 0x82b05450
	goto loc_82B05450;
loc_82B05424:
	// lwz r3,116(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 116);
	// bl 0x8332f198
	ctx.lr = 0x82B0542C;
	sub_8332F198(ctx, base);
	// bl 0x8382e338
	ctx.lr = 0x82B05430;
	sub_8382E338(ctx, base);
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x82d9c418
	ctx.lr = 0x82B05438;
	sub_82D9C418(ctx, base);
	// lwz r28,16(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r27,12(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r26,20(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r29,25
	ctx.r29.s64 = 25;
loc_82B05450:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d45220
	ctx.lr = 0x82B05460;
	sub_82D45220(ctx, base);
loc_82B05460:
	// addi r4,r30,-68
	ctx.r4.s64 = ctx.r30.s64 + -68;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82B0546C;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82a6a1b8
	ctx.lr = 0x82B0547C;
	sub_82A6A1B8(ctx, base);
	// addi r4,r30,-48
	ctx.r4.s64 = ctx.r30.s64 + -48;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82B05488;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82a6a1b8
	ctx.lr = 0x82B05498;
	sub_82A6A1B8(ctx, base);
	// addi r4,r30,-882
	ctx.r4.s64 = ctx.r30.s64 + -882;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x82B054A4;
	sub_837B0C10(ctx, base);
	// lis r4,103
	ctx.r4.s64 = 6750208;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// ori r4,r4,137
	ctx.r4.u64 = ctx.r4.u64 | 137;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82d042a8
	ctx.lr = 0x82B054BC;
	sub_82D042A8(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82b054d0
	if (!cr6.lt) goto loc_82B054D0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
loc_82B054D0:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82B054D8;
	sub_837B0C10(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r30,-28
	ctx.r4.s64 = ctx.r30.s64 + -28;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x837b0c10
	ctx.lr = 0x82B054E8;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82B054F8;
	sub_82A69AD0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82B05500;
	sub_8387E8E0(ctx, base);
loc_82B05500:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B05518;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b05548
	if (cr6.eq) goto loc_82B05548;
	// lwz r11,324(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// stw r22,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r22.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82b05538
	if (cr6.eq) goto loc_82B05538;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82B05538:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82d329f8
	ctx.lr = 0x82B05548;
	sub_82D329F8(ctx, base);
loc_82B05548:
	// addi r1,r1,912
	ctx.r1.s64 = ctx.r1.s64 + 912;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B05550"))) PPC_WEAK_FUNC(sub_82B05550);
PPC_FUNC_IMPL(__imp__sub_82B05550) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82B05558;
	__savegprlr_24(ctx, base);
	// stwu r1,-1456(r1)
	ea = -1456 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B0556C;
	sub_831156E8(ctx, base);
	// ld r4,116(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 116);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311c260
	ctx.lr = 0x82B05578;
	sub_8311C260(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,752
	ctx.r3.s64 = ctx.r1.s64 + 752;
	// li r5,632
	ctx.r5.s64 = 632;
	// bl 0x831ce980
	ctx.lr = 0x82B05588;
	sub_831CE980(ctx, base);
	// bl 0x82d86078
	ctx.lr = 0x82B0558C;
	sub_82D86078(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b05fa8
	if (cr6.eq) goto loc_82B05FA8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r31,116(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// bl 0x82d19a78
	ctx.lr = 0x82B055A4;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r24,r11,10884
	ctx.r24.s64 = ctx.r11.s64 + 10884;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r24,456
	ctx.r4.s64 = ctx.r24.s64 + 456;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B055C4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b05fa8
	if (cr6.eq) goto loc_82B05FA8;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x82ac0af0
	ctx.lr = 0x82B055D8;
	sub_82AC0AF0(ctx, base);
	// addi r4,r24,-449
	ctx.r4.s64 = ctx.r24.s64 + -449;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x837b0c10
	ctx.lr = 0x82B055E4;
	sub_837B0C10(ctx, base);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r29,1
	cr6.compare<uint32_t>(ctx.r29.u32, 1, xer);
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// blt cr6,0x82b056b0
	if (cr6.lt) goto loc_82B056B0;
	// bne cr6,0x82b05744
	if (!cr6.eq) goto loc_82B05744;
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bgt cr6,0x82b056a4
	if (cr6.gt) goto loc_82B056A4;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82b05650
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B05650;
	// bdzf 4*cr6+eq,0x82b05650
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B05650;
	// bdzf 4*cr6+eq,0x82b05650
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B05650;
	// bdzf 4*cr6+eq,0x82b05650
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B05650;
	// bdzf 4*cr6+eq,0x82b05680
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B05680;
	// bdzf 4*cr6+eq,0x82b05650
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B05650;
	// bne cr6,0x82b05680
	if (!cr6.eq) goto loc_82B05680;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// addi r4,r1,1016
	ctx.r4.s64 = ctx.r1.s64 + 1016;
	// li r5,160
	ctx.r5.s64 = 160;
	// bl 0x831ce980
	ctx.lr = 0x82B05638;
	sub_831CE980(ctx, base);
	// addi r4,r1,592
	ctx.r4.s64 = ctx.r1.s64 + 592;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x82abfda0
	ctx.lr = 0x82B05644;
	sub_82ABFDA0(ctx, base);
	// lis r27,560
	ctx.r27.s64 = 36700160;
	// ori r27,r27,184
	ctx.r27.u64 = ctx.r27.u64 | 184;
	// b 0x82b05744
	goto loc_82B05744;
loc_82B05650:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832d8
	ctx.lr = 0x82B05658;
	sub_825832D8(ctx, base);
	// bl 0x82d99c08
	ctx.lr = 0x82B0565C;
	sub_82D99C08(ctx, base);
	// lwz r4,120(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// bl 0x82d9a978
	ctx.lr = 0x82B05664;
	sub_82D9A978(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,224
	ctx.r4.s64 = ctx.r3.s64 + 224;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x82abfda0
	ctx.lr = 0x82B05674;
	sub_82ABFDA0(ctx, base);
	// lis r27,560
	ctx.r27.s64 = 36700160;
	// ori r27,r27,184
	ctx.r27.u64 = ctx.r27.u64 | 184;
	// b 0x82b05744
	goto loc_82B05744;
loc_82B05680:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8332f198
	ctx.lr = 0x82B05688;
	sub_8332F198(ctx, base);
	// bl 0x8382e338
	ctx.lr = 0x82B0568C;
	sub_8382E338(ctx, base);
	// lwz r4,120(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// bl 0x82d9c418
	ctx.lr = 0x82B05694;
	sub_82D9C418(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,188
	ctx.r4.s64 = ctx.r3.s64 + 188;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x82abfda0
	ctx.lr = 0x82B056A4;
	sub_82ABFDA0(ctx, base);
loc_82B056A4:
	// lis r27,560
	ctx.r27.s64 = 36700160;
	// ori r27,r27,184
	ctx.r27.u64 = ctx.r27.u64 | 184;
	// b 0x82b05744
	goto loc_82B05744;
loc_82B056B0:
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bgt cr6,0x82b0573c
	if (cr6.gt) goto loc_82B0573C;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82b056f8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B056F8;
	// bdzf 4*cr6+eq,0x82b056f8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B056F8;
	// bdzf 4*cr6+eq,0x82b056f8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B056F8;
	// bdzf 4*cr6+eq,0x82b056f8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B056F8;
	// bdzf 4*cr6+eq,0x82b05718
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B05718;
	// bdzf 4*cr6+eq,0x82b056f8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B056F8;
	// bne cr6,0x82b05718
	if (!cr6.eq) goto loc_82B05718;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// addi r4,r1,856
	ctx.r4.s64 = ctx.r1.s64 + 856;
	// li r5,160
	ctx.r5.s64 = 160;
	// bl 0x831ce980
	ctx.lr = 0x82B056F0;
	sub_831CE980(ctx, base);
	// addi r4,r1,592
	ctx.r4.s64 = ctx.r1.s64 + 592;
	// b 0x82b05734
	goto loc_82B05734;
loc_82B056F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832d8
	ctx.lr = 0x82B05700;
	sub_825832D8(ctx, base);
	// bl 0x82d99c08
	ctx.lr = 0x82B05704;
	sub_82D99C08(ctx, base);
	// lwz r4,120(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// bl 0x82d9a978
	ctx.lr = 0x82B0570C;
	sub_82D9A978(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,64
	ctx.r4.s64 = ctx.r3.s64 + 64;
	// b 0x82b05734
	goto loc_82B05734;
loc_82B05718:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8332f198
	ctx.lr = 0x82B05720;
	sub_8332F198(ctx, base);
	// bl 0x8382e338
	ctx.lr = 0x82B05724;
	sub_8382E338(ctx, base);
	// lwz r4,120(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// bl 0x82d9c418
	ctx.lr = 0x82B0572C;
	sub_82D9C418(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r3,28
	ctx.r4.s64 = ctx.r3.s64 + 28;
loc_82B05734:
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x82abfda0
	ctx.lr = 0x82B0573C;
	sub_82ABFDA0(ctx, base);
loc_82B0573C:
	// lis r27,560
	ctx.r27.s64 = 36700160;
	// ori r27,r27,183
	ctx.r27.u64 = ctx.r27.u64 | 183;
loc_82B05744:
	// addi r4,r24,-418
	ctx.r4.s64 = ctx.r24.s64 + -418;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x82B05750;
	sub_837B0C10(ctx, base);
	// addi r4,r24,-417
	ctx.r4.s64 = ctx.r24.s64 + -417;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82B0575C;
	sub_837B0C10(ctx, base);
	// lbz r10,588(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 588);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b05834
	if (cr6.eq) goto loc_82B05834;
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b05790
	if (!cr6.eq) goto loc_82B05790;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r24,472
	ctx.r4.s64 = ctx.r24.s64 + 472;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B05790;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B05790:
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r5,62
	ctx.r5.s64 = 4063232;
	// lwz r29,108(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// stb r11,112(r30)
	PPC_STORE_U8(ctx.r30.u32 + 112, ctx.r11.u8);
	// li r4,14
	ctx.r4.s64 = 14;
	// ori r5,r5,32
	ctx.r5.u64 = ctx.r5.u64 | 32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,96(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B057BC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,100(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// beq cr6,0x82b057d8
	if (cr6.eq) goto loc_82B057D8;
	// ori r4,r4,339
	ctx.r4.u64 = ctx.r4.u64 | 339;
	// b 0x82b057dc
	goto loc_82B057DC;
loc_82B057D8:
	// ori r4,r4,14
	ctx.r4.u64 = ctx.r4.u64 | 14;
loc_82B057DC:
	// bl 0x82d042a8
	ctx.lr = 0x82B057E0;
	sub_82D042A8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82b057f4
	if (!cr6.lt) goto loc_82B057F4;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
loc_82B057F4:
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// ori r4,r4,502
	ctx.r4.u64 = ctx.r4.u64 | 502;
	// bl 0x82d042a8
	ctx.lr = 0x82B05804;
	sub_82D042A8(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r28,r28,100
	ctx.r28.s64 = ctx.r28.s64 + 100;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82b0581c
	if (!cr6.lt) goto loc_82B0581C;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
loc_82B0581C:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x837b0c10
	ctx.lr = 0x82B05824;
	sub_837B0C10(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r24,492
	ctx.r4.s64 = ctx.r24.s64 + 492;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// b 0x82b058dc
	goto loc_82B058DC;
loc_82B05834:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r4,r24,508
	ctx.r4.s64 = ctx.r24.s64 + 508;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B05850;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stb r25,112(r30)
	PPC_STORE_U8(ctx.r30.u32 + 112, ctx.r25.u8);
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// bl 0x82d198e0
	ctx.lr = 0x82B05864;
	sub_82D198E0(ctx, base);
	// lwz r9,100(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82b05880
	if (cr6.eq) goto loc_82B05880;
	// lis r4,503
	ctx.r4.s64 = 32964608;
	// ori r4,r4,177
	ctx.r4.u64 = ctx.r4.u64 | 177;
	// b 0x82b05888
	goto loc_82B05888;
loc_82B05880:
	// lis r4,108
	ctx.r4.s64 = 7077888;
	// ori r4,r4,15
	ctx.r4.u64 = ctx.r4.u64 | 15;
loc_82B05888:
	// bl 0x82d042a8
	ctx.lr = 0x82B0588C;
	sub_82D042A8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82b058a0
	if (!cr6.lt) goto loc_82B058A0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
loc_82B058A0:
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// ori r4,r4,502
	ctx.r4.u64 = ctx.r4.u64 | 502;
	// bl 0x82d042a8
	ctx.lr = 0x82B058B0;
	sub_82D042A8(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r28,r28,100
	ctx.r28.s64 = ctx.r28.s64 + 100;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82b058c8
	if (!cr6.lt) goto loc_82B058C8;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
loc_82B058C8:
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x837b0c10
	ctx.lr = 0x82B058D0;
	sub_837B0C10(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r24,528
	ctx.r4.s64 = ctx.r24.s64 + 528;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
loc_82B058DC:
	// bl 0x837b0c10
	ctx.lr = 0x82B058E0;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a69ad0
	ctx.lr = 0x82B058F0;
	sub_82A69AD0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B058F8;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r24,544
	ctx.r4.s64 = ctx.r24.s64 + 544;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B05910;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b05924
	if (cr6.eq) goto loc_82B05924;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82d30340
	ctx.lr = 0x82B05924;
	sub_82D30340(ctx, base);
loc_82B05924:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x83165ba8
	ctx.lr = 0x82B05934;
	sub_83165BA8(ctx, base);
	// li r31,-1
	ctx.r31.s64 = -1;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x8259cb28
	ctx.lr = 0x82B0594C;
	sub_8259CB28(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x82B05954;
	sub_8387E8E0(ctx, base);
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r25,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r25.u32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// stw r27,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r27.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r25,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r25.u8);
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8259cb28
	ctx.lr = 0x82B05978;
	sub_8259CB28(ctx, base);
	// addi r4,r24,560
	ctx.r4.s64 = ctx.r24.s64 + 560;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x837b0c10
	ctx.lr = 0x82B05984;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// bl 0x82a69ad0
	ctx.lr = 0x82B05994;
	sub_82A69AD0(ctx, base);
	// addi r4,r24,-387
	ctx.r4.s64 = ctx.r24.s64 + -387;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x837b0c10
	ctx.lr = 0x82B059A0;
	sub_837B0C10(ctx, base);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// clrlwi r29,r29,24
	ctx.r29.u64 = ctx.r29.u32 & 0xFF;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
loc_82B059AC:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x82a688d0
	ctx.lr = 0x82B059BC;
	sub_82A688D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82a698e0
	ctx.lr = 0x82B059C8;
	sub_82A698E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d19a10
	ctx.lr = 0x82B059D0;
	sub_82D19A10(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b05a20
	if (cr6.eq) goto loc_82B05A20;
	// addi r4,r24,580
	ctx.r4.s64 = ctx.r24.s64 + 580;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x83815d38
	ctx.lr = 0x82B059E8;
	sub_83815D38(ctx, base);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x83815b28
	ctx.lr = 0x82B059F4;
	sub_83815B28(ctx, base);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// lfs f1,368(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83815b68
	ctx.lr = 0x82B05A00;
	sub_83815B68(ctx, base);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// lfs f1,372(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83815b68
	ctx.lr = 0x82B05A0C;
	sub_83815B68(ctx, base);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838153c8
	ctx.lr = 0x82B05A18;
	sub_838153C8(ctx, base);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x83815cb8
	ctx.lr = 0x82B05A20;
	sub_83815CB8(ctx, base);
loc_82B05A20:
	// stb r25,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r25.u8);
	// addi r4,r24,588
	ctx.r4.s64 = ctx.r24.s64 + 588;
	// stw r27,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r27.u32);
	// li r5,25
	ctx.r5.s64 = 25;
	// stw r25,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r25.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stb r25,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r25.u8);
	// bl 0x8259cc28
	ctx.lr = 0x82B05A40;
	sub_8259CC28(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x83165d78
	ctx.lr = 0x82B05A54;
	sub_83165D78(ctx, base);
	// lwz r11,356(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r4,336(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82b05a68
	if (!cr6.lt) goto loc_82B05A68;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
loc_82B05A68:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d2e228
	ctx.lr = 0x82B05A70;
	sub_82D2E228(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b05b04
	if (cr6.eq) goto loc_82B05B04;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// addi r4,r24,616
	ctx.r4.s64 = ctx.r24.s64 + 616;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B05A90;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b05bcc
	if (cr6.eq) goto loc_82B05BCC;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82acc960
	ctx.lr = 0x82B05AB0;
	sub_82ACC960(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b04888
	ctx.lr = 0x82B05AC0;
	sub_82B04888(ctx, base);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x8387e8e0
	ctx.lr = 0x82B05AC8;
	sub_8387E8E0(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// blt cr6,0x82b059ac
	if (cr6.lt) goto loc_82B059AC;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r31,r24,-92
	ctx.r31.s64 = ctx.r24.s64 + -92;
	// addi r11,r11,-3352
	ctx.r11.s64 = ctx.r11.s64 + -3352;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r25,7
	cr6.compare<uint32_t>(ctx.r25.u32, 7, xer);
	// bge cr6,0x82b05bfc
	if (!cr6.lt) goto loc_82B05BFC;
loc_82B05AF8:
	// addi r11,r1,531
	ctx.r11.s64 = ctx.r1.s64 + 531;
	// lbzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// b 0x82b05c00
	goto loc_82B05C00;
loc_82B05B04:
	// lwz r11,356(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// li r31,2
	ctx.r31.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b05b24
	if (cr6.lt) goto loc_82B05B24;
	// stw r31,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r31.u32);
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// lwz r4,336(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// bl 0x825952b8
	ctx.lr = 0x82B05B24;
	sub_825952B8(ctx, base);
loc_82B05B24:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// stw r27,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r27.u32);
	// stw r25,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r25.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r25,336(r1)
	PPC_STORE_U8(ctx.r1.u32 + 336, ctx.r25.u8);
	// blt cr6,0x82b05b4c
	if (cr6.lt) goto loc_82B05B4C;
	// stw r31,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r31.u32);
	// addi r3,r1,276
	ctx.r3.s64 = ctx.r1.s64 + 276;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x825952b8
	ctx.lr = 0x82B05B4C;
	sub_825952B8(ctx, base);
loc_82B05B4C:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r27,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r27.u32);
	// stw r25,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r25.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r25,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r25.u8);
	// blt cr6,0x82b05b74
	if (cr6.lt) goto loc_82B05B74;
	// stw r31,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r31.u32);
	// addi r3,r1,284
	ctx.r3.s64 = ctx.r1.s64 + 284;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82B05B74;
	sub_825952B8(ctx, base);
loc_82B05B74:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r25,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r25.u8);
	// blt cr6,0x82b05b9c
	if (cr6.lt) goto loc_82B05B9C;
	// stw r31,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r31.u32);
	// addi r3,r1,292
	ctx.r3.s64 = ctx.r1.s64 + 292;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82B05B9C;
	sub_825952B8(ctx, base);
loc_82B05B9C:
	// lwz r11,324(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r27.u32);
	// stw r25,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r25.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r25,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r25.u8);
	// blt cr6,0x82b05fa8
	if (cr6.lt) goto loc_82B05FA8;
	// stw r31,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r31.u32);
	// addi r3,r1,280
	ctx.r3.s64 = ctx.r1.s64 + 280;
	// lwz r4,304(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// bl 0x825952b8
	ctx.lr = 0x82B05BC4;
	sub_825952B8(ctx, base);
	// addi r1,r1,1456
	ctx.r1.s64 = ctx.r1.s64 + 1456;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82B05BCC:
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x8387e8e0
	ctx.lr = 0x82B05BD4;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x82B05BDC;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82B05BE4;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82B05BEC;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x8387e8e0
	ctx.lr = 0x82B05BF4;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,1456
	ctx.r1.s64 = ctx.r1.s64 + 1456;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82B05BFC:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82B05C00:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r27,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r27.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r25,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r25.u32);
	// stb r25,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r25.u8);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// bne cr6,0x82b05c4c
	if (!cr6.eq) goto loc_82B05C4C;
loc_82B05C20:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b05c20
	if (!cr6.eq) goto loc_82B05C20;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82B05C44;
	sub_8259CC28(ctx, base);
	// lwz r5,-4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// b 0x82b05c74
	goto loc_82B05C74;
loc_82B05C4C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b05c4c
	if (!cr6.eq) goto loc_82B05C4C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82B05C70;
	sub_8259CC28(ctx, base);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82B05C74:
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a69a28
	ctx.lr = 0x82B05C80;
	sub_82A69A28(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplwi cr6,r29,7
	cr6.compare<uint32_t>(ctx.r29.u32, 7, xer);
	// blt cr6,0x82b05af8
	if (cr6.lt) goto loc_82B05AF8;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lbz r31,572(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 572);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B05CB0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b05d58
	if (!cr6.eq) goto loc_82B05D58;
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// li r31,2
	ctx.r31.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b05cd8
	if (cr6.lt) goto loc_82B05CD8;
	// stw r31,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r31.u32);
	// addi r3,r1,228
	ctx.r3.s64 = ctx.r1.s64 + 228;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x825952b8
	ctx.lr = 0x82B05CD8;
	sub_825952B8(ctx, base);
loc_82B05CD8:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r27,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r27.u32);
	// stw r25,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r25.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r25,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r25.u8);
	// blt cr6,0x82b05d00
	if (cr6.lt) goto loc_82B05D00;
	// stw r31,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r31.u32);
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82B05D00;
	sub_825952B8(ctx, base);
loc_82B05D00:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r25,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r25.u8);
	// blt cr6,0x82b05d28
	if (cr6.lt) goto loc_82B05D28;
	// stw r31,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r31.u32);
	// addi r3,r1,236
	ctx.r3.s64 = ctx.r1.s64 + 236;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82B05D28;
	sub_825952B8(ctx, base);
loc_82B05D28:
	// lwz r11,324(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r27.u32);
	// stw r25,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r25.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r25,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r25.u8);
	// blt cr6,0x82b05fa8
	if (cr6.lt) goto loc_82B05FA8;
	// stw r31,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r31.u32);
	// addi r3,r1,252
	ctx.r3.s64 = ctx.r1.s64 + 252;
	// lwz r4,304(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// bl 0x825952b8
	ctx.lr = 0x82B05D50;
	sub_825952B8(ctx, base);
	// addi r1,r1,1456
	ctx.r1.s64 = ctx.r1.s64 + 1456;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82B05D58:
	// clrlwi r6,r31,24
	ctx.r6.u64 = ctx.r31.u32 & 0xFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x82d3d3b0
	ctx.lr = 0x82B05D68;
	sub_82D3D3B0(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,4(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lbz r31,574(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 574);
	// bctrl 
	ctx.lr = 0x82B05D84;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b05e2c
	if (!cr6.eq) goto loc_82B05E2C;
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// li r31,2
	ctx.r31.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b05dac
	if (cr6.lt) goto loc_82B05DAC;
	// stw r31,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r31.u32);
	// addi r3,r1,244
	ctx.r3.s64 = ctx.r1.s64 + 244;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x825952b8
	ctx.lr = 0x82B05DAC;
	sub_825952B8(ctx, base);
loc_82B05DAC:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r27,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r27.u32);
	// stw r25,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r25.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r25,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r25.u8);
	// blt cr6,0x82b05dd4
	if (cr6.lt) goto loc_82B05DD4;
	// stw r31,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r31.u32);
	// addi r3,r1,260
	ctx.r3.s64 = ctx.r1.s64 + 260;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82B05DD4;
	sub_825952B8(ctx, base);
loc_82B05DD4:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r25,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r25.u8);
	// blt cr6,0x82b05dfc
	if (cr6.lt) goto loc_82B05DFC;
	// stw r31,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r31.u32);
	// addi r3,r1,268
	ctx.r3.s64 = ctx.r1.s64 + 268;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82B05DFC;
	sub_825952B8(ctx, base);
loc_82B05DFC:
	// lwz r11,324(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r27.u32);
	// stw r25,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r25.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r25,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r25.u8);
	// blt cr6,0x82b05fa8
	if (cr6.lt) goto loc_82B05FA8;
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// lwz r4,304(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// bl 0x825952b8
	ctx.lr = 0x82B05E24;
	sub_825952B8(ctx, base);
	// addi r1,r1,1456
	ctx.r1.s64 = ctx.r1.s64 + 1456;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82B05E2C:
	// clrlwi r6,r31,24
	ctx.r6.u64 = ctx.r31.u32 & 0xFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x82d3d3b0
	ctx.lr = 0x82B05E3C;
	sub_82D3D3B0(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,8(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lbz r31,575(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 575);
	// bctrl 
	ctx.lr = 0x82B05E58;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b05f00
	if (!cr6.eq) goto loc_82B05F00;
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// li r31,2
	ctx.r31.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b05e80
	if (cr6.lt) goto loc_82B05E80;
	// stw r31,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r31.u32);
	// addi r3,r1,296
	ctx.r3.s64 = ctx.r1.s64 + 296;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x825952b8
	ctx.lr = 0x82B05E80;
	sub_825952B8(ctx, base);
loc_82B05E80:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r27,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r27.u32);
	// stw r25,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r25.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r25,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r25.u8);
	// blt cr6,0x82b05ea8
	if (cr6.lt) goto loc_82B05EA8;
	// stw r31,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r31.u32);
	// addi r3,r1,220
	ctx.r3.s64 = ctx.r1.s64 + 220;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82B05EA8;
	sub_825952B8(ctx, base);
loc_82B05EA8:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r25,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r25.u8);
	// blt cr6,0x82b05ed0
	if (cr6.lt) goto loc_82B05ED0;
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r31.u32);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82B05ED0;
	sub_825952B8(ctx, base);
loc_82B05ED0:
	// lwz r11,324(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r27.u32);
	// stw r25,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r25.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r25,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r25.u8);
	// blt cr6,0x82b05fa8
	if (cr6.lt) goto loc_82B05FA8;
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// lwz r4,304(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// bl 0x825952b8
	ctx.lr = 0x82B05EF8;
	sub_825952B8(ctx, base);
	// addi r1,r1,1456
	ctx.r1.s64 = ctx.r1.s64 + 1456;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82B05F00:
	// clrlwi r6,r31,24
	ctx.r6.u64 = ctx.r31.u32 & 0xFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x82d3d3b0
	ctx.lr = 0x82B05F10;
	sub_82D3D3B0(ctx, base);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// li r31,2
	ctx.r31.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b05f30
	if (cr6.lt) goto loc_82B05F30;
	// stw r31,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r31.u32);
	// addi r3,r1,332
	ctx.r3.s64 = ctx.r1.s64 + 332;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x825952b8
	ctx.lr = 0x82B05F30;
	sub_825952B8(ctx, base);
loc_82B05F30:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r27,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r27.u32);
	// stw r25,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r25.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r25,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r25.u8);
	// blt cr6,0x82b05f58
	if (cr6.lt) goto loc_82B05F58;
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82B05F58;
	sub_825952B8(ctx, base);
loc_82B05F58:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r25,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r25.u8);
	// blt cr6,0x82b05f80
	if (cr6.lt) goto loc_82B05F80;
	// stw r31,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r31.u32);
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82B05F80;
	sub_825952B8(ctx, base);
loc_82B05F80:
	// lwz r11,324(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r27.u32);
	// stw r25,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r25.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r25,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r25.u8);
	// blt cr6,0x82b05fa8
	if (cr6.lt) goto loc_82B05FA8;
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lwz r4,304(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// bl 0x825952b8
	ctx.lr = 0x82B05FA8;
	sub_825952B8(ctx, base);
loc_82B05FA8:
	// addi r1,r1,1456
	ctx.r1.s64 = ctx.r1.s64 + 1456;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B05FB0"))) PPC_WEAK_FUNC(sub_82B05FB0);
PPC_FUNC_IMPL(__imp__sub_82B05FB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B05FB8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B05FC8;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r29,r11,11856
	ctx.r29.s64 = ctx.r11.s64 + 11856;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r29,-116
	ctx.r4.s64 = ctx.r29.s64 + -116;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B05FE8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b060b0
	if (cr6.eq) goto loc_82B060B0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r29,-100
	ctx.r4.s64 = ctx.r29.s64 + -100;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// blt cr6,0x82b06014
	if (cr6.lt) goto loc_82B06014;
	// addi r4,r29,-72
	ctx.r4.s64 = ctx.r29.s64 + -72;
loc_82B06014:
	// bctrl 
	ctx.lr = 0x82B06018;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b060b0
	if (cr6.eq) goto loc_82B060B0;
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stw r11,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r11.u32);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// blt cr6,0x82b06040
	if (cr6.lt) goto loc_82B06040;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82b0604c
	goto loc_82B0604C;
loc_82B06040:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bge cr6,0x82b06050
	if (!cr6.lt) goto loc_82B06050;
	// li r11,2
	ctx.r11.s64 = 2;
loc_82B0604C:
	// stw r11,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r11.u32);
loc_82B06050:
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82b06078
	if (cr6.lt) goto loc_82B06078;
	// beq cr6,0x82b06070
	if (cr6.eq) goto loc_82B06070;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x82b06094
	if (!cr6.lt) goto loc_82B06094;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x82b0607c
	goto loc_82B0607C;
loc_82B06070:
	// addi r4,r29,-24
	ctx.r4.s64 = ctx.r29.s64 + -24;
	// b 0x82b0607c
	goto loc_82B0607C;
loc_82B06078:
	// addi r4,r29,-48
	ctx.r4.s64 = ctx.r29.s64 + -48;
loc_82B0607C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B06094;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B06094:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,104(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b05550
	ctx.lr = 0x82B060A4;
	sub_82B05550(ctx, base);
	// li r4,94
	ctx.r4.s64 = 94;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d17da0
	ctx.lr = 0x82B060B0;
	sub_82D17DA0(ctx, base);
loc_82B060B0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B060B8"))) PPC_WEAK_FUNC(sub_82B060B8);
PPC_FUNC_IMPL(__imp__sub_82B060B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82B060C0;
	__savegprlr_27(ctx, base);
	// stwu r1,-2224(r1)
	ea = -2224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b06540
	if (cr6.eq) goto loc_82B06540;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// beq cr6,0x82b06540
	if (cr6.eq) goto loc_82B06540;
	// bl 0x82d86078
	ctx.lr = 0x82B060E0;
	sub_82D86078(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b06540
	if (cr6.eq) goto loc_82B06540;
	// lwz r28,116(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82dab6d0
	ctx.lr = 0x82B060F8;
	sub_82DAB6D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B06100;
	sub_831156E8(ctx, base);
	// lwz r29,48(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// ld r4,116(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 116);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8311c260
	ctx.lr = 0x82B06110;
	sub_8311C260(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// li r5,632
	ctx.r5.s64 = 632;
	// bl 0x831ce980
	ctx.lr = 0x82B06120;
	sub_831CE980(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// bgt cr6,0x82b06540
	if (cr6.gt) goto loc_82B06540;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82b0624c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B0624C;
	// bdzf 4*cr6+eq,0x82b06318
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B06318;
	// bdzf 4*cr6+eq,0x82b06540
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B06540;
	// bdzf 4*cr6+eq,0x82b063c4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B063C4;
	// bdzf 4*cr6+eq,0x82b0652c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B0652C;
	// bne cr6,0x82b0652c
	if (!cr6.eq) goto loc_82B0652C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x82d97540
	ctx.lr = 0x82B0615C;
	sub_82D97540(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,11992
	ctx.r11.s64 = ctx.r11.s64 + 11992;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r3,r11,-112
	ctx.r3.s64 = ctx.r11.s64 + -112;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2f420
	ctx.lr = 0x82B06180;
	sub_82D2F420(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ld r4,116(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 116);
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8311c260
	ctx.lr = 0x82B06198;
	sub_8311C260(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,896
	ctx.r3.s64 = ctx.r1.s64 + 896;
	// li r5,632
	ctx.r5.s64 = 632;
	// bl 0x831ce980
	ctx.lr = 0x82B061A8;
	sub_831CE980(ctx, base);
	// lwz r3,116(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x82B061B0;
	sub_825832D8(ctx, base);
	// bl 0x82d99c08
	ctx.lr = 0x82B061B4;
	sub_82D99C08(ctx, base);
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x82d9a978
	ctx.lr = 0x82B061BC;
	sub_82D9A978(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r1,948
	ctx.r4.s64 = ctx.r1.s64 + 948;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x837b0c10
	ctx.lr = 0x82B061CC;
	sub_837B0C10(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// bl 0x82d2a108
	ctx.lr = 0x82B061D8;
	sub_82D2A108(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x82B061E0;
	sub_8387E8E0(ctx, base);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r5,r5,400
	ctx.r5.u64 = ctx.r5.u64 | 400;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2a258
	ctx.lr = 0x82B061F4;
	sub_82D2A258(ctx, base);
	// lis r5,29
	ctx.r5.s64 = 1900544;
	// li r4,1
	ctx.r4.s64 = 1;
	// ori r5,r5,179
	ctx.r5.u64 = ctx.r5.u64 | 179;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2a258
	ctx.lr = 0x82B06208;
	sub_82D2A258(ctx, base);
	// lwz r9,20(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82b06224
	if (cr6.eq) goto loc_82B06224;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d29d78
	ctx.lr = 0x82B06224;
	sub_82D29D78(ctx, base);
loc_82B06224:
	// lis r5,29
	ctx.r5.s64 = 1900544;
	// li r4,2
	ctx.r4.s64 = 2;
	// ori r5,r5,193
	ctx.r5.u64 = ctx.r5.u64 | 193;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2a258
	ctx.lr = 0x82B06238;
	sub_82D2A258(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82B06244;
	sub_83103100(ctx, base);
	// addi r1,r1,2224
	ctx.r1.s64 = ctx.r1.s64 + 2224;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82B0624C:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// bl 0x82d97538
	ctx.lr = 0x82B0625C;
	sub_82D97538(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8311c260
	ctx.lr = 0x82B0626C;
	sub_8311C260(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,1536
	ctx.r3.s64 = ctx.r1.s64 + 1536;
	// li r5,632
	ctx.r5.s64 = 632;
	// bl 0x831ce980
	ctx.lr = 0x82B0627C;
	sub_831CE980(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r30,r10,11992
	ctx.r30.s64 = ctx.r10.s64 + 11992;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r3,r30,-96
	ctx.r3.s64 = ctx.r30.s64 + -96;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2f6d8
	ctx.lr = 0x82B0629C;
	sub_82D2F6D8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r30,-1494
	ctx.r4.s64 = ctx.r30.s64 + -1494;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82B062AC;
	sub_837B0C10(ctx, base);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// addi r6,r1,308
	ctx.r6.s64 = ctx.r1.s64 + 308;
	// addi r5,r1,1588
	ctx.r5.s64 = ctx.r1.s64 + 1588;
	// ori r4,r4,165
	ctx.r4.u64 = ctx.r4.u64 | 165;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d042a8
	ctx.lr = 0x82B062C4;
	sub_82D042A8(ctx, base);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// bge cr6,0x82b062d8
	if (!cr6.lt) goto loc_82B062D8;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82B062D8:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x837b0c10
	ctx.lr = 0x82B062E0;
	sub_837B0C10(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2aab0
	ctx.lr = 0x82B062EC;
	sub_82D2AAB0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x82B062F4;
	sub_8387E8E0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82B06300;
	sub_83103100(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// bl 0x8387e8e0
	ctx.lr = 0x82B06310;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,2224
	ctx.r1.s64 = ctx.r1.s64 + 2224;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82B06318:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x82d97540
	ctx.lr = 0x82B06324;
	sub_82D97540(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,11992
	ctx.r11.s64 = ctx.r11.s64 + 11992;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r3,r11,-80
	ctx.r3.s64 = ctx.r11.s64 + -80;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2f420
	ctx.lr = 0x82B06348;
	sub_82D2F420(ctx, base);
	// li r10,3
	ctx.r10.s64 = 3;
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r4,r4,348
	ctx.r4.u64 = ctx.r4.u64 | 348;
	// bl 0x82d2a1c8
	ctx.lr = 0x82B06360;
	sub_82D2A1C8(ctx, base);
	// lis r5,550
	ctx.r5.s64 = 36044800;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r5,r5,247
	ctx.r5.u64 = ctx.r5.u64 | 247;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2a258
	ctx.lr = 0x82B06374;
	sub_82D2A258(ctx, base);
	// lis r5,550
	ctx.r5.s64 = 36044800;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r5,r5,248
	ctx.r5.u64 = ctx.r5.u64 | 248;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2a258
	ctx.lr = 0x82B06388;
	sub_82D2A258(ctx, base);
	// lis r5,560
	ctx.r5.s64 = 36700160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r5,r5,552
	ctx.r5.u64 = ctx.r5.u64 | 552;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82d2a258
	ctx.lr = 0x82B0639C;
	sub_82D2A258(ctx, base);
	// lis r5,550
	ctx.r5.s64 = 36044800;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r5,r5,249
	ctx.r5.u64 = ctx.r5.u64 | 249;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82d2a258
	ctx.lr = 0x82B063B0;
	sub_82D2A258(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82B063BC;
	sub_83103100(ctx, base);
	// addi r1,r1,2224
	ctx.r1.s64 = ctx.r1.s64 + 2224;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82B063C4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825832d8
	ctx.lr = 0x82B063CC;
	sub_825832D8(ctx, base);
	// bl 0x82d99c08
	ctx.lr = 0x82B063D0;
	sub_82D99C08(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x82d97540
	ctx.lr = 0x82B063E0;
	sub_82D97540(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x82d9a9b8
	ctx.lr = 0x82B063EC;
	sub_82D9A9B8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82d99ff0
	ctx.lr = 0x82B063FC;
	sub_82D99FF0(ctx, base);
	// cmplwi cr6,r3,20
	cr6.compare<uint32_t>(ctx.r3.u32, 20, xer);
	// blt cr6,0x82b06408
	if (cr6.lt) goto loc_82B06408;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82B06408:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// li r6,3
	ctx.r6.s64 = 3;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// beq cr6,0x82b0645c
	if (cr6.eq) goto loc_82B0645C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r11,r11,11992
	ctx.r11.s64 = ctx.r11.s64 + 11992;
	// addi r3,r11,-64
	ctx.r3.s64 = ctx.r11.s64 + -64;
	// bl 0x82d2fa90
	ctx.lr = 0x82B06430;
	sub_82D2FA90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b06540
	if (cr6.eq) goto loc_82B06540;
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// ori r4,r4,242
	ctx.r4.u64 = ctx.r4.u64 | 242;
	// bl 0x82d2ada8
	ctx.lr = 0x82B06448;
	sub_82D2ADA8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82B06454;
	sub_83103100(ctx, base);
	// addi r1,r1,2224
	ctx.r1.s64 = ctx.r1.s64 + 2224;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82B0645C:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// beq cr6,0x82b064a4
	if (cr6.eq) goto loc_82B064A4;
	// addi r11,r11,11992
	ctx.r11.s64 = ctx.r11.s64 + 11992;
	// addi r3,r11,-40
	ctx.r3.s64 = ctx.r11.s64 + -40;
	// bl 0x82d2fa90
	ctx.lr = 0x82B06478;
	sub_82D2FA90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b06540
	if (cr6.eq) goto loc_82B06540;
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// ori r4,r4,152
	ctx.r4.u64 = ctx.r4.u64 | 152;
	// bl 0x82d2ada8
	ctx.lr = 0x82B06490;
	sub_82D2ADA8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82B0649C;
	sub_83103100(ctx, base);
	// addi r1,r1,2224
	ctx.r1.s64 = ctx.r1.s64 + 2224;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82B064A4:
	// addi r29,r11,11992
	ctx.r29.s64 = ctx.r11.s64 + 11992;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r3,r29,-16
	ctx.r3.s64 = ctx.r29.s64 + -16;
	// bl 0x82d2f6d8
	ctx.lr = 0x82B064B4;
	sub_82D2F6D8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r29,-1493
	ctx.r4.s64 = ctx.r29.s64 + -1493;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x82B064C4;
	sub_837B0C10(ctx, base);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// addi r5,r1,308
	ctx.r5.s64 = ctx.r1.s64 + 308;
	// ori r4,r4,156
	ctx.r4.u64 = ctx.r4.u64 | 156;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82d042a8
	ctx.lr = 0x82B064D8;
	sub_82D042A8(ctx, base);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82b064ec
	if (!cr6.lt) goto loc_82B064EC;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
loc_82B064EC:
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x837b0c10
	ctx.lr = 0x82B064F4;
	sub_837B0C10(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2aab0
	ctx.lr = 0x82B06500;
	sub_82D2AAB0(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8387e8e0
	ctx.lr = 0x82B06508;
	sub_8387E8E0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82B06514;
	sub_83103100(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// bl 0x8387e8e0
	ctx.lr = 0x82B06524;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,2224
	ctx.r1.s64 = ctx.r1.s64 + 2224;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82B0652C:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,11992
	ctx.r5.s64 = ctx.r11.s64 + 11992;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82B06540;
	sub_82D20DA8(ctx, base);
loc_82B06540:
	// addi r1,r1,2224
	ctx.r1.s64 = ctx.r1.s64 + 2224;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B06548"))) PPC_WEAK_FUNC(sub_82B06548);
PPC_FUNC_IMPL(__imp__sub_82B06548) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B06564;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r4,r11,12000
	ctx.r4.s64 = ctx.r11.s64 + 12000;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B06580;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b065bc
	if (cr6.eq) goto loc_82B065BC;
	// bl 0x82d2fe58
	ctx.lr = 0x82B0658C;
	sub_82D2FE58(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b065ac
	if (cr6.eq) goto loc_82B065AC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d3d908
	ctx.lr = 0x82B065A0;
	sub_82D3D908(ctx, base);
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r11.u32);
loc_82B065AC:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,104(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b05550
	ctx.lr = 0x82B065BC;
	sub_82B05550(ctx, base);
loc_82B065BC:
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

__attribute__((alias("__imp__sub_82B065D4"))) PPC_WEAK_FUNC(sub_82B065D4);
PPC_FUNC_IMPL(__imp__sub_82B065D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B065D8"))) PPC_WEAK_FUNC(sub_82B065D8);
PPC_FUNC_IMPL(__imp__sub_82B065D8) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B065F4;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r4,r11,12016
	ctx.r4.s64 = ctx.r11.s64 + 12016;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B06610;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b0664c
	if (cr6.eq) goto loc_82B0664C;
	// bl 0x82d2fe58
	ctx.lr = 0x82B0661C;
	sub_82D2FE58(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b0663c
	if (cr6.eq) goto loc_82B0663C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d3d8a8
	ctx.lr = 0x82B06630;
	sub_82D3D8A8(ctx, base);
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r11.u32);
loc_82B0663C:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,104(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b05550
	ctx.lr = 0x82B0664C;
	sub_82B05550(ctx, base);
loc_82B0664C:
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

__attribute__((alias("__imp__sub_82B06664"))) PPC_WEAK_FUNC(sub_82B06664);
PPC_FUNC_IMPL(__imp__sub_82B06664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B06668"))) PPC_WEAK_FUNC(sub_82B06668);
PPC_FUNC_IMPL(__imp__sub_82B06668) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B06670;
	__savegprlr_28(ctx, base);
	// stwu r1,-816(r1)
	ea = -816 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82d86078
	ctx.lr = 0x82B06680;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b0691c
	if (cr6.eq) goto loc_82B0691C;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x82dab6d0
	ctx.lr = 0x82B06690;
	sub_82DAB6D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d17d90
	ctx.lr = 0x82B06698;
	sub_82D17D90(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x82b0691c
	if (cr6.gt) goto loc_82B0691C;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82b06818
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B06818;
	// bdzf 4*cr6+eq,0x82b0683c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B0683C;
	// bdzf 4*cr6+eq,0x82b06860
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B06860;
	// bne cr6,0x82b068ec
	if (!cr6.eq) goto loc_82B068EC;
	// cmplwi cr6,r29,1
	cr6.compare<uint32_t>(ctx.r29.u32, 1, xer);
	// blt cr6,0x82b067e4
	if (cr6.lt) goto loc_82B067E4;
	// beq cr6,0x82b067b0
	if (cr6.eq) goto loc_82B067B0;
	// cmplwi cr6,r29,3
	cr6.compare<uint32_t>(ctx.r29.u32, 3, xer);
	// bge cr6,0x82b0691c
	if (!cr6.lt) goto loc_82B0691C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r30,r11,12116
	ctx.r30.s64 = ctx.r11.s64 + 12116;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r3,r30,-64
	ctx.r3.s64 = ctx.r30.s64 + -64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2f6d8
	ctx.lr = 0x82B066F0;
	sub_82D2F6D8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82B066F8;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b0691c
	if (cr6.eq) goto loc_82B0691C;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x82B06708;
	sub_825832D8(ctx, base);
	// bl 0x82d99c08
	ctx.lr = 0x82B0670C;
	sub_82D99C08(ctx, base);
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x82d9a978
	ctx.lr = 0x82B06714;
	sub_82D9A978(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B0671C;
	sub_831156E8(ctx, base);
	// ld r4,116(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 116);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311c260
	ctx.lr = 0x82B06728;
	sub_8311C260(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// li r5,632
	ctx.r5.s64 = 632;
	// bl 0x831ce980
	ctx.lr = 0x82B06738;
	sub_831CE980(ctx, base);
	// addi r4,r30,-1599
	ctx.r4.s64 = ctx.r30.s64 + -1599;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82B06744;
	sub_837B0C10(ctx, base);
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// addi r5,r1,196
	ctx.r5.s64 = ctx.r1.s64 + 196;
	// lwz r6,24(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// ori r4,r4,158
	ctx.r4.u64 = ctx.r4.u64 | 158;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d042a8
	ctx.lr = 0x82B0675C;
	sub_82D042A8(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82b06770
	if (!cr6.lt) goto loc_82B06770;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_82B06770:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x837b0c10
	ctx.lr = 0x82B06778;
	sub_837B0C10(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d2aab0
	ctx.lr = 0x82B06784;
	sub_82D2AAB0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x82B0678C;
	sub_8387E8E0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82B06798;
	sub_83103100(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// bl 0x8387e8e0
	ctx.lr = 0x82B067A8;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,816
	ctx.r1.s64 = ctx.r1.s64 + 816;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82B067B0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x82d97540
	ctx.lr = 0x82B067BC;
	sub_82D97540(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,12116
	ctx.r11.s64 = ctx.r11.s64 + 12116;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-72
	ctx.r5.s64 = ctx.r11.s64 + -72;
	// bl 0x82d20da8
	ctx.lr = 0x82B067D4;
	sub_82D20DA8(ctx, base);
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// addi r1,r1,816
	ctx.r1.s64 = ctx.r1.s64 + 816;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82B067E4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x82d97540
	ctx.lr = 0x82B067F0;
	sub_82D97540(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,12116
	ctx.r11.s64 = ctx.r11.s64 + 12116;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-84
	ctx.r5.s64 = ctx.r11.s64 + -84;
	// bl 0x82d20da8
	ctx.lr = 0x82B06808;
	sub_82D20DA8(ctx, base);
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// addi r1,r1,816
	ctx.r1.s64 = ctx.r1.s64 + 816;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82B06818:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b06914
	if (!cr6.eq) goto loc_82B06914;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x82d97540
	ctx.lr = 0x82B0682C;
	sub_82D97540(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r11,r11,12116
	ctx.r11.s64 = ctx.r11.s64 + 12116;
	// addi r5,r11,-48
	ctx.r5.s64 = ctx.r11.s64 + -48;
	// b 0x82b06908
	goto loc_82B06908;
loc_82B0683C:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b06914
	if (!cr6.eq) goto loc_82B06914;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x82d97540
	ctx.lr = 0x82B06850;
	sub_82D97540(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r11,r11,12116
	ctx.r11.s64 = ctx.r11.s64 + 12116;
	// addi r5,r11,-40
	ctx.r5.s64 = ctx.r11.s64 + -40;
	// b 0x82b06908
	goto loc_82B06908;
loc_82B06860:
	// cmplwi cr6,r29,3
	cr6.compare<uint32_t>(ctx.r29.u32, 3, xer);
	// bgt cr6,0x82b06914
	if (cr6.gt) goto loc_82B06914;
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82b06898
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B06898;
	// bdzf 4*cr6+eq,0x82b068b4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B068B4;
	// bne cr6,0x82b068d0
	if (!cr6.eq) goto loc_82B068D0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d976d0
	ctx.lr = 0x82B06888;
	sub_82D976D0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r11,r11,12116
	ctx.r11.s64 = ctx.r11.s64 + 12116;
	// addi r5,r11,-32
	ctx.r5.s64 = ctx.r11.s64 + -32;
	// b 0x82b06908
	goto loc_82B06908;
loc_82B06898:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d976d0
	ctx.lr = 0x82B068A4;
	sub_82D976D0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r11,r11,12116
	ctx.r11.s64 = ctx.r11.s64 + 12116;
	// addi r5,r11,-24
	ctx.r5.s64 = ctx.r11.s64 + -24;
	// b 0x82b06908
	goto loc_82B06908;
loc_82B068B4:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d976d0
	ctx.lr = 0x82B068C0;
	sub_82D976D0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r11,r11,12116
	ctx.r11.s64 = ctx.r11.s64 + 12116;
	// addi r5,r11,-16
	ctx.r5.s64 = ctx.r11.s64 + -16;
	// b 0x82b06908
	goto loc_82B06908;
loc_82B068D0:
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d976d0
	ctx.lr = 0x82B068DC;
	sub_82D976D0(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r11,r11,12116
	ctx.r11.s64 = ctx.r11.s64 + 12116;
	// addi r5,r11,-8
	ctx.r5.s64 = ctx.r11.s64 + -8;
	// b 0x82b06908
	goto loc_82B06908;
loc_82B068EC:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b06914
	if (!cr6.eq) goto loc_82B06914;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x82d97540
	ctx.lr = 0x82B06900;
	sub_82D97540(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r5,r11,12116
	ctx.r5.s64 = ctx.r11.s64 + 12116;
loc_82B06908:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82B06914;
	sub_82D20DA8(ctx, base);
loc_82B06914:
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_82B0691C:
	// addi r1,r1,816
	ctx.r1.s64 = ctx.r1.s64 + 816;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B06924"))) PPC_WEAK_FUNC(sub_82B06924);
PPC_FUNC_IMPL(__imp__sub_82B06924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B06928"))) PPC_WEAK_FUNC(sub_82B06928);
PPC_FUNC_IMPL(__imp__sub_82B06928) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b047c0
	ctx.lr = 0x82B06948;
	sub_82B047C0(ctx, base);
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// sth r11,116(r31)
	PPC_STORE_U16(ctx.r31.u32 + 116, ctx.r11.u16);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r10.u32);
	// bl 0x82d19a78
	ctx.lr = 0x82B06960;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// addi r4,r9,11008
	ctx.r4.s64 = ctx.r9.s64 + 11008;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82B0697C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b069a0
	if (cr6.eq) goto loc_82B069A0;
	// bl 0x82d2fe58
	ctx.lr = 0x82B06988;
	sub_82D2FE58(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b069a0
	if (cr6.eq) goto loc_82B069A0;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x82d3d968
	ctx.lr = 0x82B069A0;
	sub_82D3D968(ctx, base);
loc_82B069A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b05078
	ctx.lr = 0x82B069A8;
	sub_82B05078(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x82b05550
	ctx.lr = 0x82B069B8;
	sub_82B05550(ctx, base);
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

__attribute__((alias("__imp__sub_82B069D0"))) PPC_WEAK_FUNC(sub_82B069D0);
PPC_FUNC_IMPL(__imp__sub_82B069D0) {
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
	// bl 0x82d26ed8
	ctx.lr = 0x82B069E0;
	sub_82D26ED8(ctx, base);
	// li r4,108
	ctx.r4.s64 = 108;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82d26b48
	ctx.lr = 0x82B069EC;
	sub_82D26B48(ctx, base);
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

__attribute__((alias("__imp__sub_82B06A00"))) PPC_WEAK_FUNC(sub_82B06A00);
PPC_FUNC_IMPL(__imp__sub_82B06A00) {
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
	// lwz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b06a34
	if (!cr6.eq) goto loc_82B06A34;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,13236
	ctx.r3.s64 = ctx.r11.s64 + 13236;
	// bl 0x82c00618
	ctx.lr = 0x82B06A30;
	sub_82C00618(ctx, base);
	// stw r3,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r3.u32);
loc_82B06A34:
	// lwz r4,108(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82b06a5c
	if (cr6.eq) goto loc_82B06A5C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82B06A48;
	sub_83103100(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// li r4,1024
	ctx.r4.s64 = 1024;
	// bl 0x82bff970
	ctx.lr = 0x82B06A5C;
	sub_82BFF970(ctx, base);
loc_82B06A5C:
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

__attribute__((alias("__imp__sub_82B06A70"))) PPC_WEAK_FUNC(sub_82B06A70);
PPC_FUNC_IMPL(__imp__sub_82B06A70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// subfc r9,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// eqv r8,r10,r11
	ctx.r8.u64 = ~(ctx.r10.u64 ^ ctx.r11.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r3,r6,31
	ctx.r3.u64 = ctx.r6.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B06A90"))) PPC_WEAK_FUNC(sub_82B06A90);
PPC_FUNC_IMPL(__imp__sub_82B06A90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82B06A98;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// srawi r10,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// cmpw cr6,r5,r4
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, xer);
	// addze r30,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r30.s64 = temp.s64;
	// bge cr6,0x82b06b78
	if (!cr6.lt) goto loc_82B06B78;
loc_82B06AC4:
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// mtctr r25
	ctr.u64 = ctx.r25.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r27
	ctx.r31.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82B06AE4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b06b78
	if (cr6.eq) goto loc_82B06B78;
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r30,-1
	ctx.r9.s64 = ctx.r30.s64 + -1;
	// add r8,r29,r11
	ctx.r8.u64 = ctx.r29.u64 + ctx.r11.u64;
	// srawi r7,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 1;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addze r30,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r30.s64 = temp.s64;
	// cmpw cr6,r26,r29
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r29.s32, xer);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// lhz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// sth r5,8(r11)
	PPC_STORE_U16(ctx.r11.u32 + 8, ctx.r5.u16);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r4,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r4.u32);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwimi r3,r10,0,14,31
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r3.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r8,r3,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r3,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r3.u32);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwimi r9,r8,0,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r7,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r7.u32);
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r6,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r6.u32);
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r5,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r5.u32);
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r4,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r4.u32);
	// blt cr6,0x82b06ac4
	if (cr6.lt) goto loc_82B06AC4;
loc_82B06B78:
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r9,r29,r11
	ctx.r9.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r8,4(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lhz r7,8(r28)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r28.u32 + 8);
	// sth r7,8(r11)
	PPC_STORE_U16(ctx.r11.u32 + 8, ctx.r7.u16);
	// lwz r6,12(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// stw r6,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
	// lwz r5,16(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwimi r5,r4,0,14,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x3FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r10,r5,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r5,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r5.u32);
	// lwz r3,16(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// rlwimi r3,r10,0,0,13
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFC0000) | (ctx.r3.u64 & 0xFFFFFFFF0003FFFF);
	// stw r3,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r3.u32);
	// lwz r9,20(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// lwz r8,24(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// stw r8,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// lwz r7,28(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// stw r7,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r7.u32);
	// lwz r6,32(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// stw r6,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r6.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B06BF0"))) PPC_WEAK_FUNC(sub_82B06BF0);
PPC_FUNC_IMPL(__imp__sub_82B06BF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82b06c68
	if (cr6.eq) goto loc_82B06C68;
	// addi r11,r4,8
	ctx.r11.s64 = ctx.r4.s64 + 8;
loc_82B06BFC:
	// addi r11,r11,-36
	ctx.r11.s64 = ctx.r11.s64 + -36;
	// addi r10,r11,-8
	ctx.r10.s64 = ctx.r11.s64 + -8;
	// cmplw cr6,r10,r3
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, xer);
	// lwz r9,-8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// stwu r9,-36(r5)
	ea = -36 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r5.u32 = ea;
	// lwz r8,-4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r8,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r8.u32);
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// sth r7,8(r5)
	PPC_STORE_U16(ctx.r5.u32 + 8, ctx.r7.u16);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r6,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r6.u32);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,16(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// rlwimi r4,r10,0,14,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFC0000);
	// stw r4,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r4.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwimi r9,r4,0,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// stw r9,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r9.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r8,20(r5)
	PPC_STORE_U32(ctx.r5.u32 + 20, ctx.r8.u32);
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r7,24(r5)
	PPC_STORE_U32(ctx.r5.u32 + 24, ctx.r7.u32);
	// lwz r6,20(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r6,28(r5)
	PPC_STORE_U32(ctx.r5.u32 + 28, ctx.r6.u32);
	// lwz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r4,32(r5)
	PPC_STORE_U32(ctx.r5.u32 + 32, ctx.r4.u32);
	// bne cr6,0x82b06bfc
	if (!cr6.eq) goto loc_82B06BFC;
loc_82B06C68:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B06C70"))) PPC_WEAK_FUNC(sub_82B06C70);
PPC_FUNC_IMPL(__imp__sub_82B06C70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82b06c94
	if (cr6.eq) goto loc_82B06C94;
loc_82B06C80:
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_82B06C94:
	// lbz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// lbz r10,2(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82b06c80
	if (!cr6.eq) goto loc_82B06C80;
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
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B06CC8"))) PPC_WEAK_FUNC(sub_82B06CC8);
PPC_FUNC_IMPL(__imp__sub_82B06CC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r9,r11,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// rlwinm r8,r10,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// beq cr6,0x82b06cf0
	if (cr6.eq) goto loc_82B06CF0;
	// subfc r11,r8,r9
	xer.ca = ctx.r9.u32 >= ctx.r8.u32;
	ctx.r11.s64 = ctx.r9.s64 - ctx.r8.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r9,31
	ctx.r3.u64 = ctx.r9.u32 & 0x1;
	// blr 
	return;
loc_82B06CF0:
	// rlwinm r9,r10,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// rlwinm r8,r11,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// beq cr6,0x82b06d10
	if (cr6.eq) goto loc_82B06D10;
	// subfc r11,r9,r8
	xer.ca = ctx.r8.u32 >= ctx.r9.u32;
	ctx.r11.s64 = ctx.r8.s64 - ctx.r9.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r9,31
	ctx.r3.u64 = ctx.r9.u32 & 0x1;
	// blr 
	return;
loc_82B06D10:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// subfc r8,r10,r9
	xer.ca = ctx.r9.u32 >= ctx.r10.u32;
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r6,31
	ctx.r3.u64 = ctx.r6.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B06D28"))) PPC_WEAK_FUNC(sub_82B06D28);
PPC_FUNC_IMPL(__imp__sub_82B06D28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82b06d48
	if (cr6.eq) goto loc_82B06D48;
loc_82B06D38:
	// subfc r11,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r9,31
	ctx.r3.u64 = ctx.r9.u32 & 0x1;
	// blr 
	return;
loc_82B06D48:
	// lbz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// lbz r10,2(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82b06d38
	if (!cr6.eq) goto loc_82B06D38;
	// lbz r11,3(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// lbz r10,3(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// subfc r9,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r7,31
	ctx.r3.u64 = ctx.r7.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B06D70"))) PPC_WEAK_FUNC(sub_82B06D70);
PPC_FUNC_IMPL(__imp__sub_82B06D70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82b06dec
	if (cr6.eq) goto loc_82B06DEC;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
loc_82B06D7C:
	// lwz r10,-8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// lwz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stw r9,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r9.u32);
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// sth r8,8(r5)
	PPC_STORE_U16(ctx.r5.u32 + 8, ctx.r8.u16);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r7.u32);
	// lwz r3,16(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwimi r6,r3,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r6.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwimi r10,r6,0,0,13
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFC0000) | (ctx.r10.u64 & 0xFFFFFFFF0003FFFF);
	// stw r10,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r10.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,20(r5)
	PPC_STORE_U32(ctx.r5.u32 + 20, ctx.r9.u32);
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r8,24(r5)
	PPC_STORE_U32(ctx.r5.u32 + 24, ctx.r8.u32);
	// lwz r7,20(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r7,28(r5)
	PPC_STORE_U32(ctx.r5.u32 + 28, ctx.r7.u32);
	// lwz r6,24(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// stw r6,32(r5)
	PPC_STORE_U32(ctx.r5.u32 + 32, ctx.r6.u32);
	// addi r5,r5,36
	ctx.r5.s64 = ctx.r5.s64 + 36;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// bne cr6,0x82b06d7c
	if (!cr6.eq) goto loc_82B06D7C;
loc_82B06DEC:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B06DF4"))) PPC_WEAK_FUNC(sub_82B06DF4);
PPC_FUNC_IMPL(__imp__sub_82B06DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B06DF8"))) PPC_WEAK_FUNC(sub_82B06DF8);
PPC_FUNC_IMPL(__imp__sub_82B06DF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r3,6
	ctx.r11.s64 = ctx.r3.s64 + 6;
	// subf r9,r3,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r3.s64;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// lbz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// stb r7,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r7.u8);
loc_82B06E14:
	// lhzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// sth r8,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// lhz r6,2(r7)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r7.u32 + 2);
	// sth r6,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r6.u16);
	// lhz r5,4(r7)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r7.u32 + 4);
	// sth r5,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r5.u16);
	// lhz r8,6(r7)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r7.u32 + 6);
	// sth r8,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r8.u16);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bne 0x82b06e14
	if (!cr0.eq) goto loc_82B06E14;
	// lwz r11,128(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 128);
	// lwz r10,128(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// rlwimi r10,r11,0,0,13
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r10.u64 & 0xFFFFFFFF0003FFFF);
	// stw r10,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r10.u32);
	// lwz r9,128(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 128);
	// rlwimi r10,r9,0,14,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFC0000);
	// stw r10,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r10.u32);
	// lwz r7,132(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 132);
	// lwz r8,136(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// stw r7,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r7.u32);
	// lwz r6,136(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 136);
	// rlwimi r8,r6,0,0,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// stw r8,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r8.u32);
	// lwz r5,136(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 136);
	// rlwimi r8,r5,0,14,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFC0000);
	// stw r8,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r8.u32);
	// lwz r11,140(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 140);
	// stw r11,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r11.u32);
	// lwz r9,144(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 144);
	// lwz r10,144(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// rlwimi r10,r9,0,0,13
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFC0000) | (ctx.r10.u64 & 0xFFFFFFFF0003FFFF);
	// stw r10,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r10.u32);
	// lwz r8,144(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 144);
	// rlwimi r10,r8,0,14,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3FFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFC0000);
	// stw r10,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, ctx.r10.u32);
	// lwz r7,148(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 148);
	// stw r7,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r7.u32);
	// lwz r5,152(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 152);
	// lwz r6,152(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// rlwimi r6,r5,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// stw r6,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r6.u32);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r10,152(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 152);
	// rlwimi r11,r10,0,14,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFC0000);
	// stw r11,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r11.u32);
	// lwz r9,156(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 156);
	// stw r9,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, ctx.r9.u32);
	// lwz r7,160(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 160);
	// lwz r8,160(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// rlwimi r8,r7,0,0,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// stw r8,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r8.u32);
	// lwz r5,160(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 160);
	// rlwimi r6,r5,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, ctx.r6.u32);
	// lwz r11,164(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 164);
	// stw r11,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, ctx.r11.u32);
	// lbz r10,168(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 168);
	// stb r10,168(r3)
	PPC_STORE_U8(ctx.r3.u32 + 168, ctx.r10.u8);
	// lbz r9,169(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 169);
	// stb r9,169(r3)
	PPC_STORE_U8(ctx.r3.u32 + 169, ctx.r9.u8);
	// lbz r8,170(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 170);
	// stb r8,170(r3)
	PPC_STORE_U8(ctx.r3.u32 + 170, ctx.r8.u8);
	// lbz r7,171(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 171);
	// stb r7,171(r3)
	PPC_STORE_U8(ctx.r3.u32 + 171, ctx.r7.u8);
	// lbz r6,172(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 172);
	// stb r6,172(r3)
	PPC_STORE_U8(ctx.r3.u32 + 172, ctx.r6.u8);
	// lbz r5,173(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 173);
	// stb r5,173(r3)
	PPC_STORE_U8(ctx.r3.u32 + 173, ctx.r5.u8);
	// lbz r11,174(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 174);
	// stb r11,174(r3)
	PPC_STORE_U8(ctx.r3.u32 + 174, ctx.r11.u8);
	// lbz r10,175(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 175);
	// stb r10,175(r3)
	PPC_STORE_U8(ctx.r3.u32 + 175, ctx.r10.u8);
	// lbz r9,176(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 176);
	// stb r9,176(r3)
	PPC_STORE_U8(ctx.r3.u32 + 176, ctx.r9.u8);
	// lwz r8,184(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// lwz r7,180(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 180);
	// stw r7,180(r3)
	PPC_STORE_U32(ctx.r3.u32 + 180, ctx.r7.u32);
	// lwz r6,184(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 184);
	// rlwimi r6,r8,0,10,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3FFFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFC00000);
	// rotlwi r5,r6,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 184, ctx.r6.u32);
	// lwz r11,184(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 184);
	// rlwimi r5,r11,0,10,19
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FF000) | (ctx.r5.u64 & 0xFFFFFFFFFFC00FFF);
	// rotlwi r9,r5,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r5,184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 184, ctx.r5.u32);
	// lwz r10,184(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 184);
	// rlwimi r9,r10,0,20,26
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFE0) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF01F);
	// stw r9,184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 184, ctx.r9.u32);
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r7,184(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 184);
	// rlwimi r8,r7,0,27,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x1F) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFE0);
	// stw r8,184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 184, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B06F94"))) PPC_WEAK_FUNC(sub_82B06F94);
PPC_FUNC_IMPL(__imp__sub_82B06F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B06F98"))) PPC_WEAK_FUNC(sub_82B06F98);
PPC_FUNC_IMPL(__imp__sub_82B06F98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B06FA0;
	__savegprlr_29(ctx, base);
	// li r9,9
	ctx.r9.s64 = 9;
	// addi r10,r1,-84
	ctx.r10.s64 = ctx.r1.s64 + -84;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82B06FB0:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82b06fb0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B06FB0;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,-80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -80);
	// lwz r9,-76(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -76);
	// lhz r8,-72(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + -72);
	// lwz r7,-68(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -68);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// lhz r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// sth r5,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r5.u16);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r6,16(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// rlwimi r6,r5,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r11,r6,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
	// lwz r6,16(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// rlwimi r11,r6,0,14,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x3FFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFC0000);
	// lwz r6,-64(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -64);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lwz r5,20(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// stw r5,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// lwz r5,28(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// lwz r11,-60(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -60);
	// lwz r31,-56(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + -56);
	// lwz r30,-52(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + -52);
	// lwz r29,-48(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + -48);
	// stw r5,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r5.u32);
	// lwz r5,32(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// stw r5,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r5.u32);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// sth r8,8(r4)
	PPC_STORE_U16(ctx.r4.u32 + 8, ctx.r8.u16);
	// stw r7,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r7.u32);
	// stw r6,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r6.u32);
	// stw r11,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r11.u32);
	// stw r31,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r31.u32);
	// stw r30,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, ctx.r30.u32);
	// stw r29,32(r4)
	PPC_STORE_U32(ctx.r4.u32 + 32, ctx.r29.u32);
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B07068"))) PPC_WEAK_FUNC(sub_82B07068);
PPC_FUNC_IMPL(__imp__sub_82B07068) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82B07070;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm r31,r11,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// cmpw cr6,r31,r5
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r5.s32, xer);
	// bge cr6,0x82b07160
	if (!cr6.lt) goto loc_82B07160;
loc_82B0709C:
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r4,r3,-36
	ctx.r4.s64 = ctx.r3.s64 + -36;
	// bctrl 
	ctx.lr = 0x82B070B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b070c8
	if (cr6.eq) goto loc_82B070C8;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_82B070C8:
	// rlwinm r10,r31,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 1;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// rlwinm r31,r8,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, xer);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// lhz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 8);
	// sth r5,8(r11)
	PPC_STORE_U16(ctx.r11.u32 + 8, ctx.r5.u16);
	// lwz r4,12(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r4,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r4.u32);
	// lwz r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwimi r3,r9,0,14,31
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r3.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r7,r3,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r3,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r3.u32);
	// lwz r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// rlwimi r8,r7,0,0,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// stw r8,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r8.u32);
	// lwz r6,20(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// stw r6,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r6.u32);
	// lwz r5,24(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// stw r5,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r5.u32);
	// lwz r4,28(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// stw r4,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r4.u32);
	// lwz r3,32(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// stw r3,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r3.u32);
	// blt cr6,0x82b0709c
	if (cr6.lt) goto loc_82B0709C;
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, xer);
loc_82B07160:
	// bne cr6,0x82b071ec
	if (!cr6.eq) goto loc_82B071EC;
	// rlwinm r10,r28,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r28,r10
	ctx.r10.u64 = ctx.r28.u64 + ctx.r10.u64;
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r9,r10,-36
	ctx.r9.s64 = ctx.r10.s64 + -36;
	// addi r30,r28,-1
	ctx.r30.s64 = ctx.r28.s64 + -1;
	// lwz r8,-36(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -36);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r7,-32(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lhz r6,-28(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + -28);
	// sth r6,8(r11)
	PPC_STORE_U16(ctx.r11.u32 + 8, ctx.r6.u16);
	// lwz r5,-24(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24);
	// stw r5,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
	// lwz r4,-20(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwimi r4,r3,0,14,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0x3FFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r8,r4,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stw r4,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r4.u32);
	// lwz r9,-20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20);
	// rlwimi r9,r8,0,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// lwz r7,-16(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -16);
	// stw r7,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r7.u32);
	// lwz r6,-12(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + -12);
	// stw r6,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r6.u32);
	// lwz r5,-8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	// stw r5,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r5.u32);
	// lwz r4,-4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// stw r4,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r4.u32);
loc_82B071EC:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b06a90
	ctx.lr = 0x82B07204;
	sub_82B06A90(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B0720C"))) PPC_WEAK_FUNC(sub_82B0720C);
PPC_FUNC_IMPL(__imp__sub_82B0720C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B07210"))) PPC_WEAK_FUNC(sub_82B07210);
PPC_FUNC_IMPL(__imp__sub_82B07210) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82B07218;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// srawi r10,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// cmpw cr6,r5,r4
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, xer);
	// addze r28,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r28.s64 = temp.s64;
	// bge cr6,0x82b0742c
	if (!cr6.lt) goto loc_82B0742C;
loc_82B07244:
	// mulli r11,r28,188
	ctx.r11.s64 = ctx.r28.s64 * 188;
	// mtctr r25
	ctr.u64 = ctx.r25.u64;
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82B0725C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b0742c
	if (cr6.eq) goto loc_82B0742C;
	// mulli r11,r30,188
	ctx.r11.s64 = ctx.r30.s64 * 188;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// li r9,15
	ctx.r9.s64 = 15;
	// addi r10,r11,6
	ctx.r10.s64 = ctx.r11.s64 + 6;
	// subf r8,r11,r31
	ctx.r8.s64 = ctx.r31.s64 - ctx.r11.s64;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lbz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// stb r6,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r6.u8);
loc_82B0728C:
	// lhzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r10.u32);
	// add r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// sth r7,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r7.u16);
	// lhz r5,2(r6)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r6.u32 + 2);
	// sth r5,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r5.u16);
	// lhz r4,4(r6)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r6.u32 + 4);
	// sth r4,4(r10)
	PPC_STORE_U16(ctx.r10.u32 + 4, ctx.r4.u16);
	// lhz r3,6(r6)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r6.u32 + 6);
	// sth r3,6(r10)
	PPC_STORE_U16(ctx.r10.u32 + 6, ctx.r3.u16);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bne 0x82b0728c
	if (!cr0.eq) goto loc_82B0728C;
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// addi r9,r28,-1
	ctx.r9.s64 = ctx.r28.s64 + -1;
	// lwz r8,128(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 128);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// srawi r7,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 1;
	// rlwimi r10,r8,0,14,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3FFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFC0000);
	// addze r28,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r28.s64 = temp.s64;
	// stw r10,128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 128, ctx.r10.u32);
	// rotlwi r5,r10,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r6,128(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmpw cr6,r26,r30
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r30.s32, xer);
	// rlwimi r6,r5,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// stw r6,128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 128, ctx.r6.u32);
	// lwz r4,136(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// stw r3,132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 132, ctx.r3.u32);
	// lwz r10,136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// rlwimi r10,r4,0,14,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x3FFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFC0000);
	// stw r10,136(r11)
	PPC_STORE_U32(ctx.r11.u32 + 136, ctx.r10.u32);
	// rotlwi r8,r10,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r9,136(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// rlwimi r9,r8,0,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// stw r9,136(r11)
	PPC_STORE_U32(ctx.r11.u32 + 136, ctx.r9.u32);
	// lwz r7,140(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// stw r7,140(r11)
	PPC_STORE_U32(ctx.r11.u32 + 140, ctx.r7.u32);
	// lwz r5,144(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// lwz r6,144(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// rlwimi r6,r5,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,144(r11)
	PPC_STORE_U32(ctx.r11.u32 + 144, ctx.r6.u32);
	// rotlwi r3,r6,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwz r4,144(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// rlwimi r4,r3,0,0,13
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0xFFFC0000) | (ctx.r4.u64 & 0xFFFFFFFF0003FFFF);
	// stw r4,144(r11)
	PPC_STORE_U32(ctx.r11.u32 + 144, ctx.r4.u32);
	// lwz r10,148(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// stw r10,148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 148, ctx.r10.u32);
	// lwz r8,152(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// lwz r9,152(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// rlwimi r9,r8,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// stw r9,152(r11)
	PPC_STORE_U32(ctx.r11.u32 + 152, ctx.r9.u32);
	// rotlwi r6,r9,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r7,152(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// rlwimi r7,r6,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// stw r7,152(r11)
	PPC_STORE_U32(ctx.r11.u32 + 152, ctx.r7.u32);
	// lwz r5,156(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// stw r5,156(r11)
	PPC_STORE_U32(ctx.r11.u32 + 156, ctx.r5.u32);
	// lwz r3,160(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// lwz r4,160(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// rlwimi r4,r3,0,14,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0x3FFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r9,r4,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stw r4,160(r11)
	PPC_STORE_U32(ctx.r11.u32 + 160, ctx.r4.u32);
	// lwz r10,160(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// rlwimi r10,r9,0,0,13
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFC0000) | (ctx.r10.u64 & 0xFFFFFFFF0003FFFF);
	// stw r10,160(r11)
	PPC_STORE_U32(ctx.r11.u32 + 160, ctx.r10.u32);
	// lwz r8,164(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// stw r8,164(r11)
	PPC_STORE_U32(ctx.r11.u32 + 164, ctx.r8.u32);
	// lbz r7,168(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 168);
	// stb r7,168(r11)
	PPC_STORE_U8(ctx.r11.u32 + 168, ctx.r7.u8);
	// lbz r6,169(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 169);
	// stb r6,169(r11)
	PPC_STORE_U8(ctx.r11.u32 + 169, ctx.r6.u8);
	// lbz r5,170(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 170);
	// stb r5,170(r11)
	PPC_STORE_U8(ctx.r11.u32 + 170, ctx.r5.u8);
	// lbz r4,171(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 171);
	// stb r4,171(r11)
	PPC_STORE_U8(ctx.r11.u32 + 171, ctx.r4.u8);
	// lbz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 172);
	// stb r3,172(r11)
	PPC_STORE_U8(ctx.r11.u32 + 172, ctx.r3.u8);
	// lbz r10,173(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 173);
	// stb r10,173(r11)
	PPC_STORE_U8(ctx.r11.u32 + 173, ctx.r10.u8);
	// lbz r9,174(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 174);
	// stb r9,174(r11)
	PPC_STORE_U8(ctx.r11.u32 + 174, ctx.r9.u8);
	// lbz r8,175(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 175);
	// stb r8,175(r11)
	PPC_STORE_U8(ctx.r11.u32 + 175, ctx.r8.u8);
	// lbz r7,176(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 176);
	// stb r7,176(r11)
	PPC_STORE_U8(ctx.r11.u32 + 176, ctx.r7.u8);
	// lwz r6,184(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// lwz r5,180(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// stw r5,180(r11)
	PPC_STORE_U32(ctx.r11.u32 + 180, ctx.r5.u32);
	// lwz r4,184(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// rlwimi r4,r6,0,10,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x3FFFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFC00000);
	// stw r4,184(r11)
	PPC_STORE_U32(ctx.r11.u32 + 184, ctx.r4.u32);
	// rotlwi r10,r4,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// rlwimi r3,r10,0,20,9
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFFFFFC00FFF) | (ctx.r3.u64 & 0x3FF000);
	// rotlwi r9,r3,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r3,184(r11)
	PPC_STORE_U32(ctx.r11.u32 + 184, ctx.r3.u32);
	// lwz r8,184(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// rlwimi r8,r9,0,27,19
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFFFFFFFFFFF01F) | (ctx.r8.u64 & 0xFE0);
	// rotlwi r7,r8,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,184(r11)
	PPC_STORE_U32(ctx.r11.u32 + 184, ctx.r8.u32);
	// lwz r6,184(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// rlwimi r6,r7,0,0,26
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFFFFE0) | (ctx.r6.u64 & 0xFFFFFFFF0000001F);
	// stw r6,184(r11)
	PPC_STORE_U32(ctx.r11.u32 + 184, ctx.r6.u32);
	// blt cr6,0x82b07244
	if (cr6.lt) goto loc_82B07244;
loc_82B0742C:
	// mulli r11,r30,188
	ctx.r11.s64 = ctx.r30.s64 * 188;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82b06df8
	ctx.lr = 0x82B0743C;
	sub_82B06DF8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B07444"))) PPC_WEAK_FUNC(sub_82B07444);
PPC_FUNC_IMPL(__imp__sub_82B07444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B07448"))) PPC_WEAK_FUNC(sub_82B07448);
PPC_FUNC_IMPL(__imp__sub_82B07448) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82b07614
	if (cr6.eq) goto loc_82B07614;
	// addi r11,r5,140
	ctx.r11.s64 = ctx.r5.s64 + 140;
	// addi r10,r4,140
	ctx.r10.s64 = ctx.r4.s64 + 140;
loc_82B07458:
	// addi r10,r10,-188
	ctx.r10.s64 = ctx.r10.s64 + -188;
	// addi r11,r11,-188
	ctx.r11.s64 = ctx.r11.s64 + -188;
	// addi r7,r10,-140
	ctx.r7.s64 = ctx.r10.s64 + -140;
	// addi r9,r11,-134
	ctx.r9.s64 = ctx.r11.s64 + -134;
	// li r8,15
	ctx.r8.s64 = 15;
	// lwz r6,-140(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + -140);
	// stwu r6,-188(r5)
	ea = -188 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r5.u32 = ea;
	// lbz r4,-136(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + -136);
	// subf r7,r5,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r5.s64;
	// stb r4,-136(r11)
	PPC_STORE_U8(ctx.r11.u32 + -136, ctx.r4.u8);
loc_82B07480:
	// lhzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r9.u32);
	// add r4,r7,r9
	ctx.r4.u64 = ctx.r7.u64 + ctx.r9.u64;
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// sth r6,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r6.u16);
	// lhz r6,2(r4)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// sth r6,2(r9)
	PPC_STORE_U16(ctx.r9.u32 + 2, ctx.r6.u16);
	// lhz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// sth r6,4(r9)
	PPC_STORE_U16(ctx.r9.u32 + 4, ctx.r6.u16);
	// lhz r4,6(r4)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r4.u32 + 6);
	// sth r4,6(r9)
	PPC_STORE_U16(ctx.r9.u32 + 6, ctx.r4.u16);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bne 0x82b07480
	if (!cr0.eq) goto loc_82B07480;
	// lwz r9,-12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -12);
	// lwz r8,-12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	// rlwimi r9,r8,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// stw r9,-12(r11)
	PPC_STORE_U32(ctx.r11.u32 + -12, ctx.r9.u32);
	// rotlwi r6,r9,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r7,-12(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -12);
	// rlwimi r7,r6,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// stw r7,-12(r11)
	PPC_STORE_U32(ctx.r11.u32 + -12, ctx.r7.u32);
	// lwz r4,-4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r9,-8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	// stw r9,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r9.u32);
	// lwz r8,-4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// rlwimi r8,r4,0,14,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x3FFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFC0000);
	// stw r8,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r8.u32);
	// rotlwi r6,r8,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r7,-4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// rlwimi r7,r6,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// stw r7,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r7.u32);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwimi r9,r8,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// rotlwi r6,r9,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwimi r7,r6,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lwz r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// rlwimi r9,r8,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r6,r9,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// lwz r7,12(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// rlwimi r7,r6,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// lwz r4,16(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// stw r4,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r4.u32);
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// rlwimi r9,r8,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r6,r9,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// lwz r7,20(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// rlwimi r7,r6,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// stw r7,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r7.u32);
	// lwz r4,24(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// stw r4,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r4.u32);
	// lbz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 28);
	// stb r9,28(r11)
	PPC_STORE_U8(ctx.r11.u32 + 28, ctx.r9.u8);
	// lbz r8,29(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 29);
	// stb r8,29(r11)
	PPC_STORE_U8(ctx.r11.u32 + 29, ctx.r8.u8);
	// lbz r7,30(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 30);
	// stb r7,30(r11)
	PPC_STORE_U8(ctx.r11.u32 + 30, ctx.r7.u8);
	// lbz r6,31(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 31);
	// stb r6,31(r11)
	PPC_STORE_U8(ctx.r11.u32 + 31, ctx.r6.u8);
	// lbz r4,32(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 32);
	// stb r4,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r4.u8);
	// lbz r9,33(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 33);
	// stb r9,33(r11)
	PPC_STORE_U8(ctx.r11.u32 + 33, ctx.r9.u8);
	// lbz r8,34(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 34);
	// stb r8,34(r11)
	PPC_STORE_U8(ctx.r11.u32 + 34, ctx.r8.u8);
	// lbz r7,35(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 35);
	// stb r7,35(r11)
	PPC_STORE_U8(ctx.r11.u32 + 35, ctx.r7.u8);
	// lbz r6,36(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 36);
	// stb r6,36(r11)
	PPC_STORE_U8(ctx.r11.u32 + 36, ctx.r6.u8);
	// lwz r4,44(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// stw r9,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r9.u32);
	// lwz r8,44(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// rlwimi r8,r4,0,10,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x3FFFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFC00000);
	// rotlwi r6,r8,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r8.u32);
	// lwz r7,44(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// addi r8,r10,-140
	ctx.r8.s64 = ctx.r10.s64 + -140;
	// rlwimi r7,r6,0,20,9
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFFFFFFFFC00FFF) | (ctx.r7.u64 & 0x3FF000);
	// stw r7,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r7.u32);
	// rotlwi r9,r7,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r4,44(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// rlwimi r4,r9,0,27,19
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFFFFFFFFFFF01F) | (ctx.r4.u64 & 0xFE0);
	// cmplw cr6,r8,r3
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, xer);
	// stw r4,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r4.u32);
	// rotlwi r7,r4,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// lwz r6,44(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// rlwimi r6,r7,0,0,26
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFFFFE0) | (ctx.r6.u64 & 0xFFFFFFFF0000001F);
	// stw r6,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r6.u32);
	// bne cr6,0x82b07458
	if (!cr6.eq) goto loc_82B07458;
loc_82B07614:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B0761C"))) PPC_WEAK_FUNC(sub_82B0761C);
PPC_FUNC_IMPL(__imp__sub_82B0761C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B07620"))) PPC_WEAK_FUNC(sub_82B07620);
PPC_FUNC_IMPL(__imp__sub_82B07620) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82b077f0
	if (cr6.eq) goto loc_82B077F0;
	// addi r11,r5,140
	ctx.r11.s64 = ctx.r5.s64 + 140;
	// addi r10,r3,140
	ctx.r10.s64 = ctx.r3.s64 + 140;
loc_82B07630:
	// lwz r6,-140(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + -140);
	// addi r8,r10,-140
	ctx.r8.s64 = ctx.r10.s64 + -140;
	// addi r9,r11,-134
	ctx.r9.s64 = ctx.r11.s64 + -134;
	// subf r7,r5,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r5.s64;
	// li r8,15
	ctx.r8.s64 = 15;
	// stw r6,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r6.u32);
	// lbz r3,-136(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + -136);
	// stb r3,-136(r11)
	PPC_STORE_U8(ctx.r11.u32 + -136, ctx.r3.u8);
loc_82B07650:
	// lhzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r9.u32);
	// add r3,r7,r9
	ctx.r3.u64 = ctx.r7.u64 + ctx.r9.u64;
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// sth r6,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r6.u16);
	// lhz r6,2(r3)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// sth r6,2(r9)
	PPC_STORE_U16(ctx.r9.u32 + 2, ctx.r6.u16);
	// lhz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// sth r6,4(r9)
	PPC_STORE_U16(ctx.r9.u32 + 4, ctx.r6.u16);
	// lhz r3,6(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// sth r3,6(r9)
	PPC_STORE_U16(ctx.r9.u32 + 6, ctx.r3.u16);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bne 0x82b07650
	if (!cr0.eq) goto loc_82B07650;
	// lwz r9,-12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -12);
	// addi r5,r5,188
	ctx.r5.s64 = ctx.r5.s64 + 188;
	// lwz r8,-12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	// rlwimi r9,r8,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// stw r9,-12(r11)
	PPC_STORE_U32(ctx.r11.u32 + -12, ctx.r9.u32);
	// rotlwi r6,r9,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r7,-12(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -12);
	// rlwimi r7,r6,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// stw r7,-12(r11)
	PPC_STORE_U32(ctx.r11.u32 + -12, ctx.r7.u32);
	// lwz r3,-4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r9,-8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	// stw r9,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r9.u32);
	// lwz r8,-4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// rlwimi r8,r3,0,14,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0x3FFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFC0000);
	// stw r8,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r8.u32);
	// rotlwi r6,r8,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r7,-4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// rlwimi r7,r6,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// stw r7,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r7.u32);
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwimi r9,r8,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// rotlwi r6,r9,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwimi r7,r6,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r3,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// rlwimi r9,r8,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r6,r9,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// lwz r7,12(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// rlwimi r7,r6,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// lwz r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// stw r3,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r3.u32);
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// rlwimi r9,r8,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r6,r9,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// lwz r7,20(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// rlwimi r7,r6,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// stw r7,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r7.u32);
	// lwz r3,24(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// stw r3,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r3.u32);
	// lbz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 28);
	// stb r9,28(r11)
	PPC_STORE_U8(ctx.r11.u32 + 28, ctx.r9.u8);
	// lbz r8,29(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 29);
	// stb r8,29(r11)
	PPC_STORE_U8(ctx.r11.u32 + 29, ctx.r8.u8);
	// lbz r7,30(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 30);
	// stb r7,30(r11)
	PPC_STORE_U8(ctx.r11.u32 + 30, ctx.r7.u8);
	// lbz r6,31(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 31);
	// stb r6,31(r11)
	PPC_STORE_U8(ctx.r11.u32 + 31, ctx.r6.u8);
	// lbz r3,32(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 32);
	// stb r3,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r3.u8);
	// lbz r9,33(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 33);
	// stb r9,33(r11)
	PPC_STORE_U8(ctx.r11.u32 + 33, ctx.r9.u8);
	// lbz r8,34(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 34);
	// stb r8,34(r11)
	PPC_STORE_U8(ctx.r11.u32 + 34, ctx.r8.u8);
	// lbz r7,35(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 35);
	// stb r7,35(r11)
	PPC_STORE_U8(ctx.r11.u32 + 35, ctx.r7.u8);
	// lbz r6,36(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 36);
	// stb r6,36(r11)
	PPC_STORE_U8(ctx.r11.u32 + 36, ctx.r6.u8);
	// lwz r3,44(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// stw r9,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r9.u32);
	// lwz r8,44(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// rlwimi r8,r3,0,10,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0x3FFFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFC00000);
	// rotlwi r6,r8,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r8.u32);
	// lwz r7,44(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// rlwimi r7,r6,0,20,9
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFFFFFFFFC00FFF) | (ctx.r7.u64 & 0x3FF000);
	// stw r7,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r7.u32);
	// rotlwi r9,r7,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r3,44(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// rlwimi r3,r9,0,27,19
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFFFFFFFFFFF01F) | (ctx.r3.u64 & 0xFE0);
	// stw r3,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r3.u32);
	// rotlwi r6,r3,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// lwz r8,44(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// addi r10,r10,188
	ctx.r10.s64 = ctx.r10.s64 + 188;
	// rlwimi r8,r6,0,0,26
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFFFFE0) | (ctx.r8.u64 & 0xFFFFFFFF0000001F);
	// addi r7,r10,-140
	ctx.r7.s64 = ctx.r10.s64 + -140;
	// stw r8,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r8.u32);
	// addi r11,r11,188
	ctx.r11.s64 = ctx.r11.s64 + 188;
	// cmplw cr6,r7,r4
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, xer);
	// bne cr6,0x82b07630
	if (!cr6.eq) goto loc_82B07630;
loc_82B077F0:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B077F8"))) PPC_WEAK_FUNC(sub_82B077F8);
PPC_FUNC_IMPL(__imp__sub_82B077F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B07800;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// subf r28,r3,r4
	ctx.r28.s64 = ctx.r4.s64 - ctx.r3.s64;
	// addi r30,r3,24
	ctx.r30.s64 = ctx.r3.s64 + 24;
	// li r29,31
	ctx.r29.s64 = 31;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// rlwimi r9,r8,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r6,r9,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// lwz r7,8(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// rlwimi r7,r6,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// lhz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r3.u32 + 16);
	// lwz r3,12(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// lhz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 16);
	// rlwimi r5,r11,0,16,16
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x8000) | (ctx.r5.u64 & 0xFFFFFFFFFFFF7FFF);
	// clrlwi r8,r5,16
	ctx.r8.u64 = ctx.r5.u32 & 0xFFFF;
	// sth r5,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r5.u16);
	// lhz r9,16(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 16);
	// rlwimi r8,r9,0,17,17
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x4000) | (ctx.r8.u64 & 0xFFFFFFFFFFFFBFFF);
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// sth r7,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r7.u16);
	// lhz r5,16(r4)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r4.u32 + 16);
	// rlwimi r6,r5,0,18,18
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x2000) | (ctx.r6.u64 & 0xFFFFFFFFFFFFDFFF);
	// clrlwi r3,r6,16
	ctx.r3.u64 = ctx.r6.u32 & 0xFFFF;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// sth r3,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r3.u16);
	// lhz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 16);
	// rlwimi r11,r10,0,19,19
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x1000) | (ctx.r11.u64 & 0xFFFFFFFFFFFFEFFF);
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// sth r9,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r9.u16);
	// lhz r7,16(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 16);
	// rlwimi r8,r7,0,20,20
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x800) | (ctx.r8.u64 & 0xFFFFFFFFFFFFF7FF);
	// clrlwi r6,r8,16
	ctx.r6.u64 = ctx.r8.u32 & 0xFFFF;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// sth r6,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r6.u16);
	// lhz r3,16(r4)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r4.u32 + 16);
	// rlwimi r5,r3,0,21,21
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0x400) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFBFF);
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// sth r11,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r11.u16);
	// lhz r9,16(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 16);
	// rlwimi r10,r9,0,22,29
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FC) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFC03);
	// clrlwi r6,r10,16
	ctx.r6.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r10,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r10.u16);
	// lhz r7,16(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 16);
	// rlwimi r6,r7,0,30,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFFFC);
	// sth r6,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r6.u16);
	// lwz r4,20(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// stw r4,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r4.u32);
loc_82B078E8:
	// add r4,r28,r30
	ctx.r4.u64 = ctx.r28.u64 + ctx.r30.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b06df8
	ctx.lr = 0x82B078F4;
	sub_82B06DF8(ctx, base);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r30,r30,188
	ctx.r30.s64 = ctx.r30.s64 + 188;
	// bne 0x82b078e8
	if (!cr0.eq) goto loc_82B078E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B0790C"))) PPC_WEAK_FUNC(sub_82B0790C);
PPC_FUNC_IMPL(__imp__sub_82B0790C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B07910"))) PPC_WEAK_FUNC(sub_82B07910);
PPC_FUNC_IMPL(__imp__sub_82B07910) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82B07918;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// li r10,36
	ctx.r10.s64 = 36;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// divw r28,r11,r10
	ctx.r28.s32 = PPCDivide(ctx.r11.s32, ctx.r10.s32);
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// srawi r9,r28,1
	xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r28.s32 >> 1;
	// addze. r27,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r27.s64 = temp.s64;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// ble 0x82b07afc
	if (!cr0.gt) goto loc_82B07AFC;
	// rlwinm r11,r27,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r27,1
	ctx.r10.s64 = ctx.r27.s64 + 1;
	// add r9,r27,r11
	ctx.r9.u64 = ctx.r27.u64 + ctx.r11.u64;
	// rlwinm r26,r10,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r25,r11,r3
	ctx.r25.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_82B07954:
	// li r11,9
	ctx.r11.s64 = 9;
	// addi r25,r25,-36
	ctx.r25.s64 = ctx.r25.s64 + -36;
	// addi r10,r1,76
	ctx.r10.s64 = ctx.r1.s64 + 76;
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// addi r26,r26,-2
	ctx.r26.s64 = ctx.r26.s64 + -2;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// addi r11,r25,-4
	ctx.r11.s64 = ctx.r25.s64 + -4;
loc_82B07970:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82b07970
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B07970;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// cmpw cr6,r26,r28
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r28.s32, xer);
	// bge cr6,0x82b07a4c
	if (!cr6.lt) goto loc_82B07A4C;
loc_82B0798C:
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// mtctr r24
	ctr.u64 = ctx.r24.u64;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r4,r3,-36
	ctx.r4.s64 = ctx.r3.s64 + -36;
	// bctrl 
	ctx.lr = 0x82B079A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b079b8
	if (cr6.eq) goto loc_82B079B8;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_82B079B8:
	// rlwinm r10,r31,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 1;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// rlwinm r31,r8,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, xer);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// lhz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 8);
	// sth r5,8(r11)
	PPC_STORE_U16(ctx.r11.u32 + 8, ctx.r5.u16);
	// lwz r4,12(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r4,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r4.u32);
	// lwz r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwimi r3,r9,0,14,31
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r3.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r7,r3,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r3,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r3.u32);
	// lwz r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// rlwimi r8,r7,0,0,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// stw r8,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r8.u32);
	// lwz r6,20(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// stw r6,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r6.u32);
	// lwz r5,24(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// stw r5,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r5.u32);
	// lwz r4,28(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// stw r4,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r4.u32);
	// lwz r3,32(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// stw r3,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r3.u32);
	// blt cr6,0x82b0798c
	if (cr6.lt) goto loc_82B0798C;
loc_82B07A4C:
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, xer);
	// bne cr6,0x82b07adc
	if (!cr6.eq) goto loc_82B07ADC;
	// rlwinm r10,r28,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r28,r10
	ctx.r10.u64 = ctx.r28.u64 + ctx.r10.u64;
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r9,r10,-36
	ctx.r9.s64 = ctx.r10.s64 + -36;
	// addi r30,r28,-1
	ctx.r30.s64 = ctx.r28.s64 + -1;
	// lwz r8,-36(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -36);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r7,-32(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lhz r6,-28(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + -28);
	// sth r6,8(r11)
	PPC_STORE_U16(ctx.r11.u32 + 8, ctx.r6.u16);
	// lwz r5,-24(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24);
	// stw r5,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
	// lwz r4,-20(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwimi r4,r3,0,14,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0x3FFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r8,r4,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stw r4,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r4.u32);
	// lwz r9,-20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -20);
	// rlwimi r9,r8,0,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// lwz r7,-16(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -16);
	// stw r7,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r7.u32);
	// lwz r6,-12(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + -12);
	// stw r6,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r6.u32);
	// lwz r5,-8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	// stw r5,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r5.u32);
	// lwz r4,-4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// stw r4,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r4.u32);
loc_82B07ADC:
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b06a90
	ctx.lr = 0x82B07AF4;
	sub_82B06A90(ctx, base);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// bgt cr6,0x82b07954
	if (cr6.gt) goto loc_82B07954;
loc_82B07AFC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B07B04"))) PPC_WEAK_FUNC(sub_82B07B04);
PPC_FUNC_IMPL(__imp__sub_82B07B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B07B08"))) PPC_WEAK_FUNC(sub_82B07B08);
PPC_FUNC_IMPL(__imp__sub_82B07B08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82B07B10;
	__savegprlr_24(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82b07cd8
	if (cr6.eq) goto loc_82B07CD8;
	// addi r28,r3,36
	ctx.r28.s64 = ctx.r3.s64 + 36;
	// cmplw cr6,r28,r4
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r4.u32, xer);
	// beq cr6,0x82b07cd8
	if (cr6.eq) goto loc_82B07CD8;
	// lbz r24,80(r1)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r27,r28,-36
	ctx.r27.s64 = ctx.r28.s64 + -36;
loc_82B07B3C:
	// li r9,9
	ctx.r9.s64 = 9;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// addi r11,r28,-4
	ctx.r11.s64 = ctx.r28.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82B07B54:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82b07b54
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B07B54;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r26
	ctr.u64 = ctx.r26.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bctrl 
	ctx.lr = 0x82B07B70;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b07bdc
	if (cr6.eq) goto loc_82B07BDC;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r27,72
	ctx.r5.s64 = ctx.r27.s64 + 72;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b06bf0
	ctx.lr = 0x82B07B90;
	sub_82B06BF0(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lhz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 104);
	// lwz r8,108(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r6,116(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
	// sth r9,8(r29)
	PPC_STORE_U16(ctx.r29.u32 + 8, ctx.r9.u16);
	// stw r8,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r8.u32);
	// stw r7,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r7.u32);
	// stw r6,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r6.u32);
	// stw r5,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r5.u32);
	// stw r4,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r4.u32);
	// stw r3,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r3.u32);
	// b 0x82b07cc8
	goto loc_82B07CC8;
loc_82B07BDC:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mtctr r26
	ctr.u64 = ctx.r26.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x82B07BF0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b07c80
	if (cr6.eq) goto loc_82B07C80;
loc_82B07BFC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mtctr r26
	ctr.u64 = ctx.r26.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// lhz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// sth r9,8(r30)
	PPC_STORE_U16(ctx.r30.u32 + 8, ctx.r9.u16);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r8,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r8.u32);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// rlwimi r7,r6,0,14,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x3FFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r4,r7,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r7.u32);
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwimi r5,r4,0,0,13
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0xFFFC0000) | (ctx.r5.u64 & 0xFFFFFFFF0003FFFF);
	// stw r5,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r5.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r10,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r10.u32);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r9,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r9.u32);
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r8,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r8.u32);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// addi r31,r31,-36
	ctx.r31.s64 = ctx.r31.s64 + -36;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82B07C74;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82b07bfc
	if (!cr6.eq) goto loc_82B07BFC;
loc_82B07C80:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lhz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 104);
	// lwz r8,108(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r6,116(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// sth r9,8(r30)
	PPC_STORE_U16(ctx.r30.u32 + 8, ctx.r9.u16);
	// stw r8,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r8.u32);
	// stw r7,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r7.u32);
	// stw r6,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r6.u32);
	// stw r5,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r5.u32);
	// stw r4,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r4.u32);
	// stw r3,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r3.u32);
loc_82B07CC8:
	// addi r28,r28,36
	ctx.r28.s64 = ctx.r28.s64 + 36;
	// addi r27,r27,36
	ctx.r27.s64 = ctx.r27.s64 + 36;
	// cmplw cr6,r28,r25
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r25.u32, xer);
	// bne cr6,0x82b07b3c
	if (!cr6.eq) goto loc_82B07B3C;
loc_82B07CD8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B07CE0"))) PPC_WEAK_FUNC(sub_82B07CE0);
PPC_FUNC_IMPL(__imp__sub_82B07CE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B07CE8;
	__savegprlr_28(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
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
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82B07D0C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b07d40
	if (cr6.eq) goto loc_82B07D40;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,188
	ctx.r5.s64 = 188;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x82B07D28;
	sub_831CE980(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b06df8
	ctx.lr = 0x82B07D34;
	sub_82B06DF8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b06df8
	ctx.lr = 0x82B07D40;
	sub_82B06DF8(ctx, base);
loc_82B07D40:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x82B07D50;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b07d84
	if (cr6.eq) goto loc_82B07D84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,188
	ctx.r5.s64 = 188;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x831ce980
	ctx.lr = 0x82B07D6C;
	sub_831CE980(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b06df8
	ctx.lr = 0x82B07D78;
	sub_82B06DF8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b06df8
	ctx.lr = 0x82B07D84;
	sub_82B06DF8(ctx, base);
loc_82B07D84:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82B07D94;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b07dc8
	if (cr6.eq) goto loc_82B07DC8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,188
	ctx.r5.s64 = 188;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x82B07DB0;
	sub_831CE980(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b06df8
	ctx.lr = 0x82B07DBC;
	sub_82B06DF8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b06df8
	ctx.lr = 0x82B07DC8;
	sub_82B06DF8(ctx, base);
loc_82B07DC8:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B07DD0"))) PPC_WEAK_FUNC(sub_82B07DD0);
PPC_FUNC_IMPL(__imp__sub_82B07DD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82B07DD8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r31,r11,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// cmpw cr6,r31,r5
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r5.s32, xer);
	// bge cr6,0x82b07e54
	if (!cr6.lt) goto loc_82B07E54;
loc_82B07E04:
	// mulli r11,r31,188
	ctx.r11.s64 = ctx.r31.s64 * 188;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r3,-188
	ctx.r4.s64 = ctx.r3.s64 + -188;
	// bctrl 
	ctx.lr = 0x82B07E18;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b07e28
	if (cr6.eq) goto loc_82B07E28;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_82B07E28:
	// mulli r10,r31,188
	ctx.r10.s64 = ctx.r31.s64 * 188;
	// mulli r11,r29,188
	ctx.r11.s64 = ctx.r29.s64 * 188;
	// add r4,r10,r30
	ctx.r4.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82b06df8
	ctx.lr = 0x82B07E3C;
	sub_82B06DF8(ctx, base);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// rlwinm r31,r11,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, xer);
	// blt cr6,0x82b07e04
	if (cr6.lt) goto loc_82B07E04;
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, xer);
loc_82B07E54:
	// bne cr6,0x82b07e74
	if (!cr6.eq) goto loc_82B07E74;
	// mulli r11,r28,188
	ctx.r11.s64 = ctx.r28.s64 * 188;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mulli r11,r29,188
	ctx.r11.s64 = ctx.r29.s64 * 188;
	// addi r4,r10,-188
	ctx.r4.s64 = ctx.r10.s64 + -188;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82b06df8
	ctx.lr = 0x82B07E70;
	sub_82B06DF8(ctx, base);
	// addi r29,r28,-1
	ctx.r29.s64 = ctx.r28.s64 + -1;
loc_82B07E74:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b07210
	ctx.lr = 0x82B07E8C;
	sub_82B07210(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B07E94"))) PPC_WEAK_FUNC(sub_82B07E94);
PPC_FUNC_IMPL(__imp__sub_82B07E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B07E98"))) PPC_WEAK_FUNC(sub_82B07E98);
PPC_FUNC_IMPL(__imp__sub_82B07E98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B07EA0;
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
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82B07EC4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b07edc
	if (cr6.eq) goto loc_82B07EDC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b06f98
	ctx.lr = 0x82B07EDC;
	sub_82B06F98(ctx, base);
loc_82B07EDC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x82B07EEC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b07f04
	if (cr6.eq) goto loc_82B07F04;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b06f98
	ctx.lr = 0x82B07F04;
	sub_82B06F98(ctx, base);
loc_82B07F04:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82B07F14;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b07f2c
	if (cr6.eq) goto loc_82B07F2C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b06f98
	ctx.lr = 0x82B07F2C;
	sub_82B06F98(ctx, base);
loc_82B07F2C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B07F34"))) PPC_WEAK_FUNC(sub_82B07F34);
PPC_FUNC_IMPL(__imp__sub_82B07F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B07F38"))) PPC_WEAK_FUNC(sub_82B07F38);
PPC_FUNC_IMPL(__imp__sub_82B07F38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82B07F40;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// srawi r10,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// cmpw cr6,r5,r4
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, xer);
	// addze r26,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r26.s64 = temp.s64;
	// bge cr6,0x82b080ac
	if (!cr6.lt) goto loc_82B080AC;
loc_82B07F6C:
	// mulli r11,r26,5852
	ctx.r11.s64 = ctx.r26.s64 * 5852;
	// mtctr r24
	ctr.u64 = ctx.r24.u64;
	// add r31,r11,r27
	ctx.r31.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82B07F84;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b080ac
	if (cr6.eq) goto loc_82B080AC;
	// mulli r11,r30,5852
	ctx.r11.s64 = ctx.r30.s64 * 5852;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r29,r31,24
	ctx.r29.s64 = ctx.r31.s64 + 24;
	// addi r28,r11,24
	ctx.r28.s64 = ctx.r11.s64 + 24;
	// li r30,31
	ctx.r30.s64 = 31;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwimi r8,r7,0,14,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r5,r8,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwimi r6,r5,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// lhz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 16);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r3,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
	// lhz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// rlwimi r10,r4,0,17,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x7FFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF8000);
	// clrlwi r7,r10,16
	ctx.r7.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r10,16(r11)
	PPC_STORE_U16(ctx.r11.u32 + 16, ctx.r10.u16);
	// lhz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// rlwimi r7,r8,0,17,17
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x4000) | (ctx.r7.u64 & 0xFFFFFFFFFFFFBFFF);
	// clrlwi r6,r7,16
	ctx.r6.u64 = ctx.r7.u32 & 0xFFFF;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// sth r6,16(r11)
	PPC_STORE_U16(ctx.r11.u32 + 16, ctx.r6.u16);
	// lhz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// rlwimi r5,r4,0,18,18
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x2000) | (ctx.r5.u64 & 0xFFFFFFFFFFFFDFFF);
	// clrlwi r3,r5,16
	ctx.r3.u64 = ctx.r5.u32 & 0xFFFF;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// sth r3,16(r11)
	PPC_STORE_U16(ctx.r11.u32 + 16, ctx.r3.u16);
	// lhz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// rlwimi r10,r9,0,19,19
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x1000) | (ctx.r10.u64 & 0xFFFFFFFFFFFFEFFF);
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// sth r8,16(r11)
	PPC_STORE_U16(ctx.r11.u32 + 16, ctx.r8.u16);
	// lhz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// rlwimi r7,r6,0,20,20
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x800) | (ctx.r7.u64 & 0xFFFFFFFFFFFFF7FF);
	// clrlwi r5,r7,16
	ctx.r5.u64 = ctx.r7.u32 & 0xFFFF;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// sth r5,16(r11)
	PPC_STORE_U16(ctx.r11.u32 + 16, ctx.r5.u16);
	// lhz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// rlwimi r4,r3,0,21,21
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r3.u32, 0) & 0x400) | (ctx.r4.u64 & 0xFFFFFFFFFFFFFBFF);
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// sth r10,16(r11)
	PPC_STORE_U16(ctx.r11.u32 + 16, ctx.r10.u16);
	// lhz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// rlwimi r9,r8,0,22,29
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3FC) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFC03);
	// clrlwi r5,r9,16
	ctx.r5.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r9,16(r11)
	PPC_STORE_U16(ctx.r11.u32 + 16, ctx.r9.u16);
	// lhz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// rlwimi r6,r5,0,16,29
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xFFFC) | (ctx.r6.u64 & 0xFFFFFFFFFFFF0003);
	// sth r6,16(r11)
	PPC_STORE_U16(ctx.r11.u32 + 16, ctx.r6.u16);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r3,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r3.u32);
loc_82B08078:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b06df8
	ctx.lr = 0x82B08084;
	sub_82B06DF8(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r29,r29,188
	ctx.r29.s64 = ctx.r29.s64 + 188;
	// addi r28,r28,188
	ctx.r28.s64 = ctx.r28.s64 + 188;
	// bne 0x82b08078
	if (!cr0.eq) goto loc_82B08078;
	// addi r11,r26,-1
	ctx.r11.s64 = ctx.r26.s64 + -1;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// srawi r10,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// cmpw cr6,r23,r26
	cr6.compare<int32_t>(ctx.r23.s32, ctx.r26.s32, xer);
	// addze r26,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r26.s64 = temp.s64;
	// blt cr6,0x82b07f6c
	if (cr6.lt) goto loc_82B07F6C;
loc_82B080AC:
	// mulli r11,r30,5852
	ctx.r11.s64 = ctx.r30.s64 * 5852;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82b077f8
	ctx.lr = 0x82B080BC;
	sub_82B077F8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B080C4"))) PPC_WEAK_FUNC(sub_82B080C4);
PPC_FUNC_IMPL(__imp__sub_82B080C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B080C8"))) PPC_WEAK_FUNC(sub_82B080C8);
PPC_FUNC_IMPL(__imp__sub_82B080C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82B080D0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82b081f4
	if (cr6.eq) goto loc_82B081F4;
	// addi r30,r4,16
	ctx.r30.s64 = ctx.r4.s64 + 16;
loc_82B080E8:
	// addi r30,r30,-5852
	ctx.r30.s64 = ctx.r30.s64 + -5852;
	// li r28,31
	ctx.r28.s64 = 31;
	// addi r11,r30,-16
	ctx.r11.s64 = ctx.r30.s64 + -16;
	// lwz r10,-16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// stwu r10,-5852(r31)
	ea = -5852 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r31.u32 = ea;
	// lwz r9,-12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// subf r27,r31,r11
	ctx.r27.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r29,r31,24
	ctx.r29.s64 = ctx.r31.s64 + 24;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r8,-8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// rlwimi r8,r7,0,14,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r6,r8,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// lwz r5,-8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// rlwimi r6,r5,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// lhz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// lwz r3,-4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// rlwimi r4,r11,0,16,16
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x8000) | (ctx.r4.u64 & 0xFFFFFFFFFFFF7FFF);
	// clrlwi r8,r4,16
	ctx.r8.u64 = ctx.r4.u32 & 0xFFFF;
	// sth r4,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r4.u16);
	// lhz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// rlwimi r8,r9,0,17,17
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x4000) | (ctx.r8.u64 & 0xFFFFFFFFFFFFBFFF);
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// sth r7,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r7.u16);
	// lhz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// rlwimi r6,r5,0,18,18
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x2000) | (ctx.r6.u64 & 0xFFFFFFFFFFFFDFFF);
	// clrlwi r4,r6,16
	ctx.r4.u64 = ctx.r6.u32 & 0xFFFF;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// sth r4,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r4.u16);
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// rlwimi r3,r11,0,19,19
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x1000) | (ctx.r3.u64 & 0xFFFFFFFFFFFFEFFF);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// sth r10,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r10.u16);
	// lhz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// rlwimi r9,r8,0,20,20
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x800) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF7FF);
	// clrlwi r7,r9,16
	ctx.r7.u64 = ctx.r9.u32 & 0xFFFF;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// sth r7,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r7.u16);
	// lhz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// rlwimi r6,r5,0,21,21
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x400) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFBFF);
	// clrlwi r4,r6,16
	ctx.r4.u64 = ctx.r6.u32 & 0xFFFF;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// sth r4,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r4.u16);
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// rlwimi r3,r11,0,22,29
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FC) | (ctx.r3.u64 & 0xFFFFFFFFFFFFFC03);
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// sth r3,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r3.u16);
	// lhz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// rlwimi r8,r9,0,30,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFFC);
	// sth r8,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r8.u16);
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r6,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r6.u32);
loc_82B081D0:
	// add r4,r27,r29
	ctx.r4.u64 = ctx.r27.u64 + ctx.r29.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b06df8
	ctx.lr = 0x82B081DC;
	sub_82B06DF8(ctx, base);
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r29,r29,188
	ctx.r29.s64 = ctx.r29.s64 + 188;
	// bne 0x82b081d0
	if (!cr0.eq) goto loc_82B081D0;
	// addi r11,r30,-16
	ctx.r11.s64 = ctx.r30.s64 + -16;
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x82b080e8
	if (!cr6.eq) goto loc_82B080E8;
loc_82B081F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B08200"))) PPC_WEAK_FUNC(sub_82B08200);
PPC_FUNC_IMPL(__imp__sub_82B08200) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r8,9
	ctx.r8.s64 = 9;
	// addi r11,r4,-36
	ctx.r11.s64 = ctx.r4.s64 + -36;
	// addi r9,r1,76
	ctx.r9.s64 = ctx.r1.s64 + 76;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_82B08224:
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x82b08224
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B08224;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r10,r3,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r3.s64;
	// li r8,36
	ctx.r8.s64 = 36;
	// addi r5,r10,-36
	ctx.r5.s64 = ctx.r10.s64 + -36;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// divw r5,r5,r8
	ctx.r5.s32 = PPCDivide(ctx.r5.s32, ctx.r8.s32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lhz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// sth r10,8(r11)
	PPC_STORE_U16(ctx.r11.u32 + 8, ctx.r10.u16);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwimi r8,r10,0,14,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFC0000);
	// stw r8,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r8.u32);
	// rotlwi r8,r8,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwimi r9,r8,0,0,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFC0000) | (ctx.r9.u64 & 0xFFFFFFFF0003FFFF);
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// stw r9,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
	// lwz r8,28(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// stw r8,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r8.u32);
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// bl 0x82b07068
	ctx.lr = 0x82B082AC;
	sub_82B07068(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B082BC"))) PPC_WEAK_FUNC(sub_82B082BC);
PPC_FUNC_IMPL(__imp__sub_82B082BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B082C0"))) PPC_WEAK_FUNC(sub_82B082C0);
PPC_FUNC_IMPL(__imp__sub_82B082C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82B082C8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82b083f0
	if (cr6.eq) goto loc_82B083F0;
	// addi r30,r3,16
	ctx.r30.s64 = ctx.r3.s64 + 16;
loc_82B082E0:
	// lwz r10,-16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// addi r11,r30,-16
	ctx.r11.s64 = ctx.r30.s64 + -16;
	// addi r29,r31,24
	ctx.r29.s64 = ctx.r31.s64 + 24;
	// subf r27,r31,r11
	ctx.r27.s64 = ctx.r11.s64 - ctx.r31.s64;
	// li r28,31
	ctx.r28.s64 = 31;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r9,-12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r8,-8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// rlwimi r8,r7,0,14,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r5,r8,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// lwz r6,-8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// rlwimi r6,r5,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// lhz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// lwz r3,-4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// rlwimi r4,r11,0,16,16
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x8000) | (ctx.r4.u64 & 0xFFFFFFFFFFFF7FFF);
	// clrlwi r8,r4,16
	ctx.r8.u64 = ctx.r4.u32 & 0xFFFF;
	// sth r4,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r4.u16);
	// lhz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// rlwimi r8,r9,0,17,17
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x4000) | (ctx.r8.u64 & 0xFFFFFFFFFFFFBFFF);
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// sth r7,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r7.u16);
	// lhz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// rlwimi r6,r5,0,18,18
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x2000) | (ctx.r6.u64 & 0xFFFFFFFFFFFFDFFF);
	// clrlwi r4,r6,16
	ctx.r4.u64 = ctx.r6.u32 & 0xFFFF;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// sth r4,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r4.u16);
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// rlwimi r3,r11,0,19,19
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x1000) | (ctx.r3.u64 & 0xFFFFFFFFFFFFEFFF);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// sth r10,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r10.u16);
	// lhz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// rlwimi r9,r8,0,20,20
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x800) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF7FF);
	// clrlwi r7,r9,16
	ctx.r7.u64 = ctx.r9.u32 & 0xFFFF;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// sth r7,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r7.u16);
	// lhz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// rlwimi r6,r5,0,21,21
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x400) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFBFF);
	// clrlwi r4,r6,16
	ctx.r4.u64 = ctx.r6.u32 & 0xFFFF;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// sth r4,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r4.u16);
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// rlwimi r3,r11,0,22,29
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FC) | (ctx.r3.u64 & 0xFFFFFFFFFFFFFC03);
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// sth r3,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r3.u16);
	// lhz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// rlwimi r8,r9,0,30,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFFC);
	// sth r8,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r8.u16);
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r6,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r6.u32);
loc_82B083C4:
	// add r4,r27,r29
	ctx.r4.u64 = ctx.r27.u64 + ctx.r29.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b06df8
	ctx.lr = 0x82B083D0;
	sub_82B06DF8(ctx, base);
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r29,r29,188
	ctx.r29.s64 = ctx.r29.s64 + 188;
	// bne 0x82b083c4
	if (!cr0.eq) goto loc_82B083C4;
	// addi r30,r30,5852
	ctx.r30.s64 = ctx.r30.s64 + 5852;
	// addi r31,r31,5852
	ctx.r31.s64 = ctx.r31.s64 + 5852;
	// addi r11,r30,-16
	ctx.r11.s64 = ctx.r30.s64 + -16;
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x82b082e0
	if (!cr6.eq) goto loc_82B082E0;
loc_82B083F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B083FC"))) PPC_WEAK_FUNC(sub_82B083FC);
PPC_FUNC_IMPL(__imp__sub_82B083FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B08400"))) PPC_WEAK_FUNC(sub_82B08400);
PPC_FUNC_IMPL(__imp__sub_82B08400) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82B08408;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r3,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r3.s64;
	// li r10,188
	ctx.r10.s64 = 188;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// divw r11,r11,r10
	ctx.r11.s32 = PPCDivide(ctx.r11.s32, ctx.r10.s32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,40
	cr6.compare<int32_t>(ctx.r11.s32, 40, xer);
	// ble cr6,0x82b08498
	if (!cr6.gt) goto loc_82B08498;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srawi r10,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// mulli r29,r11,188
	ctx.r29.s64 = ctx.r11.s64 * 188;
	// mulli r26,r11,376
	ctx.r26.s64 = ctx.r11.s64 * 376;
	// add r27,r29,r3
	ctx.r27.u64 = ctx.r29.u64 + ctx.r3.u64;
	// add r5,r26,r3
	ctx.r5.u64 = ctx.r26.u64 + ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82b07ce0
	ctx.lr = 0x82B08450;
	sub_82B07CE0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// add r5,r29,r31
	ctx.r5.u64 = ctx.r29.u64 + ctx.r31.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// subf r3,r29,r31
	ctx.r3.s64 = ctx.r31.s64 - ctx.r29.s64;
	// bl 0x82b07ce0
	ctx.lr = 0x82B08464;
	sub_82B07CE0(ctx, base);
	// subf r29,r29,r28
	ctx.r29.s64 = ctx.r28.s64 - ctx.r29.s64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// subf r3,r26,r28
	ctx.r3.s64 = ctx.r28.s64 - ctx.r26.s64;
	// bl 0x82b07ce0
	ctx.lr = 0x82B0847C;
	sub_82B07CE0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82b07ce0
	ctx.lr = 0x82B08490;
	sub_82B07CE0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82B08498:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82b07ce0
	ctx.lr = 0x82B084A4;
	sub_82B07CE0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B084AC"))) PPC_WEAK_FUNC(sub_82B084AC);
PPC_FUNC_IMPL(__imp__sub_82B084AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B084B0"))) PPC_WEAK_FUNC(sub_82B084B0);
PPC_FUNC_IMPL(__imp__sub_82B084B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82B084B8;
	__savegprlr_24(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// li r10,188
	ctx.r10.s64 = 188;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// divw r28,r11,r10
	ctx.r28.s32 = PPCDivide(ctx.r11.s32, ctx.r10.s32);
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// srawi r9,r28,1
	xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r28.s32 >> 1;
	// addze. r27,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r27.s64 = temp.s64;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// ble 0x82b085a8
	if (!cr0.gt) goto loc_82B085A8;
	// addi r10,r27,1
	ctx.r10.s64 = ctx.r27.s64 + 1;
	// mulli r11,r27,188
	ctx.r11.s64 = ctx.r27.s64 * 188;
	// rlwinm r26,r10,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r24,r11,r3
	ctx.r24.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_82B084EC:
	// addi r24,r24,-188
	ctx.r24.s64 = ctx.r24.s64 + -188;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,188
	ctx.r5.s64 = 188;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// addi r26,r26,-2
	ctx.r26.s64 = ctx.r26.s64 + -2;
	// bl 0x831ce980
	ctx.lr = 0x82B08508;
	sub_831CE980(ctx, base);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// cmpw cr6,r26,r28
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r28.s32, xer);
	// bge cr6,0x82b08564
	if (!cr6.lt) goto loc_82B08564;
loc_82B08518:
	// mulli r11,r31,188
	ctx.r11.s64 = ctx.r31.s64 * 188;
	// mtctr r25
	ctr.u64 = ctx.r25.u64;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r3,-188
	ctx.r4.s64 = ctx.r3.s64 + -188;
	// bctrl 
	ctx.lr = 0x82B0852C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b0853c
	if (cr6.eq) goto loc_82B0853C;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_82B0853C:
	// mulli r10,r31,188
	ctx.r10.s64 = ctx.r31.s64 * 188;
	// mulli r11,r29,188
	ctx.r11.s64 = ctx.r29.s64 * 188;
	// add r4,r10,r30
	ctx.r4.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82b06df8
	ctx.lr = 0x82B08550;
	sub_82B06DF8(ctx, base);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// rlwinm r31,r11,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, xer);
	// blt cr6,0x82b08518
	if (cr6.lt) goto loc_82B08518;
loc_82B08564:
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, xer);
	// bne cr6,0x82b08588
	if (!cr6.eq) goto loc_82B08588;
	// mulli r11,r28,188
	ctx.r11.s64 = ctx.r28.s64 * 188;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mulli r11,r29,188
	ctx.r11.s64 = ctx.r29.s64 * 188;
	// addi r4,r10,-188
	ctx.r4.s64 = ctx.r10.s64 + -188;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82b06df8
	ctx.lr = 0x82B08584;
	sub_82B06DF8(ctx, base);
	// addi r29,r28,-1
	ctx.r29.s64 = ctx.r28.s64 + -1;
loc_82B08588:
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b07210
	ctx.lr = 0x82B085A0;
	sub_82B07210(ctx, base);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// bgt cr6,0x82b084ec
	if (cr6.gt) goto loc_82B084EC;
loc_82B085A8:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B085B0"))) PPC_WEAK_FUNC(sub_82B085B0);
PPC_FUNC_IMPL(__imp__sub_82B085B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82B085B8;
	__savegprlr_24(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82b0869c
	if (cr6.eq) goto loc_82B0869C;
	// addi r30,r3,188
	ctx.r30.s64 = ctx.r3.s64 + 188;
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, xer);
	// beq cr6,0x82b0869c
	if (cr6.eq) goto loc_82B0869C;
	// lbz r24,80(r1)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r28,r30,-188
	ctx.r28.s64 = ctx.r30.s64 + -188;
loc_82B085E4:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,188
	ctx.r5.s64 = 188;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// bl 0x831ce980
	ctx.lr = 0x82B085F8;
	sub_831CE980(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x82B08608;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b08630
	if (cr6.eq) goto loc_82B08630;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r28,376
	ctx.r5.s64 = ctx.r28.s64 + 376;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82b07448
	ctx.lr = 0x82B08628;
	sub_82B07448(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// b 0x82b08684
	goto loc_82B08684;
loc_82B08630:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x82B08644;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b08680
	if (cr6.eq) goto loc_82B08680;
loc_82B08650:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b06df8
	ctx.lr = 0x82B0865C;
	sub_82B06DF8(ctx, base);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// addi r31,r31,-188
	ctx.r31.s64 = ctx.r31.s64 + -188;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82B08674;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b08650
	if (!cr6.eq) goto loc_82B08650;
loc_82B08680:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82B08684:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82b06df8
	ctx.lr = 0x82B0868C;
	sub_82B06DF8(ctx, base);
	// addi r30,r30,188
	ctx.r30.s64 = ctx.r30.s64 + 188;
	// addi r28,r28,188
	ctx.r28.s64 = ctx.r28.s64 + 188;
	// cmplw cr6,r30,r25
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, xer);
	// bne cr6,0x82b085e4
	if (!cr6.eq) goto loc_82B085E4;
loc_82B0869C:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B086A4"))) PPC_WEAK_FUNC(sub_82B086A4);
PPC_FUNC_IMPL(__imp__sub_82B086A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B086A8"))) PPC_WEAK_FUNC(sub_82B086A8);
PPC_FUNC_IMPL(__imp__sub_82B086A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82B086B0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r3,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r3.s64;
	// li r10,36
	ctx.r10.s64 = 36;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// divw r11,r11,r10
	ctx.r11.s32 = PPCDivide(ctx.r11.s32, ctx.r10.s32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,40
	cr6.compare<int32_t>(ctx.r11.s32, 40, xer);
	// ble cr6,0x82b08750
	if (!cr6.gt) goto loc_82B08750;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srawi r10,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r31,r8,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r26,r7,3,0,28
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r27,r31,r3
	ctx.r27.u64 = ctx.r31.u64 + ctx.r3.u64;
	// add r5,r26,r3
	ctx.r5.u64 = ctx.r26.u64 + ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82b07e98
	ctx.lr = 0x82B08708;
	sub_82B07E98(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// add r5,r31,r30
	ctx.r5.u64 = ctx.r31.u64 + ctx.r30.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// subf r3,r31,r30
	ctx.r3.s64 = ctx.r30.s64 - ctx.r31.s64;
	// bl 0x82b07e98
	ctx.lr = 0x82B0871C;
	sub_82B07E98(ctx, base);
	// subf r31,r31,r28
	ctx.r31.s64 = ctx.r28.s64 - ctx.r31.s64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// subf r3,r26,r28
	ctx.r3.s64 = ctx.r28.s64 - ctx.r26.s64;
	// bl 0x82b07e98
	ctx.lr = 0x82B08734;
	sub_82B07E98(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82b07e98
	ctx.lr = 0x82B08748;
	sub_82B07E98(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82B08750:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82b07e98
	ctx.lr = 0x82B0875C;
	sub_82B07E98(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B08764"))) PPC_WEAK_FUNC(sub_82B08764);
PPC_FUNC_IMPL(__imp__sub_82B08764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B08768"))) PPC_WEAK_FUNC(sub_82B08768);
PPC_FUNC_IMPL(__imp__sub_82B08768) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B08770;
	__savegprlr_28(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-5984(r1)
	ea = -5984 + ctx.r1.u32;
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
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82B08798;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b087cc
	if (cr6.eq) goto loc_82B087CC;
	// li r5,5852
	ctx.r5.s64 = 5852;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831ce980
	ctx.lr = 0x82B087B4;
	sub_831CE980(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b077f8
	ctx.lr = 0x82B087C0;
	sub_82B077F8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b077f8
	ctx.lr = 0x82B087CC;
	sub_82B077F8(ctx, base);
loc_82B087CC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x82B087DC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b08810
	if (cr6.eq) goto loc_82B08810;
	// li r5,5852
	ctx.r5.s64 = 5852;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831ce980
	ctx.lr = 0x82B087F8;
	sub_831CE980(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b077f8
	ctx.lr = 0x82B08804;
	sub_82B077F8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b077f8
	ctx.lr = 0x82B08810;
	sub_82B077F8(ctx, base);
loc_82B08810:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r29
	ctr.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82B08820;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b08854
	if (cr6.eq) goto loc_82B08854;
	// li r5,5852
	ctx.r5.s64 = 5852;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831ce980
	ctx.lr = 0x82B0883C;
	sub_831CE980(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b077f8
	ctx.lr = 0x82B08848;
	sub_82B077F8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b077f8
	ctx.lr = 0x82B08854;
	sub_82B077F8(ctx, base);
loc_82B08854:
	// addi r1,r1,5984
	ctx.r1.s64 = ctx.r1.s64 + 5984;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B0885C"))) PPC_WEAK_FUNC(sub_82B0885C);
PPC_FUNC_IMPL(__imp__sub_82B0885C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B08860"))) PPC_WEAK_FUNC(sub_82B08860);
PPC_FUNC_IMPL(__imp__sub_82B08860) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82B08868;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r31,r11,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// cmpw cr6,r31,r5
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r5.s32, xer);
	// bge cr6,0x82b088e4
	if (!cr6.lt) goto loc_82B088E4;
loc_82B08894:
	// mulli r11,r31,5852
	ctx.r11.s64 = ctx.r31.s64 * 5852;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r3,-5852
	ctx.r4.s64 = ctx.r3.s64 + -5852;
	// bctrl 
	ctx.lr = 0x82B088A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b088b8
	if (cr6.eq) goto loc_82B088B8;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_82B088B8:
	// mulli r10,r31,5852
	ctx.r10.s64 = ctx.r31.s64 * 5852;
	// mulli r11,r29,5852
	ctx.r11.s64 = ctx.r29.s64 * 5852;
	// add r4,r10,r30
	ctx.r4.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82b077f8
	ctx.lr = 0x82B088CC;
	sub_82B077F8(ctx, base);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// rlwinm r31,r11,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, xer);
	// blt cr6,0x82b08894
	if (cr6.lt) goto loc_82B08894;
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, xer);
loc_82B088E4:
	// bne cr6,0x82b08904
	if (!cr6.eq) goto loc_82B08904;
	// mulli r11,r28,5852
	ctx.r11.s64 = ctx.r28.s64 * 5852;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mulli r11,r29,5852
	ctx.r11.s64 = ctx.r29.s64 * 5852;
	// addi r4,r10,-5852
	ctx.r4.s64 = ctx.r10.s64 + -5852;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82b077f8
	ctx.lr = 0x82B08900;
	sub_82B077F8(ctx, base);
	// addi r29,r28,-1
	ctx.r29.s64 = ctx.r28.s64 + -1;
loc_82B08904:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b07f38
	ctx.lr = 0x82B0891C;
	sub_82B07F38(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B08924"))) PPC_WEAK_FUNC(sub_82B08924);
PPC_FUNC_IMPL(__imp__sub_82B08924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B08928"))) PPC_WEAK_FUNC(sub_82B08928);
PPC_FUNC_IMPL(__imp__sub_82B08928) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B08930;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82b08970
	if (cr6.eq) goto loc_82B08970;
	// subf r30,r5,r3
	ctx.r30.s64 = ctx.r3.s64 - ctx.r5.s64;
loc_82B08948:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82b08960
	if (cr6.eq) goto loc_82B08960;
	// li r5,5852
	ctx.r5.s64 = 5852;
	// add r4,r30,r31
	ctx.r4.u64 = ctx.r30.u64 + ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x82B08960;
	sub_831CE980(ctx, base);
loc_82B08960:
	// addi r31,r31,5852
	ctx.r31.s64 = ctx.r31.s64 + 5852;
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// bne cr6,0x82b08948
	if (!cr6.eq) goto loc_82B08948;
loc_82B08970:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B0897C"))) PPC_WEAK_FUNC(sub_82B0897C);
PPC_FUNC_IMPL(__imp__sub_82B0897C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B08980"))) PPC_WEAK_FUNC(sub_82B08980);
PPC_FUNC_IMPL(__imp__sub_82B08980) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B08988;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82b089c8
	if (cr6.eq) goto loc_82B089C8;
	// subf r30,r5,r3
	ctx.r30.s64 = ctx.r3.s64 - ctx.r5.s64;
loc_82B089A0:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82b089b8
	if (cr6.eq) goto loc_82B089B8;
	// add r4,r30,r31
	ctx.r4.u64 = ctx.r30.u64 + ctx.r31.u64;
	// li r5,188
	ctx.r5.s64 = 188;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x82B089B8;
	sub_831CE980(ctx, base);
loc_82B089B8:
	// addi r31,r31,188
	ctx.r31.s64 = ctx.r31.s64 + 188;
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// bne cr6,0x82b089a0
	if (!cr6.eq) goto loc_82B089A0;
loc_82B089C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B089D4"))) PPC_WEAK_FUNC(sub_82B089D4);
PPC_FUNC_IMPL(__imp__sub_82B089D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B089D8"))) PPC_WEAK_FUNC(sub_82B089D8);
PPC_FUNC_IMPL(__imp__sub_82B089D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82B089E0;
	__savegprlr_22(ctx, base);
	// stwu r1,-1520(r1)
	ea = -1520 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r4,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r4.s64;
	// li r10,188
	ctx.r10.s64 = 188;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// divw r9,r11,r10
	ctx.r9.s32 = PPCDivide(ctx.r11.s32, ctx.r10.s32);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// srawi r8,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mulli r11,r7,188
	ctx.r11.s64 = ctx.r7.s64 * 188;
	// add r31,r11,r4
	ctx.r31.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r5,r5,-188
	ctx.r5.s64 = ctx.r5.s64 + -188;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x82b08400
	ctx.lr = 0x82B08A20;
	sub_82B08400(ctx, base);
	// addi r26,r31,188
	ctx.r26.s64 = ctx.r31.s64 + 188;
	// cmplw cr6,r25,r31
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r31.u32, xer);
	// bge cr6,0x82b08a74
	if (!cr6.lt) goto loc_82B08A74;
loc_82B08A2C:
	// addi r30,r31,-188
	ctx.r30.s64 = ctx.r31.s64 + -188;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82B08A40;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b08a74
	if (!cr6.eq) goto loc_82B08A74;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82B08A5C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b08a74
	if (!cr6.eq) goto loc_82B08A74;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplw cr6,r25,r30
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r30.u32, xer);
	// blt cr6,0x82b08a2c
	if (cr6.lt) goto loc_82B08A2C;
loc_82B08A74:
	// cmplw cr6,r26,r24
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r24.u32, xer);
	// bge cr6,0x82b08ac0
	if (!cr6.lt) goto loc_82B08AC0;
loc_82B08A7C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bctrl 
	ctx.lr = 0x82B08A8C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b08ac0
	if (!cr6.eq) goto loc_82B08AC0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82B08AA8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b08ac0
	if (!cr6.eq) goto loc_82B08AC0;
	// addi r26,r26,188
	ctx.r26.s64 = ctx.r26.s64 + 188;
	// cmplw cr6,r26,r24
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r24.u32, xer);
	// blt cr6,0x82b08a7c
	if (cr6.lt) goto loc_82B08A7C;
loc_82B08AC0:
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_82B08AC8:
	// cmplw cr6,r29,r24
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, xer);
	// bge cr6,0x82b08b44
	if (!cr6.lt) goto loc_82B08B44;
loc_82B08AD0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82B08AE0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b08b38
	if (!cr6.eq) goto loc_82B08B38;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x82B08AFC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b08b44
	if (!cr6.eq) goto loc_82B08B44;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// li r5,188
	ctx.r5.s64 = 188;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// addi r26,r26,188
	ctx.r26.s64 = ctx.r26.s64 + 188;
	// bl 0x831ce980
	ctx.lr = 0x82B08B20;
	sub_831CE980(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b06df8
	ctx.lr = 0x82B08B2C;
	sub_82B06DF8(ctx, base);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b06df8
	ctx.lr = 0x82B08B38;
	sub_82B06DF8(ctx, base);
loc_82B08B38:
	// addi r29,r29,188
	ctx.r29.s64 = ctx.r29.s64 + 188;
	// cmplw cr6,r29,r24
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, xer);
	// blt cr6,0x82b08ad0
	if (cr6.lt) goto loc_82B08AD0;
loc_82B08B44:
	// cmplw cr6,r28,r25
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r25.u32, xer);
	// ble cr6,0x82b08bcc
	if (!cr6.gt) goto loc_82B08BCC;
	// addi r30,r28,-188
	ctx.r30.s64 = ctx.r28.s64 + -188;
loc_82B08B50:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82B08B60;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b08bb4
	if (!cr6.eq) goto loc_82B08BB4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82B08B7C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b08bc8
	if (!cr6.eq) goto loc_82B08BC8;
	// addi r31,r31,-188
	ctx.r31.s64 = ctx.r31.s64 + -188;
	// addi r3,r1,1040
	ctx.r3.s64 = ctx.r1.s64 + 1040;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,188
	ctx.r5.s64 = 188;
	// bl 0x831ce980
	ctx.lr = 0x82B08B9C;
	sub_831CE980(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b06df8
	ctx.lr = 0x82B08BA8;
	sub_82B06DF8(ctx, base);
	// addi r4,r1,1040
	ctx.r4.s64 = ctx.r1.s64 + 1040;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b06df8
	ctx.lr = 0x82B08BB4;
	sub_82B06DF8(ctx, base);
loc_82B08BB4:
	// addi r11,r28,-188
	ctx.r11.s64 = ctx.r28.s64 + -188;
	// addi r30,r30,-188
	ctx.r30.s64 = ctx.r30.s64 + -188;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, xer);
	// blt cr6,0x82b08b50
	if (cr6.lt) goto loc_82B08B50;
loc_82B08BC8:
	// cmplw cr6,r28,r25
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r25.u32, xer);
loc_82B08BCC:
	// bne cr6,0x82b08c48
	if (!cr6.eq) goto loc_82B08C48;
	// cmplw cr6,r29,r24
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, xer);
	// beq cr6,0x82b08cf4
	if (cr6.eq) goto loc_82B08CF4;
	// cmplw cr6,r26,r29
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r29.u32, xer);
	// beq cr6,0x82b08c08
	if (cr6.eq) goto loc_82B08C08;
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// li r5,188
	ctx.r5.s64 = 188;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x82B08BF0;
	sub_831CE980(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b06df8
	ctx.lr = 0x82B08BFC;
	sub_82B06DF8(ctx, base);
	// addi r4,r1,656
	ctx.r4.s64 = ctx.r1.s64 + 656;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82b06df8
	ctx.lr = 0x82B08C08;
	sub_82B06DF8(ctx, base);
loc_82B08C08:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,188
	ctx.r5.s64 = 188;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// mr r22,r29
	ctx.r22.u64 = ctx.r29.u64;
	// addi r26,r26,188
	ctx.r26.s64 = ctx.r26.s64 + 188;
	// addi r31,r31,188
	ctx.r31.s64 = ctx.r31.s64 + 188;
	// addi r29,r29,188
	ctx.r29.s64 = ctx.r29.s64 + 188;
	// bl 0x831ce980
	ctx.lr = 0x82B08C2C;
	sub_831CE980(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b06df8
	ctx.lr = 0x82B08C38;
	sub_82B06DF8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82b06df8
	ctx.lr = 0x82B08C44;
	sub_82B06DF8(ctx, base);
	// b 0x82b08ac8
	goto loc_82B08AC8;
loc_82B08C48:
	// cmplw cr6,r29,r24
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, xer);
	// bne cr6,0x82b08cbc
	if (!cr6.eq) goto loc_82B08CBC;
	// addi r11,r28,-188
	ctx.r11.s64 = ctx.r28.s64 + -188;
	// addi r31,r31,-188
	ctx.r31.s64 = ctx.r31.s64 + -188;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// beq cr6,0x82b08c8c
	if (cr6.eq) goto loc_82B08C8C;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// li r5,188
	ctx.r5.s64 = 188;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x831ce980
	ctx.lr = 0x82B08C74;
	sub_831CE980(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b06df8
	ctx.lr = 0x82B08C80;
	sub_82B06DF8(ctx, base);
	// addi r4,r1,464
	ctx.r4.s64 = ctx.r1.s64 + 464;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b06df8
	ctx.lr = 0x82B08C8C;
	sub_82B06DF8(ctx, base);
loc_82B08C8C:
	// addi r3,r1,848
	ctx.r3.s64 = ctx.r1.s64 + 848;
	// li r5,188
	ctx.r5.s64 = 188;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r26,r26,-188
	ctx.r26.s64 = ctx.r26.s64 + -188;
	// bl 0x831ce980
	ctx.lr = 0x82B08CA0;
	sub_831CE980(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b06df8
	ctx.lr = 0x82B08CAC;
	sub_82B06DF8(ctx, base);
	// addi r4,r1,848
	ctx.r4.s64 = ctx.r1.s64 + 848;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82b06df8
	ctx.lr = 0x82B08CB8;
	sub_82B06DF8(ctx, base);
	// b 0x82b08ac8
	goto loc_82B08AC8;
loc_82B08CBC:
	// addi r30,r28,-188
	ctx.r30.s64 = ctx.r28.s64 + -188;
	// addi r3,r1,1232
	ctx.r3.s64 = ctx.r1.s64 + 1232;
	// li r5,188
	ctx.r5.s64 = 188;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// bl 0x831ce980
	ctx.lr = 0x82B08CD4;
	sub_831CE980(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b06df8
	ctx.lr = 0x82B08CE0;
	sub_82B06DF8(ctx, base);
	// addi r4,r1,1232
	ctx.r4.s64 = ctx.r1.s64 + 1232;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b06df8
	ctx.lr = 0x82B08CEC;
	sub_82B06DF8(ctx, base);
	// addi r29,r29,188
	ctx.r29.s64 = ctx.r29.s64 + 188;
	// b 0x82b08ac8
	goto loc_82B08AC8;
loc_82B08CF4:
	// stw r31,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r31.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r26,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r26.u32);
	// addi r1,r1,1520
	ctx.r1.s64 = ctx.r1.s64 + 1520;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B08D08"))) PPC_WEAK_FUNC(sub_82B08D08);
PPC_FUNC_IMPL(__imp__sub_82B08D08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdac8
	ctx.lr = 0x82B08D10;
	__savegprlr_20(ctx, base);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r4,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r4.s64;
	// li r10,36
	ctx.r10.s64 = 36;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// divw r9,r11,r10
	ctx.r9.s32 = PPCDivide(ctx.r11.s32, ctx.r10.s32);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// srawi r8,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// addze r11,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r11.s64 = temp.s64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r5,r5,-36
	ctx.r5.s64 = ctx.r5.s64 + -36;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r4
	ctx.r31.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82b086a8
	ctx.lr = 0x82B08D58;
	sub_82B086A8(ctx, base);
	// addi r29,r31,36
	ctx.r29.s64 = ctx.r31.s64 + 36;
	// cmplw cr6,r24,r31
	cr6.compare<uint32_t>(ctx.r24.u32, ctx.r31.u32, xer);
	// bge cr6,0x82b08dac
	if (!cr6.lt) goto loc_82B08DAC;
loc_82B08D64:
	// addi r30,r31,-36
	ctx.r30.s64 = ctx.r31.s64 + -36;
	// mtctr r25
	ctr.u64 = ctx.r25.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82B08D78;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b08dac
	if (!cr6.eq) goto loc_82B08DAC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r25
	ctr.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82B08D94;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b08dac
	if (!cr6.eq) goto loc_82B08DAC;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplw cr6,r24,r30
	cr6.compare<uint32_t>(ctx.r24.u32, ctx.r30.u32, xer);
	// blt cr6,0x82b08d64
	if (cr6.lt) goto loc_82B08D64;
loc_82B08DAC:
	// cmplw cr6,r29,r23
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r23.u32, xer);
	// bge cr6,0x82b08df8
	if (!cr6.lt) goto loc_82B08DF8;
loc_82B08DB4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r25
	ctr.u64 = ctx.r25.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x82B08DC4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b08df8
	if (!cr6.eq) goto loc_82B08DF8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r25
	ctr.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82B08DE0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b08df8
	if (!cr6.eq) goto loc_82B08DF8;
	// addi r29,r29,36
	ctx.r29.s64 = ctx.r29.s64 + 36;
	// cmplw cr6,r29,r23
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r23.u32, xer);
	// blt cr6,0x82b08db4
	if (cr6.lt) goto loc_82B08DB4;
loc_82B08DF8:
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
loc_82B08E00:
	// cmplw cr6,r26,r23
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r23.u32, xer);
	// bge cr6,0x82b08e5c
	if (!cr6.lt) goto loc_82B08E5C;
loc_82B08E08:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mtctr r25
	ctr.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82B08E18;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b08e50
	if (!cr6.eq) goto loc_82B08E50;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r25
	ctr.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bctrl 
	ctx.lr = 0x82B08E34;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b08e5c
	if (!cr6.eq) goto loc_82B08E5C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r29,r29,36
	ctx.r29.s64 = ctx.r29.s64 + 36;
	// bl 0x82b06f98
	ctx.lr = 0x82B08E50;
	sub_82B06F98(ctx, base);
loc_82B08E50:
	// addi r26,r26,36
	ctx.r26.s64 = ctx.r26.s64 + 36;
	// cmplw cr6,r26,r23
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r23.u32, xer);
	// blt cr6,0x82b08e08
	if (cr6.lt) goto loc_82B08E08;
loc_82B08E5C:
	// cmplw cr6,r27,r24
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r24.u32, xer);
	// ble cr6,0x82b08f84
	if (!cr6.gt) goto loc_82B08F84;
	// addi r30,r27,-28
	ctx.r30.s64 = ctx.r27.s64 + -28;
loc_82B08E68:
	// addi r28,r30,-8
	ctx.r28.s64 = ctx.r30.s64 + -8;
	// mtctr r25
	ctr.u64 = ctx.r25.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x82B08E7C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b08f6c
	if (!cr6.eq) goto loc_82B08F6C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mtctr r25
	ctr.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82B08E98;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b08f80
	if (!cr6.eq) goto loc_82B08F80;
	// li r9,9
	ctx.r9.s64 = 9;
	// addi r31,r31,-36
	ctx.r31.s64 = ctx.r31.s64 + -36;
	// addi r10,r1,268
	ctx.r10.s64 = ctx.r1.s64 + 268;
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82B08EB8:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82b08eb8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B08EB8;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,272(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// lwz r9,276(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// lhz r8,280(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 280);
	// lwz r7,284(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r6,-4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// lhz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// sth r5,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r5.u16);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r4,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r4.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwimi r3,r11,0,14,31
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r3.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r5,r3,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwimi r6,r5,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// lwz r11,288(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// stw r6,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r4,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r4.u32);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// lwz r6,20(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r5,292(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r4,296(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	// lwz r3,300(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r21,304(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// stw r6,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r6.u32);
	// lwz r6,24(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r6,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r6.u32);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// stw r9,-4(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4, ctx.r9.u32);
	// sth r8,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r8.u16);
	// stw r7,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r7.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r5,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r5.u32);
	// stw r4,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r4.u32);
	// stw r3,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r3.u32);
	// stw r21,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r21.u32);
loc_82B08F6C:
	// addi r11,r27,-36
	ctx.r11.s64 = ctx.r27.s64 + -36;
	// addi r30,r30,-36
	ctx.r30.s64 = ctx.r30.s64 + -36;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// cmplw cr6,r24,r11
	cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, xer);
	// blt cr6,0x82b08e68
	if (cr6.lt) goto loc_82B08E68;
loc_82B08F80:
	// cmplw cr6,r27,r24
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r24.u32, xer);
loc_82B08F84:
	// bne cr6,0x82b0913c
	if (!cr6.eq) goto loc_82B0913C;
	// cmplw cr6,r26,r23
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r23.u32, xer);
	// beq cr6,0x82b093c4
	if (cr6.eq) goto loc_82B093C4;
	// cmplw cr6,r29,r26
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, xer);
	// beq cr6,0x82b09060
	if (cr6.eq) goto loc_82B09060;
	// li r9,9
	ctx.r9.s64 = 9;
	// addi r10,r1,172
	ctx.r10.s64 = ctx.r1.s64 + 172;
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82B08FA8:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82b08fa8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B08FA8;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r29,16
	ctx.r11.s64 = ctx.r29.s64 + 16;
	// lwz r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r8,180(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lhz r7,184(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 184);
	// lwz r6,188(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r5,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r5.u32);
	// lhz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r29.u32 + 8);
	// sth r4,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r4.u16);
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// rlwimi r11,r10,0,14,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFC0000);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r28,16(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// rlwimi r28,r5,0,0,13
	ctx.r28.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xFFFC0000) | (ctx.r28.u64 & 0xFFFFFFFF0003FFFF);
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// lwz r5,20(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// stw r5,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r5.u32);
	// lwz r5,24(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// stw r5,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
	// lwz r5,28(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// lwz r3,196(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r11,200(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// lwz r10,204(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// lwz r30,208(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// stw r5,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r5.u32);
	// lwz r5,32(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// stw r5,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r5.u32);
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// stw r8,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r8.u32);
	// sth r7,8(r29)
	PPC_STORE_U16(ctx.r29.u32 + 8, ctx.r7.u16);
	// stw r6,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r6.u32);
	// stw r4,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r4.u32);
	// stw r3,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r3.u32);
	// stw r11,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r11.u32);
	// stw r10,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r10.u32);
	// stw r30,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r30.u32);
loc_82B09060:
	// li r9,9
	ctx.r9.s64 = 9;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// addi r8,r1,76
	ctx.r8.s64 = ctx.r1.s64 + 76;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// addi r29,r29,36
	ctx.r29.s64 = ctx.r29.s64 + 36;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// addi r31,r31,36
	ctx.r31.s64 = ctx.r31.s64 + 36;
	// addi r26,r26,36
	ctx.r26.s64 = ctx.r26.s64 + 36;
	// addi r9,r10,-4
	ctx.r9.s64 = ctx.r10.s64 + -4;
loc_82B09084:
	// lwzu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x82b09084
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B09084;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lhz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r30,108(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r28,112(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r21,4(r11)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r21,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r21.u32);
	// lhz r21,8(r11)
	ctx.r21.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// sth r21,8(r10)
	PPC_STORE_U16(ctx.r10.u32 + 8, ctx.r21.u16);
	// lwz r21,12(r11)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r21,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r21.u32);
	// lwz r21,16(r10)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r20,16(r11)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwimi r20,r21,0,14,31
	ctx.r20.u64 = (__builtin_rotateleft32(ctx.r21.u32, 0) & 0x3FFFF) | (ctx.r20.u64 & 0xFFFFFFFFFFFC0000);
	// stw r20,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r20.u32);
	// rotlwi r21,r20,0
	ctx.r21.u64 = __builtin_rotateleft32(ctx.r20.u32, 0);
	// lwz r20,16(r11)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwimi r20,r21,0,0,13
	ctx.r20.u64 = (__builtin_rotateleft32(ctx.r21.u32, 0) & 0xFFFC0000) | (ctx.r20.u64 & 0xFFFFFFFF0003FFFF);
	// stw r20,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r20.u32);
	// lwz r21,20(r11)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r21,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r21.u32);
	// lwz r21,24(r11)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r21,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r21.u32);
	// lwz r21,28(r11)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r21,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r21.u32);
	// lwz r21,32(r11)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r21,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r21.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// sth r6,8(r11)
	PPC_STORE_U16(ctx.r11.u32 + 8, ctx.r6.u16);
	// stw r5,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
	// stw r4,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r4.u32);
	// stw r3,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r3.u32);
	// stw r9,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
	// stw r30,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r30.u32);
	// stw r28,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r28.u32);
	// b 0x82b08e00
	goto loc_82B08E00;
loc_82B0913C:
	// cmplw cr6,r26,r23
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r23.u32, xer);
	// bne cr6,0x82b092f0
	if (!cr6.eq) goto loc_82B092F0;
	// addi r11,r27,-36
	ctx.r11.s64 = ctx.r27.s64 + -36;
	// addi r31,r31,-36
	ctx.r31.s64 = ctx.r31.s64 + -36;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// beq cr6,0x82b0921c
	if (cr6.eq) goto loc_82B0921C;
	// li r9,9
	ctx.r9.s64 = 9;
	// addi r10,r1,124
	ctx.r10.s64 = ctx.r1.s64 + 124;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82B09168:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82b09168
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B09168;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lhz r7,136(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 136);
	// lwz r6,140(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r30.u32);
	// lhz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r3,152(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// sth r30,8(r27)
	PPC_STORE_U16(ctx.r27.u32 + 8, ctx.r30.u16);
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r30,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r30.u32);
	// lwz r30,16(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// lwz r28,16(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwimi r30,r28,0,0,13
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r28.u32, 0) & 0xFFFC0000) | (ctx.r30.u64 & 0xFFFFFFFF0003FFFF);
	// stw r30,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r30.u32);
	// lwz r28,16(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwimi r30,r28,0,14,31
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r28.u32, 0) & 0x3FFFF) | (ctx.r30.u64 & 0xFFFFFFFFFFFC0000);
	// stw r30,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r30.u32);
	// lwz r30,20(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r30,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r30.u32);
	// lwz r30,24(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r30,24(r27)
	PPC_STORE_U32(ctx.r27.u32 + 24, ctx.r30.u32);
	// lwz r30,28(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r30,28(r27)
	PPC_STORE_U32(ctx.r27.u32 + 28, ctx.r30.u32);
	// lwz r30,32(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r30,32(r27)
	PPC_STORE_U32(ctx.r27.u32 + 32, ctx.r30.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// sth r7,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r7.u16);
	// stw r6,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r6.u32);
	// stw r5,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r5.u32);
	// stw r4,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r4.u32);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
loc_82B0921C:
	// li r9,9
	ctx.r9.s64 = 9;
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// addi r29,r29,-36
	ctx.r29.s64 = ctx.r29.s64 + -36;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82B09234:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82b09234
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B09234;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r29,16
	ctx.r11.s64 = ctx.r29.s64 + 16;
	// lwz r9,224(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r8,228(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lhz r7,232(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 232);
	// lwz r6,236(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r5,240(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// lwz r4,244(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r3,248(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// lwz r11,252(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// lwz r10,256(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// lwz r30,4(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// lhz r30,8(r29)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r29.u32 + 8);
	// sth r30,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r30.u16);
	// lwz r30,12(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// lwz r28,16(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r30,16(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// rlwimi r30,r28,0,14,31
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r28.u32, 0) & 0x3FFFF) | (ctx.r30.u64 & 0xFFFFFFFFFFFC0000);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// rotlwi r30,r30,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// lwz r28,16(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// rlwimi r28,r30,0,0,13
	ctx.r28.u64 = (__builtin_rotateleft32(ctx.r30.u32, 0) & 0xFFFC0000) | (ctx.r28.u64 & 0xFFFFFFFF0003FFFF);
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// lwz r30,20(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// lwz r30,24(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// lwz r30,28(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// lwz r30,32(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// stw r8,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r8.u32);
	// sth r7,8(r29)
	PPC_STORE_U16(ctx.r29.u32 + 8, ctx.r7.u16);
	// stw r6,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r6.u32);
	// stw r5,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r5.u32);
	// stw r4,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r4.u32);
	// stw r3,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r3.u32);
	// stw r11,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r11.u32);
	// stw r10,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r10.u32);
	// b 0x82b08e00
	goto loc_82B08E00;
loc_82B092F0:
	// li r9,9
	ctx.r9.s64 = 9;
	// addi r11,r1,320
	ctx.r11.s64 = ctx.r1.s64 + 320;
	// addi r27,r27,-36
	ctx.r27.s64 = ctx.r27.s64 + -36;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// addi r11,r26,-4
	ctx.r11.s64 = ctx.r26.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82B09308:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82b09308
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82B09308;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,320(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// lwz r9,324(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// lhz r8,328(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 328);
	// lwz r7,332(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// lwz r6,336(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// lwz r5,340(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r4,344(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	// lwz r3,348(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// lwz r11,352(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// lwz r30,4(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// stw r30,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r30.u32);
	// lhz r30,8(r27)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r27.u32 + 8);
	// sth r30,8(r26)
	PPC_STORE_U16(ctx.r26.u32 + 8, ctx.r30.u16);
	// lwz r30,12(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// stw r30,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r30.u32);
	// lwz r30,16(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// lwz r28,16(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// rlwimi r28,r30,0,14,31
	ctx.r28.u64 = (__builtin_rotateleft32(ctx.r30.u32, 0) & 0x3FFFF) | (ctx.r28.u64 & 0xFFFFFFFFFFFC0000);
	// stw r28,16(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16, ctx.r28.u32);
	// rotlwi r30,r28,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r28.u32, 0);
	// lwz r28,16(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// rlwimi r30,r28,0,14,31
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r28.u32, 0) & 0x3FFFF) | (ctx.r30.u64 & 0xFFFFFFFFFFFC0000);
	// stw r30,16(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16, ctx.r30.u32);
	// lwz r30,20(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// stw r30,20(r26)
	PPC_STORE_U32(ctx.r26.u32 + 20, ctx.r30.u32);
	// lwz r30,24(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// stw r30,24(r26)
	PPC_STORE_U32(ctx.r26.u32 + 24, ctx.r30.u32);
	// lwz r30,28(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// stw r30,28(r26)
	PPC_STORE_U32(ctx.r26.u32 + 28, ctx.r30.u32);
	// lwz r30,32(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	// stw r30,32(r26)
	PPC_STORE_U32(ctx.r26.u32 + 32, ctx.r30.u32);
	// addi r26,r26,36
	ctx.r26.s64 = ctx.r26.s64 + 36;
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// stw r9,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r9.u32);
	// sth r8,8(r27)
	PPC_STORE_U16(ctx.r27.u32 + 8, ctx.r8.u16);
	// stw r7,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r7.u32);
	// stw r6,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r6.u32);
	// stw r5,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r5.u32);
	// stw r4,24(r27)
	PPC_STORE_U32(ctx.r27.u32 + 24, ctx.r4.u32);
	// stw r3,28(r27)
	PPC_STORE_U32(ctx.r27.u32 + 28, ctx.r3.u32);
	// stw r11,32(r27)
	PPC_STORE_U32(ctx.r27.u32 + 32, ctx.r11.u32);
	// b 0x82b08e00
	goto loc_82B08E00;
loc_82B093C4:
	// stw r31,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r31.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// stw r29,4(r22)
	PPC_STORE_U32(ctx.r22.u32 + 4, ctx.r29.u32);
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x831cdb18
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B093D8"))) PPC_WEAK_FUNC(sub_82B093D8);
PPC_FUNC_IMPL(__imp__sub_82B093D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82B093E0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r3,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r3.s64;
	// li r10,5852
	ctx.r10.s64 = 5852;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// divw r11,r11,r10
	ctx.r11.s32 = PPCDivide(ctx.r11.s32, ctx.r10.s32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,40
	cr6.compare<int32_t>(ctx.r11.s32, 40, xer);
	// ble cr6,0x82b09470
	if (!cr6.gt) goto loc_82B09470;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srawi r10,r11,3
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// mulli r29,r11,5852
	ctx.r29.s64 = ctx.r11.s64 * 5852;
	// mulli r26,r11,11704
	ctx.r26.s64 = ctx.r11.s64 * 11704;
	// add r27,r29,r3
	ctx.r27.u64 = ctx.r29.u64 + ctx.r3.u64;
	// add r5,r26,r3
	ctx.r5.u64 = ctx.r26.u64 + ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82b08768
	ctx.lr = 0x82B09428;
	sub_82B08768(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// add r5,r29,r31
	ctx.r5.u64 = ctx.r29.u64 + ctx.r31.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// subf r3,r29,r31
	ctx.r3.s64 = ctx.r31.s64 - ctx.r29.s64;
	// bl 0x82b08768
	ctx.lr = 0x82B0943C;
	sub_82B08768(ctx, base);
	// subf r29,r29,r28
	ctx.r29.s64 = ctx.r28.s64 - ctx.r29.s64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// subf r3,r26,r28
	ctx.r3.s64 = ctx.r28.s64 - ctx.r26.s64;
	// bl 0x82b08768
	ctx.lr = 0x82B09454;
	sub_82B08768(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82b08768
	ctx.lr = 0x82B09468;
	sub_82B08768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82B09470:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82b08768
	ctx.lr = 0x82B0947C;
	sub_82B08768(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B09484"))) PPC_WEAK_FUNC(sub_82B09484);
PPC_FUNC_IMPL(__imp__sub_82B09484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B09488"))) PPC_WEAK_FUNC(sub_82B09488);
PPC_FUNC_IMPL(__imp__sub_82B09488) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82B09490;
	__savegprlr_24(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-6016(r1)
	ea = -6016 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// li r10,5852
	ctx.r10.s64 = 5852;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// divw r28,r11,r10
	ctx.r28.s32 = PPCDivide(ctx.r11.s32, ctx.r10.s32);
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// srawi r9,r28,1
	xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r28.s32 >> 1;
	// addze. r27,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r27.s64 = temp.s64;
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// ble 0x82b09584
	if (!cr0.gt) goto loc_82B09584;
	// addi r10,r27,1
	ctx.r10.s64 = ctx.r27.s64 + 1;
	// mulli r11,r27,5852
	ctx.r11.s64 = ctx.r27.s64 * 5852;
	// rlwinm r26,r10,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r24,r11,r3
	ctx.r24.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_82B094C8:
	// addi r24,r24,-5852
	ctx.r24.s64 = ctx.r24.s64 + -5852;
	// li r5,5852
	ctx.r5.s64 = 5852;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// addi r26,r26,-2
	ctx.r26.s64 = ctx.r26.s64 + -2;
	// bl 0x831ce980
	ctx.lr = 0x82B094E4;
	sub_831CE980(ctx, base);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// cmpw cr6,r26,r28
	cr6.compare<int32_t>(ctx.r26.s32, ctx.r28.s32, xer);
	// bge cr6,0x82b09540
	if (!cr6.lt) goto loc_82B09540;
loc_82B094F4:
	// mulli r11,r31,5852
	ctx.r11.s64 = ctx.r31.s64 * 5852;
	// mtctr r25
	ctr.u64 = ctx.r25.u64;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r3,-5852
	ctx.r4.s64 = ctx.r3.s64 + -5852;
	// bctrl 
	ctx.lr = 0x82B09508;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b09518
	if (cr6.eq) goto loc_82B09518;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_82B09518:
	// mulli r10,r31,5852
	ctx.r10.s64 = ctx.r31.s64 * 5852;
	// mulli r11,r29,5852
	ctx.r11.s64 = ctx.r29.s64 * 5852;
	// add r4,r10,r30
	ctx.r4.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82b077f8
	ctx.lr = 0x82B0952C;
	sub_82B077F8(ctx, base);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// rlwinm r31,r11,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, xer);
	// blt cr6,0x82b094f4
	if (cr6.lt) goto loc_82B094F4;
loc_82B09540:
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, xer);
	// bne cr6,0x82b09564
	if (!cr6.eq) goto loc_82B09564;
	// mulli r11,r28,5852
	ctx.r11.s64 = ctx.r28.s64 * 5852;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mulli r11,r29,5852
	ctx.r11.s64 = ctx.r29.s64 * 5852;
	// addi r4,r10,-5852
	ctx.r4.s64 = ctx.r10.s64 + -5852;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82b077f8
	ctx.lr = 0x82B09560;
	sub_82B077F8(ctx, base);
	// addi r29,r28,-1
	ctx.r29.s64 = ctx.r28.s64 + -1;
loc_82B09564:
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b07f38
	ctx.lr = 0x82B0957C;
	sub_82B07F38(ctx, base);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(ctx.r27.s32, 0, xer);
	// bgt cr6,0x82b094c8
	if (cr6.gt) goto loc_82B094C8;
loc_82B09584:
	// addi r1,r1,6016
	ctx.r1.s64 = ctx.r1.s64 + 6016;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B0958C"))) PPC_WEAK_FUNC(sub_82B0958C);
PPC_FUNC_IMPL(__imp__sub_82B0958C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B09590"))) PPC_WEAK_FUNC(sub_82B09590);
PPC_FUNC_IMPL(__imp__sub_82B09590) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82B09598;
	__savegprlr_24(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-6032(r1)
	ea = -6032 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82b09680
	if (cr6.eq) goto loc_82B09680;
	// addi r30,r3,5852
	ctx.r30.s64 = ctx.r3.s64 + 5852;
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, xer);
	// beq cr6,0x82b09680
	if (cr6.eq) goto loc_82B09680;
	// lbz r24,80(r1)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r28,r30,-5852
	ctx.r28.s64 = ctx.r30.s64 + -5852;
loc_82B095C8:
	// li r5,5852
	ctx.r5.s64 = 5852;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// bl 0x831ce980
	ctx.lr = 0x82B095DC;
	sub_831CE980(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x82B095EC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b09614
	if (cr6.eq) goto loc_82B09614;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r28,11704
	ctx.r5.s64 = ctx.r28.s64 + 11704;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82b080c8
	ctx.lr = 0x82B0960C;
	sub_82B080C8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// b 0x82b09668
	goto loc_82B09668;
loc_82B09614:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x82B09628;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b09664
	if (cr6.eq) goto loc_82B09664;
loc_82B09634:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b077f8
	ctx.lr = 0x82B09640;
	sub_82B077F8(ctx, base);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// addi r31,r31,-5852
	ctx.r31.s64 = ctx.r31.s64 + -5852;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82B09658;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b09634
	if (!cr6.eq) goto loc_82B09634;
loc_82B09664:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82B09668:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82b077f8
	ctx.lr = 0x82B09670;
	sub_82B077F8(ctx, base);
	// addi r30,r30,5852
	ctx.r30.s64 = ctx.r30.s64 + 5852;
	// addi r28,r28,5852
	ctx.r28.s64 = ctx.r28.s64 + 5852;
	// cmplw cr6,r30,r25
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, xer);
	// bne cr6,0x82b095c8
	if (!cr6.eq) goto loc_82B095C8;
loc_82B09680:
	// addi r1,r1,6032
	ctx.r1.s64 = ctx.r1.s64 + 6032;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B09688"))) PPC_WEAK_FUNC(sub_82B09688);
PPC_FUNC_IMPL(__imp__sub_82B09688) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82B09690;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,36
	ctx.r27.s64 = 36;
	// subf r30,r3,r4
	ctx.r30.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// divw r11,r30,r27
	ctx.r11.s32 = PPCDivide(ctx.r30.s32, ctx.r27.s32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// ble cr6,0x82b096dc
	if (!cr6.gt) goto loc_82B096DC;
loc_82B096B4:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b08200
	ctx.lr = 0x82B096C8;
	sub_82B08200(ctx, base);
	// addi r30,r30,-36
	ctx.r30.s64 = ctx.r30.s64 + -36;
	// addi r31,r31,-36
	ctx.r31.s64 = ctx.r31.s64 + -36;
	// divw r11,r30,r27
	ctx.r11.s32 = PPCDivide(ctx.r30.s32, ctx.r27.s32);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bgt cr6,0x82b096b4
	if (cr6.gt) goto loc_82B096B4;
loc_82B096DC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B096E4"))) PPC_WEAK_FUNC(sub_82B096E4);
PPC_FUNC_IMPL(__imp__sub_82B096E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B096E8"))) PPC_WEAK_FUNC(sub_82B096E8);
PPC_FUNC_IMPL(__imp__sub_82B096E8) {
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
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r3,r11,13344
	ctx.r3.s64 = ctx.r11.s64 + 13344;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2f6d8
	ctx.lr = 0x82B0971C;
	sub_82D2F6D8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B09724;
	sub_831156E8(ctx, base);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r8,116(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// li r7,5852
	ctx.r7.s64 = 5852;
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r9,0
	ctx.r9.s64 = 0;
	// subf r6,r11,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r11.s64;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r5,15
	ctx.r5.s64 = 15;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// divw r4,r6,r7
	ctx.r4.s32 = PPCDivide(ctx.r6.s32, ctx.r7.s32);
	// stb r9,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r9.u8);
	// stw r5,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82b09768
	if (cr6.gt) goto loc_82B09768;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B09768;
	sub_831CC188(ctx, base);
loc_82B09768:
	// mulli r10,r10,5852
	ctx.r10.s64 = ctx.r10.s64 * 5852;
	// ldx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x8311bf98
	ctx.lr = 0x82B09774;
	sub_8311BF98(ctx, base);
	// lis r4,270
	ctx.r4.s64 = 17694720;
	// addi r5,r3,56
	ctx.r5.s64 = ctx.r3.s64 + 56;
	// ori r4,r4,154
	ctx.r4.u64 = ctx.r4.u64 | 154;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d042a8
	ctx.lr = 0x82B09788;
	sub_82D042A8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2aab0
	ctx.lr = 0x82B09794;
	sub_82D2AAB0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82B097A0;
	sub_83103100(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b097c0
	if (cr6.lt) goto loc_82B097C0;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82B097C0;
	sub_825952B8(ctx, base);
loc_82B097C0:
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

__attribute__((alias("__imp__sub_82B097D8"))) PPC_WEAK_FUNC(sub_82B097D8);
PPC_FUNC_IMPL(__imp__sub_82B097D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82B097E0;
	__savegprlr_22(ctx, base);
	// lis r12,-1
	ctx.r12.s64 = -65536;
	// ori r12,r12,24368
	ctx.r12.u64 = ctx.r12.u64 | 24368;
	// bl 0x831d2724
	ctx.lr = 0x82B097EC;
	sub_831D2724(ctx, base);
	// stwux r1,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r4,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r4.s64;
	// li r10,5852
	ctx.r10.s64 = 5852;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// divw r9,r11,r10
	ctx.r9.s32 = PPCDivide(ctx.r11.s32, ctx.r10.s32);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// srawi r8,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mulli r11,r7,5852
	ctx.r11.s64 = ctx.r7.s64 * 5852;
	// add r31,r11,r4
	ctx.r31.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r5,r5,-5852
	ctx.r5.s64 = ctx.r5.s64 + -5852;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x82b093d8
	ctx.lr = 0x82B0982C;
	sub_82B093D8(ctx, base);
	// addi r26,r31,5852
	ctx.r26.s64 = ctx.r31.s64 + 5852;
	// cmplw cr6,r25,r31
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r31.u32, xer);
	// bge cr6,0x82b09880
	if (!cr6.lt) goto loc_82B09880;
loc_82B09838:
	// addi r30,r31,-5852
	ctx.r30.s64 = ctx.r31.s64 + -5852;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82B0984C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b09880
	if (!cr6.eq) goto loc_82B09880;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82B09868;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b09880
	if (!cr6.eq) goto loc_82B09880;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplw cr6,r25,r30
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r30.u32, xer);
	// blt cr6,0x82b09838
	if (cr6.lt) goto loc_82B09838;
loc_82B09880:
	// cmplw cr6,r26,r24
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r24.u32, xer);
	// bge cr6,0x82b098cc
	if (!cr6.lt) goto loc_82B098CC;
loc_82B09888:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bctrl 
	ctx.lr = 0x82B09898;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b098cc
	if (!cr6.eq) goto loc_82B098CC;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82B098B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b098cc
	if (!cr6.eq) goto loc_82B098CC;
	// addi r26,r26,5852
	ctx.r26.s64 = ctx.r26.s64 + 5852;
	// cmplw cr6,r26,r24
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r24.u32, xer);
	// blt cr6,0x82b09888
	if (cr6.lt) goto loc_82B09888;
loc_82B098CC:
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_82B098D4:
	// cmplw cr6,r29,r24
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, xer);
	// bge cr6,0x82b09950
	if (!cr6.lt) goto loc_82B09950;
loc_82B098DC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82B098EC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b09944
	if (!cr6.eq) goto loc_82B09944;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x82B09908;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b09950
	if (!cr6.eq) goto loc_82B09950;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r5,5852
	ctx.r5.s64 = 5852;
	// addi r3,r1,5936
	ctx.r3.s64 = ctx.r1.s64 + 5936;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// addi r26,r26,5852
	ctx.r26.s64 = ctx.r26.s64 + 5852;
	// bl 0x831ce980
	ctx.lr = 0x82B0992C;
	sub_831CE980(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b077f8
	ctx.lr = 0x82B09938;
	sub_82B077F8(ctx, base);
	// addi r4,r1,5936
	ctx.r4.s64 = ctx.r1.s64 + 5936;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b077f8
	ctx.lr = 0x82B09944;
	sub_82B077F8(ctx, base);
loc_82B09944:
	// addi r29,r29,5852
	ctx.r29.s64 = ctx.r29.s64 + 5852;
	// cmplw cr6,r29,r24
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, xer);
	// blt cr6,0x82b098dc
	if (cr6.lt) goto loc_82B098DC;
loc_82B09950:
	// cmplw cr6,r28,r25
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r25.u32, xer);
	// ble cr6,0x82b099d8
	if (!cr6.gt) goto loc_82B099D8;
	// addi r30,r28,-5852
	ctx.r30.s64 = ctx.r28.s64 + -5852;
loc_82B0995C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82B0996C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b099c0
	if (!cr6.eq) goto loc_82B099C0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82B09988;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b099d4
	if (!cr6.eq) goto loc_82B099D4;
	// addi r31,r31,-5852
	ctx.r31.s64 = ctx.r31.s64 + -5852;
	// li r5,5852
	ctx.r5.s64 = 5852;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,29360
	ctx.r3.s64 = ctx.r1.s64 + 29360;
	// bl 0x831ce980
	ctx.lr = 0x82B099A8;
	sub_831CE980(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b077f8
	ctx.lr = 0x82B099B4;
	sub_82B077F8(ctx, base);
	// addi r4,r1,29360
	ctx.r4.s64 = ctx.r1.s64 + 29360;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b077f8
	ctx.lr = 0x82B099C0;
	sub_82B077F8(ctx, base);
loc_82B099C0:
	// addi r11,r28,-5852
	ctx.r11.s64 = ctx.r28.s64 + -5852;
	// addi r30,r30,-5852
	ctx.r30.s64 = ctx.r30.s64 + -5852;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, xer);
	// blt cr6,0x82b0995c
	if (cr6.lt) goto loc_82B0995C;
loc_82B099D4:
	// cmplw cr6,r28,r25
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r25.u32, xer);
loc_82B099D8:
	// bne cr6,0x82b09a54
	if (!cr6.eq) goto loc_82B09A54;
	// cmplw cr6,r29,r24
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, xer);
	// beq cr6,0x82b09b10
	if (cr6.eq) goto loc_82B09B10;
	// cmplw cr6,r26,r29
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r29.u32, xer);
	// beq cr6,0x82b09a14
	if (cr6.eq) goto loc_82B09A14;
	// li r5,5852
	ctx.r5.s64 = 5852;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,17648
	ctx.r3.s64 = ctx.r1.s64 + 17648;
	// bl 0x831ce980
	ctx.lr = 0x82B099FC;
	sub_831CE980(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b077f8
	ctx.lr = 0x82B09A08;
	sub_82B077F8(ctx, base);
	// addi r4,r1,17648
	ctx.r4.s64 = ctx.r1.s64 + 17648;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82b077f8
	ctx.lr = 0x82B09A14;
	sub_82B077F8(ctx, base);
loc_82B09A14:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,5852
	ctx.r5.s64 = 5852;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// mr r22,r29
	ctx.r22.u64 = ctx.r29.u64;
	// addi r26,r26,5852
	ctx.r26.s64 = ctx.r26.s64 + 5852;
	// addi r31,r31,5852
	ctx.r31.s64 = ctx.r31.s64 + 5852;
	// addi r29,r29,5852
	ctx.r29.s64 = ctx.r29.s64 + 5852;
	// bl 0x831ce980
	ctx.lr = 0x82B09A38;
	sub_831CE980(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b077f8
	ctx.lr = 0x82B09A44;
	sub_82B077F8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82b077f8
	ctx.lr = 0x82B09A50;
	sub_82B077F8(ctx, base);
	// b 0x82b098d4
	goto loc_82B098D4;
loc_82B09A54:
	// cmplw cr6,r29,r24
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, xer);
	// bne cr6,0x82b09ac8
	if (!cr6.eq) goto loc_82B09AC8;
	// addi r11,r28,-5852
	ctx.r11.s64 = ctx.r28.s64 + -5852;
	// addi r31,r31,-5852
	ctx.r31.s64 = ctx.r31.s64 + -5852;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// beq cr6,0x82b09a98
	if (cr6.eq) goto loc_82B09A98;
	// li r5,5852
	ctx.r5.s64 = 5852;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,11792
	ctx.r3.s64 = ctx.r1.s64 + 11792;
	// bl 0x831ce980
	ctx.lr = 0x82B09A80;
	sub_831CE980(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b077f8
	ctx.lr = 0x82B09A8C;
	sub_82B077F8(ctx, base);
	// addi r4,r1,11792
	ctx.r4.s64 = ctx.r1.s64 + 11792;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b077f8
	ctx.lr = 0x82B09A98;
	sub_82B077F8(ctx, base);
loc_82B09A98:
	// li r5,5852
	ctx.r5.s64 = 5852;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,23504
	ctx.r3.s64 = ctx.r1.s64 + 23504;
	// addi r26,r26,-5852
	ctx.r26.s64 = ctx.r26.s64 + -5852;
	// bl 0x831ce980
	ctx.lr = 0x82B09AAC;
	sub_831CE980(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b077f8
	ctx.lr = 0x82B09AB8;
	sub_82B077F8(ctx, base);
	// addi r4,r1,23504
	ctx.r4.s64 = ctx.r1.s64 + 23504;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82b077f8
	ctx.lr = 0x82B09AC4;
	sub_82B077F8(ctx, base);
	// b 0x82b098d4
	goto loc_82B098D4;
loc_82B09AC8:
	// addi r30,r28,-5852
	ctx.r30.s64 = ctx.r28.s64 + -5852;
	// li r5,5852
	ctx.r5.s64 = 5852;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,35216
	ctx.r3.u64 = ctx.r3.u64 | 35216;
	// add r3,r1,r3
	ctx.r3.u64 = ctx.r1.u64 + ctx.r3.u64;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// bl 0x831ce980
	ctx.lr = 0x82B09AE8;
	sub_831CE980(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b077f8
	ctx.lr = 0x82B09AF4;
	sub_82B077F8(ctx, base);
	// lis r4,0
	ctx.r4.s64 = 0;
	// ori r4,r4,35216
	ctx.r4.u64 = ctx.r4.u64 | 35216;
	// add r4,r1,r4
	ctx.r4.u64 = ctx.r1.u64 + ctx.r4.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b077f8
	ctx.lr = 0x82B09B08;
	sub_82B077F8(ctx, base);
	// addi r29,r29,5852
	ctx.r29.s64 = ctx.r29.s64 + 5852;
	// b 0x82b098d4
	goto loc_82B098D4;
loc_82B09B10:
	// stw r31,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r31.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r26,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r26.u32);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B09B24"))) PPC_WEAK_FUNC(sub_82B09B24);
PPC_FUNC_IMPL(__imp__sub_82B09B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B09B28"))) PPC_WEAK_FUNC(sub_82B09B28);
PPC_FUNC_IMPL(__imp__sub_82B09B28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82B09B30;
	__savegprlr_26(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,188
	ctx.r28.s64 = 188;
	// subf r31,r3,r4
	ctx.r31.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// divw r11,r31,r28
	ctx.r11.s32 = PPCDivide(ctx.r31.s32, ctx.r28.s32);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// ble cr6,0x82b09b9c
	if (!cr6.gt) goto loc_82B09B9C;
	// addi r27,r3,-188
	ctx.r27.s64 = ctx.r3.s64 + -188;
loc_82B09B54:
	// add r30,r27,r31
	ctx.r30.u64 = ctx.r27.u64 + ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,188
	ctx.r5.s64 = 188;
	// bl 0x831ce980
	ctx.lr = 0x82B09B68;
	sub_831CE980(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b06df8
	ctx.lr = 0x82B09B74;
	sub_82B06DF8(ctx, base);
	// addi r31,r31,-188
	ctx.r31.s64 = ctx.r31.s64 + -188;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// divw r5,r31,r28
	ctx.r5.s32 = PPCDivide(ctx.r31.s32, ctx.r28.s32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b07dd0
	ctx.lr = 0x82B09B90;
	sub_82B07DD0(ctx, base);
	// divw r11,r31,r28
	ctx.r11.s32 = PPCDivide(ctx.r31.s32, ctx.r28.s32);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bgt cr6,0x82b09b54
	if (cr6.gt) goto loc_82B09B54;
loc_82B09B9C:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B09BA4"))) PPC_WEAK_FUNC(sub_82B09BA4);
PPC_FUNC_IMPL(__imp__sub_82B09BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B09BA8"))) PPC_WEAK_FUNC(sub_82B09BA8);
PPC_FUNC_IMPL(__imp__sub_82B09BA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82B09BB0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,11
	ctx.r11.s64 = 720896;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,13035
	ctx.r10.u64 = ctx.r11.u64 | 13035;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82b09bd4
	if (!cr6.gt) goto loc_82B09BD4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x82B09BD4;
	sub_831CC150(ctx, base);
loc_82B09BD4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r28,5852
	ctx.r28.s64 = 5852;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r28
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r28.s32);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// bge cr6,0x82b09c60
	if (!cr6.lt) goto loc_82B09C60;
	// li r27,2
	ctx.r27.s64 = 2;
	// mulli r29,r4,5852
	ctx.r29.s64 = ctx.r4.s64 * 5852;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B09C0C;
	sub_82595718(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r6,r31,12
	ctx.r6.s64 = ctx.r31.s64 + 12;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82b08928
	ctx.lr = 0x82B09C24;
	sub_82B08928(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// divw r28,r10,r28
	ctx.r28.s32 = PPCDivide(ctx.r10.s32, ctx.r28.s32);
	// beq cr6,0x82b09c48
	if (cr6.eq) goto loc_82B09C48;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x82B09C48;
	sub_825952B8(ctx, base);
loc_82B09C48:
	// mulli r11,r28,5852
	ctx.r11.s64 = ctx.r28.s64 * 5852;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// add r10,r29,r30
	ctx.r10.u64 = ctx.r29.u64 + ctx.r30.u64;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
loc_82B09C60:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B09C68"))) PPC_WEAK_FUNC(sub_82B09C68);
PPC_FUNC_IMPL(__imp__sub_82B09C68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82B09C70;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,348
	ctx.r11.s64 = 22806528;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,39042
	ctx.r10.u64 = ctx.r11.u64 | 39042;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82b09c94
	if (!cr6.gt) goto loc_82B09C94;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x82B09C94;
	sub_831CC150(ctx, base);
loc_82B09C94:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r28,188
	ctx.r28.s64 = 188;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r28
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r28.s32);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// bge cr6,0x82b09d20
	if (!cr6.lt) goto loc_82B09D20;
	// li r27,2
	ctx.r27.s64 = 2;
	// mulli r29,r4,188
	ctx.r29.s64 = ctx.r4.s64 * 188;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B09CCC;
	sub_82595718(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r6,r31,12
	ctx.r6.s64 = ctx.r31.s64 + 12;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82b08980
	ctx.lr = 0x82B09CE4;
	sub_82B08980(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// divw r28,r10,r28
	ctx.r28.s32 = PPCDivide(ctx.r10.s32, ctx.r28.s32);
	// beq cr6,0x82b09d08
	if (cr6.eq) goto loc_82B09D08;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x82B09D08;
	sub_825952B8(ctx, base);
loc_82B09D08:
	// mulli r11,r28,188
	ctx.r11.s64 = ctx.r28.s64 * 188;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// add r10,r29,r30
	ctx.r10.u64 = ctx.r29.u64 + ctx.r30.u64;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
loc_82B09D20:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B09D28"))) PPC_WEAK_FUNC(sub_82B09D28);
PPC_FUNC_IMPL(__imp__sub_82B09D28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82B09D30;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,36
	ctx.r25.s64 = 36;
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// divw r11,r11,r25
	ctx.r11.s32 = PPCDivide(ctx.r11.s32, ctx.r25.s32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// ble cr6,0x82b09de4
	if (!cr6.gt) goto loc_82B09DE4;
loc_82B09D58:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble cr6,0x82b09e08
	if (!cr6.gt) goto loc_82B09E08;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b08d08
	ctx.lr = 0x82B09D74;
	sub_82B08D08(ctx, base);
	// srawi r11,r29,1
	xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r10,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r27,84(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r9,r27,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r27.s64;
	// subf r8,r30,r26
	ctx.r8.s64 = ctx.r26.s64 - ctx.r30.s64;
	// divw r7,r9,r25
	ctx.r7.s32 = PPCDivide(ctx.r9.s32, ctx.r25.s32);
	// divw r6,r8,r25
	ctx.r6.s32 = PPCDivide(ctx.r8.s32, ctx.r25.s32);
	// cmpw cr6,r6,r7
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, xer);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bge cr6,0x82b09dc4
	if (!cr6.lt) goto loc_82B09DC4;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b09d28
	ctx.lr = 0x82B09DBC;
	sub_82B09D28(ctx, base);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// b 0x82b09dd4
	goto loc_82B09DD4;
loc_82B09DC4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82b09d28
	ctx.lr = 0x82B09DD0;
	sub_82B09D28(ctx, base);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_82B09DD4:
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// divw r11,r11,r25
	ctx.r11.s32 = PPCDivide(ctx.r11.s32, ctx.r25.s32);
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// bgt cr6,0x82b09d58
	if (cr6.gt) goto loc_82B09D58;
loc_82B09DE4:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// ble cr6,0x82b09e00
	if (!cr6.gt) goto loc_82B09E00;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b07b08
	ctx.lr = 0x82B09E00;
	sub_82B07B08(ctx, base);
loc_82B09E00:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82B09E08:
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// ble cr6,0x82b09de4
	if (!cr6.gt) goto loc_82B09DE4;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// ble cr6,0x82b09e30
	if (!cr6.gt) goto loc_82B09E30;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b07910
	ctx.lr = 0x82B09E30;
	sub_82B07910(ctx, base);
loc_82B09E30:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b09688
	ctx.lr = 0x82B09E40;
	sub_82B09688(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B09E48"))) PPC_WEAK_FUNC(sub_82B09E48);
PPC_FUNC_IMPL(__imp__sub_82B09E48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82B09E50;
	__savegprlr_26(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-6000(r1)
	ea = -6000 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,5852
	ctx.r28.s64 = 5852;
	// subf r31,r3,r4
	ctx.r31.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// divw r11,r31,r28
	ctx.r11.s32 = PPCDivide(ctx.r31.s32, ctx.r28.s32);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// ble cr6,0x82b09ec0
	if (!cr6.gt) goto loc_82B09EC0;
	// addi r27,r3,-5852
	ctx.r27.s64 = ctx.r3.s64 + -5852;
loc_82B09E78:
	// add r30,r27,r31
	ctx.r30.u64 = ctx.r27.u64 + ctx.r31.u64;
	// li r5,5852
	ctx.r5.s64 = 5852;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x831ce980
	ctx.lr = 0x82B09E8C;
	sub_831CE980(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b077f8
	ctx.lr = 0x82B09E98;
	sub_82B077F8(ctx, base);
	// addi r31,r31,-5852
	ctx.r31.s64 = ctx.r31.s64 + -5852;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// divw r5,r31,r28
	ctx.r5.s32 = PPCDivide(ctx.r31.s32, ctx.r28.s32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b08860
	ctx.lr = 0x82B09EB4;
	sub_82B08860(ctx, base);
	// divw r11,r31,r28
	ctx.r11.s32 = PPCDivide(ctx.r31.s32, ctx.r28.s32);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bgt cr6,0x82b09e78
	if (cr6.gt) goto loc_82B09E78;
loc_82B09EC0:
	// addi r1,r1,6000
	ctx.r1.s64 = ctx.r1.s64 + 6000;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B09EC8"))) PPC_WEAK_FUNC(sub_82B09EC8);
PPC_FUNC_IMPL(__imp__sub_82B09EC8) {
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
	// lwz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b09f78
	if (cr6.eq) goto loc_82B09F78;
	// lbz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 72);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b09f78
	if (cr6.eq) goto loc_82B09F78;
	// bl 0x82d19a78
	ctx.lr = 0x82B09EFC;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r4,r11,13332
	ctx.r4.s64 = ctx.r11.s64 + 13332;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B09F18;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b09f78
	if (cr6.eq) goto loc_82B09F78;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,108(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a946c0
	ctx.lr = 0x82B09F34;
	sub_82A946C0(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b09f48
	if (cr6.lt) goto loc_82B09F48;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b09f4c
	goto loc_82B09F4C;
loc_82B09F48:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82B09F4C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B09F64;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82B09F6C;
	sub_8387E8E0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83545640
	ctx.lr = 0x82B09F78;
	sub_83545640(ctx, base);
loc_82B09F78:
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

__attribute__((alias("__imp__sub_82B09F90"))) PPC_WEAK_FUNC(sub_82B09F90);
PPC_FUNC_IMPL(__imp__sub_82B09F90) {
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
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x82b09fc4
	if (cr6.eq) goto loc_82B09FC4;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82b07620
	ctx.lr = 0x82B09FC0;
	sub_82B07620(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
loc_82B09FC4:
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

__attribute__((alias("__imp__sub_82B09FD8"))) PPC_WEAK_FUNC(sub_82B09FD8);
PPC_FUNC_IMPL(__imp__sub_82B09FD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,11
	ctx.r10.s64 = 720896;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,5852
	ctx.r9.s64 = 5852;
	// ori r8,r10,13035
	ctx.r8.u64 = ctx.r10.u64 | 13035;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// subf r5,r4,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r4.s64;
	// divw r10,r6,r9
	ctx.r10.s32 = PPCDivide(ctx.r6.s32, ctx.r9.s32);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bge cr6,0x82b0a00c
	if (!cr6.lt) goto loc_82B0A00C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// b 0x831cc150
	sub_831CC150(ctx, base);
	return;
loc_82B0A00C:
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// divw r11,r6,r9
	ctx.r11.s32 = PPCDivide(ctx.r6.s32, ctx.r9.s32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r8,r9,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// blt cr6,0x82b0a03c
	if (cr6.lt) goto loc_82B0A03C;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_82B0A03C:
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x82b0a048
	if (!cr6.lt) goto loc_82B0A048;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_82B0A048:
	// b 0x82b09ba8
	sub_82B09BA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B0A04C"))) PPC_WEAK_FUNC(sub_82B0A04C);
PPC_FUNC_IMPL(__imp__sub_82B0A04C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B0A050"))) PPC_WEAK_FUNC(sub_82B0A050);
PPC_FUNC_IMPL(__imp__sub_82B0A050) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,348
	ctx.r10.s64 = 22806528;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,188
	ctx.r9.s64 = 188;
	// ori r8,r10,39042
	ctx.r8.u64 = ctx.r10.u64 | 39042;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// subf r5,r4,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r4.s64;
	// divw r10,r6,r9
	ctx.r10.s32 = PPCDivide(ctx.r6.s32, ctx.r9.s32);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bge cr6,0x82b0a084
	if (!cr6.lt) goto loc_82B0A084;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// b 0x831cc150
	sub_831CC150(ctx, base);
	return;
loc_82B0A084:
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// divw r11,r6,r9
	ctx.r11.s32 = PPCDivide(ctx.r6.s32, ctx.r9.s32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r8,r9,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// blt cr6,0x82b0a0b4
	if (cr6.lt) goto loc_82B0A0B4;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_82B0A0B4:
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x82b0a0c0
	if (!cr6.lt) goto loc_82B0A0C0;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_82B0A0C0:
	// b 0x82b09c68
	sub_82B09C68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B0A0C4"))) PPC_WEAK_FUNC(sub_82B0A0C4);
PPC_FUNC_IMPL(__imp__sub_82B0A0C4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B0A0C8"))) PPC_WEAK_FUNC(sub_82B0A0C8);
PPC_FUNC_IMPL(__imp__sub_82B0A0C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82B0A0D0;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,188
	ctx.r25.s64 = 188;
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// divw r11,r11,r25
	ctx.r11.s32 = PPCDivide(ctx.r11.s32, ctx.r25.s32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// ble cr6,0x82b0a184
	if (!cr6.gt) goto loc_82B0A184;
loc_82B0A0F8:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble cr6,0x82b0a1a8
	if (!cr6.gt) goto loc_82B0A1A8;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b089d8
	ctx.lr = 0x82B0A114;
	sub_82B089D8(ctx, base);
	// srawi r11,r29,1
	xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r10,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r27,84(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r9,r27,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r27.s64;
	// subf r8,r30,r26
	ctx.r8.s64 = ctx.r26.s64 - ctx.r30.s64;
	// divw r7,r9,r25
	ctx.r7.s32 = PPCDivide(ctx.r9.s32, ctx.r25.s32);
	// divw r6,r8,r25
	ctx.r6.s32 = PPCDivide(ctx.r8.s32, ctx.r25.s32);
	// cmpw cr6,r6,r7
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, xer);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bge cr6,0x82b0a164
	if (!cr6.lt) goto loc_82B0A164;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b0a0c8
	ctx.lr = 0x82B0A15C;
	sub_82B0A0C8(ctx, base);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// b 0x82b0a174
	goto loc_82B0A174;
loc_82B0A164:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82b0a0c8
	ctx.lr = 0x82B0A170;
	sub_82B0A0C8(ctx, base);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_82B0A174:
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// divw r11,r11,r25
	ctx.r11.s32 = PPCDivide(ctx.r11.s32, ctx.r25.s32);
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// bgt cr6,0x82b0a0f8
	if (cr6.gt) goto loc_82B0A0F8;
loc_82B0A184:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// ble cr6,0x82b0a1a0
	if (!cr6.gt) goto loc_82B0A1A0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b085b0
	ctx.lr = 0x82B0A1A0;
	sub_82B085B0(ctx, base);
loc_82B0A1A0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82B0A1A8:
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// ble cr6,0x82b0a184
	if (!cr6.gt) goto loc_82B0A184;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// ble cr6,0x82b0a1d0
	if (!cr6.gt) goto loc_82B0A1D0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b084b0
	ctx.lr = 0x82B0A1D0;
	sub_82B084B0(ctx, base);
loc_82B0A1D0:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b09b28
	ctx.lr = 0x82B0A1E0;
	sub_82B09B28(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B0A1E8"))) PPC_WEAK_FUNC(sub_82B0A1E8);
PPC_FUNC_IMPL(__imp__sub_82B0A1E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B0A1F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,13672
	ctx.r9.s64 = ctx.r11.s64 + 13672;
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
	// lwz r4,128(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82b0a22c
	if (cr6.eq) goto loc_82B0A22C;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x82B0A22C;
	sub_825952B8(ctx, base);
loc_82B0A22C:
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// lwz r4,112(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82b0a254
	if (cr6.eq) goto loc_82B0A254;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x82B0A254;
	sub_825952B8(ctx, base);
loc_82B0A254:
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// bl 0x82c0fc10
	ctx.lr = 0x82B0A268;
	sub_82C0FC10(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B0A270"))) PPC_WEAK_FUNC(sub_82B0A270);
PPC_FUNC_IMPL(__imp__sub_82B0A270) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82B0A278;
	__savegprlr_27(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r27,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r27.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stb r30,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r30.u8);
	// addi r28,r11,13516
	ctx.r28.s64 = ctx.r11.s64 + 13516;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r28,-814
	ctx.r4.s64 = ctx.r28.s64 + -814;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8259cc28
	ctx.lr = 0x82B0A2AC;
	sub_8259CC28(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82B0A2B0;
	sub_831156E8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(ctx.r11.u32, 15, xer);
	// bgt cr6,0x82b0a6d4
	if (cr6.gt) goto loc_82B0A6D4;
	// lis r12,-32079
	ctx.r12.s64 = -2102329344;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-23848
	ctx.r12.s64 = ctx.r12.s64 + -23848;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82B0A318;
	case 1:
		goto loc_82B0A358;
	case 2:
		goto loc_82B0A374;
	case 3:
		goto loc_82B0A39C;
	case 4:
		goto loc_82B0A3C4;
	case 5:
		goto loc_82B0A3E0;
	case 6:
		goto loc_82B0A414;
	case 7:
		goto loc_82B0A43C;
	case 8:
		goto loc_82B0A484;
	case 9:
		goto loc_82B0A4DC;
	case 10:
		goto loc_82B0A43C;
	case 11:
		goto loc_82B0A534;
	case 12:
		goto loc_82B0A58C;
	case 13:
		goto loc_82B0A5E4;
	case 14:
		goto loc_82B0A5E4;
	case 15:
		goto loc_82B0A33C;
	default:
		return;
	}
	// lwz r21,-23784(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -23784);
	// lwz r21,-23720(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -23720);
	// lwz r21,-23692(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -23692);
	// lwz r21,-23652(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -23652);
	// lwz r21,-23612(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -23612);
	// lwz r21,-23584(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -23584);
	// lwz r21,-23532(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -23532);
	// lwz r21,-23492(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -23492);
	// lwz r21,-23420(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -23420);
	// lwz r21,-23332(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -23332);
	// lwz r21,-23492(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -23492);
	// lwz r21,-23244(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -23244);
	// lwz r21,-23156(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -23156);
	// lwz r21,-23068(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -23068);
	// lwz r21,-23068(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -23068);
	// lwz r21,-23748(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -23748);
loc_82B0A318:
	// lis r4,75
	ctx.r4.s64 = 4915200;
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// ori r4,r4,79
	ctx.r4.u64 = ctx.r4.u64 | 79;
	// bl 0x82d042a8
	ctx.lr = 0x82B0A330;
	sub_82D042A8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82B0A33C:
	// lis r4,75
	ctx.r4.s64 = 4915200;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r4,r4,78
	ctx.r4.u64 = ctx.r4.u64 | 78;
	// bl 0x82d042a8
	ctx.lr = 0x82B0A34C;
	sub_82D042A8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82B0A358:
	// lis r4,26
	ctx.r4.s64 = 1703936;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r4,r4,181
	ctx.r4.u64 = ctx.r4.u64 | 181;
	// bl 0x82d042a8
	ctx.lr = 0x82B0A368;
	sub_82D042A8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82B0A374:
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8311c148
	ctx.lr = 0x82B0A37C;
	sub_8311C148(ctx, base);
	// lis r4,75
	ctx.r4.s64 = 4915200;
	// addi r5,r3,4
	ctx.r5.s64 = ctx.r3.s64 + 4;
	// ori r4,r4,68
	ctx.r4.u64 = ctx.r4.u64 | 68;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d042a8
	ctx.lr = 0x82B0A390;
	sub_82D042A8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82B0A39C:
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8311c148
	ctx.lr = 0x82B0A3A4;
	sub_8311C148(ctx, base);
	// lis r4,75
	ctx.r4.s64 = 4915200;
	// addi r5,r3,4
	ctx.r5.s64 = ctx.r3.s64 + 4;
	// ori r4,r4,74
	ctx.r4.u64 = ctx.r4.u64 | 74;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d042a8
	ctx.lr = 0x82B0A3B8;
	sub_82D042A8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82B0A3C4:
	// lis r4,641
	ctx.r4.s64 = 42008576;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r4,r4,88
	ctx.r4.u64 = ctx.r4.u64 | 88;
	// bl 0x82d042a8
	ctx.lr = 0x82B0A3D4;
	sub_82D042A8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82B0A3E0:
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x83160ca8
	ctx.lr = 0x82B0A3EC;
	sub_83160CA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825a1da8
	ctx.lr = 0x82B0A400;
	sub_825A1DA8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82B0A408;
	sub_8387E8E0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82B0A414:
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8311c148
	ctx.lr = 0x82B0A41C;
	sub_8311C148(ctx, base);
	// lis r4,75
	ctx.r4.s64 = 4915200;
	// addi r5,r3,4
	ctx.r5.s64 = ctx.r3.s64 + 4;
	// ori r4,r4,70
	ctx.r4.u64 = ctx.r4.u64 | 70;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d042a8
	ctx.lr = 0x82B0A430;
	sub_82D042A8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82B0A43C:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x831a82a8
	ctx.lr = 0x82B0A448;
	sub_831A82A8(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b0a45c
	if (cr6.lt) goto loc_82B0A45C;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b0a460
	goto loc_82B0A460;
loc_82B0A45C:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_82B0A460:
	// lis r4,75
	ctx.r4.s64 = 4915200;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r4,r4,69
	ctx.r4.u64 = ctx.r4.u64 | 69;
	// bl 0x82d042a8
	ctx.lr = 0x82B0A470;
	sub_82D042A8(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x82B0A478;
	sub_8387E8E0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82B0A484:
	// lhz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// bl 0x8311c338
	ctx.lr = 0x82B0A48C;
	sub_8311C338(ctx, base);
	// stb r30,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r30.u8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,81
	ctx.r5.s64 = ctx.r1.s64 + 81;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x83125548
	ctx.lr = 0x82B0A4A0;
	sub_83125548(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b0a4b4
	if (cr6.lt) goto loc_82B0A4B4;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b0a4b8
	goto loc_82B0A4B8;
loc_82B0A4B4:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_82B0A4B8:
	// lis r4,75
	ctx.r4.s64 = 4915200;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r4,r4,73
	ctx.r4.u64 = ctx.r4.u64 | 73;
	// bl 0x82d042a8
	ctx.lr = 0x82B0A4C8;
	sub_82D042A8(ctx, base);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x8387e8e0
	ctx.lr = 0x82B0A4D0;
	sub_8387E8E0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82B0A4DC:
	// lhz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// bl 0x8311c338
	ctx.lr = 0x82B0A4E4;
	sub_8311C338(ctx, base);
	// stb r30,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r30.u8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,85
	ctx.r5.s64 = ctx.r1.s64 + 85;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x83125548
	ctx.lr = 0x82B0A4F8;
	sub_83125548(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b0a50c
	if (cr6.lt) goto loc_82B0A50C;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b0a510
	goto loc_82B0A510;
loc_82B0A50C:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_82B0A510:
	// lis r4,75
	ctx.r4.s64 = 4915200;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r4,r4,72
	ctx.r4.u64 = ctx.r4.u64 | 72;
	// bl 0x82d042a8
	ctx.lr = 0x82B0A520;
	sub_82D042A8(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8387e8e0
	ctx.lr = 0x82B0A528;
	sub_8387E8E0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82B0A534:
	// lhz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// bl 0x8311c338
	ctx.lr = 0x82B0A53C;
	sub_8311C338(ctx, base);
	// stb r30,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r30.u8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,83
	ctx.r5.s64 = ctx.r1.s64 + 83;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x83125548
	ctx.lr = 0x82B0A550;
	sub_83125548(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b0a564
	if (cr6.lt) goto loc_82B0A564;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b0a568
	goto loc_82B0A568;
loc_82B0A564:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_82B0A568:
	// lis r4,75
	ctx.r4.s64 = 4915200;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r4,r4,71
	ctx.r4.u64 = ctx.r4.u64 | 71;
	// bl 0x82d042a8
	ctx.lr = 0x82B0A578;
	sub_82D042A8(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x82B0A580;
	sub_8387E8E0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82B0A58C:
	// lhz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// bl 0x8311c338
	ctx.lr = 0x82B0A594;
	sub_8311C338(ctx, base);
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x83125548
	ctx.lr = 0x82B0A5A8;
	sub_83125548(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b0a5bc
	if (cr6.lt) goto loc_82B0A5BC;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b0a5c0
	goto loc_82B0A5C0;
loc_82B0A5BC:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_82B0A5C0:
	// lis r4,75
	ctx.r4.s64 = 4915200;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r4,r4,80
	ctx.r4.u64 = ctx.r4.u64 | 80;
	// bl 0x82d042a8
	ctx.lr = 0x82B0A5D0;
	sub_82D042A8(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8387e8e0
	ctx.lr = 0x82B0A5D8;
	sub_8387E8E0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82B0A5E4:
	// lhz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,67
	cr6.compare<uint32_t>(ctx.r4.u32, 67, xer);
	// beq cr6,0x82b0a650
	if (cr6.eq) goto loc_82B0A650;
	// cmplwi cr6,r4,51
	cr6.compare<uint32_t>(ctx.r4.u32, 51, xer);
	// beq cr6,0x82b0a650
	if (cr6.eq) goto loc_82B0A650;
	// stb r30,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r30.u8);
	// bl 0x8311c338
	ctx.lr = 0x82B0A604;
	sub_8311C338(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r5,r1,82
	ctx.r5.s64 = ctx.r1.s64 + 82;
	// bl 0x83125548
	ctx.lr = 0x82B0A614;
	sub_83125548(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b0a628
	if (cr6.lt) goto loc_82B0A628;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b0a62c
	goto loc_82B0A62C;
loc_82B0A628:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_82B0A62C:
	// lis r4,279
	ctx.r4.s64 = 18284544;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r4,r4,775
	ctx.r4.u64 = ctx.r4.u64 | 775;
	// bl 0x82d042a8
	ctx.lr = 0x82B0A63C;
	sub_82D042A8(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x8387e8e0
	ctx.lr = 0x82B0A644;
	sub_8387E8E0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82B0A650:
	// stb r30,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r30.u8);
	// bl 0x8311c338
	ctx.lr = 0x82B0A658;
	sub_8311C338(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x83125548
	ctx.lr = 0x82B0A668;
	sub_83125548(ctx, base);
	// li r31,-1
	ctx.r31.s64 = -1;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825a1da8
	ctx.lr = 0x82B0A680;
	sub_825A1DA8(ctx, base);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x8387e8e0
	ctx.lr = 0x82B0A688;
	sub_8387E8E0(ctx, base);
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// li r5,1
	ctx.r5.s64 = 1;
	// ori r4,r4,152
	ctx.r4.u64 = ctx.r4.u64 | 152;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d042a8
	ctx.lr = 0x82B0A6A8;
	sub_82D042A8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825a1eb8
	ctx.lr = 0x82B0A6B8;
	sub_825A1EB8(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825a1da8
	ctx.lr = 0x82B0A6CC;
	sub_825A1DA8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82B0A6D4;
	sub_8387E8E0(ctx, base);
loc_82B0A6D4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B0A6E0"))) PPC_WEAK_FUNC(sub_82B0A6E0);
PPC_FUNC_IMPL(__imp__sub_82B0A6E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82B0A6E8;
	__savegprlr_25(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stb r30,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r30.u8);
	// addi r31,r11,13572
	ctx.r31.s64 = ctx.r11.s64 + 13572;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r31,-52
	ctx.r4.s64 = ctx.r31.s64 + -52;
	// bl 0x8259cc28
	ctx.lr = 0x82B0A720;
	sub_8259CC28(ctx, base);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// addi r4,r31,-44
	ctx.r4.s64 = ctx.r31.s64 + -44;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// li r5,7
	ctx.r5.s64 = 7;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x82B0A73C;
	sub_8259CC28(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b0a798
	if (!cr6.eq) goto loc_82B0A798;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r31,2
	ctx.r31.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b0a768
	if (cr6.lt) goto loc_82B0A768;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82B0A768;
	sub_825952B8(ctx, base);
loc_82B0A768:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r30.u8);
	// blt cr6,0x82b0a8f0
	if (cr6.lt) goto loc_82B0A8F0;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82B0A790;
	sub_825952B8(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82B0A798:
	// lwz r11,104(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// addi r4,r31,-36
	ctx.r4.s64 = ctx.r31.s64 + -36;
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// bl 0x82d2e228
	ctx.lr = 0x82B0A7A8;
	sub_82D2E228(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b0a8e0
	if (cr6.eq) goto loc_82B0A8E0;
	// lwz r11,104(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// addi r4,r31,-24
	ctx.r4.s64 = ctx.r31.s64 + -24;
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// bl 0x82d2e228
	ctx.lr = 0x82B0A7C4;
	sub_82D2E228(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b0a8e0
	if (cr6.eq) goto loc_82B0A8E0;
	// lis r11,-13108
	ctx.r11.s64 = -859045888;
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r3,104(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// li r8,10
	ctx.r8.s64 = 10;
	// ori r7,r11,52429
	ctx.r7.u64 = ctx.r11.u64 | 52429;
	// divwu. r30,r9,r8
	ctx.r30.u32 = PPCDivide(ctx.r9.u32, ctx.r8.u32);
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// mulhwu r6,r9,r7
	ctx.r6.u64 = (uint64_t(ctx.r9.u32) * uint64_t(ctx.r7.u32)) >> 32;
	// rlwinm r11,r6,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 29) & 0x1FFFFFFF;
	// li r28,-1
	ctx.r28.s64 = -1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r4,r5,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// li r5,1
	ctx.r5.s64 = 1;
	// subf r27,r4,r9
	ctx.r27.s64 = ctx.r9.s64 - ctx.r4.s64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bne 0x82b0a820
	if (!cr0.eq) goto loc_82B0A820;
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// b 0x82b0a880
	goto loc_82B0A880;
loc_82B0A820:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82B0A828;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// clrldi r4,r30,32
	ctx.r4.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x83161f10
	ctx.lr = 0x82B0A83C;
	sub_83161F10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825a1da8
	ctx.lr = 0x82B0A850;
	sub_825A1DA8(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x82B0A858;
	sub_8387E8E0(ctx, base);
	// lwz r9,148(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// bge cr6,0x82b0a86c
	if (!cr6.lt) goto loc_82B0A86C;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
loc_82B0A86C:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82B0A880:
	// bctrl 
	ctx.lr = 0x82B0A884;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// clrldi r4,r27,32
	ctx.r4.u64 = ctx.r27.u64 & 0xFFFFFFFF;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x83161f10
	ctx.lr = 0x82B0A898;
	sub_83161F10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825a1da8
	ctx.lr = 0x82B0A8AC;
	sub_825A1DA8(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x82B0A8B4;
	sub_8387E8E0(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82b0a8c8
	if (!cr6.lt) goto loc_82B0A8C8;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82B0A8C8:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B0A8E0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82B0A8E0:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82B0A8E8;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82B0A8F0;
	sub_8387E8E0(ctx, base);
loc_82B0A8F0:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B0A8F8"))) PPC_WEAK_FUNC(sub_82B0A8F8);
PPC_FUNC_IMPL(__imp__sub_82B0A8F8) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// bge cr6,0x82b0a930
	if (!cr6.lt) goto loc_82B0A930;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x82b0a934
	if (!cr6.gt) goto loc_82B0A934;
loc_82B0A930:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82B0A934:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b0a984
	if (cr6.eq) goto loc_82B0A984;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,5852
	ctx.r9.s64 = 5852;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r7,r10,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// divw r30,r7,r9
	ctx.r30.s32 = PPCDivide(ctx.r7.s32, ctx.r9.s32);
	// bne cr6,0x82b0a968
	if (!cr6.eq) goto loc_82B0A968;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b09fd8
	ctx.lr = 0x82B0A968;
	sub_82B09FD8(ctx, base);
loc_82B0A968:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b0a9b4
	if (cr6.eq) goto loc_82B0A9B4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r11,r30,5852
	ctx.r11.s64 = ctx.r30.s64 * 5852;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82b0a9ac
	goto loc_82B0A9AC;
loc_82B0A984:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82b0a99c
	if (!cr6.eq) goto loc_82B0A99C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b09fd8
	ctx.lr = 0x82B0A99C;
	sub_82B09FD8(ctx, base);
loc_82B0A99C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b0a9b4
	if (cr6.eq) goto loc_82B0A9B4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82B0A9AC:
	// li r5,5852
	ctx.r5.s64 = 5852;
	// bl 0x831ce980
	ctx.lr = 0x82B0A9B4;
	sub_831CE980(ctx, base);
loc_82B0A9B4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,5852
	ctx.r11.s64 = ctx.r11.s64 + 5852;
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

__attribute__((alias("__imp__sub_82B0A9D8"))) PPC_WEAK_FUNC(sub_82B0A9D8);
PPC_FUNC_IMPL(__imp__sub_82B0A9D8) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// bge cr6,0x82b0aa10
	if (!cr6.lt) goto loc_82B0AA10;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x82b0aa14
	if (!cr6.gt) goto loc_82B0AA14;
loc_82B0AA10:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82B0AA14:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b0aa64
	if (cr6.eq) goto loc_82B0AA64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,188
	ctx.r9.s64 = 188;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r7,r10,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// divw r30,r7,r9
	ctx.r30.s32 = PPCDivide(ctx.r7.s32, ctx.r9.s32);
	// bne cr6,0x82b0aa48
	if (!cr6.eq) goto loc_82B0AA48;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b0a050
	ctx.lr = 0x82B0AA48;
	sub_82B0A050(ctx, base);
loc_82B0AA48:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r11,r30,188
	ctx.r11.s64 = ctx.r30.s64 * 188;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b0aa94
	if (cr6.eq) goto loc_82B0AA94;
	// b 0x82b0aa8c
	goto loc_82B0AA8C;
loc_82B0AA64:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82b0aa7c
	if (!cr6.eq) goto loc_82B0AA7C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b0a050
	ctx.lr = 0x82B0AA7C;
	sub_82B0A050(ctx, base);
loc_82B0AA7C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b0aa94
	if (cr6.eq) goto loc_82B0AA94;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82B0AA8C:
	// li r5,188
	ctx.r5.s64 = 188;
	// bl 0x831ce980
	ctx.lr = 0x82B0AA94;
	sub_831CE980(ctx, base);
loc_82B0AA94:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,188
	ctx.r11.s64 = ctx.r11.s64 + 188;
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

__attribute__((alias("__imp__sub_82B0AAB8"))) PPC_WEAK_FUNC(sub_82B0AAB8);
PPC_FUNC_IMPL(__imp__sub_82B0AAB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82B0AAC0;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,5852
	ctx.r25.s64 = 5852;
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// divw r11,r11,r25
	ctx.r11.s32 = PPCDivide(ctx.r11.s32, ctx.r25.s32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// ble cr6,0x82b0ab74
	if (!cr6.gt) goto loc_82B0AB74;
loc_82B0AAE8:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble cr6,0x82b0ab98
	if (!cr6.gt) goto loc_82B0AB98;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b097d8
	ctx.lr = 0x82B0AB04;
	sub_82B097D8(ctx, base);
	// srawi r11,r29,1
	xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r10,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r27,84(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r9,r27,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r27.s64;
	// subf r8,r30,r26
	ctx.r8.s64 = ctx.r26.s64 - ctx.r30.s64;
	// divw r7,r9,r25
	ctx.r7.s32 = PPCDivide(ctx.r9.s32, ctx.r25.s32);
	// divw r6,r8,r25
	ctx.r6.s32 = PPCDivide(ctx.r8.s32, ctx.r25.s32);
	// cmpw cr6,r6,r7
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, xer);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bge cr6,0x82b0ab54
	if (!cr6.lt) goto loc_82B0AB54;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b0aab8
	ctx.lr = 0x82B0AB4C;
	sub_82B0AAB8(ctx, base);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// b 0x82b0ab64
	goto loc_82B0AB64;
loc_82B0AB54:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82b0aab8
	ctx.lr = 0x82B0AB60;
	sub_82B0AAB8(ctx, base);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_82B0AB64:
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// divw r11,r11,r25
	ctx.r11.s32 = PPCDivide(ctx.r11.s32, ctx.r25.s32);
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// bgt cr6,0x82b0aae8
	if (cr6.gt) goto loc_82B0AAE8;
loc_82B0AB74:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// ble cr6,0x82b0ab90
	if (!cr6.gt) goto loc_82B0AB90;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b09590
	ctx.lr = 0x82B0AB90;
	sub_82B09590(ctx, base);
loc_82B0AB90:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82B0AB98:
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// ble cr6,0x82b0ab74
	if (!cr6.gt) goto loc_82B0AB74;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// ble cr6,0x82b0abc0
	if (!cr6.gt) goto loc_82B0ABC0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b09488
	ctx.lr = 0x82B0ABC0;
	sub_82B09488(ctx, base);
loc_82B0ABC0:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b09e48
	ctx.lr = 0x82B0ABD0;
	sub_82B09E48(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B0ABD8"))) PPC_WEAK_FUNC(sub_82B0ABD8);
PPC_FUNC_IMPL(__imp__sub_82B0ABD8) {
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
	// bl 0x82c0fbb8
	ctx.lr = 0x82B0ABF4;
	sub_82C0FBB8(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,13672
	ctx.r8.s64 = ctx.r10.s64 + 13672;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// bl 0x82d1a9a8
	ctx.lr = 0x82B0AC40;
	sub_82D1A9A8(ctx, base);
	// lis r6,-31777
	ctx.r6.s64 = -2082537472;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r6,-3160
	ctx.r30.s64 = ctx.r6.s64 + -3160;
	// lwz r4,-3160(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + -3160);
	// bl 0x82d20ae0
	ctx.lr = 0x82B0AC54;
	sub_82D20AE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82d23390
	ctx.lr = 0x82B0AC64;
	sub_82D23390(ctx, base);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82d462e8
	ctx.lr = 0x82B0AC6C;
	sub_82D462E8(ctx, base);
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

__attribute__((alias("__imp__sub_82B0AC88"))) PPC_WEAK_FUNC(sub_82B0AC88);
PPC_FUNC_IMPL(__imp__sub_82B0AC88) {
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
	// bl 0x82b0a1e8
	ctx.lr = 0x82B0ACA8;
	sub_82B0A1E8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b0acc0
	if (cr6.eq) goto loc_82B0ACC0;
	// bl 0x82416268
	ctx.lr = 0x82B0ACBC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B0ACC0:
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

__attribute__((alias("__imp__sub_82B0ACD8"))) PPC_WEAK_FUNC(sub_82B0ACD8);
PPC_FUNC_IMPL(__imp__sub_82B0ACD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82B0ACE0;
	__savegprlr_22(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B0ACEC;
	sub_831156E8(ctx, base);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// li r27,5852
	ctx.r27.s64 = 5852;
	// lwz r9,116(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// addi r29,r31,112
	ctx.r29.s64 = ctx.r31.s64 + 112;
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// divw r7,r8,r27
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r27.s32);
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82b0ad20
	if (cr6.gt) goto loc_82B0AD20;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B0AD20;
	sub_831CC188(ctx, base);
loc_82B0AD20:
	// mulli r10,r10,5852
	ctx.r10.s64 = ctx.r10.s64 * 5852;
	// ldx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x8311bf98
	ctx.lr = 0x82B0AD2C;
	sub_8311BF98(ctx, base);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// divw r7,r8,r27
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r27.s32);
	// cmplw cr6,r7,r11
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82b0ad58
	if (cr6.gt) goto loc_82B0AD58;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B0AD58;
	sub_831CC188(ctx, base);
loc_82B0AD58:
	// mulli r9,r11,5852
	ctx.r9.s64 = ctx.r11.s64 * 5852;
	// li r23,0
	ctx.r23.s64 = 0;
	// lis r8,-21846
	ctx.r8.s64 = -1431699456;
	// add r22,r9,r10
	ctx.r22.u64 = ctx.r9.u64 + ctx.r10.u64;
	// ori r8,r8,43691
	ctx.r8.u64 = ctx.r8.u64 | 43691;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x82b0ad90
	if (!cr6.gt) goto loc_82B0AD90;
	// mulhwu r10,r11,r8
	ctx.r10.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r8.u32)) >> 32;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r10,r7,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r7.s64;
loc_82B0AD90:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r26,r11,13312
	ctx.r26.s64 = ctx.r11.s64 + 13312;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// li r30,108
	ctx.r30.s64 = 108;
	// addi r7,r26,-132
	ctx.r7.s64 = ctx.r26.s64 + -132;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r6,80(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwzx r9,r9,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// subf r5,r10,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r10.s64;
	// divw. r4,r5,r30
	ctx.r4.s32 = PPCDivide(ctx.r5.s32, ctx.r30.s32);
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x82b0adcc
	if (!cr0.eq) goto loc_82B0ADCC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B0ADCC;
	sub_831CC188(ctx, base);
loc_82B0ADCC:
	// stw r9,84(r10)
	PPC_STORE_U32(ctx.r10.u32 + 84, ctx.r9.u32);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r9,76(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// subf r10,r9,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw. r7,r10,r30
	ctx.r7.s32 = PPCDivide(ctx.r10.s32, ctx.r30.s32);
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x82b0adf4
	if (!cr0.eq) goto loc_82B0ADF4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B0ADF4;
	sub_831CC188(ctx, base);
loc_82B0ADF4:
	// stw r23,88(r9)
	PPC_STORE_U32(ctx.r9.u32 + 88, ctx.r23.u32);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x82b0ae20
	if (!cr6.gt) goto loc_82B0AE20;
	// mulhwu r10,r11,r8
	ctx.r10.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r8.u32)) >> 32;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r10,r8,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r8.s64;
loc_82B0AE20:
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r26,-156
	ctx.r9.s64 = ctx.r26.s64 + -156;
	// addi r11,r11,76
	ctx.r11.s64 = ctx.r11.s64 + 76;
	// lwzx r9,r10,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// divw. r6,r7,r30
	ctx.r6.s32 = PPCDivide(ctx.r7.s32, ctx.r30.s32);
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne 0x82b0ae54
	if (!cr0.eq) goto loc_82B0AE54;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B0AE54;
	sub_831CC188(ctx, base);
loc_82B0AE54:
	// stw r9,92(r10)
	PPC_STORE_U32(ctx.r10.u32 + 92, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw. r8,r9,r30
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r30.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82b0ae78
	if (!cr0.eq) goto loc_82B0AE78;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B0AE78;
	sub_831CC188(ctx, base);
loc_82B0AE78:
	// li r28,1
	ctx.r28.s64 = 1;
	// stb r28,99(r11)
	PPC_STORE_U8(ctx.r11.u32 + 99, ctx.r28.u8);
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r11,76(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// lwz r10,80(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw. r8,r9,r30
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r30.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82b0aea4
	if (!cr0.eq) goto loc_82B0AEA4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B0AEA4;
	sub_831CC188(ctx, base);
loc_82B0AEA4:
	// stw r23,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r23.u32);
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r11,76(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// lwz r10,80(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw. r8,r9,r30
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r30.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82b0aecc
	if (!cr0.eq) goto loc_82B0AECC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B0AECC;
	sub_831CC188(ctx, base);
loc_82B0AECC:
	// stw r23,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r23.u32);
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r11,76(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// lwz r10,80(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw. r8,r9,r30
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r30.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82b0aef4
	if (!cr0.eq) goto loc_82B0AEF4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B0AEF4;
	sub_831CC188(ctx, base);
loc_82B0AEF4:
	// stb r23,96(r11)
	PPC_STORE_U8(ctx.r11.u32 + 96, ctx.r23.u8);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw r7,r8,r27
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r27.s32);
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82b0af20
	if (cr6.gt) goto loc_82B0AF20;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B0AF20;
	sub_831CC188(ctx, base);
loc_82B0AF20:
	// mulli r8,r10,5852
	ctx.r8.s64 = ctx.r10.s64 * 5852;
	// ldx r8,r8,r9
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r8.u32 + ctx.r9.u32);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r11,r11,-3112
	ctx.r11.s64 = ctx.r11.s64 + -3112;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82b0af50
	if (!cr6.eq) goto loc_82B0AF50;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r8,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// b 0x82b0af78
	goto loc_82B0AF78;
loc_82B0AF50:
	// lhz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lhz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// bne cr6,0x82b0af70
	if (!cr6.eq) goto loc_82B0AF70;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// beq cr6,0x82b0af74
	if (cr6.eq) goto loc_82B0AF74;
loc_82B0AF70:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82B0AF74:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82B0AF78:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b0b084
	if (!cr6.eq) goto loc_82B0B084;
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82b0af98
	if (cr6.gt) goto loc_82B0AF98;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B0AF98;
	sub_831CC188(ctx, base);
loc_82B0AF98:
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// mulli r8,r10,5852
	ctx.r8.s64 = ctx.r10.s64 * 5852;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r7,80(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// ldx r11,r8,r9
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + ctx.r9.u32);
	// subf r6,r10,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r10.s64;
	// divw. r5,r6,r30
	ctx.r5.s32 = PPCDivide(ctx.r6.s32, ctx.r30.s32);
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne 0x82b0afc4
	if (!cr0.eq) goto loc_82B0AFC4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B0AFC4;
	sub_831CC188(ctx, base);
loc_82B0AFC4:
	// std r11,60(r10)
	PPC_STORE_U64(ctx.r10.u32 + 60, ctx.r11.u64);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r7,r8,r27
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r27.s32);
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82b0aff0
	if (cr6.gt) goto loc_82B0AFF0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B0AFF0;
	sub_831CC188(ctx, base);
loc_82B0AFF0:
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// mulli r9,r9,5852
	ctx.r9.s64 = ctx.r9.s64 * 5852;
	// lwz r8,80(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// subf r6,r10,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r10.s64;
	// divw. r5,r6,r30
	ctx.r5.s32 = PPCDivide(ctx.r6.s32, ctx.r30.s32);
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// lhz r4,16(r7)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r7.u32 + 16);
	// rlwinm r11,r4,30,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0xFF;
	// bne 0x82b0b024
	if (!cr0.eq) goto loc_82B0B024;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B0B024;
	sub_831CC188(ctx, base);
loc_82B0B024:
	// stw r11,80(r10)
	PPC_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r7,r8,r27
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r27.s32);
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82b0b050
	if (cr6.gt) goto loc_82B0B050;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B0B050;
	sub_831CC188(ctx, base);
loc_82B0B050:
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// mulli r9,r9,5852
	ctx.r9.s64 = ctx.r9.s64 * 5852;
	// lwz r8,80(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// subf r6,r10,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r10.s64;
	// divw. r5,r6,r30
	ctx.r5.s32 = PPCDivide(ctx.r6.s32, ctx.r30.s32);
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// bne 0x82b0b080
	if (!cr0.eq) goto loc_82B0B080;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B0B080;
	sub_831CC188(ctx, base);
loc_82B0B080:
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
loc_82B0B084:
	// li r11,12
	ctx.r11.s64 = 12;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83120738
	ctx.lr = 0x82B0B09C;
	sub_83120738(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw. r8,r9,r30
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r30.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x82b0b0d4
	if (!cr6.eq) goto loc_82B0B0D4;
	// bne 0x82b0b0cc
	if (!cr0.eq) goto loc_82B0B0CC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B0B0CC;
	sub_831CC188(ctx, base);
loc_82B0B0CC:
	// stb r28,72(r10)
	PPC_STORE_U8(ctx.r10.u32 + 72, ctx.r28.u8);
	// b 0x82b0b0e8
	goto loc_82B0B0E8;
loc_82B0B0D4:
	// bne 0x82b0b0e4
	if (!cr0.eq) goto loc_82B0B0E4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B0B0E4;
	sub_831CC188(ctx, base);
loc_82B0B0E4:
	// stb r23,72(r10)
	PPC_STORE_U8(ctx.r10.u32 + 72, ctx.r23.u8);
loc_82B0B0E8:
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r11,76(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// lwz r10,80(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw. r8,r9,r30
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r30.s32);
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82b0b10c
	if (!cr0.eq) goto loc_82B0B10C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B0B10C;
	sub_831CC188(ctx, base);
loc_82B0B10C:
	// stb r23,101(r11)
	PPC_STORE_U8(ctx.r11.u32 + 101, ctx.r23.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// bl 0x82bff800
	ctx.lr = 0x82B0B11C;
	sub_82BFF800(ctx, base);
	// lhz r11,16(r22)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r22.u32 + 16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r10,r11,30,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0xFF;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82b0a6e0
	ctx.lr = 0x82B0B134;
	sub_82B0A6E0(ctx, base);
	// li r24,15
	ctx.r24.s64 = 15;
	// stw r23,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r23.u32);
	// addi r4,r26,-746
	ctx.r4.s64 = ctx.r26.s64 + -746;
	// stw r24,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r24.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r23,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r23.u8);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8259cc28
	ctx.lr = 0x82B0B154;
	sub_8259CC28(ctx, base);
	// stw r24,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// stw r23,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r23.u32);
	// addi r4,r26,-745
	ctx.r4.s64 = ctx.r26.s64 + -745;
	// stb r23,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r23.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259cc28
	ctx.lr = 0x82B0B170;
	sub_8259CC28(ctx, base);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// divw r9,r8,r27
	ctx.r9.s32 = PPCDivide(ctx.r8.s32, ctx.r27.s32);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82b0b198
	if (cr6.gt) goto loc_82B0B198;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B0B198;
	sub_831CC188(ctx, base);
loc_82B0B198:
	// mulli r8,r11,5852
	ctx.r8.s64 = ctx.r11.s64 * 5852;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82b0b204
	if (cr6.eq) goto loc_82B0B204;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82b0b1c0
	if (cr6.gt) goto loc_82B0B1C0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B0B1C0;
	sub_831CC188(ctx, base);
loc_82B0B1C0:
	// mulli r11,r11,5852
	ctx.r11.s64 = ctx.r11.s64 * 5852;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x82d04220
	ctx.lr = 0x82B0B1D4;
	sub_82D04220(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82b0b1e8
	if (!cr6.lt) goto loc_82B0B1E8;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
loc_82B0B1E8:
	// addi r29,r25,56
	ctx.r29.s64 = ctx.r25.s64 + 56;
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// ori r4,r4,629
	ctx.r4.u64 = ctx.r4.u64 | 629;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82d042a8
	ctx.lr = 0x82B0B200;
	sub_82D042A8(ctx, base);
	// b 0x82b0b234
	goto loc_82B0B234;
loc_82B0B204:
	// addi r29,r25,56
	ctx.r29.s64 = ctx.r25.s64 + 56;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82B0B20C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b0b20c
	if (!cr6.eq) goto loc_82B0B20C;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82B0B234;
	sub_8259CC28(ctx, base);
loc_82B0B234:
	// stw r24,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r24.u32);
	// addi r4,r26,-60
	ctx.r4.s64 = ctx.r26.s64 + -60;
	// stw r23,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r23.u32);
	// li r5,10
	ctx.r5.s64 = 10;
	// stb r23,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r23.u8);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8259cc28
	ctx.lr = 0x82B0B250;
	sub_8259CC28(ctx, base);
	// stw r24,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r24.u32);
	// stw r23,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r23.u32);
	// addi r4,r26,-48
	ctx.r4.s64 = ctx.r26.s64 + -48;
	// stb r23,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r23.u8);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cc28
	ctx.lr = 0x82B0B26C;
	sub_8259CC28(ctx, base);
	// addi r4,r26,-36
	ctx.r4.s64 = ctx.r26.s64 + -36;
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8259cc28
	ctx.lr = 0x82B0B27C;
	sub_8259CC28(ctx, base);
	// addi r4,r26,-20
	ctx.r4.s64 = ctx.r26.s64 + -20;
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8259cc28
	ctx.lr = 0x82B0B28C;
	sub_8259CC28(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82b0b2a0
	if (!cr6.lt) goto loc_82B0B2A0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
loc_82B0B2A0:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B0B2B8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b0b364
	if (!cr6.eq) goto loc_82B0B364;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// li r31,2
	ctx.r31.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b0b2e4
	if (cr6.lt) goto loc_82B0B2E4;
	// stw r31,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r31.u32);
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82B0B2E4;
	sub_825952B8(ctx, base);
loc_82B0B2E4:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// stw r24,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r24.u32);
	// stw r23,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r23.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r23,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r23.u8);
	// blt cr6,0x82b0b30c
	if (cr6.lt) goto loc_82B0B30C;
	// stw r31,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r31.u32);
	// addi r3,r1,236
	ctx.r3.s64 = ctx.r1.s64 + 236;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x825952b8
	ctx.lr = 0x82B0B30C;
	sub_825952B8(ctx, base);
loc_82B0B30C:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r24,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r24.u32);
	// stw r23,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r23.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r23,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r23.u8);
	// blt cr6,0x82b0b334
	if (cr6.lt) goto loc_82B0B334;
	// stw r31,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r31.u32);
	// addi r3,r1,244
	ctx.r3.s64 = ctx.r1.s64 + 244;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82B0B334;
	sub_825952B8(ctx, base);
loc_82B0B334:
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// stw r24,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// stw r23,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r23.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r23,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r23.u8);
	// blt cr6,0x82b0b6c4
	if (cr6.lt) goto loc_82B0B6C4;
	// stw r31,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r31.u32);
	// addi r3,r1,252
	ctx.r3.s64 = ctx.r1.s64 + 252;
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x825952b8
	ctx.lr = 0x82B0B35C;
	sub_825952B8(ctx, base);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_82B0B364:
	// addi r6,r26,-714
	ctx.r6.s64 = ctx.r26.s64 + -714;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827a8810
	ctx.lr = 0x82B0B37C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// beq cr6,0x82b0b3b8
	if (cr6.eq) goto loc_82B0B3B8;
	// addi r4,r26,-713
	ctx.r4.s64 = ctx.r26.s64 + -713;
	// bl 0x837b0c10
	ctx.lr = 0x82B0B390;
	sub_837B0C10(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82b0b3a4
	if (!cr6.lt) goto loc_82B0B3A4;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
loc_82B0B3A4:
	// lis r4,276
	ctx.r4.s64 = 18087936;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// ori r4,r4,686
	ctx.r4.u64 = ctx.r4.u64 | 686;
	// bl 0x82d042a8
	ctx.lr = 0x82B0B3B4;
	sub_82D042A8(ctx, base);
	// b 0x82b0b3c0
	goto loc_82B0B3C0;
loc_82B0B3B8:
	// addi r4,r26,-683
	ctx.r4.s64 = ctx.r26.s64 + -683;
	// bl 0x837b0c10
	ctx.lr = 0x82B0B3C0;
	sub_837B0C10(ctx, base);
loc_82B0B3C0:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82B0B3D4;
	sub_82D291E0(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x8387e8e0
	ctx.lr = 0x82B0B3DC;
	sub_8387E8E0(ctx, base);
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82b0b3f0
	if (!cr6.lt) goto loc_82B0B3F0;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
loc_82B0B3F0:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B0B408;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b0b43c
	if (!cr6.eq) goto loc_82B0B43C;
loc_82B0B414:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82B0B41C;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x82B0B424;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82B0B42C;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x82B0B434;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_82B0B43C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x837b0c10
	ctx.lr = 0x82B0B448;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82B0B45C;
	sub_82D291E0(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x8387e8e0
	ctx.lr = 0x82B0B464;
	sub_8387E8E0(ctx, base);
	// addi r4,r26,-8
	ctx.r4.s64 = ctx.r26.s64 + -8;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x82d2f098
	ctx.lr = 0x82B0B470;
	sub_82D2F098(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b0b414
	if (cr6.eq) goto loc_82B0B414;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B0B498;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b0b414
	if (cr6.eq) goto loc_82B0B414;
	// lis r4,641
	ctx.r4.s64 = 42008576;
	// ori r4,r4,31
	ctx.r4.u64 = ctx.r4.u64 | 31;
	// bl 0x82d29598
	ctx.lr = 0x82B0B4AC;
	sub_82D29598(ctx, base);
	// addi r29,r31,128
	ctx.r29.s64 = ctx.r31.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b09f90
	ctx.lr = 0x82B0B4B8;
	sub_82B09F90(ctx, base);
	// addi r26,r22,24
	ctx.r26.s64 = ctx.r22.s64 + 24;
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// addi r30,r11,27240
	ctx.r30.s64 = ctx.r11.s64 + 27240;
loc_82B0B4CC:
	// cmplwi cr6,r28,31
	cr6.compare<uint32_t>(ctx.r28.u32, 31, xer);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bge cr6,0x82b0b4dc
	if (!cr6.lt) goto loc_82B0B4DC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_82B0B4DC:
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lhz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// rlwinm r9,r10,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// beq cr6,0x82b0b4f8
	if (cr6.eq) goto loc_82B0B4F8;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// b 0x82b0b524
	goto loc_82B0B524;
loc_82B0B4F8:
	// lbz r8,2(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// rlwinm r9,r10,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// beq cr6,0x82b0b510
	if (cr6.eq) goto loc_82B0B510;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// b 0x82b0b524
	goto loc_82B0B524;
loc_82B0B510:
	// lbz r8,3(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r11,r6,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
loc_82B0B524:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b0b57c
	if (!cr6.eq) goto loc_82B0B57C;
	// lwz r11,180(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 180);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82b0b55c
	if (!cr6.eq) goto loc_82B0B55C;
	// rlwinm r9,r10,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// cmplwi cr6,r9,6
	cr6.compare<uint32_t>(ctx.r9.u32, 6, xer);
	// bne cr6,0x82b0b554
	if (!cr6.eq) goto loc_82B0B554;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r9,30
	cr6.compare<uint32_t>(ctx.r9.u32, 30, xer);
	// beq cr6,0x82b0b57c
	if (cr6.eq) goto loc_82B0B57C;
loc_82B0B554:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82b0b574
	if (cr6.eq) goto loc_82B0B574;
loc_82B0B55C:
	// rlwinm r11,r10,24,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, xer);
	// bne cr6,0x82b0b574
	if (!cr6.eq) goto loc_82B0B574;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,31
	cr6.compare<uint32_t>(ctx.r11.u32, 31, xer);
	// beq cr6,0x82b0b57c
	if (cr6.eq) goto loc_82B0B57C;
loc_82B0B574:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b0a9d8
	ctx.lr = 0x82B0B57C;
	sub_82B0A9D8(ctx, base);
loc_82B0B57C:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,188
	ctx.r27.s64 = ctx.r27.s64 + 188;
	// cmplwi cr6,r28,31
	cr6.compare<uint32_t>(ctx.r28.u32, 31, xer);
	// blt cr6,0x82b0b4cc
	if (cr6.lt) goto loc_82B0B4CC;
	// lwz r4,132(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lis r11,-32080
	ctx.r11.s64 = -2102394880;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r30,188
	ctx.r30.s64 = 188;
	// addi r6,r11,27944
	ctx.r6.s64 = ctx.r11.s64 + 27944;
	// subf r10,r3,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r3.s64;
	// divw r5,r10,r30
	ctx.r5.s32 = PPCDivide(ctx.r10.s32, ctx.r30.s32);
	// bl 0x82b0a0c8
	ctx.lr = 0x82B0B5AC;
	sub_82B0A0C8(ctx, base);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// subf r5,r8,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r8.s64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// divw r5,r5,r30
	ctx.r5.s32 = PPCDivide(ctx.r5.s32, ctx.r30.s32);
	// bl 0x82d20f50
	ctx.lr = 0x82B0B5D0;
	sub_82D20F50(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// bl 0x82d33c10
	ctx.lr = 0x82B0B5DC;
	sub_82D33C10(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b0b62c
	if (cr6.eq) goto loc_82B0B62C;
loc_82B0B5E4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B0B5F0;
	sub_82D33DB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b0b6cc
	if (cr6.eq) goto loc_82B0B6CC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B0B618;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bl 0x82d33c10
	ctx.lr = 0x82B0B624;
	sub_82D33C10(ctx, base);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, xer);
	// blt cr6,0x82b0b5e4
	if (cr6.lt) goto loc_82B0B5E4;
loc_82B0B62C:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// li r31,2
	ctx.r31.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b0b64c
	if (cr6.lt) goto loc_82B0B64C;
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82B0B64C;
	sub_825952B8(ctx, base);
loc_82B0B64C:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// stw r24,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r24.u32);
	// stw r23,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r23.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r23,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r23.u8);
	// blt cr6,0x82b0b674
	if (cr6.lt) goto loc_82B0B674;
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r31.u32);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x825952b8
	ctx.lr = 0x82B0B674;
	sub_825952B8(ctx, base);
loc_82B0B674:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r24,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r24.u32);
	// stw r23,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r23.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r23,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r23.u8);
	// blt cr6,0x82b0b69c
	if (cr6.lt) goto loc_82B0B69C;
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r31.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82B0B69C;
	sub_825952B8(ctx, base);
loc_82B0B69C:
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// stw r24,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// stw r23,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r23.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r23,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r23.u8);
	// blt cr6,0x82b0b6c4
	if (cr6.lt) goto loc_82B0B6C4;
	// stw r31,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r31.u32);
	// addi r3,r1,228
	ctx.r3.s64 = ctx.r1.s64 + 228;
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x825952b8
	ctx.lr = 0x82B0B6C4;
	sub_825952B8(ctx, base);
loc_82B0B6C4:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
loc_82B0B6CC:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// li r31,2
	ctx.r31.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b0b6ec
	if (cr6.lt) goto loc_82B0B6EC;
	// stw r31,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r31.u32);
	// addi r3,r1,260
	ctx.r3.s64 = ctx.r1.s64 + 260;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x825952b8
	ctx.lr = 0x82B0B6EC;
	sub_825952B8(ctx, base);
loc_82B0B6EC:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// stw r24,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r24.u32);
	// stw r23,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r23.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r23,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r23.u8);
	// blt cr6,0x82b0b714
	if (cr6.lt) goto loc_82B0B714;
	// stw r31,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r31.u32);
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x825952b8
	ctx.lr = 0x82B0B714;
	sub_825952B8(ctx, base);
loc_82B0B714:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r24,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r24.u32);
	// stw r23,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r23.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r23,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r23.u8);
	// blt cr6,0x82b0b73c
	if (cr6.lt) goto loc_82B0B73C;
	// stw r31,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r31.u32);
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x825952b8
	ctx.lr = 0x82B0B73C;
	sub_825952B8(ctx, base);
loc_82B0B73C:
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// stw r24,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// stw r23,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r23.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r23,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r23.u8);
	// blt cr6,0x82b0b6c4
	if (cr6.lt) goto loc_82B0B6C4;
	// stw r31,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r31.u32);
	// addi r3,r1,220
	ctx.r3.s64 = ctx.r1.s64 + 220;
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x825952b8
	ctx.lr = 0x82B0B764;
	sub_825952B8(ctx, base);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B0B76C"))) PPC_WEAK_FUNC(sub_82B0B76C);
PPC_FUNC_IMPL(__imp__sub_82B0B76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B0B770"))) PPC_WEAK_FUNC(sub_82B0B770);
PPC_FUNC_IMPL(__imp__sub_82B0B770) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// blt cr6,0x82b0b808
	if (cr6.lt) goto loc_82B0B808;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// addi r4,r10,13440
	ctx.r4.s64 = ctx.r10.s64 + 13440;
	// lwz r9,100(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B0B7B4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d3d908
	ctx.lr = 0x82B0B7C0;
	sub_82D3D908(ctx, base);
	// lwz r7,96(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addic. r11,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r11.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// bge 0x82b0b7dc
	if (!cr0.lt) goto loc_82B0B7DC;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_82B0B7DC:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x82d3d968
	ctx.lr = 0x82B0B7F0;
	sub_82D3D968(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82B0B800;
	sub_82D2AEC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b0acd8
	ctx.lr = 0x82B0B808;
	sub_82B0ACD8(ctx, base);
loc_82B0B808:
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

__attribute__((alias("__imp__sub_82B0B820"))) PPC_WEAK_FUNC(sub_82B0B820);
PPC_FUNC_IMPL(__imp__sub_82B0B820) {
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
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// blt cr6,0x82b0b8b8
	if (cr6.lt) goto loc_82B0B8B8;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// addi r4,r10,13452
	ctx.r4.s64 = ctx.r10.s64 + 13452;
	// lwz r9,100(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B0B864;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d3d8a8
	ctx.lr = 0x82B0B870;
	sub_82D3D8A8(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// cmpw cr6,r11,r5
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, xer);
	// blt cr6,0x82b0b890
	if (cr6.lt) goto loc_82B0B890;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_82B0B890:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x82d3d968
	ctx.lr = 0x82B0B8A0;
	sub_82D3D968(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82B0B8B0;
	sub_82D2AEC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b0acd8
	ctx.lr = 0x82B0B8B8;
	sub_82B0ACD8(ctx, base);
loc_82B0B8B8:
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

__attribute__((alias("__imp__sub_82B0B8D0"))) PPC_WEAK_FUNC(sub_82B0B8D0);
PPC_FUNC_IMPL(__imp__sub_82B0B8D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x82B0B8D8;
	__savegprlr_14(ctx, base);
	// stwu r1,-704(r1)
	ea = -704 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,724(r1)
	PPC_STORE_U32(ctx.r1.u32 + 724, ctx.r3.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82b0c088
	if (cr6.eq) goto loc_82B0C088;
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// li r28,188
	ctx.r28.s64 = 188;
	// lwz r10,132(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// addi r31,r3,128
	ctx.r31.s64 = ctx.r3.s64 + 128;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r28
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r28.s32);
	// cmplw cr6,r5,r8
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, xer);
	// li r5,2
	ctx.r5.s64 = 2;
	// blt cr6,0x82b0b928
	if (cr6.lt) goto loc_82B0B928;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2aec8
	ctx.lr = 0x82B0B920;
	sub_82D2AEC8(ctx, base);
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_82B0B928:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d2aec8
	ctx.lr = 0x82B0B930;
	sub_82D2AEC8(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82B0B934;
	sub_831156E8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r15,48(r3)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r28
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r28.s32);
	// cmplw cr6,r8,r30
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, xer);
	// bgt cr6,0x82b0b95c
	if (cr6.gt) goto loc_82B0B95C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B0B95C;
	sub_831CC188(ctx, base);
loc_82B0B95C:
	// mulli r10,r30,188
	ctx.r10.s64 = ctx.r30.s64 * 188;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// li r5,188
	ctx.r5.s64 = 188;
	// bl 0x831ce980
	ctx.lr = 0x82B0B970;
	sub_831CE980(ctx, base);
	// addi r3,r29,100
	ctx.r3.s64 = ctx.r29.s64 + 100;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r3,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r3.u32);
	// addi r11,r11,12701
	ctx.r11.s64 = ctx.r11.s64 + 12701;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,783
	ctx.r4.s64 = ctx.r11.s64 + 783;
	// stw r11,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// lwz r28,352(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// rlwinm r29,r28,16,16,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 16) & 0xFFFF;
	// bctrl 
	ctx.lr = 0x82B0B9A0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b0c088
	if (cr6.eq) goto loc_82B0C088;
	// lwz r11,532(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 532);
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r14,15
	ctx.r14.s64 = 15;
	// ori r27,r10,65535
	ctx.r27.u64 = ctx.r10.u64 | 65535;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82b0ba3c
	if (!cr6.eq) goto loc_82B0BA3C;
	// li r11,783
	ctx.r11.s64 = 783;
	// addi r4,r1,216
	ctx.r4.s64 = ctx.r1.s64 + 216;
	// rlwimi r28,r11,1,16,31
	ctx.r28.u64 = (__builtin_rotateleft32(ctx.r11.u32, 1) & 0xFFFF) | (ctx.r28.u64 & 0xFFFFFFFFFFFF0000);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// stw r28,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r28.u32);
	// bl 0x82acebe8
	ctx.lr = 0x82B0B9E0;
	sub_82ACEBE8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b0b9f8
	if (cr6.eq) goto loc_82B0B9F8;
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// add r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 + ctx.r27.u64;
	// clrlwi r29,r10,16
	ctx.r29.u64 = ctx.r10.u32 & 0xFFFF;
loc_82B0B9F8:
	// stw r14,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r14.u32);
	// clrlwi r5,r29,16
	ctx.r5.u64 = ctx.r29.u32 & 0xFFFF;
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// addi r6,r5,1
	ctx.r6.s64 = ctx.r5.s64 + 1;
	// ori r4,r4,369
	ctx.r4.u64 = ctx.r4.u64 | 369;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82d042a8
	ctx.lr = 0x82B0BA1C;
	sub_82D042A8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82B0BA30;
	sub_82D291E0(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x8387e8e0
	ctx.lr = 0x82B0BA38;
	sub_8387E8E0(ctx, base);
	// b 0x82b0ba48
	goto loc_82B0BA48;
loc_82B0BA3C:
	// clrldi r4,r29,48
	ctx.r4.u64 = ctx.r29.u64 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d294d0
	ctx.lr = 0x82B0BA48;
	sub_82D294D0(ctx, base);
loc_82B0BA48:
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r9,3
	ctx.r9.s64 = 196608;
	// lis r24,-31777
	ctx.r24.s64 = -2082537472;
	// lwz r11,536(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 536);
	// oris r8,r10,65532
	ctx.r8.u64 = ctx.r10.u64 | 4294705152;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// ori r23,r9,65535
	ctx.r23.u64 = ctx.r9.u64 | 65535;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// rlwinm r4,r11,27,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7F;
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// or r6,r8,r23
	ctx.r6.u64 = ctx.r8.u64 | ctx.r23.u64;
	// sth r27,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r27.u16);
	// lwz r10,-3064(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + -3064);
	// rlwinm r7,r11,10,22,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x3FF;
	// rlwinm r5,r11,20,22,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x3FF;
	// stw r4,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// rlwimi r6,r10,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r20,6
	ctx.r20.s64 = 6;
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// rlwimi r6,r10,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r5,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r20,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r20.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// bl 0x82bb6500
	ctx.lr = 0x82B0BABC;
	sub_82BB6500(ctx, base);
	// li r19,5
	ctx.r19.s64 = 5;
	// addi r30,r1,484
	ctx.r30.s64 = ctx.r1.s64 + 484;
	// mr r28,r19
	ctx.r28.u64 = ctx.r19.u64;
	// li r25,16
	ctx.r25.s64 = 16;
	// li r22,2
	ctx.r22.s64 = 2;
	// li r29,1
	ctx.r29.s64 = 1;
	// li r26,3
	ctx.r26.s64 = 3;
	// li r16,14
	ctx.r16.s64 = 14;
loc_82B0BADC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82b0bb84
	if (cr6.eq) goto loc_82B0BB84;
	// lwz r10,-4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// sth r27,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r27.u16);
	// stw r20,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r20.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// bgt cr6,0x82b0bb78
	if (cr6.gt) goto loc_82B0BB78;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82b0bb4c
	if (cr6.eq) goto loc_82B0BB4C;
	// bdz 0x82b0bb58
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82B0BB58;
	// bdz 0x82b0bb40
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82B0BB40;
	// bdz 0x82b0bb78
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82B0BB78;
	// bdz 0x82b0bb64
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82B0BB64;
	// bdz 0x82b0bb4c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82B0BB4C;
	// b 0x82b0bb70
	goto loc_82B0BB70;
loc_82B0BB40:
	// stw r14,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r14.u32);
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// b 0x82b0bb78
	goto loc_82B0BB78;
loc_82B0BB4C:
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// b 0x82b0bb78
	goto loc_82B0BB78;
loc_82B0BB58:
	// stw r20,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r20.u32);
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// b 0x82b0bb78
	goto loc_82B0BB78;
loc_82B0BB64:
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// stw r14,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r14.u32);
	// b 0x82b0bb78
	goto loc_82B0BB78;
loc_82B0BB70:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// stw r16,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r16.u32);
loc_82B0BB78:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82bb6500
	ctx.lr = 0x82B0BB84;
	sub_82BB6500(ctx, base);
loc_82B0BB84:
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// bne 0x82b0badc
	if (!cr0.eq) goto loc_82B0BADC;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// addi r11,r1,520
	ctx.r11.s64 = ctx.r1.s64 + 520;
	// li r17,12
	ctx.r17.s64 = 12;
	// li r28,4
	ctx.r28.s64 = 4;
	// li r18,13
	ctx.r18.s64 = 13;
loc_82B0BBA4:
	// lbzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b0bc20
	if (cr6.eq) goto loc_82B0BC20;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(ctx.r30.u32, 1, xer);
	// lwz r10,-3064(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + -3064);
	// oris r9,r11,65532
	ctx.r9.u64 = ctx.r11.u64 | 4294705152;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// or r7,r9,r23
	ctx.r7.u64 = ctx.r9.u64 | ctx.r23.u64;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// sth r27,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r27.u16);
	// rlwimi r7,r10,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// rlwimi r7,r10,0,14,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFC0000);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// blt cr6,0x82b0bc0c
	if (cr6.lt) goto loc_82B0BC0C;
	// cmplwi cr6,r30,4
	cr6.compare<uint32_t>(ctx.r30.u32, 4, xer);
	// bge cr6,0x82b0bc20
	if (!cr6.lt) goto loc_82B0BC20;
	// stw r19,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r19.u32);
	// stw r17,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r17.u32);
	// b 0x82b0bc14
	goto loc_82B0BC14;
loc_82B0BC0C:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// stw r18,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r18.u32);
loc_82B0BC14:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82bb6500
	ctx.lr = 0x82B0BC20;
	sub_82BB6500(ctx, base);
loc_82B0BC20:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r11,r1,520
	ctx.r11.s64 = ctx.r1.s64 + 520;
	// cmplwi cr6,r30,6
	cr6.compare<uint32_t>(ctx.r30.u32, 6, xer);
	// blt cr6,0x82b0bba4
	if (cr6.lt) goto loc_82B0BBA4;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// addi r11,r1,526
	ctx.r11.s64 = ctx.r1.s64 + 526;
	// li r21,10
	ctx.r21.s64 = 10;
	// li r22,7
	ctx.r22.s64 = 7;
loc_82B0BC40:
	// lbzx r30,r29,r11
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82b0bcd0
	if (cr6.eq) goto loc_82B0BCD0;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,-3064(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + -3064);
	// oris r9,r11,65532
	ctx.r9.u64 = ctx.r11.u64 | 4294705152;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// or r7,r9,r23
	ctx.r7.u64 = ctx.r9.u64 | ctx.r23.u64;
	// sth r27,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r27.u16);
	// stw r20,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r20.u32);
	// rlwimi r7,r10,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// rlwimi r7,r10,0,14,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFC0000);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// bl 0x831a75e8
	ctx.lr = 0x82B0BC94;
	sub_831A75E8(ctx, base);
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// bne cr6,0x82b0bca8
	if (!cr6.eq) goto loc_82B0BCA8;
	// stw r21,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r21.u32);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// b 0x82b0bcc0
	goto loc_82B0BCC0;
loc_82B0BCA8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831a75e8
	ctx.lr = 0x82B0BCB0;
	sub_831A75E8(ctx, base);
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, xer);
	// bne cr6,0x82b0bcd0
	if (!cr6.eq) goto loc_82B0BCD0;
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// stw r19,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
loc_82B0BCC0:
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82bb6500
	ctx.lr = 0x82B0BCD0;
	sub_82BB6500(ctx, base);
loc_82B0BCD0:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r11,r1,526
	ctx.r11.s64 = ctx.r1.s64 + 526;
	// cmplwi cr6,r29,3
	cr6.compare<uint32_t>(ctx.r29.u32, 3, xer);
	// blt cr6,0x82b0bc40
	if (cr6.lt) goto loc_82B0BC40;
	// addi r30,r1,361
	ctx.r30.s64 = ctx.r1.s64 + 361;
	// mr r26,r14
	ctx.r26.u64 = ctx.r14.u64;
	// li r27,8
	ctx.r27.s64 = 8;
	// li r28,11
	ctx.r28.s64 = 11;
	// li r29,9
	ctx.r29.s64 = 9;
loc_82B0BCF4:
	// lhz r4,-3(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + -3);
	// cmplwi cr6,r4,65535
	cr6.compare<uint32_t>(ctx.r4.u32, 65535, xer);
	// beq cr6,0x82b0be1c
	if (cr6.eq) goto loc_82B0BE1C;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// lwz r10,-3064(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + -3064);
	// oris r9,r11,65532
	ctx.r9.u64 = ctx.r11.u64 | 4294705152;
	// sth r4,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r4.u16);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// or r7,r9,r23
	ctx.r7.u64 = ctx.r9.u64 | ctx.r23.u64;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// stw r20,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r20.u32);
	// rlwimi r7,r10,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// rlwimi r7,r10,0,14,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFC0000);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// bl 0x8311c338
	ctx.lr = 0x82B0BD48;
	sub_8311C338(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r3,r1,180
	ctx.r3.s64 = ctx.r1.s64 + 180;
	// lwz r5,88(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 88);
	// stw r5,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r5.u32);
	// bl 0x8316f500
	ctx.lr = 0x82B0BD5C;
	sub_8316F500(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// lbz r10,-1(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + -1);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82b0be00
	if (cr6.eq) goto loc_82B0BE00;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b0bd88
	if (cr6.eq) goto loc_82B0BD88;
	// stw r16,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r16.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82bb6500
	ctx.lr = 0x82B0BD88;
	sub_82BB6500(ctx, base);
loc_82B0BD88:
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b0bda8
	if (cr6.eq) goto loc_82B0BDA8;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82bb6500
	ctx.lr = 0x82B0BDA8;
	sub_82BB6500(ctx, base);
loc_82B0BDA8:
	// lbz r10,1(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b0bdc8
	if (cr6.eq) goto loc_82B0BDC8;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82bb6500
	ctx.lr = 0x82B0BDC8;
	sub_82BB6500(ctx, base);
loc_82B0BDC8:
	// lbz r10,2(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b0bde8
	if (cr6.eq) goto loc_82B0BDE8;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82bb6500
	ctx.lr = 0x82B0BDE8;
	sub_82BB6500(ctx, base);
loc_82B0BDE8:
	// lbz r10,3(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b0be1c
	if (cr6.eq) goto loc_82B0BE1C;
	// stw r17,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r17.u32);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// b 0x82b0be10
	goto loc_82B0BE10;
loc_82B0BE00:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b0be1c
	if (cr6.eq) goto loc_82B0BE1C;
	// stw r18,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r18.u32);
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
loc_82B0BE10:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82bb6500
	ctx.lr = 0x82B0BE1C;
	sub_82BB6500(ctx, base);
loc_82B0BE1C:
	// addic. r26,r26,-1
	xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	cr0.compare<int32_t>(ctx.r26.s32, 0, xer);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// bne 0x82b0bcf4
	if (!cr0.eq) goto loc_82B0BCF4;
	// lwz r25,128(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lis r11,-32035
	ctx.r11.s64 = -2099445760;
	// lwz r30,132(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r26,36
	ctx.r26.s64 = 36;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// subf r10,r25,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r25.s64;
	// addi r6,r11,-24680
	ctx.r6.s64 = ctx.r11.s64 + -24680;
	// divw r5,r10,r26
	ctx.r5.s32 = PPCDivide(ctx.r10.s32, ctx.r26.s32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82b09d28
	ctx.lr = 0x82B0BE50;
	sub_82B09D28(ctx, base);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// cmplw cr6,r25,r30
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r30.u32, xer);
	// beq cr6,0x82b0be98
	if (cr6.eq) goto loc_82B0BE98;
	// lbz r27,116(r1)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r1.u32 + 116);
loc_82B0BE64:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplwi cr6,r28,3
	cr6.compare<uint32_t>(ctx.r28.u32, 3, xer);
	// ble cr6,0x82b0be8c
	if (!cr6.gt) goto loc_82B0BE8C;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r29,36
	ctx.r3.s64 = ctx.r29.s64 + 36;
	// bl 0x82b06d70
	ctx.lr = 0x82B0BE84;
	sub_82B06D70(ctx, base);
	// addi r30,r30,-36
	ctx.r30.s64 = ctx.r30.s64 + -36;
	// b 0x82b0be90
	goto loc_82B0BE90;
loc_82B0BE8C:
	// addi r29,r29,36
	ctx.r29.s64 = ctx.r29.s64 + 36;
loc_82B0BE90:
	// cmplw cr6,r29,r30
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, xer);
	// bne cr6,0x82b0be64
	if (!cr6.eq) goto loc_82B0BE64;
loc_82B0BE98:
	// subf r11,r25,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r25.s64;
	// lis r10,-32080
	ctx.r10.s64 = -2102394880;
	// divw r27,r11,r26
	ctx.r27.s32 = PPCDivide(ctx.r11.s32, ctx.r26.s32);
	// addi r6,r10,27248
	ctx.r6.s64 = ctx.r10.s64 + 27248;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82b09d28
	ctx.lr = 0x82B0BEB8;
	sub_82B09D28(ctx, base);
	// lwz r21,724(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 724);
	// lwz r24,188(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// lwz r22,212(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// li r26,-1
	ctx.r26.s64 = -1;
	// li r23,2
	ctx.r23.s64 = 2;
loc_82B0BED4:
	// stw r14,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r14.u32);
	// addi r4,r24,799
	ctx.r4.s64 = ctx.r24.s64 + 799;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// li r5,14
	ctx.r5.s64 = 14;
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8259cc28
	ctx.lr = 0x82B0BEF0;
	sub_8259CC28(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// clrldi r4,r29,32
	ctx.r4.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x83161f10
	ctx.lr = 0x82B0BF04;
	sub_83161F10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x825a1da8
	ctx.lr = 0x82B0BF18;
	sub_825A1DA8(ctx, base);
	// lwz r11,340(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b0bf34
	if (cr6.lt) goto loc_82B0BF34;
	// stw r23,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r23.u32);
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// lwz r4,320(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// bl 0x825952b8
	ctx.lr = 0x82B0BF34;
	sub_825952B8(ctx, base);
loc_82B0BF34:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stw r14,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r14.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// stb r31,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r31.u8);
	// bge cr6,0x82b0bf54
	if (!cr6.lt) goto loc_82B0BF54;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
loc_82B0BF54:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B0BF68;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b0c090
	if (cr6.eq) goto loc_82B0C090;
	// cmplw cr6,r29,r27
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, xer);
	// blt cr6,0x82b0bfec
	if (cr6.lt) goto loc_82B0BFEC;
	// stw r14,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r14.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8259cc28
	ctx.lr = 0x82B0BF98;
	sub_8259CC28(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82B0BFAC;
	sub_82D291E0(ctx, base);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b0bfc8
	if (cr6.lt) goto loc_82B0BFC8;
	// stw r23,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r23.u32);
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x825952b8
	ctx.lr = 0x82B0BFC8;
	sub_825952B8(ctx, base);
loc_82B0BFC8:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// stw r14,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r14.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// blt cr6,0x82b0c054
	if (cr6.lt) goto loc_82B0C054;
	// stw r23,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r23.u32);
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// b 0x82b0c04c
	goto loc_82B0C04C;
loc_82B0BFEC:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82b0a270
	ctx.lr = 0x82B0BFFC;
	sub_82B0A270(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82d291e0
	ctx.lr = 0x82B0C010;
	sub_82D291E0(ctx, base);
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b0c02c
	if (cr6.lt) goto loc_82B0C02C;
	// stw r23,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r23.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lwz r4,256(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x825952b8
	ctx.lr = 0x82B0C02C;
	sub_825952B8(ctx, base);
loc_82B0C02C:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// stw r14,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r14.u32);
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r31.u8);
	// blt cr6,0x82b0c054
	if (cr6.lt) goto loc_82B0C054;
	// stw r23,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r23.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
loc_82B0C04C:
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x82B0C054;
	sub_825952B8(ctx, base);
loc_82B0C054:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// addi r28,r28,36
	ctx.r28.s64 = ctx.r28.s64 + 36;
	// stw r14,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r14.u32);
	// cmplwi cr6,r29,3
	cr6.compare<uint32_t>(ctx.r29.u32, 3, xer);
	// blt cr6,0x82b0bed4
	if (cr6.lt) goto loc_82B0BED4;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x82b0c088
	if (cr6.eq) goto loc_82B0C088;
	// stw r23,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r23.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x825952b8
	ctx.lr = 0x82B0C088;
	sub_825952B8(ctx, base);
loc_82B0C088:
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_82B0C090:
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b0c0ac
	if (cr6.lt) goto loc_82B0C0AC;
	// stw r23,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r23.u32);
	// addi r3,r1,172
	ctx.r3.s64 = ctx.r1.s64 + 172;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x82B0C0AC;
	sub_825952B8(ctx, base);
loc_82B0C0AC:
	// stw r14,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r14.u32);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// beq cr6,0x82b0c088
	if (cr6.eq) goto loc_82B0C088;
	// stw r23,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r23.u32);
	// addi r3,r1,204
	ctx.r3.s64 = ctx.r1.s64 + 204;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x825952b8
	ctx.lr = 0x82B0C0D0;
	sub_825952B8(ctx, base);
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B0C0D8"))) PPC_WEAK_FUNC(sub_82B0C0D8);
PPC_FUNC_IMPL(__imp__sub_82B0C0D8) {
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
	// blt cr6,0x82b0c100
	if (cr6.lt) goto loc_82B0C100;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b0c104
	goto loc_82B0C104;
loc_82B0C100:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82B0C104:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,144
	ctx.r4.s64 = 144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B0C120;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b0c13c
	if (cr6.eq) goto loc_82B0C13C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82b0abd8
	ctx.lr = 0x82B0C134;
	sub_82B0ABD8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82b0c140
	if (!cr6.eq) goto loc_82B0C140;
loc_82B0C13C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B0C140:
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

__attribute__((alias("__imp__sub_82B0C158"))) PPC_WEAK_FUNC(sub_82B0C158);
PPC_FUNC_IMPL(__imp__sub_82B0C158) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// li r10,5852
	ctx.r10.s64 = 5852;
	// lwz r9,112(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw. r11,r8,r10
	ctx.r11.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// bne 0x82b0c194
	if (!cr0.eq) goto loc_82B0C194;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82b0c204
	goto loc_82B0C204;
loc_82B0C194:
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// ble cr6,0x82b0c1ac
	if (!cr6.gt) goto loc_82B0C1AC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_82B0C1AC:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// addi r4,r10,13224
	ctx.r4.s64 = ctx.r10.s64 + 13224;
	// lwz r9,100(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B0C1CC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b0c1f8
	if (cr6.eq) goto loc_82B0C1F8;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x82d3d968
	ctx.lr = 0x82B0C1E8;
	sub_82D3D968(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82B0C1F8;
	sub_82D2AEC8(ctx, base);
loc_82B0C1F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b0acd8
	ctx.lr = 0x82B0C200;
	sub_82B0ACD8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82B0C204:
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

__attribute__((alias("__imp__sub_82B0C21C"))) PPC_WEAK_FUNC(sub_82B0C21C);
PPC_FUNC_IMPL(__imp__sub_82B0C21C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B0C220"))) PPC_WEAK_FUNC(sub_82B0C220);
PPC_FUNC_IMPL(__imp__sub_82B0C220) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82B0C228;
	__savegprlr_22(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B0C23C;
	sub_831156E8(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// addi r24,r11,13428
	ctx.r24.s64 = ctx.r11.s64 + 13428;
	// bne cr6,0x82b0c3f0
	if (!cr6.eq) goto loc_82B0C3F0;
	// addi r6,r24,-68
	ctx.r6.s64 = ctx.r24.s64 + -68;
	// lwz r5,16(r23)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	// li r7,15
	ctx.r7.s64 = 15;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x827a8810
	ctx.lr = 0x82B0C268;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82b0c3f0
	if (!cr6.eq) goto loc_82B0C3F0;
	// lwz r10,112(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 112);
	// li r9,5852
	ctx.r9.s64 = 5852;
	// lwz r8,116(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 116);
	// addi r30,r28,112
	ctx.r30.s64 = ctx.r28.s64 + 112;
	// lwz r11,96(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// divw r9,r7,r9
	ctx.r9.s32 = PPCDivide(ctx.r7.s32, ctx.r9.s32);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82b0c2a0
	if (cr6.gt) goto loc_82B0C2A0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B0C2A0;
	sub_831CC188(ctx, base);
loc_82B0C2A0:
	// mulli r8,r11,5852
	ctx.r8.s64 = ctx.r11.s64 * 5852;
	// ldx r8,r8,r10
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r8.u32 + ctx.r10.u32);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// bgt cr6,0x82b0c2c0
	if (cr6.gt) goto loc_82B0C2C0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B0C2C0;
	sub_831CC188(ctx, base);
loc_82B0C2C0:
	// mulli r11,r11,5852
	ctx.r11.s64 = ctx.r11.s64 * 5852;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 16);
	// clrlwi r29,r10,30
	ctx.r29.u64 = ctx.r10.u32 & 0x3;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82ad3e80
	ctx.lr = 0x82B0C2E0;
	sub_82AD3E80(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82b0c3c0
	if (cr6.eq) goto loc_82B0C3C0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ad3dd8
	ctx.lr = 0x82B0C2FC;
	sub_82AD3DD8(ctx, base);
	// lhz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 16);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r10,r10,0,18,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// sth r10,16(r3)
	PPC_STORE_U16(ctx.r3.u32 + 16, ctx.r10.u16);
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,116(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 116);
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, xer);
	// beq cr6,0x82b0c3c0
	if (cr6.eq) goto loc_82B0C3C0;
	// lwz r26,92(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lhz r25,88(r1)
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// lbz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
loc_82B0C328:
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// bne cr6,0x82b0c348
	if (!cr6.eq) goto loc_82B0C348;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x82b0c370
	goto loc_82B0C370;
loc_82B0C348:
	// lhz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// clrlwi r10,r25,16
	ctx.r10.u64 = ctx.r25.u32 & 0xFFFF;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bne cr6,0x82b0c368
	if (!cr6.eq) goto loc_82B0C368;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82b0c36c
	if (cr6.eq) goto loc_82B0C36C;
loc_82B0C368:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82B0C36C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82B0C370:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b0c3b0
	if (cr6.eq) goto loc_82B0C3B0;
	// lhz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, xer);
	// bne cr6,0x82b0c3b0
	if (!cr6.eq) goto loc_82B0C3B0;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r31,5852
	ctx.r3.s64 = ctx.r31.s64 + 5852;
	// bl 0x82b082c0
	ctx.lr = 0x82B0C3A0;
	sub_82B082C0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r11,-5852
	ctx.r11.s64 = ctx.r11.s64 + -5852;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// b 0x82b0c3b4
	goto loc_82B0C3B4;
loc_82B0C3B0:
	// addi r31,r31,5852
	ctx.r31.s64 = ctx.r31.s64 + 5852;
loc_82B0C3B4:
	// lwz r11,116(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 116);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x82b0c328
	if (!cr6.eq) goto loc_82B0C328;
loc_82B0C3C0:
	// addi r3,r24,-52
	ctx.r3.s64 = ctx.r24.s64 + -52;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2fa90
	ctx.lr = 0x82B0C3D4;
	sub_82D2FA90(ctx, base);
	// lis r4,249
	ctx.r4.s64 = 16318464;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r4,r4,36
	ctx.r4.u64 = ctx.r4.u64 | 36;
	// bl 0x82d2ada8
	ctx.lr = 0x82B0C3E4;
	sub_82D2ADA8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83103100
	ctx.lr = 0x82B0C3F0;
	sub_83103100(ctx, base);
loc_82B0C3F0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b0c158
	ctx.lr = 0x82B0C3F8;
	sub_82B0C158(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// bne cr6,0x82b0c490
	if (!cr6.eq) goto loc_82B0C490;
	// addi r6,r24,-36
	ctx.r6.s64 = ctx.r24.s64 + -36;
	// lwz r5,16(r23)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	// li r7,8
	ctx.r7.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x827a8810
	ctx.lr = 0x82B0C41C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82b0c434
	if (!cr6.eq) goto loc_82B0C434;
	// addi r5,r24,-24
	ctx.r5.s64 = ctx.r24.s64 + -24;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82B0C434;
	sub_82D20DA8(ctx, base);
loc_82B0C434:
	// addi r6,r24,-16
	ctx.r6.s64 = ctx.r24.s64 + -16;
	// lwz r5,16(r23)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	// li r7,13
	ctx.r7.s64 = 13;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x827a8810
	ctx.lr = 0x82B0C44C;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82b0c490
	if (!cr6.eq) goto loc_82B0C490;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b0c490
	if (!cr6.eq) goto loc_82B0C490;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2fa90
	ctx.lr = 0x82B0C474;
	sub_82D2FA90(ctx, base);
	// lis r4,206
	ctx.r4.s64 = 13500416;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r4,r4,269
	ctx.r4.u64 = ctx.r4.u64 | 269;
	// bl 0x82d2ada8
	ctx.lr = 0x82B0C484;
	sub_82D2ADA8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83103100
	ctx.lr = 0x82B0C490;
	sub_83103100(ctx, base);
loc_82B0C490:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B0C498"))) PPC_WEAK_FUNC(sub_82B0C498);
PPC_FUNC_IMPL(__imp__sub_82B0C498) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82B0C4A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d16ed0
	ctx.lr = 0x82B0C4AC;
	sub_82D16ED0(ctx, base);
	// bl 0x82d15430
	ctx.lr = 0x82B0C4B0;
	sub_82D15430(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b0c4c8
	if (!cr6.eq) goto loc_82B0C4C8;
loc_82B0C4BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82B0C4C8:
	// bl 0x82d34e50
	ctx.lr = 0x82B0C4CC;
	sub_82D34E50(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b0c4e8
	if (cr6.eq) goto loc_82B0C4E8;
	// bl 0x82d34e50
	ctx.lr = 0x82B0C4D8;
	sub_82D34E50(ctx, base);
	// bl 0x82d34d38
	ctx.lr = 0x82B0C4DC;
	sub_82D34D38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b0c4bc
	if (cr6.eq) goto loc_82B0C4BC;
loc_82B0C4E8:
	// bl 0x831156e8
	ctx.lr = 0x82B0C4EC;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r30,48(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x82d462e8
	ctx.lr = 0x82B0C4FC;
	sub_82D462E8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b0c4bc
	if (cr6.eq) goto loc_82B0C4BC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B0C510;
	sub_82D19A78(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,104(r29)
	PPC_STORE_U32(ctx.r29.u32 + 104, ctx.r3.u32);
	// beq cr6,0x82b0c708
	if (cr6.eq) goto loc_82B0C708;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r31,r10,13216
	ctx.r31.s64 = ctx.r10.s64 + 13216;
	// addi r4,r31,-12
	ctx.r4.s64 = ctx.r31.s64 + -12;
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82B0C53C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,104(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,100
	ctx.r3.s64 = ctx.r11.s64 + 100;
	// lwz r8,100(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82B0C558;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b0c4bc
	if (cr6.eq) goto loc_82B0C4BC;
	// lis r4,75
	ctx.r4.s64 = 4915200;
	// ori r4,r4,62
	ctx.r4.u64 = ctx.r4.u64 | 62;
	// bl 0x82d29598
	ctx.lr = 0x82B0C56C;
	sub_82D29598(ctx, base);
	// bl 0x82d26ed8
	ctx.lr = 0x82B0C570;
	sub_82D26ED8(ctx, base);
	// li r4,108
	ctx.r4.s64 = 108;
	// bl 0x82d26b18
	ctx.lr = 0x82B0C578;
	sub_82D26B18(ctx, base);
	// addis r27,r30,214
	ctx.r27.s64 = ctx.r30.s64 + 14024704;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r27,r27,10896
	ctx.r27.s64 = ctx.r27.s64 + 10896;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// addi r31,r11,-3112
	ctx.r31.s64 = ctx.r11.s64 + -3112;
loc_82B0C590:
	// cmplwi cr6,r28,72
	cr6.compare<uint32_t>(ctx.r28.u32, 72, xer);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bge cr6,0x82b0c5a0
	if (!cr6.lt) goto loc_82B0C5A0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82B0C5A0:
	// lhz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 16);
	// ld r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// clrlwi r9,r11,17
	ctx.r9.u64 = ctx.r11.u32 & 0x7FFF;
	// sth r9,16(r4)
	PPC_STORE_U16(ctx.r4.u32 + 16, ctx.r9.u16);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// bne cr6,0x82b0c5d0
	if (!cr6.eq) goto loc_82B0C5D0;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x82b0c5f8
	goto loc_82B0C5F8;
loc_82B0C5D0:
	// lhz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// lhz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmplw cr6,r6,r7
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, xer);
	// bne cr6,0x82b0c5f0
	if (!cr6.eq) goto loc_82B0C5F0;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82b0c5f4
	if (cr6.eq) goto loc_82B0C5F4;
loc_82B0C5F0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82B0C5F4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82B0C5F8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b0c61c
	if (!cr6.eq) goto loc_82B0C61C;
	// rlwinm r11,r9,18,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0x3;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b0c61c
	if (cr6.eq) goto loc_82B0C61C;
	// addi r3,r29,112
	ctx.r3.s64 = ctx.r29.s64 + 112;
	// bl 0x82b0a8f8
	ctx.lr = 0x82B0C61C;
	sub_82B0A8F8(ctx, base);
loc_82B0C61C:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,5852
	ctx.r30.s64 = ctx.r30.s64 + 5852;
	// cmplwi cr6,r28,72
	cr6.compare<uint32_t>(ctx.r28.u32, 72, xer);
	// blt cr6,0x82b0c590
	if (cr6.lt) goto loc_82B0C590;
	// lwz r4,116(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 116);
	// lis r11,-32080
	ctx.r11.s64 = -2102394880;
	// lwz r3,112(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 112);
	// li r31,5852
	ctx.r31.s64 = 5852;
	// addi r6,r11,27848
	ctx.r6.s64 = ctx.r11.s64 + 27848;
	// subf r10,r3,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r3.s64;
	// divw r5,r10,r31
	ctx.r5.s32 = PPCDivide(ctx.r10.s32, ctx.r31.s32);
	// bl 0x82b0aab8
	ctx.lr = 0x82B0C64C;
	sub_82B0AAB8(ctx, base);
	// lwz r9,116(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 116);
	// lwz r8,112(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 112);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// divw r6,r7,r31
	ctx.r6.s32 = PPCDivide(ctx.r7.s32, ctx.r31.s32);
	// cmplwi cr6,r6,1
	cr6.compare<uint32_t>(ctx.r6.u32, 1, xer);
	// ble cr6,0x82b0c684
	if (!cr6.gt) goto loc_82B0C684;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B0C674;
	sub_82D19788(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B0C684;
	sub_82D19788(ctx, base);
loc_82B0C684:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B0C694;
	sub_82D19788(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B0C6A4;
	sub_82D19788(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B0C6B4;
	sub_82D19788(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r5,40
	ctx.r5.s64 = 2621440;
	// li r4,2
	ctx.r4.s64 = 2;
	// ori r5,r5,54
	ctx.r5.u64 = ctx.r5.u64 | 54;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B0C6D4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B0C6E4;
	sub_82D19788(ctx, base);
	// li r4,240
	ctx.r4.s64 = 240;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d1a998
	ctx.lr = 0x82B0C6F0;
	sub_82D1A998(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r9,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r9.u32);
	// bl 0x82b06a00
	ctx.lr = 0x82B0C700;
	sub_82B06A00(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b0c158
	ctx.lr = 0x82B0C708;
	sub_82B0C158(ctx, base);
loc_82B0C708:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B0C714"))) PPC_WEAK_FUNC(sub_82B0C714);
PPC_FUNC_IMPL(__imp__sub_82B0C714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B0C718"))) PPC_WEAK_FUNC(sub_82B0C718);
PPC_FUNC_IMPL(__imp__sub_82B0C718) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// subfc r9,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r7,31
	ctx.r3.u64 = ctx.r7.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B0C730"))) PPC_WEAK_FUNC(sub_82B0C730);
PPC_FUNC_IMPL(__imp__sub_82B0C730) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// srawi r7,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 2;
	// srawi r10,r7,1
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 1;
	// addze. r8,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r8.s64 = temp.s64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble 0x82b0c830
	if (!cr0.gt) goto loc_82B0C830;
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r11,r3
	ctx.r4.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_82B0C75C:
	// addi r5,r5,-2
	ctx.r5.s64 = ctx.r5.s64 + -2;
	// lwzu r6,-4(r4)
	ea = -4 + ctx.r4.u32;
	ctx.r6.u64 = PPC_LOAD_U32(ea);
	ctx.r4.u32 = ea;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmpw cr6,r5,r7
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r7.s32, xer);
	// bge cr6,0x82b0c7b8
	if (!cr6.lt) goto loc_82B0C7B8;
loc_82B0C778:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lwz r31,0(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r9,-4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// cmpw cr6,r31,r9
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r9.s32, xer);
	// bge cr6,0x82b0c794
	if (!cr6.lt) goto loc_82B0C794;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82B0C794:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r31,r10,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r9,r9,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, xer);
	// stwx r9,r31,r3
	PPC_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r9.u32);
	// blt cr6,0x82b0c778
	if (cr6.lt) goto loc_82B0C778;
loc_82B0C7B8:
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, xer);
	// bne cr6,0x82b0c7d8
	if (!cr6.eq) goto loc_82B0C7D8;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r7,-1
	ctx.r10.s64 = ctx.r7.s64 + -1;
	// lwz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// stwx r11,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u32);
loc_82B0C7D8:
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r8,r10
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, xer);
	// srawi r9,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// addze r11,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r11.s64 = temp.s64;
	// bge cr6,0x82b0c820
	if (!cr6.lt) goto loc_82B0C820;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_82B0C7F0:
	// lwzx r9,r9,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// cmpw cr6,r9,r6
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, xer);
	// bge cr6,0x82b0c820
	if (!cr6.lt) goto loc_82B0C820;
	// addi r31,r11,-1
	ctx.r31.s64 = ctx.r11.s64 + -1;
	// rlwinm r30,r10,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r31,r31,1
	xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 1;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addze r11,r31
	temp.s64 = ctx.r31.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r31.u32;
	ctx.r11.s64 = temp.s64;
	// cmpw cr6,r8,r10
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, xer);
	// stwx r9,r30,r3
	PPC_STORE_U32(ctx.r30.u32 + ctx.r3.u32, ctx.r9.u32);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x82b0c7f0
	if (cr6.lt) goto loc_82B0C7F0;
loc_82B0C820:
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stwx r6,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r6.u32);
	// bgt cr6,0x82b0c75c
	if (cr6.gt) goto loc_82B0C75C;
loc_82B0C830:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B0C83C"))) PPC_WEAK_FUNC(sub_82B0C83C);
PPC_FUNC_IMPL(__imp__sub_82B0C83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B0C840"))) PPC_WEAK_FUNC(sub_82B0C840);
PPC_FUNC_IMPL(__imp__sub_82B0C840) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82B0C848;
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
	// beq cr6,0x82b0c9ac
	if (cr6.eq) goto loc_82B0C9AC;
	// addi r29,r3,16
	ctx.r29.s64 = ctx.r3.s64 + 16;
	// cmplw cr6,r29,r4
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r4.u32, xer);
	// beq cr6,0x82b0c9ac
	if (cr6.eq) goto loc_82B0C9AC;
	// addi r26,r29,-16
	ctx.r26.s64 = ctx.r29.s64 + -16;
loc_82B0C870:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r8,8(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r7,12(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// stw r7,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r7.u32);
	// bctrl 
	ctx.lr = 0x82B0C8A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82b0c914
	if (cr6.eq) goto loc_82B0C914;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplw cr6,r28,r29
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r29.u32, xer);
	// beq cr6,0x82b0c8ec
	if (cr6.eq) goto loc_82B0C8EC;
loc_82B0C8C0:
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r7,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r7.u32);
	// bne cr6,0x82b0c8c0
	if (!cr6.eq) goto loc_82B0C8C0;
loc_82B0C8EC:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// stw r9,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r9.u32);
	// stw r8,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r8.u32);
	// stw r7,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r7.u32);
	// b 0x82b0c99c
	goto loc_82B0C99C;
loc_82B0C914:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mtctr r27
	ctr.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// bctrl 
	ctx.lr = 0x82B0C928;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b0c978
	if (cr6.eq) goto loc_82B0C978;
loc_82B0C934:
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
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r8,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r8.u32);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82B0C96C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82b0c934
	if (!cr6.eq) goto loc_82B0C934;
loc_82B0C978:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// stw r8,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r8.u32);
	// stw r7,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r7.u32);
loc_82B0C99C:
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// addi r26,r26,16
	ctx.r26.s64 = ctx.r26.s64 + 16;
	// cmplw cr6,r29,r25
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r25.u32, xer);
	// bne cr6,0x82b0c870
	if (!cr6.eq) goto loc_82B0C870;
loc_82B0C9AC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B0C9B4"))) PPC_WEAK_FUNC(sub_82B0C9B4);
PPC_FUNC_IMPL(__imp__sub_82B0C9B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B0C9B8"))) PPC_WEAK_FUNC(sub_82B0C9B8);
PPC_FUNC_IMPL(__imp__sub_82B0C9B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B0C9C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82b0ca00
	if (cr6.eq) goto loc_82B0CA00;
	// subf r30,r5,r3
	ctx.r30.s64 = ctx.r3.s64 - ctx.r5.s64;
loc_82B0C9D8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82b0c9f0
	if (cr6.eq) goto loc_82B0C9F0;
	// add r4,r30,r31
	ctx.r4.u64 = ctx.r30.u64 + ctx.r31.u64;
	// li r5,2020
	ctx.r5.s64 = 2020;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x82B0C9F0;
	sub_831CE980(ctx, base);
loc_82B0C9F0:
	// addi r31,r31,2020
	ctx.r31.s64 = ctx.r31.s64 + 2020;
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// bne cr6,0x82b0c9d8
	if (!cr6.eq) goto loc_82B0C9D8;
loc_82B0CA00:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B0CA0C"))) PPC_WEAK_FUNC(sub_82B0CA0C);
PPC_FUNC_IMPL(__imp__sub_82B0CA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B0CA10"))) PPC_WEAK_FUNC(sub_82B0CA10);
PPC_FUNC_IMPL(__imp__sub_82B0CA10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B0CA18;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r4,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r4.s64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// srawi r10,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// srawi r9,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r5,-4
	ctx.r5.s64 = ctx.r5.s64 + -4;
	// add r31,r11,r4
	ctx.r31.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x831cab40
	ctx.lr = 0x82B0CA50;
	sub_831CAB40(ctx, base);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// addi r5,r31,4
	ctx.r5.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, xer);
	// bge cr6,0x82b0ca84
	if (!cr6.lt) goto loc_82B0CA84;
loc_82B0CA60:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
	// lwz r8,-4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// bgt cr6,0x82b0ca84
	if (cr6.gt) goto loc_82B0CA84;
	// blt cr6,0x82b0ca84
	if (cr6.lt) goto loc_82B0CA84;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x82b0ca60
	if (cr6.lt) goto loc_82B0CA60;
loc_82B0CA84:
	// cmplw cr6,r5,r29
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r29.u32, xer);
	// bge cr6,0x82b0caac
	if (!cr6.lt) goto loc_82B0CAAC;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82B0CA90:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, xer);
	// bgt cr6,0x82b0caac
	if (cr6.gt) goto loc_82B0CAAC;
	// blt cr6,0x82b0caac
	if (cr6.lt) goto loc_82B0CAAC;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// cmplw cr6,r5,r29
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r29.u32, xer);
	// blt cr6,0x82b0ca90
	if (cr6.lt) goto loc_82B0CA90;
loc_82B0CAAC:
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
loc_82B0CAB4:
	// cmplw cr6,r7,r29
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r29.u32, xer);
	// bge cr6,0x82b0caf0
	if (!cr6.lt) goto loc_82B0CAF0;
loc_82B0CABC:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// bgt cr6,0x82b0cae4
	if (cr6.gt) goto loc_82B0CAE4;
	// blt cr6,0x82b0caf0
	if (cr6.lt) goto loc_82B0CAF0;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stw r8,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r8.u32);
loc_82B0CAE4:
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplw cr6,r7,r29
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r29.u32, xer);
	// blt cr6,0x82b0cabc
	if (cr6.lt) goto loc_82B0CABC;
loc_82B0CAF0:
	// cmplw cr6,r6,r30
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r30.u32, xer);
	// ble cr6,0x82b0cb30
	if (!cr6.gt) goto loc_82B0CB30;
loc_82B0CAF8:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r6,-4
	ctx.r11.s64 = ctx.r6.s64 + -4;
	// lwz r8,-4(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + -4);
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// bgt cr6,0x82b0cb20
	if (cr6.gt) goto loc_82B0CB20;
	// blt cr6,0x82b0cb2c
	if (cr6.lt) goto loc_82B0CB2C;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzu r9,-4(r10)
	ea = -4 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_82B0CB20:
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// blt cr6,0x82b0caf8
	if (cr6.lt) goto loc_82B0CAF8;
loc_82B0CB2C:
	// cmplw cr6,r6,r30
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r30.u32, xer);
loc_82B0CB30:
	// bne cr6,0x82b0cb7c
	if (!cr6.eq) goto loc_82B0CB7C;
	// cmplw cr6,r7,r29
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r29.u32, xer);
	// beq cr6,0x82b0cbd4
	if (cr6.eq) goto loc_82B0CBD4;
	// cmplw cr6,r5,r7
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r7.u32, xer);
	// beq cr6,0x82b0cb54
	if (cr6.eq) goto loc_82B0CB54;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
loc_82B0CB54:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// b 0x82b0cab4
	goto loc_82B0CAB4;
loc_82B0CB7C:
	// addi r11,r6,-4
	ctx.r11.s64 = ctx.r6.s64 + -4;
	// cmplw cr6,r7,r29
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r29.u32, xer);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// bne cr6,0x82b0cbbc
	if (!cr6.eq) goto loc_82B0CBBC;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82b0cba8
	if (cr6.eq) goto loc_82B0CBA8;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_82B0CBA8:
	// lwzu r11,-4(r5)
	ea = -4 + ctx.r5.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r5.u32 = ea;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// b 0x82b0cab4
	goto loc_82B0CAB4;
loc_82B0CBBC:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// stw r8,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r8.u32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x82b0cab4
	goto loc_82B0CAB4;
loc_82B0CBD4:
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r5,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r5.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B0CBE8"))) PPC_WEAK_FUNC(sub_82B0CBE8);
PPC_FUNC_IMPL(__imp__sub_82B0CBE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82B0CBF0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,32
	ctx.r11.s64 = 2097152;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,29069
	ctx.r10.u64 = ctx.r11.u64 | 29069;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82b0cc14
	if (!cr6.gt) goto loc_82B0CC14;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x82B0CC14;
	sub_831CC150(ctx, base);
loc_82B0CC14:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r28,2020
	ctx.r28.s64 = 2020;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r28
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r28.s32);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// bge cr6,0x82b0cca0
	if (!cr6.lt) goto loc_82B0CCA0;
	// li r27,2
	ctx.r27.s64 = 2;
	// mulli r29,r4,2020
	ctx.r29.s64 = ctx.r4.s64 * 2020;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B0CC4C;
	sub_82595718(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r6,r31,12
	ctx.r6.s64 = ctx.r31.s64 + 12;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82b0c9b8
	ctx.lr = 0x82B0CC64;
	sub_82B0C9B8(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// divw r28,r10,r28
	ctx.r28.s32 = PPCDivide(ctx.r10.s32, ctx.r28.s32);
	// beq cr6,0x82b0cc88
	if (cr6.eq) goto loc_82B0CC88;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x82B0CC88;
	sub_825952B8(ctx, base);
loc_82B0CC88:
	// mulli r11,r28,2020
	ctx.r11.s64 = ctx.r28.s64 * 2020;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// add r10,r29,r30
	ctx.r10.u64 = ctx.r29.u64 + ctx.r30.u64;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
loc_82B0CCA0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B0CCA8"))) PPC_WEAK_FUNC(sub_82B0CCA8);
PPC_FUNC_IMPL(__imp__sub_82B0CCA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82B0CCB0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// srawi r11,r11,4
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// ble cr6,0x82b0cd60
	if (!cr6.gt) goto loc_82B0CD60;
loc_82B0CCD4:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble cr6,0x82b0cd84
	if (!cr6.gt) goto loc_82B0CD84;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83857c38
	ctx.lr = 0x82B0CCF0;
	sub_83857C38(ctx, base);
	// srawi r11,r29,1
	xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r10,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r27,84(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r9,r27,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r27.s64;
	// subf r8,r30,r26
	ctx.r8.s64 = ctx.r26.s64 - ctx.r30.s64;
	// rlwinm r7,r9,0,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
	// rlwinm r6,r8,0,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF0;
	// cmpw cr6,r6,r7
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, xer);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bge cr6,0x82b0cd40
	if (!cr6.lt) goto loc_82B0CD40;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b0cca8
	ctx.lr = 0x82B0CD38;
	sub_82B0CCA8(ctx, base);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// b 0x82b0cd50
	goto loc_82B0CD50;
loc_82B0CD40:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82b0cca8
	ctx.lr = 0x82B0CD4C;
	sub_82B0CCA8(ctx, base);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_82B0CD50:
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// srawi r11,r11,4
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// bgt cr6,0x82b0ccd4
	if (cr6.gt) goto loc_82B0CCD4;
loc_82B0CD60:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// ble cr6,0x82b0cd7c
	if (!cr6.gt) goto loc_82B0CD7C;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b0c840
	ctx.lr = 0x82B0CD7C;
	sub_82B0C840(ctx, base);
loc_82B0CD7C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
loc_82B0CD84:
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// ble cr6,0x82b0cd60
	if (!cr6.gt) goto loc_82B0CD60;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// ble cr6,0x82b0cdac
	if (!cr6.gt) goto loc_82B0CDAC;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f5e330
	ctx.lr = 0x82B0CDAC;
	sub_82F5E330(ctx, base);
loc_82B0CDAC:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f5e478
	ctx.lr = 0x82B0CDBC;
	sub_82F5E478(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B0CDC4"))) PPC_WEAK_FUNC(sub_82B0CDC4);
PPC_FUNC_IMPL(__imp__sub_82B0CDC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B0CDC8"))) PPC_WEAK_FUNC(sub_82B0CDC8);
PPC_FUNC_IMPL(__imp__sub_82B0CDC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82B0CDD0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// ble cr6,0x82b0ce74
	if (!cr6.gt) goto loc_82B0CE74;
loc_82B0CDF0:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble cr6,0x82b0ce94
	if (!cr6.gt) goto loc_82B0CE94;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b0ca10
	ctx.lr = 0x82B0CE08;
	sub_82B0CA10(ctx, base);
	// srawi r11,r29,1
	xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r10,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r9,r28,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r28.s64;
	// subf r8,r30,r27
	ctx.r8.s64 = ctx.r27.s64 - ctx.r30.s64;
	// rlwinm r7,r9,0,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r6,r8,0,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpw cr6,r6,r7
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, xer);
	// bge cr6,0x82b0ce54
	if (!cr6.lt) goto loc_82B0CE54;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b0cdc8
	ctx.lr = 0x82B0CE4C;
	sub_82B0CDC8(ctx, base);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// b 0x82b0ce64
	goto loc_82B0CE64;
loc_82B0CE54:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b0cdc8
	ctx.lr = 0x82B0CE60;
	sub_82B0CDC8(ctx, base);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_82B0CE64:
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// bgt cr6,0x82b0cdf0
	if (cr6.gt) goto loc_82B0CDF0;
loc_82B0CE74:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// ble cr6,0x82b0ce8c
	if (!cr6.gt) goto loc_82B0CE8C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831caa98
	ctx.lr = 0x82B0CE8C;
	sub_831CAA98(ctx, base);
loc_82B0CE8C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82B0CE94:
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// ble cr6,0x82b0ce74
	if (!cr6.gt) goto loc_82B0CE74;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// ble cr6,0x82b0ceb8
	if (!cr6.gt) goto loc_82B0CEB8;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b0c730
	ctx.lr = 0x82B0CEB8;
	sub_82B0C730(ctx, base);
loc_82B0CEB8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831cae38
	ctx.lr = 0x82B0CEC4;
	sub_831CAE38(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B0CECC"))) PPC_WEAK_FUNC(sub_82B0CECC);
PPC_FUNC_IMPL(__imp__sub_82B0CECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B0CED0"))) PPC_WEAK_FUNC(sub_82B0CED0);
PPC_FUNC_IMPL(__imp__sub_82B0CED0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,32
	ctx.r10.s64 = 2097152;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,2020
	ctx.r9.s64 = 2020;
	// ori r8,r10,29069
	ctx.r8.u64 = ctx.r10.u64 | 29069;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// subf r5,r4,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r4.s64;
	// divw r10,r6,r9
	ctx.r10.s32 = PPCDivide(ctx.r6.s32, ctx.r9.s32);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bge cr6,0x82b0cf04
	if (!cr6.lt) goto loc_82B0CF04;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// b 0x831cc150
	sub_831CC150(ctx, base);
	return;
loc_82B0CF04:
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// divw r11,r6,r9
	ctx.r11.s32 = PPCDivide(ctx.r6.s32, ctx.r9.s32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r8,r9,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, xer);
	// blt cr6,0x82b0cf34
	if (cr6.lt) goto loc_82B0CF34;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_82B0CF34:
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x82b0cf40
	if (!cr6.lt) goto loc_82B0CF40;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_82B0CF40:
	// b 0x82b0cbe8
	sub_82B0CBE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B0CF44"))) PPC_WEAK_FUNC(sub_82B0CF44);
PPC_FUNC_IMPL(__imp__sub_82B0CF44) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B0CF48"))) PPC_WEAK_FUNC(sub_82B0CF48);
PPC_FUNC_IMPL(__imp__sub_82B0CF48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B0CF50;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32239
	ctx.r10.s64 = -2112815104;
	// addi r9,r11,14616
	ctx.r9.s64 = ctx.r11.s64 + 14616;
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
	// lwz r4,136(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82b0cf8c
	if (cr6.eq) goto loc_82B0CF8C;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x82B0CF8C;
	sub_825952B8(ctx, base);
loc_82B0CF8C:
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82b0cfb4
	if (cr6.eq) goto loc_82B0CFB4;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x82B0CFB4;
	sub_825952B8(ctx, base);
loc_82B0CFB4:
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82b0cfd8
	if (cr6.eq) goto loc_82B0CFD8;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825952b8
	ctx.lr = 0x82B0CFD8;
	sub_825952B8(ctx, base);
loc_82B0CFD8:
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// bl 0x82d25548
	ctx.lr = 0x82B0CFEC;
	sub_82D25548(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B0CFF4"))) PPC_WEAK_FUNC(sub_82B0CFF4);
PPC_FUNC_IMPL(__imp__sub_82B0CFF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B0CFF8"))) PPC_WEAK_FUNC(sub_82B0CFF8);
PPC_FUNC_IMPL(__imp__sub_82B0CFF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B0D000;
	__savegprlr_28(ctx, base);
	// stwu r1,-2160(r1)
	ea = -2160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,136
	ctx.r28.s64 = ctx.r3.s64 + 136;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8335f980
	ctx.lr = 0x82B0D014;
	sub_8335F980(ctx, base);
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r8,124(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// li r9,2020
	ctx.r9.s64 = 2020;
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// divw r6,r7,r9
	ctx.r6.s32 = PPCDivide(ctx.r7.s32, ctx.r9.s32);
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82b0d040
	if (cr6.gt) goto loc_82B0D040;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B0D040;
	sub_831CC188(ctx, base);
loc_82B0D040:
	// mulli r10,r10,2020
	ctx.r10.s64 = ctx.r10.s64 * 2020;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,2020
	ctx.r5.s64 = 2020;
	// bl 0x831ce980
	ctx.lr = 0x82B0D054;
	sub_831CE980(ctx, base);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r11,-2972
	ctx.r30.s64 = ctx.r11.s64 + -2972;
	// addi r31,r1,288
	ctx.r31.s64 = ctx.r1.s64 + 288;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_82B0D068:
	// cmplwi cr6,r29,64
	cr6.compare<uint32_t>(ctx.r29.u32, 64, xer);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// blt cr6,0x82b0d09c
	if (cr6.lt) goto loc_82B0D09C;
	// addi r11,r1,288
	ctx.r11.s64 = ctx.r1.s64 + 288;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r7,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
	// stw r6,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r6.u32);
	// stw r5,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r5.u32);
	// b 0x82b0d0bc
	goto loc_82B0D0BC;
loc_82B0D09C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// stw r7,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r7.u32);
	// stw r6,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r6.u32);
loc_82B0D0BC:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b0d0d4
	if (!cr6.eq) goto loc_82B0D0D4;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// b 0x82b0d0fc
	goto loc_82B0D0FC;
loc_82B0D0D4:
	// lhz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// lhz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// bne cr6,0x82b0d0f4
	if (!cr6.eq) goto loc_82B0D0F4;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82b0d0f8
	if (cr6.eq) goto loc_82B0D0F8;
loc_82B0D0F4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82B0D0F8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82B0D0FC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b0d118
	if (!cr6.eq) goto loc_82B0D118;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831b0e08
	ctx.lr = 0x82B0D114;
	sub_831B0E08(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_82B0D118:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmplwi cr6,r29,64
	cr6.compare<uint32_t>(ctx.r29.u32, 64, xer);
	// blt cr6,0x82b0d068
	if (cr6.lt) goto loc_82B0D068;
	// addi r1,r1,2160
	ctx.r1.s64 = ctx.r1.s64 + 2160;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B0D130"))) PPC_WEAK_FUNC(sub_82B0D130);
PPC_FUNC_IMPL(__imp__sub_82B0D130) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// bge cr6,0x82b0d168
	if (!cr6.lt) goto loc_82B0D168;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x82b0d16c
	if (!cr6.gt) goto loc_82B0D16C;
loc_82B0D168:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82B0D16C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b0d1bc
	if (cr6.eq) goto loc_82B0D1BC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,2020
	ctx.r9.s64 = 2020;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r7,r10,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// divw r30,r7,r9
	ctx.r30.s32 = PPCDivide(ctx.r7.s32, ctx.r9.s32);
	// bne cr6,0x82b0d1a0
	if (!cr6.eq) goto loc_82B0D1A0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b0ced0
	ctx.lr = 0x82B0D1A0;
	sub_82B0CED0(ctx, base);
loc_82B0D1A0:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r11,r30,2020
	ctx.r11.s64 = ctx.r30.s64 * 2020;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b0d1ec
	if (cr6.eq) goto loc_82B0D1EC;
	// b 0x82b0d1e4
	goto loc_82B0D1E4;
loc_82B0D1BC:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82b0d1d4
	if (!cr6.eq) goto loc_82B0D1D4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b0ced0
	ctx.lr = 0x82B0D1D4;
	sub_82B0CED0(ctx, base);
loc_82B0D1D4:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b0d1ec
	if (cr6.eq) goto loc_82B0D1EC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82B0D1E4:
	// li r5,2020
	ctx.r5.s64 = 2020;
	// bl 0x831ce980
	ctx.lr = 0x82B0D1EC;
	sub_831CE980(ctx, base);
loc_82B0D1EC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,2020
	ctx.r11.s64 = ctx.r11.s64 + 2020;
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

__attribute__((alias("__imp__sub_82B0D210"))) PPC_WEAK_FUNC(sub_82B0D210);
PPC_FUNC_IMPL(__imp__sub_82B0D210) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B0D218;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31762
	ctx.r11.s64 = -2081554432;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r31,r3,1144
	ctx.r31.s64 = ctx.r3.s64 + 1144;
	// li r29,200
	ctx.r29.s64 = 200;
	// addi r30,r11,27608
	ctx.r30.s64 = ctx.r11.s64 + 27608;
loc_82B0D230:
	// lhz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x82b0d248
	if (cr6.eq) goto loc_82B0D248;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82b0d274
	goto loc_82B0D274;
loc_82B0D248:
	// lbz r9,2(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// lbz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x82b0d260
	if (cr6.eq) goto loc_82B0D260;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82b0d274
	goto loc_82B0D274;
loc_82B0D260:
	// lbz r9,3(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// lbz r10,3(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r11,r7,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
loc_82B0D274:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b0d28c
	if (!cr6.eq) goto loc_82B0D28C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b0d130
	ctx.lr = 0x82B0D28C;
	sub_82B0D130(ctx, base);
loc_82B0D28C:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r31,r31,2020
	ctx.r31.s64 = ctx.r31.s64 + 2020;
	// bne 0x82b0d230
	if (!cr0.eq) goto loc_82B0D230;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B0D2A0"))) PPC_WEAK_FUNC(sub_82B0D2A0);
PPC_FUNC_IMPL(__imp__sub_82B0D2A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82B0D2A8;
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
	// bl 0x8308e078
	ctx.lr = 0x82B0D2BC;
	sub_8308E078(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d253f8
	ctx.lr = 0x82B0D2D4;
	sub_82D253F8(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,14616
	ctx.r8.s64 = ctx.r10.s64 + 14616;
	// addi r7,r9,-17088
	ctx.r7.s64 = ctx.r9.s64 + -17088;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// lis r6,-31777
	ctx.r6.s64 = -2082537472;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r7,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r7.u32);
	// lis r5,-31777
	ctx.r5.s64 = -2082537472;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// addi r30,r31,120
	ctx.r30.s64 = ctx.r31.s64 + 120;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// lwz r4,-3008(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + -3008);
	// lwz r10,-2976(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + -2976);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// stw r10,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r10.u32);
	// bl 0x82d20ae0
	ctx.lr = 0x82B0D340;
	sub_82D20AE0(ctx, base);
	// lis r4,-32246
	ctx.r4.s64 = -2113273856;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r4,14280
	ctx.r4.s64 = ctx.r4.s64 + 14280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d23390
	ctx.lr = 0x82B0D354;
	sub_82D23390(ctx, base);
	// lwz r4,124(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// lwz r5,120(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x82b0d378
	if (cr6.eq) goto loc_82B0D378;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82ae5ca0
	ctx.lr = 0x82B0D370;
	sub_82AE5CA0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
loc_82B0D378:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B0D384"))) PPC_WEAK_FUNC(sub_82B0D384);
PPC_FUNC_IMPL(__imp__sub_82B0D384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B0D388"))) PPC_WEAK_FUNC(sub_82B0D388);
PPC_FUNC_IMPL(__imp__sub_82B0D388) {
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
	// bl 0x82b0cf48
	ctx.lr = 0x82B0D3A8;
	sub_82B0CF48(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b0d3c0
	if (cr6.eq) goto loc_82B0D3C0;
	// bl 0x82416268
	ctx.lr = 0x82B0D3BC;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B0D3C0:
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

__attribute__((alias("__imp__sub_82B0D3D8"))) PPC_WEAK_FUNC(sub_82B0D3D8);
PPC_FUNC_IMPL(__imp__sub_82B0D3D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82B0D3E0;
	__savegprlr_24(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B0D3F4;
	sub_831156E8(ctx, base);
	// ld r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311bf98
	ctx.lr = 0x82B0D400;
	sub_8311BF98(ctx, base);
	// li r26,12
	ctx.r26.s64 = 12;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x83120738
	ctx.lr = 0x82B0D418;
	sub_83120738(ctx, base);
	// addi r31,r31,100
	ctx.r31.s64 = ctx.r31.s64 + 100;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r27,r11,14101
	ctx.r27.s64 = ctx.r11.s64 + 14101;
	// addi r4,r27,387
	ctx.r4.s64 = ctx.r27.s64 + 387;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B0D43C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b0d8d4
	if (cr6.eq) goto loc_82B0D8D4;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82d39310
	ctx.lr = 0x82B0D450;
	sub_82D39310(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82B0D460;
	sub_82D2AEC8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r27,403
	ctx.r4.s64 = ctx.r27.s64 + 403;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B0D478;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b0d8d4
	if (cr6.eq) goto loc_82B0D8D4;
	// addi r4,r27,-20
	ctx.r4.s64 = ctx.r27.s64 + -20;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x837b0c10
	ctx.lr = 0x82B0D490;
	sub_837B0C10(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b0d4e8
	if (cr6.eq) goto loc_82B0D4E8;
	// addi r4,r27,-19
	ctx.r4.s64 = ctx.r27.s64 + -19;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x837b0c10
	ctx.lr = 0x82B0D4A8;
	sub_837B0C10(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x82d04220
	ctx.lr = 0x82B0D4B4;
	sub_82D04220(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82b0d4c8
	if (!cr6.lt) goto loc_82B0D4C8;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
loc_82B0D4C8:
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// addi r6,r28,56
	ctx.r6.s64 = ctx.r28.s64 + 56;
	// ori r4,r4,629
	ctx.r4.u64 = ctx.r4.u64 | 629;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82d042a8
	ctx.lr = 0x82B0D4DC;
	sub_82D042A8(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8387e8e0
	ctx.lr = 0x82B0D4E4;
	sub_8387E8E0(ctx, base);
	// b 0x82b0d4f4
	goto loc_82B0D4F4;
loc_82B0D4E8:
	// addi r4,r28,56
	ctx.r4.s64 = ctx.r28.s64 + 56;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8259d6c0
	ctx.lr = 0x82B0D4F4;
	sub_8259D6C0(ctx, base);
loc_82B0D4F4:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82B0D508;
	sub_82D291E0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r27,415
	ctx.r4.s64 = ctx.r27.s64 + 415;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B0D520;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b0d8cc
	if (cr6.eq) goto loc_82B0D8CC;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// li r30,0
	ctx.r30.s64 = 0;
	// rlwinm r11,r11,9,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0xF;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x82b0d5b4
	if (cr6.gt) goto loc_82B0D5B4;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82b0d568
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B0D568;
	// bdzf 4*cr6+eq,0x82b0d598
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B0D598;
	// bne cr6,0x82b0d5a0
	if (!cr6.eq) goto loc_82B0D5A0;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// b 0x82b0d5a8
	goto loc_82B0D5A8;
loc_82B0D568:
	// li r11,20
	ctx.r11.s64 = 20;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83120738
	ctx.lr = 0x82B0D580;
	sub_83120738(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// ble cr6,0x82b0d5b4
	if (!cr6.gt) goto loc_82B0D5B4;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82b0d5a4
	goto loc_82B0D5A4;
loc_82B0D598:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82b0d5a4
	goto loc_82B0D5A4;
loc_82B0D5A0:
	// li r11,3
	ctx.r11.s64 = 3;
loc_82B0D5A4:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82B0D5A8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x835977d8
	ctx.lr = 0x82B0D5B4;
	sub_835977D8(ctx, base);
loc_82B0D5B4:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r10,r11,12,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b0d5d8
	if (cr6.eq) goto loc_82B0D5D8;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x835977d8
	ctx.lr = 0x82B0D5D8;
	sub_835977D8(ctx, base);
loc_82B0D5D8:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r10,r11,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b0d5fc
	if (cr6.eq) goto loc_82B0D5FC;
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x835977d8
	ctx.lr = 0x82B0D5FC;
	sub_835977D8(ctx, base);
loc_82B0D5FC:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r10,r11,11,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b0d620
	if (cr6.eq) goto loc_82B0D620;
	// li r11,7
	ctx.r11.s64 = 7;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x835977d8
	ctx.lr = 0x82B0D620;
	sub_835977D8(ctx, base);
loc_82B0D620:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r10,r11,13,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82b0d644
	if (cr6.eq) goto loc_82B0D644;
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x835977d8
	ctx.lr = 0x82B0D644;
	sub_835977D8(ctx, base);
loc_82B0D644:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r11,r11,5,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x1F;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgt cr6,0x82b0d6a8
	if (cr6.gt) goto loc_82B0D6A8;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82b0d67c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B0D67C;
	// bdzf 4*cr6+eq,0x82b0d68c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B0D68C;
	// bdzf 4*cr6+eq,0x82b0d684
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B0D684;
	// bdzf 4*cr6+eq,0x82b0d694
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B0D694;
	// bne cr6,0x82b0d68c
	if (!cr6.eq) goto loc_82B0D68C;
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x82b0d698
	goto loc_82B0D698;
loc_82B0D67C:
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// b 0x82b0d69c
	goto loc_82B0D69C;
loc_82B0D684:
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x82b0d698
	goto loc_82B0D698;
loc_82B0D68C:
	// li r11,9
	ctx.r11.s64 = 9;
	// b 0x82b0d698
	goto loc_82B0D698;
loc_82B0D694:
	// li r11,5
	ctx.r11.s64 = 5;
loc_82B0D698:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82B0D69C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x835977d8
	ctx.lr = 0x82B0D6A8;
	sub_835977D8(ctx, base);
loc_82B0D6A8:
	// lwz r29,96(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r29,r4
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r4.u32, xer);
	// bne cr6,0x82b0d6c8
	if (!cr6.eq) goto loc_82B0D6C8;
	// addi r4,r27,-18
	ctx.r4.s64 = ctx.r27.s64 + -18;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x837b0c10
	ctx.lr = 0x82B0D6C4;
	sub_837B0C10(ctx, base);
	// b 0x82b0d8a8
	goto loc_82B0D8A8;
loc_82B0D6C8:
	// subf r11,r29,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r29.s64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// srawi r31,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 2;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82b0cdc8
	ctx.lr = 0x82B0D6DC;
	sub_82B0CDC8(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// bne cr6,0x82b0d6f0
	if (!cr6.eq) goto loc_82B0D6F0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B0D6F0;
	sub_831CC188(ctx, base);
loc_82B0D6F0:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x837b0c10
	ctx.lr = 0x82B0D700;
	sub_837B0C10(ctx, base);
	// cmplwi cr6,r31,12
	cr6.compare<uint32_t>(ctx.r31.u32, 12, xer);
	// bgt cr6,0x82b0d8a8
	if (cr6.gt) goto loc_82B0D8A8;
	// lis r12,-32079
	ctx.r12.s64 = -2102329344;
	// rlwinm r0,r31,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-10464
	ctx.r12.s64 = ctx.r12.s64 + -10464;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r31.u32) {
	case 0:
		goto loc_82B0D754;
	case 1:
		goto loc_82B0D760;
	case 2:
		goto loc_82B0D76C;
	case 3:
		goto loc_82B0D778;
	case 4:
		goto loc_82B0D784;
	case 5:
		goto loc_82B0D7CC;
	case 6:
		goto loc_82B0D7D8;
	case 7:
		goto loc_82B0D820;
	case 8:
		goto loc_82B0D868;
	case 9:
		goto loc_82B0D874;
	case 10:
		goto loc_82B0D880;
	case 11:
		goto loc_82B0D88C;
	case 12:
		goto loc_82B0D898;
	default:
		return;
	}
	// lwz r21,-10412(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -10412);
	// lwz r21,-10400(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -10400);
	// lwz r21,-10388(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -10388);
	// lwz r21,-10376(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -10376);
	// lwz r21,-10364(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -10364);
	// lwz r21,-10292(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -10292);
	// lwz r21,-10280(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -10280);
	// lwz r21,-10208(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -10208);
	// lwz r21,-10136(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -10136);
	// lwz r21,-10124(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -10124);
	// lwz r21,-10112(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -10112);
	// lwz r21,-10100(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -10100);
	// lwz r21,-10088(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -10088);
loc_82B0D754:
	// lis r4,641
	ctx.r4.s64 = 42008576;
	// ori r4,r4,88
	ctx.r4.u64 = ctx.r4.u64 | 88;
	// b 0x82b0d8a0
	goto loc_82B0D8A0;
loc_82B0D760:
	// lis r4,930
	ctx.r4.s64 = 60948480;
	// ori r4,r4,48
	ctx.r4.u64 = ctx.r4.u64 | 48;
	// b 0x82b0d8a0
	goto loc_82B0D8A0;
loc_82B0D76C:
	// lis r4,930
	ctx.r4.s64 = 60948480;
	// ori r4,r4,96
	ctx.r4.u64 = ctx.r4.u64 | 96;
	// b 0x82b0d8a0
	goto loc_82B0D8A0;
loc_82B0D778:
	// lis r4,930
	ctx.r4.s64 = 60948480;
	// ori r4,r4,97
	ctx.r4.u64 = ctx.r4.u64 | 97;
	// b 0x82b0d8a0
	goto loc_82B0D8A0;
loc_82B0D784:
	// stb r30,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r30.u8);
	// addi r5,r1,86
	ctx.r5.s64 = ctx.r1.s64 + 86;
	// addi r4,r25,152
	ctx.r4.s64 = ctx.r25.s64 + 152;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8315d6c8
	ctx.lr = 0x82B0D798;
	sub_8315D6C8(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b0d7ac
	if (cr6.lt) goto loc_82B0D7AC;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b0d7b0
	goto loc_82B0D7B0;
loc_82B0D7AC:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_82B0D7B0:
	// lis r4,75
	ctx.r4.s64 = 4915200;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// ori r4,r4,73
	ctx.r4.u64 = ctx.r4.u64 | 73;
	// bl 0x82d042a8
	ctx.lr = 0x82B0D7C0;
	sub_82D042A8(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8387e8e0
	ctx.lr = 0x82B0D7C8;
	sub_8387E8E0(ctx, base);
	// b 0x82b0d8a8
	goto loc_82B0D8A8;
loc_82B0D7CC:
	// lis r4,26
	ctx.r4.s64 = 1703936;
	// ori r4,r4,181
	ctx.r4.u64 = ctx.r4.u64 | 181;
	// b 0x82b0d8a0
	goto loc_82B0D8A0;
loc_82B0D7D8:
	// stb r30,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r30.u8);
	// addi r5,r1,85
	ctx.r5.s64 = ctx.r1.s64 + 85;
	// addi r4,r25,152
	ctx.r4.s64 = ctx.r25.s64 + 152;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8315d6c8
	ctx.lr = 0x82B0D7EC;
	sub_8315D6C8(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b0d800
	if (cr6.lt) goto loc_82B0D800;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b0d804
	goto loc_82B0D804;
loc_82B0D800:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_82B0D804:
	// lis r4,75
	ctx.r4.s64 = 4915200;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// ori r4,r4,72
	ctx.r4.u64 = ctx.r4.u64 | 72;
	// bl 0x82d042a8
	ctx.lr = 0x82B0D814;
	sub_82D042A8(ctx, base);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8387e8e0
	ctx.lr = 0x82B0D81C;
	sub_8387E8E0(ctx, base);
	// b 0x82b0d8a8
	goto loc_82B0D8A8;
loc_82B0D820:
	// stb r30,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r30.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r25,152
	ctx.r4.s64 = ctx.r25.s64 + 152;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x8315d6c8
	ctx.lr = 0x82B0D834;
	sub_8315D6C8(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b0d848
	if (cr6.lt) goto loc_82B0D848;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b0d84c
	goto loc_82B0D84C;
loc_82B0D848:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_82B0D84C:
	// lis r4,75
	ctx.r4.s64 = 4915200;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// ori r4,r4,71
	ctx.r4.u64 = ctx.r4.u64 | 71;
	// bl 0x82d042a8
	ctx.lr = 0x82B0D85C;
	sub_82D042A8(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x8387e8e0
	ctx.lr = 0x82B0D864;
	sub_8387E8E0(ctx, base);
	// b 0x82b0d8a8
	goto loc_82B0D8A8;
loc_82B0D868:
	// lis r4,600
	ctx.r4.s64 = 39321600;
	// ori r4,r4,39
	ctx.r4.u64 = ctx.r4.u64 | 39;
	// b 0x82b0d8a0
	goto loc_82B0D8A0;
loc_82B0D874:
	// lis r4,26
	ctx.r4.s64 = 1703936;
	// ori r4,r4,238
	ctx.r4.u64 = ctx.r4.u64 | 238;
	// b 0x82b0d8a0
	goto loc_82B0D8A0;
loc_82B0D880:
	// lis r4,29
	ctx.r4.s64 = 1900544;
	// ori r4,r4,193
	ctx.r4.u64 = ctx.r4.u64 | 193;
	// b 0x82b0d8a0
	goto loc_82B0D8A0;
loc_82B0D88C:
	// lis r4,26
	ctx.r4.s64 = 1703936;
	// ori r4,r4,108
	ctx.r4.u64 = ctx.r4.u64 | 108;
	// b 0x82b0d8a0
	goto loc_82B0D8A0;
loc_82B0D898:
	// lis r4,29
	ctx.r4.s64 = 1900544;
	// ori r4,r4,21
	ctx.r4.u64 = ctx.r4.u64 | 21;
loc_82B0D8A0:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82d042a8
	ctx.lr = 0x82B0D8A8;
	sub_82D042A8(ctx, base);
loc_82B0D8A8:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82B0D8BC;
	sub_82D291E0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8387e8e0
	ctx.lr = 0x82B0D8C4;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f73d60
	ctx.lr = 0x82B0D8CC;
	sub_82F73D60(ctx, base);
loc_82B0D8CC:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8387e8e0
	ctx.lr = 0x82B0D8D4;
	sub_8387E8E0(ctx, base);
loc_82B0D8D4:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B0D8DC"))) PPC_WEAK_FUNC(sub_82B0D8DC);
PPC_FUNC_IMPL(__imp__sub_82B0D8DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B0D8E0"))) PPC_WEAK_FUNC(sub_82B0D8E0);
PPC_FUNC_IMPL(__imp__sub_82B0D8E0) {
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
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// lwz r10,140(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,4
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 4;
	// cmplw cr6,r8,r5
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, xer);
	// bgt cr6,0x82b0d910
	if (cr6.gt) goto loc_82B0D910;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B0D910;
	sub_831CC188(ctx, base);
loc_82B0D910:
	// rlwinm r10,r5,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r7,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
	// stw r6,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r6.u32);
	// stw r11,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r11.u32);
	// bl 0x82b0d3d8
	ctx.lr = 0x82B0D944;
	sub_82B0D3D8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B0D954"))) PPC_WEAK_FUNC(sub_82B0D954);
PPC_FUNC_IMPL(__imp__sub_82B0D954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B0D958"))) PPC_WEAK_FUNC(sub_82B0D958);
PPC_FUNC_IMPL(__imp__sub_82B0D958) {
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
	// blt cr6,0x82b0d980
	if (cr6.lt) goto loc_82B0D980;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82b0d984
	goto loc_82B0D984;
loc_82B0D980:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82B0D984:
	// li r11,27
	ctx.r11.s64 = 27;
	// lbz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,160
	ctx.r4.s64 = 160;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82B0D9A0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b0d9b8
	if (cr6.eq) goto loc_82B0D9B8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82b0d2a0
	ctx.lr = 0x82B0D9B4;
	sub_82B0D2A0(ctx, base);
	// b 0x82b0d9bc
	goto loc_82B0D9BC;
loc_82B0D9B8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B0D9BC:
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

__attribute__((alias("__imp__sub_82B0D9D4"))) PPC_WEAK_FUNC(sub_82B0D9D4);
PPC_FUNC_IMPL(__imp__sub_82B0D9D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B0D9D8"))) PPC_WEAK_FUNC(sub_82B0D9D8);
PPC_FUNC_IMPL(__imp__sub_82B0D9D8) {
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
	ctx.lr = 0x82B0D9E0;
	__savegprlr_14(ctx, base);
	// stwu r1,-2560(r1)
	ea = -2560 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82b0e508
	if (cr6.eq) goto loc_82B0E508;
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b0da18
	if (!cr6.eq) goto loc_82B0DA18;
	// lwz r10,96(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// ble cr6,0x82b0da18
	if (!cr6.gt) goto loc_82B0DA18;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
loc_82B0DA18:
	// bl 0x831156e8
	ctx.lr = 0x82B0DA1C;
	sub_831156E8(ctx, base);
	// lwz r11,124(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 124);
	// lwz r10,120(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 120);
	// li r9,2020
	ctx.r9.s64 = 2020;
	// lwz r28,48(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r11,96(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 96);
	// divw r7,r8,r9
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r9.s32);
	// stw r28,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r28.u32);
	// cmplw cr6,r7,r11
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82b0da50
	if (cr6.gt) goto loc_82B0DA50;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B0DA50;
	sub_831CC188(ctx, base);
loc_82B0DA50:
	// mulli r11,r11,2020
	ctx.r11.s64 = ctx.r11.s64 * 2020;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// li r5,2020
	ctx.r5.s64 = 2020;
	// bl 0x831ce980
	ctx.lr = 0x82B0DA64;
	sub_831CE980(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// bl 0x8319dc20
	ctx.lr = 0x82B0DA74;
	sub_8319DC20(ctx, base);
	// lwz r9,388(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// rlwinm r11,r9,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x82b0da98
	if (cr6.eq) goto loc_82B0DA98;
	// subfc r11,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	// b 0x82b0dacc
	goto loc_82B0DACC;
loc_82B0DA98:
	// lbz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// rlwinm r10,r9,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82b0dab8
	if (cr6.eq) goto loc_82B0DAB8;
	// subfc r11,r11,r10
	xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	// b 0x82b0dacc
	goto loc_82B0DACC;
loc_82B0DAB8:
	// lbz r11,3(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
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
loc_82B0DACC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r14,1
	ctx.r14.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82b0dae0
	if (cr6.eq) goto loc_82B0DAE0;
	// stb r14,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r14.u8);
loc_82B0DAE0:
	// lwz r3,156(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 156);
	// bl 0x82d2fe58
	ctx.lr = 0x82B0DAE8;
	sub_82D2FE58(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b0e508
	if (cr6.eq) goto loc_82B0E508;
	// lwz r11,96(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 96);
	// lwz r5,100(r16)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r16.u32 + 100);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x82d3d968
	ctx.lr = 0x82B0DB04;
	sub_82D3D968(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82B0DB14;
	sub_82D2AEC8(ctx, base);
	// lwz r11,392(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 392);
	// li r17,15
	ctx.r17.s64 = 15;
	// stw r29,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r29.u32);
	// stb r29,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r29.u8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r17,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r17.u32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// bl 0x8314c958
	ctx.lr = 0x82B0DB34;
	sub_8314C958(ctx, base);
	// lwz r11,384(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82b0dbb4
	if (!cr6.eq) goto loc_82B0DBB4;
	// rlwinm r10,r11,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// rlwinm r5,r11,16,16,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82b0db54
	if (!cr6.eq) goto loc_82B0DB54;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
loc_82B0DB54:
	// stw r17,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r17.u32);
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// stw r29,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r29.u32);
	// addi r6,r5,1
	ctx.r6.s64 = ctx.r5.s64 + 1;
	// stb r29,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r29.u8);
	// ori r4,r4,369
	ctx.r4.u64 = ctx.r4.u64 | 369;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82d042a8
	ctx.lr = 0x82B0DB74;
	sub_82D042A8(ctx, base);
	// lwz r11,276(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r5,256(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82b0db88
	if (!cr6.lt) goto loc_82B0DB88;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
loc_82B0DB88:
	// lis r4,26
	ctx.r4.s64 = 1703936;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// ori r4,r4,641
	ctx.r4.u64 = ctx.r4.u64 | 641;
	// bl 0x82d042a8
	ctx.lr = 0x82B0DB98;
	sub_82D042A8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r3,156(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 156);
	// bl 0x82d2fde0
	ctx.lr = 0x82B0DBA8;
	sub_82D2FDE0(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8387e8e0
	ctx.lr = 0x82B0DBB0;
	sub_8387E8E0(ctx, base);
	// b 0x82b0dc04
	goto loc_82B0DC04;
loc_82B0DBB4:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r4,r11,16,16,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83161f10
	ctx.lr = 0x82B0DBC8;
	sub_83161F10(ctx, base);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82b0dbdc
	if (cr6.lt) goto loc_82B0DBDC;
	// lwz r5,0(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
loc_82B0DBDC:
	// lis r4,26
	ctx.r4.s64 = 1703936;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// ori r4,r4,641
	ctx.r4.u64 = ctx.r4.u64 | 641;
	// bl 0x82d042a8
	ctx.lr = 0x82B0DBEC;
	sub_82D042A8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82B0DBF4;
	sub_8387E8E0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r3,156(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 156);
	// bl 0x82d2fde0
	ctx.lr = 0x82B0DC04;
	sub_82D2FDE0(ctx, base);
loc_82B0DC04:
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B0DC0C;
	sub_82D19A78(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r24,r11,14476
	ctx.r24.s64 = ctx.r11.s64 + 14476;
	// addi r4,r24,-172
	ctx.r4.s64 = ctx.r24.s64 + -172;
	// bl 0x82d2f098
	ctx.lr = 0x82B0DC1C;
	sub_82D2F098(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b0e500
	if (cr6.eq) goto loc_82B0E500;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// addi r4,r24,-164
	ctx.r4.s64 = ctx.r24.s64 + -164;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B0DC40;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b0e500
	if (cr6.eq) goto loc_82B0E500;
	// lwz r11,324(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r29,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r29.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82b0dc64
	if (cr6.eq) goto loc_82B0DC64;
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
loc_82B0DC64:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d329f8
	ctx.lr = 0x82B0DC78;
	sub_82D329F8(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82B0DC88;
	sub_82D2AEC8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r24,-156
	ctx.r4.s64 = ctx.r24.s64 + -156;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B0DCA0;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b0e500
	if (cr6.eq) goto loc_82B0E500;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x8311c148
	ctx.lr = 0x82B0DCB8;
	sub_8311C148(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x837b0c10
	ctx.lr = 0x82B0DCC8;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82B0DCDC;
	sub_82D291E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82B0DCE4;
	sub_8387E8E0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r24,-144
	ctx.r4.s64 = ctx.r24.s64 + -144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B0DCFC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b0e500
	if (cr6.eq) goto loc_82B0E500;
	// lbz r5,2401(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 2401);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82b0dd3c
	if (!cr6.eq) goto loc_82B0DD3C;
	// addi r4,r24,-458
	ctx.r4.s64 = ctx.r24.s64 + -458;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82B0DD20;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82B0DD34;
	sub_82D291E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// b 0x82b0dd70
	goto loc_82B0DD70;
loc_82B0DD3C:
	// stw r17,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r17.u32);
	// lis r4,75
	ctx.r4.s64 = 4915200;
	// stw r29,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r29.u32);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// stb r29,352(r1)
	PPC_STORE_U8(ctx.r1.u32 + 352, ctx.r29.u8);
	// ori r4,r4,66
	ctx.r4.u64 = ctx.r4.u64 | 66;
	// bl 0x82d042a8
	ctx.lr = 0x82B0DD58;
	sub_82D042A8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82B0DD6C;
	sub_82D291E0(ctx, base);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
loc_82B0DD70:
	// bl 0x8387e8e0
	ctx.lr = 0x82B0DD74;
	sub_8387E8E0(ctx, base);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B0DD7C;
	sub_82D19A78(ctx, base);
	// addi r4,r24,-128
	ctx.r4.s64 = ctx.r24.s64 + -128;
	// bl 0x82d2f098
	ctx.lr = 0x82B0DD84;
	sub_82D2F098(ctx, base);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b0e500
	if (cr6.eq) goto loc_82B0E500;
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// addi r28,r1,396
	ctx.r28.s64 = ctx.r1.s64 + 396;
	// stw r29,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r29.u32);
	// li r20,-1
	ctx.r20.s64 = -1;
	// lis r31,-31777
	ctx.r31.s64 = -2082537472;
	// li r15,2
	ctx.r15.s64 = 2;
	// li r25,3
	ctx.r25.s64 = 3;
	// li r26,4
	ctx.r26.s64 = 4;
	// li r27,5
	ctx.r27.s64 = 5;
loc_82B0DDBC:
	// cmplwi cr6,r30,15
	cr6.compare<uint32_t>(ctx.r30.u32, 15, xer);
	// addi r10,r1,396
	ctx.r10.s64 = ctx.r1.s64 + 396;
	// bge cr6,0x82b0ddcc
	if (!cr6.lt) goto loc_82B0DDCC;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_82B0DDCC:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,-2976(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + -2976);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x82b0df6c
	if (cr6.eq) goto loc_82B0DF6C;
	// lbz r8,5(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// lbz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// cmplwi cr6,r9,67
	cr6.compare<uint32_t>(ctx.r9.u32, 67, xer);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// bgt cr6,0x82b0df5c
	if (cr6.gt) goto loc_82B0DF5C;
	// lis r12,-32079
	ctx.r12.s64 = -2102329344;
	// rlwinm r0,r9,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-8684
	ctx.r12.s64 = ctx.r12.s64 + -8684;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r9.u32) {
	case 0:
		goto loc_82B0DF24;
	case 1:
		goto loc_82B0DF4C;
	case 2:
		goto loc_82B0DF54;
	case 3:
		goto loc_82B0DF24;
	case 4:
		goto loc_82B0DF5C;
	case 5:
		goto loc_82B0DF5C;
	case 6:
		goto loc_82B0DF24;
	case 7:
		goto loc_82B0DF2C;
	case 8:
		goto loc_82B0DF2C;
	case 9:
		goto loc_82B0DF2C;
	case 10:
		goto loc_82B0DF2C;
	case 11:
		goto loc_82B0DF2C;
	case 12:
		goto loc_82B0DF2C;
	case 13:
		goto loc_82B0DF44;
	case 14:
		goto loc_82B0DF44;
	case 15:
		goto loc_82B0DF44;
	case 16:
		goto loc_82B0DF44;
	case 17:
		goto loc_82B0DF44;
	case 18:
		goto loc_82B0DF44;
	case 19:
		goto loc_82B0DF2C;
	case 20:
		goto loc_82B0DF2C;
	case 21:
		goto loc_82B0DF2C;
	case 22:
		goto loc_82B0DF44;
	case 23:
		goto loc_82B0DF5C;
	case 24:
		goto loc_82B0DF5C;
	case 25:
		goto loc_82B0DF5C;
	case 26:
		goto loc_82B0DF5C;
	case 27:
		goto loc_82B0DF5C;
	case 28:
		goto loc_82B0DF5C;
	case 29:
		goto loc_82B0DF5C;
	case 30:
		goto loc_82B0DF5C;
	case 31:
		goto loc_82B0DF5C;
	case 32:
		goto loc_82B0DF5C;
	case 33:
		goto loc_82B0DF5C;
	case 34:
		goto loc_82B0DF5C;
	case 35:
		goto loc_82B0DF5C;
	case 36:
		goto loc_82B0DF5C;
	case 37:
		goto loc_82B0DF2C;
	case 38:
		goto loc_82B0DF2C;
	case 39:
		goto loc_82B0DF2C;
	case 40:
		goto loc_82B0DF44;
	case 41:
		goto loc_82B0DF44;
	case 42:
		goto loc_82B0DF44;
	case 43:
		goto loc_82B0DF5C;
	case 44:
		goto loc_82B0DF5C;
	case 45:
		goto loc_82B0DF5C;
	case 46:
		goto loc_82B0DF5C;
	case 47:
		goto loc_82B0DF44;
	case 48:
		goto loc_82B0DF5C;
	case 49:
		goto loc_82B0DF5C;
	case 50:
		goto loc_82B0DF5C;
	case 51:
		goto loc_82B0DF5C;
	case 52:
		goto loc_82B0DF5C;
	case 53:
		goto loc_82B0DF5C;
	case 54:
		goto loc_82B0DF44;
	case 55:
		goto loc_82B0DF5C;
	case 56:
		goto loc_82B0DF5C;
	case 57:
		goto loc_82B0DF5C;
	case 58:
		goto loc_82B0DF5C;
	case 59:
		goto loc_82B0DF5C;
	case 60:
		goto loc_82B0DF5C;
	case 61:
		goto loc_82B0DF5C;
	case 62:
		goto loc_82B0DF5C;
	case 63:
		goto loc_82B0DF5C;
	case 64:
		goto loc_82B0DF2C;
	case 65:
		goto loc_82B0DF2C;
	case 66:
		goto loc_82B0DF2C;
	case 67:
		goto loc_82B0DF2C;
	default:
		return;
	}
	// lwz r21,-8412(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -8412);
	// lwz r21,-8372(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -8372);
	// lwz r21,-8364(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -8364);
	// lwz r21,-8412(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -8412);
	// lwz r21,-8356(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -8356);
	// lwz r21,-8356(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -8356);
	// lwz r21,-8412(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -8412);
	// lwz r21,-8404(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -8404);
	// lwz r21,-8404(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -8404);
	// lwz r21,-8404(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -8404);
	// lwz r21,-8404(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -8404);
	// lwz r21,-8404(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -8404);
	// lwz r21,-8404(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -8404);
	// lwz r21,-8380(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -8380);
	// lwz r21,-8380(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -8380);
	// lwz r21,-8380(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -8380);
	// lwz r21,-8380(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -8380);
	// lwz r21,-8380(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -8380);
	// lwz r21,-8380(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -8380);
	// lwz r21,-8404(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -8404);
	// lwz r21,-8404(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -8404);
	// lwz r21,-8404(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -8404);
	// lwz r21,-8380(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -8380);
	// lwz r21,-8356(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -8356);
	// lwz r21,-8356(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -8356);
	// lwz r21,-8356(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -8356);
	// lwz r21,-8356(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -8356);
	// lwz r21,-8356(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -8356);
	// lwz r21,-8356(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -8356);
	// lwz r21,-8356(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -8356);
	// lwz r21,-8356(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -8356);
	// lwz r21,-8356(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -8356);
	// lwz r21,-8356(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -8356);
	// lwz r21,-8356(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -8356);
	// lwz r21,-8356(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -8356);
	// lwz r21,-8356(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -8356);
	// lwz r21,-8356(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -8356);
	// lwz r21,-8404(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -8404);
	// lwz r21,-8404(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -8404);
	// lwz r21,-8404(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -8404);
	// lwz r21,-8380(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -8380);
	// lwz r21,-8380(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -8380);
	// lwz r21,-8380(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -8380);
	// lwz r21,-8356(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -8356);
	// lwz r21,-8356(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -8356);
	// lwz r21,-8356(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -8356);
	// lwz r21,-8356(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -8356);
	// lwz r21,-8380(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -8380);
	// lwz r21,-8356(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -8356);
	// lwz r21,-8356(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -8356);
	// lwz r21,-8356(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -8356);
	// lwz r21,-8356(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -8356);
	// lwz r21,-8356(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -8356);
	// lwz r21,-8356(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -8356);
	// lwz r21,-8380(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -8380);
	// lwz r21,-8356(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -8356);
	// lwz r21,-8356(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -8356);
	// lwz r21,-8356(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -8356);
	// lwz r21,-8356(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -8356);
	// lwz r21,-8356(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -8356);
	// lwz r21,-8356(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -8356);
	// lwz r21,-8356(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -8356);
	// lwz r21,-8356(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -8356);
	// lwz r21,-8356(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -8356);
	// lwz r21,-8404(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -8404);
	// lwz r21,-8404(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -8404);
	// lwz r21,-8404(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -8404);
	// lwz r21,-8404(r16)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r16.u32 + -8404);
loc_82B0DF24:
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// b 0x82b0df60
	goto loc_82B0DF60;
loc_82B0DF2C:
	// stw r14,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r14.u32);
	// cmplw cr6,r11,r20
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r20.u32, xer);
	// ble cr6,0x82b0df3c
	if (!cr6.gt) goto loc_82B0DF3C;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_82B0DF3C:
	// stw r11,152(r16)
	PPC_STORE_U32(ctx.r16.u32 + 152, ctx.r11.u32);
	// b 0x82b0df60
	goto loc_82B0DF60;
loc_82B0DF44:
	// stw r15,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r15.u32);
	// b 0x82b0df60
	goto loc_82B0DF60;
loc_82B0DF4C:
	// stw r25,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r25.u32);
	// b 0x82b0df60
	goto loc_82B0DF60;
loc_82B0DF54:
	// stw r26,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// b 0x82b0df60
	goto loc_82B0DF60;
loc_82B0DF5C:
	// stw r27,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
loc_82B0DF60:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x831b0e08
	ctx.lr = 0x82B0DF6C;
	sub_831B0E08(ctx, base);
loc_82B0DF6C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,12
	ctx.r28.s64 = ctx.r28.s64 + 12;
	// cmplwi cr6,r30,15
	cr6.compare<uint32_t>(ctx.r30.u32, 15, xer);
	// blt cr6,0x82b0ddbc
	if (cr6.lt) goto loc_82B0DDBC;
	// lwz r19,144(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// lwz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// addi r6,r11,-14568
	ctx.r6.s64 = ctx.r11.s64 + -14568;
	// subf r10,r19,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r19.s64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// srawi r21,r10,4
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r21.s64 = ctx.r10.s32 >> 4;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// bl 0x82b0cca8
	ctx.lr = 0x82B0DFA0;
	sub_82B0CCA8(ctx, base);
	// lwz r9,100(r18)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r18.u32 + 100);
	// addi r22,r18,100
	ctx.r22.s64 = ctx.r18.s64 + 100;
	// addi r4,r24,-116
	ctx.r4.s64 = ctx.r24.s64 + -116;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B0DFBC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b0e518
	if (cr6.eq) goto loc_82B0E518;
	// lis r4,509
	ctx.r4.s64 = 33357824;
	// ori r4,r4,52
	ctx.r4.u64 = ctx.r4.u64 | 52;
	// bl 0x82d29598
	ctx.lr = 0x82B0DFD0;
	sub_82D29598(ctx, base);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// mr r23,r29
	ctx.r23.u64 = ctx.r29.u64;
	// bl 0x82d33c10
	ctx.lr = 0x82B0DFDC;
	sub_82D33C10(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b0e41c
	if (cr6.eq) goto loc_82B0E41C;
	// addi r25,r19,4
	ctx.r25.s64 = ctx.r19.s64 + 4;
loc_82B0DFE8:
	// addi r4,r24,-104
	ctx.r4.s64 = ctx.r24.s64 + -104;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x837b0c10
	ctx.lr = 0x82B0DFF4;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// clrldi r4,r23,32
	ctx.r4.u64 = ctx.r23.u64 & 0xFFFFFFFF;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x83161f10
	ctx.lr = 0x82B0E008;
	sub_83161F10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x825a1da8
	ctx.lr = 0x82B0E01C;
	sub_825A1DA8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82B0E024;
	sub_8387E8E0(ctx, base);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82b0e038
	if (!cr6.lt) goto loc_82B0E038;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
loc_82B0E038:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B0E04C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b0e3fc
	if (cr6.eq) goto loc_82B0E3FC;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d2b608
	ctx.lr = 0x82B0E068;
	sub_82D2B608(ctx, base);
	// addi r31,r31,100
	ctx.r31.s64 = ctx.r31.s64 + 100;
	// addi r4,r24,-92
	ctx.r4.s64 = ctx.r24.s64 + -92;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B0E084;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b0e510
	if (cr6.eq) goto loc_82B0E510;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r24,-80
	ctx.r4.s64 = ctx.r24.s64 + -80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B0E0A8;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b0e510
	if (cr6.eq) goto loc_82B0E510;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r24,-68
	ctx.r4.s64 = ctx.r24.s64 + -68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B0E0CC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b0e510
	if (cr6.eq) goto loc_82B0E510;
	// cmplw cr6,r23,r21
	cr6.compare<uint32_t>(ctx.r23.u32, ctx.r21.u32, xer);
	// blt cr6,0x82b0e154
	if (cr6.lt) goto loc_82B0E154;
	// addi r4,r24,-457
	ctx.r4.s64 = ctx.r24.s64 + -457;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82B0E0EC;
	sub_837B0C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82B0E100;
	sub_82D291E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82B0E108;
	sub_8387E8E0(ctx, base);
	// addi r4,r24,-426
	ctx.r4.s64 = ctx.r24.s64 + -426;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82B0E114;
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
	ctx.lr = 0x82B0E128;
	sub_82D291E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82B0E130;
	sub_8387E8E0(ctx, base);
	// addi r4,r24,-56
	ctx.r4.s64 = ctx.r24.s64 + -56;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82B0E13C;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d32958
	ctx.lr = 0x82B0E148;
	sub_82D32958(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82B0E150;
	sub_8387E8E0(ctx, base);
	// b 0x82b0e3fc
	goto loc_82B0E3FC;
loc_82B0E154:
	// lwz r3,-4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -4);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// stw r29,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r29.u32);
	// addi r28,r25,-4
	ctx.r28.s64 = ctx.r25.s64 + -4;
	// stw r29,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r29.u32);
	// stw r29,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r29.u32);
	// stw r29,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r29.u32);
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// bl 0x83197200
	ctx.lr = 0x82B0E178;
	sub_83197200(ctx, base);
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82b0e1e4
	if (cr6.eq) goto loc_82B0E1E4;
loc_82B0E18C:
	// lhz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,65535
	cr6.compare<uint32_t>(ctx.r4.u32, 65535, xer);
	// beq cr6,0x82b0e1c4
	if (cr6.eq) goto loc_82B0E1C4;
	// lwz r3,208(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x8311c338
	ctx.lr = 0x82B0E1A0;
	sub_8311C338(ctx, base);
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x82b0e1c4
	if (!cr6.eq) goto loc_82B0E1C4;
	// lhz r11,78(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 78);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// bne cr6,0x82b0e1c4
	if (!cr6.eq) goto loc_82B0E1C4;
	// lhz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 80);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x82b0e1d8
	if (cr6.eq) goto loc_82B0E1D8;
loc_82B0E1C4:
	// lwz r11,196(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x82b0e18c
	if (!cr6.eq) goto loc_82B0E18C;
	// b 0x82b0e1e4
	goto loc_82B0E1E4;
loc_82B0E1D8:
	// lwz r11,540(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 540);
	// rlwinm r10,r11,23,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7F;
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
loc_82B0E1E4:
	// lwz r31,124(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82aa38e0
	ctx.lr = 0x82B0E1F4;
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
	ctx.lr = 0x82B0E208;
	sub_82D32C58(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2aec8
	ctx.lr = 0x82B0E218;
	sub_82D2AEC8(ctx, base);
	// stb r29,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r29.u8);
	// addi r5,r1,81
	ctx.r5.s64 = ctx.r1.s64 + 81;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8315d6c8
	ctx.lr = 0x82B0E22C;
	sub_8315D6C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82d291e0
	ctx.lr = 0x82B0E240;
	sub_82D291E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82B0E248;
	sub_8387E8E0(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,23
	cr6.compare<uint32_t>(ctx.r11.u32, 23, xer);
	// beq cr6,0x82b0e260
	if (cr6.eq) goto loc_82B0E260;
	// cmplwi cr6,r11,40
	cr6.compare<uint32_t>(ctx.r11.u32, 40, xer);
	// bne cr6,0x82b0e264
	if (!cr6.eq) goto loc_82B0E264;
loc_82B0E260:
	// mr r31,r14
	ctx.r31.u64 = ctx.r14.u64;
loc_82B0E264:
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82b0e2a0
	if (!cr6.eq) goto loc_82B0E2A0;
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8316f790
	ctx.lr = 0x82B0E280;
	sub_8316F790(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b0e2a0
	if (!cr6.eq) goto loc_82B0E2A0;
	// addi r4,r24,-12
	ctx.r4.s64 = ctx.r24.s64 + -12;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82B0E298;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// b 0x82b0e3dc
	goto loc_82B0E3DC;
loc_82B0E2A0:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bne cr6,0x82b0e2c0
	if (!cr6.eq) goto loc_82B0E2C0;
	// addi r4,r24,-8
	ctx.r4.s64 = ctx.r24.s64 + -8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82B0E2B8;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// b 0x82b0e3dc
	goto loc_82B0E3DC;
loc_82B0E2C0:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// ble cr6,0x82b0e314
	if (!cr6.gt) goto loc_82B0E314;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b0e314
	if (!cr6.eq) goto loc_82B0E314;
	// stw r17,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r17.u32);
	// lis r4,75
	ctx.r4.s64 = 4915200;
	// stw r29,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r29.u32);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// stb r29,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r29.u8);
	// ori r4,r4,67
	ctx.r4.u64 = ctx.r4.u64 | 67;
	// lwz r5,4(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// bl 0x82d042a8
	ctx.lr = 0x82B0E2F8;
	sub_82D042A8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82B0E30C;
	sub_82D291E0(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// b 0x82b0e3f0
	goto loc_82B0E3F0;
loc_82B0E314:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8316f500
	ctx.lr = 0x82B0E31C;
	sub_8316F500(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// beq cr6,0x82b0e3ac
	if (cr6.eq) goto loc_82B0E3AC;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b0e348
	if (!cr6.eq) goto loc_82B0E348;
	// addi r4,r24,-4
	ctx.r4.s64 = ctx.r24.s64 + -4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82B0E340;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// b 0x82b0e3dc
	goto loc_82B0E3DC;
loc_82B0E348:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82b0e370
	if (!cr6.eq) goto loc_82B0E370;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b0e370
	if (!cr6.eq) goto loc_82B0E370;
	// lis r4,930
	ctx.r4.s64 = 60948480;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// ori r4,r4,32
	ctx.r4.u64 = ctx.r4.u64 | 32;
	// bl 0x82d29598
	ctx.lr = 0x82B0E36C;
	sub_82D29598(ctx, base);
	// b 0x82b0e3f4
	goto loc_82B0E3F4;
loc_82B0E370:
	// stw r17,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r17.u32);
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// stb r29,320(r1)
	PPC_STORE_U8(ctx.r1.u32 + 320, ctx.r29.u8);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// stw r29,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r29.u32);
	// ori r4,r4,152
	ctx.r4.u64 = ctx.r4.u64 | 152;
	// lwz r5,0(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// bl 0x82d042a8
	ctx.lr = 0x82B0E390;
	sub_82D042A8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82B0E3A4;
	sub_82D291E0(ctx, base);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// b 0x82b0e3f0
	goto loc_82B0E3F0;
loc_82B0E3AC:
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, xer);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// blt cr6,0x82b0e3c8
	if (cr6.lt) goto loc_82B0E3C8;
	// addi r4,r24,-425
	ctx.r4.s64 = ctx.r24.s64 + -425;
	// bl 0x837b0c10
	ctx.lr = 0x82B0E3C0;
	sub_837B0C10(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// b 0x82b0e3dc
	goto loc_82B0E3DC;
loc_82B0E3C8:
	// addi r6,r1,136
	ctx.r6.s64 = ctx.r1.s64 + 136;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// bl 0x8315fbc0
	ctx.lr = 0x82B0E3D8;
	sub_8315FBC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82B0E3DC:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d291e0
	ctx.lr = 0x82B0E3EC;
	sub_82D291E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_82B0E3F0:
	// bl 0x8387e8e0
	ctx.lr = 0x82B0E3F4;
	sub_8387E8E0(ctx, base);
loc_82B0E3F4:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82f73d60
	ctx.lr = 0x82B0E3FC;
	sub_82F73D60(ctx, base);
loc_82B0E3FC:
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8387e8e0
	ctx.lr = 0x82B0E404;
	sub_8387E8E0(ctx, base);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r25,r25,16
	ctx.r25.s64 = ctx.r25.s64 + 16;
	// bl 0x82d33c10
	ctx.lr = 0x82B0E414;
	sub_82D33C10(ctx, base);
	// cmplw cr6,r23,r3
	cr6.compare<uint32_t>(ctx.r23.u32, ctx.r3.u32, xer);
	// blt cr6,0x82b0dfe8
	if (cr6.lt) goto loc_82B0DFE8;
loc_82B0E41C:
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x82b0cff8
	ctx.lr = 0x82B0E424;
	sub_82B0CFF8(ctx, base);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B0E42C;
	sub_82D19A78(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x82d2f098
	ctx.lr = 0x82B0E434;
	sub_82D2F098(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b0e518
	if (cr6.eq) goto loc_82B0E518;
	// bl 0x82d33c10
	ctx.lr = 0x82B0E444;
	sub_82D33C10(ctx, base);
	// lwz r11,136(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 136);
	// lwz r10,140(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 140);
	// addi r30,r16,136
	ctx.r30.s64 = ctx.r16.s64 + 136;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// srawi. r5,r9,4
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 4;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq 0x82b0e4c8
	if (cr0.eq) goto loc_82B0E4C8;
loc_82B0E464:
	// cmplw cr6,r31,r27
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, xer);
	// bge cr6,0x82b0e4c8
	if (!cr6.lt) goto loc_82B0E4C8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d33db0
	ctx.lr = 0x82B0E478;
	sub_82D33DB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b0e4a8
	if (cr6.eq) goto loc_82B0E4A8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r8,r9,4
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 4;
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, xer);
	// ble cr6,0x82b0e530
	if (!cr6.gt) goto loc_82B0E530;
	// add r5,r11,r29
	ctx.r5.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x82b0d3d8
	ctx.lr = 0x82B0E4A8;
	sub_82B0D3D8(ctx, base);
loc_82B0E4A8:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r5,r9,4
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 4;
	// cmplw cr6,r31,r5
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r5.u32, xer);
	// blt cr6,0x82b0e464
	if (cr6.lt) goto loc_82B0E464;
loc_82B0E4C8:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x82d20f50
	ctx.lr = 0x82B0E4DC;
	sub_82D20F50(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x83102db0
	ctx.lr = 0x82B0E4E8;
	sub_83102DB0(ctx, base);
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(ctx.r19.u32, 0, xer);
	// beq cr6,0x82b0e500
	if (cr6.eq) goto loc_82B0E500;
	// stw r15,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r15.u32);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// addi r3,r1,188
	ctx.r3.s64 = ctx.r1.s64 + 188;
	// bl 0x825952b8
	ctx.lr = 0x82B0E500;
	sub_825952B8(ctx, base);
loc_82B0E500:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x82B0E508;
	sub_8387E8E0(ctx, base);
loc_82B0E508:
	// addi r1,r1,2560
	ctx.r1.s64 = ctx.r1.s64 + 2560;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_82B0E510:
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8387e8e0
	ctx.lr = 0x82B0E518;
	sub_8387E8E0(ctx, base);
loc_82B0E518:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82f73d60
	ctx.lr = 0x82B0E520;
	sub_82F73D60(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x82B0E528;
	sub_8387E8E0(ctx, base);
	// addi r1,r1,2560
	ctx.r1.s64 = ctx.r1.s64 + 2560;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_82B0E530:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B0E53C;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82B0E53C"))) PPC_WEAK_FUNC(sub_82B0E53C);
PPC_FUNC_IMPL(__imp__sub_82B0E53C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B0E540"))) PPC_WEAK_FUNC(sub_82B0E540);
PPC_FUNC_IMPL(__imp__sub_82B0E540) {
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
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// blt cr6,0x82b0e5a8
	if (cr6.lt) goto loc_82B0E5A8;
	// lwz r3,156(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// bl 0x82d2fe58
	ctx.lr = 0x82B0E568;
	sub_82D2FE58(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b0e5a8
	if (cr6.eq) goto loc_82B0E5A8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d3d908
	ctx.lr = 0x82B0E578;
	sub_82D3D908(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// bge 0x82b0e594
	if (!cr0.lt) goto loc_82B0E594;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_82B0E594:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b0d9d8
	ctx.lr = 0x82B0E5A8;
	sub_82B0D9D8(ctx, base);
loc_82B0E5A8:
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

__attribute__((alias("__imp__sub_82B0E5BC"))) PPC_WEAK_FUNC(sub_82B0E5BC);
PPC_FUNC_IMPL(__imp__sub_82B0E5BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B0E5C0"))) PPC_WEAK_FUNC(sub_82B0E5C0);
PPC_FUNC_IMPL(__imp__sub_82B0E5C0) {
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
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// blt cr6,0x82b0e628
	if (cr6.lt) goto loc_82B0E628;
	// lwz r3,156(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// bl 0x82d2fe58
	ctx.lr = 0x82B0E5E8;
	sub_82D2FE58(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b0e628
	if (cr6.eq) goto loc_82B0E628;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d3d8a8
	ctx.lr = 0x82B0E5F8;
	sub_82D3D8A8(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82b0e618
	if (cr6.lt) goto loc_82B0E618;
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
loc_82B0E618:
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b0d9d8
	ctx.lr = 0x82B0E628;
	sub_82B0D9D8(ctx, base);
loc_82B0E628:
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

__attribute__((alias("__imp__sub_82B0E63C"))) PPC_WEAK_FUNC(sub_82B0E63C);
PPC_FUNC_IMPL(__imp__sub_82B0E63C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B0E640"))) PPC_WEAK_FUNC(sub_82B0E640);
PPC_FUNC_IMPL(__imp__sub_82B0E640) {
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
	// bl 0x82d34e50
	ctx.lr = 0x82B0E65C;
	sub_82D34E50(ctx, base);
	// bl 0x82d34d38
	ctx.lr = 0x82B0E660;
	sub_82D34D38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b0e674
	if (!cr6.eq) goto loc_82B0E674;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82b0e728
	goto loc_82B0E728;
loc_82B0E674:
	// bl 0x831156e8
	ctx.lr = 0x82B0E678;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r30,r31,120
	ctx.r30.s64 = ctx.r31.s64 + 120;
	// addis r3,r11,222
	ctx.r3.s64 = ctx.r11.s64 + 14548992;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r3,30348
	ctx.r3.s64 = ctx.r3.s64 + 30348;
	// bl 0x82b0d210
	ctx.lr = 0x82B0E690;
	sub_82B0D210(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B0E6A0;
	sub_82D19788(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B0E6B0;
	sub_82D19788(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19788
	ctx.lr = 0x82B0E6C0;
	sub_82D19788(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d19a78
	ctx.lr = 0x82B0E6C8;
	sub_82D19A78(ctx, base);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r4,r10,14292
	ctx.r4.s64 = ctx.r10.s64 + 14292;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82B0E6E4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82b0e724
	if (cr6.eq) goto loc_82B0E724;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r10,2020
	ctx.r10.s64 = 2020;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// subf r7,r9,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r9.s64;
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// divw r11,r7,r10
	ctx.r11.s32 = PPCDivide(ctx.r7.s32, ctx.r10.s32);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r6,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r6.u32);
	// bl 0x82b0d9d8
	ctx.lr = 0x82B0E724;
	sub_82B0D9D8(ctx, base);
loc_82B0E724:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82B0E728:
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

__attribute__((alias("__imp__sub_82B0E740"))) PPC_WEAK_FUNC(sub_82B0E740);
PPC_FUNC_IMPL(__imp__sub_82B0E740) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B0E748;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82B0E754;
	sub_831156E8(ctx, base);
	// lwz r31,52(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bl 0x831156e8
	ctx.lr = 0x82B0E75C;
	sub_831156E8(ctx, base);
	// addis r31,r31,5
	ctx.r31.s64 = ctx.r31.s64 + 327680;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r31,r31,14904
	ctx.r31.s64 = ctx.r31.s64 + 14904;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,48(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x83123778
	ctx.lr = 0x82B0E774;
	sub_83123778(ctx, base);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// beq cr6,0x82b0e7b8
	if (cr6.eq) goto loc_82B0E7B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83123778
	ctx.lr = 0x82B0E788;
	sub_83123778(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8311c338
	ctx.lr = 0x82B0E794;
	sub_8311C338(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83123778
	ctx.lr = 0x82B0E7A0;
	sub_83123778(ctx, base);
	// bl 0x83195988
	ctx.lr = 0x82B0E7A4;
	sub_83195988(ctx, base);
	// addis r10,r30,221
	ctx.r10.s64 = ctx.r30.s64 + 14483456;
	// lwz r11,88(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 88);
	// addi r10,r10,-26512
	ctx.r10.s64 = ctx.r10.s64 + -26512;
	// stw r11,1292(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1292, ctx.r11.u32);
	// stw r3,1296(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1296, ctx.r3.u32);
loc_82B0E7B8:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,15460
	ctx.r5.s64 = ctx.r11.s64 + 15460;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d20da8
	ctx.lr = 0x82B0E7CC;
	sub_82D20DA8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B0E7D4"))) PPC_WEAK_FUNC(sub_82B0E7D4);
PPC_FUNC_IMPL(__imp__sub_82B0E7D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B0E7D8"))) PPC_WEAK_FUNC(sub_82B0E7D8);
PPC_FUNC_IMPL(__imp__sub_82B0E7D8) {
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
	// bl 0x831156e8
	ctx.lr = 0x82B0E7F4;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,48(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x8319dc20
	ctx.lr = 0x82B0E804;
	sub_8319DC20(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x82b0e89c
	if (cr6.lt) goto loc_82B0E89C;
	// beq cr6,0x82b0e84c
	if (cr6.eq) goto loc_82B0E84C;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x82b0e8e4
	if (!cr6.lt) goto loc_82B0E8E4;
	// lis r11,221
	ctx.r11.s64 = 14483456;
	// ori r10,r11,53043
	ctx.r10.u64 = ctx.r11.u64 | 53043;
	// lbzx r8,r31,r10
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82b0e844
	if (!cr6.eq) goto loc_82B0E844;
	// lis r11,221
	ctx.r11.s64 = 14483456;
	// ori r10,r11,53092
	ctx.r10.u64 = ctx.r11.u64 | 53092;
	// lbzx r8,r31,r10
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82b0e8e4
	if (cr6.eq) goto loc_82B0E8E4;
loc_82B0E844:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82b0e8e8
	goto loc_82B0E8E8;
loc_82B0E84C:
	// addis r8,r31,214
	ctx.r8.s64 = ctx.r31.s64 + 14024704;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r8,10896
	ctx.r8.s64 = ctx.r8.s64 + 10896;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_82B0E85C:
	// cmplwi cr6,r10,72
	cr6.compare<uint32_t>(ctx.r10.u32, 72, xer);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// bge cr6,0x82b0e86c
	if (!cr6.lt) goto loc_82B0E86C;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82B0E86C:
	// lhz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 16);
	// rlwinm r7,r11,0,0,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r7,32768
	cr6.compare<uint32_t>(ctx.r7.u32, 32768, xer);
	// bne cr6,0x82b0e888
	if (!cr6.eq) goto loc_82B0E888;
	// rlwinm r11,r11,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r11,16384
	cr6.compare<uint32_t>(ctx.r11.u32, 16384, xer);
	// beq cr6,0x82b0e844
	if (cr6.eq) goto loc_82B0E844;
loc_82B0E888:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,5852
	ctx.r9.s64 = ctx.r9.s64 + 5852;
	// cmplwi cr6,r10,72
	cr6.compare<uint32_t>(ctx.r10.u32, 72, xer);
	// blt cr6,0x82b0e85c
	if (cr6.lt) goto loc_82B0E85C;
	// b 0x82b0e8e4
	goto loc_82B0E8E4;
loc_82B0E89C:
	// addis r9,r31,222
	ctx.r9.s64 = ctx.r31.s64 + 14548992;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r9,r9,-1968
	ctx.r9.s64 = ctx.r9.s64 + -1968;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82B0E8AC:
	// cmplwi cr6,r8,70
	cr6.compare<uint32_t>(ctx.r8.u32, 70, xer);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// bge cr6,0x82b0e8bc
	if (!cr6.lt) goto loc_82B0E8BC;
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_82B0E8BC:
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r7,65535
	cr6.compare<uint32_t>(ctx.r7.u32, 65535, xer);
	// beq cr6,0x82b0e8d4
	if (cr6.eq) goto loc_82B0E8D4;
	// lbz r11,402(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 402);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82b0e844
	if (!cr6.eq) goto loc_82B0E844;
loc_82B0E8D4:
	// addi r10,r10,404
	ctx.r10.s64 = ctx.r10.s64 + 404;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplwi cr6,r10,28280
	cr6.compare<uint32_t>(ctx.r10.u32, 28280, xer);
	// blt cr6,0x82b0e8ac
	if (cr6.lt) goto loc_82B0E8AC;
loc_82B0E8E4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B0E8E8:
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

__attribute__((alias("__imp__sub_82B0E900"))) PPC_WEAK_FUNC(sub_82B0E900);
PPC_FUNC_IMPL(__imp__sub_82B0E900) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82B0E908;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// li r29,68
	ctx.r29.s64 = 68;
	// lwz r10,104(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r3,100
	ctx.r30.s64 = ctx.r3.s64 + 100;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r28,r9,r29
	ctx.r28.s32 = PPCDivide(ctx.r9.s32, ctx.r29.s32);
	// bl 0x82d1c1a8
	ctx.lr = 0x82B0E92C;
	sub_82D1C1A8(ctx, base);
	// cmplw cr6,r28,r3
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r3.u32, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bgt cr6,0x82b0e954
	if (cr6.gt) goto loc_82B0E954;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,15512
	ctx.r11.s64 = ctx.r11.s64 + 15512;
	// addi r5,r11,-44
	ctx.r5.s64 = ctx.r11.s64 + -44;
	// bl 0x82d20da8
	ctx.lr = 0x82B0E94C;
	sub_82D20DA8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82B0E954:
	// bl 0x82d1c1a8
	ctx.lr = 0x82B0E958;
	sub_82D1C1A8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r29
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r29.s32);
	// cmplw cr6,r8,r3
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, xer);
	// bgt cr6,0x82b0e97c
	if (cr6.gt) goto loc_82B0E97C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82B0E97C;
	sub_831CC188(ctx, base);
loc_82B0E97C:
	// mulli r10,r3,68
	ctx.r10.s64 = ctx.r3.s64 * 68;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x82b0ea94
	if (cr6.gt) goto loc_82B0EA94;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82b0e9c0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B0E9C0;
	// bdzf 4*cr6+eq,0x82b0ea60
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82B0EA60;
	// bne cr6,0x82b0ea80
	if (!cr6.eq) goto loc_82B0EA80;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,15512
	ctx.r11.s64 = ctx.r11.s64 + 15512;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-36
	ctx.r5.s64 = ctx.r11.s64 + -36;
	// bl 0x82d20da8
	ctx.lr = 0x82B0E9B8;
	sub_82D20DA8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82B0E9C0:
	// bl 0x831156e8
	ctx.lr = 0x82B0E9C4;
	sub_831156E8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r6,r10,-2780
	ctx.r6.s64 = ctx.r10.s64 + -2780;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x83163c08
	ctx.lr = 0x82B0E9EC;
	sub_83163C08(ctx, base);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// addi r11,r11,15512
	ctx.r11.s64 = ctx.r11.s64 + 15512;
	// bne cr6,0x82b0ea44
	if (!cr6.eq) goto loc_82B0EA44;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,-28
	ctx.r3.s64 = ctx.r11.s64 + -28;
	// bl 0x82d2fa90
	ctx.lr = 0x82B0EA18;
	sub_82D2FA90(ctx, base);
	// lis r4,270
	ctx.r4.s64 = 17694720;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r4,r4,165
	ctx.r4.u64 = ctx.r4.u64 | 165;
	// bl 0x82d2ada8
	ctx.lr = 0x82B0EA28;
	sub_82D2ADA8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83103100
	ctx.lr = 0x82B0EA34;
	sub_83103100(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f73d60
	ctx.lr = 0x82B0EA3C;
	sub_82F73D60(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82B0EA44:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,-16
	ctx.r5.s64 = ctx.r11.s64 + -16;
	// bl 0x82d20da8
	ctx.lr = 0x82B0EA50;
	sub_82D20DA8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f73d60
	ctx.lr = 0x82B0EA58;
	sub_82F73D60(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82B0EA60:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,15512
	ctx.r11.s64 = ctx.r11.s64 + 15512;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-8
	ctx.r5.s64 = ctx.r11.s64 + -8;
	// bl 0x82d20da8
	ctx.lr = 0x82B0EA78;
	sub_82D20DA8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82B0EA80:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,15512
	ctx.r5.s64 = ctx.r11.s64 + 15512;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82d20da8
	ctx.lr = 0x82B0EA94;
	sub_82D20DA8(ctx, base);
loc_82B0EA94:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B0EA9C"))) PPC_WEAK_FUNC(sub_82B0EA9C);
PPC_FUNC_IMPL(__imp__sub_82B0EA9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B0EAA0"))) PPC_WEAK_FUNC(sub_82B0EAA0);
PPC_FUNC_IMPL(__imp__sub_82B0EAA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82B0EAA8;
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
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r27,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r27.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stb r29,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r29.u8);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// bl 0x8259cb28
	ctx.lr = 0x82B0EAE8;
	sub_8259CB28(ctx, base);
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,40
	ctx.r4.s64 = ctx.r30.s64 + 40;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// lwz r9,36(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// stw r27,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r27.u32);
	// stw r29,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r29.u32);
	// stb r29,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r29.u8);
	// bl 0x8259cb28
	ctx.lr = 0x82B0EB18;
	sub_8259CB28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B0EB24"))) PPC_WEAK_FUNC(sub_82B0EB24);
PPC_FUNC_IMPL(__imp__sub_82B0EB24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B0EB28"))) PPC_WEAK_FUNC(sub_82B0EB28);
PPC_FUNC_IMPL(__imp__sub_82B0EB28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82B0EB30;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82b0ebb0
	if (cr6.eq) goto loc_82B0EBB0;
	// addi r31,r3,60
	ctx.r31.s64 = ctx.r3.s64 + 60;
	// li r28,2
	ctx.r28.s64 = 2;
	// li r29,15
	ctx.r29.s64 = 15;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82B0EB50:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b0eb6c
	if (cr6.lt) goto loc_82B0EB6C;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// bl 0x825952b8
	ctx.lr = 0x82B0EB6C;
	sub_825952B8(ctx, base);
loc_82B0EB6C:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r30,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r30.u32);
	// stb r30,-20(r31)
	PPC_STORE_U8(ctx.r31.u32 + -20, ctx.r30.u8);
	// lwz r11,-36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82b0eb94
	if (cr6.lt) goto loc_82B0EB94;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,-56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -56);
	// bl 0x825952b8
	ctx.lr = 0x82B0EB94;
	sub_825952B8(ctx, base);
loc_82B0EB94:
	// stw r29,-36(r31)
	PPC_STORE_U32(ctx.r31.u32 + -36, ctx.r29.u32);
	// stw r30,-40(r31)
	PPC_STORE_U32(ctx.r31.u32 + -40, ctx.r30.u32);
	// stb r30,-56(r31)
	PPC_STORE_U8(ctx.r31.u32 + -56, ctx.r30.u8);
	// addi r31,r31,68
	ctx.r31.s64 = ctx.r31.s64 + 68;
	// addi r11,r31,-60
	ctx.r11.s64 = ctx.r31.s64 + -60;
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, xer);
	// bne cr6,0x82b0eb50
	if (!cr6.eq) goto loc_82B0EB50;
loc_82B0EBB0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

