#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82D93968"))) PPC_WEAK_FUNC(sub_82D93968);
PPC_FUNC_IMPL(__imp__sub_82D93968) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D93970;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// blt cr6,0x82d93994
	if (cr6.lt) goto loc_82D93994;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82d93998
	goto loc_82D93998;
loc_82D93994:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82D93998:
	// stb r31,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// bl 0x82d86078
	ctx.lr = 0x82D939A0;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d939b0
	if (!cr6.eq) goto loc_82D939B0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82D939B0:
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x83815cb0
	ctx.lr = 0x82D939B8;
	sub_83815CB0(ctx, base);
	// bl 0x825832d8
	ctx.lr = 0x82D939BC;
	sub_825832D8(ctx, base);
	// lwz r6,224(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	// li r11,-1
	ctx.r11.s64 = -1;
	// lwz r5,220(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, xer);
	// blt cr6,0x82d93a28
	if (cr6.lt) goto loc_82D93A28;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82d93a28
	if (!cr6.eq) goto loc_82D93A28;
	// lwz r5,216(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82d93a08
	if (cr6.eq) goto loc_82D93A08;
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// ori r4,r4,497
	ctx.r4.u64 = ctx.r4.u64 | 497;
	// bl 0x82d042a8
	ctx.lr = 0x82D939F4;
	sub_82D042A8(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82D93A08:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r4,r11,27680
	ctx.r4.s64 = ctx.r11.s64 + 27680;
	// bl 0x8259d6c0
	ctx.lr = 0x82D93A14;
	sub_8259D6C0(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82D93A28:
	// li r30,15
	ctx.r30.s64 = 15;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// cmpwi cr6,r6,-1
	cr6.compare<int32_t>(ctx.r6.s32, -1, xer);
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bne cr6,0x82d93a54
	if (!cr6.eq) goto loc_82D93A54;
	// lis r4,509
	ctx.r4.s64 = 33357824;
	// ori r4,r4,212
	ctx.r4.u64 = ctx.r4.u64 | 212;
	// bl 0x82d042a8
	ctx.lr = 0x82D93A50;
	sub_82D042A8(ctx, base);
	// b 0x82d93a7c
	goto loc_82D93A7C;
loc_82D93A54:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82d93a70
	if (!cr6.eq) goto loc_82D93A70;
	// lis r4,509
	ctx.r4.s64 = 33357824;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// ori r4,r4,213
	ctx.r4.u64 = ctx.r4.u64 | 213;
	// bl 0x82d042a8
	ctx.lr = 0x82D93A6C;
	sub_82D042A8(ctx, base);
	// b 0x82d93a7c
	goto loc_82D93A7C;
loc_82D93A70:
	// lis r4,51
	ctx.r4.s64 = 3342336;
	// ori r4,r4,51
	ctx.r4.u64 = ctx.r4.u64 | 51;
	// bl 0x82d042a8
	ctx.lr = 0x82D93A7C;
	sub_82D042A8(ctx, base);
loc_82D93A7C:
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// lis r4,503
	ctx.r4.s64 = 32964608;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// ori r4,r4,6
	ctx.r4.u64 = ctx.r4.u64 | 6;
	// bl 0x82d04220
	ctx.lr = 0x82D93A98;
	sub_82D04220(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82d93aac
	if (!cr6.lt) goto loc_82D93AAC;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
loc_82D93AAC:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82d93ac0
	if (!cr6.lt) goto loc_82D93AC0;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
loc_82D93AC0:
	// lis r4,206
	ctx.r4.s64 = 13500416;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r4,r4,276
	ctx.r4.u64 = ctx.r4.u64 | 276;
	// bl 0x82d042a8
	ctx.lr = 0x82D93AD0;
	sub_82D042A8(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r31,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r31.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8387e8e0
	ctx.lr = 0x82D93AE4;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387e8e0
	ctx.lr = 0x82D93AEC;
	sub_8387E8E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D93AF8"))) PPC_WEAK_FUNC(sub_82D93AF8);
PPC_FUNC_IMPL(__imp__sub_82D93AF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D93B00;
	__savegprlr_28(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// lis r4,507
	ctx.r4.s64 = 33226752;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stb r29,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r29.u8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,62
	ctx.r4.u64 = ctx.r4.u64 | 62;
	// bl 0x82d04220
	ctx.lr = 0x82D93B2C;
	sub_82D04220(ctx, base);
	// bl 0x82d86078
	ctx.lr = 0x82D93B30;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d93b78
	if (!cr6.eq) goto loc_82D93B78;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82D93B4C;
	sub_8259CB28(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d93b6c
	if (cr6.lt) goto loc_82D93B6C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82D93B6C;
	sub_825952B8(ctx, base);
loc_82D93B6C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82D93B78:
	// lwz r30,116(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83815cb0
	ctx.lr = 0x82D93B84;
	sub_83815CB0(ctx, base);
	// bl 0x825832d8
	ctx.lr = 0x82D93B88;
	sub_825832D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825832d8
	ctx.lr = 0x82D93B94;
	sub_825832D8(ctx, base);
	// bl 0x82d99c10
	ctx.lr = 0x82D93B98;
	sub_82D99C10(ctx, base);
	// bl 0x825832f0
	ctx.lr = 0x82D93B9C;
	sub_825832F0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d93bd0
	if (!cr6.eq) goto loc_82D93BD0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82D93BBC;
	sub_8259CB28(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82D93BC4;
	sub_8387E8E0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82D93BD0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835d3178
	ctx.lr = 0x82D93BD8;
	sub_835D3178(ctx, base);
	// cmplwi cr6,r3,5
	cr6.compare<uint32_t>(ctx.r3.u32, 5, xer);
	// bgt cr6,0x82d93ca8
	if (cr6.gt) goto loc_82D93CA8;
	// mtctr r3
	ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82d93ca4
	if (cr6.eq) goto loc_82D93CA4;
	// bdz 0x82d93c00
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82D93C00;
	// bdz 0x82d93c24
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82D93C24;
	// bdz 0x82d93c48
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82D93C48;
	// bdz 0x82d93c64
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82D93C64;
	// b 0x82d93c80
	goto loc_82D93C80;
loc_82D93C00:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r3,r10,16
	ctx.r3.u64 = ctx.r10.u32 & 0xFFFF;
	// bl 0x82d8bc98
	ctx.lr = 0x82D93C14;
	sub_82D8BC98(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82d93ca8
	if (cr6.eq) goto loc_82D93CA8;
	// b 0x82d93ca4
	goto loc_82D93CA4;
loc_82D93C24:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// clrlwi r3,r11,14
	ctx.r3.u64 = ctx.r11.u32 & 0x3FFFF;
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// bl 0x82d8bd80
	ctx.lr = 0x82D93C38;
	sub_82D8BD80(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82d93ca8
	if (cr6.eq) goto loc_82D93CA8;
	// b 0x82d93ca4
	goto loc_82D93CA4;
loc_82D93C48:
	// lwz r4,108(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// bl 0x82d8bba8
	ctx.lr = 0x82D93C54;
	sub_82D8BBA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d93ca8
	if (cr6.eq) goto loc_82D93CA8;
	// b 0x82d93ca4
	goto loc_82D93CA4;
loc_82D93C64:
	// lwz r4,116(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x82d8bc28
	ctx.lr = 0x82D93C70;
	sub_82D8BC28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d93ca8
	if (cr6.eq) goto loc_82D93CA8;
	// b 0x82d93ca4
	goto loc_82D93CA4;
loc_82D93C80:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d98848
	ctx.lr = 0x82D93C8C;
	sub_82D98848(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d93ca8
	if (cr6.eq) goto loc_82D93CA8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82d93ca8
	if (!cr6.eq) goto loc_82D93CA8;
loc_82D93CA4:
	// li r29,1
	ctx.r29.s64 = 1;
loc_82D93CA8:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d93d60
	if (!cr6.eq) goto loc_82D93D60;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r31,r11,27218
	ctx.r31.s64 = ctx.r11.s64 + 27218;
	// addi r4,r31,-1
	ctx.r4.s64 = ctx.r31.s64 + -1;
	// bl 0x837b0c10
	ctx.lr = 0x82D93CC8;
	sub_837B0C10(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x82D93CD4;
	sub_837B0C10(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82d93118
	ctx.lr = 0x82D93CE0;
	sub_82D93118(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d93d40
	if (cr6.eq) goto loc_82D93D40;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82d93418
	ctx.lr = 0x82D93CF8;
	sub_82D93418(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d93d40
	if (cr6.eq) goto loc_82D93D40;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82d93d18
	if (!cr6.lt) goto loc_82D93D18;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
loc_82D93D18:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82d93d2c
	if (!cr6.lt) goto loc_82D93D2C;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
loc_82D93D2C:
	// lis r4,550
	ctx.r4.s64 = 36044800;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ori r4,r4,271
	ctx.r4.u64 = ctx.r4.u64 | 271;
	// bl 0x82d042a8
	ctx.lr = 0x82D93D3C;
	sub_82D042A8(ctx, base);
	// b 0x82d93d50
	goto loc_82D93D50;
loc_82D93D40:
	// lis r4,527
	ctx.r4.s64 = 34537472;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ori r4,r4,69
	ctx.r4.u64 = ctx.r4.u64 | 69;
	// bl 0x82d04220
	ctx.lr = 0x82D93D50;
	sub_82D04220(ctx, base);
loc_82D93D50:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8387e8e0
	ctx.lr = 0x82D93D58;
	sub_8387E8E0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8387e8e0
	ctx.lr = 0x82D93D60;
	sub_8387E8E0(ctx, base);
loc_82D93D60:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8387e8e0
	ctx.lr = 0x82D93D68;
	sub_8387E8E0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D93D74"))) PPC_WEAK_FUNC(sub_82D93D74);
PPC_FUNC_IMPL(__imp__sub_82D93D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D93D78"))) PPC_WEAK_FUNC(sub_82D93D78);
PPC_FUNC_IMPL(__imp__sub_82D93D78) {
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
	// bge cr6,0x82d93db0
	if (!cr6.lt) goto loc_82D93DB0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x82d93db4
	if (!cr6.gt) goto loc_82D93DB4;
loc_82D93DB0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82D93DB4:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d93e04
	if (cr6.eq) goto loc_82D93E04;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,84
	ctx.r9.s64 = 84;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r7,r10,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// divw r30,r7,r9
	ctx.r30.s32 = PPCDivide(ctx.r7.s32, ctx.r9.s32);
	// bne cr6,0x82d93de8
	if (!cr6.eq) goto loc_82D93DE8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d92508
	ctx.lr = 0x82D93DE8;
	sub_82D92508(ctx, base);
loc_82D93DE8:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r11,r30,84
	ctx.r11.s64 = ctx.r30.s64 * 84;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d93e34
	if (cr6.eq) goto loc_82D93E34;
	// b 0x82d93e2c
	goto loc_82D93E2C;
loc_82D93E04:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82d93e1c
	if (!cr6.eq) goto loc_82D93E1C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d92508
	ctx.lr = 0x82D93E1C;
	sub_82D92508(ctx, base);
loc_82D93E1C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d93e34
	if (cr6.eq) goto loc_82D93E34;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82D93E2C:
	// li r5,84
	ctx.r5.s64 = 84;
	// bl 0x831ce980
	ctx.lr = 0x82D93E34;
	sub_831CE980(ctx, base);
loc_82D93E34:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,84
	ctx.r11.s64 = ctx.r11.s64 + 84;
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

__attribute__((alias("__imp__sub_82D93E58"))) PPC_WEAK_FUNC(sub_82D93E58);
PPC_FUNC_IMPL(__imp__sub_82D93E58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdab0
	ctx.lr = 0x82D93E60;
	__savegprlr_14(ctx, base);
	// stwu r1,-624(r1)
	ea = -624 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r3,644(r1)
	PPC_STORE_U32(ctx.r1.u32 + 644, ctx.r3.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stb r10,703(r1)
	PPC_STORE_U8(ctx.r1.u32 + 703, ctx.r10.u8);
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r17,r6
	ctx.r17.u64 = ctx.r6.u64;
	// mr r15,r7
	ctx.r15.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// mr r14,r9
	ctx.r14.u64 = ctx.r9.u64;
	// bl 0x831156e8
	ctx.lr = 0x82D93E8C;
	sub_831156E8(ctx, base);
	// lwz r19,48(r3)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(ctx.r19.u32, 0, xer);
	// beq cr6,0x82d94358
	if (cr6.eq) goto loc_82D94358;
	// lwz r28,0(r17)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,4(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// mr r23,r29
	ctx.r23.u64 = ctx.r29.u64;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// beq cr6,0x82d94340
	if (cr6.eq) goto loc_82D94340;
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// lbz r16,711(r1)
	ctx.r16.u64 = PPC_LOAD_U8(ctx.r1.u32 + 711);
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r26,1
	ctx.r26.s64 = 1;
	// ori r20,r10,65535
	ctx.r20.u64 = ctx.r10.u64 | 65535;
	// li r18,12
	ctx.r18.s64 = 12;
	// addi r21,r11,-14692
	ctx.r21.s64 = ctx.r11.s64 + -14692;
loc_82D93ECC:
	// lbzx r11,r23,r15
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + ctx.r15.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d9432c
	if (!cr6.eq) goto loc_82D9432C;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d9432c
	if (cr6.eq) goto loc_82D9432C;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// sth r29,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r29.u16);
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x8311bf98
	ctx.lr = 0x82D93EF8;
	sub_8311BF98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// li r5,224
	ctx.r5.s64 = 224;
	// bl 0x831ce980
	ctx.lr = 0x82D93F08;
	sub_831CE980(ctx, base);
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d93f24
	if (!cr6.eq) goto loc_82D93F24;
	// lwz r11,288(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x82d93f4c
	goto loc_82D93F4C;
loc_82D93F24:
	// lhz r8,284(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 284);
	// lhz r7,0(r21)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r21.u32 + 0);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x82d93f44
	if (!cr6.eq) goto loc_82D93F44;
	// lwz r10,288(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// beq cr6,0x82d93f48
	if (cr6.eq) goto loc_82D93F48;
loc_82D93F44:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82D93F48:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82D93F4C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d9432c
	if (!cr6.eq) goto loc_82D9432C;
	// lbz r10,703(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 703);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d93f70
	if (cr6.eq) goto loc_82D93F70;
	// lbz r11,66(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 66);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d9432c
	if (!cr6.eq) goto loc_82D9432C;
loc_82D93F70:
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// lwz r3,96(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	// bl 0x83179380
	ctx.lr = 0x82D93F7C;
	sub_83179380(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d9432c
	if (cr6.eq) goto loc_82D9432C;
	// clrlwi r25,r14,24
	ctx.r25.u64 = ctx.r14.u32 & 0xFF;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// beq cr6,0x82d94104
	if (cr6.eq) goto loc_82D94104;
	// clrlwi r11,r16,24
	ctx.r11.u64 = ctx.r16.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d93fa8
	if (!cr6.eq) goto loc_82D93FA8;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// b 0x82d940f0
	goto loc_82D940F0;
loc_82D93FA8:
	// cmplwi cr6,r27,12
	cr6.compare<uint32_t>(ctx.r27.u32, 12, xer);
	// bgt cr6,0x82d94104
	if (cr6.gt) goto loc_82D94104;
	// lis r12,-32039
	ctx.r12.s64 = -2099707904;
	// rlwinm r0,r27,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,16328
	ctx.r12.s64 = ctx.r12.s64 + 16328;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r27.u32) {
	case 0:
		goto loc_82D93FFC;
	case 1:
		goto loc_82D94004;
	case 2:
		goto loc_82D94004;
	case 3:
		goto loc_82D94004;
	case 4:
		goto loc_82D9403C;
	case 5:
		goto loc_82D9403C;
	case 6:
		goto loc_82D9403C;
	case 7:
		goto loc_82D9403C;
	case 8:
		goto loc_82D9403C;
	case 9:
		goto loc_82D940A4;
	case 10:
		goto loc_82D940A4;
	case 11:
		goto loc_82D940A4;
	case 12:
		goto loc_82D940A4;
	default:
		return;
	}
	// lwz r22,16380(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16380);
	// lwz r22,16388(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16388);
	// lwz r22,16388(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16388);
	// lwz r22,16388(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16388);
	// lwz r22,16444(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16444);
	// lwz r22,16444(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16444);
	// lwz r22,16444(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16444);
	// lwz r22,16444(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16444);
	// lwz r22,16444(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16444);
	// lwz r22,16548(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16548);
	// lwz r22,16548(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16548);
	// lwz r22,16548(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16548);
	// lwz r22,16548(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16548);
loc_82D93FFC:
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82d940f0
	goto loc_82D940F0;
loc_82D94004:
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82acc6b8
	ctx.lr = 0x82D94010;
	sub_82ACC6B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d94104
	if (!cr6.eq) goto loc_82D94104;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82acc6b8
	ctx.lr = 0x82D94028;
	sub_82ACC6B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d94104
	if (!cr6.eq) goto loc_82D94104;
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x82d940f0
	goto loc_82D940F0;
loc_82D9403C:
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82acc6b8
	ctx.lr = 0x82D94048;
	sub_82ACC6B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d94104
	if (!cr6.eq) goto loc_82D94104;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82acc6b8
	ctx.lr = 0x82D94060;
	sub_82ACC6B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d94104
	if (!cr6.eq) goto loc_82D94104;
	// li r4,6
	ctx.r4.s64 = 6;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82acc6b8
	ctx.lr = 0x82D94078;
	sub_82ACC6B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d94104
	if (!cr6.eq) goto loc_82D94104;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82acc6b8
	ctx.lr = 0x82D94090;
	sub_82ACC6B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d94104
	if (!cr6.eq) goto loc_82D94104;
	// li r4,8
	ctx.r4.s64 = 8;
	// b 0x82d940f0
	goto loc_82D940F0;
loc_82D940A4:
	// li r4,9
	ctx.r4.s64 = 9;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82acc6b8
	ctx.lr = 0x82D940B0;
	sub_82ACC6B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d94104
	if (!cr6.eq) goto loc_82D94104;
	// li r4,10
	ctx.r4.s64 = 10;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82acc6b8
	ctx.lr = 0x82D940C8;
	sub_82ACC6B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d94104
	if (!cr6.eq) goto loc_82D94104;
	// li r4,11
	ctx.r4.s64 = 11;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82acc6b8
	ctx.lr = 0x82D940E0;
	sub_82ACC6B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d94104
	if (!cr6.eq) goto loc_82D94104;
	// li r4,12
	ctx.r4.s64 = 12;
loc_82D940F0:
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82acc6b8
	ctx.lr = 0x82D940F8;
	sub_82ACC6B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d9432c
	if (cr6.eq) goto loc_82D9432C;
loc_82D94104:
	// sth r20,148(r1)
	PPC_STORE_U16(ctx.r1.u32 + 148, ctx.r20.u16);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r29,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r29.u32);
	// bl 0x83148550
	ctx.lr = 0x82D94114;
	sub_83148550(ctx, base);
	// stw r23,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r23.u32);
	// stb r29,157(r1)
	PPC_STORE_U8(ctx.r1.u32 + 157, ctx.r29.u8);
	// stb r26,156(r1)
	PPC_STORE_U8(ctx.r1.u32 + 156, ctx.r26.u8);
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// cmplwi cr6,r11,90
	cr6.compare<uint32_t>(ctx.r11.u32, 90, xer);
	// blt cr6,0x82d9432c
	if (cr6.lt) goto loc_82D9432C;
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bgt cr6,0x82d9432c
	if (cr6.gt) goto loc_82D9432C;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r10,r28,124
	ctx.r10.s64 = ctx.r28.s64 + 124;
loc_82D94144:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82d94164
	if (!cr6.eq) goto loc_82D94164;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// blt cr6,0x82d94144
	if (cr6.lt) goto loc_82D94144;
	// b 0x82d94168
	goto loc_82D94168;
loc_82D94164:
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
loc_82D94168:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x82d9432c
	if (cr6.eq) goto loc_82D9432C;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r29,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r29.u16);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// ld r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r10,148(r1)
	PPC_STORE_U64(ctx.r1.u32 + 148, ctx.r10.u64);
	// bl 0x83148860
	ctx.lr = 0x82D94194;
	sub_83148860(ctx, base);
	// cmpwi cr6,r3,10
	cr6.compare<int32_t>(ctx.r3.s32, 10, xer);
	// beq cr6,0x82d94320
	if (cr6.eq) goto loc_82D94320;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_82D941A0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x83148860
	ctx.lr = 0x82D941AC;
	sub_83148860(ctx, base);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,8
	cr6.compare<int32_t>(ctx.r3.s32, 8, xer);
	// stwx r3,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r3.u32);
	// beq cr6,0x82d942a8
	if (cr6.eq) goto loc_82D942A8;
	// cmpwi cr6,r3,9
	cr6.compare<int32_t>(ctx.r3.s32, 9, xer);
	// beq cr6,0x82d942a8
	if (cr6.eq) goto loc_82D942A8;
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, xer);
	// beq cr6,0x82d94270
	if (cr6.eq) goto loc_82D94270;
	// cmpwi cr6,r3,7
	cr6.compare<int32_t>(ctx.r3.s32, 7, xer);
	// beq cr6,0x82d94270
	if (cr6.eq) goto loc_82D94270;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82d94234
	if (!cr6.eq) goto loc_82D94234;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(ctx.r25.u32, 0, xer);
	// bne cr6,0x82d941fc
	if (!cr6.eq) goto loc_82D941FC;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r1,204
	ctx.r10.s64 = ctx.r1.s64 + 204;
	// sthx r26,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r26.u16);
	// b 0x82d94300
	goto loc_82D94300;
loc_82D941FC:
	// clrlwi r11,r16,24
	ctx.r11.u64 = ctx.r16.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d94218
	if (cr6.eq) goto loc_82D94218;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r1,204
	ctx.r10.s64 = ctx.r1.s64 + 204;
	// sthx r26,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r26.u16);
	// b 0x82d94300
	goto loc_82D94300;
loc_82D94218:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82a66ea0
	ctx.lr = 0x82D94224;
	sub_82A66EA0(ctx, base);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r1,204
	ctx.r10.s64 = ctx.r1.s64 + 204;
	// sthx r3,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r3.u16);
	// b 0x82d94300
	goto loc_82D94300;
loc_82D94234:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(ctx.r30.s32, 0, xer);
	// bne cr6,0x82d9424c
	if (!cr6.eq) goto loc_82D9424C;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r1,204
	ctx.r10.s64 = ctx.r1.s64 + 204;
	// sthx r26,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r26.u16);
	// b 0x82d94300
	goto loc_82D94300;
loc_82D9424C:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83148988
	ctx.lr = 0x82D9425C;
	sub_83148988(ctx, base);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r1,204
	ctx.r10.s64 = ctx.r1.s64 + 204;
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// sthx r9,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u16);
	// b 0x82d94300
	goto loc_82D94300;
loc_82D94270:
	// stw r18,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r18.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x83120738
	ctx.lr = 0x82D94284;
	sub_83120738(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83148988
	ctx.lr = 0x82D94294;
	sub_83148988(ctx, base);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r1,204
	ctx.r10.s64 = ctx.r1.s64 + 204;
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// sthx r9,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u16);
	// b 0x82d94300
	goto loc_82D94300;
loc_82D942A8:
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r29,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r29.u32);
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// bl 0x831c44a0
	ctx.lr = 0x82D942BC;
	sub_831C44A0(ctx, base);
	// ld r11,284(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 284);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r8,3
	ctx.r8.s64 = 3;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r4,r28,52
	ctx.r4.s64 = ctx.r28.s64 + 52;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x831c5550
	ctx.lr = 0x82D942E8;
	sub_831C5550(ctx, base);
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r1,204
	ctx.r9.s64 = ctx.r1.s64 + 204;
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// sthx r8,r10,r9
	PPC_STORE_U16(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u16);
	// bl 0x827ac0e0
	ctx.lr = 0x82D94300;
	sub_827AC0E0(ctx, base);
loc_82D94300:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x83148860
	ctx.lr = 0x82D94314;
	sub_83148860(ctx, base);
	// cmpwi cr6,r3,10
	cr6.compare<int32_t>(ctx.r3.s32, 10, xer);
	// bne cr6,0x82d941a0
	if (!cr6.eq) goto loc_82D941A0;
	// lwz r31,644(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 644);
loc_82D94320:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d93d78
	ctx.lr = 0x82D9432C;
	sub_82D93D78(ctx, base);
loc_82D9432C:
	// lwz r11,4(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// addi r28,r28,144
	ctx.r28.s64 = ctx.r28.s64 + 144;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// bne cr6,0x82d93ecc
	if (!cr6.eq) goto loc_82D93ECC;
loc_82D94340:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r11,84
	ctx.r11.s64 = 84;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r10,r3,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r3.s64;
	// divw r5,r10,r11
	ctx.r5.s32 = PPCDivide(ctx.r10.s32, ctx.r11.s32);
	// bl 0x82d915a0
	ctx.lr = 0x82D94358;
	sub_82D915A0(ctx, base);
loc_82D94358:
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D94360"))) PPC_WEAK_FUNC(sub_82D94360);
PPC_FUNC_IMPL(__imp__sub_82D94360) {
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
	ctx.lr = 0x82D94368;
	__savegprlr_14(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4656(r1)
	ea = -4656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r3,4676(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4676, ctx.r3.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r14,r6
	ctx.r14.u64 = ctx.r6.u64;
	// cmpwi cr6,r4,4
	cr6.compare<int32_t>(ctx.r4.s32, 4, xer);
	// beq cr6,0x82d9575c
	if (cr6.eq) goto loc_82D9575C;
	// bl 0x82d86078
	ctx.lr = 0x82D94390;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d9575c
	if (cr6.eq) goto loc_82D9575C;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x82D943A0;
	sub_825832D8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x83102db0
	ctx.lr = 0x82D943A8;
	sub_83102DB0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// bl 0x82d98848
	ctx.lr = 0x82D943BC;
	sub_82D98848(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d9575c
	if (cr6.eq) goto loc_82D9575C;
	// addi r11,r4,36
	ctx.r11.s64 = ctx.r4.s64 + 36;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// bl 0x82d8d198
	ctx.lr = 0x82D943D8;
	sub_82D8D198(ctx, base);
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// li r15,0
	ctx.r15.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d9446c
	if (cr6.eq) goto loc_82D9446C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d98930
	ctx.lr = 0x82D943F0;
	sub_82D98930(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,3328
	ctx.r3.s64 = ctx.r1.s64 + 3328;
	// li r5,528
	ctx.r5.s64 = 528;
	// bl 0x831ce980
	ctx.lr = 0x82D94400;
	sub_831CE980(ctx, base);
	// mr r31,r15
	ctx.r31.u64 = ctx.r15.u64;
	// addi r30,r1,504
	ctx.r30.s64 = ctx.r1.s64 + 504;
loc_82D94408:
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82ac0af0
	ctx.lr = 0x82D94410;
	sub_82AC0AF0(ctx, base);
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x82d94438
	if (!cr6.lt) goto loc_82D94438;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,3328
	ctx.r9.s64 = ctx.r1.s64 + 3328;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x82abfda0
	ctx.lr = 0x82D94438;
	sub_82ABFDA0(ctx, base);
loc_82D94438:
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// bge cr6,0x82d9444c
	if (!cr6.lt) goto loc_82D9444C;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82abfda0
	ctx.lr = 0x82D9444C;
	sub_82ABFDA0(ctx, base);
loc_82D9444C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,160
	ctx.r30.s64 = ctx.r30.s64 + 160;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// blt cr6,0x82d94408
	if (cr6.lt) goto loc_82D94408;
	// addi r3,r1,984
	ctx.r3.s64 = ctx.r1.s64 + 984;
	// addi r4,r1,3808
	ctx.r4.s64 = ctx.r1.s64 + 3808;
	// li r5,47
	ctx.r5.s64 = 47;
	// bl 0x831ce980
	ctx.lr = 0x82D9446C;
	sub_831CE980(ctx, base);
loc_82D9446C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d99550
	ctx.lr = 0x82D94474;
	sub_82D99550(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83102db0
	ctx.lr = 0x82D9447C;
	sub_83102DB0(ctx, base);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,3
	cr6.compare<int32_t>(ctx.r29.s32, 3, xer);
	// bne cr6,0x82d94550
	if (!cr6.eq) goto loc_82D94550;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d99c10
	ctx.lr = 0x82D94490;
	sub_82D99C10(ctx, base);
	// bl 0x825832f0
	ctx.lr = 0x82D94494;
	sub_825832F0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d9575c
	if (cr6.eq) goto loc_82D9575C;
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r31,r15
	ctx.r31.u64 = ctx.r15.u64;
loc_82D944A8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d98848
	ctx.lr = 0x82D944B4;
	sub_82D98848(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d98848
	ctx.lr = 0x82D944C4;
	sub_82D98848(ctx, base);
	// subf r11,r28,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r28.s64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r30,r8,r30
	ctx.r30.u64 = ctx.r8.u64 & ctx.r30.u64;
	// blt cr6,0x82d944a8
	if (cr6.lt) goto loc_82D944A8;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d94500
	if (cr6.eq) goto loc_82D94500;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d98930
	ctx.lr = 0x82D944F4;
	sub_82D98930(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d99658
	ctx.lr = 0x82D94500;
	sub_82D99658(ctx, base);
loc_82D94500:
	// mr r31,r15
	ctx.r31.u64 = ctx.r15.u64;
loc_82D94504:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d987f8
	ctx.lr = 0x82D94510;
	sub_82D987F8(ctx, base);
	// bl 0x825832e0
	ctx.lr = 0x82D94514;
	sub_825832E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82d9a868
	ctx.lr = 0x82D94520;
	sub_82D9A868(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82ad4478
	ctx.lr = 0x82D9452C;
	sub_82AD4478(ctx, base);
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d996b0
	ctx.lr = 0x82D9453C;
	sub_82D996B0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,18
	cr6.compare<uint32_t>(ctx.r31.u32, 18, xer);
	// blt cr6,0x82d94504
	if (cr6.lt) goto loc_82D94504;
	// addi r1,r1,4656
	ctx.r1.s64 = ctx.r1.s64 + 4656;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
loc_82D94550:
	// bl 0x831156e8
	ctx.lr = 0x82D94554;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r20,2
	ctx.r20.s64 = 2;
	// li r23,5
	ctx.r23.s64 = 5;
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(ctx.r29.s32, 2, xer);
	// stw r20,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r20.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// bne cr6,0x82d94574
	if (!cr6.eq) goto loc_82D94574;
	// stw r23,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r23.u32);
loc_82D94574:
	// li r5,250
	ctx.r5.s64 = 250;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,1040
	ctx.r3.s64 = ctx.r1.s64 + 1040;
	// mr r16,r15
	ctx.r16.u64 = ctx.r15.u64;
	// li r24,1
	ctx.r24.s64 = 1;
	// mr r21,r20
	ctx.r21.u64 = ctx.r20.u64;
	// mr r22,r20
	ctx.r22.u64 = ctx.r20.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x82D94594;
	sub_831CDCF0(ctx, base);
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
	// mr r26,r15
	ctx.r26.u64 = ctx.r15.u64;
	// mr r25,r15
	ctx.r25.u64 = ctx.r15.u64;
	// li r18,84
	ctx.r18.s64 = 84;
	// stw r15,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r15.u32);
	// stw r15,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r15.u32);
	// sth r15,8(r11)
	PPC_STORE_U16(ctx.r11.u32 + 8, ctx.r15.u16);
	// stb r15,10(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10, ctx.r15.u8);
	// lis r11,-17874
	ctx.r11.s64 = -1171390464;
	// ori r19,r11,35747
	ctx.r19.u64 = ctx.r11.u64 | 35747;
loc_82D945BC:
	// mulhwu r11,r25,r19
	ctx.r11.u64 = (uint64_t(ctx.r25.u32) * uint64_t(ctx.r19.u32)) >> 32;
	// rlwinm r10,r11,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// li r29,13
	ctx.r29.s64 = 13;
	// cmplwi cr6,r25,11
	cr6.compare<uint32_t>(ctx.r25.u32, 11, xer);
	// mulli r9,r10,11
	ctx.r9.s64 = ctx.r10.s64 * 11;
	// bge cr6,0x82d945e0
	if (!cr6.lt) goto loc_82D945E0;
	// subf r8,r9,r25
	ctx.r8.s64 = ctx.r25.s64 - ctx.r9.s64;
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// b 0x82d948a0
	goto loc_82D948A0;
loc_82D945E0:
	// subf. r28,r9,r25
	ctx.r28.s64 = ctx.r25.s64 - ctx.r9.s64;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// bne 0x82d94600
	if (!cr0.eq) goto loc_82D94600;
	// li r10,11
	ctx.r10.s64 = 11;
	// addi r11,r1,103
	ctx.r11.s64 = ctx.r1.s64 + 103;
	// mr r9,r15
	ctx.r9.u64 = ctx.r15.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82D945F8:
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x82d945f8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82D945F8;
loc_82D94600:
	// li r26,1
	ctx.r26.s64 = 1;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x82d94620
	if (cr6.eq) goto loc_82D94620;
	// stb r26,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r26.u8);
	// mr r29,r15
	ctx.r29.u64 = ctx.r15.u64;
	// addi r24,r24,-1
	ctx.r24.s64 = ctx.r24.s64 + -1;
	// mr r26,r15
	ctx.r26.u64 = ctx.r15.u64;
	// b 0x82d948c8
	goto loc_82D948C8;
loc_82D94620:
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(ctx.r20.u32, 0, xer);
	// beq cr6,0x82d946d0
	if (cr6.eq) goto loc_82D946D0;
	// mr r30,r15
	ctx.r30.u64 = ctx.r15.u64;
loc_82D9462C:
	// clrlwi r31,r30,24
	ctx.r31.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r31,11
	cr6.compare<uint32_t>(ctx.r31.u32, 11, xer);
	// bge cr6,0x82d94654
	if (!cr6.lt) goto loc_82D94654;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82acc710
	ctx.lr = 0x82D94644;
	sub_82ACC710(ctx, base);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// lbz r11,33(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x82d9469c
	if (cr6.eq) goto loc_82D9469C;
loc_82D94654:
	// cmplwi cr6,r31,11
	cr6.compare<uint32_t>(ctx.r31.u32, 11, xer);
	// bge cr6,0x82d946b0
	if (!cr6.lt) goto loc_82D946B0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82acc710
	ctx.lr = 0x82D94668;
	sub_82ACC710(ctx, base);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// lbz r11,33(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x82d9469c
	if (cr6.eq) goto loc_82D9469C;
	// cmplwi cr6,r31,11
	cr6.compare<uint32_t>(ctx.r31.u32, 11, xer);
	// bge cr6,0x82d946b0
	if (!cr6.lt) goto loc_82D946B0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82acc710
	ctx.lr = 0x82D9468C;
	sub_82ACC710(ctx, base);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// lbz r11,33(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x82d946b0
	if (!cr6.eq) goto loc_82D946B0;
loc_82D9469C:
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// lbzx r11,r30,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d946c0
	if (cr6.eq) goto loc_82D946C0;
loc_82D946B0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,11
	cr6.compare<uint32_t>(ctx.r30.u32, 11, xer);
	// blt cr6,0x82d9462c
	if (cr6.lt) goto loc_82D9462C;
	// b 0x82d946c4
	goto loc_82D946C4;
loc_82D946C0:
	// stbx r26,r30,r10
	PPC_STORE_U8(ctx.r30.u32 + ctx.r10.u32, ctx.r26.u8);
loc_82D946C4:
	// addi r20,r20,-1
	ctx.r20.s64 = ctx.r20.s64 + -1;
	// cmpwi cr6,r29,13
	cr6.compare<int32_t>(ctx.r29.s32, 13, xer);
	// bne cr6,0x82d948c8
	if (!cr6.eq) goto loc_82D948C8;
loc_82D946D0:
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(ctx.r21.u32, 0, xer);
	// beq cr6,0x82d947c8
	if (cr6.eq) goto loc_82D947C8;
	// mr r30,r15
	ctx.r30.u64 = ctx.r15.u64;
loc_82D946DC:
	// clrlwi r31,r30,24
	ctx.r31.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r31,11
	cr6.compare<uint32_t>(ctx.r31.u32, 11, xer);
	// bge cr6,0x82d94704
	if (!cr6.lt) goto loc_82D94704;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82acc710
	ctx.lr = 0x82D946F4;
	sub_82ACC710(ctx, base);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// lbz r11,33(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x82d94794
	if (cr6.eq) goto loc_82D94794;
loc_82D94704:
	// cmplwi cr6,r31,11
	cr6.compare<uint32_t>(ctx.r31.u32, 11, xer);
	// bge cr6,0x82d947a8
	if (!cr6.lt) goto loc_82D947A8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82acc710
	ctx.lr = 0x82D94718;
	sub_82ACC710(ctx, base);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// lbz r11,33(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// beq cr6,0x82d94794
	if (cr6.eq) goto loc_82D94794;
	// cmplwi cr6,r31,11
	cr6.compare<uint32_t>(ctx.r31.u32, 11, xer);
	// bge cr6,0x82d947a8
	if (!cr6.lt) goto loc_82D947A8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82acc710
	ctx.lr = 0x82D9473C;
	sub_82ACC710(ctx, base);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// lbz r11,33(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(ctx.r11.s32, 6, xer);
	// beq cr6,0x82d94794
	if (cr6.eq) goto loc_82D94794;
	// cmplwi cr6,r31,11
	cr6.compare<uint32_t>(ctx.r31.u32, 11, xer);
	// bge cr6,0x82d947a8
	if (!cr6.lt) goto loc_82D947A8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82acc710
	ctx.lr = 0x82D94760;
	sub_82ACC710(ctx, base);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// lbz r11,33(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(ctx.r11.s32, 7, xer);
	// beq cr6,0x82d94794
	if (cr6.eq) goto loc_82D94794;
	// cmplwi cr6,r31,11
	cr6.compare<uint32_t>(ctx.r31.u32, 11, xer);
	// bge cr6,0x82d947a8
	if (!cr6.lt) goto loc_82D947A8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82acc710
	ctx.lr = 0x82D94784;
	sub_82ACC710(ctx, base);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// lbz r11,33(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// bne cr6,0x82d947a8
	if (!cr6.eq) goto loc_82D947A8;
loc_82D94794:
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// lbzx r11,r30,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d947b8
	if (cr6.eq) goto loc_82D947B8;
loc_82D947A8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,11
	cr6.compare<uint32_t>(ctx.r30.u32, 11, xer);
	// blt cr6,0x82d946dc
	if (cr6.lt) goto loc_82D946DC;
	// b 0x82d947bc
	goto loc_82D947BC;
loc_82D947B8:
	// stbx r26,r30,r10
	PPC_STORE_U8(ctx.r30.u32 + ctx.r10.u32, ctx.r26.u8);
loc_82D947BC:
	// addi r21,r21,-1
	ctx.r21.s64 = ctx.r21.s64 + -1;
	// cmpwi cr6,r29,13
	cr6.compare<int32_t>(ctx.r29.s32, 13, xer);
	// bne cr6,0x82d948c8
	if (!cr6.eq) goto loc_82D948C8;
loc_82D947C8:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(ctx.r22.u32, 0, xer);
	// beq cr6,0x82d9489c
	if (cr6.eq) goto loc_82D9489C;
	// mr r30,r15
	ctx.r30.u64 = ctx.r15.u64;
loc_82D947D4:
	// clrlwi r31,r30,24
	ctx.r31.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r31,11
	cr6.compare<uint32_t>(ctx.r31.u32, 11, xer);
	// bge cr6,0x82d947fc
	if (!cr6.lt) goto loc_82D947FC;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82acc710
	ctx.lr = 0x82D947EC;
	sub_82ACC710(ctx, base);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// lbz r11,33(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// beq cr6,0x82d94868
	if (cr6.eq) goto loc_82D94868;
loc_82D947FC:
	// cmplwi cr6,r31,11
	cr6.compare<uint32_t>(ctx.r31.u32, 11, xer);
	// bge cr6,0x82d9487c
	if (!cr6.lt) goto loc_82D9487C;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82acc710
	ctx.lr = 0x82D94810;
	sub_82ACC710(ctx, base);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// lbz r11,33(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(ctx.r11.s32, 10, xer);
	// beq cr6,0x82d94868
	if (cr6.eq) goto loc_82D94868;
	// cmplwi cr6,r31,11
	cr6.compare<uint32_t>(ctx.r31.u32, 11, xer);
	// bge cr6,0x82d9487c
	if (!cr6.lt) goto loc_82D9487C;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82acc710
	ctx.lr = 0x82D94834;
	sub_82ACC710(ctx, base);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// lbz r11,33(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(ctx.r11.s32, 11, xer);
	// beq cr6,0x82d94868
	if (cr6.eq) goto loc_82D94868;
	// cmplwi cr6,r31,11
	cr6.compare<uint32_t>(ctx.r31.u32, 11, xer);
	// bge cr6,0x82d9487c
	if (!cr6.lt) goto loc_82D9487C;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82acc710
	ctx.lr = 0x82D94858;
	sub_82ACC710(ctx, base);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// lbz r11,33(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(ctx.r11.s32, 12, xer);
	// bne cr6,0x82d9487c
	if (!cr6.eq) goto loc_82D9487C;
loc_82D94868:
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// lbzx r11,r30,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d9488c
	if (cr6.eq) goto loc_82D9488C;
loc_82D9487C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,11
	cr6.compare<uint32_t>(ctx.r30.u32, 11, xer);
	// blt cr6,0x82d947d4
	if (cr6.lt) goto loc_82D947D4;
	// b 0x82d94890
	goto loc_82D94890;
loc_82D9488C:
	// stbx r26,r30,r10
	PPC_STORE_U8(ctx.r30.u32 + ctx.r10.u32, ctx.r26.u8);
loc_82D94890:
	// addi r22,r22,-1
	ctx.r22.s64 = ctx.r22.s64 + -1;
	// cmpwi cr6,r29,13
	cr6.compare<int32_t>(ctx.r29.s32, 13, xer);
	// bne cr6,0x82d948c8
	if (!cr6.eq) goto loc_82D948C8;
loc_82D9489C:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
loc_82D948A0:
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// bge cr6,0x82d948c4
	if (!cr6.lt) goto loc_82D948C4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82acc710
	ctx.lr = 0x82D948B8;
	sub_82ACC710(ctx, base);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// lbz r29,33(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// b 0x82d948c8
	goto loc_82D948C8;
loc_82D948C4:
	// li r29,13
	ctx.r29.s64 = 13;
loc_82D948C8:
	// subfc r11,r23,r16
	xer.ca = ctx.r16.u32 >= ctx.r23.u32;
	ctx.r11.s64 = ctx.r16.s64 - ctx.r23.s64;
	// lwz r30,120(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r28,128(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r26,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r26.u8);
	// subfze r31,r10
	temp.u8 = ~ctx.r10.u32 + xer.ca < xer.ca;
	ctx.r31.u64 = ~ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r15,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r15.u32);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// stw r15,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r15.u32);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r15,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r15.u32);
	// addi r7,r1,1040
	ctx.r7.s64 = ctx.r1.s64 + 1040;
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82d93e58
	ctx.lr = 0x82D94910;
	sub_82D93E58(ctx, base);
	// lwz r9,148(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r27,144(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// subf r8,r27,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r27.s64;
	// divw. r7,r8,r18
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r18.s32);
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x82d94950
	if (!cr0.eq) goto loc_82D94950;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stb r26,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r26.u8);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r7,r1,1040
	ctx.r7.s64 = ctx.r1.s64 + 1040;
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82d93e58
	ctx.lr = 0x82D9494C;
	sub_82D93E58(ctx, base);
	// lwz r27,144(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
loc_82D94950:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// mr r30,r15
	ctx.r30.u64 = ctx.r15.u64;
	// subf r10,r27,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r27.s64;
	// divw. r28,r10,r18
	ctx.r28.s32 = PPCDivide(ctx.r10.s32, ctx.r18.s32);
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// beq 0x82d949d0
	if (cr0.eq) goto loc_82D949D0;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_82D94968:
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// li r5,84
	ctx.r5.s64 = 84;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x82D94978;
	sub_831CE980(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r29,240(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82d99fb8
	ctx.lr = 0x82D94988;
	sub_82D99FB8(ctx, base);
	// lbz r11,66(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 66);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d949b8
	if (cr6.eq) goto loc_82D949B8;
	// cmplwi cr6,r16,5
	cr6.compare<uint32_t>(ctx.r16.u32, 5, xer);
	// blt cr6,0x82d949b4
	if (cr6.lt) goto loc_82D949B4;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,84
	ctx.r31.s64 = ctx.r31.s64 + 84;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, xer);
	// blt cr6,0x82d94968
	if (cr6.lt) goto loc_82D94968;
	// b 0x82d949d0
	goto loc_82D949D0;
loc_82D949B4:
	// addi r16,r16,1
	ctx.r16.s64 = ctx.r16.s64 + 1;
loc_82D949B8:
	// addi r11,r1,1040
	ctx.r11.s64 = ctx.r1.s64 + 1040;
	// lwz r3,4676(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 4676);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stbx r10,r29,r11
	PPC_STORE_U8(ctx.r29.u32 + ctx.r11.u32, ctx.r10.u8);
	// bl 0x82d996b0
	ctx.lr = 0x82D949D0;
	sub_82D996B0(ctx, base);
loc_82D949D0:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(ctx.r27.u32, 0, xer);
	// beq cr6,0x82d949e0
	if (cr6.eq) goto loc_82D949E0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82416268
	ctx.lr = 0x82D949E0;
	sub_82416268(ctx, base);
loc_82D949E0:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// stw r15,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r15.u32);
	// stw r15,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r15.u32);
	// cmplwi cr6,r25,18
	cr6.compare<uint32_t>(ctx.r25.u32, 18, xer);
	// stw r15,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r15.u32);
	// blt cr6,0x82d945bc
	if (cr6.lt) goto loc_82D945BC;
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// lwz r3,4676(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 4676);
	// stw r15,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r15.u32);
	// stw r15,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r15.u32);
	// stw r15,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r15.u32);
	// stw r15,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r15.u32);
	// sth r15,16(r11)
	PPC_STORE_U16(ctx.r11.u32 + 16, ctx.r15.u16);
	// bl 0x82d98c30
	ctx.lr = 0x82D94A18;
	sub_82D98C30(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// li r20,12
	ctx.r20.s64 = 12;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d94dd8
	if (cr6.eq) goto loc_82D94DD8;
loc_82D94A28:
	// lwz r24,4676(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 4676);
	// mr r30,r15
	ctx.r30.u64 = ctx.r15.u64;
	// mr r29,r15
	ctx.r29.u64 = ctx.r15.u64;
	// mr r31,r15
	ctx.r31.u64 = ctx.r15.u64;
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
loc_82D94A3C:
	// lbzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d94a6c
	if (cr6.eq) goto loc_82D94A6C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bl 0x82d987f8
	ctx.lr = 0x82D94A58;
	sub_82D987F8(ctx, base);
	// bl 0x82d983f8
	ctx.lr = 0x82D94A5C;
	sub_82D983F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d94a6c
	if (cr6.eq) goto loc_82D94A6C;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_82D94A6C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// cmplwi cr6,r31,18
	cr6.compare<uint32_t>(ctx.r31.u32, 18, xer);
	// blt cr6,0x82d94a3c
	if (cr6.lt) goto loc_82D94A3C;
	// cmplwi cr6,r30,18
	cr6.compare<uint32_t>(ctx.r30.u32, 18, xer);
	// bge cr6,0x82d94dd8
	if (!cr6.lt) goto loc_82D94DD8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d98848
	ctx.lr = 0x82D94A90;
	sub_82D98848(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d94dd8
	if (cr6.eq) goto loc_82D94DD8;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// subfic r10,r30,18
	xer.ca = ctx.r30.u32 <= 18;
	ctx.r10.s64 = 18 - ctx.r30.s64;
	// li r5,250
	ctx.r5.s64 = 250;
	// subf r9,r29,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r29.s64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,1040
	ctx.r3.s64 = ctx.r1.s64 + 1040;
	// divwu r27,r9,r10
	ctx.r27.u32 = PPCDivide(ctx.r9.u32, ctx.r10.u32);
	// twllei r10,0
	// li r21,18
	ctx.r21.s64 = 18;
	// mr r22,r15
	ctx.r22.u64 = ctx.r15.u64;
	// mr r28,r15
	ctx.r28.u64 = ctx.r15.u64;
	// bl 0x831cdcf0
	ctx.lr = 0x82D94AC8;
	sub_831CDCF0(ctx, base);
	// lwz r25,116(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r30,r15
	ctx.r30.u64 = ctx.r15.u64;
	// li r26,1
	ctx.r26.s64 = 1;
loc_82D94AD4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d987f8
	ctx.lr = 0x82D94AE0;
	sub_82D987F8(ctx, base);
	// bl 0x82d983f8
	ctx.lr = 0x82D94AE4;
	sub_82D983F8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d94ba4
	if (cr6.eq) goto loc_82D94BA4;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r31,r15
	ctx.r31.u64 = ctx.r15.u64;
	// bl 0x82d99fa0
	ctx.lr = 0x82D94AFC;
	sub_82D99FA0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d94b3c
	if (cr6.eq) goto loc_82D94B3C;
loc_82D94B04:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d99fb8
	ctx.lr = 0x82D94B10;
	sub_82D99FB8(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82d94b28
	if (!cr6.eq) goto loc_82D94B28;
	// addi r11,r1,1040
	ctx.r11.s64 = ctx.r1.s64 + 1040;
	// stbx r26,r31,r11
	PPC_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r26.u8);
loc_82D94B28:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x82d99fa0
	ctx.lr = 0x82D94B34;
	sub_82D99FA0(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// blt cr6,0x82d94b04
	if (cr6.lt) goto loc_82D94B04;
loc_82D94B3C:
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// lbzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d94ba4
	if (!cr6.eq) goto loc_82D94BA4;
	// lwz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, xer);
	// ble cr6,0x82d94ba4
	if (!cr6.gt) goto loc_82D94BA4;
	// cmplw cr6,r11,r22
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, xer);
	// ble cr6,0x82d94ba4
	if (!cr6.gt) goto loc_82D94BA4;
	// mulhwu r10,r30,r19
	ctx.r10.u64 = (uint64_t(ctx.r30.u32) * uint64_t(ctx.r19.u32)) >> 32;
	// rlwinm r9,r10,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// mr r22,r11
	ctx.r22.u64 = ctx.r11.u64;
	// mulli r8,r9,11
	ctx.r8.s64 = ctx.r9.s64 * 11;
	// subf r7,r8,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r8.s64;
	// mr r21,r30
	ctx.r21.u64 = ctx.r30.u64;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x82d94ba0
	if (!cr6.lt) goto loc_82D94BA0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82acc710
	ctx.lr = 0x82D94B94;
	sub_82ACC710(ctx, base);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// lbz r28,33(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 33);
	// b 0x82d94ba4
	goto loc_82D94BA4;
loc_82D94BA0:
	// li r28,13
	ctx.r28.s64 = 13;
loc_82D94BA4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,18
	cr6.compare<int32_t>(ctx.r30.s32, 18, xer);
	// blt cr6,0x82d94ad4
	if (cr6.lt) goto loc_82D94AD4;
	// cmpwi cr6,r21,18
	cr6.compare<int32_t>(ctx.r21.s32, 18, xer);
	// beq cr6,0x82d94dd8
	if (cr6.eq) goto loc_82D94DD8;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d987f8
	ctx.lr = 0x82D94BC4;
	sub_82D987F8(ctx, base);
	// bl 0x82d983f8
	ctx.lr = 0x82D94BC8;
	sub_82D983F8(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// sth r15,144(r1)
	PPC_STORE_U16(ctx.r1.u32 + 144, ctx.r15.u16);
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// ld r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// bl 0x8311bf98
	ctx.lr = 0x82D94BE4;
	sub_8311BF98(ctx, base);
	// stw r15,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r15.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// stw r15,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r15.u32);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(ctx.r28.s32, 0, xer);
	// stw r15,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r15.u32);
	// beq cr6,0x82d94c08
	if (cr6.eq) goto loc_82D94C08;
	// cmpwi cr6,r21,11
	cr6.compare<int32_t>(ctx.r21.s32, 11, xer);
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// bge cr6,0x82d94c0c
	if (!cr6.lt) goto loc_82D94C0C;
loc_82D94C08:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82D94C0C:
	// stb r26,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r26.u8);
	// li r10,0
	ctx.r10.s64 = 0;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// lwz r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r7,r1,1040
	ctx.r7.s64 = ctx.r1.s64 + 1040;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82d93e58
	ctx.lr = 0x82D94C34;
	sub_82D93E58(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r24,160(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// subf r10,r24,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r24.s64;
	// divw. r27,r10,r18
	ctx.r27.s32 = PPCDivide(ctx.r10.s32, ctx.r18.s32);
	cr0.compare<int32_t>(ctx.r27.s32, 0, xer);
	// beq 0x82d94da0
	if (cr0.eq) goto loc_82D94DA0;
	// mr r26,r15
	ctx.r26.u64 = ctx.r15.u64;
	// mr r28,r15
	ctx.r28.u64 = ctx.r15.u64;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
loc_82D94C54:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82d99fb8
	ctx.lr = 0x82D94C60;
	sub_82D99FB8(ctx, base);
	// sth r15,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r15.u16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// ld r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x8311bf98
	ctx.lr = 0x82D94C7C;
	sub_8311BF98(ctx, base);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplw cr6,r10,r22
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r22.u32, xer);
	// bge cr6,0x82d94d38
	if (!cr6.lt) goto loc_82D94D38;
	// stw r20,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r20.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83120738
	ctx.lr = 0x82D94CA0;
	sub_83120738(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82d94ccc
	if (!cr6.eq) goto loc_82D94CCC;
	// stw r20,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r20.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83120738
	ctx.lr = 0x82D94CC0;
	sub_83120738(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82d94d38
	if (!cr6.eq) goto loc_82D94D38;
loc_82D94CCC:
	// stw r20,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r20.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x83120738
	ctx.lr = 0x82D94CE0;
	sub_83120738(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82d94d0c
	if (cr6.eq) goto loc_82D94D0C;
	// stw r20,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r20.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83120738
	ctx.lr = 0x82D94D00;
	sub_83120738(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82d94d38
	if (cr6.eq) goto loc_82D94D38;
loc_82D94D0C:
	// lbz r11,66(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 66);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d94d24
	if (cr6.eq) goto loc_82D94D24;
	// lbz r10,66(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 66);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d94d60
	if (!cr6.eq) goto loc_82D94D60;
loc_82D94D24:
	// lbz r10,66(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 66);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d94d54
	if (cr6.eq) goto loc_82D94D54;
	// cmplwi cr6,r16,5
	cr6.compare<uint32_t>(ctx.r16.u32, 5, xer);
	// blt cr6,0x82d94d4c
	if (cr6.lt) goto loc_82D94D4C;
loc_82D94D38:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,84
	ctx.r29.s64 = ctx.r29.s64 + 84;
	// cmplw cr6,r28,r27
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, xer);
	// blt cr6,0x82d94c54
	if (cr6.lt) goto loc_82D94C54;
	// b 0x82d94d84
	goto loc_82D94D84;
loc_82D94D4C:
	// addi r16,r16,1
	ctx.r16.s64 = ctx.r16.s64 + 1;
	// b 0x82d94d60
	goto loc_82D94D60;
loc_82D94D54:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d94d60
	if (cr6.eq) goto loc_82D94D60;
	// addi r16,r16,-1
	ctx.r16.s64 = ctx.r16.s64 + -1;
loc_82D94D60:
	// lwz r30,4676(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 4676);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d994b0
	ctx.lr = 0x82D94D70;
	sub_82D994B0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d996b0
	ctx.lr = 0x82D94D80;
	sub_82D996B0(ctx, base);
	// li r26,1
	ctx.r26.s64 = 1;
loc_82D94D84:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d94da8
	if (!cr6.eq) goto loc_82D94DA8;
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// li r10,1
	ctx.r10.s64 = 1;
	// stbx r10,r21,r11
	PPC_STORE_U8(ctx.r21.u32 + ctx.r11.u32, ctx.r10.u8);
	// b 0x82d94da8
	goto loc_82D94DA8;
loc_82D94DA0:
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// stbx r26,r21,r11
	PPC_STORE_U8(ctx.r21.u32 + ctx.r11.u32, ctx.r26.u8);
loc_82D94DA8:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(ctx.r24.u32, 0, xer);
	// beq cr6,0x82d94db8
	if (cr6.eq) goto loc_82D94DB8;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82416268
	ctx.lr = 0x82D94DB8;
	sub_82416268(ctx, base);
loc_82D94DB8:
	// lwz r3,4676(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 4676);
	// stw r15,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r15.u32);
	// stw r15,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r15.u32);
	// stw r15,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r15.u32);
	// bl 0x82d98c30
	ctx.lr = 0x82D94DCC;
	sub_82D98C30(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d94a28
	if (!cr6.eq) goto loc_82D94A28;
loc_82D94DD8:
	// li r23,18
	ctx.r23.s64 = 18;
	// cmplwi cr6,r14,250
	cr6.compare<uint32_t>(ctx.r14.u32, 250, xer);
	// bge cr6,0x82d950ac
	if (!cr6.lt) goto loc_82D950AC;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82d99fb8
	ctx.lr = 0x82D94DF0;
	sub_82D99FB8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r28,18
	ctx.r28.s64 = 18;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d950ac
	if (cr6.eq) goto loc_82D950AC;
	// sth r15,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r15.u16);
	// mr r26,r15
	ctx.r26.u64 = ctx.r15.u64;
	// lwz r22,124(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// ld r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x8311bf98
	ctx.lr = 0x82D94E20;
	sub_8311BF98(ctx, base);
	// stw r20,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r20.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83120738
	ctx.lr = 0x82D94E30;
	sub_83120738(ctx, base);
	// lwz r21,4676(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 4676);
	// mr r27,r15
	ctx.r27.u64 = ctx.r15.u64;
	// mr r29,r15
	ctx.r29.u64 = ctx.r15.u64;
	// lwz r25,96(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_82D94E40:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82d987f8
	ctx.lr = 0x82D94E4C;
	sub_82D987F8(ctx, base);
	// bl 0x82d983f8
	ctx.lr = 0x82D94E50;
	sub_82D983F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d94fb4
	if (cr6.eq) goto loc_82D94FB4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82d94fc4
	if (cr6.eq) goto loc_82D94FC4;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// sth r15,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r15.u16);
	// ld r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x8311bf98
	ctx.lr = 0x82D94E80;
	sub_8311BF98(ctx, base);
	// stw r20,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r20.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83120738
	ctx.lr = 0x82D94E94;
	sub_83120738(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,6
	ctx.r3.s64 = 6;
	// lwz r31,96(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x83148988
	ctx.lr = 0x82D94EA8;
	sub_83148988(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// cmplwi cr6,r16,5
	cr6.compare<uint32_t>(ctx.r16.u32, 5, xer);
	// blt cr6,0x82d94ed0
	if (cr6.lt) goto loc_82D94ED0;
	// lbz r9,66(r24)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r24.u32 + 66);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82d94ed0
	if (cr6.eq) goto loc_82D94ED0;
	// lbz r9,66(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 66);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82d94f90
	if (cr6.eq) goto loc_82D94F90;
loc_82D94ED0:
	// cmplwi cr6,r25,12
	cr6.compare<uint32_t>(ctx.r25.u32, 12, xer);
	// bgt cr6,0x82d94f90
	if (cr6.gt) goto loc_82D94F90;
	// lis r12,-32039
	ctx.r12.s64 = -2099707904;
	// rlwinm r0,r25,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,20208
	ctx.r12.s64 = ctx.r12.s64 + 20208;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r25.u32) {
	case 0:
		goto loc_82D94F24;
	case 1:
		goto loc_82D94F2C;
	case 2:
		goto loc_82D94F2C;
	case 3:
		goto loc_82D94F2C;
	case 4:
		goto loc_82D94F44;
	case 5:
		goto loc_82D94F44;
	case 6:
		goto loc_82D94F44;
	case 7:
		goto loc_82D94F44;
	case 8:
		goto loc_82D94F44;
	case 9:
		goto loc_82D94F6C;
	case 10:
		goto loc_82D94F6C;
	case 11:
		goto loc_82D94F6C;
	case 12:
		goto loc_82D94F6C;
	default:
		return;
	}
	// lwz r22,20260(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20260);
	// lwz r22,20268(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20268);
	// lwz r22,20268(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20268);
	// lwz r22,20268(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20268);
	// lwz r22,20292(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20292);
	// lwz r22,20292(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20292);
	// lwz r22,20292(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20292);
	// lwz r22,20292(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20292);
	// lwz r22,20292(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20292);
	// lwz r22,20332(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20332);
	// lwz r22,20332(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20332);
	// lwz r22,20332(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20332);
	// lwz r22,20332(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20332);
loc_82D94F24:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(ctx.r31.s32, 0, xer);
	// b 0x82d94f88
	goto loc_82D94F88;
loc_82D94F2C:
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(ctx.r31.s32, 1, xer);
	// beq cr6,0x82d94f8c
	if (cr6.eq) goto loc_82D94F8C;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// beq cr6,0x82d94f8c
	if (cr6.eq) goto loc_82D94F8C;
	// cmpwi cr6,r31,3
	cr6.compare<int32_t>(ctx.r31.s32, 3, xer);
	// b 0x82d94f88
	goto loc_82D94F88;
loc_82D94F44:
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(ctx.r31.s32, 4, xer);
	// beq cr6,0x82d94f8c
	if (cr6.eq) goto loc_82D94F8C;
	// cmpwi cr6,r31,5
	cr6.compare<int32_t>(ctx.r31.s32, 5, xer);
	// beq cr6,0x82d94f8c
	if (cr6.eq) goto loc_82D94F8C;
	// cmpwi cr6,r31,6
	cr6.compare<int32_t>(ctx.r31.s32, 6, xer);
	// beq cr6,0x82d94f8c
	if (cr6.eq) goto loc_82D94F8C;
	// cmpwi cr6,r31,7
	cr6.compare<int32_t>(ctx.r31.s32, 7, xer);
	// beq cr6,0x82d94f8c
	if (cr6.eq) goto loc_82D94F8C;
	// cmpwi cr6,r31,8
	cr6.compare<int32_t>(ctx.r31.s32, 8, xer);
	// b 0x82d94f88
	goto loc_82D94F88;
loc_82D94F6C:
	// cmpwi cr6,r31,10
	cr6.compare<int32_t>(ctx.r31.s32, 10, xer);
	// beq cr6,0x82d94f8c
	if (cr6.eq) goto loc_82D94F8C;
	// cmpwi cr6,r31,9
	cr6.compare<int32_t>(ctx.r31.s32, 9, xer);
	// beq cr6,0x82d94f8c
	if (cr6.eq) goto loc_82D94F8C;
	// cmpwi cr6,r31,11
	cr6.compare<int32_t>(ctx.r31.s32, 11, xer);
	// beq cr6,0x82d94f8c
	if (cr6.eq) goto loc_82D94F8C;
	// cmpwi cr6,r31,12
	cr6.compare<int32_t>(ctx.r31.s32, 12, xer);
loc_82D94F88:
	// bne cr6,0x82d94f90
	if (!cr6.eq) goto loc_82D94F90;
loc_82D94F8C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82D94F90:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d94fb4
	if (cr6.eq) goto loc_82D94FB4;
	// cmpwi cr6,r28,18
	cr6.compare<int32_t>(ctx.r28.s32, 18, xer);
	// beq cr6,0x82d94fac
	if (cr6.eq) goto loc_82D94FAC;
	// cmplw cr6,r27,r10
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, xer);
	// ble cr6,0x82d94fb4
	if (!cr6.gt) goto loc_82D94FB4;
loc_82D94FAC:
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_82D94FB4:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,18
	cr6.compare<int32_t>(ctx.r29.s32, 18, xer);
	// blt cr6,0x82d94e40
	if (cr6.lt) goto loc_82D94E40;
	// b 0x82d94fcc
	goto loc_82D94FCC;
loc_82D94FC4:
	// li r26,1
	ctx.r26.s64 = 1;
	// mr r23,r29
	ctx.r23.u64 = ctx.r29.u64;
loc_82D94FCC:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d950ac
	if (!cr6.eq) goto loc_82D950AC;
	// cmpwi cr6,r28,18
	cr6.compare<int32_t>(ctx.r28.s32, 18, xer);
	// bne cr6,0x82d95098
	if (!cr6.eq) goto loc_82D95098;
	// cmplwi cr6,r16,5
	cr6.compare<uint32_t>(ctx.r16.u32, 5, xer);
	// blt cr6,0x82d9508c
	if (cr6.lt) goto loc_82D9508C;
	// lbz r11,66(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 66);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d9508c
	if (cr6.eq) goto loc_82D9508C;
	// mr r30,r15
	ctx.r30.u64 = ctx.r15.u64;
	// mr r31,r15
	ctx.r31.u64 = ctx.r15.u64;
loc_82D94FFC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82d987f8
	ctx.lr = 0x82D95008;
	sub_82D987F8(ctx, base);
	// bl 0x82d983f8
	ctx.lr = 0x82D9500C;
	sub_82D983F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d95078
	if (cr6.eq) goto loc_82D95078;
	// lbz r11,66(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 66);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d95078
	if (cr6.eq) goto loc_82D95078;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// sth r15,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r15.u16);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// ld r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x8311bf98
	ctx.lr = 0x82D95038;
	sub_8311BF98(ctx, base);
	// stw r20,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r20.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x83120738
	ctx.lr = 0x82D9504C;
	sub_83120738(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,6
	ctx.r3.s64 = 6;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x83148988
	ctx.lr = 0x82D9505C;
	sub_83148988(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmpwi cr6,r28,18
	cr6.compare<int32_t>(ctx.r28.s32, 18, xer);
	// beq cr6,0x82d95070
	if (cr6.eq) goto loc_82D95070;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// bge cr6,0x82d95078
	if (!cr6.lt) goto loc_82D95078;
loc_82D95070:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_82D95078:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,18
	cr6.compare<int32_t>(ctx.r31.s32, 18, xer);
	// blt cr6,0x82d94ffc
	if (cr6.lt) goto loc_82D94FFC;
	// cmpwi cr6,r28,18
	cr6.compare<int32_t>(ctx.r28.s32, 18, xer);
	// bne cr6,0x82d95098
	if (!cr6.eq) goto loc_82D95098;
loc_82D9508C:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82d98830
	ctx.lr = 0x82D95094;
	sub_82D98830(ctx, base);
	// addi r28,r3,-1
	ctx.r28.s64 = ctx.r3.s64 + -1;
loc_82D95098:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82d996b0
	ctx.lr = 0x82D950A8;
	sub_82D996B0(ctx, base);
	// mr r23,r28
	ctx.r23.u64 = ctx.r28.u64;
loc_82D950AC:
	// addi r3,r1,2016
	ctx.r3.s64 = ctx.r1.s64 + 2016;
	// bl 0x82ae4800
	ctx.lr = 0x82D950B4;
	sub_82AE4800(ctx, base);
	// lwz r22,116(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r26,32
	ctx.r26.s64 = 32;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// bl 0x82d99fa0
	ctx.lr = 0x82D950C8;
	sub_82D99FA0(ctx, base);
	// cmplwi cr6,r3,32
	cr6.compare<uint32_t>(ctx.r3.u32, 32, xer);
	// bge cr6,0x82d950dc
	if (!cr6.lt) goto loc_82D950DC;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82d99fa0
	ctx.lr = 0x82D950D8;
	sub_82D99FA0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82D950DC:
	// lwz r11,2824(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2824);
	// mr r31,r15
	ctx.r31.u64 = ctx.r15.u64;
	// lwz r24,4676(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 4676);
	// addi r29,r1,2264
	ctx.r29.s64 = ctx.r1.s64 + 2264;
	// rlwimi r11,r30,16,9,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 16) & 0x7F0000) | (ctx.r11.u64 & 0xFFFFFFFFFF80FFFF);
	// stw r11,2824(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2824, ctx.r11.u32);
loc_82D950F4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d987f8
	ctx.lr = 0x82D95100;
	sub_82D987F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x83133f38
	ctx.lr = 0x82D95108;
	sub_83133F38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d95144
	if (!cr6.eq) goto loc_82D95144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// sth r15,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r15.u16);
	// bl 0x825832e0
	ctx.lr = 0x82D95120;
	sub_825832E0(ctx, base);
	// lwz r11,2824(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2824);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// rlwinm r10,r11,16,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x7F;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// bge cr6,0x82d95144
	if (!cr6.lt) goto loc_82D95144;
	// ld r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// addi r10,r1,2528
	ctx.r10.s64 = ctx.r1.s64 + 2528;
	// std r11,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r11.u64);
	// stbx r15,r31,r10
	PPC_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r15.u8);
loc_82D95144:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// cmpwi cr6,r31,18
	cr6.compare<int32_t>(ctx.r31.s32, 18, xer);
	// blt cr6,0x82d950f4
	if (cr6.lt) goto loc_82D950F4;
	// li r11,11
	ctx.r11.s64 = 11;
	// mr r10,r15
	ctx.r10.u64 = ctx.r15.u64;
	// li r25,255
	ctx.r25.s64 = 255;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_82D95164:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bge cr6,0x82d95178
	if (!cr6.lt) goto loc_82D95178;
	// addi r9,r1,984
	ctx.r9.s64 = ctx.r1.s64 + 984;
	// stbx r25,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r25.u8);
loc_82D95178:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x82d95164
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82D95164;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r4,r1,984
	ctx.r4.s64 = ctx.r1.s64 + 984;
	// li r5,47
	ctx.r5.s64 = 47;
	// bl 0x831ce980
	ctx.lr = 0x82D95190;
	sub_831CE980(ctx, base);
	// stb r26,281(r1)
	PPC_STORE_U8(ctx.r1.u32 + 281, ctx.r26.u8);
	// stb r26,272(r1)
	PPC_STORE_U8(ctx.r1.u32 + 272, ctx.r26.u8);
	// addi r3,r1,984
	ctx.r3.s64 = ctx.r1.s64 + 984;
	// stb r26,273(r1)
	PPC_STORE_U8(ctx.r1.u32 + 273, ctx.r26.u8);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// stb r26,274(r1)
	PPC_STORE_U8(ctx.r1.u32 + 274, ctx.r26.u8);
	// li r5,47
	ctx.r5.s64 = 47;
	// stb r26,275(r1)
	PPC_STORE_U8(ctx.r1.u32 + 275, ctx.r26.u8);
	// stb r26,276(r1)
	PPC_STORE_U8(ctx.r1.u32 + 276, ctx.r26.u8);
	// stb r26,277(r1)
	PPC_STORE_U8(ctx.r1.u32 + 277, ctx.r26.u8);
	// bl 0x831ce980
	ctx.lr = 0x82D951BC;
	sub_831CE980(ctx, base);
	// addi r3,r1,1296
	ctx.r3.s64 = ctx.r1.s64 + 1296;
	// bl 0x82d8c428
	ctx.lr = 0x82D951C4;
	sub_82D8C428(ctx, base);
	// cmpwi cr6,r23,18
	cr6.compare<int32_t>(ctx.r23.s32, 18, xer);
	// bge cr6,0x82d952a0
	if (!cr6.lt) goto loc_82D952A0;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d987f8
	ctx.lr = 0x82D951D8;
	sub_82D987F8(ctx, base);
	// sth r15,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r15.u16);
	// bl 0x825832e0
	ctx.lr = 0x82D951E0;
	sub_825832E0(ctx, base);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// ld r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x8311bf98
	ctx.lr = 0x82D951F0;
	sub_8311BF98(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r29,-1
	ctx.r29.s64 = -1;
	// mr r28,r15
	ctx.r28.u64 = ctx.r15.u64;
loc_82D951FC:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x82d95220
	if (!cr6.lt) goto loc_82D95220;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82acc710
	ctx.lr = 0x82D95218;
	sub_82ACC710(ctx, base);
	// lbzx r5,r3,r31
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r31.u32);
	// b 0x82d95224
	goto loc_82D95224;
loc_82D95220:
	// li r5,13
	ctx.r5.s64 = 13;
loc_82D95224:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// blt cr6,0x82d9527c
	if (cr6.lt) goto loc_82D9527C;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x83148988
	ctx.lr = 0x82D95238;
	sub_83148988(ctx, base);
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// clrlwi r30,r3,24
	ctx.r30.u64 = ctx.r3.u32 & 0xFF;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x82d95260
	if (!cr6.lt) goto loc_82D95260;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82acc710
	ctx.lr = 0x82D95258;
	sub_82ACC710(ctx, base);
	// lbzx r5,r3,r31
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r31.u32);
	// b 0x82d95264
	goto loc_82D95264;
loc_82D95260:
	// li r5,13
	ctx.r5.s64 = 13;
loc_82D95264:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x83148988
	ctx.lr = 0x82D95270;
	sub_83148988(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// ble cr6,0x82d95280
	if (!cr6.gt) goto loc_82D95280;
loc_82D9527C:
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_82D95280:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplwi cr6,r28,11
	cr6.compare<uint32_t>(ctx.r28.u32, 11, xer);
	// blt cr6,0x82d951fc
	if (cr6.lt) goto loc_82D951FC;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// ble cr6,0x82d952a0
	if (!cr6.gt) goto loc_82D952A0;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,1308
	ctx.r10.s64 = ctx.r1.s64 + 1308;
	// stwx r23,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r23.u32);
loc_82D952A0:
	// lwz r28,120(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// li r11,18
	ctx.r11.s64 = 18;
	// mr r30,r15
	ctx.r30.u64 = ctx.r15.u64;
	// stb r15,1297(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1297, ctx.r15.u8);
	// stb r11,1304(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1304, ctx.r11.u8);
	// addi r29,r1,1416
	ctx.r29.s64 = ctx.r1.s64 + 1416;
	// stw r28,1300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1300, ctx.r28.u32);
loc_82D952BC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d987f8
	ctx.lr = 0x82D952C8;
	sub_82D987F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83133f38
	ctx.lr = 0x82D952D0;
	sub_83133F38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d952f8
	if (!cr6.eq) goto loc_82D952F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825832e0
	ctx.lr = 0x82D952E4;
	sub_825832E0(ctx, base);
	// stw r3,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
	// sth r15,176(r1)
	PPC_STORE_U16(ctx.r1.u32 + 176, ctx.r15.u16);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82d9dcf0
	ctx.lr = 0x82D952F4;
	sub_82D9DCF0(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
loc_82D952F8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpwi cr6,r30,18
	cr6.compare<int32_t>(ctx.r30.s32, 18, xer);
	// blt cr6,0x82d952bc
	if (cr6.lt) goto loc_82D952BC;
	// cmpwi cr6,r28,5
	cr6.compare<int32_t>(ctx.r28.s32, 5, xer);
	// bne cr6,0x82d95438
	if (!cr6.eq) goto loc_82D95438;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r30,r15
	ctx.r30.u64 = ctx.r15.u64;
	// addi r31,r1,1560
	ctx.r31.s64 = ctx.r1.s64 + 1560;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r10,1544(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1544, ctx.r10.u8);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r9,1545(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1545, ctx.r9.u8);
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// stb r8,1546(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1546, ctx.r8.u8);
	// lbz r7,3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stb r7,1547(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1547, ctx.r7.u8);
	// lbz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// stb r6,1548(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1548, ctx.r6.u8);
	// lbz r5,5(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// stb r5,1549(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1549, ctx.r5.u8);
	// lbz r4,6(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// stb r4,1550(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1550, ctx.r4.u8);
	// lbz r3,7(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// stb r3,1551(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1551, ctx.r3.u8);
	// lbz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// stb r10,1552(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1552, ctx.r10.u8);
	// lbz r9,9(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// stb r9,1553(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1553, ctx.r9.u8);
	// lbz r8,10(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// stb r8,1554(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1554, ctx.r8.u8);
	// lbz r7,11(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11);
	// stb r7,1555(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1555, ctx.r7.u8);
	// lbz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// stb r6,1556(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1556, ctx.r6.u8);
	// lbz r5,13(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 13);
	// stb r5,1557(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1557, ctx.r5.u8);
loc_82D9538C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d987f8
	ctx.lr = 0x82D95398;
	sub_82D987F8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x83133f38
	ctx.lr = 0x82D953A0;
	sub_83133F38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d95428
	if (!cr6.eq) goto loc_82D95428;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d983f8
	ctx.lr = 0x82D953B4;
	sub_82D983F8(ctx, base);
	// addi r11,r3,52
	ctx.r11.s64 = ctx.r3.s64 + 52;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r10,-2(r31)
	PPC_STORE_U8(ctx.r31.u32 + -2, ctx.r10.u8);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r9,-1(r31)
	PPC_STORE_U8(ctx.r31.u32 + -1, ctx.r9.u8);
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// stb r8,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r8.u8);
	// lbz r7,3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stb r7,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r7.u8);
	// lbz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// stb r6,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r6.u8);
	// lbz r5,5(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// stb r5,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r5.u8);
	// lbz r4,6(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// stb r4,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r4.u8);
	// lbz r3,7(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// stb r3,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r3.u8);
	// lbz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// stb r10,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r10.u8);
	// lbz r9,9(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// stb r9,7(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7, ctx.r9.u8);
	// lbz r8,10(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// stb r8,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r8.u8);
	// lbz r7,11(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11);
	// stb r7,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r7.u8);
	// lbz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// stb r6,10(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10, ctx.r6.u8);
	// lbz r5,13(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 13);
	// stb r5,11(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11, ctx.r5.u8);
loc_82D95428:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,14
	ctx.r31.s64 = ctx.r31.s64 + 14;
	// cmpwi cr6,r30,18
	cr6.compare<int32_t>(ctx.r30.s32, 18, xer);
	// blt cr6,0x82d9538c
	if (cr6.lt) goto loc_82D9538C;
loc_82D95438:
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,1296
	ctx.r5.s64 = ctx.r1.s64 + 1296;
	// ori r31,r11,65535
	ctx.r31.u64 = ctx.r11.u64 | 65535;
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r3,r1,2016
	ctx.r3.s64 = ctx.r1.s64 + 2016;
	// bl 0x8314aca0
	ctx.lr = 0x82D95454;
	sub_8314ACA0(ctx, base);
	// addi r11,r1,1036
	ctx.r11.s64 = ctx.r1.s64 + 1036;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// mtctr r26
	ctr.u64 = ctx.r26.u64;
loc_82D95460:
	// sth r31,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r31.u16);
	// stwu r15,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r15.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82d95460
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82D95460;
	// li r11,8
	ctx.r11.s64 = 8;
	// lwz r9,2824(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2824);
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r10,r1,1048
	ctx.r10.s64 = ctx.r1.s64 + 1048;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// subfic r3,r8,1
	xer.ca = ctx.r8.u32 <= 1;
	ctx.r3.s64 = 1 - ctx.r8.s64;
	// subfic r31,r7,2
	xer.ca = ctx.r7.u32 <= 2;
	ctx.r31.s64 = 2 - ctx.r7.s64;
	// subfic r30,r4,3
	xer.ca = ctx.r4.u32 <= 3;
	ctx.r30.s64 = 3 - ctx.r4.s64;
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// ld r4,-14692(r11)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r11.u32 + -14692);
	// rlwinm r5,r9,16,25,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0x7F;
	// addi r7,r10,-16
	ctx.r7.s64 = ctx.r10.s64 + -16;
	// addi r29,r11,-14692
	ctx.r29.s64 = ctx.r11.s64 + -14692;
loc_82D954AC:
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bge cr6,0x82d954c4
	if (!cr6.lt) goto loc_82D954C4;
	// addi r10,r1,984
	ctx.r10.s64 = ctx.r1.s64 + 984;
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// b 0x82d954c8
	goto loc_82D954C8;
loc_82D954C4:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82D954C8:
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, xer);
	// bge cr6,0x82d954f8
	if (!cr6.lt) goto loc_82D954F8;
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r28,r1,2264
	ctx.r28.s64 = ctx.r1.s64 + 2264;
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// add. r9,r6,r10
	ctx.r9.u64 = ctx.r6.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ldx r10,r8,r28
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r8.u32 + ctx.r28.u32);
	// beq 0x82d954f8
	if (cr0.eq) goto loc_82D954F8;
	// addi r8,r1,2528
	ctx.r8.s64 = ctx.r1.s64 + 2528;
	// lbzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
loc_82D954F8:
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// std r10,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r10.u64);
	// add r9,r6,r11
	ctx.r9.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r11,r9,r3
	ctx.r11.u64 = ctx.r9.u64 + ctx.r3.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bge cr6,0x82d95520
	if (!cr6.lt) goto loc_82D95520;
	// addi r10,r1,984
	ctx.r10.s64 = ctx.r1.s64 + 984;
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// b 0x82d95524
	goto loc_82D95524;
loc_82D95520:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82D95524:
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, xer);
	// bge cr6,0x82d95550
	if (!cr6.lt) goto loc_82D95550;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r28,r1,2264
	ctx.r28.s64 = ctx.r1.s64 + 2264;
	// addic. r8,r9,1
	xer.ca = ctx.r9.u32 > 4294967294;
	ctx.r8.s64 = ctx.r9.s64 + 1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ldx r10,r10,r28
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r28.u32);
	// beq 0x82d95550
	if (cr0.eq) goto loc_82D95550;
	// addi r28,r1,2528
	ctx.r28.s64 = ctx.r1.s64 + 2528;
	// lbzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// stb r11,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r11.u8);
loc_82D95550:
	// add r11,r9,r31
	ctx.r11.u64 = ctx.r9.u64 + ctx.r31.u64;
	// std r10,16(r7)
	PPC_STORE_U64(ctx.r7.u32 + 16, ctx.r10.u64);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bge cr6,0x82d95570
	if (!cr6.lt) goto loc_82D95570;
	// addi r10,r1,984
	ctx.r10.s64 = ctx.r1.s64 + 984;
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// b 0x82d95574
	goto loc_82D95574;
loc_82D95570:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82D95574:
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, xer);
	// bge cr6,0x82d955a0
	if (!cr6.lt) goto loc_82D955A0;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r28,r1,2264
	ctx.r28.s64 = ctx.r1.s64 + 2264;
	// addic. r8,r9,2
	xer.ca = ctx.r9.u32 > 4294967293;
	ctx.r8.s64 = ctx.r9.s64 + 2;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ldx r10,r10,r28
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + ctx.r28.u32);
	// beq 0x82d955a0
	if (cr0.eq) goto loc_82D955A0;
	// addi r28,r1,2528
	ctx.r28.s64 = ctx.r1.s64 + 2528;
	// lbzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// stb r11,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r11.u8);
loc_82D955A0:
	// add r11,r9,r30
	ctx.r11.u64 = ctx.r9.u64 + ctx.r30.u64;
	// std r10,24(r7)
	PPC_STORE_U64(ctx.r7.u32 + 24, ctx.r10.u64);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(ctx.r11.u32, 32, xer);
	// bge cr6,0x82d955c0
	if (!cr6.lt) goto loc_82D955C0;
	// addi r10,r1,984
	ctx.r10.s64 = ctx.r1.s64 + 984;
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// b 0x82d955c4
	goto loc_82D955C4;
loc_82D955C0:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82D955C4:
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, xer);
	// bge cr6,0x82d955f0
	if (!cr6.lt) goto loc_82D955F0;
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r28,r1,2264
	ctx.r28.s64 = ctx.r1.s64 + 2264;
	// addic. r10,r9,3
	xer.ca = ctx.r9.u32 > 4294967292;
	ctx.r10.s64 = ctx.r9.s64 + 3;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ldx r8,r8,r28
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r8.u32 + ctx.r28.u32);
	// beq 0x82d955f0
	if (cr0.eq) goto loc_82D955F0;
	// addi r9,r1,2528
	ctx.r9.s64 = ctx.r1.s64 + 2528;
	// lbzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
loc_82D955F0:
	// stdu r8,32(r7)
	ea = 32 + ctx.r7.u32;
	PPC_STORE_U64(ea, ctx.r8.u64);
	ctx.r7.u32 = ea;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bdnz 0x82d954ac
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82D954AC;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r4,r1,984
	ctx.r4.s64 = ctx.r1.s64 + 984;
	// li r5,47
	ctx.r5.s64 = 47;
	// bl 0x831ce980
	ctx.lr = 0x82D9560C;
	sub_831CE980(ctx, base);
	// addi r5,r1,504
	ctx.r5.s64 = ctx.r1.s64 + 504;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82d8c6a0
	ctx.lr = 0x82D9561C;
	sub_82D8C6A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// li r5,47
	ctx.r5.s64 = 47;
	// bl 0x831ce980
	ctx.lr = 0x82D9562C;
	sub_831CE980(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d99550
	ctx.lr = 0x82D95634;
	sub_82D99550(ctx, base);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r30,r15
	ctx.r30.u64 = ctx.r15.u64;
	// addi r31,r1,1044
	ctx.r31.s64 = ctx.r1.s64 + 1044;
loc_82D95640:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d95658
	if (!cr6.eq) goto loc_82D95658;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// b 0x82d95680
	goto loc_82D95680;
loc_82D95658:
	// lhz r8,-4(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + -4);
	// lhz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// bne cr6,0x82d95678
	if (!cr6.eq) goto loc_82D95678;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82d9567c
	if (cr6.eq) goto loc_82D9567C;
loc_82D95678:
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
loc_82D9567C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82D95680:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d956ac
	if (!cr6.eq) goto loc_82D956AC;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82d9a868
	ctx.lr = 0x82D95698;
	sub_82D9A868(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d996b0
	ctx.lr = 0x82D956A8;
	sub_82D996B0(ctx, base);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
loc_82D956AC:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplwi cr6,r30,18
	cr6.compare<uint32_t>(ctx.r30.u32, 18, xer);
	// blt cr6,0x82d95640
	if (cr6.lt) goto loc_82D95640;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d98930
	ctx.lr = 0x82D956C4;
	sub_82D98930(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,3968
	ctx.r3.s64 = ctx.r1.s64 + 3968;
	// li r5,528
	ctx.r5.s64 = 528;
	// bl 0x831ce980
	ctx.lr = 0x82D956D4;
	sub_831CE980(ctx, base);
	// mr r31,r15
	ctx.r31.u64 = ctx.r15.u64;
	// addi r30,r1,3432
	ctx.r30.s64 = ctx.r1.s64 + 3432;
loc_82D956DC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d98848
	ctx.lr = 0x82D956E8;
	sub_82D98848(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d9575c
	if (cr6.eq) goto loc_82D9575C;
	// addi r3,r1,3328
	ctx.r3.s64 = ctx.r1.s64 + 3328;
	// bl 0x82d8d198
	ctx.lr = 0x82D956FC;
	sub_82D8D198(ctx, base);
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// blt cr6,0x82d9570c
	if (cr6.lt) goto loc_82D9570C;
	// addi r4,r1,3432
	ctx.r4.s64 = ctx.r1.s64 + 3432;
loc_82D9570C:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x82d95730
	if (!cr6.lt) goto loc_82D95730;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,3968
	ctx.r9.s64 = ctx.r1.s64 + 3968;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x82abfda0
	ctx.lr = 0x82D95730;
	sub_82ABFDA0(ctx, base);
loc_82D95730:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,160
	ctx.r30.s64 = ctx.r30.s64 + 160;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// blt cr6,0x82d956dc
	if (cr6.lt) goto loc_82D956DC;
	// addi r3,r1,4448
	ctx.r3.s64 = ctx.r1.s64 + 4448;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// li r5,47
	ctx.r5.s64 = 47;
	// bl 0x831ce980
	ctx.lr = 0x82D95750;
	sub_831CE980(ctx, base);
	// addi r4,r1,3968
	ctx.r4.s64 = ctx.r1.s64 + 3968;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82d99658
	ctx.lr = 0x82D9575C;
	sub_82D99658(ctx, base);
loc_82D9575C:
	// addi r1,r1,4656
	ctx.r1.s64 = ctx.r1.s64 + 4656;
	// b 0x831cdb00
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D95764"))) PPC_WEAK_FUNC(sub_82D95764);
PPC_FUNC_IMPL(__imp__sub_82D95764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D95768"))) PPC_WEAK_FUNC(sub_82D95768);
PPC_FUNC_IMPL(__imp__sub_82D95768) {
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
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// addi r10,r11,25556
	ctx.r10.s64 = ctx.r11.s64 + 25556;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82539ae8
	ctx.lr = 0x82D95794;
	sub_82539AE8(ctx, base);
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x82545e38
	ctx.lr = 0x82D9579C;
	sub_82545E38(ctx, base);
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825359d8
	ctx.lr = 0x82D957A8;
	sub_825359D8(ctx, base);
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r8,r9,25536
	ctx.r8.s64 = ctx.r9.s64 + 25536;
	// li r3,8192
	ctx.r3.s64 = 8192;
	// stb r30,192(r31)
	PPC_STORE_U8(ctx.r31.u32 + 192, ctx.r30.u8);
	// addi r11,r31,200
	ctx.r11.s64 = ctx.r31.s64 + 200;
	// stw r8,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r8.u32);
	// bl 0x831d2bf8
	ctx.lr = 0x82D957C8;
	sub_831D2BF8(ctx, base);
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// li r6,8192
	ctx.r6.s64 = 8192;
	// stw r3,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r3.u32);
	// addi r5,r7,25548
	ctx.r5.s64 = ctx.r7.s64 + 25548;
	// stw r30,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r30.u32);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r6,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r6.u32);
	// stw r5,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r5.u32);
	// lis r3,-32245
	ctx.r3.s64 = -2113208320;
	// stw r11,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r11.u32);
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// stw r30,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r30.u32);
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// stb r30,220(r31)
	PPC_STORE_U8(ctx.r31.u32 + 220, ctx.r30.u8);
	// addi r8,r3,25568
	ctx.r8.s64 = ctx.r3.s64 + 25568;
	// stw r30,248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 248, ctx.r30.u32);
	// addi r9,r4,25580
	ctx.r9.s64 = ctx.r4.s64 + 25580;
	// stw r11,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r11.u32);
	// addi r7,r10,17172
	ctx.r7.s64 = ctx.r10.s64 + 17172;
	// stw r30,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r30,252(r31)
	PPC_STORE_U8(ctx.r31.u32 + 252, ctx.r30.u8);
	// stw r11,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r11.u32);
	// addi r11,r31,216
	ctx.r11.s64 = ctx.r31.s64 + 216;
	// stw r30,296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 296, ctx.r30.u32);
	// stb r30,280(r31)
	PPC_STORE_U8(ctx.r31.u32 + 280, ctx.r30.u8);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r8.u32);
	// stw r7,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r7.u32);
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

__attribute__((alias("__imp__sub_82D95854"))) PPC_WEAK_FUNC(sub_82D95854);
PPC_FUNC_IMPL(__imp__sub_82D95854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D95858"))) PPC_WEAK_FUNC(sub_82D95858);
PPC_FUNC_IMPL(__imp__sub_82D95858) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82D95860;
	__savegprlr_26(ctx, base);
	// stwu r1,-1712(r1)
	ea = -1712 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x831156e8
	ctx.lr = 0x82D95870;
	sub_831156E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d95b78
	if (cr6.eq) goto loc_82D95B78;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// sth r29,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r29.u16);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8311c260
	ctx.lr = 0x82D95894;
	sub_8311C260(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r28,r30,8
	ctx.r28.s64 = ctx.r30.s64 + 8;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// bl 0x82d8c5b0
	ctx.lr = 0x82D958B8;
	sub_82D8C5B0(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r27,r30,56
	ctx.r27.s64 = ctx.r30.s64 + 56;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// stb r7,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r7.u8);
	// lbz r6,1(r8)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + 1);
	// stb r6,37(r31)
	PPC_STORE_U8(ctx.r31.u32 + 37, ctx.r6.u8);
	// lbz r5,2(r8)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r8.u32 + 2);
	// stb r5,38(r31)
	PPC_STORE_U8(ctx.r31.u32 + 38, ctx.r5.u8);
	// lbz r11,3(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 3);
	// stb r11,39(r31)
	PPC_STORE_U8(ctx.r31.u32 + 39, ctx.r11.u8);
	// lbz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 4);
	// stb r10,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r10.u8);
	// lbz r9,5(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 5);
	// stb r9,41(r31)
	PPC_STORE_U8(ctx.r31.u32 + 41, ctx.r9.u8);
	// lbz r7,6(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 6);
	// stb r7,42(r31)
	PPC_STORE_U8(ctx.r31.u32 + 42, ctx.r7.u8);
	// lbz r6,7(r8)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + 7);
	// stb r6,43(r31)
	PPC_STORE_U8(ctx.r31.u32 + 43, ctx.r6.u8);
	// lbz r5,8(r8)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r8.u32 + 8);
	// stb r5,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r5.u8);
	// lbz r11,9(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 9);
	// stb r11,45(r31)
	PPC_STORE_U8(ctx.r31.u32 + 45, ctx.r11.u8);
	// lbz r10,10(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 10);
	// stb r10,46(r31)
	PPC_STORE_U8(ctx.r31.u32 + 46, ctx.r10.u8);
	// lbz r9,11(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 11);
	// stb r9,47(r31)
	PPC_STORE_U8(ctx.r31.u32 + 47, ctx.r9.u8);
	// lbz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 12);
	// stb r7,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r7.u8);
	// lbz r6,13(r8)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + 13);
	// stb r6,49(r31)
	PPC_STORE_U8(ctx.r31.u32 + 49, ctx.r6.u8);
	// bl 0x82d8c5b0
	ctx.lr = 0x82D9593C;
	sub_82D8C5B0(ctx, base);
	// lbz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// stb r5,50(r31)
	PPC_STORE_U8(ctx.r31.u32 + 50, ctx.r5.u8);
	// lbz r4,1(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// stb r4,51(r31)
	PPC_STORE_U8(ctx.r31.u32 + 51, ctx.r4.u8);
	// lbz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// stb r11,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r11.u8);
	// lbz r10,3(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// stb r10,53(r31)
	PPC_STORE_U8(ctx.r31.u32 + 53, ctx.r10.u8);
	// lbz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// stb r9,54(r31)
	PPC_STORE_U8(ctx.r31.u32 + 54, ctx.r9.u8);
	// lbz r8,5(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// stb r8,55(r31)
	PPC_STORE_U8(ctx.r31.u32 + 55, ctx.r8.u8);
	// lbz r7,6(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// stb r7,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r7.u8);
	// lbz r6,7(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7);
	// stb r6,57(r31)
	PPC_STORE_U8(ctx.r31.u32 + 57, ctx.r6.u8);
	// lbz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// stb r5,58(r31)
	PPC_STORE_U8(ctx.r31.u32 + 58, ctx.r5.u8);
	// lbz r4,9(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// stb r4,59(r31)
	PPC_STORE_U8(ctx.r31.u32 + 59, ctx.r4.u8);
	// lbz r11,10(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// stb r11,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r11.u8);
	// lbz r10,11(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11);
	// stb r10,61(r31)
	PPC_STORE_U8(ctx.r31.u32 + 61, ctx.r10.u8);
	// lbz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// stb r9,62(r31)
	PPC_STORE_U8(ctx.r31.u32 + 62, ctx.r9.u8);
	// lbz r8,13(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 13);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r8,63(r31)
	PPC_STORE_U8(ctx.r31.u32 + 63, ctx.r8.u8);
	// lwz r7,132(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// lwz r6,136(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// lwz r5,140(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// stw r5,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r5.u32);
	// lwz r4,144(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// stw r4,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r4.u32);
	// lwz r11,148(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r10,152(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// lwz r9,156(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// stw r9,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// lwz r8,160(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// stw r8,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r8.u32);
	// lwz r7,164(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// stw r7,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r7.u32);
	// lwz r6,168(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// stw r6,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r6.u32);
	// bl 0x835fcbe8
	ctx.lr = 0x82D95A04;
	sub_835FCBE8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82D95A08;
	sub_8252E3C0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r3,r30,172
	ctx.r3.s64 = ctx.r30.s64 + 172;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_82D95A14:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d95a14
	if (!cr6.eq) goto loc_82D95A14;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a8810
	ctx.lr = 0x82D95A3C;
	sub_827A8810(ctx, base);
	// addi r10,r3,0
	ctx.r10.s64 = ctx.r3.s64 + 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stb r8,396(r31)
	PPC_STORE_U8(ctx.r31.u32 + 396, ctx.r8.u8);
	// bl 0x835fcbe8
	ctx.lr = 0x82D95A54;
	sub_835FCBE8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82D95A58;
	sub_8252E3C0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r3,r30,200
	ctx.r3.s64 = ctx.r30.s64 + 200;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_82D95A64:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d95a64
	if (!cr6.eq) goto loc_82D95A64;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a8810
	ctx.lr = 0x82D95A8C;
	sub_827A8810(ctx, base);
	// addi r10,r3,0
	ctx.r10.s64 = ctx.r3.s64 + 0;
	// li r5,1055
	ctx.r5.s64 = 1055;
	// stb r29,592(r1)
	PPC_STORE_U8(ctx.r1.u32 + 592, ctx.r29.u8);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r3,r1,593
	ctx.r3.s64 = ctx.r1.s64 + 593;
	// stb r8,397(r31)
	PPC_STORE_U8(ctx.r31.u32 + 397, ctx.r8.u8);
	// bl 0x831cdcf0
	ctx.lr = 0x82D95AB0;
	sub_831CDCF0(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82d95768
	ctx.lr = 0x82D95AB8;
	sub_82D95768(ctx, base);
	// li r6,1056
	ctx.r6.s64 = 1056;
	// addi r5,r1,592
	ctx.r5.s64 = ctx.r1.s64 + 592;
	// addi r4,r30,104
	ctx.r4.s64 = ctx.r30.s64 + 104;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x83354a28
	ctx.lr = 0x82D95ACC;
	sub_83354A28(ctx, base);
	// lwz r7,120(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82d95b1c
	if (!cr6.eq) goto loc_82D95B1C;
	// addi r4,r26,104
	ctx.r4.s64 = ctx.r26.s64 + 104;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// li r5,160
	ctx.r5.s64 = 160;
	// bl 0x831ce980
	ctx.lr = 0x82D95AE8;
	sub_831CE980(ctx, base);
	// addi r30,r31,64
	ctx.r30.s64 = ctx.r31.s64 + 64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82abfda0
	ctx.lr = 0x82D95AF8;
	sub_82ABFDA0(ctx, base);
	// addi r4,r26,264
	ctx.r4.s64 = ctx.r26.s64 + 264;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// li r5,160
	ctx.r5.s64 = 160;
	// bl 0x831ce980
	ctx.lr = 0x82D95B08;
	sub_831CE980(ctx, base);
	// addi r29,r31,224
	ctx.r29.s64 = ctx.r31.s64 + 224;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82abfda0
	ctx.lr = 0x82D95B18;
	sub_82ABFDA0(ctx, base);
	// b 0x82d95b4c
	goto loc_82D95B4C;
loc_82D95B1C:
	// addi r30,r31,64
	ctx.r30.s64 = ctx.r31.s64 + 64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1056
	ctx.r4.s64 = 1056;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x82d8cf78
	ctx.lr = 0x82D95B34;
	sub_82D8CF78(ctx, base);
	// addi r29,r31,224
	ctx.r29.s64 = ctx.r31.s64 + 224;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1056
	ctx.r4.s64 = 1056;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x82d8cf78
	ctx.lr = 0x82D95B4C;
	sub_82D8CF78(ctx, base);
loc_82D95B4C:
	// lbz r11,396(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 396);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r11,220(r31)
	PPC_STORE_U8(ctx.r31.u32 + 220, ctx.r11.u8);
	// stb r11,380(r31)
	PPC_STORE_U8(ctx.r31.u32 + 380, ctx.r11.u8);
	// bl 0x82d8b6a0
	ctx.lr = 0x82D95B64;
	sub_82D8B6A0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d8b6a0
	ctx.lr = 0x82D95B70;
	sub_82D8B6A0(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82b6a590
	ctx.lr = 0x82D95B78;
	sub_82B6A590(ctx, base);
loc_82D95B78:
	// addi r1,r1,1712
	ctx.r1.s64 = ctx.r1.s64 + 1712;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D95B80"))) PPC_WEAK_FUNC(sub_82D95B80);
PPC_FUNC_IMPL(__imp__sub_82D95B80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D95B88;
	__savegprlr_29(ctx, base);
	// stwu r1,-1824(r1)
	ea = -1824 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// lwz r8,12(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// lwz r7,72(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// lwz r6,76(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// stw r6,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r6.u32);
	// lwz r5,80(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// stw r5,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
	// bl 0x835fcbe8
	ctx.lr = 0x82D95BD4;
	sub_835FCBE8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82D95BD8;
	sub_8252E3C0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r3,r30,44
	ctx.r3.s64 = ctx.r30.s64 + 44;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_82D95BE4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d95be4
	if (!cr6.eq) goto loc_82D95BE4;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a8810
	ctx.lr = 0x82D95C0C;
	sub_827A8810(ctx, base);
	// addi r10,r3,0
	ctx.r10.s64 = ctx.r3.s64 + 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stb r8,348(r31)
	PPC_STORE_U8(ctx.r31.u32 + 348, ctx.r8.u8);
	// bl 0x835fcbe8
	ctx.lr = 0x82D95C24;
	sub_835FCBE8(ctx, base);
	// bl 0x8252e3c0
	ctx.lr = 0x82D95C28;
	sub_8252E3C0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r3,r30,84
	ctx.r3.s64 = ctx.r30.s64 + 84;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_82D95C34:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d95c34
	if (!cr6.eq) goto loc_82D95C34;
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x827a8810
	ctx.lr = 0x82D95C5C;
	sub_827A8810(ctx, base);
	// addi r10,r3,0
	ctx.r10.s64 = ctx.r3.s64 + 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// li r5,1055
	ctx.r5.s64 = 1055;
	// stb r29,736(r1)
	PPC_STORE_U8(ctx.r1.u32 + 736, ctx.r29.u8);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,737
	ctx.r3.s64 = ctx.r1.s64 + 737;
	// stb r8,349(r31)
	PPC_STORE_U8(ctx.r31.u32 + 349, ctx.r8.u8);
	// bl 0x831cdcf0
	ctx.lr = 0x82D95C84;
	sub_831CDCF0(ctx, base);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x82d95768
	ctx.lr = 0x82D95C8C;
	sub_82D95768(ctx, base);
	// li r6,1056
	ctx.r6.s64 = 1056;
	// addi r5,r1,736
	ctx.r5.s64 = ctx.r1.s64 + 736;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x83354a28
	ctx.lr = 0x82D95CA0;
	sub_83354A28(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82D95CA4;
	sub_831156E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d95e80
	if (cr6.eq) goto loc_82D95E80;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// sth r29,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r29.u16);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8311c260
	ctx.lr = 0x82D95CC4;
	sub_8311C260(ctx, base);
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d95d1c
	if (!cr6.eq) goto loc_82D95D1C;
	// addi r4,r3,104
	ctx.r4.s64 = ctx.r3.s64 + 104;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,160
	ctx.r5.s64 = 160;
	// bl 0x831ce980
	ctx.lr = 0x82D95CE4;
	sub_831CE980(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x82abfda0
	ctx.lr = 0x82D95CF0;
	sub_82ABFDA0(ctx, base);
	// addi r4,r30,264
	ctx.r4.s64 = ctx.r30.s64 + 264;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,160
	ctx.r5.s64 = 160;
	// bl 0x831ce980
	ctx.lr = 0x82D95D00;
	sub_831CE980(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r31,188
	ctx.r3.s64 = ctx.r31.s64 + 188;
	// bl 0x82abfda0
	ctx.lr = 0x82D95D0C;
	sub_82ABFDA0(ctx, base);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x82b6a590
	ctx.lr = 0x82D95D14;
	sub_82B6A590(ctx, base);
	// addi r1,r1,1824
	ctx.r1.s64 = ctx.r1.s64 + 1824;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82D95D1C:
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,28
	ctx.r5.s64 = ctx.r31.s64 + 28;
	// li r4,1056
	ctx.r4.s64 = 1056;
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// bl 0x82d8cf78
	ctx.lr = 0x82D95D30;
	sub_82D8CF78(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r31,188
	ctx.r5.s64 = ctx.r31.s64 + 188;
	// li r4,1056
	ctx.r4.s64 = 1056;
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// bl 0x82d8cf78
	ctx.lr = 0x82D95D44;
	sub_82D8CF78(ctx, base);
	// addi r4,r30,104
	ctx.r4.s64 = ctx.r30.s64 + 104;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// li r5,160
	ctx.r5.s64 = 160;
	// bl 0x831ce980
	ctx.lr = 0x82D95D54;
	sub_831CE980(ctx, base);
	// addi r4,r30,264
	ctx.r4.s64 = ctx.r30.s64 + 264;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,160
	ctx.r5.s64 = 160;
	// bl 0x831ce980
	ctx.lr = 0x82D95D64;
	sub_831CE980(ctx, base);
	// lbz r10,349(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 349);
	// lbz r9,355(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 355);
	// lbz r8,356(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 356);
	// lbz r6,357(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 357);
	// lbz r5,358(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 358);
	// lbz r4,359(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 359);
	// lbz r3,360(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 360);
	// lbz r7,361(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 361);
	// lbz r11,396(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 396);
	// stb r9,127(r31)
	PPC_STORE_U8(ctx.r31.u32 + 127, ctx.r9.u8);
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// stb r8,128(r31)
	PPC_STORE_U8(ctx.r31.u32 + 128, ctx.r8.u8);
	// stb r6,129(r31)
	PPC_STORE_U8(ctx.r31.u32 + 129, ctx.r6.u8);
	// stb r5,130(r31)
	PPC_STORE_U8(ctx.r31.u32 + 130, ctx.r5.u8);
	// stb r10,184(r31)
	PPC_STORE_U8(ctx.r31.u32 + 184, ctx.r10.u8);
	// stb r10,344(r31)
	PPC_STORE_U8(ctx.r31.u32 + 344, ctx.r10.u8);
	// stb r4,131(r31)
	PPC_STORE_U8(ctx.r31.u32 + 131, ctx.r4.u8);
	// stb r3,132(r31)
	PPC_STORE_U8(ctx.r31.u32 + 132, ctx.r3.u8);
	// stb r7,133(r31)
	PPC_STORE_U8(ctx.r31.u32 + 133, ctx.r7.u8);
	// bge cr6,0x82d95db8
	if (!cr6.lt) goto loc_82D95DB8;
	// stb r11,168(r31)
	PPC_STORE_U8(ctx.r31.u32 + 168, ctx.r11.u8);
loc_82D95DB8:
	// lbz r11,397(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 397);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bge cr6,0x82d95dc8
	if (!cr6.lt) goto loc_82D95DC8;
	// stb r11,169(r31)
	PPC_STORE_U8(ctx.r31.u32 + 169, ctx.r11.u8);
loc_82D95DC8:
	// lbz r11,398(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 398);
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x82d95dd8
	if (!cr6.lt) goto loc_82D95DD8;
	// stb r11,170(r31)
	PPC_STORE_U8(ctx.r31.u32 + 170, ctx.r11.u8);
loc_82D95DD8:
	// lbz r11,399(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 399);
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x82d95de8
	if (!cr6.lt) goto loc_82D95DE8;
	// stb r11,171(r31)
	PPC_STORE_U8(ctx.r31.u32 + 171, ctx.r11.u8);
loc_82D95DE8:
	// lbz r11,400(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 400);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bge cr6,0x82d95df8
	if (!cr6.lt) goto loc_82D95DF8;
	// stb r11,172(r31)
	PPC_STORE_U8(ctx.r31.u32 + 172, ctx.r11.u8);
loc_82D95DF8:
	// lbz r10,195(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 195);
	// lbz r9,196(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 196);
	// lbz r8,197(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 197);
	// lbz r6,198(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 198);
	// lbz r5,199(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 199);
	// lbz r4,200(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 200);
	// lbz r3,201(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 201);
	// lbz r11,236(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 236);
	// stb r10,287(r31)
	PPC_STORE_U8(ctx.r31.u32 + 287, ctx.r10.u8);
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// stb r9,288(r31)
	PPC_STORE_U8(ctx.r31.u32 + 288, ctx.r9.u8);
	// stb r8,289(r31)
	PPC_STORE_U8(ctx.r31.u32 + 289, ctx.r8.u8);
	// stb r6,290(r31)
	PPC_STORE_U8(ctx.r31.u32 + 290, ctx.r6.u8);
	// stb r5,291(r31)
	PPC_STORE_U8(ctx.r31.u32 + 291, ctx.r5.u8);
	// stb r4,292(r31)
	PPC_STORE_U8(ctx.r31.u32 + 292, ctx.r4.u8);
	// stb r3,293(r31)
	PPC_STORE_U8(ctx.r31.u32 + 293, ctx.r3.u8);
	// bge cr6,0x82d95e40
	if (!cr6.lt) goto loc_82D95E40;
	// stb r11,328(r31)
	PPC_STORE_U8(ctx.r31.u32 + 328, ctx.r11.u8);
loc_82D95E40:
	// lbz r11,237(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 237);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bge cr6,0x82d95e50
	if (!cr6.lt) goto loc_82D95E50;
	// stb r11,329(r31)
	PPC_STORE_U8(ctx.r31.u32 + 329, ctx.r11.u8);
loc_82D95E50:
	// lbz r11,238(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 238);
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x82d95e60
	if (!cr6.lt) goto loc_82D95E60;
	// stb r11,330(r31)
	PPC_STORE_U8(ctx.r31.u32 + 330, ctx.r11.u8);
loc_82D95E60:
	// lbz r11,239(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 239);
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x82d95e70
	if (!cr6.lt) goto loc_82D95E70;
	// stb r11,331(r31)
	PPC_STORE_U8(ctx.r31.u32 + 331, ctx.r11.u8);
loc_82D95E70:
	// lbz r11,240(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 240);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bge cr6,0x82d95e80
	if (!cr6.lt) goto loc_82D95E80;
	// stb r11,332(r31)
	PPC_STORE_U8(ctx.r31.u32 + 332, ctx.r11.u8);
loc_82D95E80:
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x82b6a590
	ctx.lr = 0x82D95E88;
	sub_82B6A590(ctx, base);
	// addi r1,r1,1824
	ctx.r1.s64 = ctx.r1.s64 + 1824;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D95E90"))) PPC_WEAK_FUNC(sub_82D95E90);
PPC_FUNC_IMPL(__imp__sub_82D95E90) {
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
	// lis r31,-31757
	ctx.r31.s64 = -2081226752;
	// lwz r3,8856(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8856);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d95ecc
	if (cr6.eq) goto loc_82D95ECC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D95EC4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8856, ctx.r11.u32);
loc_82D95ECC:
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

__attribute__((alias("__imp__sub_82D95EE0"))) PPC_WEAK_FUNC(sub_82D95EE0);
PPC_FUNC_IMPL(__imp__sub_82D95EE0) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x830ff290
	ctx.lr = 0x82D95EF8;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bgt cr6,0x82d95f34
	if (cr6.gt) goto loc_82D95F34;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82d95f30
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82D95F30;
	// bdzf 4*cr6+eq,0x82d95f30
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82D95F30;
	// bdzf 4*cr6+eq,0x82d95f34
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82D95F34;
	// bdzf 4*cr6+eq,0x82d95f34
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82D95F34;
	// bdzf 4*cr6+eq,0x82d95f34
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82D95F34;
	// bdzf 4*cr6+eq,0x82d95f30
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82D95F30;
	// bdzf 4*cr6+eq,0x82d95f30
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82D95F30;
	// bne cr6,0x82d95f30
	if (!cr6.eq) goto loc_82D95F30;
loc_82D95F30:
	// li r31,1
	ctx.r31.s64 = 1;
loc_82D95F34:
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

__attribute__((alias("__imp__sub_82D95F4C"))) PPC_WEAK_FUNC(sub_82D95F4C);
PPC_FUNC_IMPL(__imp__sub_82D95F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D95F50"))) PPC_WEAK_FUNC(sub_82D95F50);
PPC_FUNC_IMPL(__imp__sub_82D95F50) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x830ff290
	ctx.lr = 0x82D95F68;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(ctx.r11.u32, 48, xer);
	// blt cr6,0x82d95f80
	if (cr6.lt) goto loc_82D95F80;
	// cmplwi cr6,r11,50
	cr6.compare<uint32_t>(ctx.r11.u32, 50, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// ble cr6,0x82d95f84
	if (!cr6.gt) goto loc_82D95F84;
loc_82D95F80:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82D95F84:
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

__attribute__((alias("__imp__sub_82D95F98"))) PPC_WEAK_FUNC(sub_82D95F98);
PPC_FUNC_IMPL(__imp__sub_82D95F98) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x830ff290
	ctx.lr = 0x82D95FB0;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,54
	cr6.compare<uint32_t>(ctx.r11.u32, 54, xer);
	// blt cr6,0x82d95fc8
	if (cr6.lt) goto loc_82D95FC8;
	// cmplwi cr6,r11,56
	cr6.compare<uint32_t>(ctx.r11.u32, 56, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// ble cr6,0x82d95fcc
	if (!cr6.gt) goto loc_82D95FCC;
loc_82D95FC8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82D95FCC:
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

__attribute__((alias("__imp__sub_82D95FE0"))) PPC_WEAK_FUNC(sub_82D95FE0);
PPC_FUNC_IMPL(__imp__sub_82D95FE0) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x830ff290
	ctx.lr = 0x82D95FF8;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,54
	cr6.compare<uint32_t>(ctx.r11.u32, 54, xer);
	// blt cr6,0x82d96010
	if (cr6.lt) goto loc_82D96010;
	// cmplwi cr6,r11,56
	cr6.compare<uint32_t>(ctx.r11.u32, 56, xer);
	// bgt cr6,0x82d96010
	if (cr6.gt) goto loc_82D96010;
	// li r31,1
	ctx.r31.s64 = 1;
loc_82D96010:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d96034
	if (!cr6.eq) goto loc_82D96034;
loc_82D9601C:
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
loc_82D96034:
	// bl 0x82d86078
	ctx.lr = 0x82D96038;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d9601c
	if (cr6.eq) goto loc_82D9601C;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// bl 0x82da2650
	ctx.lr = 0x82D96048;
	sub_82DA2650(ctx, base);
	// bl 0x82dedbe0
	ctx.lr = 0x82D9604C;
	sub_82DEDBE0(ctx, base);
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

__attribute__((alias("__imp__sub_82D96060"))) PPC_WEAK_FUNC(sub_82D96060);
PPC_FUNC_IMPL(__imp__sub_82D96060) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x830ff290
	ctx.lr = 0x82D96078;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,50
	cr6.compare<uint32_t>(ctx.r11.u32, 50, xer);
	// beq cr6,0x82d9608c
	if (cr6.eq) goto loc_82D9608C;
	// cmplwi cr6,r11,56
	cr6.compare<uint32_t>(ctx.r11.u32, 56, xer);
	// bne cr6,0x82d960a4
	if (!cr6.eq) goto loc_82D960A4;
loc_82D9608C:
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
loc_82D960A4:
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

__attribute__((alias("__imp__sub_82D960BC"))) PPC_WEAK_FUNC(sub_82D960BC);
PPC_FUNC_IMPL(__imp__sub_82D960BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D960C0"))) PPC_WEAK_FUNC(sub_82D960C0);
PPC_FUNC_IMPL(__imp__sub_82D960C0) {
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
	// bl 0x82d86078
	ctx.lr = 0x82D960DC;
	sub_82D86078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d96120
	if (cr6.eq) goto loc_82D96120;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82da24b0
	ctx.lr = 0x82D960F0;
	sub_82DA24B0(ctx, base);
	// bl 0x825832d8
	ctx.lr = 0x82D960F4;
	sub_825832D8(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82da24b0
	ctx.lr = 0x82D96104;
	sub_82DA24B0(ctx, base);
	// bl 0x825832e8
	ctx.lr = 0x82D96108;
	sub_825832E8(ctx, base);
	// cmpwi cr6,r31,6
	cr6.compare<int32_t>(ctx.r31.s32, 6, xer);
	// bne cr6,0x82d9611c
	if (!cr6.eq) goto loc_82D9611C;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82d9611c
	if (!cr6.eq) goto loc_82D9611C;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82D9611C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82D96120:
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

__attribute__((alias("__imp__sub_82D96138"))) PPC_WEAK_FUNC(sub_82D96138);
PPC_FUNC_IMPL(__imp__sub_82D96138) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82d86078
	ctx.lr = 0x82D96150;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d9616c
	if (!cr6.eq) goto loc_82D9616C;
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
loc_82D9616C:
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// bl 0x82da24b0
	ctx.lr = 0x82D96174;
	sub_82DA24B0(ctx, base);
	// bl 0x83815cb0
	ctx.lr = 0x82D96178;
	sub_83815CB0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82d96184
	if (!cr6.eq) goto loc_82D96184;
	// li r31,1
	ctx.r31.s64 = 1;
loc_82D96184:
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

__attribute__((alias("__imp__sub_82D9619C"))) PPC_WEAK_FUNC(sub_82D9619C);
PPC_FUNC_IMPL(__imp__sub_82D9619C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D961A0"))) PPC_WEAK_FUNC(sub_82D961A0);
PPC_FUNC_IMPL(__imp__sub_82D961A0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74328
	ctx.lr = 0x82D961C8;
	sub_82E74328(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74260
	ctx.lr = 0x82D961D0;
	sub_82E74260(ctx, base);
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bge cr6,0x82d961e4
	if (!cr6.lt) goto loc_82D961E4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82d961f0
	goto loc_82D961F0;
loc_82D961E4:
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82D961F0:
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

__attribute__((alias("__imp__sub_82D96208"))) PPC_WEAK_FUNC(sub_82D96208);
PPC_FUNC_IMPL(__imp__sub_82D96208) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e74328
	ctx.lr = 0x82D96228;
	sub_82E74328(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82e74260
	ctx.lr = 0x82D96230;
	sub_82E74260(ctx, base);
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bge cr6,0x82d96248
	if (!cr6.lt) goto loc_82D96248;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82d96250
	goto loc_82D96250;
loc_82D96248:
	// subf r10,r11,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r11.s64;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82D96250:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d96274
	if (!cr6.eq) goto loc_82D96274;
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
loc_82D96274:
	// subfic r11,r10,5
	xer.ca = ctx.r10.u32 <= 5;
	ctx.r11.s64 = 5 - ctx.r10.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r9,31
	ctx.r3.u64 = ctx.r9.u32 & 0x1;
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

__attribute__((alias("__imp__sub_82D96294"))) PPC_WEAK_FUNC(sub_82D96294);
PPC_FUNC_IMPL(__imp__sub_82D96294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D96298"))) PPC_WEAK_FUNC(sub_82D96298);
PPC_FUNC_IMPL(__imp__sub_82D96298) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x830ff290
	ctx.lr = 0x82D962B0;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,50
	cr6.compare<uint32_t>(ctx.r11.u32, 50, xer);
	// beq cr6,0x82d962c4
	if (cr6.eq) goto loc_82D962C4;
	// cmplwi cr6,r11,56
	cr6.compare<uint32_t>(ctx.r11.u32, 56, xer);
	// bne cr6,0x82d962c8
	if (!cr6.eq) goto loc_82D962C8;
loc_82D962C4:
	// li r31,1
	ctx.r31.s64 = 1;
loc_82D962C8:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d962ec
	if (!cr6.eq) goto loc_82D962EC;
loc_82D962D4:
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
loc_82D962EC:
	// bl 0x82d86078
	ctx.lr = 0x82D962F0;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d962d4
	if (cr6.eq) goto loc_82D962D4;
	// lwz r31,28(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da27f0
	ctx.lr = 0x82D96304;
	sub_82DA27F0(ctx, base);
	// bl 0x825832d8
	ctx.lr = 0x82D96308;
	sub_825832D8(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x82d962d4
	if (!cr6.eq) goto loc_82D962D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da2518
	ctx.lr = 0x82D96318;
	sub_82DA2518(ctx, base);
	// bl 0x82df16e0
	ctx.lr = 0x82D9631C;
	sub_82DF16E0(ctx, base);
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

__attribute__((alias("__imp__sub_82D96330"))) PPC_WEAK_FUNC(sub_82D96330);
PPC_FUNC_IMPL(__imp__sub_82D96330) {
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
	// bl 0x82d96298
	ctx.lr = 0x82D96340;
	sub_82D96298(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d96358
	if (cr6.eq) goto loc_82D96358;
	// bl 0x82dce9a8
	ctx.lr = 0x82D96354;
	sub_82DCE9A8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82D96358:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D96368"))) PPC_WEAK_FUNC(sub_82D96368);
PPC_FUNC_IMPL(__imp__sub_82D96368) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D96370;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x830ff290
	ctx.lr = 0x82D96380;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,50
	cr6.compare<uint32_t>(ctx.r11.u32, 50, xer);
	// beq cr6,0x82d96394
	if (cr6.eq) goto loc_82D96394;
	// cmplwi cr6,r11,56
	cr6.compare<uint32_t>(ctx.r11.u32, 56, xer);
	// bne cr6,0x82d96398
	if (!cr6.eq) goto loc_82D96398;
loc_82D96394:
	// li r31,1
	ctx.r31.s64 = 1;
loc_82D96398:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d963b0
	if (!cr6.eq) goto loc_82D963B0;
loc_82D963A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82D963B0:
	// bl 0x82d86078
	ctx.lr = 0x82D963B4;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d963a4
	if (cr6.eq) goto loc_82D963A4;
	// lwz r31,28(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da24b0
	ctx.lr = 0x82D963C8;
	sub_82DA24B0(ctx, base);
	// bl 0x825832d8
	ctx.lr = 0x82D963CC;
	sub_825832D8(ctx, base);
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, xer);
	// bne cr6,0x82d963a4
	if (!cr6.eq) goto loc_82D963A4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74328
	ctx.lr = 0x82D963E0;
	sub_82E74328(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d963a4
	if (cr6.eq) goto loc_82D963A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da2518
	ctx.lr = 0x82D963F4;
	sub_82DA2518(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e74260
	ctx.lr = 0x82D96400;
	sub_82E74260(ctx, base);
	// rotlwi r31,r3,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831f81f8
	ctx.lr = 0x82D9640C;
	sub_831F81F8(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// subf r11,r31,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r31.s64;
	// blt cr6,0x82d9641c
	if (cr6.lt) goto loc_82D9641C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D9641C:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D9642C"))) PPC_WEAK_FUNC(sub_82D9642C);
PPC_FUNC_IMPL(__imp__sub_82D9642C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D96430"))) PPC_WEAK_FUNC(sub_82D96430);
PPC_FUNC_IMPL(__imp__sub_82D96430) {
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
	// lis r31,-31757
	ctx.r31.s64 = -2081226752;
	// lwz r30,8856(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8856);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82d96470
	if (cr6.eq) goto loc_82D96470;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e58138
	ctx.lr = 0x82D9645C;
	sub_82E58138(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d96470
	if (!cr6.eq) goto loc_82D96470;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82d96524
	goto loc_82D96524;
loc_82D96470:
	// bl 0x831156e8
	ctx.lr = 0x82D96474;
	sub_831156E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d964d4
	if (cr6.eq) goto loc_82D964D4;
	// bl 0x831156e8
	ctx.lr = 0x82D96480;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d964a0
	if (cr6.eq) goto loc_82D964A0;
	// bl 0x83115808
	ctx.lr = 0x82D96490;
	sub_83115808(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82d964a4
	if (!cr6.eq) goto loc_82D964A4;
loc_82D964A0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D964A4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d964d4
	if (cr6.eq) goto loc_82D964D4;
	// bl 0x831156e8
	ctx.lr = 0x82D964B4;
	sub_831156E8(ctx, base);
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// addis r8,r10,221
	ctx.r8.s64 = ctx.r10.s64 + 14483456;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r8,-26512
	ctx.r8.s64 = ctx.r8.s64 + -26512;
	// lwz r11,-14560(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14560);
	// stw r9,1296(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1296, ctx.r9.u32);
	// stw r11,1292(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1292, ctx.r11.u32);
loc_82D964D4:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82d96504
	if (cr6.eq) goto loc_82D96504;
	// lwz r3,8856(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8856);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d96504
	if (cr6.eq) goto loc_82D96504;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82D964FC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8856, ctx.r11.u32);
loc_82D96504:
	// bl 0x82d86078
	ctx.lr = 0x82D96508;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d96518
	if (cr6.eq) goto loc_82D96518;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// bl 0x82da2dc8
	ctx.lr = 0x82D96518;
	sub_82DA2DC8(ctx, base);
loc_82D96518:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8379f080
	ctx.lr = 0x82D96520;
	sub_8379F080(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82D96524:
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

__attribute__((alias("__imp__sub_82D9653C"))) PPC_WEAK_FUNC(sub_82D9653C);
PPC_FUNC_IMPL(__imp__sub_82D9653C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D96540"))) PPC_WEAK_FUNC(sub_82D96540);
PPC_FUNC_IMPL(__imp__sub_82D96540) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82D96548;
	__savegprlr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82d95ee0
	ctx.lr = 0x82D96550;
	sub_82D95EE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d965fc
	if (cr6.eq) goto loc_82D965FC;
	// bl 0x82d86078
	ctx.lr = 0x82D96560;
	sub_82D86078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d965fc
	if (cr6.eq) goto loc_82D965FC;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// bl 0x82da2858
	ctx.lr = 0x82D96574;
	sub_82DA2858(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82da24b0
	ctx.lr = 0x82D96584;
	sub_82DA24B0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82da1eb8
	ctx.lr = 0x82D9658C;
	sub_82DA1EB8(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// bl 0x82da8160
	ctx.lr = 0x82D9659C;
	sub_82DA8160(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d965fc
	if (cr6.eq) goto loc_82D965FC;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r29,r11,65535
	ctx.r29.u64 = ctx.r11.u64 | 65535;
loc_82D965AC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da81e0
	ctx.lr = 0x82D965B8;
	sub_82DA81E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d965e8
	if (cr6.eq) goto loc_82D965E8;
	// sth r29,120(r1)
	PPC_STORE_U16(ctx.r1.u32 + 120, ctx.r29.u16);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r27,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r27.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da8178
	ctx.lr = 0x82D965DC;
	sub_82DA8178(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ld r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// bl 0x82da1f50
	ctx.lr = 0x82D965E8;
	sub_82DA1F50(ctx, base);
loc_82D965E8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x82da8160
	ctx.lr = 0x82D965F4;
	sub_82DA8160(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// blt cr6,0x82d965ac
	if (cr6.lt) goto loc_82D965AC;
loc_82D965FC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D96604"))) PPC_WEAK_FUNC(sub_82D96604);
PPC_FUNC_IMPL(__imp__sub_82D96604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D96608"))) PPC_WEAK_FUNC(sub_82D96608);
PPC_FUNC_IMPL(__imp__sub_82D96608) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D96610;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82d95ee0
	ctx.lr = 0x82D96618;
	sub_82D95EE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d96630
	if (!cr6.eq) goto loc_82D96630;
loc_82D96624:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82D96630:
	// bl 0x82d86078
	ctx.lr = 0x82D96634;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d96624
	if (cr6.eq) goto loc_82D96624;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// bl 0x82da2858
	ctx.lr = 0x82D96644;
	sub_82DA2858(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82da8160
	ctx.lr = 0x82D96654;
	sub_82DA8160(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d96624
	if (cr6.eq) goto loc_82D96624;
loc_82D9665C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da81e0
	ctx.lr = 0x82D96668;
	sub_82DA81E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d96690
	if (!cr6.eq) goto loc_82D96690;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da8220
	ctx.lr = 0x82D96680;
	sub_82DA8220(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d96690
	if (!cr6.eq) goto loc_82D96690;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_82D96690:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x82da8160
	ctx.lr = 0x82D9669C;
	sub_82DA8160(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// blt cr6,0x82d9665c
	if (cr6.lt) goto loc_82D9665C;
	// cmplwi cr6,r29,7
	cr6.compare<uint32_t>(ctx.r29.u32, 7, xer);
	// blt cr6,0x82d96624
	if (cr6.lt) goto loc_82D96624;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D966B8"))) PPC_WEAK_FUNC(sub_82D966B8);
PPC_FUNC_IMPL(__imp__sub_82D966B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D966C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82d95ee0
	ctx.lr = 0x82D966D0;
	sub_82D95EE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d966e8
	if (!cr6.eq) goto loc_82D966E8;
loc_82D966DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82D966E8:
	// bl 0x82d86078
	ctx.lr = 0x82D966EC;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d966dc
	if (cr6.eq) goto loc_82D966DC;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// bl 0x82da2858
	ctx.lr = 0x82D966FC;
	sub_82DA2858(ctx, base);
	// clrlwi r28,r31,24
	ctx.r28.u64 = ctx.r31.u32 & 0xFF;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// beq cr6,0x82d9672c
	if (cr6.eq) goto loc_82D9672C;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x82d8b0a8
	ctx.lr = 0x82D96728;
	sub_82D8B0A8(ctx, base);
	// b 0x82d96740
	goto loc_82D96740;
loc_82D9672C:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// bl 0x8315ed60
	ctx.lr = 0x82D96740;
	sub_8315ED60(ctx, base);
loc_82D96740:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82da8148
	ctx.lr = 0x82D96750;
	sub_82DA8148(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r30,3
	ctx.r30.s64 = 3;
	// addi r11,r11,28304
	ctx.r11.s64 = ctx.r11.s64 + 28304;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
loc_82D96760:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(ctx.r28.u32, 0, xer);
	// beq cr6,0x82d96774
	if (cr6.eq) goto loc_82D96774;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d8b1f0
	ctx.lr = 0x82D96770;
	sub_82D8B1F0(ctx, base);
	// b 0x82d96780
	goto loc_82D96780;
loc_82D96774:
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83152140
	ctx.lr = 0x82D96780;
	sub_83152140(ctx, base);
loc_82D96780:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,-4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82da8148
	ctx.lr = 0x82D96790;
	sub_82DA8148(ctx, base);
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x82d96760
	if (!cr0.eq) goto loc_82D96760;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D967A8"))) PPC_WEAK_FUNC(sub_82D967A8);
PPC_FUNC_IMPL(__imp__sub_82D967A8) {
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
	// li r31,-1
	ctx.r31.s64 = -1;
	// bl 0x82d86078
	ctx.lr = 0x82D967C8;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d96828
	if (cr6.eq) goto loc_82D96828;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// bl 0x82da24b0
	ctx.lr = 0x82D967D8;
	sub_82DA24B0(ctx, base);
	// bl 0x8357ecf8
	ctx.lr = 0x82D967DC;
	sub_8357ECF8(ctx, base);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,152
	ctx.r11.s64 = 152;
	// subf r9,r8,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r8.s64;
	// divw. r9,r9,r11
	ctx.r9.s32 = PPCDivide(ctx.r9.s32, ctx.r11.s32);
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82d96828
	if (cr0.eq) goto loc_82D96828;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82d96828
	if (cr6.eq) goto loc_82D96828;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D96804:
	// lwzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmpw cr6,r7,r30
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r30.s32, xer);
	// beq cr6,0x82d96824
	if (cr6.eq) goto loc_82D96824;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,152
	ctx.r11.s64 = ctx.r11.s64 + 152;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x82d96804
	if (cr6.lt) goto loc_82D96804;
	// b 0x82d96828
	goto loc_82D96828;
loc_82D96824:
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
loc_82D96828:
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

__attribute__((alias("__imp__sub_82D96844"))) PPC_WEAK_FUNC(sub_82D96844);
PPC_FUNC_IMPL(__imp__sub_82D96844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D96848"))) PPC_WEAK_FUNC(sub_82D96848);
PPC_FUNC_IMPL(__imp__sub_82D96848) {
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
	// bl 0x82d86078
	ctx.lr = 0x82D96864;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d968cc
	if (cr6.eq) goto loc_82D968CC;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// bl 0x82da24b0
	ctx.lr = 0x82D96874;
	sub_82DA24B0(ctx, base);
	// bl 0x8357ecf8
	ctx.lr = 0x82D96878;
	sub_8357ECF8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d967a8
	ctx.lr = 0x82D96884;
	sub_82D967A8(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82d968cc
	if (cr6.eq) goto loc_82D968CC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,152
	ctx.r10.s64 = 152;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r7,r8,r10
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	// cmplw cr6,r3,r7
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r7.u32, xer);
	// bge cr6,0x82d968cc
	if (!cr6.lt) goto loc_82D968CC;
	// mulli r10,r3,152
	ctx.r10.s64 = ctx.r3.s64 * 152;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// cmpwi cr6,r10,8
	cr6.compare<int32_t>(ctx.r10.s32, 8, xer);
	// beq cr6,0x82d968cc
	if (cr6.eq) goto loc_82D968CC;
	// lwz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d968d0
	if (!cr6.eq) goto loc_82D968D0;
loc_82D968CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82D968D0:
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

__attribute__((alias("__imp__sub_82D968E8"))) PPC_WEAK_FUNC(sub_82D968E8);
PPC_FUNC_IMPL(__imp__sub_82D968E8) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x830ff290
	ctx.lr = 0x82D96900;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,54
	cr6.compare<uint32_t>(ctx.r11.u32, 54, xer);
	// blt cr6,0x82d96918
	if (cr6.lt) goto loc_82D96918;
	// cmplwi cr6,r11,56
	cr6.compare<uint32_t>(ctx.r11.u32, 56, xer);
	// bgt cr6,0x82d96918
	if (cr6.gt) goto loc_82D96918;
	// li r31,1
	ctx.r31.s64 = 1;
loc_82D96918:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d9693c
	if (!cr6.eq) goto loc_82D9693C;
loc_82D96924:
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
loc_82D9693C:
	// bl 0x82d86078
	ctx.lr = 0x82D96940;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d96924
	if (cr6.eq) goto loc_82D96924;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// bl 0x82da24b0
	ctx.lr = 0x82D96950;
	sub_82DA24B0(ctx, base);
	// bl 0x825832e8
	ctx.lr = 0x82D96954;
	sub_825832E8(ctx, base);
	// bl 0x82d96848
	ctx.lr = 0x82D96958;
	sub_82D96848(ctx, base);
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

__attribute__((alias("__imp__sub_82D9696C"))) PPC_WEAK_FUNC(sub_82D9696C);
PPC_FUNC_IMPL(__imp__sub_82D9696C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D96970"))) PPC_WEAK_FUNC(sub_82D96970);
PPC_FUNC_IMPL(__imp__sub_82D96970) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82D96978;
	__savegprlr_27(ctx, base);
	// stwu r1,-2000(r1)
	ea = -2000 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// bl 0x830ff290
	ctx.lr = 0x82D96988;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,54
	cr6.compare<uint32_t>(ctx.r11.u32, 54, xer);
	// blt cr6,0x82d969a0
	if (cr6.lt) goto loc_82D969A0;
	// cmplwi cr6,r11,56
	cr6.compare<uint32_t>(ctx.r11.u32, 56, xer);
	// bgt cr6,0x82d969a0
	if (cr6.gt) goto loc_82D969A0;
	// li r31,1
	ctx.r31.s64 = 1;
loc_82D969A0:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d96ad8
	if (cr6.eq) goto loc_82D96AD8;
	// bl 0x82d86078
	ctx.lr = 0x82D969B0;
	sub_82D86078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d96ad8
	if (cr6.eq) goto loc_82D96AD8;
	// bl 0x831156e8
	ctx.lr = 0x82D969C0;
	sub_831156E8(ctx, base);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82da2858
	ctx.lr = 0x82D969C8;
	sub_82DA2858(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82D969D0;
	sub_831156E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d96ad8
	if (cr6.eq) goto loc_82D96AD8;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addis r27,r11,222
	ctx.r27.s64 = ctx.r11.s64 + 14548992;
	// addi r27,r27,-12208
	ctx.r27.s64 = ctx.r27.s64 + -12208;
	// addi r4,r27,1952
	ctx.r4.s64 = ctx.r27.s64 + 1952;
	// bl 0x82b818d0
	ctx.lr = 0x82D969F0;
	sub_82B818D0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// bl 0x82da8160
	ctx.lr = 0x82D969FC;
	sub_82DA8160(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d96acc
	if (cr6.eq) goto loc_82D96ACC;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r29,r11,65535
	ctx.r29.u64 = ctx.r11.u64 | 65535;
loc_82D96A0C:
	// sth r29,120(r1)
	PPC_STORE_U16(ctx.r1.u32 + 120, ctx.r29.u16);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r28,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r28.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da8178
	ctx.lr = 0x82D96A24;
	sub_82DA8178(ctx, base);
	// lwz r11,792(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 792);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d96ab8
	if (cr6.eq) goto loc_82D96AB8;
	// lwz r5,124(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// addi r11,r1,800
	ctx.r11.s64 = ctx.r1.s64 + 800;
	// lhz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 120);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_82D96A4C:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82d96a64
	if (!cr6.eq) goto loc_82D96A64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cntlzw r3,r10
	ctx.r3.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r3,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// b 0x82d96a8c
	goto loc_82D96A8C;
loc_82D96A64:
	// lhz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + -4);
	// clrlwi r3,r4,16
	ctx.r3.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplw cr6,r10,r3
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, xer);
	// bne cr6,0x82d96a84
	if (!cr6.eq) goto loc_82D96A84;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq cr6,0x82d96a88
	if (cr6.eq) goto loc_82D96A88;
loc_82D96A84:
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_82D96A88:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
loc_82D96A8C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d96aa4
	if (cr6.eq) goto loc_82D96AA4;
	// stw r6,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r6.u32);
	// stb r8,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r8.u8);
	// stb r7,25(r11)
	PPC_STORE_U8(ctx.r11.u32 + 25, ctx.r7.u8);
loc_82D96AA4:
	// lwz r10,792(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 792);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// blt cr6,0x82d96a4c
	if (cr6.lt) goto loc_82D96A4C;
loc_82D96AB8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x82da8160
	ctx.lr = 0x82D96AC4;
	sub_82DA8160(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, xer);
	// blt cr6,0x82d96a0c
	if (cr6.lt) goto loc_82D96A0C;
loc_82D96ACC:
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83132ae0
	ctx.lr = 0x82D96AD8;
	sub_83132AE0(ctx, base);
loc_82D96AD8:
	// addi r1,r1,2000
	ctx.r1.s64 = ctx.r1.s64 + 2000;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D96AE0"))) PPC_WEAK_FUNC(sub_82D96AE0);
PPC_FUNC_IMPL(__imp__sub_82D96AE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82D96AE8;
	__savegprlr_22(ctx, base);
	// stwu r1,-2320(r1)
	ea = -2320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d95ee0
	ctx.lr = 0x82D96AF4;
	sub_82D95EE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d96df0
	if (cr6.eq) goto loc_82D96DF0;
	// bl 0x82d86078
	ctx.lr = 0x82D96B04;
	sub_82D86078(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d96df0
	if (cr6.eq) goto loc_82D96DF0;
	// bl 0x831156e8
	ctx.lr = 0x82D96B14;
	sub_831156E8(ctx, base);
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r3,28(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28);
	// bl 0x82da2858
	ctx.lr = 0x82D96B20;
	sub_82DA2858(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82da8118
	ctx.lr = 0x82D96B30;
	sub_82DA8118(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r1,912
	ctx.r3.s64 = ctx.r1.s64 + 912;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r9,r10,0,14,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r7,r9,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r8,r7,0,0,13
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFC0000) | (ctx.r8.u64 & 0xFFFFFFFF0003FFFF);
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// bl 0x82ae4800
	ctx.lr = 0x82D96B5C;
	sub_82AE4800(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8311c148
	ctx.lr = 0x82D96B68;
	sub_8311C148(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,912
	ctx.r3.s64 = ctx.r1.s64 + 912;
	// bl 0x82ace470
	ctx.lr = 0x82D96B74;
	sub_82ACE470(ctx, base);
	// addi r31,r30,4
	ctx.r31.s64 = ctx.r30.s64 + 4;
	// addi r5,r1,916
	ctx.r5.s64 = ctx.r1.s64 + 916;
	// li r4,70
	ctx.r4.s64 = 70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ce7d8
	ctx.lr = 0x82D96B88;
	sub_831CE7D8(ctx, base);
	// addi r28,r30,74
	ctx.r28.s64 = ctx.r30.s64 + 74;
	// addi r5,r1,986
	ctx.r5.s64 = ctx.r1.s64 + 986;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831ce7d8
	ctx.lr = 0x82D96B9C;
	sub_831CE7D8(ctx, base);
	// lhz r6,990(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 990);
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// sth r6,78(r30)
	PPC_STORE_U16(ctx.r30.u32 + 78, ctx.r6.u16);
	// bl 0x830ff290
	ctx.lr = 0x82D96BB0;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,54
	cr6.compare<uint32_t>(ctx.r11.u32, 54, xer);
	// blt cr6,0x82d96bc8
	if (cr6.lt) goto loc_82D96BC8;
	// cmplwi cr6,r11,56
	cr6.compare<uint32_t>(ctx.r11.u32, 56, xer);
	// bgt cr6,0x82d96bc8
	if (cr6.gt) goto loc_82D96BC8;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82D96BC8:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d96c64
	if (cr6.eq) goto loc_82D96C64;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r24.u32);
	// stb r24,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r24.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82da86b8
	ctx.lr = 0x82D96BF0;
	sub_82DA86B8(ctx, base);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82d96c04
	if (!cr6.lt) goto loc_82D96C04;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
loc_82D96C04:
	// li r4,70
	ctx.r4.s64 = 70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ce7d8
	ctx.lr = 0x82D96C10;
	sub_831CE7D8(ctx, base);
	// lwz r3,116(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x82D96C18;
	sub_825832D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82cabb48
	ctx.lr = 0x82D96C28;
	sub_82CABB48(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d96c3c
	if (cr6.lt) goto loc_82D96C3C;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82d96c40
	goto loc_82D96C40;
loc_82D96C3C:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_82D96C40:
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831ce7d8
	ctx.lr = 0x82D96C4C;
	sub_831CE7D8(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8387e8e0
	ctx.lr = 0x82D96C54;
	sub_8387E8E0(ctx, base);
	// lhz r11,2248(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2248);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// sth r11,78(r30)
	PPC_STORE_U16(ctx.r30.u32 + 78, ctx.r11.u16);
	// bl 0x8387e8e0
	ctx.lr = 0x82D96C64;
	sub_8387E8E0(ctx, base);
loc_82D96C64:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82da8160
	ctx.lr = 0x82D96C6C;
	sub_82DA8160(ctx, base);
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,632(r30)
	PPC_STORE_U32(ctx.r30.u32 + 632, ctx.r3.u32);
	// beq cr6,0x82d96d40
	if (cr6.eq) goto loc_82D96D40;
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r31,r30,660
	ctx.r31.s64 = ctx.r30.s64 + 660;
	// li r23,255
	ctx.r23.s64 = 255;
	// ori r26,r11,65535
	ctx.r26.u64 = ctx.r11.u64 | 65535;
loc_82D96C8C:
	// sth r26,152(r1)
	PPC_STORE_U16(ctx.r1.u32 + 152, ctx.r26.u16);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stw r24,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r24.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82da8178
	ctx.lr = 0x82D96CA4;
	sub_82DA8178(ctx, base);
	// lwz r10,140(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// ld r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// addi r28,r31,-24
	ctx.r28.s64 = ctx.r31.s64 + -24;
	// lwz r8,148(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// stb r10,-15(r31)
	PPC_STORE_U8(ctx.r31.u32 + -15, ctx.r10.u8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// std r9,-24(r31)
	PPC_STORE_U64(ctx.r31.u32 + -24, ctx.r9.u64);
	// stb r8,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r8.u8);
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// stb r5,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r5.u8);
	// blt cr6,0x82d96d2c
	if (cr6.lt) goto loc_82D96D2C;
	// cmpwi cr6,r11,100
	cr6.compare<int32_t>(ctx.r11.s32, 100, xer);
	// bge cr6,0x82d96d2c
	if (!cr6.lt) goto loc_82D96D2C;
	// subfic r11,r11,100
	xer.ca = ctx.r11.u32 <= 100;
	ctx.r11.s64 = 100 - ctx.r11.s64;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// stb r11,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r11.u8);
	// bl 0x830ff290
	ctx.lr = 0x82D96CF4;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,54
	cr6.compare<uint32_t>(ctx.r11.u32, 54, xer);
	// blt cr6,0x82d96d0c
	if (cr6.lt) goto loc_82D96D0C;
	// cmplwi cr6,r11,56
	cr6.compare<uint32_t>(ctx.r11.u32, 56, xer);
	// bgt cr6,0x82d96d0c
	if (cr6.gt) goto loc_82D96D0C;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82D96D0C:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d96d28
	if (cr6.eq) goto loc_82D96D28;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d9dcf0
	ctx.lr = 0x82D96D20;
	sub_82D9DCF0(ctx, base);
	// stb r3,-16(r31)
	PPC_STORE_U8(ctx.r31.u32 + -16, ctx.r3.u8);
	// b 0x82d96d2c
	goto loc_82D96D2C;
loc_82D96D28:
	// stb r23,-16(r31)
	PPC_STORE_U8(ctx.r31.u32 + -16, ctx.r23.u8);
loc_82D96D2C:
	// lwz r11,632(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 632);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r31,r31,36
	ctx.r31.s64 = ctx.r31.s64 + 36;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, xer);
	// blt cr6,0x82d96c8c
	if (cr6.lt) goto loc_82D96C8C;
loc_82D96D40:
	// lhz r11,1416(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 1416);
	// addi r29,r1,384
	ctx.r29.s64 = ctx.r1.s64 + 384;
	// lwz r10,1420(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1420);
	// li r31,2
	ctx.r31.s64 = 2;
	// sth r11,608(r30)
	PPC_STORE_U16(ctx.r30.u32 + 608, ctx.r11.u16);
	// stw r10,612(r30)
	PPC_STORE_U32(ctx.r30.u32 + 612, ctx.r10.u32);
loc_82D96D58:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ac0af0
	ctx.lr = 0x82D96D60;
	sub_82AC0AF0(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r29,r29,160
	ctx.r29.s64 = ctx.r29.s64 + 160;
	// bge 0x82d96d58
	if (!cr0.lt) goto loc_82D96D58;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82d8cc78
	ctx.lr = 0x82D96D74;
	sub_82D8CC78(ctx, base);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82d8cc78
	ctx.lr = 0x82D96D7C;
	sub_82D8CC78(ctx, base);
	// lwz r3,28(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 28);
	// bl 0x82da2c00
	ctx.lr = 0x82D96D84;
	sub_82DA2C00(ctx, base);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// bl 0x82e58b48
	ctx.lr = 0x82D96D8C;
	sub_82E58B48(ctx, base);
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// addi r29,r30,80
	ctx.r29.s64 = ctx.r30.s64 + 80;
loc_82D96D94:
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82ac0af0
	ctx.lr = 0x82D96D9C;
	sub_82AC0AF0(ctx, base);
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x82d96dc4
	if (!cr6.lt) goto loc_82D96DC4;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,384
	ctx.r9.s64 = ctx.r1.s64 + 384;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x82abfda0
	ctx.lr = 0x82D96DC4;
	sub_82ABFDA0(ctx, base);
loc_82D96DC4:
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82abfda0
	ctx.lr = 0x82D96DD0;
	sub_82ABFDA0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,160
	ctx.r29.s64 = ctx.r29.s64 + 160;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// blt cr6,0x82d96d94
	if (cr6.lt) goto loc_82D96D94;
	// addi r3,r30,560
	ctx.r3.s64 = ctx.r30.s64 + 560;
	// addi r4,r1,864
	ctx.r4.s64 = ctx.r1.s64 + 864;
	// li r5,47
	ctx.r5.s64 = 47;
	// bl 0x831ce980
	ctx.lr = 0x82D96DF0;
	sub_831CE980(ctx, base);
loc_82D96DF0:
	// addi r1,r1,2320
	ctx.r1.s64 = ctx.r1.s64 + 2320;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D96DF8"))) PPC_WEAK_FUNC(sub_82D96DF8);
PPC_FUNC_IMPL(__imp__sub_82D96DF8) {
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
	// stwu r1,-1888(r1)
	ea = -1888 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82d95ee0
	ctx.lr = 0x82D96E0C;
	sub_82D95EE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d96e4c
	if (cr6.eq) goto loc_82D96E4C;
	// bl 0x831156e8
	ctx.lr = 0x82D96E1C;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d96e4c
	if (cr6.eq) goto loc_82D96E4C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,48(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x82d8d5b8
	ctx.lr = 0x82D96E34;
	sub_82D8D5B8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d96ae0
	ctx.lr = 0x82D96E3C;
	sub_82D96AE0(ctx, base);
	// addis r3,r31,222
	ctx.r3.s64 = ctx.r31.s64 + 14548992;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,-12208
	ctx.r3.s64 = ctx.r3.s64 + -12208;
	// bl 0x83132ae0
	ctx.lr = 0x82D96E4C;
	sub_83132AE0(ctx, base);
loc_82D96E4C:
	// addi r1,r1,1888
	ctx.r1.s64 = ctx.r1.s64 + 1888;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D96E60"))) PPC_WEAK_FUNC(sub_82D96E60);
PPC_FUNC_IMPL(__imp__sub_82D96E60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D96E68;
	__savegprlr_29(ctx, base);
	// stwu r1,-2448(r1)
	ea = -2448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d95ee0
	ctx.lr = 0x82D96E74;
	sub_82D95EE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d96e98
	if (!cr6.eq) goto loc_82D96E98;
loc_82D96E80:
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-14508(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14508);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,2448
	ctx.r1.s64 = ctx.r1.s64 + 2448;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82D96E98:
	// bl 0x82d86078
	ctx.lr = 0x82D96E9C;
	sub_82D86078(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d96e80
	if (cr6.eq) goto loc_82D96E80;
	// bl 0x82d96df8
	ctx.lr = 0x82D96EAC;
	sub_82D96DF8(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82D96EB0;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// addis r4,r10,222
	ctx.r4.s64 = ctx.r10.s64 + 14548992;
	// addi r4,r4,-10256
	ctx.r4.s64 = ctx.r4.s64 + -10256;
	// bl 0x82b818d0
	ctx.lr = 0x82D96EC8;
	sub_82B818D0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r4,r1,624
	ctx.r4.s64 = ctx.r1.s64 + 624;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e58ec0
	ctx.lr = 0x82D96EE0;
	sub_82E58EC0(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e59698
	ctx.lr = 0x82D96EF4;
	sub_82E59698(ctx, base);
	// lwz r3,28(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// bl 0x82da2c00
	ctx.lr = 0x82D96EFC;
	sub_82DA2C00(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82e58b40
	ctx.lr = 0x82D96F04;
	sub_82E58B40(ctx, base);
	// lwz r9,624(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 624);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r1,r1,2448
	ctx.r1.s64 = ctx.r1.s64 + 2448;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D96F18"))) PPC_WEAK_FUNC(sub_82D96F18);
PPC_FUNC_IMPL(__imp__sub_82D96F18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82D96F20;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r25,15
	ctx.r25.s64 = 15;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// stw r25,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r25.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// addi r27,r11,28034
	ctx.r27.s64 = ctx.r11.s64 + 28034;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r27,-32
	ctx.r4.s64 = ctx.r27.s64 + -32;
	// bl 0x8259cc28
	ctx.lr = 0x82D96F5C;
	sub_8259CC28(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82da4090
	ctx.lr = 0x82D96F74;
	sub_82DA4090(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d97070
	if (!cr6.eq) goto loc_82D97070;
	// clrlwi r10,r29,14
	ctx.r10.u64 = ctx.r29.u32 & 0x3FFFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d96ffc
	if (cr6.eq) goto loc_82D96FFC;
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// lwz r11,-14508(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14508);
	// xor r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r29.u64;
	// rlwinm r8,r9,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82d96fb4
	if (!cr6.eq) goto loc_82D96FB4;
	// clrlwi r11,r11,14
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFF;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82d96fb8
	if (cr6.eq) goto loc_82D96FB8;
loc_82D96FB4:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82D96FB8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d96ffc
	if (!cr6.eq) goto loc_82D96FFC;
	// bl 0x831156e8
	ctx.lr = 0x82D96FC8;
	sub_831156E8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311c148
	ctx.lr = 0x82D96FD4;
	sub_8311C148(ctx, base);
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82D96FDC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d96fdc
	if (!cr6.eq) goto loc_82D96FDC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x82d97004
	goto loc_82D97004;
loc_82D96FFC:
	// addi r4,r27,-31
	ctx.r4.s64 = ctx.r27.s64 + -31;
	// li r5,0
	ctx.r5.s64 = 0;
loc_82D97004:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8259cc28
	ctx.lr = 0x82D9700C;
	sub_8259CC28(ctx, base);
	// stw r25,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r25.u32);
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82D9702C;
	sub_8259CB28(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r30,2
	ctx.r30.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d9704c
	if (cr6.lt) goto loc_82D9704C;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x82D9704C;
	sub_825952B8(ctx, base);
loc_82D9704C:
	// lwz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// stw r25,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r25.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// blt cr6,0x82d971b0
	if (cr6.lt) goto loc_82D971B0;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// b 0x82d971a8
	goto loc_82D971A8;
loc_82D97070:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// bl 0x830ff290
	ctx.lr = 0x82D97078;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,54
	cr6.compare<uint32_t>(ctx.r11.u32, 54, xer);
	// blt cr6,0x82d97090
	if (cr6.lt) goto loc_82D97090;
	// cmplwi cr6,r11,56
	cr6.compare<uint32_t>(ctx.r11.u32, 56, xer);
	// bgt cr6,0x82d97090
	if (cr6.gt) goto loc_82D97090;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82D97090:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// li r30,-1
	ctx.r30.s64 = -1;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82d970b8
	if (!cr6.eq) goto loc_82D970B8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8259cb28
	ctx.lr = 0x82D970B4;
	sub_8259CB28(ctx, base);
	// b 0x82d97148
	goto loc_82D97148;
loc_82D970B8:
	// clrlwi r10,r29,14
	ctx.r10.u64 = ctx.r29.u32 & 0x3FFFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d9713c
	if (cr6.eq) goto loc_82D9713C;
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// lwz r11,-14508(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14508);
	// xor r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r29.u64;
	// rlwinm r8,r9,0,0,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFC0000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82d970ec
	if (!cr6.eq) goto loc_82D970EC;
	// clrlwi r11,r11,14
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFF;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82d970f0
	if (cr6.eq) goto loc_82D970F0;
loc_82D970EC:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82D970F0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d9713c
	if (!cr6.eq) goto loc_82D9713C;
	// bl 0x831156e8
	ctx.lr = 0x82D97100;
	sub_831156E8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311c148
	ctx.lr = 0x82D9710C;
	sub_8311C148(ctx, base);
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82D97114:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d97114
	if (!cr6.eq) goto loc_82D97114;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82D97138;
	sub_8259CC28(ctx, base);
	// b 0x82d97148
	goto loc_82D97148;
loc_82D9713C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8259d6c0
	ctx.lr = 0x82D97148;
	sub_8259D6C0(ctx, base);
loc_82D97148:
	// stw r25,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r25.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r31,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82D97168;
	sub_8259CB28(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r30,2
	ctx.r30.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d97188
	if (cr6.lt) goto loc_82D97188;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x825952b8
	ctx.lr = 0x82D97188;
	sub_825952B8(ctx, base);
loc_82D97188:
	// lwz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// stw r25,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r25.u32);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r31.u8);
	// blt cr6,0x82d971b0
	if (cr6.lt) goto loc_82D971B0;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
loc_82D971A8:
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82D971B0;
	sub_825952B8(ctx, base);
loc_82D971B0:
	// stw r25,20(r26)
	PPC_STORE_U32(ctx.r26.u32 + 20, ctx.r25.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r31,16(r26)
	PPC_STORE_U32(ctx.r26.u32 + 16, ctx.r31.u32);
	// stb r31,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r31.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D971C8"))) PPC_WEAK_FUNC(sub_82D971C8);
PPC_FUNC_IMPL(__imp__sub_82D971C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D971D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-928(r1)
	ea = -928 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r30,r11,28087
	ctx.r30.s64 = ctx.r11.s64 + 28087;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,-52
	ctx.r4.s64 = ctx.r30.s64 + -52;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8259cc28
	ctx.lr = 0x82D971F0;
	sub_8259CC28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d96848
	ctx.lr = 0x82D971F8;
	sub_82D96848(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d9720c
	if (!cr6.eq) goto loc_82D9720C;
	// addi r1,r1,928
	ctx.r1.s64 = ctx.r1.s64 + 928;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82D9720C:
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bgt cr6,0x82d974f4
	if (cr6.gt) goto loc_82D974F4;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82d97264
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82D97264;
	// bdzf 4*cr6+eq,0x82d9728c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82D9728C;
	// bdzf 4*cr6+eq,0x82d97428
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82D97428;
	// bdzf 4*cr6+eq,0x82d97428
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82D97428;
	// bdzf 4*cr6+eq,0x82d97464
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82D97464;
	// bdzf 4*cr6+eq,0x82d97488
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82D97488;
	// bne cr6,0x82d9737c
	if (!cr6.eq) goto loc_82D9737C;
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// lwz r5,116(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r4,r4,164
	ctx.r4.u64 = ctx.r4.u64 | 164;
	// bl 0x82d042a8
	ctx.lr = 0x82D97250;
	sub_82D042A8(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,928
	ctx.r1.s64 = ctx.r1.s64 + 928;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82D97264:
	// lis r4,641
	ctx.r4.s64 = 42008576;
	// lwz r5,116(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r4,r4,222
	ctx.r4.u64 = ctx.r4.u64 | 222;
	// bl 0x82d042a8
	ctx.lr = 0x82D97278;
	sub_82D042A8(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,928
	ctx.r1.s64 = ctx.r1.s64 + 928;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82D9728C:
	// addi r4,r30,-22
	ctx.r4.s64 = ctx.r30.s64 + -22;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x837b0c10
	ctx.lr = 0x82D97298;
	sub_837B0C10(ctx, base);
	// lis r4,26
	ctx.r4.s64 = 1703936;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,448
	ctx.r4.u64 = ctx.r4.u64 | 448;
	// bl 0x82d04220
	ctx.lr = 0x82D972A8;
	sub_82D04220(ctx, base);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x831156e8
	ctx.lr = 0x82D972BC;
	sub_831156E8(ctx, base);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311c260
	ctx.lr = 0x82D972C8;
	sub_8311C260(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// li r5,632
	ctx.r5.s64 = 632;
	// bl 0x831ce980
	ctx.lr = 0x82D972D8;
	sub_831CE980(ctx, base);
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// lhz r7,300(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 300);
	// addi r11,r11,-14492
	ctx.r11.s64 = ctx.r11.s64 + -14492;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// bne cr6,0x82d97304
	if (!cr6.eq) goto loc_82D97304;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,304(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82d97308
	if (cr6.eq) goto loc_82D97308;
loc_82D97304:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D97308:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d97350
	if (!cr6.eq) goto loc_82D97350;
	// addi r4,r30,-21
	ctx.r4.s64 = ctx.r30.s64 + -21;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8259d6c0
	ctx.lr = 0x82D97320;
	sub_8259D6C0(ctx, base);
	// addi r11,r1,308
	ctx.r11.s64 = ctx.r1.s64 + 308;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82D97328:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82d97328
	if (!cr6.eq) goto loc_82D97328;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,308
	ctx.r4.s64 = ctx.r1.s64 + 308;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82D97350;
	sub_8259CC28(ctx, base);
loc_82D97350:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82d97364
	if (!cr6.lt) goto loc_82D97364;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
loc_82D97364:
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r4,r4,204
	ctx.r4.u64 = ctx.r4.u64 | 204;
	// bl 0x82d042a8
	ctx.lr = 0x82D97374;
	sub_82D042A8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// b 0x82d974f0
	goto loc_82D974F0;
loc_82D9737C:
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82d973d4
	if (!cr6.eq) goto loc_82D973D4;
	// addi r4,r30,-20
	ctx.r4.s64 = ctx.r30.s64 + -20;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x837b0c10
	ctx.lr = 0x82D97394;
	sub_837B0C10(ctx, base);
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// ori r4,r4,165
	ctx.r4.u64 = ctx.r4.u64 | 165;
	// bl 0x82d04220
	ctx.lr = 0x82D973A4;
	sub_82D04220(ctx, base);
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r5,192(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82d973b8
	if (!cr6.lt) goto loc_82D973B8;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
loc_82D973B8:
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// lwz r6,116(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r4,r4,167
	ctx.r4.u64 = ctx.r4.u64 | 167;
	// bl 0x82d042a8
	ctx.lr = 0x82D973CC;
	sub_82D042A8(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// b 0x82d974f0
	goto loc_82D974F0;
loc_82D973D4:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x82d974f4
	if (!cr6.eq) goto loc_82D974F4;
	// addi r4,r30,-2
	ctx.r4.s64 = ctx.r30.s64 + -2;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x837b0c10
	ctx.lr = 0x82D973E8;
	sub_837B0C10(ctx, base);
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// ori r4,r4,414
	ctx.r4.u64 = ctx.r4.u64 | 414;
	// bl 0x82d04220
	ctx.lr = 0x82D973F8;
	sub_82D04220(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82d9740c
	if (!cr6.lt) goto loc_82D9740C;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
loc_82D9740C:
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// lwz r6,116(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r4,r4,167
	ctx.r4.u64 = ctx.r4.u64 | 167;
	// bl 0x82d042a8
	ctx.lr = 0x82D97420;
	sub_82D042A8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// b 0x82d974f0
	goto loc_82D974F0;
loc_82D97428:
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82d9743c
	if (cr6.lt) goto loc_82D9743C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82D9743C:
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// ori r4,r4,295
	ctx.r4.u64 = ctx.r4.u64 | 295;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d042a8
	ctx.lr = 0x82D97450;
	sub_82D042A8(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,928
	ctx.r1.s64 = ctx.r1.s64 + 928;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82D97464:
	// addi r4,r30,-1
	ctx.r4.s64 = ctx.r30.s64 + -1;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x837b0c10
	ctx.lr = 0x82D97470;
	sub_837B0C10(ctx, base);
	// lis r4,640
	ctx.r4.s64 = 41943040;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// bl 0x82d04220
	ctx.lr = 0x82D97480;
	sub_82D04220(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// b 0x82d974f0
	goto loc_82D974F0;
loc_82D97488:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x837b0c10
	ctx.lr = 0x82D97494;
	sub_837B0C10(ctx, base);
	// lis r4,560
	ctx.r4.s64 = 36700160;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// ori r4,r4,467
	ctx.r4.u64 = ctx.r4.u64 | 467;
	// bl 0x82d04220
	ctx.lr = 0x82D974A4;
	sub_82D04220(ctx, base);
	// bl 0x831156e8
	ctx.lr = 0x82D974A8;
	sub_831156E8(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8311bf98
	ctx.lr = 0x82D974C4;
	sub_8311BF98(ctx, base);
	// lwz r9,180(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// bge cr6,0x82d974d8
	if (!cr6.lt) goto loc_82D974D8;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
loc_82D974D8:
	// lis r4,206
	ctx.r4.s64 = 13500416;
	// addi r6,r3,56
	ctx.r6.s64 = ctx.r3.s64 + 56;
	// ori r4,r4,276
	ctx.r4.u64 = ctx.r4.u64 | 276;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d042a8
	ctx.lr = 0x82D974EC;
	sub_82D042A8(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
loc_82D974F0:
	// bl 0x8387e8e0
	ctx.lr = 0x82D974F4;
	sub_8387E8E0(ctx, base);
loc_82D974F4:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,928
	ctx.r1.s64 = ctx.r1.s64 + 928;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D97508"))) PPC_WEAK_FUNC(sub_82D97508);
PPC_FUNC_IMPL(__imp__sub_82D97508) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// stb r11,86(r3)
	PPC_STORE_U8(ctx.r3.u32 + 86, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D97514"))) PPC_WEAK_FUNC(sub_82D97514);
PPC_FUNC_IMPL(__imp__sub_82D97514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D97518"))) PPC_WEAK_FUNC(sub_82D97518);
PPC_FUNC_IMPL(__imp__sub_82D97518) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// stb r11,87(r3)
	PPC_STORE_U8(ctx.r3.u32 + 87, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D97524"))) PPC_WEAK_FUNC(sub_82D97524);
PPC_FUNC_IMPL(__imp__sub_82D97524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D97528"))) PPC_WEAK_FUNC(sub_82D97528);
PPC_FUNC_IMPL(__imp__sub_82D97528) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,148
	ctx.r3.s64 = ctx.r3.s64 + 148;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D97530"))) PPC_WEAK_FUNC(sub_82D97530);
PPC_FUNC_IMPL(__imp__sub_82D97530) {
	PPC_FUNC_PROLOGUE();
	// stw r4,180(r3)
	PPC_STORE_U32(ctx.r3.u32 + 180, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D97538"))) PPC_WEAK_FUNC(sub_82D97538);
PPC_FUNC_IMPL(__imp__sub_82D97538) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,180(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D97540"))) PPC_WEAK_FUNC(sub_82D97540);
PPC_FUNC_IMPL(__imp__sub_82D97540) {
	PPC_FUNC_PROLOGUE();
	// stw r4,184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 184, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D97548"))) PPC_WEAK_FUNC(sub_82D97548);
PPC_FUNC_IMPL(__imp__sub_82D97548) {
	PPC_FUNC_PROLOGUE();
	// stw r4,188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 188, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D97550"))) PPC_WEAK_FUNC(sub_82D97550);
PPC_FUNC_IMPL(__imp__sub_82D97550) {
	PPC_FUNC_PROLOGUE();
	// stw r4,192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 192, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D97558"))) PPC_WEAK_FUNC(sub_82D97558);
PPC_FUNC_IMPL(__imp__sub_82D97558) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,192(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D97560"))) PPC_WEAK_FUNC(sub_82D97560);
PPC_FUNC_IMPL(__imp__sub_82D97560) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,196(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D97568"))) PPC_WEAK_FUNC(sub_82D97568);
PPC_FUNC_IMPL(__imp__sub_82D97568) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,200(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 200, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D97570"))) PPC_WEAK_FUNC(sub_82D97570);
PPC_FUNC_IMPL(__imp__sub_82D97570) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,200(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D97578"))) PPC_WEAK_FUNC(sub_82D97578);
PPC_FUNC_IMPL(__imp__sub_82D97578) {
	PPC_FUNC_PROLOGUE();
	// stw r4,1664(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1664, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D97580"))) PPC_WEAK_FUNC(sub_82D97580);
PPC_FUNC_IMPL(__imp__sub_82D97580) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1664(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1664);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D97588"))) PPC_WEAK_FUNC(sub_82D97588);
PPC_FUNC_IMPL(__imp__sub_82D97588) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,18
	cr6.compare<int32_t>(ctx.r4.s32, 18, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r10,1668(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1668, ctx.r10.u32);
	// lwz r8,4(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r8,1672(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1672, ctx.r8.u32);
	// stb r9,1812(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1812, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D975B4"))) PPC_WEAK_FUNC(sub_82D975B4);
PPC_FUNC_IMPL(__imp__sub_82D975B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D975B8"))) PPC_WEAK_FUNC(sub_82D975B8);
PPC_FUNC_IMPL(__imp__sub_82D975B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,18
	cr6.compare<int32_t>(ctx.r4.s32, 18, xer);
	// blt cr6,0x82d975c8
	if (cr6.lt) goto loc_82D975C8;
	// addi r3,r3,1668
	ctx.r3.s64 = ctx.r3.s64 + 1668;
	// blr 
	return;
loc_82D975C8:
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,1668
	ctx.r3.s64 = ctx.r11.s64 + 1668;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D975D8"))) PPC_WEAK_FUNC(sub_82D975D8);
PPC_FUNC_IMPL(__imp__sub_82D975D8) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,1812(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1812);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D975E0"))) PPC_WEAK_FUNC(sub_82D975E0);
PPC_FUNC_IMPL(__imp__sub_82D975E0) {
	PPC_FUNC_PROLOGUE();
	// stb r4,1813(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1813, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D975E8"))) PPC_WEAK_FUNC(sub_82D975E8);
PPC_FUNC_IMPL(__imp__sub_82D975E8) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,1813(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1813);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D975F0"))) PPC_WEAK_FUNC(sub_82D975F0);
PPC_FUNC_IMPL(__imp__sub_82D975F0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,1816(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1816, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D975F8"))) PPC_WEAK_FUNC(sub_82D975F8);
PPC_FUNC_IMPL(__imp__sub_82D975F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1816(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1816);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D97600"))) PPC_WEAK_FUNC(sub_82D97600);
PPC_FUNC_IMPL(__imp__sub_82D97600) {
	PPC_FUNC_PROLOGUE();
	// stb r4,1820(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1820, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D97608"))) PPC_WEAK_FUNC(sub_82D97608);
PPC_FUNC_IMPL(__imp__sub_82D97608) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,1820(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1820);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D97610"))) PPC_WEAK_FUNC(sub_82D97610);
PPC_FUNC_IMPL(__imp__sub_82D97610) {
	PPC_FUNC_PROLOGUE();
	// stb r4,1821(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1821, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D97618"))) PPC_WEAK_FUNC(sub_82D97618);
PPC_FUNC_IMPL(__imp__sub_82D97618) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,1821(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1821);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D97620"))) PPC_WEAK_FUNC(sub_82D97620);
PPC_FUNC_IMPL(__imp__sub_82D97620) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r10,r3,1820
	ctx.r10.s64 = ctx.r3.s64 + 1820;
	// addi r11,r4,-4
	ctx.r11.s64 = ctx.r4.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82D97630:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82d97630
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82D97630;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D97640"))) PPC_WEAK_FUNC(sub_82D97640);
PPC_FUNC_IMPL(__imp__sub_82D97640) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,1824
	ctx.r3.s64 = ctx.r3.s64 + 1824;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D97648"))) PPC_WEAK_FUNC(sub_82D97648);
PPC_FUNC_IMPL(__imp__sub_82D97648) {
	PPC_FUNC_PROLOGUE();
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,84
	ctx.r9.s64 = 84;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,1828(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1828, ctx.r11.u32);
	// ori r7,r10,65535
	ctx.r7.u64 = ctx.r10.u64 | 65535;
	// stw r9,1832(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1832, ctx.r9.u32);
	// stw r11,1836(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1836, ctx.r11.u32);
	// stw r8,1840(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1840, ctx.r8.u32);
	// stw r11,1844(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1844, ctx.r11.u32);
	// stw r7,1848(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1848, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D97678"))) PPC_WEAK_FUNC(sub_82D97678);
PPC_FUNC_IMPL(__imp__sub_82D97678) {
	PPC_FUNC_PROLOGUE();
	// stw r4,1852(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1852, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D97680"))) PPC_WEAK_FUNC(sub_82D97680);
PPC_FUNC_IMPL(__imp__sub_82D97680) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1852(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1852);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D97688"))) PPC_WEAK_FUNC(sub_82D97688);
PPC_FUNC_IMPL(__imp__sub_82D97688) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,1864
	ctx.r3.s64 = ctx.r3.s64 + 1864;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D97690"))) PPC_WEAK_FUNC(sub_82D97690);
PPC_FUNC_IMPL(__imp__sub_82D97690) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,1880
	ctx.r3.s64 = ctx.r3.s64 + 1880;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D97698"))) PPC_WEAK_FUNC(sub_82D97698);
PPC_FUNC_IMPL(__imp__sub_82D97698) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,1896
	ctx.r3.s64 = ctx.r3.s64 + 1896;
	// b 0x82ce7a90
	sub_82CE7A90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D976A0"))) PPC_WEAK_FUNC(sub_82D976A0);
PPC_FUNC_IMPL(__imp__sub_82D976A0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,1896
	ctx.r3.s64 = ctx.r3.s64 + 1896;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D976A8"))) PPC_WEAK_FUNC(sub_82D976A8);
PPC_FUNC_IMPL(__imp__sub_82D976A8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,2424(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2424, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D976B0"))) PPC_WEAK_FUNC(sub_82D976B0);
PPC_FUNC_IMPL(__imp__sub_82D976B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,2424(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2424);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D976B8"))) PPC_WEAK_FUNC(sub_82D976B8);
PPC_FUNC_IMPL(__imp__sub_82D976B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,2428(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2428, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D976C4"))) PPC_WEAK_FUNC(sub_82D976C4);
PPC_FUNC_IMPL(__imp__sub_82D976C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D976C8"))) PPC_WEAK_FUNC(sub_82D976C8);
PPC_FUNC_IMPL(__imp__sub_82D976C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,2428(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2428);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D976D0"))) PPC_WEAK_FUNC(sub_82D976D0);
PPC_FUNC_IMPL(__imp__sub_82D976D0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,2432(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2432, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D976D8"))) PPC_WEAK_FUNC(sub_82D976D8);
PPC_FUNC_IMPL(__imp__sub_82D976D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,2432(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2432);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D976E0"))) PPC_WEAK_FUNC(sub_82D976E0);
PPC_FUNC_IMPL(__imp__sub_82D976E0) {
	PPC_FUNC_PROLOGUE();
	// stb r4,2436(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2436, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D976E8"))) PPC_WEAK_FUNC(sub_82D976E8);
PPC_FUNC_IMPL(__imp__sub_82D976E8) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,2436(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2436);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D976F0"))) PPC_WEAK_FUNC(sub_82D976F0);
PPC_FUNC_IMPL(__imp__sub_82D976F0) {
	PPC_FUNC_PROLOGUE();
	// stb r4,2437(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2437, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D976F8"))) PPC_WEAK_FUNC(sub_82D976F8);
PPC_FUNC_IMPL(__imp__sub_82D976F8) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,2437(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2437);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D97700"))) PPC_WEAK_FUNC(sub_82D97700);
PPC_FUNC_IMPL(__imp__sub_82D97700) {
	PPC_FUNC_PROLOGUE();
	// stw r4,2440(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2440, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D97708"))) PPC_WEAK_FUNC(sub_82D97708);
PPC_FUNC_IMPL(__imp__sub_82D97708) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,2440(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2440);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D97710"))) PPC_WEAK_FUNC(sub_82D97710);
PPC_FUNC_IMPL(__imp__sub_82D97710) {
	PPC_FUNC_PROLOGUE();
	// stw r4,2444(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2444, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D97718"))) PPC_WEAK_FUNC(sub_82D97718);
PPC_FUNC_IMPL(__imp__sub_82D97718) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,2444(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2444);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D97720"))) PPC_WEAK_FUNC(sub_82D97720);
PPC_FUNC_IMPL(__imp__sub_82D97720) {
	PPC_FUNC_PROLOGUE();
	// stw r4,2448(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2448, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D97728"))) PPC_WEAK_FUNC(sub_82D97728);
PPC_FUNC_IMPL(__imp__sub_82D97728) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,2448(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2448);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D97730"))) PPC_WEAK_FUNC(sub_82D97730);
PPC_FUNC_IMPL(__imp__sub_82D97730) {
	PPC_FUNC_PROLOGUE();
	// stw r4,2452(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2452, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D97738"))) PPC_WEAK_FUNC(sub_82D97738);
PPC_FUNC_IMPL(__imp__sub_82D97738) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,2452(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2452);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D97740"))) PPC_WEAK_FUNC(sub_82D97740);
PPC_FUNC_IMPL(__imp__sub_82D97740) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,250
	cr6.compare<uint32_t>(ctx.r4.u32, 250, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// addi r11,r4,614
	ctx.r11.s64 = ctx.r4.s64 + 614;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D97758"))) PPC_WEAK_FUNC(sub_82D97758);
PPC_FUNC_IMPL(__imp__sub_82D97758) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,250
	cr6.compare<uint32_t>(ctx.r4.u32, 250, xer);
	// blt cr6,0x82d97768
	if (cr6.lt) goto loc_82D97768;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82D97768:
	// addi r11,r4,614
	ctx.r11.s64 = ctx.r4.s64 + 614;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D97778"))) PPC_WEAK_FUNC(sub_82D97778);
PPC_FUNC_IMPL(__imp__sub_82D97778) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// li r10,250
	ctx.r10.s64 = 250;
	// addi r11,r3,2456
	ctx.r11.s64 = ctx.r3.s64 + 2456;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82D9778C:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82d9778c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82D9778C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D97798"))) PPC_WEAK_FUNC(sub_82D97798);
PPC_FUNC_IMPL(__imp__sub_82D97798) {
	PPC_FUNC_PROLOGUE();
	// stw r4,3456(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3456, ctx.r4.u32);
	// stw r5,3460(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3460, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D977A4"))) PPC_WEAK_FUNC(sub_82D977A4);
PPC_FUNC_IMPL(__imp__sub_82D977A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D977A8"))) PPC_WEAK_FUNC(sub_82D977A8);
PPC_FUNC_IMPL(__imp__sub_82D977A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,3456(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3456);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D977B0"))) PPC_WEAK_FUNC(sub_82D977B0);
PPC_FUNC_IMPL(__imp__sub_82D977B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,3460(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3460);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D977B8"))) PPC_WEAK_FUNC(sub_82D977B8);
PPC_FUNC_IMPL(__imp__sub_82D977B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D977C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,2340
	ctx.r11.s64 = 153354240;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,37449
	ctx.r10.u64 = ctx.r11.u64 | 37449;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82d977e8
	if (!cr6.gt) goto loc_82D977E8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x82D977E8;
	sub_831CC150(ctx, base);
loc_82D977E8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r30,28
	ctx.r30.s64 = 28;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r30
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r30.s32);
	// cmplw cr6,r8,r28
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r28.u32, xer);
	// bge cr6,0x82d97894
	if (!cr6.lt) goto loc_82D97894;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x82ad45d0
	ctx.lr = 0x82D97810;
	sub_82AD45D0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, xer);
	// beq cr6,0x82d9785c
	if (cr6.eq) goto loc_82D9785C;
loc_82D97828:
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82d9784c
	if (cr6.eq) goto loc_82D9784C;
	// li r8,7
	ctx.r8.s64 = 7;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// addi r9,r7,-4
	ctx.r9.s64 = ctx.r7.s64 + -4;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_82D97840:
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x82d97840
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82D97840;
loc_82D9784C:
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// addi r7,r7,28
	ctx.r7.s64 = ctx.r7.s64 + 28;
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, xer);
	// bne cr6,0x82d97828
	if (!cr6.eq) goto loc_82D97828;
loc_82D9785C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// divw r30,r10,r30
	ctx.r30.s32 = PPCDivide(ctx.r10.s32, ctx.r30.s32);
	// beq cr6,0x82d97878
	if (cr6.eq) goto loc_82D97878;
	// bl 0x82416268
	ctx.lr = 0x82D97878;
	sub_82416268(ctx, base);
loc_82D97878:
	// mulli r10,r28,28
	ctx.r10.s64 = ctx.r28.s64 * 28;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// mulli r11,r30,28
	ctx.r11.s64 = ctx.r30.s64 * 28;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
loc_82D97894:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D9789C"))) PPC_WEAK_FUNC(sub_82D9789C);
PPC_FUNC_IMPL(__imp__sub_82D9789C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D978A0"))) PPC_WEAK_FUNC(sub_82D978A0);
PPC_FUNC_IMPL(__imp__sub_82D978A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lwz r9,1868(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1868);
	// addi r4,r3,1864
	ctx.r4.s64 = ctx.r3.s64 + 1864;
	// lwz r11,1864(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1864);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_82D978B4:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// beq cr6,0x82d978c8
	if (cr6.eq) goto loc_82D978C8;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82d9790c
	goto loc_82D9790C;
loc_82D978C8:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpw cr6,r6,r10
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, xer);
	// beq cr6,0x82d978dc
	if (cr6.eq) goto loc_82D978DC;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82d9790c
	goto loc_82D9790C;
loc_82D978DC:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r7,r10
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, xer);
	// beq cr6,0x82d978f0
	if (cr6.eq) goto loc_82D978F0;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82d9790c
	goto loc_82D9790C;
loc_82D978F0:
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne cr6,0x82d97908
	if (!cr6.eq) goto loc_82D97908;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// bne cr6,0x82d9790c
	if (!cr6.eq) goto loc_82D9790C;
loc_82D97908:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82D9790C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82d97928
	if (!cr6.eq) goto loc_82D97928;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x82d978b4
	if (!cr6.eq) goto loc_82D978B4;
	// blr 
	return;
loc_82D97928:
	// lwz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, xer);
	// beq cr6,0x82d97964
	if (cr6.eq) goto loc_82D97964;
	// addi r7,r11,-28
	ctx.r7.s64 = ctx.r11.s64 + -28;
loc_82D97938:
	// li r8,7
	ctx.r8.s64 = 7;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// addi r9,r7,-4
	ctx.r9.s64 = ctx.r7.s64 + -4;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_82D97948:
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x82d97948
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82D97948;
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// addi r7,r7,28
	ctx.r7.s64 = ctx.r7.s64 + 28;
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, xer);
	// bne cr6,0x82d97938
	if (!cr6.eq) goto loc_82D97938;
loc_82D97964:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r11,r11,-28
	ctx.r11.s64 = ctx.r11.s64 + -28;
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D97974"))) PPC_WEAK_FUNC(sub_82D97974);
PPC_FUNC_IMPL(__imp__sub_82D97974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D97978"))) PPC_WEAK_FUNC(sub_82D97978);
PPC_FUNC_IMPL(__imp__sub_82D97978) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,2340
	ctx.r10.s64 = 153354240;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,28
	ctx.r9.s64 = 28;
	// ori r8,r10,37449
	ctx.r8.u64 = ctx.r10.u64 | 37449;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// subf r5,r4,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r4.s64;
	// divw r10,r6,r9
	ctx.r10.s32 = PPCDivide(ctx.r6.s32, ctx.r9.s32);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bge cr6,0x82d979ac
	if (!cr6.lt) goto loc_82D979AC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// b 0x831cc150
	sub_831CC150(ctx, base);
	return;
loc_82D979AC:
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
	// blt cr6,0x82d979dc
	if (cr6.lt) goto loc_82D979DC;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_82D979DC:
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x82d979e8
	if (!cr6.lt) goto loc_82D979E8;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_82D979E8:
	// b 0x82d977b8
	sub_82D977B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D979EC"))) PPC_WEAK_FUNC(sub_82D979EC);
PPC_FUNC_IMPL(__imp__sub_82D979EC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D979F0"))) PPC_WEAK_FUNC(sub_82D979F0);
PPC_FUNC_IMPL(__imp__sub_82D979F0) {
	PPC_FUNC_PROLOGUE();
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r3,28
	ctx.r3.s64 = ctx.r3.s64 + 28;
	// b 0x8259cb28
	sub_8259CB28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D97A00"))) PPC_WEAK_FUNC(sub_82D97A00);
PPC_FUNC_IMPL(__imp__sub_82D97A00) {
	PPC_FUNC_PROLOGUE();
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r3,56
	ctx.r3.s64 = ctx.r3.s64 + 56;
	// b 0x8259cb28
	sub_8259CB28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D97A10"))) PPC_WEAK_FUNC(sub_82D97A10);
PPC_FUNC_IMPL(__imp__sub_82D97A10) {
	PPC_FUNC_PROLOGUE();
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r3,148
	ctx.r3.s64 = ctx.r3.s64 + 148;
	// b 0x8259cb28
	sub_8259CB28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D97A20"))) PPC_WEAK_FUNC(sub_82D97A20);
PPC_FUNC_IMPL(__imp__sub_82D97A20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lwz r7,1864(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1864);
	// addi r5,r3,1864
	ctx.r5.s64 = ctx.r3.s64 + 1864;
	// lwz r6,1868(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1868);
	// cmplw cr6,r7,r6
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// cmplw cr6,r6,r6
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r6.u32, xer);
	// beq cr6,0x82d97a6c
	if (cr6.eq) goto loc_82D97A6C;
loc_82D97A40:
	// li r8,7
	ctx.r8.s64 = 7;
	// addi r11,r9,-4
	ctx.r11.s64 = ctx.r9.s64 + -4;
	// addi r10,r7,-4
	ctx.r10.s64 = ctx.r7.s64 + -4;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_82D97A50:
	// lwzu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82d97a50
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82D97A50;
	// addi r9,r9,28
	ctx.r9.s64 = ctx.r9.s64 + 28;
	// addi r7,r7,28
	ctx.r7.s64 = ctx.r7.s64 + 28;
	// cmplw cr6,r9,r6
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, xer);
	// bne cr6,0x82d97a40
	if (!cr6.eq) goto loc_82D97A40;
loc_82D97A6C:
	// stw r7,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D97A74"))) PPC_WEAK_FUNC(sub_82D97A74);
PPC_FUNC_IMPL(__imp__sub_82D97A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D97A78"))) PPC_WEAK_FUNC(sub_82D97A78);
PPC_FUNC_IMPL(__imp__sub_82D97A78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lwz r7,1880(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1880);
	// addi r5,r3,1880
	ctx.r5.s64 = ctx.r3.s64 + 1880;
	// lwz r6,1884(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1884);
	// cmplw cr6,r7,r6
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// cmplw cr6,r6,r6
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r6.u32, xer);
	// beq cr6,0x82d97ac4
	if (cr6.eq) goto loc_82D97AC4;
loc_82D97A98:
	// li r8,7
	ctx.r8.s64 = 7;
	// addi r11,r9,-4
	ctx.r11.s64 = ctx.r9.s64 + -4;
	// addi r10,r7,-4
	ctx.r10.s64 = ctx.r7.s64 + -4;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_82D97AA8:
	// lwzu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82d97aa8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82D97AA8;
	// addi r9,r9,28
	ctx.r9.s64 = ctx.r9.s64 + 28;
	// addi r7,r7,28
	ctx.r7.s64 = ctx.r7.s64 + 28;
	// cmplw cr6,r9,r6
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, xer);
	// bne cr6,0x82d97a98
	if (!cr6.eq) goto loc_82D97A98;
loc_82D97AC4:
	// stw r7,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D97ACC"))) PPC_WEAK_FUNC(sub_82D97ACC);
PPC_FUNC_IMPL(__imp__sub_82D97ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D97AD0"))) PPC_WEAK_FUNC(sub_82D97AD0);
PPC_FUNC_IMPL(__imp__sub_82D97AD0) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// bge cr6,0x82d97b08
	if (!cr6.lt) goto loc_82D97B08;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x82d97b0c
	if (!cr6.gt) goto loc_82D97B0C;
loc_82D97B08:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82D97B0C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d97b78
	if (cr6.eq) goto loc_82D97B78;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,28
	ctx.r9.s64 = 28;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r7,r10,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// divw r30,r7,r9
	ctx.r30.s32 = PPCDivide(ctx.r7.s32, ctx.r9.s32);
	// bne cr6,0x82d97b40
	if (!cr6.eq) goto loc_82D97B40;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d97978
	ctx.lr = 0x82D97B40;
	sub_82D97978(ctx, base);
loc_82D97B40:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r10,r30,28
	ctx.r10.s64 = ctx.r30.s64 * 28;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d97bb8
	if (cr6.eq) goto loc_82D97BB8;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82D97B68:
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82d97b68
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82D97B68;
	// b 0x82d97bb8
	goto loc_82D97BB8;
loc_82D97B78:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82d97b90
	if (!cr6.eq) goto loc_82D97B90;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d97978
	ctx.lr = 0x82D97B90;
	sub_82D97978(ctx, base);
loc_82D97B90:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d97bb8
	if (cr6.eq) goto loc_82D97BB8;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r11,r30,-4
	ctx.r11.s64 = ctx.r30.s64 + -4;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82D97BAC:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82d97bac
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82D97BAC;
loc_82D97BB8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
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

__attribute__((alias("__imp__sub_82D97BDC"))) PPC_WEAK_FUNC(sub_82D97BDC);
PPC_FUNC_IMPL(__imp__sub_82D97BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D97BE0"))) PPC_WEAK_FUNC(sub_82D97BE0);
PPC_FUNC_IMPL(__imp__sub_82D97BE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82D97BE8;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r8,0(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// li r30,-1
	ctx.r30.s64 = -1;
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r11,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r11.u8);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r10,4
	ctx.r4.s64 = ctx.r10.s64 + 4;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8259cb28
	ctx.lr = 0x82D97C3C;
	sub_8259CB28(ctx, base);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r29,r31,88
	ctx.r29.s64 = ctx.r31.s64 + 88;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r7,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r7.u32);
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// bl 0x8259cb28
	ctx.lr = 0x82D97C5C;
	sub_8259CB28(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r29,32
	ctx.r3.s64 = ctx.r29.s64 + 32;
	// bl 0x8259cb28
	ctx.lr = 0x82D97C70;
	sub_8259CB28(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x8259cb28
	ctx.lr = 0x82D97C84;
	sub_8259CB28(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x8259cb28
	ctx.lr = 0x82D97C98;
	sub_8259CB28(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// sth r6,84(r31)
	PPC_STORE_U16(ctx.r31.u32 + 84, ctx.r6.u16);
	// bl 0x8378e240
	ctx.lr = 0x82D97CA8;
	sub_8378E240(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D97CB0"))) PPC_WEAK_FUNC(sub_82D97CB0);
PPC_FUNC_IMPL(__imp__sub_82D97CB0) {
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
	// addi r3,r3,204
	ctx.r3.s64 = ctx.r3.s64 + 204;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82ceba68
	ctx.lr = 0x82D97CCC;
	sub_82CEBA68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x838760e0
	ctx.lr = 0x82D97CD4;
	sub_838760E0(ctx, base);
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

__attribute__((alias("__imp__sub_82D97CE8"))) PPC_WEAK_FUNC(sub_82D97CE8);
PPC_FUNC_IMPL(__imp__sub_82D97CE8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// addi r3,r3,1864
	ctx.r3.s64 = ctx.r3.s64 + 1864;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// lwz r11,1864(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1864);
	// lwz r8,1868(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1868);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// beq cr6,0x82d97d3c
	if (cr6.eq) goto loc_82D97D3C;
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
loc_82D97D30:
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82d97d30
	if (!cr6.eq) goto loc_82D97D30;
loc_82D97D3C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82d97ad0
	ctx.lr = 0x82D97D44;
	sub_82D97AD0(ctx, base);
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,84
	ctx.r9.s64 = 84;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,1828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1828, ctx.r11.u32);
	// ori r7,r10,65535
	ctx.r7.u64 = ctx.r10.u64 | 65535;
	// stw r9,1832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1832, ctx.r9.u32);
	// stw r11,1836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1836, ctx.r11.u32);
	// stw r8,1840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1840, ctx.r8.u32);
	// stw r11,1844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1844, ctx.r11.u32);
	// stw r7,1848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1848, ctx.r7.u32);
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

__attribute__((alias("__imp__sub_82D97D84"))) PPC_WEAK_FUNC(sub_82D97D84);
PPC_FUNC_IMPL(__imp__sub_82D97D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D97D88"))) PPC_WEAK_FUNC(sub_82D97D88);
PPC_FUNC_IMPL(__imp__sub_82D97D88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// addi r3,r3,1880
	ctx.r3.s64 = ctx.r3.s64 + 1880;
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// bl 0x82d97ad0
	ctx.lr = 0x82D97DBC;
	sub_82D97AD0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D97DCC"))) PPC_WEAK_FUNC(sub_82D97DCC);
PPC_FUNC_IMPL(__imp__sub_82D97DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D97DD0"))) PPC_WEAK_FUNC(sub_82D97DD0);
PPC_FUNC_IMPL(__imp__sub_82D97DD0) {
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
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x82d97e1c
	if (cr6.eq) goto loc_82D97E1C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82d9cb50
	ctx.lr = 0x82D97E04;
	sub_82D9CB50(ctx, base);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82d9cc20
	ctx.lr = 0x82D97E18;
	sub_82D9CC20(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_82D97E1C:
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r9,r11,-14428
	ctx.r9.s64 = ctx.r11.s64 + -14428;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82D97E4C"))) PPC_WEAK_FUNC(sub_82D97E4C);
PPC_FUNC_IMPL(__imp__sub_82D97E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D97E50"))) PPC_WEAK_FUNC(sub_82D97E50);
PPC_FUNC_IMPL(__imp__sub_82D97E50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82D97E58;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,-1
	ctx.r28.s64 = -1;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r28.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r30,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r30.u8);
	// addi r27,r11,28376
	ctx.r27.s64 = ctx.r11.s64 + 28376;
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// addi r3,r3,28
	ctx.r3.s64 = ctx.r3.s64 + 28;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// addi r4,r27,-2
	ctx.r4.s64 = ctx.r27.s64 + -2;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// bl 0x8259cc28
	ctx.lr = 0x82D97E9C;
	sub_8259CC28(ctx, base);
	// addi r4,r27,-1
	ctx.r4.s64 = ctx.r27.s64 + -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x8259cc28
	ctx.lr = 0x82D97EAC;
	sub_8259CC28(ctx, base);
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r26,1
	ctx.r26.s64 = 1;
	// ori r29,r10,65535
	ctx.r29.u64 = ctx.r10.u64 | 65535;
	// stb r26,86(r31)
	PPC_STORE_U8(ctx.r31.u32 + 86, ctx.r26.u8);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// sth r29,84(r31)
	PPC_STORE_U16(ctx.r31.u32 + 84, ctx.r29.u16);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r26,87(r31)
	PPC_STORE_U8(ctx.r31.u32 + 87, ctx.r26.u8);
	// addi r3,r31,148
	ctx.r3.s64 = ctx.r31.s64 + 148;
	// bl 0x8259cc28
	ctx.lr = 0x82D97ED4;
	sub_8259CC28(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r27,3
	ctx.r27.s64 = 3;
	// stw r29,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r29.u32);
	// stw r28,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r28.u32);
	// addi r3,r31,204
	ctx.r3.s64 = ctx.r31.s64 + 204;
	// stw r28,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r28.u32);
	// stw r27,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r27.u32);
	// lfs f0,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r30.u32);
	// stfs f0,200(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 200, temp.u32);
	// stw r30,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r30.u32);
	// bl 0x82d98960
	ctx.lr = 0x82D97F04;
	sub_82D98960(ctx, base);
	// li r10,18
	ctx.r10.s64 = 18;
	// addi r11,r31,1664
	ctx.r11.s64 = ctx.r31.s64 + 1664;
	// stw r30,1664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1664, ctx.r30.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82D97F14:
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stbu r30,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r30.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x82d97f14
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82D97F14;
	// li r11,84
	ctx.r11.s64 = 84;
	// stb r30,1812(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1812, ctx.r30.u8);
	// li r10,13
	ctx.r10.s64 = 13;
	// stb r30,1813(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1813, ctx.r30.u8);
	// stw r30,1816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1816, ctx.r30.u32);
	// addi r5,r31,1864
	ctx.r5.s64 = ctx.r31.s64 + 1864;
	// stb r30,1820(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1820, ctx.r30.u8);
	// stb r27,1821(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1821, ctx.r27.u8);
	// stw r30,1828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1828, ctx.r30.u32);
	// stw r11,1832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1832, ctx.r11.u32);
	// stw r30,1836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1836, ctx.r30.u32);
	// stw r28,1840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1840, ctx.r28.u32);
	// stw r30,1844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1844, ctx.r30.u32);
	// stw r29,1848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1848, ctx.r29.u32);
	// stw r30,1852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1852, ctx.r30.u32);
	// stw r10,1856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1856, ctx.r10.u32);
	// stw r29,1860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1860, ctx.r29.u32);
	// lwz r6,1868(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1868);
	// lwz r7,1864(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1864);
	// cmplw cr6,r7,r6
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, xer);
	// beq cr6,0x82d97fb0
	if (cr6.eq) goto loc_82D97FB0;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// cmplw cr6,r6,r6
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r6.u32, xer);
	// beq cr6,0x82d97fac
	if (cr6.eq) goto loc_82D97FAC;
loc_82D97F80:
	// li r8,7
	ctx.r8.s64 = 7;
	// addi r11,r9,-4
	ctx.r11.s64 = ctx.r9.s64 + -4;
	// addi r10,r7,-4
	ctx.r10.s64 = ctx.r7.s64 + -4;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_82D97F90:
	// lwzu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82d97f90
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82D97F90;
	// addi r9,r9,28
	ctx.r9.s64 = ctx.r9.s64 + 28;
	// addi r7,r7,28
	ctx.r7.s64 = ctx.r7.s64 + 28;
	// cmplw cr6,r9,r6
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, xer);
	// bne cr6,0x82d97f80
	if (!cr6.eq) goto loc_82D97F80;
loc_82D97FAC:
	// stw r7,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r7.u32);
loc_82D97FB0:
	// lwz r7,1880(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1880);
	// addi r5,r31,1880
	ctx.r5.s64 = ctx.r31.s64 + 1880;
	// lwz r6,1884(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1884);
	// cmplw cr6,r7,r6
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, xer);
	// beq cr6,0x82d98000
	if (cr6.eq) goto loc_82D98000;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// cmplw cr6,r6,r6
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r6.u32, xer);
	// beq cr6,0x82d97ffc
	if (cr6.eq) goto loc_82D97FFC;
loc_82D97FD0:
	// li r8,7
	ctx.r8.s64 = 7;
	// addi r11,r9,-4
	ctx.r11.s64 = ctx.r9.s64 + -4;
	// addi r10,r7,-4
	ctx.r10.s64 = ctx.r7.s64 + -4;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_82D97FE0:
	// lwzu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82d97fe0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82D97FE0;
	// addi r9,r9,28
	ctx.r9.s64 = ctx.r9.s64 + 28;
	// addi r7,r7,28
	ctx.r7.s64 = ctx.r7.s64 + 28;
	// cmplw cr6,r9,r6
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, xer);
	// bne cr6,0x82d97fd0
	if (!cr6.eq) goto loc_82D97FD0;
loc_82D97FFC:
	// stw r7,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r7.u32);
loc_82D98000:
	// addi r3,r31,1896
	ctx.r3.s64 = ctx.r31.s64 + 1896;
	// bl 0x82d8cc78
	ctx.lr = 0x82D98008;
	sub_82D8CC78(ctx, base);
	// li r10,250
	ctx.r10.s64 = 250;
	// li r9,7
	ctx.r9.s64 = 7;
	// stw r30,2424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2424, ctx.r30.u32);
	// addi r11,r31,2456
	ctx.r11.s64 = ctx.r31.s64 + 2456;
	// stw r30,2432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2432, ctx.r30.u32);
	// stw r9,2428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2428, ctx.r9.u32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stb r30,2436(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2436, ctx.r30.u8);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stb r26,2437(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2437, ctx.r26.u8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// stw r30,2440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2440, ctx.r30.u32);
	// stw r30,2444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2444, ctx.r30.u32);
	// stw r30,2448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2448, ctx.r30.u32);
	// stw r30,2452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2452, ctx.r30.u32);
loc_82D98044:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82d98044
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82D98044;
	// stw r30,3456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3456, ctx.r30.u32);
	// addi r3,r31,3468
	ctx.r3.s64 = ctx.r31.s64 + 3468;
	// stw r30,3460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3460, ctx.r30.u32);
	// stb r30,3464(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3464, ctx.r30.u8);
	// bl 0x82d97dd0
	ctx.lr = 0x82D98060;
	sub_82D97DD0(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r30,3492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3492, ctx.r30.u32);
	// stw r30,3496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3496, ctx.r30.u32);
	// stw r11,3500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3500, ctx.r11.u32);
	// stw r30,3504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3504, ctx.r30.u32);
	// stw r30,3508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3508, ctx.r30.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D98080"))) PPC_WEAK_FUNC(sub_82D98080);
PPC_FUNC_IMPL(__imp__sub_82D98080) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82D98088;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r3,88
	ctx.r11.s64 = ctx.r3.s64 + 88;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// addi r10,r11,32
	ctx.r10.s64 = ctx.r11.s64 + 32;
	// stw r30,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r30.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r9.u32);
	// stb r30,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r30.u8);
	// lis r8,0
	ctx.r8.s64 = 0;
	// stw r9,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r30.u32);
	// ori r29,r8,65535
	ctx.r29.u64 = ctx.r8.u64 | 65535;
	// stb r30,56(r3)
	PPC_STORE_U8(ctx.r3.u32 + 56, ctx.r30.u8);
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// stw r9,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r9.u32);
	// stw r30,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r30.u32);
	// stb r30,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r30.u8);
	// stw r29,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r29.u32);
	// lwz r7,20(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// blt cr6,0x82d980f4
	if (cr6.lt) goto loc_82D980F4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82D980F4:
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stw r30,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r30.u32);
	// blt cr6,0x82d9810c
	if (cr6.lt) goto loc_82D9810C;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
loc_82D9810C:
	// stb r30,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r30.u8);
	// addi r3,r31,204
	ctx.r3.s64 = ctx.r31.s64 + 204;
	// stw r9,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r9.u32);
	// stw r30,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
	// stb r30,148(r31)
	PPC_STORE_U8(ctx.r31.u32 + 148, ctx.r30.u8);
	// bl 0x82d997d8
	ctx.lr = 0x82D98124;
	sub_82D997D8(ctx, base);
	// li r10,18
	ctx.r10.s64 = 18;
	// addi r11,r31,1664
	ctx.r11.s64 = ctx.r31.s64 + 1664;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82D98130:
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stbu r30,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r30.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x82d98130
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82D98130;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r29,1848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1848, ctx.r29.u32);
	// li r10,84
	ctx.r10.s64 = 84;
	// stw r30,1828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1828, ctx.r30.u32);
	// addi r27,r31,1896
	ctx.r27.s64 = ctx.r31.s64 + 1896;
	// stw r11,1824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1824, ctx.r11.u32);
	// stw r10,1832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1832, ctx.r10.u32);
	// li r29,2
	ctx.r29.s64 = 2;
	// stw r30,1836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1836, ctx.r30.u32);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// stw r11,1840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1840, ctx.r11.u32);
	// stw r30,1844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1844, ctx.r30.u32);
	// stw r30,1864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1864, ctx.r30.u32);
	// stw r30,1868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1868, ctx.r30.u32);
	// stw r30,1872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1872, ctx.r30.u32);
	// stw r30,1880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1880, ctx.r30.u32);
	// stw r30,1884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1884, ctx.r30.u32);
	// stw r30,1888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1888, ctx.r30.u32);
loc_82D98184:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ac0af0
	ctx.lr = 0x82D9818C;
	sub_82AC0AF0(ctx, base);
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r28,r28,160
	ctx.r28.s64 = ctx.r28.s64 + 160;
	// bge 0x82d98184
	if (!cr0.lt) goto loc_82D98184;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d8cc78
	ctx.lr = 0x82D981A0;
	sub_82D8CC78(ctx, base);
	// stw r30,3468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3468, ctx.r30.u32);
	// stw r30,3472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3472, ctx.r30.u32);
	// addi r3,r31,3468
	ctx.r3.s64 = ctx.r31.s64 + 3468;
	// stw r30,3476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3476, ctx.r30.u32);
	// bl 0x82d97dd0
	ctx.lr = 0x82D981B4;
	sub_82D97DD0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d97e50
	ctx.lr = 0x82D981BC;
	sub_82D97E50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D981C8"))) PPC_WEAK_FUNC(sub_82D981C8);
PPC_FUNC_IMPL(__imp__sub_82D981C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82D981D0;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r3,3468
	ctx.r29.s64 = ctx.r3.s64 + 3468;
	// lwz r3,3468(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3468);
	// li r27,2
	ctx.r27.s64 = 2;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d9820c
	if (cr6.eq) goto loc_82D9820C;
	// addi r5,r29,12
	ctx.r5.s64 = ctx.r29.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x82d9cc20
	ctx.lr = 0x82D981FC;
	sub_82D9CC20(ctx, base);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82D9820C;
	sub_825952B8(ctx, base);
loc_82D9820C:
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// lwz r3,1880(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1880);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d9822c
	if (cr6.eq) goto loc_82D9822C;
	// bl 0x82416268
	ctx.lr = 0x82D9822C;
	sub_82416268(ctx, base);
loc_82D9822C:
	// stw r31,1880(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1880, ctx.r31.u32);
	// stw r31,1884(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1884, ctx.r31.u32);
	// stw r31,1888(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1888, ctx.r31.u32);
	// lwz r3,1864(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1864);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d98248
	if (cr6.eq) goto loc_82D98248;
	// bl 0x82416268
	ctx.lr = 0x82D98248;
	sub_82416268(ctx, base);
loc_82D98248:
	// stw r31,1864(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1864, ctx.r31.u32);
	// addi r3,r30,204
	ctx.r3.s64 = ctx.r30.s64 + 204;
	// stw r31,1868(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1868, ctx.r31.u32);
	// stw r31,1872(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1872, ctx.r31.u32);
	// bl 0x838760e0
	ctx.lr = 0x82D9825C;
	sub_838760E0(ctx, base);
	// lwz r11,168(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// addi r29,r30,148
	ctx.r29.s64 = ctx.r30.s64 + 148;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d9827c
	if (cr6.lt) goto loc_82D9827C;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82D9827C;
	sub_825952B8(ctx, base);
loc_82D9827C:
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// addi r3,r30,88
	ctx.r3.s64 = ctx.r30.s64 + 88;
	// stw r28,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r28.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// bl 0x8378e240
	ctx.lr = 0x82D98294;
	sub_8378E240(ctx, base);
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// addi r29,r30,56
	ctx.r29.s64 = ctx.r30.s64 + 56;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d982b4
	if (cr6.lt) goto loc_82D982B4;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82D982B4;
	sub_825952B8(ctx, base);
loc_82D982B4:
	// stw r28,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r28.u32);
	// addi r30,r30,28
	ctx.r30.s64 = ctx.r30.s64 + 28;
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
	// stb r31,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r31.u8);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82d982e0
	if (cr6.lt) goto loc_82D982E0;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82D982E0;
	sub_825952B8(ctx, base);
loc_82D982E0:
	// stw r28,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r28.u32);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D982F4"))) PPC_WEAK_FUNC(sub_82D982F4);
PPC_FUNC_IMPL(__imp__sub_82D982F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D982F8"))) PPC_WEAK_FUNC(sub_82D982F8);
PPC_FUNC_IMPL(__imp__sub_82D982F8) {
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
	// lis r31,-31758
	ctx.r31.s64 = -2081292288;
	// lwz r3,26680(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26680);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d98348
	if (!cr6.eq) goto loc_82D98348;
	// li r11,29
	ctx.r11.s64 = 29;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,3512
	ctx.r4.s64 = 3512;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82D98330;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d98340
	if (cr6.eq) goto loc_82D98340;
	// bl 0x82d98080
	ctx.lr = 0x82D9833C;
	sub_82D98080(ctx, base);
	// b 0x82d98344
	goto loc_82D98344;
loc_82D98340:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82D98344:
	// stw r3,26680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26680, ctx.r3.u32);
loc_82D98348:
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

__attribute__((alias("__imp__sub_82D9835C"))) PPC_WEAK_FUNC(sub_82D9835C);
PPC_FUNC_IMPL(__imp__sub_82D9835C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D98360"))) PPC_WEAK_FUNC(sub_82D98360);
PPC_FUNC_IMPL(__imp__sub_82D98360) {
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
	// lis r31,-31758
	ctx.r31.s64 = -2081292288;
	// lwz r11,26680(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26680);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d983c4
	if (cr6.eq) goto loc_82D983C4;
	// li r11,29
	ctx.r11.s64 = 29;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x82D98398;
	sub_82595150(ctx, base);
	// lwz r30,26680(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 26680);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82d983b4
	if (cr6.eq) goto loc_82D983B4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d981c8
	ctx.lr = 0x82D983AC;
	sub_82D981C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82416268
	ctx.lr = 0x82D983B4;
	sub_82416268(ctx, base);
loc_82D983B4:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x82D983BC;
	sub_82595170(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,26680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 26680, ctx.r11.u32);
loc_82D983C4:
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

__attribute__((alias("__imp__sub_82D983DC"))) PPC_WEAK_FUNC(sub_82D983DC);
PPC_FUNC_IMPL(__imp__sub_82D983DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D983E0"))) PPC_WEAK_FUNC(sub_82D983E0);
PPC_FUNC_IMPL(__imp__sub_82D983E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x82d983f0
	if (cr6.eq) goto loc_82D983F0;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82D983F0:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D983F8"))) PPC_WEAK_FUNC(sub_82D983F8);
PPC_FUNC_IMPL(__imp__sub_82D983F8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82D98410;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d98430
	if (!cr6.eq) goto loc_82D98430;
loc_82D98418:
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
loc_82D98430:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d98418
	if (cr6.eq) goto loc_82D98418;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x82D98444;
	sub_825832D8(ctx, base);
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83102db0
	ctx.lr = 0x82D9844C;
	sub_83102DB0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d9a868
	ctx.lr = 0x82D98454;
	sub_82D9A868(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 & ctx.r3.u64;
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

__attribute__((alias("__imp__sub_82D98478"))) PPC_WEAK_FUNC(sub_82D98478);
PPC_FUNC_IMPL(__imp__sub_82D98478) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmpwi cr6,r4,3
	cr6.compare<int32_t>(ctx.r4.s32, 3, xer);
	// blt cr6,0x82d9848c
	if (cr6.lt) goto loc_82D9848C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_82D9848C:
	// li r11,3
	ctx.r11.s64 = 3;
	// addi r10,r4,1
	ctx.r10.s64 = ctx.r4.s64 + 1;
	// subfc r9,r11,r5
	xer.ca = ctx.r5.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r5.s64 - ctx.r11.s64;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// rlwinm r7,r5,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subfe r6,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// and r10,r6,r5
	ctx.r10.u64 = ctx.r6.u64 & ctx.r5.u64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r4,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r3.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D984C0"))) PPC_WEAK_FUNC(sub_82D984C0);
PPC_FUNC_IMPL(__imp__sub_82D984C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmpwi cr6,r6,3
	cr6.compare<int32_t>(ctx.r6.s32, 3, xer);
	// blt cr6,0x82d984f8
	if (cr6.lt) goto loc_82D984F8;
	// addi r10,r4,1
	ctx.r10.s64 = ctx.r4.s64 + 1;
	// li r9,3
	ctx.r9.s64 = 3;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// li r11,0
	ctx.r11.s64 = 0;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82D984E0:
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f1,r8,r3
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, temp.u32);
	// bdnz 0x82d984e0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82D984E0;
	// blr 
	return;
loc_82D984F8:
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f1,r10,r3
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D98514"))) PPC_WEAK_FUNC(sub_82D98514);
PPC_FUNC_IMPL(__imp__sub_82D98514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D98518"))) PPC_WEAK_FUNC(sub_82D98518);
PPC_FUNC_IMPL(__imp__sub_82D98518) {
	PPC_FUNC_PROLOGUE();
	// stb r4,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D98520"))) PPC_WEAK_FUNC(sub_82D98520);
PPC_FUNC_IMPL(__imp__sub_82D98520) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stb r8,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r8.u8);
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
loc_82D9853C:
	// li r10,3
	ctx.r10.s64 = 3;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82D98548:
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r7,r3
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r3.u32, temp.u32);
	// bdnz 0x82d98548
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82D98548;
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// cmplwi cr6,r9,12
	cr6.compare<uint32_t>(ctx.r9.u32, 12, xer);
	// blt cr6,0x82d9853c
	if (cr6.lt) goto loc_82D9853C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D9856C"))) PPC_WEAK_FUNC(sub_82D9856C);
PPC_FUNC_IMPL(__imp__sub_82D9856C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D98570"))) PPC_WEAK_FUNC(sub_82D98570);
PPC_FUNC_IMPL(__imp__sub_82D98570) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82d983f8
	ctx.lr = 0x82D98588;
	sub_82D983F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d985a8
	if (!cr6.eq) goto loc_82D985A8;
loc_82D98590:
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
loc_82D985A8:
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi cr6,r11,90
	cr6.compare<uint32_t>(ctx.r11.u32, 90, xer);
	// blt cr6,0x82d98590
	if (cr6.lt) goto loc_82D98590;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d985f0
	if (cr6.eq) goto loc_82D985F0;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bgt cr6,0x82d98590
	if (cr6.gt) goto loc_82D98590;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,124
	ctx.r10.s64 = ctx.r3.s64 + 124;
loc_82D985D4:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82d98590
	if (!cr6.eq) goto loc_82D98590;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// blt cr6,0x82d985d4
	if (cr6.lt) goto loc_82D985D4;
loc_82D985F0:
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

__attribute__((alias("__imp__sub_82D98608"))) PPC_WEAK_FUNC(sub_82D98608);
PPC_FUNC_IMPL(__imp__sub_82D98608) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x82d98630
	if (!cr6.eq) goto loc_82D98630;
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
loc_82D98630:
	// li r9,-1
	ctx.r9.s64 = -1;
	// subfc r11,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfze r3,r9
	temp.u8 = ~ctx.r9.u32 + xer.ca < xer.ca;
	ctx.r3.u64 = ~ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D98640"))) PPC_WEAK_FUNC(sub_82D98640);
PPC_FUNC_IMPL(__imp__sub_82D98640) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D98648;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r3,32
	ctx.r31.s64 = ctx.r3.s64 + 32;
	// li r29,18
	ctx.r29.s64 = 18;
loc_82D98658:
	// bl 0x82d86078
	ctx.lr = 0x82D9865C;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d9869c
	if (cr6.eq) goto loc_82D9869C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d9869c
	if (cr6.eq) goto loc_82D9869C;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x82D98678;
	sub_825832D8(ctx, base);
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83102db0
	ctx.lr = 0x82D98680;
	sub_83102DB0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82d9a868
	ctx.lr = 0x82D98688;
	sub_82D9A868(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d9869c
	if (cr6.eq) goto loc_82D9869C;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_82D9869C:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r31,r31,48
	ctx.r31.s64 = ctx.r31.s64 + 48;
	// bne 0x82d98658
	if (!cr0.eq) goto loc_82D98658;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D986B4"))) PPC_WEAK_FUNC(sub_82D986B4);
PPC_FUNC_IMPL(__imp__sub_82D986B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D986B8"))) PPC_WEAK_FUNC(sub_82D986B8);
PPC_FUNC_IMPL(__imp__sub_82D986B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r11,896(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 896);
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x82d986cc
	if (!cr6.lt) goto loc_82D986CC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82D986CC:
	// lwz r11,900(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 900);
	// li r10,7
	ctx.r10.s64 = 7;
	// li r9,-1
	ctx.r9.s64 = -1;
	// subfc r11,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfze r3,r9
	temp.u8 = ~ctx.r9.u32 + xer.ca < xer.ca;
	ctx.r3.u64 = ~ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D986E4"))) PPC_WEAK_FUNC(sub_82D986E4);
PPC_FUNC_IMPL(__imp__sub_82D986E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D986E8"))) PPC_WEAK_FUNC(sub_82D986E8);
PPC_FUNC_IMPL(__imp__sub_82D986E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D986F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r3,32
	ctx.r31.s64 = ctx.r3.s64 + 32;
loc_82D986FC:
	// bl 0x82d86078
	ctx.lr = 0x82D98700;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d98744
	if (cr6.eq) goto loc_82D98744;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d98744
	if (cr6.eq) goto loc_82D98744;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x82D9871C;
	sub_825832D8(ctx, base);
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83102db0
	ctx.lr = 0x82D98724;
	sub_83102DB0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82d9a868
	ctx.lr = 0x82D9872C;
	sub_82D9A868(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d98744
	if (cr6.eq) goto loc_82D98744;
	// lbz r11,66(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 66);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d98760
	if (!cr6.eq) goto loc_82D98760;
loc_82D98744:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,48
	ctx.r31.s64 = ctx.r31.s64 + 48;
	// cmplwi cr6,r30,18
	cr6.compare<uint32_t>(ctx.r30.u32, 18, xer);
	// blt cr6,0x82d986fc
	if (cr6.lt) goto loc_82D986FC;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82D98760:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D9876C"))) PPC_WEAK_FUNC(sub_82D9876C);
PPC_FUNC_IMPL(__imp__sub_82D9876C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D98770"))) PPC_WEAK_FUNC(sub_82D98770);
PPC_FUNC_IMPL(__imp__sub_82D98770) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D98778;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r3,32
	ctx.r31.s64 = ctx.r3.s64 + 32;
	// li r30,18
	ctx.r30.s64 = 18;
loc_82D98788:
	// bl 0x82d86078
	ctx.lr = 0x82D9878C;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d987d4
	if (cr6.eq) goto loc_82D987D4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d987d4
	if (cr6.eq) goto loc_82D987D4;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x82D987A8;
	sub_825832D8(ctx, base);
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83102db0
	ctx.lr = 0x82D987B0;
	sub_83102DB0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82d9a868
	ctx.lr = 0x82D987B8;
	sub_82D9A868(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d987d4
	if (cr6.eq) goto loc_82D987D4;
	// lbz r11,66(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 66);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d987d4
	if (cr6.eq) goto loc_82D987D4;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_82D987D4:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,48
	ctx.r31.s64 = ctx.r31.s64 + 48;
	// bne 0x82d98788
	if (!cr0.eq) goto loc_82D98788;
	// li r11,5
	ctx.r11.s64 = 5;
	// subfc r10,r11,r29
	xer.ca = ctx.r29.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r29.s64 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r8,31
	ctx.r3.u64 = ctx.r8.u32 & 0x1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D987F8"))) PPC_WEAK_FUNC(sub_82D987F8);
PPC_FUNC_IMPL(__imp__sub_82D987F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,18
	cr6.compare<int32_t>(ctx.r4.s32, 18, xer);
	// blt cr6,0x82d98808
	if (cr6.lt) goto loc_82D98808;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// blr 
	return;
loc_82D98808:
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D98820"))) PPC_WEAK_FUNC(sub_82D98820);
PPC_FUNC_IMPL(__imp__sub_82D98820) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,896(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 896);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D98828"))) PPC_WEAK_FUNC(sub_82D98828);
PPC_FUNC_IMPL(__imp__sub_82D98828) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,900(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 900);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D98830"))) PPC_WEAK_FUNC(sub_82D98830);
PPC_FUNC_IMPL(__imp__sub_82D98830) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,904(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 904);
	// lwz r9,900(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 900);
	// lwz r10,896(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 896);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D98848"))) PPC_WEAK_FUNC(sub_82D98848);
PPC_FUNC_IMPL(__imp__sub_82D98848) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x82D98868;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d98878
	if (!cr6.eq) goto loc_82D98878;
loc_82D98870:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82d988bc
	goto loc_82D988BC;
loc_82D98878:
	// addi r11,r30,227
	ctx.r11.s64 = ctx.r30.s64 + 227;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// beq cr6,0x82d98870
	if (cr6.eq) goto loc_82D98870;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x82D98894;
	sub_825832D8(ctx, base);
	// lwzx r31,r30,r31
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// bl 0x82d99c08
	ctx.lr = 0x82D9889C;
	sub_82D99C08(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d9a978
	ctx.lr = 0x82D988A4;
	sub_82D9A978(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,-1
	ctx.r11.s64 = -1;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfic r8,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r9.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r6,r3
	ctx.r3.u64 = ctx.r6.u64 & ctx.r3.u64;
loc_82D988BC:
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

__attribute__((alias("__imp__sub_82D988D4"))) PPC_WEAK_FUNC(sub_82D988D4);
PPC_FUNC_IMPL(__imp__sub_82D988D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D988D8"))) PPC_WEAK_FUNC(sub_82D988D8);
PPC_FUNC_IMPL(__imp__sub_82D988D8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82d98848
	ctx.lr = 0x82D988F0;
	sub_82D98848(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d98910
	if (!cr6.eq) goto loc_82D98910;
	// li r3,2
	ctx.r3.s64 = 2;
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
loc_82D98910:
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
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

__attribute__((alias("__imp__sub_82D98930"))) PPC_WEAK_FUNC(sub_82D98930);
PPC_FUNC_IMPL(__imp__sub_82D98930) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,920
	ctx.r3.s64 = ctx.r3.s64 + 920;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D98938"))) PPC_WEAK_FUNC(sub_82D98938);
PPC_FUNC_IMPL(__imp__sub_82D98938) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// blt cr6,0x82d9894c
	if (cr6.lt) goto loc_82D9894C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_82D9894C:
	// addi r11,r4,362
	ctx.r11.s64 = ctx.r4.s64 + 362;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r10,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D9895C"))) PPC_WEAK_FUNC(sub_82D9895C);
PPC_FUNC_IMPL(__imp__sub_82D9895C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D98960"))) PPC_WEAK_FUNC(sub_82D98960);
PPC_FUNC_IMPL(__imp__sub_82D98960) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r10,r3,908
	ctx.r10.s64 = ctx.r3.s64 + 908;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// stw r5,908(r3)
	PPC_STORE_U32(ctx.r3.u32 + 908, ctx.r5.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r5,912(r3)
	PPC_STORE_U32(ctx.r3.u32 + 912, ctx.r5.u32);
	// stw r5,916(r3)
	PPC_STORE_U32(ctx.r3.u32 + 916, ctx.r5.u32);
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
	// li r6,18
	ctx.r6.s64 = 18;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
loc_82D9898C:
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// li r8,3
	ctx.r8.s64 = 3;
	// stb r7,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r7.u8);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
loc_82D9899C:
	// li r9,3
	ctx.r9.s64 = 3;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82D989A8:
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r4,r10
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r10.u32, temp.u32);
	// bdnz 0x82d989a8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82D989A8;
	// addi r8,r8,3
	ctx.r8.s64 = ctx.r8.s64 + 3;
	// cmplwi cr6,r8,12
	cr6.compare<uint32_t>(ctx.r8.u32, 12, xer);
	// blt cr6,0x82d9899c
	if (cr6.lt) goto loc_82D9899C;
	// addic. r6,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// bne 0x82d9898c
	if (!cr0.eq) goto loc_82D9898C;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r7,896(r3)
	PPC_STORE_U32(ctx.r3.u32 + 896, ctx.r7.u32);
	// stw r7,900(r3)
	PPC_STORE_U32(ctx.r3.u32 + 900, ctx.r7.u32);
	// addi r11,r3,1444
	ctx.r11.s64 = ctx.r3.s64 + 1444;
	// stw r7,904(r3)
	PPC_STORE_U32(ctx.r3.u32 + 904, ctx.r7.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82D989EC:
	// stw r5,-536(r11)
	PPC_STORE_U32(ctx.r11.u32 + -536, ctx.r5.u32);
	// stfsu f0,4(r11)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82d989ec
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82D989EC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D989FC"))) PPC_WEAK_FUNC(sub_82D989FC);
PPC_FUNC_IMPL(__imp__sub_82D989FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D98A00"))) PPC_WEAK_FUNC(sub_82D98A00);
PPC_FUNC_IMPL(__imp__sub_82D98A00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// li r8,3
	ctx.r8.s64 = 3;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// addi r11,r3,84
	ctx.r11.s64 = ctx.r3.s64 + 84;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_82D98A20:
	// lbz r5,-48(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + -48);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// subf r5,r5,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r5.s64;
	// lbz r3,48(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 48);
	// subf r8,r8,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r8.s64;
	// lbz r6,96(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 96);
	// subfic r5,r5,0
	xer.ca = ctx.r5.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r5.s64;
	// lbz r31,144(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 144);
	// subf r3,r3,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r3.s64;
	// lbz r30,192(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 192);
	// subfe r5,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// subfic r8,r8,0
	xer.ca = ctx.r8.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r8.s64;
	// subf r6,r6,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r6.s64;
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// subfic r3,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	ctx.r3.s64 = 0 - ctx.r3.s64;
	// and r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 & ctx.r9.u64;
	// subfe r3,r3,r3
	temp.u8 = (~ctx.r3.u32 + ctx.r3.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r3.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	// subfic r6,r6,0
	xer.ca = ctx.r6.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r6.s64;
	// and r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ctx.r9.u64;
	// subf r6,r31,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r31.s64;
	// subfe r5,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 & ctx.r9.u64;
	// subfic r6,r6,0
	xer.ca = ctx.r6.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r6.s64;
	// subf r9,r30,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r30.s64;
	// subfe r8,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// subfic r6,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r9.s64;
	// and r6,r5,r3
	ctx.r6.u64 = ctx.r5.u64 & ctx.r3.u64;
	// subfe r5,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r8,r6
	ctx.r3.u64 = ctx.r8.u64 & ctx.r6.u64;
	// addi r11,r11,288
	ctx.r11.s64 = ctx.r11.s64 + 288;
	// and r9,r5,r3
	ctx.r9.u64 = ctx.r5.u64 & ctx.r3.u64;
	// bdnz 0x82d98a20
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82D98A20;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d98abc
	if (cr6.eq) goto loc_82D98ABC;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82D98ABC:
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r7,r7,36
	ctx.r7.s64 = ctx.r7.s64 + 36;
loc_82D98AC4:
	// li r9,1
	ctx.r9.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_82D98AD0:
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r5
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, xer);
	// beq cr6,0x82d98af0
	if (cr6.eq) goto loc_82D98AF0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// cmplwi cr6,r10,18
	cr6.compare<uint32_t>(ctx.r10.u32, 18, xer);
	// blt cr6,0x82d98ad0
	if (cr6.lt) goto loc_82D98AD0;
	// b 0x82d98af8
	goto loc_82D98AF8;
loc_82D98AF0:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82D98AF8:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d98ac4
	if (cr6.eq) goto loc_82D98AC4;
	// clrlwi r3,r8,24
	ctx.r3.u64 = ctx.r8.u32 & 0xFF;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D98B14"))) PPC_WEAK_FUNC(sub_82D98B14);
PPC_FUNC_IMPL(__imp__sub_82D98B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D98B18"))) PPC_WEAK_FUNC(sub_82D98B18);
PPC_FUNC_IMPL(__imp__sub_82D98B18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// li r9,3
	ctx.r9.s64 = 3;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r3,84
	ctx.r11.s64 = ctx.r3.s64 + 84;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82D98B2C:
	// lbz r9,-48(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + -48);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// lbz r7,48(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 48);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// lbz r6,96(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 96);
	// subfic r9,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r9.s64;
	// lbz r5,144(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 144);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// lbz r4,192(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 192);
	// subfe r7,r31,r31
	temp.u8 = (~ctx.r31.u32 + ctx.r31.u32 < ~ctx.r31.u32) | (~ctx.r31.u32 + ctx.r31.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r31.u64 + ctx.r31.u64 + xer.ca;
	xer.ca = temp.u8;
	// subfic r8,r8,0
	xer.ca = ctx.r8.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r8.s64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// subfe r6,r31,r31
	temp.u8 = (~ctx.r31.u32 + ctx.r31.u32 < ~ctx.r31.u32) | (~ctx.r31.u32 + ctx.r31.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r31.u64 + ctx.r31.u64 + xer.ca;
	xer.ca = temp.u8;
	// subfic r9,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r9.s64;
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// subfe r5,r31,r31
	temp.u8 = (~ctx.r31.u32 + ctx.r31.u32 < ~ctx.r31.u32) | (~ctx.r31.u32 + ctx.r31.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r31.u64 + ctx.r31.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 & ctx.r10.u64;
	// subfic r10,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r9.s64;
	// addi r10,r8,-1
	ctx.r10.s64 = ctx.r8.s64 + -1;
	// and r8,r6,r7
	ctx.r8.u64 = ctx.r6.u64 & ctx.r7.u64;
	// subfe r7,r31,r31
	temp.u8 = (~ctx.r31.u32 + ctx.r31.u32 < ~ctx.r31.u32) | (~ctx.r31.u32 + ctx.r31.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r31.u64 + ctx.r31.u64 + xer.ca;
	xer.ca = temp.u8;
	// subfic r6,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r10.s64;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// and r9,r5,r8
	ctx.r9.u64 = ctx.r5.u64 & ctx.r8.u64;
	// subfe r8,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r4.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// subfic r6,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r10.s64;
	// and r4,r7,r9
	ctx.r4.u64 = ctx.r7.u64 & ctx.r9.u64;
	// subfe r10,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r9,r8,r4
	ctx.r9.u64 = ctx.r8.u64 & ctx.r4.u64;
	// addi r11,r11,288
	ctx.r11.s64 = ctx.r11.s64 + 288;
	// and r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	// bdnz 0x82d98b2c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82D98B2C;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d98bd4
	if (cr6.eq) goto loc_82D98BD4;
	// li r3,1
	ctx.r3.s64 = 1;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82D98BD4:
	// li r7,12
	ctx.r7.s64 = 12;
	// addi r6,r3,36
	ctx.r6.s64 = ctx.r3.s64 + 36;
loc_82D98BDC:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// clrlwi r9,r7,24
	ctx.r9.u64 = ctx.r7.u32 & 0xFF;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_82D98BEC:
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// beq cr6,0x82d98c0c
	if (cr6.eq) goto loc_82D98C0C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// cmplwi cr6,r10,18
	cr6.compare<uint32_t>(ctx.r10.u32, 18, xer);
	// blt cr6,0x82d98bec
	if (cr6.lt) goto loc_82D98BEC;
	// b 0x82d98c18
	goto loc_82D98C18;
loc_82D98C0C:
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
loc_82D98C18:
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d98bdc
	if (cr6.eq) goto loc_82D98BDC;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D98C30"))) PPC_WEAK_FUNC(sub_82D98C30);
PPC_FUNC_IMPL(__imp__sub_82D98C30) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d98848
	ctx.lr = 0x82D98C50;
	sub_82D98848(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d98c64
	if (!cr6.eq) goto loc_82D98C64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82d98c7c
	goto loc_82D98C7C;
loc_82D98C64:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d98640
	ctx.lr = 0x82D98C6C;
	sub_82D98640(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subfc r10,r3,r11
	xer.ca = ctx.r11.u32 >= ctx.r3.u32;
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r8,31
	ctx.r3.u64 = ctx.r8.u32 & 0x1;
loc_82D98C7C:
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

__attribute__((alias("__imp__sub_82D98C94"))) PPC_WEAK_FUNC(sub_82D98C94);
PPC_FUNC_IMPL(__imp__sub_82D98C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D98C98"))) PPC_WEAK_FUNC(sub_82D98C98);
PPC_FUNC_IMPL(__imp__sub_82D98C98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x82d98ca4
	if (!cr6.eq) goto loc_82D98CA4;
	// b 0x82d98b18
	sub_82D98B18(ctx, base);
	return;
loc_82D98CA4:
	// clrlwi r4,r6,24
	ctx.r4.u64 = ctx.r6.u32 & 0xFF;
	// b 0x82d98a00
	sub_82D98A00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D98CAC"))) PPC_WEAK_FUNC(sub_82D98CAC);
PPC_FUNC_IMPL(__imp__sub_82D98CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D98CB0"))) PPC_WEAK_FUNC(sub_82D98CB0);
PPC_FUNC_IMPL(__imp__sub_82D98CB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D98CB8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r3,32
	ctx.r31.s64 = ctx.r3.s64 + 32;
loc_82D98CC8:
	// bl 0x82d86078
	ctx.lr = 0x82D98CCC;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d98d0c
	if (cr6.eq) goto loc_82D98D0C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d98d0c
	if (cr6.eq) goto loc_82D98D0C;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x82D98CE8;
	sub_825832D8(ctx, base);
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83102db0
	ctx.lr = 0x82D98CF0;
	sub_83102DB0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82d9a868
	ctx.lr = 0x82D98CF8;
	sub_82D9A868(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d98d0c
	if (cr6.eq) goto loc_82D98D0C;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// beq cr6,0x82d98d28
	if (cr6.eq) goto loc_82D98D28;
loc_82D98D0C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,48
	ctx.r31.s64 = ctx.r31.s64 + 48;
	// cmplwi cr6,r30,18
	cr6.compare<uint32_t>(ctx.r30.u32, 18, xer);
	// blt cr6,0x82d98cc8
	if (cr6.lt) goto loc_82D98CC8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82D98D28:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D98D34"))) PPC_WEAK_FUNC(sub_82D98D34);
PPC_FUNC_IMPL(__imp__sub_82D98D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D98D38"))) PPC_WEAK_FUNC(sub_82D98D38);
PPC_FUNC_IMPL(__imp__sub_82D98D38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D98D40;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r3,32
	ctx.r31.s64 = ctx.r3.s64 + 32;
	// li r30,18
	ctx.r30.s64 = 18;
loc_82D98D50:
	// bl 0x82d86078
	ctx.lr = 0x82D98D54;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d98d8c
	if (cr6.eq) goto loc_82D98D8C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d98d8c
	if (cr6.eq) goto loc_82D98D8C;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x82D98D70;
	sub_825832D8(ctx, base);
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83102db0
	ctx.lr = 0x82D98D78;
	sub_83102DB0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82d9a868
	ctx.lr = 0x82D98D80;
	sub_82D9A868(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d98d94
	if (!cr6.eq) goto loc_82D98D94;
loc_82D98D8C:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82d98de4
	goto loc_82D98DE4;
loc_82D98D94:
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi cr6,r11,90
	cr6.compare<uint32_t>(ctx.r11.u32, 90, xer);
	// bge cr6,0x82d98da8
	if (!cr6.lt) goto loc_82D98DA8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82d98de4
	goto loc_82D98DE4;
loc_82D98DA8:
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x82d98dbc
	if (!cr6.gt) goto loc_82D98DBC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82d98de4
	goto loc_82D98DE4;
loc_82D98DBC:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,124
	ctx.r10.s64 = ctx.r3.s64 + 124;
loc_82D98DC4:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82d98d8c
	if (!cr6.eq) goto loc_82D98D8C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// blt cr6,0x82d98dc4
	if (cr6.lt) goto loc_82D98DC4;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82D98DE4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d98df4
	if (cr6.eq) goto loc_82D98DF4;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_82D98DF4:
	// addic. r30,r30,-1
	xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// addi r31,r31,48
	ctx.r31.s64 = ctx.r31.s64 + 48;
	// bne 0x82d98d50
	if (!cr0.eq) goto loc_82D98D50;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D98E0C"))) PPC_WEAK_FUNC(sub_82D98E0C);
PPC_FUNC_IMPL(__imp__sub_82D98E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D98E10"))) PPC_WEAK_FUNC(sub_82D98E10);
PPC_FUNC_IMPL(__imp__sub_82D98E10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D98E18;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,896(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 896);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// bge cr6,0x82d98e34
	if (!cr6.lt) goto loc_82D98E34;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82d98e48
	goto loc_82D98E48;
loc_82D98E34:
	// lwz r11,900(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 900);
	// li r10,7
	ctx.r10.s64 = 7;
	// li r9,-1
	ctx.r9.s64 = -1;
	// subfc r11,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfze r11,r9
	temp.u8 = ~ctx.r9.u32 + xer.ca < xer.ca;
	ctx.r11.u64 = ~ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
loc_82D98E48:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d98e60
	if (!cr6.eq) goto loc_82D98E60;
loc_82D98E54:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82D98E60:
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r3,32
	ctx.r31.s64 = ctx.r3.s64 + 32;
loc_82D98E68:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d98570
	ctx.lr = 0x82D98E74;
	sub_82D98570(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d98e54
	if (cr6.eq) goto loc_82D98E54;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,48
	ctx.r31.s64 = ctx.r31.s64 + 48;
	// cmplwi cr6,r30,18
	cr6.compare<uint32_t>(ctx.r30.u32, 18, xer);
	// blt cr6,0x82d98e68
	if (cr6.lt) goto loc_82D98E68;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D98E9C"))) PPC_WEAK_FUNC(sub_82D98E9C);
PPC_FUNC_IMPL(__imp__sub_82D98E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D98EA0"))) PPC_WEAK_FUNC(sub_82D98EA0);
PPC_FUNC_IMPL(__imp__sub_82D98EA0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82d98960
	sub_82D98960(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D98EA4"))) PPC_WEAK_FUNC(sub_82D98EA4);
PPC_FUNC_IMPL(__imp__sub_82D98EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D98EA8"))) PPC_WEAK_FUNC(sub_82D98EA8);
PPC_FUNC_IMPL(__imp__sub_82D98EA8) {
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
	// cmpwi cr6,r4,18
	cr6.compare<int32_t>(ctx.r4.s32, 18, xer);
	// bge cr6,0x82d98f24
	if (!cr6.lt) goto loc_82D98F24;
	// cmpwi cr6,r5,18
	cr6.compare<int32_t>(ctx.r5.s32, 18, xer);
	// bge cr6,0x82d98f24
	if (!cr6.lt) goto loc_82D98F24;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// add r9,r5,r11
	ctx.r9.u64 = ctx.r5.u64 + ctx.r11.u64;
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r9,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r31,r11,32
	ctx.r31.s64 = ctx.r11.s64 + 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,48
	ctx.r5.s64 = 48;
	// addi r30,r10,32
	ctx.r30.s64 = ctx.r10.s64 + 32;
	// bl 0x831ce980
	ctx.lr = 0x82D98F04;
	sub_831CE980(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831ce980
	ctx.lr = 0x82D98F14;
	sub_831CE980(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831ce980
	ctx.lr = 0x82D98F24;
	sub_831CE980(ctx, base);
loc_82D98F24:
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

__attribute__((alias("__imp__sub_82D98F3C"))) PPC_WEAK_FUNC(sub_82D98F3C);
PPC_FUNC_IMPL(__imp__sub_82D98F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D98F40"))) PPC_WEAK_FUNC(sub_82D98F40);
PPC_FUNC_IMPL(__imp__sub_82D98F40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82D98F48;
	__savegprlr_23(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r25,r11,32
	ctx.r25.s64 = ctx.r11.s64 + 32;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82d983f8
	ctx.lr = 0x82D98F74;
	sub_82D983F8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d98848
	ctx.lr = 0x82D98F84;
	sub_82D98848(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// beq cr6,0x82d9924c
	if (cr6.eq) goto loc_82D9924C;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d9924c
	if (cr6.eq) goto loc_82D9924C;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r27,11
	cr6.compare<uint32_t>(ctx.r27.u32, 11, xer);
	// sth r31,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r31.u16);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// blt cr6,0x82d98fe8
	if (cr6.lt) goto loc_82D98FE8;
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfs f0,9008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
loc_82D98FCC:
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r9,r25
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r25.u32, temp.u32);
	// bdnz 0x82d98fcc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82D98FCC;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82D98FE8:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82ac0af0
	ctx.lr = 0x82D98FF0;
	sub_82AC0AF0(ctx, base);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x82d99018
	if (!cr6.lt) goto loc_82D99018;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r4,r11,920
	ctx.r4.s64 = ctx.r11.s64 + 920;
	// bl 0x82abfda0
	ctx.lr = 0x82D99018;
	sub_82ABFDA0(ctx, base);
loc_82D99018:
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stb r31,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r31.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r31,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r31.u8);
	// stb r31,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r31.u8);
	// stb r31,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r31.u8);
	// stb r31,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r31.u8);
	// stb r31,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r31.u8);
	// stb r31,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r31.u8);
	// stb r31,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r31.u8);
	// stb r31,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r31.u8);
	// stb r31,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r31.u8);
	// stb r31,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r31.u8);
	// stb r31,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r31.u8);
	// stb r31,93(r1)
	PPC_STORE_U8(ctx.r1.u32 + 93, ctx.r31.u8);
	// bl 0x82d988d8
	ctx.lr = 0x82D9905C;
	sub_82D988D8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d990d4
	if (!cr6.eq) goto loc_82D990D4;
	// lbz r11,36(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 36);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// lbz r10,37(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 37);
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// lbz r9,38(r28)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + 38);
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// lbz r8,39(r28)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r28.u32 + 39);
	// stb r8,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r8.u8);
	// lbz r7,40(r28)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r28.u32 + 40);
	// stb r7,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r7.u8);
	// lbz r6,41(r28)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r28.u32 + 41);
	// stb r6,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r6.u8);
	// lbz r5,42(r28)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r28.u32 + 42);
	// stb r5,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r5.u8);
	// lbz r4,43(r28)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r28.u32 + 43);
	// stb r4,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r4.u8);
	// lbz r3,44(r28)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r28.u32 + 44);
	// stb r3,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r3.u8);
	// lbz r11,45(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 45);
	// stb r11,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r11.u8);
	// lbz r10,46(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 46);
	// stb r10,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r10.u8);
	// lbz r9,47(r28)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + 47);
	// stb r9,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r9.u8);
	// lbz r8,48(r28)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r28.u32 + 48);
	// stb r8,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r8.u8);
	// lbz r7,49(r28)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r28.u32 + 49);
	// b 0x82d99140
	goto loc_82D99140;
loc_82D990D4:
	// lbz r11,50(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 50);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// lbz r10,51(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 51);
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// lbz r9,52(r28)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + 52);
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// lbz r8,53(r28)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r28.u32 + 53);
	// stb r8,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r8.u8);
	// lbz r7,54(r28)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r28.u32 + 54);
	// stb r7,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r7.u8);
	// lbz r6,55(r28)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r28.u32 + 55);
	// stb r6,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r6.u8);
	// lbz r5,56(r28)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r28.u32 + 56);
	// stb r5,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r5.u8);
	// lbz r4,57(r28)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r28.u32 + 57);
	// stb r4,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r4.u8);
	// lbz r3,58(r28)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r28.u32 + 58);
	// stb r3,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r3.u8);
	// lbz r11,59(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 59);
	// stb r11,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r11.u8);
	// lbz r10,60(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 60);
	// stb r10,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r10.u8);
	// lbz r9,61(r28)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + 61);
	// stb r9,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, ctx.r9.u8);
	// lbz r8,62(r28)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r28.u32 + 62);
	// stb r8,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r8.u8);
	// lbz r7,63(r28)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r28.u32 + 63);
loc_82D99140:
	// lbz r10,268(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 268);
	// stb r7,93(r1)
	PPC_STORE_U8(ctx.r1.u32 + 93, ctx.r7.u8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d991d0
	if (cr6.eq) goto loc_82D991D0;
	// clrlwi r27,r27,24
	ctx.r27.u64 = ctx.r27.u32 & 0xFF;
	// addi r26,r26,52
	ctx.r26.s64 = ctx.r26.s64 + 52;
loc_82D99158:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r24,16(r28)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// bl 0x82d98c30
	ctx.lr = 0x82D99164;
	sub_82D98C30(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// clrlwi r5,r31,24
	ctx.r5.u64 = ctx.r31.u32 & 0xFF;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82acc960
	ctx.lr = 0x82D99178;
	sub_82ACC960(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// bl 0x831c4378
	ctx.lr = 0x82D99198;
	sub_831C4378(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// bl 0x82d984c0
	ctx.lr = 0x82D991BC;
	sub_82D984C0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// blt cr6,0x82d99158
	if (cr6.lt) goto loc_82D99158;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82D991D0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r29,16(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// bl 0x82d98c30
	ctx.lr = 0x82D991DC;
	sub_82D98C30(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// clrlwi r4,r27,24
	ctx.r4.u64 = ctx.r27.u32 & 0xFF;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82acc960
	ctx.lr = 0x82D991F0;
	sub_82ACC960(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r26,52
	ctx.r4.s64 = ctx.r26.s64 + 52;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// bl 0x831c4378
	ctx.lr = 0x82D99210;
	sub_831C4378(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// li r10,3
	ctx.r10.s64 = 3;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_82D99238:
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r9,r25
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r25.u32, temp.u32);
	// bdnz 0x82d99238
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82D99238;
loc_82D9924C:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D99254"))) PPC_WEAK_FUNC(sub_82D99254);
PPC_FUNC_IMPL(__imp__sub_82D99254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D99258"))) PPC_WEAK_FUNC(sub_82D99258);
PPC_FUNC_IMPL(__imp__sub_82D99258) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82D99260;
	__savegprlr_27(ctx, base);
	// stfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f29.u64);
	// stfd f30,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f29,-27168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27168);
	ctx.f29.f64 = double(temp.f32);
	// addi r31,r3,1444
	ctx.r31.s64 = ctx.r3.s64 + 1444;
	// lfs f30,24552(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24552);
	ctx.f30.f64 = double(temp.f32);
	// addi r29,r3,52
	ctx.r29.s64 = ctx.r3.s64 + 52;
	// lfs f31,9008(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
	// addi r28,r3,92
	ctx.r28.s64 = ctx.r3.s64 + 92;
loc_82D9929C:
	// stfs f31,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ac0af0
	ctx.lr = 0x82D992A8;
	sub_82AC0AF0(ctx, base);
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bge cr6,0x82d992d0
	if (!cr6.lt) goto loc_82D992D0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r4,r11,920
	ctx.r4.s64 = ctx.r11.s64 + 920;
	// bl 0x82abfda0
	ctx.lr = 0x82D992D0;
	sub_82ABFDA0(ctx, base);
loc_82D992D0:
	// lbz r10,236(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 236);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d99348
	if (cr6.eq) goto loc_82D99348;
	// li r10,11
	ctx.r10.s64 = 11;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82D992E8:
	// cmpwi cr6,r30,3
	cr6.compare<int32_t>(ctx.r30.s32, 3, xer);
	// blt cr6,0x82d992f8
	if (cr6.lt) goto loc_82D992F8;
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x82d992fc
	goto loc_82D992FC;
loc_82D992F8:
	// lfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
loc_82D992FC:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
	// cmpwi cr6,r30,3
	cr6.compare<int32_t>(ctx.r30.s32, 3, xer);
	// blt cr6,0x82d99310
	if (cr6.lt) goto loc_82D99310;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x82d99314
	goto loc_82D99314;
loc_82D99310:
	// lfs f0,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
loc_82D99314:
	// fadds f13,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// cmpwi cr6,r30,3
	cr6.compare<int32_t>(ctx.r30.s32, 3, xer);
	// blt cr6,0x82d99328
	if (cr6.lt) goto loc_82D99328;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x82d9932c
	goto loc_82D9932C;
loc_82D99328:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
loc_82D9932C:
	// fadds f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// fmadds f12,f0,f30,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f30.f64 + ctx.f13.f64));
	// stfs f12,4(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// bdnz 0x82d992e8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82D992E8;
	// b 0x82d9947c
	goto loc_82D9947C;
loc_82D99348:
	// cmpwi cr6,r30,3
	cr6.compare<int32_t>(ctx.r30.s32, 3, xer);
	// blt cr6,0x82d99358
	if (cr6.lt) goto loc_82D99358;
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x82d9935c
	goto loc_82D9935C;
loc_82D99358:
	// lfs f0,-48(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -48);
	ctx.f0.f64 = double(temp.f32);
loc_82D9935C:
	// lfs f13,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r30,3
	cr6.compare<int32_t>(ctx.r30.s32, 3, xer);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,4(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// blt cr6,0x82d99378
	if (cr6.lt) goto loc_82D99378;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x82d9937c
	goto loc_82D9937C;
loc_82D99378:
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
loc_82D9937C:
	// lfs f13,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r30,3
	cr6.compare<int32_t>(ctx.r30.s32, 3, xer);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,4(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// blt cr6,0x82d99398
	if (cr6.lt) goto loc_82D99398;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x82d9939c
	goto loc_82D9939C;
loc_82D99398:
	// lfs f0,48(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
loc_82D9939C:
	// lfs f13,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r30,3
	cr6.compare<int32_t>(ctx.r30.s32, 3, xer);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,4(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// blt cr6,0x82d993b8
	if (cr6.lt) goto loc_82D993B8;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x82d993bc
	goto loc_82D993BC;
loc_82D993B8:
	// lfs f0,96(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
loc_82D993BC:
	// lfs f13,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r30,3
	cr6.compare<int32_t>(ctx.r30.s32, 3, xer);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,4(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// blt cr6,0x82d993d8
	if (cr6.lt) goto loc_82D993D8;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x82d993dc
	goto loc_82D993DC;
loc_82D993D8:
	// lfs f0,144(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
loc_82D993DC:
	// lfs f13,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r30,3
	cr6.compare<int32_t>(ctx.r30.s32, 3, xer);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,4(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// blt cr6,0x82d993f8
	if (cr6.lt) goto loc_82D993F8;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x82d993fc
	goto loc_82D993FC;
loc_82D993F8:
	// lfs f0,192(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
loc_82D993FC:
	// lfs f13,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r30,3
	cr6.compare<int32_t>(ctx.r30.s32, 3, xer);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,4(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// blt cr6,0x82d99418
	if (cr6.lt) goto loc_82D99418;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x82d9941c
	goto loc_82D9941C;
loc_82D99418:
	// lfs f0,240(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 240);
	ctx.f0.f64 = double(temp.f32);
loc_82D9941C:
	// lfs f13,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r30,3
	cr6.compare<int32_t>(ctx.r30.s32, 3, xer);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,4(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// blt cr6,0x82d99438
	if (cr6.lt) goto loc_82D99438;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x82d9943c
	goto loc_82D9943C;
loc_82D99438:
	// lfs f0,288(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 288);
	ctx.f0.f64 = double(temp.f32);
loc_82D9943C:
	// li r10,3
	ctx.r10.s64 = 3;
	// lfs f13,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,4(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// addi r11,r29,376
	ctx.r11.s64 = ctx.r29.s64 + 376;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82D99454:
	// cmpwi cr6,r30,3
	cr6.compare<int32_t>(ctx.r30.s32, 3, xer);
	// blt cr6,0x82d99464
	if (cr6.lt) goto loc_82D99464;
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x82d99468
	goto loc_82D99468;
loc_82D99464:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
loc_82D99468:
	// lfs f13,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,4(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// bdnz 0x82d99454
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82D99454;
loc_82D9947C:
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// fmuls f13,f0,f29
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// stfsu f13,4(r31)
	ea = 4 + ctx.r31.u32;
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r31.u32 = ea;
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// addi r28,r28,12
	ctx.r28.s64 = ctx.r28.s64 + 12;
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(ctx.r30.u32, 3, xer);
	// blt cr6,0x82d9929c
	if (cr6.lt) goto loc_82D9929C;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// lfd f29,-72(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f30,-64(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D994B0"))) PPC_WEAK_FUNC(sub_82D994B0);
PPC_FUNC_IMPL(__imp__sub_82D994B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D994B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,18
	cr6.compare<int32_t>(ctx.r4.s32, 18, xer);
	// bge cr6,0x82d99548
	if (!cr6.lt) goto loc_82D99548;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82d99548
	if (cr6.eq) goto loc_82D99548;
	// cmpwi cr6,r4,11
	cr6.compare<int32_t>(ctx.r4.s32, 11, xer);
	// bge cr6,0x82d99500
	if (!cr6.lt) goto loc_82D99500;
	// lwz r11,896(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 896);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,896(r30)
	PPC_STORE_U32(ctx.r30.u32 + 896, ctx.r11.u32);
	// b 0x82d9950c
	goto loc_82D9950C;
loc_82D99500:
	// lwz r11,900(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 900);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,900(r30)
	PPC_STORE_U32(ctx.r30.u32 + 900, ctx.r11.u32);
loc_82D9950C:
	// bl 0x82d98520
	ctx.lr = 0x82D99510;
	sub_82D98520(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
loc_82D99514:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82D99518:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d98f40
	ctx.lr = 0x82D99528;
	sub_82D98F40(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// blt cr6,0x82d99518
	if (cr6.lt) goto loc_82D99518;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r29,18
	cr6.compare<uint32_t>(ctx.r29.u32, 18, xer);
	// blt cr6,0x82d99514
	if (cr6.lt) goto loc_82D99514;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d99258
	ctx.lr = 0x82D99548;
	sub_82D99258(ctx, base);
loc_82D99548:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D99550"))) PPC_WEAK_FUNC(sub_82D99550);
PPC_FUNC_IMPL(__imp__sub_82D99550) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82D99558;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r28,r3,32
	ctx.r28.s64 = ctx.r3.s64 + 32;
loc_82D99568:
	// cmpwi cr6,r27,18
	cr6.compare<int32_t>(ctx.r27.s32, 18, xer);
	// bge cr6,0x82d995e0
	if (!cr6.lt) goto loc_82D995E0;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d995e0
	if (cr6.eq) goto loc_82D995E0;
	// cmpwi cr6,r27,11
	cr6.compare<int32_t>(ctx.r27.s32, 11, xer);
	// bge cr6,0x82d99594
	if (!cr6.lt) goto loc_82D99594;
	// lwz r11,896(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 896);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,896(r29)
	PPC_STORE_U32(ctx.r29.u32 + 896, ctx.r11.u32);
	// b 0x82d995a0
	goto loc_82D995A0;
loc_82D99594:
	// lwz r11,900(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 900);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,900(r29)
	PPC_STORE_U32(ctx.r29.u32 + 900, ctx.r11.u32);
loc_82D995A0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d98520
	ctx.lr = 0x82D995A8;
	sub_82D98520(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_82D995AC:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82D995B0:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d98f40
	ctx.lr = 0x82D995C0;
	sub_82D98F40(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// blt cr6,0x82d995b0
	if (cr6.lt) goto loc_82D995B0;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,18
	cr6.compare<uint32_t>(ctx.r30.u32, 18, xer);
	// blt cr6,0x82d995ac
	if (cr6.lt) goto loc_82D995AC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d99258
	ctx.lr = 0x82D995E0;
	sub_82D99258(ctx, base);
loc_82D995E0:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,48
	ctx.r28.s64 = ctx.r28.s64 + 48;
	// cmplwi cr6,r27,18
	cr6.compare<uint32_t>(ctx.r27.u32, 18, xer);
	// blt cr6,0x82d99568
	if (cr6.lt) goto loc_82D99568;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D995F8"))) PPC_WEAK_FUNC(sub_82D995F8);
PPC_FUNC_IMPL(__imp__sub_82D995F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D99600;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82d9964c
	if (cr6.eq) goto loc_82D9964C;
	// addi r11,r5,227
	ctx.r11.s64 = ctx.r5.s64 + 227;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r10.u32);
loc_82D99628:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d98f40
	ctx.lr = 0x82D99638;
	sub_82D98F40(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,18
	cr6.compare<uint32_t>(ctx.r31.u32, 18, xer);
	// blt cr6,0x82d99628
	if (cr6.lt) goto loc_82D99628;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d99258
	ctx.lr = 0x82D9964C;
	sub_82D99258(ctx, base);
loc_82D9964C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D99654"))) PPC_WEAK_FUNC(sub_82D99654);
PPC_FUNC_IMPL(__imp__sub_82D99654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D99658"))) PPC_WEAK_FUNC(sub_82D99658);
PPC_FUNC_IMPL(__imp__sub_82D99658) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D99660;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r3,920
	ctx.r3.s64 = ctx.r3.s64 + 920;
	// bl 0x82ce7a90
	ctx.lr = 0x82D99670;
	sub_82CE7A90(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_82D99674:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82D99678:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d98f40
	ctx.lr = 0x82D99688;
	sub_82D98F40(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// blt cr6,0x82d99678
	if (cr6.lt) goto loc_82D99678;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,18
	cr6.compare<uint32_t>(ctx.r30.u32, 18, xer);
	// blt cr6,0x82d99674
	if (cr6.lt) goto loc_82D99674;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d99258
	ctx.lr = 0x82D996A8;
	sub_82D99258(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D996B0"))) PPC_WEAK_FUNC(sub_82D996B0);
PPC_FUNC_IMPL(__imp__sub_82D996B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D996B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,18
	cr6.compare<int32_t>(ctx.r4.s32, 18, xer);
	// bge cr6,0x82d997d0
	if (!cr6.lt) goto loc_82D997D0;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82d997d0
	if (cr6.eq) goto loc_82D997D0;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r11,r3
	ctx.r29.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// bne cr6,0x82d99708
	if (!cr6.eq) goto loc_82D99708;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d997d0
	if (cr6.eq) goto loc_82D997D0;
	// bl 0x82d994b0
	ctx.lr = 0x82D99700;
	sub_82D994B0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82D99708:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d99734
	if (!cr6.eq) goto loc_82D99734;
	// cmpwi cr6,r4,11
	cr6.compare<int32_t>(ctx.r4.s32, 11, xer);
	// bge cr6,0x82d99728
	if (!cr6.lt) goto loc_82D99728;
	// lwz r11,896(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 896);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,896(r30)
	PPC_STORE_U32(ctx.r30.u32 + 896, ctx.r11.u32);
	// b 0x82d99734
	goto loc_82D99734;
loc_82D99728:
	// lwz r11,900(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 900);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,900(r30)
	PPC_STORE_U32(ctx.r30.u32 + 900, ctx.r11.u32);
loc_82D99734:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r11.u32);
	// bl 0x831156e8
	ctx.lr = 0x82D99740;
	sub_831156E8(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// sth r9,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r9.u16);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8311bf98
	ctx.lr = 0x82D9975C;
	sub_8311BF98(ctx, base);
	// li r8,12
	ctx.r8.s64 = 12;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83120738
	ctx.lr = 0x82D99770;
	sub_83120738(ctx, base);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne cr6,0x82d99788
	if (!cr6.eq) goto loc_82D99788;
	// bl 0x82d98b18
	ctx.lr = 0x82D99784;
	sub_82D98B18(ctx, base);
	// b 0x82d99794
	goto loc_82D99794;
loc_82D99788:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82d98a00
	ctx.lr = 0x82D99794;
	sub_82D98A00(ctx, base);
loc_82D99794:
	// stb r3,36(r29)
	PPC_STORE_U8(ctx.r29.u32 + 36, ctx.r3.u8);
	// li r29,0
	ctx.r29.s64 = 0;
loc_82D9979C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82D997A0:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d98f40
	ctx.lr = 0x82D997B0;
	sub_82D98F40(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// blt cr6,0x82d997a0
	if (cr6.lt) goto loc_82D997A0;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r29,18
	cr6.compare<uint32_t>(ctx.r29.u32, 18, xer);
	// blt cr6,0x82d9979c
	if (cr6.lt) goto loc_82D9979C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d99258
	ctx.lr = 0x82D997D0;
	sub_82D99258(ctx, base);
loc_82D997D0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D997D8"))) PPC_WEAK_FUNC(sub_82D997D8);
PPC_FUNC_IMPL(__imp__sub_82D997D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D997E0;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r11,24(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r31,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r31.u32);
	// addi r4,r10,28514
	ctx.r4.s64 = ctx.r10.s64 + 28514;
	// stb r31,4(r28)
	PPC_STORE_U8(ctx.r28.u32 + 4, ctx.r31.u8);
	// bl 0x8259cc28
	ctx.lr = 0x82D99818;
	sub_8259CC28(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r28,32
	ctx.r10.s64 = ctx.r28.s64 + 32;
	// li r7,17
	ctx.r7.s64 = 17;
	// lfs f31,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f31.f64 = double(temp.f32);
loc_82D99828:
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
	// li r8,3
	ctx.r8.s64 = 3;
	// stb r31,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r31.u8);
	// stw r31,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r31.u32);
loc_82D99838:
	// li r9,3
	ctx.r9.s64 = 3;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82D99844:
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f31,r6,r10
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r10.u32, temp.u32);
	// bdnz 0x82d99844
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82D99844;
	// addi r8,r8,3
	ctx.r8.s64 = ctx.r8.s64 + 3;
	// cmplwi cr6,r8,12
	cr6.compare<uint32_t>(ctx.r8.u32, 12, xer);
	// blt cr6,0x82d99838
	if (cr6.lt) goto loc_82D99838;
	// addic. r7,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// bge 0x82d99828
	if (!cr0.lt) goto loc_82D99828;
	// addi r29,r28,920
	ctx.r29.s64 = ctx.r28.s64 + 920;
	// stw r31,896(r28)
	PPC_STORE_U32(ctx.r28.u32 + 896, ctx.r31.u32);
	// stw r31,900(r28)
	PPC_STORE_U32(ctx.r28.u32 + 900, ctx.r31.u32);
	// stw r31,904(r28)
	PPC_STORE_U32(ctx.r28.u32 + 904, ctx.r31.u32);
	// li r31,2
	ctx.r31.s64 = 2;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_82D99888:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ac0af0
	ctx.lr = 0x82D99890;
	sub_82AC0AF0(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,160
	ctx.r30.s64 = ctx.r30.s64 + 160;
	// bge 0x82d99888
	if (!cr0.lt) goto loc_82D99888;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d8cc78
	ctx.lr = 0x82D998A4;
	sub_82D8CC78(ctx, base);
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r11,r28,1444
	ctx.r11.s64 = ctx.r28.s64 + 1444;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
loc_82D998B4:
	// stw r10,-536(r11)
	PPC_STORE_U32(ctx.r11.u32 + -536, ctx.r10.u32);
	// stfsu f31,4(r11)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82d998b4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82D998B4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D998D0"))) PPC_WEAK_FUNC(sub_82D998D0);
PPC_FUNC_IMPL(__imp__sub_82D998D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D998D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r31,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r31.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r11,24(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,4(r28)
	PPC_STORE_U8(ctx.r28.u32 + 4, ctx.r31.u8);
	// bl 0x8259cb28
	ctx.lr = 0x82D99908;
	sub_8259CB28(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r28,32
	ctx.r10.s64 = ctx.r28.s64 + 32;
	// li r7,17
	ctx.r7.s64 = 17;
	// lfs f0,9008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
loc_82D99918:
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
	// li r8,3
	ctx.r8.s64 = 3;
	// stb r31,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r31.u8);
	// stw r31,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r31.u32);
loc_82D99928:
	// li r9,3
	ctx.r9.s64 = 3;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82D99934:
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r6,r10
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r10.u32, temp.u32);
	// bdnz 0x82d99934
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82D99934;
	// addi r8,r8,3
	ctx.r8.s64 = ctx.r8.s64 + 3;
	// cmplwi cr6,r8,12
	cr6.compare<uint32_t>(ctx.r8.u32, 12, xer);
	// blt cr6,0x82d99928
	if (cr6.lt) goto loc_82D99928;
	// addic. r7,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// bge 0x82d99918
	if (!cr0.lt) goto loc_82D99918;
	// addi r29,r28,920
	ctx.r29.s64 = ctx.r28.s64 + 920;
	// stw r31,896(r28)
	PPC_STORE_U32(ctx.r28.u32 + 896, ctx.r31.u32);
	// stw r31,900(r28)
	PPC_STORE_U32(ctx.r28.u32 + 900, ctx.r31.u32);
	// stw r31,904(r28)
	PPC_STORE_U32(ctx.r28.u32 + 904, ctx.r31.u32);
	// li r31,2
	ctx.r31.s64 = 2;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_82D99978:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82ac0af0
	ctx.lr = 0x82D99980;
	sub_82AC0AF0(ctx, base);
	// addic. r31,r31,-1
	xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	cr0.compare<int32_t>(ctx.r31.s32, 0, xer);
	// addi r30,r30,160
	ctx.r30.s64 = ctx.r30.s64 + 160;
	// bge 0x82d99978
	if (!cr0.lt) goto loc_82D99978;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d8cc78
	ctx.lr = 0x82D99994;
	sub_82D8CC78(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D999A0"))) PPC_WEAK_FUNC(sub_82D999A0);
PPC_FUNC_IMPL(__imp__sub_82D999A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82D999A8;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r3,32
	ctx.r31.s64 = ctx.r3.s64 + 32;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// li r29,18
	ctx.r29.s64 = 18;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// li r28,13
	ctx.r28.s64 = 13;
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
loc_82D999C8:
	// bl 0x82d86078
	ctx.lr = 0x82D999CC;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d99a40
	if (cr6.eq) goto loc_82D99A40;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d99a40
	if (cr6.eq) goto loc_82D99A40;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x82D999E8;
	sub_825832D8(ctx, base);
	// lwz r27,0(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83102db0
	ctx.lr = 0x82D999F0;
	sub_83102DB0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82d9a868
	ctx.lr = 0x82D999F8;
	sub_82D9A868(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d99a40
	if (cr6.eq) goto loc_82D99A40;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,96(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// sth r30,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r30.u16);
	// ld r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x83179518
	ctx.lr = 0x82D99A28;
	sub_83179518(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// bl 0x82d8ad90
	ctx.lr = 0x82D99A30;
	sub_82D8AD90(ctx, base);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83546fd8
	ctx.lr = 0x82D99A40;
	sub_83546FD8(ctx, base);
loc_82D99A40:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// addi r31,r31,48
	ctx.r31.s64 = ctx.r31.s64 + 48;
	// bne 0x82d999c8
	if (!cr0.eq) goto loc_82D999C8;
	// lwz r29,112(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lis r11,-32038
	ctx.r11.s64 = -2099642368;
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r6,r11,-31224
	ctx.r6.s64 = ctx.r11.s64 + -31224;
	// subf r10,r29,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r29.s64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// srawi r31,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r31.s64 = ctx.r10.s32 >> 3;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82c85c88
	ctx.lr = 0x82D99A70;
	sub_82C85C88(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r10,r29,-4
	ctx.r10.s64 = ctx.r29.s64 + -4;
	// lfs f0,9008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9008);
	ctx.f0.f64 = double(temp.f32);
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
loc_82D99A84:
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// ble cr6,0x82d99ab0
	if (!cr6.gt) goto loc_82D99AB0;
	// lwzu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f13,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fadds f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// blt cr6,0x82d99a84
	if (cr6.lt) goto loc_82D99A84;
loc_82D99AB0:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r9,r29,12
	ctx.r9.s64 = ctx.r29.s64 + 12;
	// lfs f11,-8360(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8360);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f9,f12,f11
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
loc_82D99AC8:
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// ble cr6,0x82d99af4
	if (!cr6.gt) goto loc_82D99AF4;
	// lwzu r10,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f12,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fadds f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// blt cr6,0x82d99ac8
	if (cr6.lt) goto loc_82D99AC8;
loc_82D99AF4:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// fmr f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f0.f64;
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r9,r29,36
	ctx.r9.s64 = ctx.r29.s64 + 36;
	// lfs f11,-11312(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -11312);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
loc_82D99B0C:
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// ble cr6,0x82d99b38
	if (!cr6.gt) goto loc_82D99B38;
	// lwzu r10,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(ctx.r11.u32, 11, xer);
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f13,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// frsp f8,f11
	ctx.f8.f64 = double(float(ctx.f11.f64));
	// fadds f12,f8,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// blt cr6,0x82d99b0c
	if (cr6.lt) goto loc_82D99B0C;
loc_82D99B38:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
	// li r11,11
	ctx.r11.s64 = 11;
	// addi r9,r29,84
	ctx.r9.s64 = ctx.r29.s64 + 84;
	// lfs f11,-3404(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -3404);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f11,f12,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
loc_82D99B50:
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// ble cr6,0x82d99b7c
	if (!cr6.gt) goto loc_82D99B7C;
	// lwzu r10,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,14
	cr6.compare<uint32_t>(ctx.r11.u32, 14, xer);
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f12,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f8,f12
	ctx.f8.f64 = double(ctx.f12.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fadds f13,f7,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 + ctx.f13.f64));
	// blt cr6,0x82d99b50
	if (cr6.lt) goto loc_82D99B50;
loc_82D99B7C:
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// li r11,14
	ctx.r11.s64 = 14;
	// addi r9,r29,108
	ctx.r9.s64 = ctx.r29.s64 + 108;
	// lfs f12,9104(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9104);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
loc_82D99B90:
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// ble cr6,0x82d99bbc
	if (!cr6.gt) goto loc_82D99BBC;
	// lwzu r10,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,18
	cr6.compare<uint32_t>(ctx.r11.u32, 18, xer);
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f13,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f8,f13
	ctx.f8.f64 = double(ctx.f13.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fadds f0,f7,f0
	ctx.f0.f64 = double(float(ctx.f7.f64 + ctx.f0.f64));
	// blt cr6,0x82d99b90
	if (cr6.lt) goto loc_82D99B90;
loc_82D99BBC:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// lfs f13,-27732(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27732);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fadds f13,f0,f11
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// fadds f12,f13,f10
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// fadds f11,f12,f9
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// fctidz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f10.u64);
	// lwz r31,100(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// beq cr6,0x82d99bfc
	if (cr6.eq) goto loc_82D99BFC;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x82D99BFC;
	sub_825952B8(ctx, base);
loc_82D99BFC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D99C08"))) PPC_WEAK_FUNC(sub_82D99C08);
PPC_FUNC_IMPL(__imp__sub_82D99C08) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,164
	ctx.r3.s64 = ctx.r3.s64 + 164;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D99C10"))) PPC_WEAK_FUNC(sub_82D99C10);
PPC_FUNC_IMPL(__imp__sub_82D99C10) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,584
	ctx.r3.s64 = ctx.r3.s64 + 584;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D99C18"))) PPC_WEAK_FUNC(sub_82D99C18);
PPC_FUNC_IMPL(__imp__sub_82D99C18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// beq cr6,0x82d99cd8
	if (cr6.eq) goto loc_82D99CD8;
	// lwz r8,52(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 52);
	// lwz r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 48);
	// lwz r6,44(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 44);
	// lwz r5,40(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 40);
	// lwz r10,36(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 36);
	// lwz r9,32(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 32);
loc_82D99C48:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x82d99cbc
	if (!cr6.eq) goto loc_82D99CBC;
	// lwz r31,72(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmpw cr6,r31,r10
	cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, xer);
	// bne cr6,0x82d99cbc
	if (!cr6.eq) goto loc_82D99CBC;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82d99cb4
	if (!cr6.eq) goto loc_82D99CB4;
	// lwz r31,64(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmplw cr6,r31,r5
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r5.u32, xer);
	// bne cr6,0x82d99cbc
	if (!cr6.eq) goto loc_82D99CBC;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// bne cr6,0x82d99c88
	if (!cr6.eq) goto loc_82D99C88;
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, xer);
	// bne cr6,0x82d99cbc
	if (!cr6.eq) goto loc_82D99CBC;
loc_82D99C88:
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmpwi cr6,r11,74
	cr6.compare<int32_t>(ctx.r11.s32, 74, xer);
	// bne cr6,0x82d99ca0
	if (!cr6.eq) goto loc_82D99CA0;
	// lwz r31,88(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// cmplw cr6,r31,r6
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r6.u32, xer);
	// bne cr6,0x82d99cbc
	if (!cr6.eq) goto loc_82D99CBC;
loc_82D99CA0:
	// cmpwi cr6,r11,75
	cr6.compare<int32_t>(ctx.r11.s32, 75, xer);
	// bne cr6,0x82d99cb4
	if (!cr6.eq) goto loc_82D99CB4;
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// bne cr6,0x82d99cbc
	if (!cr6.eq) goto loc_82D99CBC;
loc_82D99CB4:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82d99cc0
	goto loc_82D99CC0;
loc_82D99CBC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82D99CC0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d99cd8
	if (!cr6.eq) goto loc_82D99CD8;
	// addi r3,r3,104
	ctx.r3.s64 = ctx.r3.s64 + 104;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// bne cr6,0x82d99c48
	if (!cr6.eq) goto loc_82D99C48;
loc_82D99CD8:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D99CE0"))) PPC_WEAK_FUNC(sub_82D99CE0);
PPC_FUNC_IMPL(__imp__sub_82D99CE0) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r4,64
	ctx.r4.s64 = ctx.r4.s64 + 64;
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// lwz r7,16(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// lwz r6,20(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r6,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r6.u32);
	// lwz r5,24(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r5,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// lbz r9,36(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 36);
	// stb r9,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r9.u8);
	// lbz r8,37(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 37);
	// stb r8,37(r31)
	PPC_STORE_U8(ctx.r31.u32 + 37, ctx.r8.u8);
	// lbz r7,38(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 38);
	// stb r7,38(r31)
	PPC_STORE_U8(ctx.r31.u32 + 38, ctx.r7.u8);
	// lbz r6,39(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 39);
	// stb r6,39(r31)
	PPC_STORE_U8(ctx.r31.u32 + 39, ctx.r6.u8);
	// lbz r5,40(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 40);
	// stb r5,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r5.u8);
	// lbz r11,41(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 41);
	// stb r11,41(r31)
	PPC_STORE_U8(ctx.r31.u32 + 41, ctx.r11.u8);
	// lbz r10,42(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 42);
	// stb r10,42(r31)
	PPC_STORE_U8(ctx.r31.u32 + 42, ctx.r10.u8);
	// lbz r9,43(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 43);
	// stb r9,43(r31)
	PPC_STORE_U8(ctx.r31.u32 + 43, ctx.r9.u8);
	// lbz r8,44(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 44);
	// stb r8,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r8.u8);
	// lbz r7,45(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 45);
	// stb r7,45(r31)
	PPC_STORE_U8(ctx.r31.u32 + 45, ctx.r7.u8);
	// lbz r6,46(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 46);
	// stb r6,46(r31)
	PPC_STORE_U8(ctx.r31.u32 + 46, ctx.r6.u8);
	// lbz r5,47(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 47);
	// stb r5,47(r31)
	PPC_STORE_U8(ctx.r31.u32 + 47, ctx.r5.u8);
	// lbz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 48);
	// stb r11,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r11.u8);
	// lbz r10,49(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 49);
	// stb r10,49(r31)
	PPC_STORE_U8(ctx.r31.u32 + 49, ctx.r10.u8);
	// lbz r9,50(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 50);
	// stb r9,50(r31)
	PPC_STORE_U8(ctx.r31.u32 + 50, ctx.r9.u8);
	// lbz r8,51(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 51);
	// stb r8,51(r31)
	PPC_STORE_U8(ctx.r31.u32 + 51, ctx.r8.u8);
	// lbz r7,52(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 52);
	// stb r7,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r7.u8);
	// lbz r6,53(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 53);
	// stb r6,53(r31)
	PPC_STORE_U8(ctx.r31.u32 + 53, ctx.r6.u8);
	// lbz r5,54(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 54);
	// stb r5,54(r31)
	PPC_STORE_U8(ctx.r31.u32 + 54, ctx.r5.u8);
	// lbz r11,55(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 55);
	// stb r11,55(r31)
	PPC_STORE_U8(ctx.r31.u32 + 55, ctx.r11.u8);
	// lbz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 56);
	// stb r10,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r10.u8);
	// lbz r9,57(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 57);
	// stb r9,57(r31)
	PPC_STORE_U8(ctx.r31.u32 + 57, ctx.r9.u8);
	// lbz r8,58(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 58);
	// stb r8,58(r31)
	PPC_STORE_U8(ctx.r31.u32 + 58, ctx.r8.u8);
	// lbz r7,59(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 59);
	// stb r7,59(r31)
	PPC_STORE_U8(ctx.r31.u32 + 59, ctx.r7.u8);
	// lbz r6,60(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 60);
	// stb r6,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r6.u8);
	// lbz r5,61(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 61);
	// stb r5,61(r31)
	PPC_STORE_U8(ctx.r31.u32 + 61, ctx.r5.u8);
	// lbz r11,62(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 62);
	// stb r11,62(r31)
	PPC_STORE_U8(ctx.r31.u32 + 62, ctx.r11.u8);
	// lbz r10,63(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 63);
	// stb r10,63(r31)
	PPC_STORE_U8(ctx.r31.u32 + 63, ctx.r10.u8);
	// bl 0x82abfda0
	ctx.lr = 0x82D99E30;
	sub_82ABFDA0(ctx, base);
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// addi r4,r30,224
	ctx.r4.s64 = ctx.r30.s64 + 224;
	// bl 0x82abfda0
	ctx.lr = 0x82D99E3C;
	sub_82ABFDA0(ctx, base);
	// lwz r9,384(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 384);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r9.u32);
	// lwz r8,388(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 388);
	// stw r8,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r8.u32);
	// lwz r7,392(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 392);
	// stw r7,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r7.u32);
	// lbz r6,396(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 396);
	// stb r6,396(r31)
	PPC_STORE_U8(ctx.r31.u32 + 396, ctx.r6.u8);
	// lbz r5,397(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 397);
	// stb r5,397(r31)
	PPC_STORE_U8(ctx.r31.u32 + 397, ctx.r5.u8);
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

__attribute__((alias("__imp__sub_82D99E80"))) PPC_WEAK_FUNC(sub_82D99E80);
PPC_FUNC_IMPL(__imp__sub_82D99E80) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// bl 0x83a5f308
	ctx.lr = 0x82D99EB4;
	sub_83A5F308(ctx, base);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// li r9,60
	ctx.r9.s64 = 60;
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// addi r11,r31,96
	ctx.r11.s64 = ctx.r31.s64 + 96;
	// stb r30,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r30.u8);
	// addi r11,r31,120
	ctx.r11.s64 = ctx.r31.s64 + 120;
	// stb r30,53(r31)
	PPC_STORE_U8(ctx.r31.u32 + 53, ctx.r30.u8);
	// stb r30,54(r31)
	PPC_STORE_U8(ctx.r31.u32 + 54, ctx.r30.u8);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stb r30,55(r31)
	PPC_STORE_U8(ctx.r31.u32 + 55, ctx.r30.u8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// stb r30,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r30.u8);
	// stb r30,57(r31)
	PPC_STORE_U8(ctx.r31.u32 + 57, ctx.r30.u8);
	// stb r30,58(r31)
	PPC_STORE_U8(ctx.r31.u32 + 58, ctx.r30.u8);
	// stb r30,59(r31)
	PPC_STORE_U8(ctx.r31.u32 + 59, ctx.r30.u8);
	// stb r30,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r30.u8);
	// stb r30,61(r31)
	PPC_STORE_U8(ctx.r31.u32 + 61, ctx.r30.u8);
	// stb r30,62(r31)
	PPC_STORE_U8(ctx.r31.u32 + 62, ctx.r30.u8);
	// stb r30,63(r31)
	PPC_STORE_U8(ctx.r31.u32 + 63, ctx.r30.u8);
	// stb r30,64(r31)
	PPC_STORE_U8(ctx.r31.u32 + 64, ctx.r30.u8);
	// stb r30,65(r31)
	PPC_STORE_U8(ctx.r31.u32 + 65, ctx.r30.u8);
	// stb r30,66(r31)
	PPC_STORE_U8(ctx.r31.u32 + 66, ctx.r30.u8);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
	// stb r30,116(r31)
	PPC_STORE_U8(ctx.r31.u32 + 116, ctx.r30.u8);
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stw r9,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r9.u32);
loc_82D99F78:
	// stwu r30,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82d99f78
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82D99F78;
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

__attribute__((alias("__imp__sub_82D99F9C"))) PPC_WEAK_FUNC(sub_82D99F9C);
PPC_FUNC_IMPL(__imp__sub_82D99F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D99FA0"))) PPC_WEAK_FUNC(sub_82D99FA0);
PPC_FUNC_IMPL(__imp__sub_82D99FA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,144
	ctx.r10.s64 = 144;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw r3,r8,r10
	ctx.r3.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D99FB8"))) PPC_WEAK_FUNC(sub_82D99FB8);
PPC_FUNC_IMPL(__imp__sub_82D99FB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,144
	ctx.r10.s64 = 144;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r7,r8,r10
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	// cmplw cr6,r7,r4
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, xer);
	// ble cr6,0x82d99fe8
	if (!cr6.gt) goto loc_82D99FE8;
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
loc_82D99FE8:
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D99FF0"))) PPC_WEAK_FUNC(sub_82D99FF0);
PPC_FUNC_IMPL(__imp__sub_82D99FF0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,400
	ctx.r10.s64 = 400;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw r3,r8,r10
	ctx.r3.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D9A008"))) PPC_WEAK_FUNC(sub_82D9A008);
PPC_FUNC_IMPL(__imp__sub_82D9A008) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r4,3
	cr6.compare<int32_t>(ctx.r4.s32, 3, xer);
	// bne cr6,0x82d9a018
	if (!cr6.eq) goto loc_82D9A018;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82D9A018:
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,104
	ctx.r11.s64 = 104;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw. r11,r8,r11
	ctx.r11.s32 = PPCDivide(ctx.r8.s32, ctx.r11.s32);
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_82D9A03C:
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r8,72(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmpw cr6,r8,r4
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, xer);
	// bne cr6,0x82d9a054
	if (!cr6.eq) goto loc_82D9A054;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_82D9A054:
	// addi r10,r10,104
	ctx.r10.s64 = ctx.r10.s64 + 104;
	// bdnz 0x82d9a03c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82D9A03C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D9A060"))) PPC_WEAK_FUNC(sub_82D9A060);
PPC_FUNC_IMPL(__imp__sub_82D9A060) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,2316(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2316);
	// li r10,48
	ctx.r10.s64 = 48;
	// lwz r9,2312(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2312);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw r3,r8,r10
	ctx.r3.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D9A078"))) PPC_WEAK_FUNC(sub_82D9A078);
PPC_FUNC_IMPL(__imp__sub_82D9A078) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r9,48
	ctx.r9.s64 = 48;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r10,2316(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2316);
	// lwz r8,2312(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2312);
	// subf r7,r8,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r8.s64;
	// divw r6,r7,r9
	ctx.r6.s32 = PPCDivide(ctx.r7.s32, ctx.r9.s32);
	// cmplw cr6,r4,r6
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r6.u32, xer);
	// blt cr6,0x82d9a0bc
	if (cr6.lt) goto loc_82D9A0BC;
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
loc_82D9A0BC:
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,2312(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2312);
	// li r5,48
	ctx.r5.s64 = 48;
	// add r11,r4,r9
	ctx.r11.u64 = ctx.r4.u64 + ctx.r9.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x831ce980
	ctx.lr = 0x82D9A0D8;
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
}

__attribute__((alias("__imp__sub_82D9A0EC"))) PPC_WEAK_FUNC(sub_82D9A0EC);
PPC_FUNC_IMPL(__imp__sub_82D9A0EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D9A0F0"))) PPC_WEAK_FUNC(sub_82D9A0F0);
PPC_FUNC_IMPL(__imp__sub_82D9A0F0) {
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
	// beq cr6,0x82d9a14c
	if (cr6.eq) goto loc_82D9A14C;
	// lis r11,455
	ctx.r11.s64 = 29818880;
	// ori r10,r11,7281
	ctx.r10.u64 = ctx.r11.u64 | 7281;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82d9a130
	if (cr6.gt) goto loc_82D9A130;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82416260
	ctx.lr = 0x82D9A128;
	sub_82416260(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d9a14c
	if (!cr6.eq) goto loc_82D9A14C;
loc_82D9A130:
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
	ctx.lr = 0x82D9A14C;
	sub_8246B850(ctx, base);
loc_82D9A14C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D9A15C"))) PPC_WEAK_FUNC(sub_82D9A15C);
PPC_FUNC_IMPL(__imp__sub_82D9A15C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D9A160"))) PPC_WEAK_FUNC(sub_82D9A160);
PPC_FUNC_IMPL(__imp__sub_82D9A160) {
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
	// beq cr6,0x82d9a1b4
	if (cr6.eq) goto loc_82D9A1B4;
	// lis r11,163
	ctx.r11.s64 = 10682368;
	// ori r10,r11,55050
	ctx.r10.u64 = ctx.r11.u64 | 55050;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82d9a198
	if (cr6.gt) goto loc_82D9A198;
	// mulli r3,r4,400
	ctx.r3.s64 = ctx.r4.s64 * 400;
	// bl 0x82416260
	ctx.lr = 0x82D9A190;
	sub_82416260(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d9a1b4
	if (!cr6.eq) goto loc_82D9A1B4;
loc_82D9A198:
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
	ctx.lr = 0x82D9A1B4;
	sub_8246B850(ctx, base);
loc_82D9A1B4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D9A1C4"))) PPC_WEAK_FUNC(sub_82D9A1C4);
PPC_FUNC_IMPL(__imp__sub_82D9A1C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D9A1C8"))) PPC_WEAK_FUNC(sub_82D9A1C8);
PPC_FUNC_IMPL(__imp__sub_82D9A1C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82d9a36c
	if (cr6.eq) goto loc_82D9A36C;
	// addi r10,r5,54
	ctx.r10.s64 = ctx.r5.s64 + 54;
	// addi r11,r3,54
	ctx.r11.s64 = ctx.r3.s64 + 54;
loc_82D9A1E0:
	// lwz r6,-54(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -54);
	// li r7,5
	ctx.r7.s64 = 5;
	// addi r9,r11,-42
	ctx.r9.s64 = ctx.r11.s64 + -42;
	// addi r8,r10,-42
	ctx.r8.s64 = ctx.r10.s64 + -42;
	// stw r6,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r6.u32);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// lwz r3,-50(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -50);
	// stw r3,-50(r10)
	PPC_STORE_U32(ctx.r10.u32 + -50, ctx.r3.u32);
	// lwz r7,-46(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -46);
	// stw r7,-46(r10)
	PPC_STORE_U32(ctx.r10.u32 + -46, ctx.r7.u32);
	// lwz r6,-42(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -42);
	// stw r6,-42(r10)
	PPC_STORE_U32(ctx.r10.u32 + -42, ctx.r6.u32);
loc_82D9A210:
	// lwzu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x82d9a210
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82D9A210;
	// lwz r6,-18(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -18);
	// li r7,5
	ctx.r7.s64 = 5;
	// addi r9,r11,38
	ctx.r9.s64 = ctx.r11.s64 + 38;
	// addi r8,r10,38
	ctx.r8.s64 = ctx.r10.s64 + 38;
	// stw r6,-18(r10)
	PPC_STORE_U32(ctx.r10.u32 + -18, ctx.r6.u32);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// lwz r3,-14(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14);
	// stw r3,-14(r10)
	PPC_STORE_U32(ctx.r10.u32 + -14, ctx.r3.u32);
	// lwz r7,-10(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -10);
	// stw r7,-10(r10)
	PPC_STORE_U32(ctx.r10.u32 + -10, ctx.r7.u32);
	// lwz r6,-6(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6);
	// stw r6,-6(r10)
	PPC_STORE_U32(ctx.r10.u32 + -6, ctx.r6.u32);
	// lbz r3,-2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// stb r3,-2(r10)
	PPC_STORE_U8(ctx.r10.u32 + -2, ctx.r3.u8);
	// lbz r7,-1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// stb r7,-1(r10)
	PPC_STORE_U8(ctx.r10.u32 + -1, ctx.r7.u8);
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r6,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r6.u8);
	// lbz r3,1(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// stb r3,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r3.u8);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// stb r7,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r7.u8);
	// lbz r6,3(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// stb r6,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r6.u8);
	// lbz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// stb r3,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r3.u8);
	// lbz r7,5(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// stb r7,5(r10)
	PPC_STORE_U8(ctx.r10.u32 + 5, ctx.r7.u8);
	// lbz r6,6(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// stb r6,6(r10)
	PPC_STORE_U8(ctx.r10.u32 + 6, ctx.r6.u8);
	// lbz r3,7(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// stb r3,7(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7, ctx.r3.u8);
	// lbz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// stb r7,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, ctx.r7.u8);
	// lbz r6,9(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// stb r6,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, ctx.r6.u8);
	// lbz r3,10(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10);
	// stb r3,10(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10, ctx.r3.u8);
	// lbz r7,11(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 11);
	// stb r7,11(r10)
	PPC_STORE_U8(ctx.r10.u32 + 11, ctx.r7.u8);
	// lbz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// stb r6,12(r10)
	PPC_STORE_U8(ctx.r10.u32 + 12, ctx.r6.u8);
	// lwz r3,14(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14);
	// stw r3,14(r10)
	PPC_STORE_U32(ctx.r10.u32 + 14, ctx.r3.u32);
	// lwz r7,18(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18);
	// stw r7,18(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18, ctx.r7.u32);
	// lwz r6,22(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22);
	// stw r6,22(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22, ctx.r6.u32);
	// lwz r3,26(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26);
	// stw r3,26(r10)
	PPC_STORE_U32(ctx.r10.u32 + 26, ctx.r3.u32);
	// lwz r7,30(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30);
	// stw r7,30(r10)
	PPC_STORE_U32(ctx.r10.u32 + 30, ctx.r7.u32);
	// lwz r6,34(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 34);
	// stw r6,34(r10)
	PPC_STORE_U32(ctx.r10.u32 + 34, ctx.r6.u32);
	// lwz r3,38(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 38);
	// stw r3,38(r10)
	PPC_STORE_U32(ctx.r10.u32 + 38, ctx.r3.u32);
loc_82D9A2FC:
	// lwzu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x82d9a2fc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82D9A2FC;
	// lbz r9,62(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 62);
	// addi r8,r11,66
	ctx.r8.s64 = ctx.r11.s64 + 66;
	// addi r7,r11,74
	ctx.r7.s64 = ctx.r11.s64 + 74;
	// addi r6,r10,74
	ctx.r6.s64 = ctx.r10.s64 + 74;
	// addi r3,r11,82
	ctx.r3.s64 = ctx.r11.s64 + 82;
	// addi r31,r10,82
	ctx.r31.s64 = ctx.r10.s64 + 82;
	// stb r9,62(r10)
	PPC_STORE_U8(ctx.r10.u32 + 62, ctx.r9.u8);
	// addi r5,r5,144
	ctx.r5.s64 = ctx.r5.s64 + 144;
	// lwz r9,66(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 66);
	// addi r11,r11,144
	ctx.r11.s64 = ctx.r11.s64 + 144;
	// stw r9,66(r10)
	PPC_STORE_U32(ctx.r10.u32 + 66, ctx.r9.u32);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// addi r30,r11,-54
	ctx.r30.s64 = ctx.r11.s64 + -54;
	// stw r8,70(r10)
	PPC_STORE_U32(ctx.r10.u32 + 70, ctx.r8.u32);
	// addi r10,r10,144
	ctx.r10.s64 = ctx.r10.s64 + 144;
	// lwz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, xer);
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r8,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r8.u32);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// bne cr6,0x82d9a1e0
	if (!cr6.eq) goto loc_82D9A1E0;
loc_82D9A36C:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D9A37C"))) PPC_WEAK_FUNC(sub_82D9A37C);
PPC_FUNC_IMPL(__imp__sub_82D9A37C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D9A380"))) PPC_WEAK_FUNC(sub_82D9A380);
PPC_FUNC_IMPL(__imp__sub_82D9A380) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D9A388;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82d9a524
	if (cr6.eq) goto loc_82D9A524;
	// addi r30,r5,38
	ctx.r30.s64 = ctx.r5.s64 + 38;
	// addi r31,r3,38
	ctx.r31.s64 = ctx.r3.s64 + 38;
loc_82D9A3A4:
	// lwz r11,-38(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -38);
	// addi r4,r31,26
	ctx.r4.s64 = ctx.r31.s64 + 26;
	// addi r3,r30,26
	ctx.r3.s64 = ctx.r30.s64 + 26;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r10,-34(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -34);
	// stw r10,-34(r30)
	PPC_STORE_U32(ctx.r30.u32 + -34, ctx.r10.u32);
	// lwz r9,-30(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30);
	// stw r9,-30(r30)
	PPC_STORE_U32(ctx.r30.u32 + -30, ctx.r9.u32);
	// lwz r8,-26(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26);
	// stw r8,-26(r30)
	PPC_STORE_U32(ctx.r30.u32 + -26, ctx.r8.u32);
	// lwz r7,-22(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -22);
	// stw r7,-22(r30)
	PPC_STORE_U32(ctx.r30.u32 + -22, ctx.r7.u32);
	// lwz r6,-18(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -18);
	// stw r6,-18(r30)
	PPC_STORE_U32(ctx.r30.u32 + -18, ctx.r6.u32);
	// lwz r5,-14(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -14);
	// stw r5,-14(r30)
	PPC_STORE_U32(ctx.r30.u32 + -14, ctx.r5.u32);
	// lwz r11,-10(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -10);
	// stw r11,-10(r30)
	PPC_STORE_U32(ctx.r30.u32 + -10, ctx.r11.u32);
	// lwz r10,-6(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -6);
	// stw r10,-6(r30)
	PPC_STORE_U32(ctx.r30.u32 + -6, ctx.r10.u32);
	// lbz r9,-2(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + -2);
	// stb r9,-2(r30)
	PPC_STORE_U8(ctx.r30.u32 + -2, ctx.r9.u8);
	// lbz r8,-1(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// stb r8,-1(r30)
	PPC_STORE_U8(ctx.r30.u32 + -1, ctx.r8.u8);
	// lbz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// stb r7,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r7.u8);
	// lbz r6,1(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// stb r6,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r6.u8);
	// lbz r5,2(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// stb r5,2(r30)
	PPC_STORE_U8(ctx.r30.u32 + 2, ctx.r5.u8);
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// stb r11,3(r30)
	PPC_STORE_U8(ctx.r30.u32 + 3, ctx.r11.u8);
	// lbz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// stb r10,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r10.u8);
	// lbz r9,5(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// stb r9,5(r30)
	PPC_STORE_U8(ctx.r30.u32 + 5, ctx.r9.u8);
	// lbz r8,6(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// stb r8,6(r30)
	PPC_STORE_U8(ctx.r30.u32 + 6, ctx.r8.u8);
	// lbz r7,7(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7);
	// stb r7,7(r30)
	PPC_STORE_U8(ctx.r30.u32 + 7, ctx.r7.u8);
	// lbz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// stb r6,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r6.u8);
	// lbz r5,9(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9);
	// stb r5,9(r30)
	PPC_STORE_U8(ctx.r30.u32 + 9, ctx.r5.u8);
	// lbz r11,10(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10);
	// stb r11,10(r30)
	PPC_STORE_U8(ctx.r30.u32 + 10, ctx.r11.u8);
	// lbz r10,11(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11);
	// stb r10,11(r30)
	PPC_STORE_U8(ctx.r30.u32 + 11, ctx.r10.u8);
	// lbz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12);
	// stb r9,12(r30)
	PPC_STORE_U8(ctx.r30.u32 + 12, ctx.r9.u8);
	// lbz r8,13(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 13);
	// stb r8,13(r30)
	PPC_STORE_U8(ctx.r30.u32 + 13, ctx.r8.u8);
	// lbz r7,14(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 14);
	// stb r7,14(r30)
	PPC_STORE_U8(ctx.r30.u32 + 14, ctx.r7.u8);
	// lbz r6,15(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 15);
	// stb r6,15(r30)
	PPC_STORE_U8(ctx.r30.u32 + 15, ctx.r6.u8);
	// lbz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// stb r5,16(r30)
	PPC_STORE_U8(ctx.r30.u32 + 16, ctx.r5.u8);
	// lbz r11,17(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// stb r11,17(r30)
	PPC_STORE_U8(ctx.r30.u32 + 17, ctx.r11.u8);
	// lbz r10,18(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 18);
	// stb r10,18(r30)
	PPC_STORE_U8(ctx.r30.u32 + 18, ctx.r10.u8);
	// lbz r9,19(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 19);
	// stb r9,19(r30)
	PPC_STORE_U8(ctx.r30.u32 + 19, ctx.r9.u8);
	// lbz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// stb r8,20(r30)
	PPC_STORE_U8(ctx.r30.u32 + 20, ctx.r8.u8);
	// lbz r7,21(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// stb r7,21(r30)
	PPC_STORE_U8(ctx.r30.u32 + 21, ctx.r7.u8);
	// lbz r6,22(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 22);
	// stb r6,22(r30)
	PPC_STORE_U8(ctx.r30.u32 + 22, ctx.r6.u8);
	// lbz r5,23(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 23);
	// stb r5,23(r30)
	PPC_STORE_U8(ctx.r30.u32 + 23, ctx.r5.u8);
	// lbz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 24);
	// stb r11,24(r30)
	PPC_STORE_U8(ctx.r30.u32 + 24, ctx.r11.u8);
	// lbz r10,25(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 25);
	// stb r10,25(r30)
	PPC_STORE_U8(ctx.r30.u32 + 25, ctx.r10.u8);
	// bl 0x82abfda0
	ctx.lr = 0x82D9A4D8;
	sub_82ABFDA0(ctx, base);
	// addi r4,r31,186
	ctx.r4.s64 = ctx.r31.s64 + 186;
	// addi r3,r30,186
	ctx.r3.s64 = ctx.r30.s64 + 186;
	// bl 0x82abfda0
	ctx.lr = 0x82D9A4E4;
	sub_82ABFDA0(ctx, base);
	// lwz r9,346(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 346);
	// stw r9,346(r30)
	PPC_STORE_U32(ctx.r30.u32 + 346, ctx.r9.u32);
	// addi r29,r29,400
	ctx.r29.s64 = ctx.r29.s64 + 400;
	// lwz r8,350(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 350);
	// stw r8,350(r30)
	PPC_STORE_U32(ctx.r30.u32 + 350, ctx.r8.u32);
	// lwz r7,354(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 354);
	// stw r7,354(r30)
	PPC_STORE_U32(ctx.r30.u32 + 354, ctx.r7.u32);
	// lbz r6,358(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 358);
	// stb r6,358(r30)
	PPC_STORE_U8(ctx.r30.u32 + 358, ctx.r6.u8);
	// lbz r5,359(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 359);
	// addi r31,r31,400
	ctx.r31.s64 = ctx.r31.s64 + 400;
	// stb r5,359(r30)
	PPC_STORE_U8(ctx.r30.u32 + 359, ctx.r5.u8);
	// addi r30,r30,400
	ctx.r30.s64 = ctx.r30.s64 + 400;
	// addi r4,r31,-38
	ctx.r4.s64 = ctx.r31.s64 + -38;
	// cmplw cr6,r4,r28
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r28.u32, xer);
	// bne cr6,0x82d9a3a4
	if (!cr6.eq) goto loc_82D9A3A4;
loc_82D9A524:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D9A530"))) PPC_WEAK_FUNC(sub_82D9A530);
PPC_FUNC_IMPL(__imp__sub_82D9A530) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D9A538;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// addi r29,r3,64
	ctx.r29.s64 = ctx.r3.s64 + 64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stb r30,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r30.u8);
	// stb r30,37(r31)
	PPC_STORE_U8(ctx.r31.u32 + 37, ctx.r30.u8);
	// stb r30,38(r31)
	PPC_STORE_U8(ctx.r31.u32 + 38, ctx.r30.u8);
	// stb r30,39(r31)
	PPC_STORE_U8(ctx.r31.u32 + 39, ctx.r30.u8);
	// stb r30,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r30.u8);
	// stb r30,41(r31)
	PPC_STORE_U8(ctx.r31.u32 + 41, ctx.r30.u8);
	// stb r30,42(r31)
	PPC_STORE_U8(ctx.r31.u32 + 42, ctx.r30.u8);
	// stb r30,43(r31)
	PPC_STORE_U8(ctx.r31.u32 + 43, ctx.r30.u8);
	// stb r30,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r30.u8);
	// stb r30,45(r31)
	PPC_STORE_U8(ctx.r31.u32 + 45, ctx.r30.u8);
	// stb r30,46(r31)
	PPC_STORE_U8(ctx.r31.u32 + 46, ctx.r30.u8);
	// stb r30,47(r31)
	PPC_STORE_U8(ctx.r31.u32 + 47, ctx.r30.u8);
	// stb r30,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r30.u8);
	// stb r30,49(r31)
	PPC_STORE_U8(ctx.r31.u32 + 49, ctx.r30.u8);
	// stb r30,50(r31)
	PPC_STORE_U8(ctx.r31.u32 + 50, ctx.r30.u8);
	// stb r30,51(r31)
	PPC_STORE_U8(ctx.r31.u32 + 51, ctx.r30.u8);
	// stb r30,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r30.u8);
	// stb r30,53(r31)
	PPC_STORE_U8(ctx.r31.u32 + 53, ctx.r30.u8);
	// stb r30,54(r31)
	PPC_STORE_U8(ctx.r31.u32 + 54, ctx.r30.u8);
	// stb r30,55(r31)
	PPC_STORE_U8(ctx.r31.u32 + 55, ctx.r30.u8);
	// stb r30,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r30.u8);
	// stb r30,57(r31)
	PPC_STORE_U8(ctx.r31.u32 + 57, ctx.r30.u8);
	// stb r30,58(r31)
	PPC_STORE_U8(ctx.r31.u32 + 58, ctx.r30.u8);
	// stb r30,59(r31)
	PPC_STORE_U8(ctx.r31.u32 + 59, ctx.r30.u8);
	// stb r30,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r30.u8);
	// stb r30,61(r31)
	PPC_STORE_U8(ctx.r31.u32 + 61, ctx.r30.u8);
	// stb r30,62(r31)
	PPC_STORE_U8(ctx.r31.u32 + 62, ctx.r30.u8);
	// stb r30,63(r31)
	PPC_STORE_U8(ctx.r31.u32 + 63, ctx.r30.u8);
	// bl 0x82ac0af0
	ctx.lr = 0x82D9A5E8;
	sub_82AC0AF0(ctx, base);
	// addi r28,r31,224
	ctx.r28.s64 = ctx.r31.s64 + 224;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ac0af0
	ctx.lr = 0x82D9A5F4;
	sub_82AC0AF0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r30.u32);
	// stw r30,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r30.u32);
	// stb r30,396(r31)
	PPC_STORE_U8(ctx.r31.u32 + 396, ctx.r30.u8);
	// stb r10,397(r31)
	PPC_STORE_U8(ctx.r31.u32 + 397, ctx.r10.u8);
	// bl 0x82ac0800
	ctx.lr = 0x82D9A614;
	sub_82AC0800(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ac0800
	ctx.lr = 0x82D9A61C;
	sub_82AC0800(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D9A628"))) PPC_WEAK_FUNC(sub_82D9A628);
PPC_FUNC_IMPL(__imp__sub_82D9A628) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_82D9A640:
	// lbz r9,66(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 66);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82d9a650
	if (!cr6.eq) goto loc_82D9A650;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_82D9A650:
	// addi r11,r11,144
	ctx.r11.s64 = ctx.r11.s64 + 144;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82d9a640
	if (!cr6.eq) goto loc_82D9A640;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D9A660"))) PPC_WEAK_FUNC(sub_82D9A660);
PPC_FUNC_IMPL(__imp__sub_82D9A660) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82D9A668;
	__savegprlr_22(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x831156e8
	ctx.lr = 0x82D9A67C;
	sub_831156E8(ctx, base);
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// lwz r24,48(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// beq cr6,0x82d9a6d0
	if (cr6.eq) goto loc_82D9A6D0;
	// cmplwi cr6,r29,2
	cr6.compare<uint32_t>(ctx.r29.u32, 2, xer);
	// beq cr6,0x82d9a6d0
	if (cr6.eq) goto loc_82D9A6D0;
	// lbz r11,50(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 50);
	// lbz r10,51(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 51);
	// lbz r9,52(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 52);
	// lbz r8,53(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 53);
	// lbz r7,54(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 54);
	// lbz r6,55(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 55);
	// lbz r5,56(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 56);
	// lbz r4,57(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 57);
	// lbz r3,58(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 58);
	// lbz r27,59(r30)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r30.u32 + 59);
	// lbz r26,60(r30)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r30.u32 + 60);
	// lbz r25,61(r30)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r30.u32 + 61);
	// lbz r23,62(r30)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r30.u32 + 62);
	// lbz r22,63(r30)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r30.u32 + 63);
	// b 0x82d9a708
	goto loc_82D9A708;
loc_82D9A6D0:
	// lbz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 36);
	// lbz r10,37(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 37);
	// lbz r9,38(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 38);
	// lbz r8,39(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 39);
	// lbz r7,40(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 40);
	// lbz r6,41(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 41);
	// lbz r5,42(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 42);
	// lbz r4,43(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 43);
	// lbz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 44);
	// lbz r27,45(r30)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r30.u32 + 45);
	// lbz r26,46(r30)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r30.u32 + 46);
	// lbz r25,47(r30)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r30.u32 + 47);
	// lbz r23,48(r30)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r30.u32 + 48);
	// lbz r22,49(r30)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r30.u32 + 49);
loc_82D9A708:
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stb r22,109(r1)
	PPC_STORE_U8(ctx.r1.u32 + 109, ctx.r22.u8);
	// stb r23,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r23.u8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// stb r25,107(r1)
	PPC_STORE_U8(ctx.r1.u32 + 107, ctx.r25.u8);
	// stb r26,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r26.u8);
	// stb r27,105(r1)
	PPC_STORE_U8(ctx.r1.u32 + 105, ctx.r27.u8);
	// stb r3,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r3.u8);
	// stb r4,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r4.u8);
	// stb r5,102(r1)
	PPC_STORE_U8(ctx.r1.u32 + 102, ctx.r5.u8);
	// stb r6,101(r1)
	PPC_STORE_U8(ctx.r1.u32 + 101, ctx.r6.u8);
	// stb r7,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r7.u8);
	// stb r8,99(r1)
	PPC_STORE_U8(ctx.r1.u32 + 99, ctx.r8.u8);
	// stb r9,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, ctx.r9.u8);
	// stb r10,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r10.u8);
	// beq cr6,0x82d9a7bc
	if (cr6.eq) goto loc_82D9A7BC;
	// addi r11,r29,20
	ctx.r11.s64 = ctx.r29.s64 + 20;
	// li r25,0
	ctx.r25.s64 = 0;
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r26,12
	ctx.r26.s64 = 12;
loc_82D9A75C:
	// sth r25,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r25.u16);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// ld r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x8311bf98
	ctx.lr = 0x82D9A774;
	sub_8311BF98(ctx, base);
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83120738
	ctx.lr = 0x82D9A784;
	sub_83120738(ctx, base);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r9,16(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x831c4378
	ctx.lr = 0x82D9A7A4;
	sub_831C4378(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// stwx r10,r27,r31
	PPC_STORE_U32(ctx.r27.u32 + ctx.r31.u32, ctx.r10.u32);
	// addi r31,r31,144
	ctx.r31.s64 = ctx.r31.s64 + 144;
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, xer);
	// bne cr6,0x82d9a75c
	if (!cr6.eq) goto loc_82D9A75C;
loc_82D9A7BC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D9A7C4"))) PPC_WEAK_FUNC(sub_82D9A7C4);
PPC_FUNC_IMPL(__imp__sub_82D9A7C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D9A7C8"))) PPC_WEAK_FUNC(sub_82D9A7C8);
PPC_FUNC_IMPL(__imp__sub_82D9A7C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82D9A7DC:
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// addi r11,r11,144
	ctx.r11.s64 = ctx.r11.s64 + 144;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x82d9a7dc
	if (!cr6.eq) goto loc_82D9A7DC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D9A7F4"))) PPC_WEAK_FUNC(sub_82D9A7F4);
PPC_FUNC_IMPL(__imp__sub_82D9A7F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D9A7F8"))) PPC_WEAK_FUNC(sub_82D9A7F8);
PPC_FUNC_IMPL(__imp__sub_82D9A7F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82D9A800;
	__savegprlr_28(ctx, base);
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
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// beq cr6,0x82d9a858
	if (cr6.eq) goto loc_82D9A858;
loc_82D9A81C:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82d9a830
	if (!cr6.eq) goto loc_82D9A830;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82d9a840
	goto loc_82D9A840;
loc_82D9A830:
	// bl 0x825832e0
	ctx.lr = 0x82D9A834;
	sub_825832E0(ctx, base);
	// subf r11,r3,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r3.s64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_82D9A840:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82d9a858
	if (!cr6.eq) goto loc_82D9A858;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, xer);
	// bne cr6,0x82d9a81c
	if (!cr6.eq) goto loc_82D9A81C;
loc_82D9A858:
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D9A868"))) PPC_WEAK_FUNC(sub_82D9A868);
PPC_FUNC_IMPL(__imp__sub_82D9A868) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82d9a898
	if (cr6.eq) goto loc_82D9A898;
loc_82D9A878:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// beq cr6,0x82d9a890
	if (cr6.eq) goto loc_82D9A890;
	// addi r11,r11,144
	ctx.r11.s64 = ctx.r11.s64 + 144;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82d9a878
	if (!cr6.eq) goto loc_82D9A878;
loc_82D9A890:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82d9a8a0
	if (!cr6.eq) goto loc_82D9A8A0;
loc_82D9A898:
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// blr 
	return;
loc_82D9A8A0:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D9A8A8"))) PPC_WEAK_FUNC(sub_82D9A8A8);
PPC_FUNC_IMPL(__imp__sub_82D9A8A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82d9a8d0
	if (cr6.eq) goto loc_82D9A8D0;
loc_82D9A8B8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// beq cr6,0x82d9a8d0
	if (cr6.eq) goto loc_82D9A8D0;
	// addi r11,r11,144
	ctx.r11.s64 = ctx.r11.s64 + 144;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82d9a8b8
	if (!cr6.eq) goto loc_82D9A8B8;
loc_82D9A8D0:
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D9A8E0"))) PPC_WEAK_FUNC(sub_82D9A8E0);
PPC_FUNC_IMPL(__imp__sub_82D9A8E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82d9a910
	if (cr6.eq) goto loc_82D9A910;
loc_82D9A8F0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// beq cr6,0x82d9a908
	if (cr6.eq) goto loc_82D9A908;
	// addi r11,r11,144
	ctx.r11.s64 = ctx.r11.s64 + 144;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82d9a8f0
	if (!cr6.eq) goto loc_82D9A8F0;
loc_82D9A908:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82d9a914
	if (!cr6.eq) goto loc_82D9A914;
loc_82D9A910:
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
loc_82D9A914:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D9A92C"))) PPC_WEAK_FUNC(sub_82D9A92C);
PPC_FUNC_IMPL(__imp__sub_82D9A92C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D9A930"))) PPC_WEAK_FUNC(sub_82D9A930);
PPC_FUNC_IMPL(__imp__sub_82D9A930) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82d9a960
	if (cr6.eq) goto loc_82D9A960;
loc_82D9A940:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// beq cr6,0x82d9a958
	if (cr6.eq) goto loc_82D9A958;
	// addi r11,r11,144
	ctx.r11.s64 = ctx.r11.s64 + 144;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82d9a940
	if (!cr6.eq) goto loc_82D9A940;
loc_82D9A958:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82d9a964
	if (!cr6.eq) goto loc_82D9A964;
loc_82D9A960:
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
loc_82D9A964:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// stb r5,116(r11)
	PPC_STORE_U8(ctx.r11.u32 + 116, ctx.r5.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D9A978"))) PPC_WEAK_FUNC(sub_82D9A978);
PPC_FUNC_IMPL(__imp__sub_82D9A978) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82d9a9a8
	if (cr6.eq) goto loc_82D9A9A8;
loc_82D9A988:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// beq cr6,0x82d9a9a0
	if (cr6.eq) goto loc_82D9A9A0;
	// addi r11,r11,400
	ctx.r11.s64 = ctx.r11.s64 + 400;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82d9a988
	if (!cr6.eq) goto loc_82D9A988;
loc_82D9A9A0:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82d9a9b0
	if (!cr6.eq) goto loc_82D9A9B0;
loc_82D9A9A8:
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// blr 
	return;
loc_82D9A9B0:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D9A9B8"))) PPC_WEAK_FUNC(sub_82D9A9B8);
PPC_FUNC_IMPL(__imp__sub_82D9A9B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82d9a9e0
	if (cr6.eq) goto loc_82D9A9E0;
loc_82D9A9C8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// beq cr6,0x82d9a9e0
	if (cr6.eq) goto loc_82D9A9E0;
	// addi r11,r11,400
	ctx.r11.s64 = ctx.r11.s64 + 400;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82d9a9c8
	if (!cr6.eq) goto loc_82D9A9C8;
loc_82D9A9E0:
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82D9A9F0"))) PPC_WEAK_FUNC(sub_82D9A9F0);
PPC_FUNC_IMPL(__imp__sub_82D9A9F0) {
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
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x82d99c18
	ctx.lr = 0x82D9AA3C;
	sub_82D99C18(ctx, base);
	// cmplw cr6,r3,r30
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, xer);
	// bne cr6,0x82d9aa48
	if (!cr6.eq) goto loc_82D9AA48;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
loc_82D9AA48:
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

__attribute__((alias("__imp__sub_82D9AA60"))) PPC_WEAK_FUNC(sub_82D9AA60);
PPC_FUNC_IMPL(__imp__sub_82D9AA60) {
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
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// bl 0x82d9a7f8
	ctx.lr = 0x82D9AA88;
	sub_82D9A7F8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82d9aaa0
	if (cr6.eq) goto loc_82D9AAA0;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_82D9AAA0:
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

__attribute__((alias("__imp__sub_82D9AAB4"))) PPC_WEAK_FUNC(sub_82D9AAB4);
PPC_FUNC_IMPL(__imp__sub_82D9AAB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D9AAB8"))) PPC_WEAK_FUNC(sub_82D9AAB8);
PPC_FUNC_IMPL(__imp__sub_82D9AAB8) {
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
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// bl 0x82d9a7f8
	ctx.lr = 0x82D9AAE0;
	sub_82D9A7F8(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82d9aaf8
	if (!cr6.eq) goto loc_82D9AAF8;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// b 0x82d9aafc
	goto loc_82D9AAFC;
loc_82D9AAF8:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_82D9AAFC:
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82D9AB14"))) PPC_WEAK_FUNC(sub_82D9AB14);
PPC_FUNC_IMPL(__imp__sub_82D9AB14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D9AB18"))) PPC_WEAK_FUNC(sub_82D9AB18);
PPC_FUNC_IMPL(__imp__sub_82D9AB18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82D9AB20;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// beq cr6,0x82d9ab8c
	if (cr6.eq) goto loc_82D9AB8C;
loc_82D9AB3C:
	// lwz r30,8(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82D9AB44:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d98848
	ctx.lr = 0x82D9AB50;
	sub_82D98848(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d9ab70
	if (cr6.eq) goto loc_82D9AB70;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d98848
	ctx.lr = 0x82D9AB64;
	sub_82D98848(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// beq cr6,0x82d9ab98
	if (cr6.eq) goto loc_82D9AB98;
loc_82D9AB70:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// blt cr6,0x82d9ab44
	if (cr6.lt) goto loc_82D9AB44;
	// lwz r29,0(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// bne cr6,0x82d9ab3c
	if (!cr6.eq) goto loc_82D9AB3C;
loc_82D9AB8C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82D9AB98:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D9ABA4"))) PPC_WEAK_FUNC(sub_82D9ABA4);
PPC_FUNC_IMPL(__imp__sub_82D9ABA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D9ABA8"))) PPC_WEAK_FUNC(sub_82D9ABA8);
PPC_FUNC_IMPL(__imp__sub_82D9ABA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82D9ABB0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// beq cr6,0x82d9ac20
	if (cr6.eq) goto loc_82D9AC20;
loc_82D9ABCC:
	// lwz r30,8(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82D9ABD4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d987f8
	ctx.lr = 0x82D9ABE0;
	sub_82D987F8(ctx, base);
	// bl 0x82d983f8
	ctx.lr = 0x82D9ABE4;
	sub_82D983F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d9ac04
	if (cr6.eq) goto loc_82D9AC04;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// bne cr6,0x82d9ac04
	if (!cr6.eq) goto loc_82D9AC04;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d994b0
	ctx.lr = 0x82D9AC04;
	sub_82D994B0(ctx, base);
loc_82D9AC04:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,18
	cr6.compare<uint32_t>(ctx.r31.u32, 18, xer);
	// blt cr6,0x82d9abd4
	if (cr6.lt) goto loc_82D9ABD4;
	// lwz r29,0(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// bne cr6,0x82d9abcc
	if (!cr6.eq) goto loc_82D9ABCC;
loc_82D9AC20:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D9AC28"))) PPC_WEAK_FUNC(sub_82D9AC28);
PPC_FUNC_IMPL(__imp__sub_82D9AC28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82D9AC30;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,16(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82d9acd4
	if (cr6.eq) goto loc_82D9ACD4;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82D9AC4C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d98848
	ctx.lr = 0x82D9AC58;
	sub_82D98848(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d9acd4
	if (cr6.eq) goto loc_82D9ACD4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// beq cr6,0x82d9acd4
	if (cr6.eq) goto loc_82D9ACD4;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// blt cr6,0x82d9ac4c
	if (cr6.lt) goto loc_82D9AC4C;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// beq cr6,0x82d9acd4
	if (cr6.eq) goto loc_82D9ACD4;
loc_82D9AC88:
	// lwz r30,8(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82D9AC90:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d98848
	ctx.lr = 0x82D9AC9C;
	sub_82D98848(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d9acb8
	if (cr6.eq) goto loc_82D9ACB8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// bne cr6,0x82d9acb8
	if (!cr6.eq) goto loc_82D9ACB8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d98ea0
	ctx.lr = 0x82D9ACB8;
	sub_82D98EA0(ctx, base);
loc_82D9ACB8:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(ctx.r31.u32, 3, xer);
	// blt cr6,0x82d9ac90
	if (cr6.lt) goto loc_82D9AC90;
	// lwz r29,0(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// bne cr6,0x82d9ac88
	if (!cr6.eq) goto loc_82D9AC88;
loc_82D9ACD4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D9ACDC"))) PPC_WEAK_FUNC(sub_82D9ACDC);
PPC_FUNC_IMPL(__imp__sub_82D9ACDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D9ACE0"))) PPC_WEAK_FUNC(sub_82D9ACE0);
PPC_FUNC_IMPL(__imp__sub_82D9ACE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D9ACE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82d9ad14
	if (cr6.lt) goto loc_82D9AD14;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82D9AD14:
	// li r11,29
	ctx.r11.s64 = 29;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r4,1460
	ctx.r4.s64 = 1460;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x82D9AD2C;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d9ad48
	if (cr6.eq) goto loc_82D9AD48;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d998d0
	ctx.lr = 0x82D9AD40;
	sub_82D998D0(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x82d9ad50
	goto loc_82D9AD50;
loc_82D9AD48:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82D9AD50:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d3f908
	ctx.lr = 0x82D9AD60;
	sub_82D3F908(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D9AD6C"))) PPC_WEAK_FUNC(sub_82D9AD6C);
PPC_FUNC_IMPL(__imp__sub_82D9AD6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D9AD70"))) PPC_WEAK_FUNC(sub_82D9AD70);
PPC_FUNC_IMPL(__imp__sub_82D9AD70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D9AD78;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82d9ada4
	if (cr6.lt) goto loc_82D9ADA4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82D9ADA4:
	// li r11,29
	ctx.r11.s64 = 29;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r4,1460
	ctx.r4.s64 = 1460;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x82D9ADBC;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d9add8
	if (cr6.eq) goto loc_82D9ADD8;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d998d0
	ctx.lr = 0x82D9ADD0;
	sub_82D998D0(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x82d9ade0
	goto loc_82D9ADE0;
loc_82D9ADD8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82D9ADE0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82d3f908
	ctx.lr = 0x82D9ADF4;
	sub_82D3F908(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D9AE00"))) PPC_WEAK_FUNC(sub_82D9AE00);
PPC_FUNC_IMPL(__imp__sub_82D9AE00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82D9AE08;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// bl 0x82d9a7f8
	ctx.lr = 0x82D9AE24;
	sub_82D9A7F8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x82d9aeb8
	if (cr6.eq) goto loc_82D9AEB8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d9ae80
	if (cr6.eq) goto loc_82D9AE80;
	// li r11,29
	ctx.r11.s64 = 29;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x82D9AE54;
	sub_82595150(ctx, base);
	// lwz r29,8(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82d9ae70
	if (cr6.eq) goto loc_82D9AE70;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x838760e0
	ctx.lr = 0x82D9AE68;
	sub_838760E0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82416268
	ctx.lr = 0x82D9AE70;
	sub_82416268(ctx, base);
loc_82D9AE70:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x82D9AE78;
	sub_82595170(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82D9AE80:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x82d9aeb8
	if (cr6.eq) goto loc_82D9AEB8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// bl 0x82416268
	ctx.lr = 0x82D9AEAC;
	sub_82416268(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// stw r7,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r7.u32);
loc_82D9AEB8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D9AEC0"))) PPC_WEAK_FUNC(sub_82D9AEC0);
PPC_FUNC_IMPL(__imp__sub_82D9AEC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82D9AEC8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x82d9af74
	if (cr6.eq) goto loc_82D9AF74;
	// li r28,29
	ctx.r28.s64 = 29;
	// li r27,0
	ctx.r27.s64 = 0;
loc_82D9AEE8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82d9af2c
	if (cr6.eq) goto loc_82D9AF2C;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x82D9AF04;
	sub_82595150(ctx, base);
	// lwz r30,8(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(ctx.r30.u32, 0, xer);
	// beq cr6,0x82d9af20
	if (cr6.eq) goto loc_82D9AF20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x838760e0
	ctx.lr = 0x82D9AF18;
	sub_838760E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82416268
	ctx.lr = 0x82D9AF20;
	sub_82416268(ctx, base);
loc_82D9AF20:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x82D9AF28;
	sub_82595170(ctx, base);
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
loc_82D9AF2C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x82d9af64
	if (cr6.eq) goto loc_82D9AF64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// bl 0x82416268
	ctx.lr = 0x82D9AF58;
	sub_82416268(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// stw r8,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r8.u32);
loc_82D9AF64:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bne cr6,0x82d9aee8
	if (!cr6.eq) goto loc_82D9AEE8;
loc_82D9AF74:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d52c48
	ctx.lr = 0x82D9AF7C;
	sub_82D52C48(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D9AF84"))) PPC_WEAK_FUNC(sub_82D9AF84);
PPC_FUNC_IMPL(__imp__sub_82D9AF84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D9AF88"))) PPC_WEAK_FUNC(sub_82D9AF88);
PPC_FUNC_IMPL(__imp__sub_82D9AF88) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82d9afac
	if (cr6.eq) goto loc_82D9AFAC;
	// bl 0x82416268
	ctx.lr = 0x82D9AFAC;
	sub_82416268(ctx, base);
loc_82D9AFAC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82D9AFD0"))) PPC_WEAK_FUNC(sub_82D9AFD0);
PPC_FUNC_IMPL(__imp__sub_82D9AFD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82D9AFD8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,455
	ctx.r11.s64 = 29818880;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,7281
	ctx.r10.u64 = ctx.r11.u64 | 7281;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82d9b000
	if (!cr6.gt) goto loc_82D9B000;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x82D9B000;
	sub_831CC150(ctx, base);
loc_82D9B000:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r25,144
	ctx.r25.s64 = 144;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r25
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r25.s32);
	// cmplw cr6,r8,r26
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r26.u32, xer);
	// bge cr6,0x82d9b0ac
	if (!cr6.lt) goto loc_82D9B0AC;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x82d9a0f0
	ctx.lr = 0x82D9B028;
	sub_82D9A0F0(ctx, base);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r27,4(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplw cr6,r30,r27
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, xer);
	// beq cr6,0x82d9b064
	if (cr6.eq) goto loc_82D9B064;
loc_82D9B040:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82d9b054
	if (cr6.eq) goto loc_82D9B054;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ad4478
	ctx.lr = 0x82D9B054;
	sub_82AD4478(ctx, base);
loc_82D9B054:
	// addi r30,r30,144
	ctx.r30.s64 = ctx.r30.s64 + 144;
	// addi r29,r29,144
	ctx.r29.s64 = ctx.r29.s64 + 144;
	// cmplw cr6,r30,r27
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, xer);
	// bne cr6,0x82d9b040
	if (!cr6.eq) goto loc_82D9B040;
loc_82D9B064:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// divw r30,r10,r25
	ctx.r30.s32 = PPCDivide(ctx.r10.s32, ctx.r25.s32);
	// beq cr6,0x82d9b080
	if (cr6.eq) goto loc_82D9B080;
	// bl 0x82416268
	ctx.lr = 0x82D9B080;
	sub_82416268(ctx, base);
loc_82D9B080:
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// rlwinm r10,r26,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// add r10,r26,r10
	ctx.r10.u64 = ctx.r26.u64 + ctx.r10.u64;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r7,r11,r28
	ctx.r7.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r8,r10,r28
	ctx.r8.u64 = ctx.r10.u64 + ctx.r28.u64;
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
loc_82D9B0AC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D9B0B4"))) PPC_WEAK_FUNC(sub_82D9B0B4);
PPC_FUNC_IMPL(__imp__sub_82D9B0B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D9B0B8"))) PPC_WEAK_FUNC(sub_82D9B0B8);
PPC_FUNC_IMPL(__imp__sub_82D9B0B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82D9B0C0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,163
	ctx.r11.s64 = 10682368;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,55050
	ctx.r10.u64 = ctx.r11.u64 | 55050;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82d9b0e8
	if (!cr6.gt) goto loc_82D9B0E8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x82D9B0E8;
	sub_831CC150(ctx, base);
loc_82D9B0E8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r25,400
	ctx.r25.s64 = 400;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r25
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r25.s32);
	// cmplw cr6,r8,r26
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r26.u32, xer);
	// bge cr6,0x82d9b184
	if (!cr6.lt) goto loc_82D9B184;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x82d9a160
	ctx.lr = 0x82D9B110;
	sub_82D9A160(ctx, base);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r27,4(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplw cr6,r30,r27
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, xer);
	// beq cr6,0x82d9b14c
	if (cr6.eq) goto loc_82D9B14C;
loc_82D9B128:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82d9b13c
	if (cr6.eq) goto loc_82D9B13C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b55d80
	ctx.lr = 0x82D9B13C;
	sub_82B55D80(ctx, base);
loc_82D9B13C:
	// addi r30,r30,400
	ctx.r30.s64 = ctx.r30.s64 + 400;
	// addi r29,r29,400
	ctx.r29.s64 = ctx.r29.s64 + 400;
	// cmplw cr6,r30,r27
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, xer);
	// bne cr6,0x82d9b128
	if (!cr6.eq) goto loc_82D9B128;
loc_82D9B14C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// divw r30,r10,r25
	ctx.r30.s32 = PPCDivide(ctx.r10.s32, ctx.r25.s32);
	// beq cr6,0x82d9b168
	if (cr6.eq) goto loc_82D9B168;
	// bl 0x82416268
	ctx.lr = 0x82D9B168;
	sub_82416268(ctx, base);
loc_82D9B168:
	// mulli r10,r26,400
	ctx.r10.s64 = ctx.r26.s64 * 400;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// mulli r11,r30,400
	ctx.r11.s64 = ctx.r30.s64 * 400;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// add r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
loc_82D9B184:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82D9B18C"))) PPC_WEAK_FUNC(sub_82D9B18C);
PPC_FUNC_IMPL(__imp__sub_82D9B18C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D9B190"))) PPC_WEAK_FUNC(sub_82D9B190);
PPC_FUNC_IMPL(__imp__sub_82D9B190) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, xer);
	// beq cr6,0x82d9b1f0
	if (cr6.eq) goto loc_82D9B1F0;
loc_82D9B1B4:
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// beq cr6,0x82d9b1cc
	if (cr6.eq) goto loc_82D9B1CC;
	// addi r5,r5,144
	ctx.r5.s64 = ctx.r5.s64 + 144;
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, xer);
	// bne cr6,0x82d9b1b4
	if (!cr6.eq) goto loc_82D9B1B4;
loc_82D9B1CC:
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, xer);
	// beq cr6,0x82d9b1f0
	if (cr6.eq) goto loc_82D9B1F0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r3,r5,144
	ctx.r3.s64 = ctx.r5.s64 + 144;
	// bl 0x82d9a1c8
	ctx.lr = 0x82D9B1E4;
	sub_82D9A1C8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,-144
	ctx.r11.s64 = ctx.r11.s64 + -144;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82D9B1F0:
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

__attribute__((alias("__imp__sub_82D9B204"))) PPC_WEAK_FUNC(sub_82D9B204);
PPC_FUNC_IMPL(__imp__sub_82D9B204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82D9B208"))) PPC_WEAK_FUNC(sub_82D9B208);
PPC_FUNC_IMPL(__imp__sub_82D9B208) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, xer);
	// beq cr6,0x82d9b268
	if (cr6.eq) goto loc_82D9B268;
loc_82D9B22C:
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// beq cr6,0x82d9b244
	if (cr6.eq) goto loc_82D9B244;
	// addi r5,r5,400
	ctx.r5.s64 = ctx.r5.s64 + 400;
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, xer);
	// bne cr6,0x82d9b22c
	if (!cr6.eq) goto loc_82D9B22C;
loc_82D9B244:
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, xer);
	// beq cr6,0x82d9b268
	if (cr6.eq) goto loc_82D9B268;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r3,r5,400
	ctx.r3.s64 = ctx.r5.s64 + 400;
	// bl 0x82d9a380
	ctx.lr = 0x82D9B25C;
	sub_82D9A380(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,-400
	ctx.r11.s64 = ctx.r11.s64 + -400;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82D9B268:
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

