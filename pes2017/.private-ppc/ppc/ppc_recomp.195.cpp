#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82DAFF24"))) PPC_WEAK_FUNC(sub_82DAFF24);
PPC_FUNC_IMPL(__imp__sub_82DAFF24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DAFF28"))) PPC_WEAK_FUNC(sub_82DAFF28);
PPC_FUNC_IMPL(__imp__sub_82DAFF28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82DAFF30;
	__savegprlr_29(ctx, base);
	// stwu r1,-944(r1)
	ea = -944 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r3,72
	ctx.r4.s64 = ctx.r3.s64 + 72;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82c5cb88
	ctx.lr = 0x82DAFF4C;
	sub_82C5CB88(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82e99ee0
	ctx.lr = 0x82DAFF58;
	sub_82E99EE0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// stw r11,668(r1)
	PPC_STORE_U32(ctx.r1.u32 + 668, ctx.r11.u32);
	// bl 0x82420558
	ctx.lr = 0x82DAFF74;
	sub_82420558(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// stw r10,700(r1)
	PPC_STORE_U32(ctx.r1.u32 + 700, ctx.r10.u32);
	// bl 0x824baf50
	ctx.lr = 0x82DAFF88;
	sub_824BAF50(ctx, base);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// bl 0x824baf50
	ctx.lr = 0x82DAFF94;
	sub_824BAF50(ctx, base);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// bl 0x824baf50
	ctx.lr = 0x82DAFFA0;
	sub_824BAF50(ctx, base);
	// ld r9,168(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// lwz r8,196(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// std r9,752(r1)
	PPC_STORE_U64(ctx.r1.u32 + 752, ctx.r9.u64);
	// bge cr6,0x82daffbc
	if (!cr6.lt) goto loc_82DAFFBC;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
loc_82DAFFBC:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82DAFFC0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82daffc0
	if (!cr6.eq) goto loc_82DAFFC0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,760
	ctx.r3.s64 = ctx.r1.s64 + 760;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82DAFFE4;
	sub_824208C8(ctx, base);
	// lwz r10,224(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r4,204(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82dafff8
	if (!cr6.lt) goto loc_82DAFFF8;
	// addi r4,r1,204
	ctx.r4.s64 = ctx.r1.s64 + 204;
loc_82DAFFF8:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82DAFFFC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82dafffc
	if (!cr6.eq) goto loc_82DAFFFC;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,788
	ctx.r3.s64 = ctx.r1.s64 + 788;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82DB0020;
	sub_824208C8(ctx, base);
	// lwz r10,284(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// lwz r4,264(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82db0034
	if (!cr6.lt) goto loc_82DB0034;
	// addi r4,r1,264
	ctx.r4.s64 = ctx.r1.s64 + 264;
loc_82DB0034:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82DB0038:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82db0038
	if (!cr6.eq) goto loc_82DB0038;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,816
	ctx.r3.s64 = ctx.r1.s64 + 816;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82DB005C;
	sub_824208C8(ctx, base);
	// lwz r10,312(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	// lwz r4,292(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82db0070
	if (!cr6.lt) goto loc_82DB0070;
	// addi r4,r1,292
	ctx.r4.s64 = ctx.r1.s64 + 292;
loc_82DB0070:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82DB0074:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82db0074
	if (!cr6.eq) goto loc_82DB0074;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,844
	ctx.r3.s64 = ctx.r1.s64 + 844;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82DB0098;
	sub_824208C8(ctx, base);
	// lwz r10,340(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r4,320(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82db00ac
	if (!cr6.lt) goto loc_82DB00AC;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
loc_82DB00AC:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82DB00B0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82db00b0
	if (!cr6.eq) goto loc_82DB00B0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,872
	ctx.r3.s64 = ctx.r1.s64 + 872;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x824208c8
	ctx.lr = 0x82DB00D4;
	sub_824208C8(ctx, base);
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// lwz r3,564(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 564);
	// cmpwi cr6,r31,-1
	cr6.compare<int32_t>(ctx.r31.s32, -1, xer);
	// stw r10,900(r1)
	PPC_STORE_U32(ctx.r1.u32 + 900, ctx.r10.u32);
	// beq cr6,0x82db0124
	if (cr6.eq) goto loc_82DB0124;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82db00fc
	if (cr6.eq) goto loc_82DB00FC;
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// clrlwi r4,r31,24
	ctx.r4.u64 = ctx.r31.u32 & 0xFF;
	// bl 0x82e74480
	ctx.lr = 0x82DB00FC;
	sub_82E74480(ctx, base);
loc_82DB00FC:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82db015c
	if (!cr6.eq) goto loc_82DB015C;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82daea70
	ctx.lr = 0x82DB0110;
	sub_82DAEA70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b6a860
	ctx.lr = 0x82DB0118;
	sub_82B6A860(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,944
	ctx.r1.s64 = ctx.r1.s64 + 944;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82DB0124:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82db0134
	if (cr6.eq) goto loc_82DB0134;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// bl 0x82e74498
	ctx.lr = 0x82DB0134;
	sub_82E74498(ctx, base);
loc_82DB0134:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82db015c
	if (!cr6.eq) goto loc_82DB015C;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82daea70
	ctx.lr = 0x82DB0148;
	sub_82DAEA70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b6a860
	ctx.lr = 0x82DB0150;
	sub_82B6A860(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,944
	ctx.r1.s64 = ctx.r1.s64 + 944;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82DB015C:
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82daea70
	ctx.lr = 0x82DB0164;
	sub_82DAEA70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b6a860
	ctx.lr = 0x82DB016C;
	sub_82B6A860(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,944
	ctx.r1.s64 = ctx.r1.s64 + 944;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB0178"))) PPC_WEAK_FUNC(sub_82DB0178);
PPC_FUNC_IMPL(__imp__sub_82DB0178) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82DB0180;
	__savegprlr_27(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r3,832
	ctx.r31.s64 = ctx.r3.s64 + 832;
	// li r28,24
	ctx.r28.s64 = 24;
	// li r27,0
	ctx.r27.s64 = 0;
loc_82DB0194:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82db043c
	if (cr6.eq) goto loc_82DB043C;
	// lbz r10,344(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 344);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82db043c
	if (cr6.eq) goto loc_82DB043C;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lbz r30,345(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 345);
	// bl 0x82b6b738
	ctx.lr = 0x82DB01B8;
	sub_82B6B738(ctx, base);
	// lwz r11,512(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 512);
	// lwz r10,516(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 516);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82db039c
	if (cr6.eq) goto loc_82DB039C;
loc_82DB01C8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r30
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, xer);
	// beq cr6,0x82db01e4
	if (cr6.eq) goto loc_82DB01E4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82db01c8
	if (!cr6.eq) goto loc_82DB01C8;
	// b 0x82db039c
	goto loc_82DB039C;
loc_82DB01E4:
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82db2970
	ctx.lr = 0x82DB01F4;
	sub_82DB2970(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82db037c
	if (!cr6.eq) goto loc_82DB037C;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82b6aee0
	ctx.lr = 0x82DB0208;
	sub_82B6AEE0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r11,360
	ctx.r3.s64 = ctx.r11.s64 + 360;
	// lwz r11,356(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 356);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// bl 0x82dadf80
	ctx.lr = 0x82DB0220;
	sub_82DADF80(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,448
	ctx.r4.s64 = ctx.r11.s64 + 448;
	// ld r10,440(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 440);
	// std r10,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r10.u64);
	// lwz r9,468(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 468);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82db0240
	if (cr6.lt) goto loc_82DB0240;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82DB0240:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82DB0244:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82db0244
	if (!cr6.eq) goto loc_82DB0244;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82DB0268;
	sub_8259CC28(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,476
	ctx.r4.s64 = ctx.r11.s64 + 476;
	// lwz r10,496(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 496);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82db0280
	if (cr6.lt) goto loc_82DB0280;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82DB0280:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82DB0284:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82db0284
	if (!cr6.eq) goto loc_82DB0284;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,236
	ctx.r3.s64 = ctx.r1.s64 + 236;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82DB02A8;
	sub_8259CC28(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,504
	ctx.r4.s64 = ctx.r11.s64 + 504;
	// lwz r10,524(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 524);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82db02c0
	if (cr6.lt) goto loc_82DB02C0;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82DB02C0:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82DB02C4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82db02c4
	if (!cr6.eq) goto loc_82DB02C4;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,296
	ctx.r3.s64 = ctx.r1.s64 + 296;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82DB02E8;
	sub_8259CC28(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,532
	ctx.r4.s64 = ctx.r11.s64 + 532;
	// lwz r10,552(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 552);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82db0300
	if (cr6.lt) goto loc_82DB0300;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82DB0300:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82DB0304:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82db0304
	if (!cr6.eq) goto loc_82DB0304;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,324
	ctx.r3.s64 = ctx.r1.s64 + 324;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82DB0328;
	sub_8259CC28(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,560
	ctx.r11.s64 = ctx.r11.s64 + 560;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82db0340
	if (cr6.lt) goto loc_82DB0340;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82DB0340:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82DB0344:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82db0344
	if (!cr6.eq) goto loc_82DB0344;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82DB036C;
	sub_8259CC28(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82db3258
	ctx.lr = 0x82DB037C;
	sub_82DB3258(ctx, base);
loc_82DB037C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,588(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 588);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82db039c
	if (cr6.eq) goto loc_82DB039C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82daff28
	ctx.lr = 0x82DB039C;
	sub_82DAFF28(ctx, base);
loc_82DB039C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// beq cr6,0x82db03f8
	if (cr6.eq) goto loc_82DB03F8;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// bl 0x8257fad0
	ctx.lr = 0x82DB03C8;
	sub_8257FAD0(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x82db03f0
	if (cr6.lt) goto loc_82DB03F0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8257fb60
	ctx.lr = 0x82DB03EC;
	sub_8257FB60(ctx, base);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
loc_82DB03F0:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82DB03F8:
	// lwz r10,564(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 564);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82db0424
	if (cr6.eq) goto loc_82DB0424;
	// lbz r11,344(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 344);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82db0414
	if (cr6.eq) goto loc_82DB0414;
	// bl 0x82e744f8
	ctx.lr = 0x82DB0414;
	sub_82E744F8(ctx, base);
loc_82DB0414:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,564(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 564);
	// bl 0x82e744b0
	ctx.lr = 0x82DB0420;
	sub_82E744B0(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82DB0424:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82db0434
	if (cr6.eq) goto loc_82DB0434;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8259b510
	ctx.lr = 0x82DB0434;
	sub_8259B510(ctx, base);
loc_82DB0434:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82b6a860
	ctx.lr = 0x82DB043C;
	sub_82B6A860(ctx, base);
loc_82DB043C:
	// addic. r28,r28,-1
	xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	cr0.compare<int32_t>(ctx.r28.s32, 0, xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x82db0194
	if (!cr0.eq) goto loc_82DB0194;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB0450"))) PPC_WEAK_FUNC(sub_82DB0450);
PPC_FUNC_IMPL(__imp__sub_82DB0450) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82DB0458;
	__savegprlr_29(ctx, base);
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,516(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 516);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,512(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 512);
	// li r29,1
	ctx.r29.s64 = 1;
	// subf r30,r10,r11
	ctx.r30.s64 = ctx.r11.s64 - ctx.r10.s64;
	// bl 0x82db0bf0
	ctx.lr = 0x82DB0474;
	sub_82DB0BF0(ctx, base);
	// subf r9,r3,r30
	ctx.r9.s64 = ctx.r30.s64 - ctx.r3.s64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82db0580
	if (cr6.eq) goto loc_82DB0580;
	// lbz r11,824(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 824);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82db04a0
	if (!cr6.eq) goto loc_82DB04A0;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82DB04A0:
	// addi r4,r31,72
	ctx.r4.s64 = ctx.r31.s64 + 72;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82c5cb88
	ctx.lr = 0x82DB04AC;
	sub_82C5CB88(ctx, base);
	// lwz r11,516(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	// lwz r30,512(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// beq cr6,0x82db055c
	if (cr6.eq) goto loc_82DB055C;
loc_82DB04BC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b6b738
	ctx.lr = 0x82DB04C4;
	sub_82B6B738(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// bl 0x82db2970
	ctx.lr = 0x82DB04D4;
	sub_82DB2970(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82db0570
	if (cr6.eq) goto loc_82DB0570;
	// lwz r11,312(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	// lwz r6,292(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82db04f4
	if (!cr6.lt) goto loc_82DB04F4;
	// addi r6,r1,292
	ctx.r6.s64 = ctx.r1.s64 + 292;
loc_82DB04F4:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r7,308(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// addi r3,r1,564
	ctx.r3.s64 = ctx.r1.s64 + 564;
	// lwz r5,580(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 580);
	// bl 0x827a8810
	ctx.lr = 0x82DB0508;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82db0540
	if (!cr6.eq) goto loc_82DB0540;
	// lwz r11,340(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r6,320(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82db0524
	if (!cr6.lt) goto loc_82DB0524;
	// addi r6,r1,320
	ctx.r6.s64 = ctx.r1.s64 + 320;
loc_82DB0524:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r7,336(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// lwz r5,608(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 608);
	// bl 0x827a8810
	ctx.lr = 0x82DB0538;
	sub_827A8810(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82db0544
	if (cr6.eq) goto loc_82DB0544;
loc_82DB0540:
	// li r29,4
	ctx.r29.s64 = 4;
loc_82DB0544:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b6a860
	ctx.lr = 0x82DB054C;
	sub_82B6A860(ctx, base);
	// lwz r11,516(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bne cr6,0x82db04bc
	if (!cr6.eq) goto loc_82DB04BC;
loc_82DB055C:
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82b6a860
	ctx.lr = 0x82DB0564;
	sub_82B6A860(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82DB0570:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b6a860
	ctx.lr = 0x82DB0578;
	sub_82B6A860(ctx, base);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82b6a860
	ctx.lr = 0x82DB0580;
	sub_82B6A860(ctx, base);
loc_82DB0580:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB058C"))) PPC_WEAK_FUNC(sub_82DB058C);
PPC_FUNC_IMPL(__imp__sub_82DB058C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB0590"))) PPC_WEAK_FUNC(sub_82DB0590);
PPC_FUNC_IMPL(__imp__sub_82DB0590) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82DB0598;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x83a7d958
	ctx.lr = 0x82DB05A8;
	sub_83A7D958(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82db0178
	ctx.lr = 0x82DB05B4;
	sub_82DB0178(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82db0450
	ctx.lr = 0x82DB05BC;
	sub_82DB0450(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r3,828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 828, ctx.r3.u32);
	// beq cr6,0x82db05d4
	if (cr6.eq) goto loc_82DB05D4;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82DB05D4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83524138
	ctx.lr = 0x82DB05DC;
	sub_83524138(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,1028(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1028);
	// bl 0x83524138
	ctx.lr = 0x82DB05E8;
	sub_83524138(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,60000
	ctx.r10.u64 = ctx.r11.u64 | 60000;
	// add r9,r3,r10
	ctx.r9.u64 = ctx.r3.u64 + ctx.r10.u64;
	// cmpld cr6,r28,r9
	cr6.compare<uint64_t>(ctx.r28.u64, ctx.r9.u64, xer);
	// ble cr6,0x82db0610
	if (!cr6.gt) goto loc_82DB0610;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 828, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82DB0610:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83524138
	ctx.lr = 0x82DB0618;
	sub_83524138(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,1024(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1024);
	// bl 0x83524138
	ctx.lr = 0x82DB0624;
	sub_83524138(ctx, base);
	// addi r11,r3,1000
	ctx.r11.s64 = ctx.r3.s64 + 1000;
	// cmpld cr6,r28,r11
	cr6.compare<uint64_t>(ctx.r28.u64, ctx.r11.u64, xer);
	// ble cr6,0x82db065c
	if (!cr6.gt) goto loc_82DB065C;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82daff28
	ctx.lr = 0x82DB0640;
	sub_82DAFF28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82db0660
	if (cr6.eq) goto loc_82DB0660;
	// stw r30,1024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1024, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82DB065C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82DB0660:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB0668"))) PPC_WEAK_FUNC(sub_82DB0668);
PPC_FUNC_IMPL(__imp__sub_82DB0668) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82DB0670;
	__savegprlr_28(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82e6f960
	ctx.lr = 0x82DB067C;
	sub_82E6F960(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82db0704
	if (!cr6.eq) goto loc_82DB0704;
	// bl 0x82e7e2f8
	ctx.lr = 0x82DB0688;
	sub_82E7E2F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82db06cc
	if (cr6.eq) goto loc_82DB06CC;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,-27485
	ctx.r31.s64 = ctx.r11.s64 + -27485;
	// addi r4,r31,373
	ctx.r4.s64 = ctx.r31.s64 + 373;
	// bl 0x837b0c10
	ctx.lr = 0x82DB06A8;
	sub_837B0C10(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r31,-32
	ctx.r4.s64 = ctx.r31.s64 + -32;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x837b0c10
	ctx.lr = 0x82DB06B8;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,292
	ctx.r6.s64 = 292;
	// bl 0x82e7eb70
	ctx.lr = 0x82DB06CC;
	sub_82E7EB70(ctx, base);
loc_82DB06CC:
	// bl 0x82daed20
	ctx.lr = 0x82DB06D0;
	sub_82DAED20(ctx, base);
	// lis r31,-31758
	ctx.r31.s64 = -2081292288;
	// lwz r11,31040(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 31040);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82db0a68
	if (cr6.eq) goto loc_82DB0A68;
	// lwz r10,384(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 384);
	// addi r3,r11,384
	ctx.r3.s64 = ctx.r11.s64 + 384;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82DB06F4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,31040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 31040, ctx.r11.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82DB0704:
	// lwz r3,180(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 180);
	// addi r31,r29,-384
	ctx.r31.s64 = ctx.r29.s64 + -384;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82db0720
	if (!cr6.eq) goto loc_82DB0720;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82db0724
	goto loc_82DB0724;
loc_82DB0720:
	// bl 0x82e744e0
	ctx.lr = 0x82DB0724;
	sub_82E744E0(ctx, base);
loc_82DB0724:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82db07ec
	if (cr6.eq) goto loc_82DB07EC;
	// lwz r11,444(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 444);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82db0744
	if (!cr6.eq) goto loc_82DB0744;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,444(r29)
	PPC_STORE_U32(ctx.r29.u32 + 444, ctx.r11.u32);
loc_82DB0744:
	// lis r11,-31758
	ctx.r11.s64 = -2081292288;
	// lwz r10,31044(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31044);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82db075c
	if (!cr6.eq) goto loc_82DB075C;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r30,31044(r11)
	PPC_STORE_U32(ctx.r11.u32 + 31044, ctx.r30.u32);
loc_82DB075C:
	// bl 0x82daed20
	ctx.lr = 0x82DB0760;
	sub_82DAED20(ctx, base);
	// lbz r11,176(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 176);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82db0a68
	if (!cr6.eq) goto loc_82DB0A68;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dad348
	ctx.lr = 0x82DB077C;
	sub_82DAD348(ctx, base);
	// bl 0x82e7e2f8
	ctx.lr = 0x82DB0780;
	sub_82E7E2F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82db07c4
	if (cr6.eq) goto loc_82DB07C4;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r30,r11,-27485
	ctx.r30.s64 = ctx.r11.s64 + -27485;
	// addi r4,r30,477
	ctx.r4.s64 = ctx.r30.s64 + 477;
	// bl 0x837b0c10
	ctx.lr = 0x82DB07A0;
	sub_837B0C10(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r30,-21
	ctx.r4.s64 = ctx.r30.s64 + -21;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82DB07B0;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r6,311
	ctx.r6.s64 = 311;
	// bl 0x82e7eb70
	ctx.lr = 0x82DB07C4;
	sub_82E7EB70(ctx, base);
loc_82DB07C4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,176(r29)
	PPC_STORE_U8(ctx.r29.u32 + 176, ctx.r11.u8);
	// bl 0x82e6e978
	ctx.lr = 0x82DB07D0;
	sub_82E6E978(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82db0a68
	if (cr6.eq) goto loc_82DB0A68;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// bl 0x82e93678
	ctx.lr = 0x82DB07E4;
	sub_82E93678(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82DB07EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dae7b8
	ctx.lr = 0x82DB07F4;
	sub_82DAE7B8(ctx, base);
	// lwz r11,72(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgt cr6,0x82db0a60
	if (cr6.gt) goto loc_82DB0A60;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82db0844
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82DB0844;
	// bdzf 4*cr6+eq,0x82db086c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82DB086C;
	// bdzf 4*cr6+eq,0x82db0890
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82DB0890;
	// bdzf 4*cr6+eq,0x82db0a08
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82DB0A08;
	// bne cr6,0x82db0a68
	if (!cr6.eq) goto loc_82DB0A68;
	// lwz r3,564(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 564);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82db082c
	if (cr6.eq) goto loc_82DB082C;
	// bl 0x82e744c8
	ctx.lr = 0x82DB082C;
	sub_82E744C8(ctx, base);
loc_82DB082C:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82db0a68
	if (!cr6.eq) goto loc_82DB0A68;
	// stw r30,72(r29)
	PPC_STORE_U32(ctx.r29.u32 + 72, ctx.r30.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82DB0844:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dae380
	ctx.lr = 0x82DB084C;
	sub_82DAE380(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// subfic r10,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r9,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r8,r11,6
	ctx.r8.s64 = ctx.r11.s64 + 6;
	// stw r8,72(r29)
	PPC_STORE_U32(ctx.r29.u32 + 72, ctx.r8.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82DB086C:
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 828, ctx.r30.u32);
	// bl 0x83a7d958
	ctx.lr = 0x82DB0878;
	sub_83A7D958(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r3,1028(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1028, ctx.r3.u32);
	// stw r30,1024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1024, ctx.r30.u32);
	// stw r11,72(r29)
	PPC_STORE_U32(ctx.r29.u32 + 72, ctx.r11.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82DB0890:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82db0590
	ctx.lr = 0x82DB0898;
	sub_82DB0590(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82db0a68
	if (cr6.eq) goto loc_82DB0A68;
	// lwz r11,444(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 444);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82db08c4
	if (!cr6.eq) goto loc_82DB08C4;
	// li r11,4
	ctx.r11.s64 = 4;
	// stb r30,176(r29)
	PPC_STORE_U8(ctx.r29.u32 + 176, ctx.r30.u8);
	// stw r11,72(r29)
	PPC_STORE_U32(ctx.r29.u32 + 72, ctx.r11.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82DB08C4:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x82db09a4
	if (cr6.eq) goto loc_82DB09A4;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x82db0940
	if (cr6.eq) goto loc_82DB0940;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x82db09f8
	if (!cr6.eq) goto loc_82DB09F8;
	// bl 0x82e7e2f8
	ctx.lr = 0x82DB08E0;
	sub_82E7E2F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82db0924
	if (cr6.eq) goto loc_82DB0924;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r31,r11,-27485
	ctx.r31.s64 = ctx.r11.s64 + -27485;
	// addi r4,r31,789
	ctx.r4.s64 = ctx.r31.s64 + 789;
	// bl 0x837b0c10
	ctx.lr = 0x82DB0900;
	sub_837B0C10(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837b0c10
	ctx.lr = 0x82DB0910;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r6,358
	ctx.r6.s64 = 358;
	// bl 0x82e7eb70
	ctx.lr = 0x82DB0924;
	sub_82E7EB70(ctx, base);
loc_82DB0924:
	// lis r10,-31758
	ctx.r10.s64 = -2081292288;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,31044(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31044, ctx.r11.u32);
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,72(r29)
	PPC_STORE_U32(ctx.r29.u32 + 72, ctx.r11.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82DB0940:
	// bl 0x82e7e2f8
	ctx.lr = 0x82DB0944;
	sub_82E7E2F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82db0988
	if (cr6.eq) goto loc_82DB0988;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r31,r11,-27485
	ctx.r31.s64 = ctx.r11.s64 + -27485;
	// addi r4,r31,685
	ctx.r4.s64 = ctx.r31.s64 + 685;
	// bl 0x837b0c10
	ctx.lr = 0x82DB0964;
	sub_837B0C10(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x837b0c10
	ctx.lr = 0x82DB0974;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r6,354
	ctx.r6.s64 = 354;
	// bl 0x82e7eb70
	ctx.lr = 0x82DB0988;
	sub_82E7EB70(ctx, base);
loc_82DB0988:
	// lis r10,-31758
	ctx.r10.s64 = -2081292288;
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,31044(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31044, ctx.r11.u32);
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,72(r29)
	PPC_STORE_U32(ctx.r29.u32 + 72, ctx.r11.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82DB09A4:
	// bl 0x82e7e2f8
	ctx.lr = 0x82DB09A8;
	sub_82E7E2F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82db09ec
	if (cr6.eq) goto loc_82DB09EC;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r31,r11,-27485
	ctx.r31.s64 = ctx.r11.s64 + -27485;
	// addi r4,r31,581
	ctx.r4.s64 = ctx.r31.s64 + 581;
	// bl 0x837b0c10
	ctx.lr = 0x82DB09C8;
	sub_837B0C10(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r31,-20
	ctx.r4.s64 = ctx.r31.s64 + -20;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x837b0c10
	ctx.lr = 0x82DB09D8;
	sub_837B0C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r6,350
	ctx.r6.s64 = 350;
	// bl 0x82e7eb70
	ctx.lr = 0x82DB09EC;
	sub_82E7EB70(ctx, base);
loc_82DB09EC:
	// lis r10,-31758
	ctx.r10.s64 = -2081292288;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,31044(r10)
	PPC_STORE_U32(ctx.r10.u32 + 31044, ctx.r11.u32);
loc_82DB09F8:
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,72(r29)
	PPC_STORE_U32(ctx.r29.u32 + 72, ctx.r11.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82DB0A08:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82db0178
	ctx.lr = 0x82DB0A10;
	sub_82DB0178(ctx, base);
	// lwz r11,-16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82db0a68
	if (cr6.eq) goto loc_82DB0A68;
	// lwz r11,516(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,512(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	// subf r30,r10,r11
	ctx.r30.s64 = ctx.r11.s64 - ctx.r10.s64;
	// bl 0x82db0bf0
	ctx.lr = 0x82DB0A30;
	sub_82DB0BF0(ctx, base);
	// subf r9,r3,r30
	ctx.r9.s64 = ctx.r30.s64 - ctx.r3.s64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82db0a68
	if (cr6.eq) goto loc_82DB0A68;
	// bl 0x82e61248
	ctx.lr = 0x82DB0A48;
	sub_82E61248(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dafdf8
	ctx.lr = 0x82DB0A50;
	sub_82DAFDF8(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,72(r29)
	PPC_STORE_U32(ctx.r29.u32 + 72, ctx.r11.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82DB0A60:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dae9e0
	ctx.lr = 0x82DB0A68;
	sub_82DAE9E0(ctx, base);
loc_82DB0A68:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB0A70"))) PPC_WEAK_FUNC(sub_82DB0A70);
PPC_FUNC_IMPL(__imp__sub_82DB0A70) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,60(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r8,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB0A88"))) PPC_WEAK_FUNC(sub_82DB0A88);
PPC_FUNC_IMPL(__imp__sub_82DB0A88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,228(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// blt cr6,0x82db0a9c
	if (cr6.lt) goto loc_82DB0A9C;
loc_82DB0A94:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82DB0A9C:
	// cmpwi cr6,r4,2
	cr6.compare<int32_t>(ctx.r4.s32, 2, xer);
	// bge cr6,0x82db0aac
	if (!cr6.lt) goto loc_82DB0AAC;
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, xer);
	// bne cr6,0x82db0a94
	if (!cr6.eq) goto loc_82DB0A94;
loc_82DB0AAC:
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// lwz r10,60(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// mulli r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 * 12;
	// lwzx r8,r9,r3
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// subf r7,r8,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r8.s64;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r3,r6,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB0ACC"))) PPC_WEAK_FUNC(sub_82DB0ACC);
PPC_FUNC_IMPL(__imp__sub_82DB0ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB0AD0"))) PPC_WEAK_FUNC(sub_82DB0AD0);
PPC_FUNC_IMPL(__imp__sub_82DB0AD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,297(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 297);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82db0aec
	if (cr6.eq) goto loc_82DB0AEC;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82DB0AEC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,297(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 297);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82db0b28
	if (!cr6.eq) goto loc_82DB0B28;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lbz r9,297(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 297);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82db0b20
	if (!cr6.eq) goto loc_82DB0B20;
loc_82DB0B0C:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,297(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 297);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82db0b0c
	if (cr6.eq) goto loc_82DB0B0C;
loc_82DB0B20:
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_82DB0B28:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,297(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 297);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82db0b60
	if (!cr6.eq) goto loc_82DB0B60;
loc_82DB0B38:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82db0b60
	if (!cr6.eq) goto loc_82DB0B60;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,297(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 297);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82db0b38
	if (cr6.eq) goto loc_82DB0B38;
loc_82DB0B60:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r9,297(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 297);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB0B78"))) PPC_WEAK_FUNC(sub_82DB0B78);
PPC_FUNC_IMPL(__imp__sub_82DB0B78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,69(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 69);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82db0b98
	if (!cr6.eq) goto loc_82DB0B98;
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_82DB0B98:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x82db0bc0
	if (!cr6.eq) goto loc_82DB0BC0;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_82DB0BC0:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x82db0be0
	if (!cr6.eq) goto loc_82DB0BE0;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_82DB0BE0:
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB0BF0"))) PPC_WEAK_FUNC(sub_82DB0BF0);
PPC_FUNC_IMPL(__imp__sub_82DB0BF0) {
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
	// lwz r31,348(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 348);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82db0c40
	if (cr6.eq) goto loc_82DB0C40;
loc_82DB0C1C:
	// lbz r11,189(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 189);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82db0c2c
	if (!cr6.eq) goto loc_82DB0C2C;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_82DB0C2C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c5ba08
	ctx.lr = 0x82DB0C34;
	sub_82C5BA08(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// bne cr6,0x82db0c1c
	if (!cr6.eq) goto loc_82DB0C1C;
loc_82DB0C40:
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

__attribute__((alias("__imp__sub_82DB0C5C"))) PPC_WEAK_FUNC(sub_82DB0C5C);
PPC_FUNC_IMPL(__imp__sub_82DB0C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB0C60"))) PPC_WEAK_FUNC(sub_82DB0C60);
PPC_FUNC_IMPL(__imp__sub_82DB0C60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82DB0C68;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,348(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 348);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82db0cb8
	if (cr6.eq) goto loc_82DB0CB8;
loc_82DB0C88:
	// lwz r10,180(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// cmpw cr6,r10,r29
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, xer);
	// bne cr6,0x82db0ca4
	if (!cr6.eq) goto loc_82DB0CA4;
	// lbz r11,189(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 189);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82db0ca4
	if (!cr6.eq) goto loc_82DB0CA4;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_82DB0CA4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c5ba08
	ctx.lr = 0x82DB0CAC;
	sub_82C5BA08(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// bne cr6,0x82db0c88
	if (!cr6.eq) goto loc_82DB0C88;
loc_82DB0CB8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB0CC4"))) PPC_WEAK_FUNC(sub_82DB0CC4);
PPC_FUNC_IMPL(__imp__sub_82DB0CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB0CC8"))) PPC_WEAK_FUNC(sub_82DB0CC8);
PPC_FUNC_IMPL(__imp__sub_82DB0CC8) {
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
	// lwz r31,364(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 364);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82db0d18
	if (cr6.eq) goto loc_82DB0D18;
loc_82DB0CF4:
	// lbz r11,67(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 67);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82db0d04
	if (!cr6.eq) goto loc_82DB0D04;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_82DB0D04:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387cd90
	ctx.lr = 0x82DB0D0C;
	sub_8387CD90(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// bne cr6,0x82db0cf4
	if (!cr6.eq) goto loc_82DB0CF4;
loc_82DB0D18:
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

__attribute__((alias("__imp__sub_82DB0D34"))) PPC_WEAK_FUNC(sub_82DB0D34);
PPC_FUNC_IMPL(__imp__sub_82DB0D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB0D38"))) PPC_WEAK_FUNC(sub_82DB0D38);
PPC_FUNC_IMPL(__imp__sub_82DB0D38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82DB0D40;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,348(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 348);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r31,1
	ctx.r31.s64 = 1;
	// li r29,2
	ctx.r29.s64 = 2;
loc_82DB0D58:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82db0da0
	if (cr6.eq) goto loc_82DB0DA0;
loc_82DB0D68:
	// lwz r10,180(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// cmpw cr6,r10,r28
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r28.s32, xer);
	// bne cr6,0x82db0d84
	if (!cr6.eq) goto loc_82DB0D84;
	// lwz r11,184(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// and r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 & ctx.r31.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82db0d9c
	if (!cr6.eq) goto loc_82DB0D9C;
loc_82DB0D84:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c5ba08
	ctx.lr = 0x82DB0D8C;
	sub_82C5BA08(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, xer);
	// bne cr6,0x82db0d68
	if (!cr6.eq) goto loc_82DB0D68;
	// b 0x82db0da0
	goto loc_82DB0DA0;
loc_82DB0D9C:
	// or r27,r31,r27
	ctx.r27.u64 = ctx.r31.u64 | ctx.r27.u64;
loc_82DB0DA0:
	// addic. r29,r29,-1
	xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	cr0.compare<int32_t>(ctx.r29.s32, 0, xer);
	// rotlwi r31,r31,1
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r31.u32, 1);
	// bne 0x82db0d58
	if (!cr0.eq) goto loc_82DB0D58;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB0DB8"))) PPC_WEAK_FUNC(sub_82DB0DB8);
PPC_FUNC_IMPL(__imp__sub_82DB0DB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lbz r9,297(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 297);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82db0df8
	if (!cr6.eq) goto loc_82DB0DF8;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
loc_82DB0DD0:
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bge cr6,0x82db0de4
	if (!cr6.lt) goto loc_82DB0DE4;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82db0dec
	goto loc_82DB0DEC;
loc_82DB0DE4:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82DB0DEC:
	// lbz r8,297(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 297);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82db0dd0
	if (cr6.eq) goto loc_82DB0DD0;
loc_82DB0DF8:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x82db0e28
	if (cr6.eq) goto loc_82DB0E28;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// blt cr6,0x82db0e28
	if (cr6.lt) goto loc_82DB0E28;
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82DB0E28:
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// addi r11,r1,-12
	ctx.r11.s64 = ctx.r1.s64 + -12;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB0E3C"))) PPC_WEAK_FUNC(sub_82DB0E3C);
PPC_FUNC_IMPL(__imp__sub_82DB0E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB0E40"))) PPC_WEAK_FUNC(sub_82DB0E40);
PPC_FUNC_IMPL(__imp__sub_82DB0E40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lbz r9,69(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 69);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82db0e80
	if (!cr6.eq) goto loc_82DB0E80;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
loc_82DB0E58:
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bge cr6,0x82db0e6c
	if (!cr6.lt) goto loc_82DB0E6C;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82db0e74
	goto loc_82DB0E74;
loc_82DB0E6C:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82DB0E74:
	// lbz r8,69(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 69);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82db0e58
	if (cr6.eq) goto loc_82DB0E58;
loc_82DB0E80:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x82db0eb0
	if (cr6.eq) goto loc_82DB0EB0;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// blt cr6,0x82db0eb0
	if (cr6.lt) goto loc_82DB0EB0;
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82DB0EB0:
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// addi r11,r1,-12
	ctx.r11.s64 = ctx.r1.s64 + -12;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB0EC4"))) PPC_WEAK_FUNC(sub_82DB0EC4);
PPC_FUNC_IMPL(__imp__sub_82DB0EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB0EC8"))) PPC_WEAK_FUNC(sub_82DB0EC8);
PPC_FUNC_IMPL(__imp__sub_82DB0EC8) {
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
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// addi r4,r4,12
	ctx.r4.s64 = ctx.r4.s64 + 12;
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// stw r9,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stb r11,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r11.u8);
	// bl 0x8259cb28
	ctx.lr = 0x82DB0F24;
	sub_8259CB28(ctx, base);
	// lbz r6,40(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 40);
	// stb r6,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r6.u8);
	// lwz r5,44(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// stw r5,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r5.u32);
	// lbz r4,48(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 48);
	// stb r4,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r4.u8);
	// lbz r3,49(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 49);
	// stb r3,49(r31)
	PPC_STORE_U8(ctx.r31.u32 + 49, ctx.r3.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r11,50(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 50);
	// stb r11,50(r31)
	PPC_STORE_U8(ctx.r31.u32 + 50, ctx.r11.u8);
	// lbz r10,51(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 51);
	// stb r10,51(r31)
	PPC_STORE_U8(ctx.r31.u32 + 51, ctx.r10.u8);
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

__attribute__((alias("__imp__sub_82DB0F70"))) PPC_WEAK_FUNC(sub_82DB0F70);
PPC_FUNC_IMPL(__imp__sub_82DB0F70) {
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
	// lwz r11,36(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// addi r31,r4,16
	ctx.r31.s64 = ctx.r4.s64 + 16;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82db0fa4
	if (cr6.lt) goto loc_82DB0FA4;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82DB0FA4;
	sub_825952B8(ctx, base);
loc_82DB0FA4:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82DB0FCC"))) PPC_WEAK_FUNC(sub_82DB0FCC);
PPC_FUNC_IMPL(__imp__sub_82DB0FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB0FD0"))) PPC_WEAK_FUNC(sub_82DB0FD0);
PPC_FUNC_IMPL(__imp__sub_82DB0FD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82DB0FD8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,1170
	ctx.r10.s64 = 76677120;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// ori r9,r10,18723
	ctx.r9.u64 = ctx.r10.u64 | 18723;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x82db1050
	if (cr6.lt) goto loc_82DB1050;
	// lwz r11,48(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// addi r31,r7,28
	ctx.r31.s64 = ctx.r7.s64 + 28;
	// li r30,2
	ctx.r30.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82db1020
	if (cr6.lt) goto loc_82DB1020;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82DB1020;
	sub_825952B8(ctx, base);
loc_82DB1020:
	// li r28,0
	ctx.r28.s64 = 0;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x825952b8
	ctx.lr = 0x82DB1044;
	sub_825952B8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r10,12808
	ctx.r3.s64 = ctx.r10.s64 + 12808;
	// bl 0x831cc150
	ctx.lr = 0x82DB1050;
	sub_831CC150(ctx, base);
loc_82DB1050:
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
	// bne cr6,0x82db1080
	if (!cr6.eq) goto loc_82DB1080;
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
	// b 0x82db10c0
	goto loc_82DB10C0;
loc_82DB1080:
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82db10a8
	if (cr6.eq) goto loc_82DB10A8;
	// stw r27,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r27.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// bne cr6,0x82db10c0
	if (!cr6.eq) goto loc_82DB10C0;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// b 0x82db10c0
	goto loc_82DB10C0;
loc_82DB10A8:
	// stw r27,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r27.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// bne cr6,0x82db10c0
	if (!cr6.eq) goto loc_82DB10C0;
	// stw r27,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r27.u32);
loc_82DB10C0:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// lbz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 68);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82db11e4
	if (!cr6.eq) goto loc_82DB11E4;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82DB10DC:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bne cr6,0x82db1164
	if (!cr6.eq) goto loc_82DB1164;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 68);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82db1124
	if (!cr6.eq) goto loc_82DB1124;
	// rotlwi r10,r4,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stb r29,68(r10)
	PPC_STORE_U8(ctx.r10.u32 + 68, ctx.r29.u8);
	// stb r29,68(r11)
	PPC_STORE_U8(ctx.r11.u32 + 68, ctx.r29.u8);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r28,68(r8)
	PPC_STORE_U8(ctx.r8.u32 + 68, ctx.r28.u8);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r31,4(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// b 0x82db11d4
	goto loc_82DB11D4;
loc_82DB1124:
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x82db113c
	if (!cr6.eq) goto loc_82DB113C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82db0b78
	ctx.lr = 0x82DB113C;
	sub_82DB0B78(ctx, base);
loc_82DB113C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r29,68(r11)
	PPC_STORE_U8(ctx.r11.u32 + 68, ctx.r29.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r28,68(r9)
	PPC_STORE_U8(ctx.r9.u32 + 68, ctx.r28.u8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x82ecdb60
	ctx.lr = 0x82DB1160;
	sub_82ECDB60(ctx, base);
	// b 0x82db11d4
	goto loc_82DB11D4;
loc_82DB1164:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 68);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82db1198
	if (!cr6.eq) goto loc_82DB1198;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r29,68(r10)
	PPC_STORE_U8(ctx.r10.u32 + 68, ctx.r29.u8);
	// stb r29,68(r11)
	PPC_STORE_U8(ctx.r11.u32 + 68, ctx.r29.u8);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r28,68(r8)
	PPC_STORE_U8(ctx.r8.u32 + 68, ctx.r28.u8);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r31,4(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// b 0x82db11d4
	goto loc_82DB11D4;
loc_82DB1198:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x82db11b0
	if (!cr6.eq) goto loc_82DB11B0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82ecdb60
	ctx.lr = 0x82DB11B0;
	sub_82ECDB60(ctx, base);
loc_82DB11B0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r29,68(r11)
	PPC_STORE_U8(ctx.r11.u32 + 68, ctx.r29.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r28,68(r9)
	PPC_STORE_U8(ctx.r9.u32 + 68, ctx.r28.u8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x82db0b78
	ctx.lr = 0x82DB11D4;
	sub_82DB0B78(ctx, base);
loc_82DB11D4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 68);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82db10dc
	if (cr6.eq) goto loc_82DB10DC;
loc_82DB11E4:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r27,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r27.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stb r29,68(r10)
	PPC_STORE_U8(ctx.r10.u32 + 68, ctx.r29.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB1200"))) PPC_WEAK_FUNC(sub_82DB1200);
PPC_FUNC_IMPL(__imp__sub_82DB1200) {
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
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r4,r4,12
	ctx.r4.s64 = ctx.r4.s64 + 12;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DB1248;
	sub_8259CB28(ctx, base);
	// lbz r8,40(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 40);
	// stb r8,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r8.u8);
	// lwz r7,44(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// stw r7,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r7.u32);
	// lbz r6,48(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 48);
	// stb r6,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r6.u8);
	// lbz r5,49(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 49);
	// stb r5,49(r31)
	PPC_STORE_U8(ctx.r31.u32 + 49, ctx.r5.u8);
	// lbz r4,50(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 50);
	// stb r4,50(r31)
	PPC_STORE_U8(ctx.r31.u32 + 50, ctx.r4.u8);
	// lbz r3,51(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 51);
	// stb r3,51(r31)
	PPC_STORE_U8(ctx.r31.u32 + 51, ctx.r3.u8);
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

__attribute__((alias("__imp__sub_82DB1294"))) PPC_WEAK_FUNC(sub_82DB1294);
PPC_FUNC_IMPL(__imp__sub_82DB1294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB1298"))) PPC_WEAK_FUNC(sub_82DB1298);
PPC_FUNC_IMPL(__imp__sub_82DB1298) {
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
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r4,r3,360
	ctx.r4.s64 = ctx.r3.s64 + 360;
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82db0e40
	ctx.lr = 0x82DB12C8;
	sub_82DB0E40(ctx, base);
	// lwz r10,364(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82db12ec
	if (cr6.eq) goto loc_82DB12EC;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82db1200
	ctx.lr = 0x82DB12E4;
	sub_82DB1200(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82db12f0
	goto loc_82DB12F0;
loc_82DB12EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DB12F0:
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

__attribute__((alias("__imp__sub_82DB1308"))) PPC_WEAK_FUNC(sub_82DB1308);
PPC_FUNC_IMPL(__imp__sub_82DB1308) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82DB1310;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,364(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 364);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82db135c
	if (cr6.eq) goto loc_82DB135C;
loc_82DB1330:
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, xer);
	// bne cr6,0x82db1348
	if (!cr6.eq) goto loc_82DB1348;
	// lbz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 64);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82db1368
	if (cr6.eq) goto loc_82DB1368;
loc_82DB1348:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387cd90
	ctx.lr = 0x82DB1350;
	sub_8387CD90(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// bne cr6,0x82db1330
	if (!cr6.eq) goto loc_82DB1330;
loc_82DB135C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82DB1368:
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82db1200
	ctx.lr = 0x82DB1374;
	sub_82DB1200(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB1380"))) PPC_WEAK_FUNC(sub_82DB1380);
PPC_FUNC_IMPL(__imp__sub_82DB1380) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82DB1388;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,364(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 364);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82db13d4
	if (cr6.eq) goto loc_82DB13D4;
loc_82DB13A8:
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, xer);
	// bne cr6,0x82db13c0
	if (!cr6.eq) goto loc_82DB13C0;
	// lbz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 64);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82db13e0
	if (cr6.eq) goto loc_82DB13E0;
loc_82DB13C0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8387cd90
	ctx.lr = 0x82DB13C8;
	sub_8387CD90(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// bne cr6,0x82db13a8
	if (!cr6.eq) goto loc_82DB13A8;
loc_82DB13D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82DB13E0:
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82db1200
	ctx.lr = 0x82DB13EC;
	sub_82DB1200(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB13F8"))) PPC_WEAK_FUNC(sub_82DB13F8);
PPC_FUNC_IMPL(__imp__sub_82DB13F8) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// li r9,24
	ctx.r9.s64 = 24;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// li r31,2
	ctx.r31.s64 = 2;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stb r11,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r11.u8);
	// stb r7,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r7.u8);
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// stb r11,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r11.u8);
	// stb r11,145(r1)
	PPC_STORE_U8(ctx.r1.u32 + 145, ctx.r11.u8);
	// stb r11,146(r1)
	PPC_STORE_U8(ctx.r1.u32 + 146, ctx.r11.u8);
	// stb r11,147(r1)
	PPC_STORE_U8(ctx.r1.u32 + 147, ctx.r11.u8);
	// bl 0x82db1308
	ctx.lr = 0x82DB145C;
	sub_82DB1308(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82db1490
	if (cr6.eq) goto loc_82DB1490;
	// lwz r30,140(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82db1488
	if (cr6.lt) goto loc_82DB1488;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// bl 0x825952b8
	ctx.lr = 0x82DB1488;
	sub_825952B8(ctx, base);
loc_82DB1488:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82db14ac
	goto loc_82DB14AC;
loc_82DB1490:
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82db14a8
	if (cr6.lt) goto loc_82DB14A8;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// bl 0x825952b8
	ctx.lr = 0x82DB14A8;
	sub_825952B8(ctx, base);
loc_82DB14A8:
	// li r3,2
	ctx.r3.s64 = 2;
loc_82DB14AC:
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

__attribute__((alias("__imp__sub_82DB14C4"))) PPC_WEAK_FUNC(sub_82DB14C4);
PPC_FUNC_IMPL(__imp__sub_82DB14C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB14C8"))) PPC_WEAK_FUNC(sub_82DB14C8);
PPC_FUNC_IMPL(__imp__sub_82DB14C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdabc
	ctx.lr = 0x82DB14D0;
	__savegprlr_17(ctx, base);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82DB14DC;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addis r19,r11,222
	ctx.r19.s64 = ctx.r11.s64 + 14548992;
	// addi r19,r19,-12208
	ctx.r19.s64 = ctx.r19.s64 + -12208;
	// bl 0x831156e8
	ctx.lr = 0x82DB14EC;
	sub_831156E8(ctx, base);
	// lwz r9,52(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,228(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 228);
	// li r17,1
	ctx.r17.s64 = 1;
	// addis r26,r9,6
	ctx.r26.s64 = ctx.r9.s64 + 393216;
	// li r18,2
	ctx.r18.s64 = 2;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// addi r26,r26,-30316
	ctx.r26.s64 = ctx.r26.s64 + -30316;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82db151c
	if (!cr6.eq) goto loc_82DB151C;
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
	// b 0x82db1528
	goto loc_82DB1528;
loc_82DB151C:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82db1528
	if (!cr6.eq) goto loc_82DB1528;
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
loc_82DB1528:
	// lwz r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// clrlwi r24,r10,24
	ctx.r24.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// add r10,r11,r26
	ctx.r10.u64 = ctx.r11.u64 + ctx.r26.u64;
	// stb r24,45(r10)
	PPC_STORE_U8(ctx.r10.u32 + 45, ctx.r24.u8);
	// lbz r9,236(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 236);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82db1564
	if (cr6.eq) goto loc_82DB1564;
	// lwz r11,228(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 228);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bge cr6,0x82db1564
	if (!cr6.lt) goto loc_82DB1564;
	// lwz r10,56(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// add r9,r11,r26
	ctx.r9.u64 = ctx.r11.u64 + ctx.r26.u64;
	// stb r10,169(r9)
	PPC_STORE_U8(ctx.r9.u32 + 169, ctx.r10.u8);
loc_82DB1564:
	// lwz r11,56(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// li r21,24
	ctx.r21.s64 = 24;
	// lbz r10,224(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 224);
	// li r25,-1
	ctx.r25.s64 = -1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r20,4
	ctx.r20.s64 = 4;
	// add r9,r11,r26
	ctx.r9.u64 = ctx.r11.u64 + ctx.r26.u64;
	// stb r10,117(r9)
	PPC_STORE_U8(ctx.r9.u32 + 117, ctx.r10.u8);
	// lbz r8,225(r29)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + 225);
	// lwz r7,56(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// add r6,r11,r26
	ctx.r6.u64 = ctx.r11.u64 + ctx.r26.u64;
	// stb r8,69(r6)
	PPC_STORE_U8(ctx.r6.u32 + 69, ctx.r8.u8);
	// lwz r28,240(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 240);
	// lwz r5,244(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 244);
	// cmplw cr6,r28,r5
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r5.u32, xer);
	// beq cr6,0x82db16fc
	if (cr6.eq) goto loc_82DB16FC;
	// addi r22,r29,360
	ctx.r22.s64 = ctx.r29.s64 + 360;
	// li r23,15
	ctx.r23.s64 = 15;
loc_82DB15B0:
	// stw r23,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r23.u32);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// stw r21,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r21.u32);
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// stw r27,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r27.u32);
	// stb r27,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r27.u8);
	// stb r20,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r20.u8);
	// stw r18,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r18.u32);
	// stb r27,145(r1)
	PPC_STORE_U8(ctx.r1.u32 + 145, ctx.r27.u8);
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// stb r27,146(r1)
	PPC_STORE_U8(ctx.r1.u32 + 146, ctx.r27.u8);
	// stb r27,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r27.u8);
	// stb r27,147(r1)
	PPC_STORE_U8(ctx.r1.u32 + 147, ctx.r27.u8);
loc_82DB15E4:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82db0e40
	ctx.lr = 0x82DB15F8;
	sub_82DB0E40(ctx, base);
	// lwz r11,364(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 364);
	// lwz r31,152(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x82db1670
	if (cr6.eq) goto loc_82DB1670;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DB1638;
	sub_8259CB28(ctx, base);
	// lbz r7,56(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// stb r7,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r7.u8);
	// lwz r6,60(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r6,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r6.u32);
	// lbz r5,64(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 64);
	// stb r5,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r5.u8);
	// lbz r4,65(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 65);
	// stb r4,145(r1)
	PPC_STORE_U8(ctx.r1.u32 + 145, ctx.r4.u8);
	// lbz r3,66(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 66);
	// stb r3,146(r1)
	PPC_STORE_U8(ctx.r1.u32 + 146, ctx.r3.u8);
	// lbz r10,67(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 67);
	// stb r10,147(r1)
	PPC_STORE_U8(ctx.r1.u32 + 147, ctx.r10.u8);
	// b 0x82db1674
	goto loc_82DB1674;
loc_82DB1670:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82DB1674:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82db16b8
	if (cr6.eq) goto loc_82DB16B8;
	// lbz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 144);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x82db16b8
	if (!cr6.eq) goto loc_82DB16B8;
	// lwz r11,60(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x82db16b8
	if (!cr6.eq) goto loc_82DB16B8;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// stb r24,45(r11)
	PPC_STORE_U8(ctx.r11.u32 + 45, ctx.r24.u8);
	// lwz r10,28(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// stb r10,117(r11)
	PPC_STORE_U8(ctx.r11.u32 + 117, ctx.r10.u8);
	// lwz r8,40(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// stb r8,69(r11)
	PPC_STORE_U8(ctx.r11.u32 + 69, ctx.r8.u8);
loc_82DB16B8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,24
	cr6.compare<uint32_t>(ctx.r30.u32, 24, xer);
	// blt cr6,0x82db15e4
	if (cr6.lt) goto loc_82DB15E4;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r28,r28,48
	ctx.r28.s64 = ctx.r28.s64 + 48;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82db16e4
	if (cr6.lt) goto loc_82DB16E4;
	// stw r18,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r18.u32);
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// bl 0x825952b8
	ctx.lr = 0x82DB16E4;
	sub_825952B8(ctx, base);
loc_82DB16E4:
	// lwz r11,244(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 244);
	// stw r23,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r23.u32);
	// stw r27,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r27.u32);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// stb r27,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r27.u8);
	// bne cr6,0x82db15b0
	if (!cr6.eq) goto loc_82DB15B0;
loc_82DB16FC:
	// lwz r11,352(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 352);
	// stb r11,5(r19)
	PPC_STORE_U8(ctx.r19.u32 + 5, ctx.r11.u8);
	// lwz r9,368(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 368);
	// stb r9,6(r19)
	PPC_STORE_U8(ctx.r19.u32 + 6, ctx.r9.u8);
	// lwz r7,228(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 228);
	// stb r7,0(r19)
	PPC_STORE_U8(ctx.r19.u32 + 0, ctx.r7.u8);
	// lwz r5,32(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// blt cr6,0x82db1728
	if (cr6.lt) goto loc_82DB1728;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_82DB1728:
	// stb r11,3(r19)
	PPC_STORE_U8(ctx.r19.u32 + 3, ctx.r11.u8);
	// lwz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// blt cr6,0x82db1740
	if (cr6.lt) goto loc_82DB1740;
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_82DB1740:
	// stb r11,4(r19)
	PPC_STORE_U8(ctx.r19.u32 + 4, ctx.r11.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82db0d38
	ctx.lr = 0x82DB1750;
	sub_82DB0D38(ctx, base);
	// stw r3,1932(r19)
	PPC_STORE_U32(ctx.r19.u32 + 1932, ctx.r3.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82db0d38
	ctx.lr = 0x82DB1760;
	sub_82DB0D38(ctx, base);
	// stw r3,1936(r19)
	PPC_STORE_U32(ctx.r19.u32 + 1936, ctx.r3.u32);
	// lwz r11,364(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 364);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// beq cr6,0x82db1870
	if (cr6.eq) goto loc_82DB1870;
loc_82DB1778:
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r25,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r25.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r27,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r27.u32);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x831cdcf0
	ctx.lr = 0x82DB1790;
	sub_831CDCF0(ctx, base);
	// stb r20,236(r1)
	PPC_STORE_U8(ctx.r1.u32 + 236, ctx.r20.u8);
	// stw r18,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r18.u32);
	// addi r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 + 28;
	// stb r27,237(r1)
	PPC_STORE_U8(ctx.r1.u32 + 237, ctx.r27.u8);
	// stb r17,238(r1)
	PPC_STORE_U8(ctx.r1.u32 + 238, ctx.r17.u8);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r9,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r9.u32);
	// lwz r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x82db17c4
	if (cr6.lt) goto loc_82DB17C4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82DB17C4:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x831ce7d8
	ctx.lr = 0x82DB17D4;
	sub_831CE7D8(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// li r5,80
	ctx.r5.s64 = 80;
	// stw r11,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r11.u32);
	// lbz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 56);
	// stb r10,236(r1)
	PPC_STORE_U8(ctx.r1.u32 + 236, ctx.r10.u8);
	// lbz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 64);
	// stb r9,237(r1)
	PPC_STORE_U8(ctx.r1.u32 + 237, ctx.r9.u8);
	// bl 0x831ce980
	ctx.lr = 0x82DB17FC;
	sub_831CE980(ctx, base);
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r8,160(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// addi r5,r1,248
	ctx.r5.s64 = ctx.r1.s64 + 248;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// li r4,64
	ctx.r4.s64 = 64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// add r31,r11,r19
	ctx.r31.u64 = ctx.r11.u64 + ctx.r19.u64;
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x831ce7d8
	ctx.lr = 0x82DB1838;
	sub_831CE7D8(ctx, base);
	// lwz r10,312(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// lbz r9,316(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 316);
	// stb r9,84(r31)
	PPC_STORE_U8(ctx.r31.u32 + 84, ctx.r9.u8);
	// lbz r8,317(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 317);
	// stb r8,85(r31)
	PPC_STORE_U8(ctx.r31.u32 + 85, ctx.r8.u8);
	// lbz r7,318(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 318);
	// stb r7,86(r31)
	PPC_STORE_U8(ctx.r31.u32 + 86, ctx.r7.u8);
	// bl 0x8387cd90
	ctx.lr = 0x82DB1860;
	sub_8387CD90(ctx, base);
	// lwz r6,364(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 364);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r31,r6
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r6.u32, xer);
	// bne cr6,0x82db1778
	if (!cr6.eq) goto loc_82DB1778;
loc_82DB1870:
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x831cdb0c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB1878"))) PPC_WEAK_FUNC(sub_82DB1878);
PPC_FUNC_IMPL(__imp__sub_82DB1878) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82DB1880;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,69(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 69);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82db1904
	if (!cr6.eq) goto loc_82DB1904;
	// li r27,2
	ctx.r27.s64 = 2;
	// li r26,15
	ctx.r26.s64 = 15;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82DB18A8:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82db1878
	ctx.lr = 0x82DB18B4;
	sub_82DB1878(ctx, base);
	// lwz r11,48(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// addi r31,r29,28
	ctx.r31.s64 = ctx.r29.s64 + 28;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// blt cr6,0x82db18d8
	if (cr6.lt) goto loc_82DB18D8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// bl 0x825952b8
	ctx.lr = 0x82DB18D8;
	sub_825952B8(ctx, base);
loc_82DB18D8:
	// stw r26,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r26.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// bl 0x825952b8
	ctx.lr = 0x82DB18F4;
	sub_825952B8(ctx, base);
	// lbz r11,69(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 69);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82db18a8
	if (cr6.eq) goto loc_82DB18A8;
loc_82DB1904:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB190C"))) PPC_WEAK_FUNC(sub_82DB190C);
PPC_FUNC_IMPL(__imp__sub_82DB190C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB1910"))) PPC_WEAK_FUNC(sub_82DB1910);
PPC_FUNC_IMPL(__imp__sub_82DB1910) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82DB1918;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,69(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 69);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r5,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r5.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82db1940
	if (cr6.eq) goto loc_82DB1940;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,11564
	ctx.r3.s64 = ctx.r11.s64 + 11564;
	// bl 0x831cc188
	ctx.lr = 0x82DB1940;
	sub_831CC188(ctx, base);
loc_82DB1940:
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x8387cd90
	ctx.lr = 0x82DB194C;
	sub_8387CD90(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lbz r10,69(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 69);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r25,196(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// beq cr6,0x82db1968
	if (cr6.eq) goto loc_82DB1968;
	// lwz r28,8(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// b 0x82db198c
	goto loc_82DB198C;
loc_82DB1968:
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lbz r9,69(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 69);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82db1980
	if (cr6.eq) goto loc_82DB1980;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// b 0x82db198c
	goto loc_82DB198C;
loc_82DB1980:
	// lwz r28,8(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmplw cr6,r25,r26
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r26.u32, xer);
	// bne cr6,0x82db1a78
	if (!cr6.eq) goto loc_82DB1A78;
loc_82DB198C:
	// lbz r11,69(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 69);
	// lwz r31,4(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82db19a0
	if (!cr6.eq) goto loc_82DB19A0;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_82DB19A0:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, xer);
	// bne cr6,0x82db19b8
	if (!cr6.eq) goto loc_82DB19B8;
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// b 0x82db19d0
	goto loc_82DB19D0;
loc_82DB19B8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x82db19cc
	if (!cr6.eq) goto loc_82DB19CC;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// b 0x82db19d0
	goto loc_82DB19D0;
loc_82DB19CC:
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
loc_82DB19D0:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x82db1a20
	if (!cr6.eq) goto loc_82DB1A20;
	// lbz r11,69(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 69);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82db19f4
	if (cr6.eq) goto loc_82DB19F4;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x82db1a1c
	goto loc_82DB1A1C;
loc_82DB19F4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lbz r8,69(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 69);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82db1a1c
	if (!cr6.eq) goto loc_82DB1A1C;
loc_82DB1A08:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,69(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 69);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82db1a08
	if (cr6.eq) goto loc_82DB1A08;
loc_82DB1A1C:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_82DB1A20:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x82db1b0c
	if (!cr6.eq) goto loc_82DB1B0C;
	// lbz r11,69(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 69);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82db1a48
	if (cr6.eq) goto loc_82DB1A48;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r31,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r31.u32);
	// b 0x82db1b0c
	goto loc_82DB1B0C;
loc_82DB1A48:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lbz r8,69(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 69);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82db1a70
	if (!cr6.eq) goto loc_82DB1A70;
loc_82DB1A5C:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,69(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 69);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82db1a5c
	if (cr6.eq) goto loc_82DB1A5C;
loc_82DB1A70:
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// b 0x82db1b0c
	goto loc_82DB1B0C;
loc_82DB1A78:
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
	// bne cr6,0x82db1a98
	if (!cr6.eq) goto loc_82DB1A98;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// b 0x82db1ac0
	goto loc_82DB1AC0;
loc_82DB1A98:
	// lbz r11,69(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 69);
	// lwz r31,4(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82db1aac
	if (!cr6.eq) goto loc_82DB1AAC;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_82DB1AAC:
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
loc_82DB1AC0:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, xer);
	// bne cr6,0x82db1ad8
	if (!cr6.eq) goto loc_82DB1AD8;
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// b 0x82db1af4
	goto loc_82DB1AF4;
loc_82DB1AD8:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, xer);
	// bne cr6,0x82db1af0
	if (!cr6.eq) goto loc_82DB1AF0;
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// b 0x82db1af4
	goto loc_82DB1AF4;
loc_82DB1AF0:
	// stw r25,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r25.u32);
loc_82DB1AF4:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// lbz r9,68(r26)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r26.u32 + 68);
	// lbz r10,68(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + 68);
	// stb r9,68(r25)
	PPC_STORE_U8(ctx.r25.u32 + 68, ctx.r9.u8);
	// stb r10,68(r26)
	PPC_STORE_U8(ctx.r26.u32 + 68, ctx.r10.u8);
loc_82DB1B0C:
	// lbz r11,68(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 68);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82db1ca4
	if (!cr6.eq) goto loc_82DB1CA4;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, xer);
	// beq cr6,0x82db1ca0
	if (cr6.eq) goto loc_82DB1CA0;
loc_82DB1B30:
	// lbz r11,68(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 68);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82db1ca0
	if (!cr6.eq) goto loc_82DB1CA0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// bne cr6,0x82db1be8
	if (!cr6.eq) goto loc_82DB1BE8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lbz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 68);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82db1b70
	if (!cr6.eq) goto loc_82DB1B70;
	// stb r30,68(r11)
	PPC_STORE_U8(ctx.r11.u32 + 68, ctx.r30.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r29,68(r31)
	PPC_STORE_U8(ctx.r31.u32 + 68, ctx.r29.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82db0b78
	ctx.lr = 0x82DB1B6C;
	sub_82DB0B78(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_82DB1B70:
	// lbz r10,69(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 69);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82db1c3c
	if (!cr6.eq) goto loc_82DB1C3C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 68);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x82db1b9c
	if (!cr6.eq) goto loc_82DB1B9C;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,68(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 68);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// beq cr6,0x82db1c38
	if (cr6.eq) goto loc_82DB1C38;
loc_82DB1B9C:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,68(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 68);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x82db1bc4
	if (!cr6.eq) goto loc_82DB1BC4;
	// stb r30,68(r10)
	PPC_STORE_U8(ctx.r10.u32 + 68, ctx.r30.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r29,68(r11)
	PPC_STORE_U8(ctx.r11.u32 + 68, ctx.r29.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ecdb60
	ctx.lr = 0x82DB1BC0;
	sub_82ECDB60(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_82DB1BC4:
	// lbz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 68);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r10,68(r11)
	PPC_STORE_U8(ctx.r11.u32 + 68, ctx.r10.u8);
	// stb r30,68(r31)
	PPC_STORE_U8(ctx.r31.u32 + 68, ctx.r30.u8);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stb r30,68(r9)
	PPC_STORE_U8(ctx.r9.u32 + 68, ctx.r30.u8);
	// bl 0x82db0b78
	ctx.lr = 0x82DB1BE4;
	sub_82DB0B78(ctx, base);
	// b 0x82db1ca0
	goto loc_82DB1CA0;
loc_82DB1BE8:
	// lbz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 68);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82db1c0c
	if (!cr6.eq) goto loc_82DB1C0C;
	// stb r30,68(r11)
	PPC_STORE_U8(ctx.r11.u32 + 68, ctx.r30.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r29,68(r31)
	PPC_STORE_U8(ctx.r31.u32 + 68, ctx.r29.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ecdb60
	ctx.lr = 0x82DB1C08;
	sub_82ECDB60(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82DB1C0C:
	// lbz r10,69(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 69);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82db1c3c
	if (!cr6.eq) goto loc_82DB1C3C;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 68);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x82db1c58
	if (!cr6.eq) goto loc_82DB1C58;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,68(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 68);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x82db1c58
	if (!cr6.eq) goto loc_82DB1C58;
loc_82DB1C38:
	// stb r29,68(r11)
	PPC_STORE_U8(ctx.r11.u32 + 68, ctx.r29.u8);
loc_82DB1C3C:
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
	// bne cr6,0x82db1b30
	if (!cr6.eq) goto loc_82DB1B30;
	// b 0x82db1ca0
	goto loc_82DB1CA0;
loc_82DB1C58:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,68(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 68);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x82db1c80
	if (!cr6.eq) goto loc_82DB1C80;
	// stb r30,68(r10)
	PPC_STORE_U8(ctx.r10.u32 + 68, ctx.r30.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r29,68(r11)
	PPC_STORE_U8(ctx.r11.u32 + 68, ctx.r29.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82db0b78
	ctx.lr = 0x82DB1C7C;
	sub_82DB0B78(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82DB1C80:
	// lbz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 68);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r10,68(r11)
	PPC_STORE_U8(ctx.r11.u32 + 68, ctx.r10.u8);
	// stb r30,68(r31)
	PPC_STORE_U8(ctx.r31.u32 + 68, ctx.r30.u8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r30,68(r9)
	PPC_STORE_U8(ctx.r9.u32 + 68, ctx.r30.u8);
	// bl 0x82ecdb60
	ctx.lr = 0x82DB1CA0;
	sub_82ECDB60(ctx, base);
loc_82DB1CA0:
	// stb r30,68(r28)
	PPC_STORE_U8(ctx.r28.u32 + 68, ctx.r30.u8);
loc_82DB1CA4:
	// lwz r11,48(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 48);
	// addi r31,r26,28
	ctx.r31.s64 = ctx.r26.s64 + 28;
	// li r30,2
	ctx.r30.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82db1cc8
	if (cr6.lt) goto loc_82DB1CC8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// bl 0x825952b8
	ctx.lr = 0x82DB1CC8;
	sub_825952B8(ctx, base);
loc_82DB1CC8:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stb r29,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r29.u8);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x825952b8
	ctx.lr = 0x82DB1CE8;
	sub_825952B8(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82db1cfc
	if (cr6.eq) goto loc_82DB1CFC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
loc_82DB1CFC:
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

__attribute__((alias("__imp__sub_82DB1D0C"))) PPC_WEAK_FUNC(sub_82DB1D0C);
PPC_FUNC_IMPL(__imp__sub_82DB1D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB1D10"))) PPC_WEAK_FUNC(sub_82DB1D10);
PPC_FUNC_IMPL(__imp__sub_82DB1D10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82DB1D18;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,4(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r24,1
	ctx.r24.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// addi r25,r5,12
	ctx.r25.s64 = ctx.r5.s64 + 12;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// lbz r10,69(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 69);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82db1da0
	if (!cr6.eq) goto loc_82DB1DA0;
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// clrlwi r7,r6,24
	ctx.r7.u64 = ctx.r6.u32 & 0xFF;
	// li r8,-1
	ctx.r8.s64 = -1;
loc_82DB1D54:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82db1d70
	if (cr6.eq) goto loc_82DB1D70;
	// subfc r10,r9,r10
	xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subfze r31,r8
	temp.u8 = ~ctx.r8.u32 + xer.ca < xer.ca;
	ctx.r31.u64 = ~ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x82db1d7c
	goto loc_82DB1D7C;
loc_82DB1D70:
	// subfc r6,r10,r9
	xer.ca = ctx.r9.u32 >= ctx.r10.u32;
	ctx.r6.s64 = ctx.r9.s64 - ctx.r10.s64;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r31,r4,31
	ctx.r31.u64 = ctx.r4.u32 & 0x1;
loc_82DB1D7C:
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82db1d90
	if (cr6.eq) goto loc_82DB1D90;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82db1d94
	goto loc_82DB1D94;
loc_82DB1D90:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_82DB1D94:
	// lbz r10,69(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 69);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82db1d54
	if (cr6.eq) goto loc_82DB1D54;
loc_82DB1DA0:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82db1e00
	if (cr6.eq) goto loc_82DB1E00;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, xer);
	// bne cr6,0x82db1df8
	if (!cr6.eq) goto loc_82DB1DF8;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82db0fd0
	ctx.lr = 0x82DB1DDC;
	sub_82DB0FD0(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r24,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r24.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82DB1DF8:
	// bl 0x8387d150
	ctx.lr = 0x82DB1DFC;
	sub_8387D150(ctx, base);
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82DB1E00:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82db1e44
	if (!cr6.lt) goto loc_82DB1E44;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82db0fd0
	ctx.lr = 0x82DB1E28;
	sub_82DB0FD0(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r24,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r24.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82DB1E44:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r27,13
	ctx.r3.s64 = ctx.r27.s64 + 13;
	// bl 0x82db0f70
	ctx.lr = 0x82DB1E50;
	sub_82DB0F70(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x82DB1E64;
	sub_825952B8(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r10,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r10.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB1E7C"))) PPC_WEAK_FUNC(sub_82DB1E7C);
PPC_FUNC_IMPL(__imp__sub_82DB1E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB1E80"))) PPC_WEAK_FUNC(sub_82DB1E80);
PPC_FUNC_IMPL(__imp__sub_82DB1E80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82DB1E88;
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
	// beq cr6,0x82db1f08
	if (cr6.eq) goto loc_82DB1F08;
	// addi r30,r3,32
	ctx.r30.s64 = ctx.r3.s64 + 32;
	// li r27,15
	ctx.r27.s64 = 15;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,-1
	ctx.r28.s64 = -1;
loc_82DB1EAC:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82db1ef4
	if (cr6.eq) goto loc_82DB1EF4;
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r29,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r29.u8);
	// addi r4,r30,-32
	ctx.r4.s64 = ctx.r30.s64 + -32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82DB1ED4;
	sub_8259CB28(ctx, base);
	// lwz r11,-4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// ld r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// std r10,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r10.u64);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// lbz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 12);
	// stb r8,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r8.u8);
loc_82DB1EF4:
	// addi r30,r30,48
	ctx.r30.s64 = ctx.r30.s64 + 48;
	// addi r31,r31,48
	ctx.r31.s64 = ctx.r31.s64 + 48;
	// addi r11,r30,-32
	ctx.r11.s64 = ctx.r30.s64 + -32;
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x82db1eac
	if (!cr6.eq) goto loc_82DB1EAC;
loc_82DB1F08:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB1F14"))) PPC_WEAK_FUNC(sub_82DB1F14);
PPC_FUNC_IMPL(__imp__sub_82DB1F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB1F18"))) PPC_WEAK_FUNC(sub_82DB1F18);
PPC_FUNC_IMPL(__imp__sub_82DB1F18) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// li r9,24
	ctx.r9.s64 = 24;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// li r30,2
	ctx.r30.s64 = 2;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stb r11,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r11.u8);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stb r7,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r7.u8);
	// stw r30,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r30.u32);
	// stb r11,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r11.u8);
	// stb r11,145(r1)
	PPC_STORE_U8(ctx.r1.u32 + 145, ctx.r11.u8);
	// stb r11,146(r1)
	PPC_STORE_U8(ctx.r1.u32 + 146, ctx.r11.u8);
	// stb r11,147(r1)
	PPC_STORE_U8(ctx.r1.u32 + 147, ctx.r11.u8);
	// bl 0x82db1380
	ctx.lr = 0x82DB1F80;
	sub_82DB1380(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x82db1fa4
	if (!cr6.eq) goto loc_82DB1FA4;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82db1fd8
	if (cr6.lt) goto loc_82DB1FD8;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// b 0x82db1fd0
	goto loc_82DB1FD0;
loc_82DB1FA4:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// blt cr6,0x82db1fd8
	if (cr6.lt) goto loc_82DB1FD8;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
loc_82DB1FD0:
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// bl 0x825952b8
	ctx.lr = 0x82DB1FD8;
	sub_825952B8(ctx, base);
loc_82DB1FD8:
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

__attribute__((alias("__imp__sub_82DB1FF0"))) PPC_WEAK_FUNC(sub_82DB1FF0);
PPC_FUNC_IMPL(__imp__sub_82DB1FF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82DB1FF8;
	__savegprlr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r4,28(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r11,15
	ctx.r11.s64 = 15;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// li r28,24
	ctx.r28.s64 = 24;
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// li r29,-1
	ctx.r29.s64 = -1;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// li r27,2
	ctx.r27.s64 = 2;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stb r30,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r30.u8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r10,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r10.u8);
	// stw r27,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r27.u32);
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
	// stb r30,145(r1)
	PPC_STORE_U8(ctx.r1.u32 + 145, ctx.r30.u8);
	// stb r30,146(r1)
	PPC_STORE_U8(ctx.r1.u32 + 146, ctx.r30.u8);
	// stb r30,147(r1)
	PPC_STORE_U8(ctx.r1.u32 + 147, ctx.r30.u8);
	// bl 0x82db1380
	ctx.lr = 0x82DB2054;
	sub_82DB1380(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82db2084
	if (!cr6.eq) goto loc_82DB2084;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82db20bc
	if (cr6.lt) goto loc_82DB20BC;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// bl 0x825952b8
	ctx.lr = 0x82DB207C;
	sub_825952B8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
loc_82DB2084:
	// addi r5,r31,8
	ctx.r5.s64 = ctx.r31.s64 + 8;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82db1f18
	ctx.lr = 0x82DB2094;
	sub_82DB1F18(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// blt cr6,0x82db20bc
	if (cr6.lt) goto loc_82DB20BC;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// bl 0x825952b8
	ctx.lr = 0x82DB20BC;
	sub_825952B8(ctx, base);
loc_82DB20BC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB20C4"))) PPC_WEAK_FUNC(sub_82DB20C4);
PPC_FUNC_IMPL(__imp__sub_82DB20C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB20C8"))) PPC_WEAK_FUNC(sub_82DB20C8);
PPC_FUNC_IMPL(__imp__sub_82DB20C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82DB20D0;
	__savegprlr_22(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r26,368(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 368);
	// li r23,15
	ctx.r23.s64 = 15;
	// li r25,24
	ctx.r25.s64 = 24;
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// li r30,-1
	ctx.r30.s64 = -1;
	// stw r31,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r31.u32);
	// li r11,4
	ctx.r11.s64 = 4;
	// stb r31,172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 172, ctx.r31.u8);
	// li r22,2
	ctx.r22.s64 = 2;
	// stb r31,209(r1)
	PPC_STORE_U8(ctx.r1.u32 + 209, ctx.r31.u8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stb r31,210(r1)
	PPC_STORE_U8(ctx.r1.u32 + 210, ctx.r31.u8);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(ctx.r26.u32, 0, xer);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// stb r31,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r31.u8);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// stb r31,145(r1)
	PPC_STORE_U8(ctx.r1.u32 + 145, ctx.r31.u8);
	// stb r31,146(r1)
	PPC_STORE_U8(ctx.r1.u32 + 146, ctx.r31.u8);
	// stb r31,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r31.u8);
	// stb r31,147(r1)
	PPC_STORE_U8(ctx.r1.u32 + 147, ctx.r31.u8);
	// stb r31,211(r1)
	PPC_STORE_U8(ctx.r1.u32 + 211, ctx.r31.u8);
	// stw r23,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r23.u32);
	// stw r25,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r25.u32);
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// stb r11,200(r1)
	PPC_STORE_U8(ctx.r1.u32 + 200, ctx.r11.u8);
	// stw r23,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r23.u32);
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stb r11,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r11.u8);
	// stw r22,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r22.u32);
	// stw r22,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r22.u32);
	// beq cr6,0x82db21fc
	if (cr6.eq) goto loc_82DB21FC;
	// addi r24,r3,360
	ctx.r24.s64 = ctx.r3.s64 + 360;
loc_82DB2168:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82db0e40
	ctx.lr = 0x82DB217C;
	sub_82DB0E40(ctx, base);
	// lwz r10,364(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 364);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82db21a0
	if (cr6.eq) goto loc_82DB21A0;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82db1200
	ctx.lr = 0x82DB2198;
	sub_82DB1200(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82db21a4
	goto loc_82DB21A4;
loc_82DB21A0:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82DB21A4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82db21d4
	if (cr6.eq) goto loc_82DB21D4;
	// lwz r11,204(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// cmpw cr6,r11,r27
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, xer);
	// bne cr6,0x82db21d4
	if (!cr6.eq) goto loc_82DB21D4;
	// lbz r10,211(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 211);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82db21d4
	if (!cr6.eq) goto loc_82DB21D4;
	// lbz r10,208(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 208);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82db21e4
	if (cr6.eq) goto loc_82DB21E4;
loc_82DB21D4:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r28,r26
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, xer);
	// blt cr6,0x82db2168
	if (cr6.lt) goto loc_82DB2168;
	// b 0x82db21f0
	goto loc_82DB21F0;
loc_82DB21E4:
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82db1200
	ctx.lr = 0x82DB21F0;
	sub_82DB1200(ctx, base);
loc_82DB21F0:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// bne cr6,0x82db2224
	if (!cr6.eq) goto loc_82DB2224;
loc_82DB21FC:
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// add r9,r27,r11
	ctx.r9.u64 = ctx.r27.u64 + ctx.r11.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r30,r11,32
	ctx.r30.s64 = ctx.r11.s64 + 32;
	// stw r25,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r25.u32);
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// stw r31,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r31.u32);
	// b 0x82db2248
	goto loc_82DB2248;
loc_82DB2224:
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r30,r11,32
	ctx.r30.s64 = ctx.r11.s64 + 32;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82db1f18
	ctx.lr = 0x82DB2248;
	sub_82DB1F18(ctx, base);
loc_82DB2248:
	// bl 0x831156e8
	ctx.lr = 0x82DB224C;
	sub_831156E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82db22b4
	if (cr6.eq) goto loc_82DB22B4;
	// bl 0x831156e8
	ctx.lr = 0x82DB2258;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82db2278
	if (cr6.eq) goto loc_82DB2278;
	// bl 0x83115808
	ctx.lr = 0x82DB2268;
	sub_83115808(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82db227c
	if (!cr6.eq) goto loc_82DB227C;
loc_82DB2278:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82DB227C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82db22b4
	if (!cr6.eq) goto loc_82DB22B4;
	// bl 0x831156e8
	ctx.lr = 0x82DB228C;
	sub_831156E8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addis r10,r10,222
	ctx.r10.s64 = ctx.r10.s64 + 14548992;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(ctx.r11.u32, 24, xer);
	// addi r10,r10,-12208
	ctx.r10.s64 = ctx.r10.s64 + -12208;
	// blt cr6,0x82db22ac
	if (cr6.lt) goto loc_82DB22AC;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82DB22AC:
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// stb r11,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r11.u8);
loc_82DB22B4:
	// add r11,r27,r29
	ctx.r11.u64 = ctx.r27.u64 + ctx.r29.u64;
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r9,1
	ctx.r9.s64 = 1;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stb r9,376(r11)
	PPC_STORE_U8(ctx.r11.u32 + 376, ctx.r9.u8);
	// blt cr6,0x82db22dc
	if (cr6.lt) goto loc_82DB22DC;
	// stw r22,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r22.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// bl 0x825952b8
	ctx.lr = 0x82DB22DC;
	sub_825952B8(ctx, base);
loc_82DB22DC:
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// stw r23,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r23.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r31.u8);
	// blt cr6,0x82db2304
	if (cr6.lt) goto loc_82DB2304;
	// stw r22,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r22.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,172(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// bl 0x825952b8
	ctx.lr = 0x82DB2304;
	sub_825952B8(ctx, base);
loc_82DB2304:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB230C"))) PPC_WEAK_FUNC(sub_82DB230C);
PPC_FUNC_IMPL(__imp__sub_82DB230C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB2310"))) PPC_WEAK_FUNC(sub_82DB2310);
PPC_FUNC_IMPL(__imp__sub_82DB2310) {
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
	// bl 0x82db1878
	ctx.lr = 0x82DB2330;
	sub_82DB1878(ctx, base);
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

__attribute__((alias("__imp__sub_82DB2364"))) PPC_WEAK_FUNC(sub_82DB2364);
PPC_FUNC_IMPL(__imp__sub_82DB2364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB2368"))) PPC_WEAK_FUNC(sub_82DB2368);
PPC_FUNC_IMPL(__imp__sub_82DB2368) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82DB2370;
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
	// bne cr6,0x82db23bc
	if (!cr6.eq) goto loc_82DB23BC;
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, xer);
	// bne cr6,0x82db23bc
	if (!cr6.eq) goto loc_82DB23BC;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82db2310
	ctx.lr = 0x82DB23A4;
	sub_82DB2310(ctx, base);
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
loc_82DB23BC:
	// cmplw cr6,r5,r30
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r30.u32, xer);
	// beq cr6,0x82db23ec
	if (cr6.eq) goto loc_82DB23EC;
loc_82DB23C4:
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x8387cd90
	ctx.lr = 0x82DB23D0;
	sub_8387CD90(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82db1910
	ctx.lr = 0x82DB23E0;
	sub_82DB1910(ctx, base);
	// lwz r5,164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplw cr6,r5,r30
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r30.u32, xer);
	// bne cr6,0x82db23c4
	if (!cr6.eq) goto loc_82DB23C4;
loc_82DB23EC:
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

__attribute__((alias("__imp__sub_82DB23FC"))) PPC_WEAK_FUNC(sub_82DB23FC);
PPC_FUNC_IMPL(__imp__sub_82DB23FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB2400"))) PPC_WEAK_FUNC(sub_82DB2400);
PPC_FUNC_IMPL(__imp__sub_82DB2400) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82DB2408;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,72
	ctx.r4.s64 = 72;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82DB242C;
	sub_82595718(ctx, base);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addic. r11,r3,12
	xer.ca = ctx.r3.u32 > 4294967283;
	ctx.r11.s64 = ctx.r3.s64 + 12;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// lwz r7,4(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// stb r10,68(r3)
	PPC_STORE_U8(ctx.r3.u32 + 68, ctx.r10.u8);
	// stb r10,69(r3)
	PPC_STORE_U8(ctx.r3.u32 + 69, ctx.r10.u8);
	// beq 0x82db2470
	if (cr0.eq) goto loc_82DB2470;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x82db0ec8
	ctx.lr = 0x82DB2470;
	sub_82DB0EC8(ctx, base);
loc_82DB2470:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB247C"))) PPC_WEAK_FUNC(sub_82DB247C);
PPC_FUNC_IMPL(__imp__sub_82DB247C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB2480"))) PPC_WEAK_FUNC(sub_82DB2480);
PPC_FUNC_IMPL(__imp__sub_82DB2480) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82DB2488;
	__savegprlr_22(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,368(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 368);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r26,15
	ctx.r26.s64 = 15;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// li r25,2
	ctx.r25.s64 = 2;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// stb r31,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r31.u8);
	// li r22,-1
	ctx.r22.s64 = -1;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// stb r9,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r9.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r25,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r25.u32);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r27,124
	ctx.r4.s64 = ctx.r27.s64 + 124;
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// stb r31,129(r1)
	PPC_STORE_U8(ctx.r1.u32 + 129, ctx.r31.u8);
	// stb r31,130(r1)
	PPC_STORE_U8(ctx.r1.u32 + 130, ctx.r31.u8);
	// stb r31,131(r1)
	PPC_STORE_U8(ctx.r1.u32 + 131, ctx.r31.u8);
	// bl 0x8259cb28
	ctx.lr = 0x82DB24F4;
	sub_8259CB28(ctx, base);
	// lwz r8,156(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 156);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lbz r6,152(r27)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r27.u32 + 152);
	// addi r3,r1,276
	ctx.r3.s64 = ctx.r1.s64 + 276;
	// lbz r5,164(r27)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r27.u32 + 164);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// stb r31,129(r1)
	PPC_STORE_U8(ctx.r1.u32 + 129, ctx.r31.u8);
	// stb r31,131(r1)
	PPC_STORE_U8(ctx.r1.u32 + 131, ctx.r31.u8);
	// stw r8,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// stw r7,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r7.u32);
	// stb r6,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r6.u8);
	// stb r5,130(r1)
	PPC_STORE_U8(ctx.r1.u32 + 130, ctx.r5.u8);
	// bl 0x82db0ec8
	ctx.lr = 0x82DB252C;
	sub_82DB0EC8(ctx, base);
	// addi r28,r23,360
	ctx.r28.s64 = ctx.r23.s64 + 360;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82db2400
	ctx.lr = 0x82DB253C;
	sub_82DB2400(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db1d10
	ctx.lr = 0x82DB2550;
	sub_82DB1D10(ctx, base);
	// lwz r4,308(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r4,16
	cr6.compare<uint32_t>(ctx.r4.u32, 16, xer);
	// blt cr6,0x82db256c
	if (cr6.lt) goto loc_82DB256C;
	// stw r25,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r25.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// lwz r4,288(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// bl 0x825952b8
	ctx.lr = 0x82DB256C;
	sub_825952B8(ctx, base);
loc_82DB256C:
	// stw r26,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r26.u32);
	// lis r4,505
	ctx.r4.s64 = 33095680;
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stb r31,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, ctx.r31.u8);
	// ori r4,r4,42
	ctx.r4.u64 = ctx.r4.u64 | 42;
	// stw r26,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r26.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r30,168(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 168);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x82d042a8
	ctx.lr = 0x82DB25A0;
	sub_82D042A8(ctx, base);
	// lwz r10,172(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 172);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// beq cr6,0x82db26d0
	if (cr6.eq) goto loc_82DB26D0;
	// addi r29,r30,44
	ctx.r29.s64 = ctx.r30.s64 + 44;
	// li r24,1
	ctx.r24.s64 = 1;
loc_82DB25B4:
	// lwz r11,368(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 368);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r29,-44
	ctx.r4.s64 = ctx.r29.s64 + -44;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8259cb28
	ctx.lr = 0x82DB25D0;
	sub_8259CB28(ctx, base);
	// bl 0x82dd3a30
	ctx.lr = 0x82DB25D4;
	sub_82DD3A30(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82db2600
	if (cr6.eq) goto loc_82DB2600;
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82db2600
	if (cr6.eq) goto loc_82DB2600;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x8259cb28
	ctx.lr = 0x82DB2600;
	sub_8259CB28(ctx, base);
loc_82DB2600:
	// lwz r11,-16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,212
	ctx.r3.s64 = ctx.r1.s64 + 212;
	// stb r24,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r24.u8);
	// stb r11,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r11.u8);
	// lbz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// stb r8,129(r1)
	PPC_STORE_U8(ctx.r1.u32 + 129, ctx.r8.u8);
	// stb r31,130(r1)
	PPC_STORE_U8(ctx.r1.u32 + 130, ctx.r31.u8);
	// stw r10,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r10.u32);
	// bl 0x82db0ec8
	ctx.lr = 0x82DB262C;
	sub_82DB0EC8(ctx, base);
	// stw r25,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r25.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,72
	ctx.r4.s64 = 72;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// bl 0x82595718
	ctx.lr = 0x82DB2640;
	sub_82595718(ctx, base);
	// lwz r7,4(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addic. r11,r3,12
	xer.ca = ctx.r3.u32 > 4294967283;
	ctx.r11.s64 = ctx.r3.s64 + 12;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// lwz r6,4(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// stb r31,68(r3)
	PPC_STORE_U8(ctx.r3.u32 + 68, ctx.r31.u8);
	// stb r31,69(r3)
	PPC_STORE_U8(ctx.r3.u32 + 69, ctx.r31.u8);
	// beq 0x82db2680
	if (cr0.eq) goto loc_82DB2680;
	// lwz r10,208(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// addi r4,r1,212
	ctx.r4.s64 = ctx.r1.s64 + 212;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x82db0ec8
	ctx.lr = 0x82DB2680;
	sub_82DB0EC8(ctx, base);
loc_82DB2680:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82db1d10
	ctx.lr = 0x82DB2694;
	sub_82DB1D10(ctx, base);
	// lwz r11,244(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82db26b0
	if (cr6.lt) goto loc_82DB26B0;
	// stw r25,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r25.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x825952b8
	ctx.lr = 0x82DB26B0;
	sub_825952B8(ctx, base);
loc_82DB26B0:
	// addi r29,r29,48
	ctx.r29.s64 = ctx.r29.s64 + 48;
	// lwz r11,172(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 172);
	// stw r26,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r26.u32);
	// addi r10,r29,-44
	ctx.r10.s64 = ctx.r29.s64 + -44;
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// stb r31,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r31.u8);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bne cr6,0x82db25b4
	if (!cr6.eq) goto loc_82DB25B4;
loc_82DB26D0:
	// lwz r11,180(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82db26ec
	if (cr6.lt) goto loc_82DB26EC;
	// stw r25,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r25.u32);
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x825952b8
	ctx.lr = 0x82DB26EC;
	sub_825952B8(ctx, base);
loc_82DB26EC:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r26,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r26.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r31.u8);
	// blt cr6,0x82db2714
	if (cr6.lt) goto loc_82DB2714;
	// stw r25,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r25.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x825952b8
	ctx.lr = 0x82DB2714;
	sub_825952B8(ctx, base);
loc_82DB2714:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB271C"))) PPC_WEAK_FUNC(sub_82DB271C);
PPC_FUNC_IMPL(__imp__sub_82DB271C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB2720"))) PPC_WEAK_FUNC(sub_82DB2720);
PPC_FUNC_IMPL(__imp__sub_82DB2720) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82DB2728;
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
	// beq cr6,0x82db2880
	if (cr6.eq) goto loc_82DB2880;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r29,48
	ctx.r29.s64 = 48;
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// subf r11,r3,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r3.s64;
	// divw. r9,r11,r29
	ctx.r9.s32 = PPCDivide(ctx.r11.s32, ctx.r29.s32);
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82db2768
	if (!cr0.eq) goto loc_82DB2768;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b6ad88
	ctx.lr = 0x82DB275C;
	sub_82B6AD88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82DB2768:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r10,r11,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r11.s64;
	// divw r10,r10,r29
	ctx.r10.s32 = PPCDivide(ctx.r10.s32, ctx.r29.s32);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82db27d4
	if (cr6.gt) goto loc_82DB27D4;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// bl 0x82b69c70
	ctx.lr = 0x82DB2790;
	sub_82B69C70(ctx, base);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82ca39a0
	ctx.lr = 0x82DB27A0;
	sub_82CA39A0(ctx, base);
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
loc_82DB27D4:
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r7,r11,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r11.s64;
	// divw r6,r7,r29
	ctx.r6.s32 = PPCDivide(ctx.r7.s32, ctx.r29.s32);
	// cmplw cr6,r9,r6
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, xer);
	// bgt cr6,0x82db2814
	if (cr6.gt) goto loc_82DB2814;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r11,r3
	ctx.r29.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82b69c70
	ctx.lr = 0x82DB2808;
	sub_82B69C70(ctx, base);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82db286c
	goto loc_82DB286C;
loc_82DB2814:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82db2840
	if (cr6.eq) goto loc_82DB2840;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82ca39a0
	ctx.lr = 0x82DB282C;
	sub_82CA39A0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82DB2840;
	sub_825952B8(ctx, base);
loc_82DB2840:
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
	// bl 0x82c5bbb8
	ctx.lr = 0x82DB2858;
	sub_82C5BBB8(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82db2880
	if (cr6.eq) goto loc_82DB2880;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82DB286C:
	// addi r6,r31,12
	ctx.r6.s64 = ctx.r31.s64 + 12;
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82db1e80
	ctx.lr = 0x82DB287C;
	sub_82DB1E80(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
loc_82DB2880:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB288C"))) PPC_WEAK_FUNC(sub_82DB288C);
PPC_FUNC_IMPL(__imp__sub_82DB288C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB2890"))) PPC_WEAK_FUNC(sub_82DB2890);
PPC_FUNC_IMPL(__imp__sub_82DB2890) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82DB2898;
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
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82dadf80
	ctx.lr = 0x82DB28B8;
	sub_82DADF80(ctx, base);
	// ld r10,88(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 88);
	// li r29,-1
	ctx.r29.s64 = -1;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// std r10,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.r10.u64);
	// addi r4,r30,96
	ctx.r4.s64 = ctx.r30.s64 + 96;
	// bl 0x8259cb28
	ctx.lr = 0x82DB28D8;
	sub_8259CB28(ctx, base);
	// addi r3,r31,124
	ctx.r3.s64 = ctx.r31.s64 + 124;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,124
	ctx.r4.s64 = ctx.r30.s64 + 124;
	// bl 0x8259cb28
	ctx.lr = 0x82DB28EC;
	sub_8259CB28(ctx, base);
	// lbz r9,152(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 152);
	// addi r3,r31,168
	ctx.r3.s64 = ctx.r31.s64 + 168;
	// addi r4,r30,168
	ctx.r4.s64 = ctx.r30.s64 + 168;
	// stb r9,152(r31)
	PPC_STORE_U8(ctx.r31.u32 + 152, ctx.r9.u8);
	// lbz r8,153(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 153);
	// stb r8,153(r31)
	PPC_STORE_U8(ctx.r31.u32 + 153, ctx.r8.u8);
	// lwz r7,156(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// stw r7,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r7.u32);
	// lwz r6,160(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// stw r6,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r6.u32);
	// lbz r5,164(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 164);
	// stb r5,164(r31)
	PPC_STORE_U8(ctx.r31.u32 + 164, ctx.r5.u8);
	// lbz r11,165(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 165);
	// stb r11,165(r31)
	PPC_STORE_U8(ctx.r31.u32 + 165, ctx.r11.u8);
	// bl 0x82db2720
	ctx.lr = 0x82DB2928;
	sub_82DB2720(ctx, base);
	// addi r3,r31,184
	ctx.r3.s64 = ctx.r31.s64 + 184;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,184
	ctx.r4.s64 = ctx.r30.s64 + 184;
	// bl 0x8259cb28
	ctx.lr = 0x82DB293C;
	sub_8259CB28(ctx, base);
	// addi r3,r31,212
	ctx.r3.s64 = ctx.r31.s64 + 212;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,212
	ctx.r4.s64 = ctx.r30.s64 + 212;
	// bl 0x8259cb28
	ctx.lr = 0x82DB2950;
	sub_8259CB28(ctx, base);
	// addi r3,r31,240
	ctx.r3.s64 = ctx.r31.s64 + 240;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,240
	ctx.r4.s64 = ctx.r30.s64 + 240;
	// bl 0x8259cb28
	ctx.lr = 0x82DB2964;
	sub_8259CB28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB2970"))) PPC_WEAK_FUNC(sub_82DB2970);
PPC_FUNC_IMPL(__imp__sub_82DB2970) {
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
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r4,r3,344
	ctx.r4.s64 = ctx.r3.s64 + 344;
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82db0db8
	ctx.lr = 0x82DB29A0;
	sub_82DB0DB8(ctx, base);
	// lwz r10,348(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82db29c4
	if (cr6.eq) goto loc_82DB29C4;
	// addi r4,r11,24
	ctx.r4.s64 = ctx.r11.s64 + 24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82db2890
	ctx.lr = 0x82DB29BC;
	sub_82DB2890(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82db29c8
	goto loc_82DB29C8;
loc_82DB29C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DB29C8:
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

__attribute__((alias("__imp__sub_82DB29E0"))) PPC_WEAK_FUNC(sub_82DB29E0);
PPC_FUNC_IMPL(__imp__sub_82DB29E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82DB29E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,348(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 348);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82db2a2c
	if (cr6.eq) goto loc_82DB2A2C;
loc_82DB2A08:
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addi r4,r11,24
	ctx.r4.s64 = ctx.r11.s64 + 24;
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, xer);
	// beq cr6,0x82db2a38
	if (cr6.eq) goto loc_82DB2A38;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c5ba08
	ctx.lr = 0x82DB2A20;
	sub_82C5BA08(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// bne cr6,0x82db2a08
	if (!cr6.eq) goto loc_82DB2A08;
loc_82DB2A2C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82DB2A38:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82db2890
	ctx.lr = 0x82DB2A40;
	sub_82DB2890(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB2A4C"))) PPC_WEAK_FUNC(sub_82DB2A4C);
PPC_FUNC_IMPL(__imp__sub_82DB2A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB2A50"))) PPC_WEAK_FUNC(sub_82DB2A50);
PPC_FUNC_IMPL(__imp__sub_82DB2A50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82DB2A58;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,234
	ctx.r10.s64 = 15335424;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// ori r9,r10,3743
	ctx.r9.u64 = ctx.r10.u64 | 3743;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x82db2aa4
	if (cr6.lt) goto loc_82DB2AA4;
	// addi r3,r7,24
	ctx.r3.s64 = ctx.r7.s64 + 24;
	// bl 0x82b6a860
	ctx.lr = 0x82DB2A84;
	sub_82B6A860(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x82DB2A98;
	sub_825952B8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r10,12808
	ctx.r3.s64 = ctx.r10.s64 + 12808;
	// bl 0x831cc150
	ctx.lr = 0x82DB2AA4;
	sub_831CC150(ctx, base);
loc_82DB2AA4:
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
	// bne cr6,0x82db2ad4
	if (!cr6.eq) goto loc_82DB2AD4;
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
	// b 0x82db2b14
	goto loc_82DB2B14;
loc_82DB2AD4:
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82db2afc
	if (cr6.eq) goto loc_82DB2AFC;
	// stw r27,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r27.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// bne cr6,0x82db2b14
	if (!cr6.eq) goto loc_82DB2B14;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// b 0x82db2b14
	goto loc_82DB2B14;
loc_82DB2AFC:
	// stw r27,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r27.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// bne cr6,0x82db2b14
	if (!cr6.eq) goto loc_82DB2B14;
	// stw r27,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r27.u32);
loc_82DB2B14:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// lbz r10,296(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 296);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82db2c38
	if (!cr6.eq) goto loc_82DB2C38;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82DB2B30:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bne cr6,0x82db2bb8
	if (!cr6.eq) goto loc_82DB2BB8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r10,296(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 296);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82db2b78
	if (!cr6.eq) goto loc_82DB2B78;
	// rotlwi r10,r4,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stb r29,296(r10)
	PPC_STORE_U8(ctx.r10.u32 + 296, ctx.r29.u8);
	// stb r29,296(r11)
	PPC_STORE_U8(ctx.r11.u32 + 296, ctx.r29.u8);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r28,296(r8)
	PPC_STORE_U8(ctx.r8.u32 + 296, ctx.r28.u8);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r31,4(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// b 0x82db2c28
	goto loc_82DB2C28;
loc_82DB2B78:
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x82db2b90
	if (!cr6.eq) goto loc_82DB2B90;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82c5ba98
	ctx.lr = 0x82DB2B90;
	sub_82C5BA98(ctx, base);
loc_82DB2B90:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r29,296(r11)
	PPC_STORE_U8(ctx.r11.u32 + 296, ctx.r29.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r28,296(r9)
	PPC_STORE_U8(ctx.r9.u32 + 296, ctx.r28.u8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x82c5bb10
	ctx.lr = 0x82DB2BB4;
	sub_82C5BB10(ctx, base);
	// b 0x82db2c28
	goto loc_82DB2C28;
loc_82DB2BB8:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,296(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 296);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82db2bec
	if (!cr6.eq) goto loc_82DB2BEC;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r29,296(r10)
	PPC_STORE_U8(ctx.r10.u32 + 296, ctx.r29.u8);
	// stb r29,296(r11)
	PPC_STORE_U8(ctx.r11.u32 + 296, ctx.r29.u8);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r28,296(r8)
	PPC_STORE_U8(ctx.r8.u32 + 296, ctx.r28.u8);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r31,4(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// b 0x82db2c28
	goto loc_82DB2C28;
loc_82DB2BEC:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x82db2c04
	if (!cr6.eq) goto loc_82DB2C04;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82c5bb10
	ctx.lr = 0x82DB2C04;
	sub_82C5BB10(ctx, base);
loc_82DB2C04:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r29,296(r11)
	PPC_STORE_U8(ctx.r11.u32 + 296, ctx.r29.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r28,296(r9)
	PPC_STORE_U8(ctx.r9.u32 + 296, ctx.r28.u8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x82c5ba98
	ctx.lr = 0x82DB2C28;
	sub_82C5BA98(ctx, base);
loc_82DB2C28:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r10,296(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 296);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82db2b30
	if (cr6.eq) goto loc_82DB2B30;
loc_82DB2C38:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r27,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r27.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stb r29,296(r10)
	PPC_STORE_U8(ctx.r10.u32 + 296, ctx.r29.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB2C54"))) PPC_WEAK_FUNC(sub_82DB2C54);
PPC_FUNC_IMPL(__imp__sub_82DB2C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB2C58"))) PPC_WEAK_FUNC(sub_82DB2C58);
PPC_FUNC_IMPL(__imp__sub_82DB2C58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82DB2C60;
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
	// lbz r10,297(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 297);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82db2ce4
	if (!cr6.eq) goto loc_82DB2CE4;
	// lwz r9,16(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// clrlwi r7,r6,24
	ctx.r7.u64 = ctx.r6.u32 & 0xFF;
	// li r8,-1
	ctx.r8.s64 = -1;
loc_82DB2C98:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82db2cb4
	if (cr6.eq) goto loc_82DB2CB4;
	// subfc r10,r9,r10
	xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subfze r31,r8
	temp.u8 = ~ctx.r8.u32 + xer.ca < xer.ca;
	ctx.r31.u64 = ~ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x82db2cc0
	goto loc_82DB2CC0;
loc_82DB2CB4:
	// subfc r6,r10,r9
	xer.ca = ctx.r9.u32 >= ctx.r10.u32;
	ctx.r6.s64 = ctx.r9.s64 - ctx.r10.s64;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r31,r4,31
	ctx.r31.u64 = ctx.r4.u32 & 0x1;
loc_82DB2CC0:
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82db2cd4
	if (cr6.eq) goto loc_82DB2CD4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82db2cd8
	goto loc_82DB2CD8;
loc_82DB2CD4:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_82DB2CD8:
	// lbz r10,297(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 297);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82db2c98
	if (cr6.eq) goto loc_82DB2C98;
loc_82DB2CE4:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82db2d44
	if (cr6.eq) goto loc_82DB2D44;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// bne cr6,0x82db2d3c
	if (!cr6.eq) goto loc_82DB2D3C;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82db2a50
	ctx.lr = 0x82DB2D20;
	sub_82DB2A50(ctx, base);
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
loc_82DB2D3C:
	// bl 0x82db0ad0
	ctx.lr = 0x82DB2D40;
	sub_82DB0AD0(ctx, base);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82DB2D44:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r10,16(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82db2d88
	if (!cr6.lt) goto loc_82DB2D88;
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
	// bl 0x82db2a50
	ctx.lr = 0x82DB2D6C;
	sub_82DB2A50(ctx, base);
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
loc_82DB2D88:
	// addi r3,r27,24
	ctx.r3.s64 = ctx.r27.s64 + 24;
	// bl 0x82b6a860
	ctx.lr = 0x82DB2D90;
	sub_82B6A860(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x82DB2DA4;
	sub_825952B8(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r10,4(r28)
	PPC_STORE_U8(ctx.r28.u32 + 4, ctx.r10.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB2DBC"))) PPC_WEAK_FUNC(sub_82DB2DBC);
PPC_FUNC_IMPL(__imp__sub_82DB2DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB2DC0"))) PPC_WEAK_FUNC(sub_82DB2DC0);
PPC_FUNC_IMPL(__imp__sub_82DB2DC0) {
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
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// addi r30,r3,344
	ctx.r30.s64 = ctx.r3.s64 + 344;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82db0db8
	ctx.lr = 0x82DB2DF0;
	sub_82DB0DB8(ctx, base);
	// lwz r11,348(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, xer);
	// beq cr6,0x82db2e24
	if (cr6.eq) goto loc_82DB2E24;
	// lwz r11,368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82db2e18
	if (cr6.eq) goto loc_82DB2E18;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,189(r5)
	PPC_STORE_U8(ctx.r5.u32 + 189, ctx.r11.u8);
	// b 0x82db2e24
	goto loc_82DB2E24;
loc_82DB2E18:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c5ccb0
	ctx.lr = 0x82DB2E24;
	sub_82C5CCB0(ctx, base);
loc_82DB2E24:
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

__attribute__((alias("__imp__sub_82DB2E3C"))) PPC_WEAK_FUNC(sub_82DB2E3C);
PPC_FUNC_IMPL(__imp__sub_82DB2E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB2E40"))) PPC_WEAK_FUNC(sub_82DB2E40);
PPC_FUNC_IMPL(__imp__sub_82DB2E40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad0
	ctx.lr = 0x82DB2E48;
	__savegprlr_22(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// bl 0x82db2dc0
	ctx.lr = 0x82DB2E58;
	sub_82DB2DC0(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r23,1
	ctx.r23.s64 = 1;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// lwz r29,368(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 368);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82db2eb8
	if (cr6.eq) goto loc_82DB2EB8;
	// addi r28,r27,360
	ctx.r28.s64 = ctx.r27.s64 + 360;
loc_82DB2E78:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82db0e40
	ctx.lr = 0x82DB2E88;
	sub_82DB0E40(ctx, base);
	// lwz r10,364(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 364);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82db2ea8
	if (cr6.eq) goto loc_82DB2EA8;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r10,r22
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r22.u32, xer);
	// bne cr6,0x82db2ea8
	if (!cr6.eq) goto loc_82DB2EA8;
	// stb r23,67(r11)
	PPC_STORE_U8(ctx.r11.u32 + 67, ctx.r23.u8);
loc_82DB2EA8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// blt cr6,0x82db2e78
	if (cr6.lt) goto loc_82DB2E78;
loc_82DB2EB8:
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// li r25,-1
	ctx.r25.s64 = -1;
	// cmplw cr6,r22,r11
	cr6.compare<uint32_t>(ctx.r22.u32, ctx.r11.u32, xer);
	// bne cr6,0x82db3058
	if (!cr6.eq) goto loc_82DB3058;
	// lwz r11,28(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82db2ee4
	if (cr6.eq) goto loc_82DB2EE4;
	// lwz r10,16(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// bne cr6,0x82db2ee8
	if (!cr6.eq) goto loc_82DB2EE8;
loc_82DB2EE4:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82DB2EE8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82db3058
	if (!cr6.eq) goto loc_82DB3058;
	// lwz r29,368(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 368);
	// li r10,24
	ctx.r10.s64 = 24;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// li r28,2
	ctx.r28.s64 = 2;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// li r24,15
	ctx.r24.s64 = 15;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// stb r31,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r31.u8);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// stb r11,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r11.u8);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// stw r28,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r28.u32);
	// stb r31,145(r1)
	PPC_STORE_U8(ctx.r1.u32 + 145, ctx.r31.u8);
	// stb r31,146(r1)
	PPC_STORE_U8(ctx.r1.u32 + 146, ctx.r31.u8);
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// stw r25,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r25.u32);
	// stw r31,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r31.u32);
	// stb r31,172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 172, ctx.r31.u8);
	// stb r11,200(r1)
	PPC_STORE_U8(ctx.r1.u32 + 200, ctx.r11.u8);
	// stw r28,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r28.u32);
	// stb r31,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r31.u8);
	// stb r31,209(r1)
	PPC_STORE_U8(ctx.r1.u32 + 209, ctx.r31.u8);
	// stw r24,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r24.u32);
	// stb r31,210(r1)
	PPC_STORE_U8(ctx.r1.u32 + 210, ctx.r31.u8);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// stb r31,211(r1)
	PPC_STORE_U8(ctx.r1.u32 + 211, ctx.r31.u8);
	// stb r31,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r31.u8);
	// stb r31,147(r1)
	PPC_STORE_U8(ctx.r1.u32 + 147, ctx.r31.u8);
	// stw r24,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r24.u32);
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// beq cr6,0x82db3000
	if (cr6.eq) goto loc_82DB3000;
	// addi r26,r27,360
	ctx.r26.s64 = ctx.r27.s64 + 360;
loc_82DB2F78:
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82db0e40
	ctx.lr = 0x82DB2F8C;
	sub_82DB0E40(ctx, base);
	// lwz r10,364(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 364);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82db2fb0
	if (cr6.eq) goto loc_82DB2FB0;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82db1200
	ctx.lr = 0x82DB2FA8;
	sub_82DB1200(ctx, base);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// b 0x82db2fb4
	goto loc_82DB2FB4;
loc_82DB2FB0:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82DB2FB4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82db2fe4
	if (cr6.eq) goto loc_82DB2FE4;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82db2fe4
	if (cr6.eq) goto loc_82DB2FE4;
	// lbz r10,147(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 147);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82db2fe4
	if (!cr6.eq) goto loc_82DB2FE4;
	// lbz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 144);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82db2ff4
	if (cr6.eq) goto loc_82DB2FF4;
loc_82DB2FE4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, xer);
	// blt cr6,0x82db2f78
	if (cr6.lt) goto loc_82DB2F78;
	// b 0x82db3000
	goto loc_82DB3000;
loc_82DB2FF4:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82db1200
	ctx.lr = 0x82DB3000;
	sub_82DB1200(ctx, base);
loc_82DB3000:
	// lwz r11,168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r10,192(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stw r11,28(r27)
	PPC_STORE_U32(ctx.r27.u32 + 28, ctx.r11.u32);
	// blt cr6,0x82db3024
	if (cr6.lt) goto loc_82DB3024;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,172(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// bl 0x825952b8
	ctx.lr = 0x82DB3024;
	sub_825952B8(ctx, base);
loc_82DB3024:
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r24,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r24.u32);
	// stw r31,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r31.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r31,172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 172, ctx.r31.u8);
	// blt cr6,0x82db304c
	if (cr6.lt) goto loc_82DB304C;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// bl 0x825952b8
	ctx.lr = 0x82DB304C;
	sub_825952B8(ctx, base);
loc_82DB304C:
	// stw r24,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r24.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// stb r31,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r31.u8);
loc_82DB3058:
	// addi r30,r27,36
	ctx.r30.s64 = ctx.r27.s64 + 36;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// bge cr6,0x82db306c
	if (!cr6.lt) goto loc_82DB306C;
loc_82DB3064:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82db3070
	goto loc_82DB3070;
loc_82DB306C:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82DB3070:
	// cmplw cr6,r22,r11
	cr6.compare<uint32_t>(ctx.r22.u32, ctx.r11.u32, xer);
	// bne cr6,0x82db3084
	if (!cr6.eq) goto loc_82DB3084;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82db20c8
	ctx.lr = 0x82DB3084;
	sub_82DB20C8(ctx, base);
loc_82DB3084:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmpwi cr6,r31,2
	cr6.compare<int32_t>(ctx.r31.s32, 2, xer);
	// blt cr6,0x82db3064
	if (cr6.lt) goto loc_82DB3064;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831cdb20
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB309C"))) PPC_WEAK_FUNC(sub_82DB309C);
PPC_FUNC_IMPL(__imp__sub_82DB309C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB30A0"))) PPC_WEAK_FUNC(sub_82DB30A0);
PPC_FUNC_IMPL(__imp__sub_82DB30A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82DB30A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,304
	ctx.r4.s64 = 304;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82DB30CC;
	sub_82595718(ctx, base);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addic. r11,r3,16
	xer.ca = ctx.r3.u32 > 4294967279;
	ctx.r11.s64 = ctx.r3.s64 + 16;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// lwz r7,4(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// stb r10,296(r3)
	PPC_STORE_U8(ctx.r3.u32 + 296, ctx.r10.u8);
	// stb r10,297(r3)
	PPC_STORE_U8(ctx.r3.u32 + 297, ctx.r10.u8);
	// beq 0x82db3110
	if (cr0.eq) goto loc_82DB3110;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x82c5cb88
	ctx.lr = 0x82DB3110;
	sub_82C5CB88(ctx, base);
loc_82DB3110:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB311C"))) PPC_WEAK_FUNC(sub_82DB311C);
PPC_FUNC_IMPL(__imp__sub_82DB311C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB3120"))) PPC_WEAK_FUNC(sub_82DB3120);
PPC_FUNC_IMPL(__imp__sub_82DB3120) {
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
	// li r11,2
	ctx.r11.s64 = 2;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r8,24
	ctx.r8.s64 = 24;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// addi r7,r3,376
	ctx.r7.s64 = ctx.r3.s64 + 376;
	// addi r11,r3,28
	ctx.r11.s64 = ctx.r3.s64 + 28;
loc_82DB3164:
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stwu r30,12(r11)
	ea = 12 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r11.u32 = ea;
	// stbx r30,r7,r9
	PPC_STORE_U8(ctx.r7.u32 + ctx.r9.u32, ctx.r30.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x82db3164
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82DB3164;
	// stw r8,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r8.u32);
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// bl 0x82b6aee0
	ctx.lr = 0x82DB3190;
	sub_82B6AEE0(ctx, base);
	// lwz r11,348(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82c5d088
	ctx.lr = 0x82DB31A0;
	sub_82C5D088(ctx, base);
	// lwz r10,348(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// addi r3,r31,360
	ctx.r3.s64 = ctx.r31.s64 + 360;
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r9,348(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// stw r9,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r9.u32);
	// lwz r8,348(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// stw r8,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r8.u32);
	// stw r30,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r30.u32);
	// lwz r7,364(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// lwz r4,4(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// bl 0x82db1878
	ctx.lr = 0x82DB31CC;
	sub_82DB1878(ctx, base);
	// lwz r6,364(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// stw r6,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r6.u32);
	// lwz r5,364(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// stw r5,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r5.u32);
	// lwz r4,364(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// stw r4,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r4.u32);
	// stw r30,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82DB3200"))) PPC_WEAK_FUNC(sub_82DB3200);
PPC_FUNC_IMPL(__imp__sub_82DB3200) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x82db30a0
	ctx.lr = 0x82DB3228;
	sub_82DB30A0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82db2c58
	ctx.lr = 0x82DB323C;
	sub_82DB2C58(ctx, base);
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

__attribute__((alias("__imp__sub_82DB3258"))) PPC_WEAK_FUNC(sub_82DB3258);
PPC_FUNC_IMPL(__imp__sub_82DB3258) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82DB3260;
	__savegprlr_28(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,368(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 368);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r4,444(r1)
	PPC_STORE_U32(ctx.r1.u32 + 444, ctx.r4.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82db32dc
	if (!cr6.eq) goto loc_82DB32DC;
	// addi r30,r3,344
	ctx.r30.s64 = ctx.r3.s64 + 344;
	// addi r5,r1,444
	ctx.r5.s64 = ctx.r1.s64 + 444;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82db0db8
	ctx.lr = 0x82DB3294;
	sub_82DB0DB8(ctx, base);
	// lwz r10,348(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82db32d4
	if (!cr6.eq) goto loc_82DB32D4;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82c5cb88
	ctx.lr = 0x82DB32B4;
	sub_82C5CB88(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82db3200
	ctx.lr = 0x82DB32C4;
	sub_82DB3200(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82b6a860
	ctx.lr = 0x82DB32CC;
	sub_82B6A860(ctx, base);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82DB32D4:
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x82db2890
	ctx.lr = 0x82DB32DC;
	sub_82DB2890(ctx, base);
loc_82DB32DC:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB32E4"))) PPC_WEAK_FUNC(sub_82DB32E4);
PPC_FUNC_IMPL(__imp__sub_82DB32E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB32E8"))) PPC_WEAK_FUNC(sub_82DB32E8);
PPC_FUNC_IMPL(__imp__sub_82DB32E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82DB32F0;
	__savegprlr_24(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r24,r3,72
	ctx.r24.s64 = ctx.r3.s64 + 72;
	// lwz r4,60(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// bl 0x82db3258
	ctx.lr = 0x82DB3308;
	sub_82DB3258(ctx, base);
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r28,r30,40
	ctx.r28.s64 = ctx.r30.s64 + 40;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
loc_82DB3314:
	// lwz r29,0(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82db3394
	if (cr6.eq) goto loc_82DB3394;
	// lwz r11,348(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 348);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// beq cr6,0x82db3384
	if (cr6.eq) goto loc_82DB3384;
loc_82DB3334:
	// lbz r11,189(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 189);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x82db335c
	if (cr6.eq) goto loc_82DB335C;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r5,r31,24
	ctx.r5.s64 = ctx.r31.s64 + 24;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, xer);
	// bne cr6,0x82db335c
	if (!cr6.eq) goto loc_82DB335C;
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, xer);
	// beq cr6,0x82db3378
	if (cr6.eq) goto loc_82DB3378;
loc_82DB335C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c5ba08
	ctx.lr = 0x82DB3364;
	sub_82C5BA08(ctx, base);
	// lwz r11,348(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 348);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x82db3334
	if (!cr6.eq) goto loc_82DB3334;
	// b 0x82db3384
	goto loc_82DB3384;
loc_82DB3378:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82db2480
	ctx.lr = 0x82DB3384;
	sub_82DB2480(ctx, base);
loc_82DB3384:
	// lwz r11,348(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 348);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x82db3394
	if (!cr6.eq) goto loc_82DB3394;
	// stw r25,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r25.u32);
loc_82DB3394:
	// lwz r10,348(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 348);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82db3404
	if (cr6.eq) goto loc_82DB3404;
loc_82DB33A8:
	// lbz r10,189(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 189);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x82db33ec
	if (cr6.eq) goto loc_82DB33EC;
	// lwz r10,180(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// cmplw cr6,r10,r27
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, xer);
	// bne cr6,0x82db33ec
	if (!cr6.eq) goto loc_82DB33EC;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r5,r11,24
	ctx.r5.s64 = ctx.r11.s64 + 24;
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x82db33ec
	if (cr6.eq) goto loc_82DB33EC;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82db33e0
	if (!cr6.eq) goto loc_82DB33E0;
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
loc_82DB33E0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82db2480
	ctx.lr = 0x82DB33EC;
	sub_82DB2480(ctx, base);
loc_82DB33EC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c5ba08
	ctx.lr = 0x82DB33F4;
	sub_82C5BA08(ctx, base);
	// lwz r10,348(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 348);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82db33a8
	if (!cr6.eq) goto loc_82DB33A8;
loc_82DB3404:
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82db341c
	if (cr6.eq) goto loc_82DB341C;
	// addi r5,r28,-8
	ctx.r5.s64 = ctx.r28.s64 + -8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82db1f18
	ctx.lr = 0x82DB341C;
	sub_82DB1F18(ctx, base);
loc_82DB341C:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,12
	ctx.r28.s64 = ctx.r28.s64 + 12;
	// cmplwi cr6,r27,2
	cr6.compare<uint32_t>(ctx.r27.u32, 2, xer);
	// blt cr6,0x82db3314
	if (cr6.lt) goto loc_82DB3314;
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r26,15
	ctx.r26.s64 = 15;
	// li r28,24
	ctx.r28.s64 = 24;
	// li r31,-1
	ctx.r31.s64 = -1;
	// li r29,4
	ctx.r29.s64 = 4;
	// li r27,2
	ctx.r27.s64 = 2;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82db34c0
	if (cr6.eq) goto loc_82DB34C0;
	// stw r26,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r26.u32);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// stw r28,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// stw r25,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r25.u32);
	// stw r25,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r25.u32);
	// stb r25,172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 172, ctx.r25.u8);
	// stb r29,200(r1)
	PPC_STORE_U8(ctx.r1.u32 + 200, ctx.r29.u8);
	// stw r27,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r27.u32);
	// stb r25,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r25.u8);
	// stb r25,209(r1)
	PPC_STORE_U8(ctx.r1.u32 + 209, ctx.r25.u8);
	// stb r25,210(r1)
	PPC_STORE_U8(ctx.r1.u32 + 210, ctx.r25.u8);
	// stb r25,211(r1)
	PPC_STORE_U8(ctx.r1.u32 + 211, ctx.r25.u8);
	// bl 0x82db1380
	ctx.lr = 0x82DB3488;
	sub_82DB1380(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82db3498
	if (!cr6.eq) goto loc_82DB3498;
	// stw r25,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r25.u32);
loc_82DB3498:
	// lwz r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82db34b4
	if (cr6.lt) goto loc_82DB34B4;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,172(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// bl 0x825952b8
	ctx.lr = 0x82DB34B4;
	sub_825952B8(ctx, base);
loc_82DB34B4:
	// stw r26,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r26.u32);
	// stw r25,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r25.u32);
	// stb r25,172(r1)
	PPC_STORE_U8(ctx.r1.u32 + 172, ctx.r25.u8);
loc_82DB34C0:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82db3574
	if (!cr6.eq) goto loc_82DB3574;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// addi r4,r30,360
	ctx.r4.s64 = ctx.r30.s64 + 360;
	// stw r25,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r25.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stb r25,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r25.u8);
	// stb r29,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r29.u8);
	// stw r27,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r27.u32);
	// stb r25,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r25.u8);
	// stb r25,145(r1)
	PPC_STORE_U8(ctx.r1.u32 + 145, ctx.r25.u8);
	// stb r25,146(r1)
	PPC_STORE_U8(ctx.r1.u32 + 146, ctx.r25.u8);
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// stb r25,147(r1)
	PPC_STORE_U8(ctx.r1.u32 + 147, ctx.r25.u8);
	// stw r25,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r25.u32);
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// bl 0x82db0e40
	ctx.lr = 0x82DB3510;
	sub_82DB0E40(ctx, base);
	// lwz r10,364(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 364);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82db3534
	if (cr6.eq) goto loc_82DB3534;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82db1200
	ctx.lr = 0x82DB352C;
	sub_82DB1200(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82db3538
	goto loc_82DB3538;
loc_82DB3534:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82DB3538:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82db354c
	if (cr6.eq) goto loc_82DB354C;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
loc_82DB354C:
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82db3568
	if (cr6.lt) goto loc_82DB3568;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// bl 0x825952b8
	ctx.lr = 0x82DB3568;
	sub_825952B8(ctx, base);
loc_82DB3568:
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// stw r25,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r25.u32);
	// stb r25,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r25.u8);
loc_82DB3574:
	// addi r5,r30,8
	ctx.r5.s64 = ctx.r30.s64 + 8;
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82db1f18
	ctx.lr = 0x82DB3584;
	sub_82DB1F18(ctx, base);
	// addi r5,r30,56
	ctx.r5.s64 = ctx.r30.s64 + 56;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// bl 0x82db1f18
	ctx.lr = 0x82DB3594;
	sub_82DB1F18(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82db14c8
	ctx.lr = 0x82DB359C;
	sub_82DB14C8(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB35A4"))) PPC_WEAK_FUNC(sub_82DB35A4);
PPC_FUNC_IMPL(__imp__sub_82DB35A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB35A8"))) PPC_WEAK_FUNC(sub_82DB35A8);
PPC_FUNC_IMPL(__imp__sub_82DB35A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82DB35B0;
	__savegprlr_24(ctx, base);
	// stwu r1,-560(r1)
	ea = -560 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,24
	ctx.r11.s64 = 24;
	// li r28,-1
	ctx.r28.s64 = -1;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r28,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r28.u32);
	// addi r26,r3,72
	ctx.r26.s64 = ctx.r3.s64 + 72;
	// stw r30,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r30.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// bl 0x82b6aee0
	ctx.lr = 0x82DB35E0;
	sub_82B6AEE0(ctx, base);
	// stw r24,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r24.u32);
	// bl 0x8353b230
	ctx.lr = 0x82DB35E8;
	sub_8353B230(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82DB35EC:
	// srw r10,r3,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r3.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82db3608
	if (!cr6.eq) goto loc_82DB3608;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// blt cr6,0x82db35ec
	if (cr6.lt) goto loc_82DB35EC;
loc_82DB3608:
	// stb r11,224(r31)
	PPC_STORE_U8(ctx.r31.u32 + 224, ctx.r11.u8);
	// bl 0x831156e8
	ctx.lr = 0x82DB3610;
	sub_831156E8(ctx, base);
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stb r30,236(r31)
	PPC_STORE_U8(ctx.r31.u32 + 236, ctx.r30.u8);
	// stb r9,225(r31)
	PPC_STORE_U8(ctx.r31.u32 + 225, ctx.r9.u8);
	// bl 0x82da8078
	ctx.lr = 0x82DB3624;
	sub_82DA8078(ctx, base);
	// stb r3,236(r31)
	PPC_STORE_U8(ctx.r31.u32 + 236, ctx.r3.u8);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_82DB362C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8310fab0
	ctx.lr = 0x82DB3634;
	sub_8310FAB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r10,232(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	// slw r9,r11,r29
	ctx.r9.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r29.u8 & 0x3F));
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stw r8,232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 232, ctx.r8.u32);
	// cmplwi cr6,r29,2
	cr6.compare<uint32_t>(ctx.r29.u32, 2, xer);
	// blt cr6,0x82db362c
	if (cr6.lt) goto loc_82DB362C;
	// bl 0x82e6e978
	ctx.lr = 0x82DB3658;
	sub_82E6E978(ctx, base);
	// li r25,2
	ctx.r25.s64 = 2;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82db3804
	if (cr6.eq) goto loc_82DB3804;
	// bl 0x82e6e978
	ctx.lr = 0x82DB3668;
	sub_82E6E978(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r29,8(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,48(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// bl 0x82e73938
	ctx.lr = 0x82DB3684;
	sub_82E73938(ctx, base);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r27,15
	ctx.r27.s64 = 15;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r29,8
	ctx.r4.s64 = ctx.r29.s64 + 8;
	// std r9,160(r31)
	PPC_STORE_U64(ctx.r31.u32 + 160, ctx.r9.u64);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82470e60
	ctx.lr = 0x82DB36B0;
	sub_82470E60(ctx, base);
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// bge cr6,0x82db36c4
	if (!cr6.lt) goto loc_82DB36C4;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_82DB36C4:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82DB36C8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82db36c8
	if (!cr6.eq) goto loc_82DB36C8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,196
	ctx.r3.s64 = ctx.r31.s64 + 196;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82DB36EC;
	sub_8259CC28(ctx, base);
	// bl 0x830ff290
	ctx.lr = 0x82DB36F0;
	sub_830FF290(ctx, base);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82DB36F8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82db36f8
	if (!cr6.eq) goto loc_82DB36F8;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82DB371C;
	sub_8259CC28(ctx, base);
	// bl 0x82e6e978
	ctx.lr = 0x82DB3720;
	sub_82E6E978(ctx, base);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r27,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r27.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r30,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r30.u8);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,88
	ctx.r4.s64 = ctx.r11.s64 + 88;
	// bl 0x8259cb28
	ctx.lr = 0x82DB3744;
	sub_8259CB28(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r31,284
	ctx.r3.s64 = ctx.r31.s64 + 284;
	// bl 0x8259cb28
	ctx.lr = 0x82DB3758;
	sub_8259CB28(ctx, base);
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82db3774
	if (cr6.lt) goto loc_82DB3774;
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x825952b8
	ctx.lr = 0x82DB3774;
	sub_825952B8(ctx, base);
loc_82DB3774:
	// stw r27,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r27.u32);
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// stb r30,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r30.u8);
	// bl 0x82e6e978
	ctx.lr = 0x82DB3784;
	sub_82E6E978(ctx, base);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r27,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r27.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,116
	ctx.r4.s64 = ctx.r11.s64 + 116;
	// bl 0x8259cb28
	ctx.lr = 0x82DB37A8;
	sub_8259CB28(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r31,312
	ctx.r3.s64 = ctx.r31.s64 + 312;
	// bl 0x8259cb28
	ctx.lr = 0x82DB37BC;
	sub_8259CB28(ctx, base);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82db37d8
	if (cr6.lt) goto loc_82DB37D8;
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x825952b8
	ctx.lr = 0x82DB37D8;
	sub_825952B8(ctx, base);
loc_82DB37D8:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r27,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r27.u32);
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r30.u8);
	// blt cr6,0x82db37f8
	if (cr6.lt) goto loc_82DB37F8;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82416268
	ctx.lr = 0x82DB37F8;
	sub_82416268(ctx, base);
loc_82DB37F8:
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r30.u8);
loc_82DB3804:
	// lwz r11,368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r24.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82db38c8
	if (!cr6.eq) goto loc_82DB38C8;
	// addi r29,r31,344
	ctx.r29.s64 = ctx.r31.s64 + 344;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82db0db8
	ctx.lr = 0x82DB3828;
	sub_82DB0DB8(ctx, base);
	// lwz r10,348(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82db38c0
	if (!cr6.eq) goto loc_82DB38C0;
	// stw r24,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r24.u32);
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x82c5cb88
	ctx.lr = 0x82DB3848;
	sub_82C5CB88(ctx, base);
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,304
	ctx.r4.s64 = 304;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82595718
	ctx.lr = 0x82DB385C;
	sub_82595718(ctx, base);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addic. r11,r3,16
	xer.ca = ctx.r3.u32 > 4294967279;
	ctx.r11.s64 = ctx.r3.s64 + 16;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lwz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// stb r30,296(r3)
	PPC_STORE_U8(ctx.r3.u32 + 296, ctx.r30.u8);
	// stb r30,297(r3)
	PPC_STORE_U8(ctx.r3.u32 + 297, ctx.r30.u8);
	// beq 0x82db389c
	if (cr0.eq) goto loc_82DB389C;
	// lwz r10,208(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// addi r4,r1,216
	ctx.r4.s64 = ctx.r1.s64 + 216;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x82c5cb88
	ctx.lr = 0x82DB389C;
	sub_82C5CB88(ctx, base);
loc_82DB389C:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82db2c58
	ctx.lr = 0x82DB38B0;
	sub_82DB2C58(ctx, base);
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x82b6a860
	ctx.lr = 0x82DB38B8;
	sub_82B6A860(ctx, base);
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
loc_82DB38C0:
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x82db2890
	ctx.lr = 0x82DB38C8;
	sub_82DB2890(ctx, base);
loc_82DB38C8:
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB38D0"))) PPC_WEAK_FUNC(sub_82DB38D0);
PPC_FUNC_IMPL(__imp__sub_82DB38D0) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-25552
	ctx.r10.s64 = ctx.r11.s64 + -25552;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82db3120
	ctx.lr = 0x82DB38F8;
	sub_82DB3120(ctx, base);
	// lwz r6,364(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// addi r4,r31,360
	ctx.r4.s64 = ctx.r31.s64 + 360;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82db2368
	ctx.lr = 0x82DB390C;
	sub_82DB2368(ctx, base);
	// li r30,2
	ctx.r30.s64 = 2;
	// lwz r4,364(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// bl 0x825952b8
	ctx.lr = 0x82DB3920;
	sub_825952B8(ctx, base);
	// lwz r6,348(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// addi r4,r31,344
	ctx.r4.s64 = ctx.r31.s64 + 344;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82c5d148
	ctx.lr = 0x82DB3934;
	sub_82C5D148(ctx, base);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,348(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// bl 0x825952b8
	ctx.lr = 0x82DB3944;
	sub_825952B8(ctx, base);
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// bl 0x82b6a860
	ctx.lr = 0x82DB394C;
	sub_82B6A860(ctx, base);
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

__attribute__((alias("__imp__sub_82DB3964"))) PPC_WEAK_FUNC(sub_82DB3964);
PPC_FUNC_IMPL(__imp__sub_82DB3964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB3968"))) PPC_WEAK_FUNC(sub_82DB3968);
PPC_FUNC_IMPL(__imp__sub_82DB3968) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r8,r11,-25552
	ctx.r8.s64 = ctx.r11.s64 + -25552;
	// li r9,24
	ctx.r9.s64 = 24;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r3,r3,72
	ctx.r3.s64 = ctx.r3.s64 + 72;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// stw r9,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// stw r9,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r9.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// stw r9,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r9.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// bl 0x82b6b738
	ctx.lr = 0x82DB39D8;
	sub_82B6B738(ctx, base);
	// addi r3,r31,344
	ctx.r3.s64 = ctx.r31.s64 + 344;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82c5bc60
	ctx.lr = 0x82DB39E8;
	sub_82C5BC60(ctx, base);
	// addi r3,r31,360
	ctx.r3.s64 = ctx.r31.s64 + 360;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82ecdd48
	ctx.lr = 0x82DB39F8;
	sub_82ECDD48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82db3120
	ctx.lr = 0x82DB3A00;
	sub_82DB3120(ctx, base);
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

__attribute__((alias("__imp__sub_82DB3A18"))) PPC_WEAK_FUNC(sub_82DB3A18);
PPC_FUNC_IMPL(__imp__sub_82DB3A18) {
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
	// bl 0x82db38d0
	ctx.lr = 0x82DB3A38;
	sub_82DB38D0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82db3a50
	if (cr6.eq) goto loc_82DB3A50;
	// bl 0x82416268
	ctx.lr = 0x82DB3A4C;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82DB3A50:
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

__attribute__((alias("__imp__sub_82DB3A68"))) PPC_WEAK_FUNC(sub_82DB3A68);
PPC_FUNC_IMPL(__imp__sub_82DB3A68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82DB3A70;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x831156e8
	ctx.lr = 0x82DB3A78;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addis r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 65536;
	// addi r31,r31,24160
	ctx.r31.s64 = ctx.r31.s64 + 24160;
	// bl 0x831156e8
	ctx.lr = 0x82DB3A88;
	sub_831156E8(ctx, base);
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addis r30,r10,5
	ctx.r30.s64 = ctx.r10.s64 + 327680;
	// addi r30,r30,14904
	ctx.r30.s64 = ctx.r30.s64 + 14904;
	// bl 0x8314ee28
	ctx.lr = 0x82DB3A98;
	sub_8314EE28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r31,112(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 112);
	// lbz r29,122(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 122);
	// lbz r28,132(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 132);
	// lbz r27,142(r11)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r11.u32 + 142);
	// lbz r4,102(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 102);
	// bl 0x82a47360
	ctx.lr = 0x82DB3ABC;
	sub_82A47360(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x831340b8
	ctx.lr = 0x82DB3AC8;
	sub_831340B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x831238a8
	ctx.lr = 0x82DB3AD4;
	sub_831238A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82583318
	ctx.lr = 0x82DB3AE0;
	sub_82583318(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82583320
	ctx.lr = 0x82DB3AEC;
	sub_82583320(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB3AF4"))) PPC_WEAK_FUNC(sub_82DB3AF4);
PPC_FUNC_IMPL(__imp__sub_82DB3AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB3AF8"))) PPC_WEAK_FUNC(sub_82DB3AF8);
PPC_FUNC_IMPL(__imp__sub_82DB3AF8) {
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
	// bl 0x82d86078
	ctx.lr = 0x82DB3B0C;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82db3b2c
	if (!cr6.eq) goto loc_82DB3B2C;
	// li r3,29
	ctx.r3.s64 = 29;
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
loc_82DB3B2C:
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// bl 0x82da24b0
	ctx.lr = 0x82DB3B34;
	sub_82DA24B0(ctx, base);
	// bl 0x83815cb0
	ctx.lr = 0x82DB3B38;
	sub_83815CB0(ctx, base);
	// cmpwi cr6,r3,14
	cr6.compare<int32_t>(ctx.r3.s32, 14, xer);
	// blt cr6,0x82db3b48
	if (cr6.lt) goto loc_82DB3B48;
	// li r31,29
	ctx.r31.s64 = 29;
	// b 0x82db3b78
	goto loc_82DB3B78;
loc_82DB3B48:
	// bl 0x82d960c0
	ctx.lr = 0x82DB3B4C;
	sub_82D960C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82db3b60
	if (!cr6.eq) goto loc_82DB3B60;
	// li r31,253
	ctx.r31.s64 = 253;
	// b 0x82db3b78
	goto loc_82DB3B78;
loc_82DB3B60:
	// bl 0x82d96138
	ctx.lr = 0x82DB3B64;
	sub_82D96138(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// addi r31,r11,29
	ctx.r31.s64 = ctx.r11.s64 + 29;
loc_82DB3B78:
	// bl 0x831156e8
	ctx.lr = 0x82DB3B7C;
	sub_831156E8(ctx, base);
	// clrlwi r4,r31,24
	ctx.r4.u64 = ctx.r31.u32 & 0xFF;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311c448
	ctx.lr = 0x82DB3B88;
	sub_8311C448(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82db3b94
	if (!cr6.eq) goto loc_82DB3B94;
	// li r31,29
	ctx.r31.s64 = 29;
loc_82DB3B94:
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

__attribute__((alias("__imp__sub_82DB3BAC"))) PPC_WEAK_FUNC(sub_82DB3BAC);
PPC_FUNC_IMPL(__imp__sub_82DB3BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB3BB0"))) PPC_WEAK_FUNC(sub_82DB3BB0);
PPC_FUNC_IMPL(__imp__sub_82DB3BB0) {
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
	// li r31,55
	ctx.r31.s64 = 55;
	// bl 0x82d96060
	ctx.lr = 0x82DB3BC8;
	sub_82D96060(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82db3c28
	if (cr6.eq) goto loc_82DB3C28;
	// bl 0x82d86078
	ctx.lr = 0x82DB3BD8;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82db3c28
	if (cr6.eq) goto loc_82DB3C28;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// bl 0x82da24b0
	ctx.lr = 0x82DB3BE8;
	sub_82DA24B0(ctx, base);
	// bl 0x825832e8
	ctx.lr = 0x82DB3BEC;
	sub_825832E8(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x82db3c28
	if (cr6.gt) goto loc_82DB3C28;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82db3c14
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82DB3C14;
	// bdzf 4*cr6+eq,0x82db3c1c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82DB3C1C;
	// bne cr6,0x82db3c24
	if (!cr6.eq) goto loc_82DB3C24;
	// li r31,53
	ctx.r31.s64 = 53;
	// b 0x82db3c28
	goto loc_82DB3C28;
loc_82DB3C14:
	// li r31,52
	ctx.r31.s64 = 52;
	// b 0x82db3c28
	goto loc_82DB3C28;
loc_82DB3C1C:
	// li r31,51
	ctx.r31.s64 = 51;
	// b 0x82db3c28
	goto loc_82DB3C28;
loc_82DB3C24:
	// li r31,46
	ctx.r31.s64 = 46;
loc_82DB3C28:
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

__attribute__((alias("__imp__sub_82DB3C40"))) PPC_WEAK_FUNC(sub_82DB3C40);
PPC_FUNC_IMPL(__imp__sub_82DB3C40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82DB3C48;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x831156e8
	ctx.lr = 0x82DB3C54;
	sub_831156E8(ctx, base);
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addis r31,r10,5
	ctx.r31.s64 = ctx.r10.s64 + 327680;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// addi r31,r31,14904
	ctx.r31.s64 = ctx.r31.s64 + 14904;
	// bgt cr6,0x82db3cb0
	if (cr6.gt) goto loc_82DB3CB0;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82db3c90
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82DB3C90;
	// bdzf 4*cr6+eq,0x82db3c98
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82DB3C98;
	// bdzf 4*cr6+eq,0x82db3ca0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82DB3CA0;
	// bdzf 4*cr6+eq,0x82db3ca8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82DB3CA8;
	// bne cr6,0x82db3cb0
	if (!cr6.eq) goto loc_82DB3CB0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82db3cb4
	goto loc_82DB3CB4;
loc_82DB3C90:
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82db3cb4
	goto loc_82DB3CB4;
loc_82DB3C98:
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x82db3cb4
	goto loc_82DB3CB4;
loc_82DB3CA0:
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x82db3cb4
	goto loc_82DB3CB4;
loc_82DB3CA8:
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x82db3cb4
	goto loc_82DB3CB4;
loc_82DB3CB0:
	// li r4,5
	ctx.r4.s64 = 5;
loc_82DB3CB4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82583338
	ctx.lr = 0x82DB3CBC;
	sub_82583338(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831239c8
	ctx.lr = 0x82DB3CCC;
	sub_831239C8(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831239c8
	ctx.lr = 0x82DB3CDC;
	sub_831239C8(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x839e07e8
	ctx.lr = 0x82DB3CEC;
	sub_839E07E8(ctx, base);
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831237d0
	ctx.lr = 0x82DB3CF8;
	sub_831237D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// bl 0x83123838
	ctx.lr = 0x82DB3D04;
	sub_83123838(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,17(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 17);
	// bl 0x83123860
	ctx.lr = 0x82DB3D10;
	sub_83123860(ctx, base);
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83123880
	ctx.lr = 0x82DB3D1C;
	sub_83123880(ctx, base);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// bl 0x83123870
	ctx.lr = 0x82DB3D2C;
	sub_83123870(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83123800
	ctx.lr = 0x82DB3D40;
	sub_83123800(ctx, base);
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83129790
	ctx.lr = 0x82DB3D50;
	sub_83129790(ctx, base);
	// bl 0x82db3bb0
	ctx.lr = 0x82DB3D54;
	sub_82DB3BB0(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335b060
	ctx.lr = 0x82DB3D64;
	sub_8335B060(ctx, base);
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r4,r9,16
	ctx.r4.u64 = ctx.r9.u32 & 0xFFFF;
	// bl 0x83123898
	ctx.lr = 0x82DB3D74;
	sub_83123898(ctx, base);
	// li r4,253
	ctx.r4.s64 = 253;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83123890
	ctx.lr = 0x82DB3D80;
	sub_83123890(ctx, base);
	// bl 0x82db3a68
	ctx.lr = 0x82DB3D84;
	sub_82DB3A68(ctx, base);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x82db3ddc
	if (cr6.eq) goto loc_82DB3DDC;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x82db3dc4
	if (cr6.eq) goto loc_82DB3DC4;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x82db3dac
	if (cr6.eq) goto loc_82DB3DAC;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82DB3DAC:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831241f8
	ctx.lr = 0x82DB3DB8;
	sub_831241F8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82DB3DC4:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831241f8
	ctx.lr = 0x82DB3DD0;
	sub_831241F8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82DB3DDC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831241f8
	ctx.lr = 0x82DB3DE8;
	sub_831241F8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB3DF4"))) PPC_WEAK_FUNC(sub_82DB3DF4);
PPC_FUNC_IMPL(__imp__sub_82DB3DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB3DF8"))) PPC_WEAK_FUNC(sub_82DB3DF8);
PPC_FUNC_IMPL(__imp__sub_82DB3DF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82DB3E00;
	__savegprlr_29(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// bl 0x831156e8
	ctx.lr = 0x82DB3E18;
	sub_831156E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addis r31,r10,5
	ctx.r31.s64 = ctx.r10.s64 + 327680;
	// addi r31,r31,14904
	ctx.r31.s64 = ctx.r31.s64 + 14904;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x831239e0
	ctx.lr = 0x82DB3E38;
	sub_831239E0(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwimi r11,r8,0,14,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3FFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFC0000);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwimi r7,r11,0,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// bl 0x831239e0
	ctx.lr = 0x82DB3E68;
	sub_831239E0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// rlwimi r11,r5,0,0,13
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xFFFC0000) | (ctx.r11.u64 & 0xFFFFFFFF0003FFFF);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lwz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// rlwimi r11,r4,0,14,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x3FFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFC0000);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// bl 0x824ce1d8
	ctx.lr = 0x82DB3E90;
	sub_824CE1D8(ctx, base);
	// stw r3,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831238a0
	ctx.lr = 0x82DB3E9C;
	sub_831238A0(ctx, base);
	// stw r3,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253f910
	ctx.lr = 0x82DB3EA8;
	sub_8253F910(ctx, base);
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8353c978
	ctx.lr = 0x82DB3EB4;
	sub_8353C978(ctx, base);
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831238b0
	ctx.lr = 0x82DB3EC0;
	sub_831238B0(ctx, base);
	// stw r3,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
	// bl 0x82d96138
	ctx.lr = 0x82DB3EC8;
	sub_82D96138(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// li r29,2
	ctx.r29.s64 = 2;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82db3ee0
	if (cr6.eq) goto loc_82DB3EE0;
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// b 0x82db3efc
	goto loc_82DB3EFC;
loc_82DB3EE0:
	// bl 0x83572958
	ctx.lr = 0x82DB3EE4;
	sub_83572958(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r10,5
	ctx.r10.s64 = 5;
	// subfic r9,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 & ctx.r10.u64;
	// stw r6,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r6.u32);
loc_82DB3EFC:
	// lis r11,0
	ctx.r11.s64 = 0;
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// ori r9,r11,65535
	ctx.r9.u64 = ctx.r11.u64 | 65535;
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// addi r7,r1,124
	ctx.r7.s64 = ctx.r1.s64 + 124;
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r9,r1,132
	ctx.r9.s64 = ctx.r1.s64 + 132;
	// addi r8,r1,140
	ctx.r8.s64 = ctx.r1.s64 + 140;
	// addi r7,r1,148
	ctx.r7.s64 = ctx.r1.s64 + 148;
	// addi r6,r1,136
	ctx.r6.s64 = ctx.r1.s64 + 136;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x83154470
	ctx.lr = 0x82DB3F4C;
	sub_83154470(ctx, base);
	// bl 0x82d86078
	ctx.lr = 0x82DB3F50;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82db3f98
	if (cr6.eq) goto loc_82DB3F98;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// bl 0x82da25e8
	ctx.lr = 0x82DB3F60;
	sub_82DA25E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82e59bc0
	ctx.lr = 0x82DB3F68;
	sub_82E59BC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82db3f98
	if (cr6.eq) goto loc_82DB3F98;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x83123918
	ctx.lr = 0x82DB3F80;
	sub_83123918(ctx, base);
	// stw r29,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r29.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83123950
	ctx.lr = 0x82DB3F90;
	sub_83123950(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e59be8
	ctx.lr = 0x82DB3F98;
	sub_82E59BE8(ctx, base);
loc_82DB3F98:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB3FA0"))) PPC_WEAK_FUNC(sub_82DB3FA0);
PPC_FUNC_IMPL(__imp__sub_82DB3FA0) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r31,-1
	ctx.r31.s64 = -1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x831156e8
	ctx.lr = 0x82DB3FC8;
	sub_831156E8(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addis r3,r11,236
	ctx.r3.s64 = ctx.r11.s64 + 15466496;
	// li r4,26
	ctx.r4.s64 = 26;
	// addi r3,r3,19252
	ctx.r3.s64 = ctx.r3.s64 + 19252;
	// bl 0x8312a278
	ctx.lr = 0x82DB3FE0;
	sub_8312A278(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r9,r3,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r3.s64;
	// srawi. r8,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82db3ffc
	if (cr0.eq) goto loc_82DB3FFC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r31,r11,16
	ctx.r31.u64 = ctx.r11.u32 & 0xFFFF;
loc_82DB3FFC:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82db4008
	if (cr6.eq) goto loc_82DB4008;
	// bl 0x82416268
	ctx.lr = 0x82DB4008;
	sub_82416268(ctx, base);
loc_82DB4008:
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

__attribute__((alias("__imp__sub_82DB4020"))) PPC_WEAK_FUNC(sub_82DB4020);
PPC_FUNC_IMPL(__imp__sub_82DB4020) {
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
	// bl 0x831156e8
	ctx.lr = 0x82DB4038;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r4,5
	ctx.r4.s64 = 5;
	// addis r30,r11,5
	ctx.r30.s64 = ctx.r11.s64 + 327680;
	// addi r30,r30,14904
	ctx.r30.s64 = ctx.r30.s64 + 14904;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82583338
	ctx.lr = 0x82DB4050;
	sub_82583338(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831239c8
	ctx.lr = 0x82DB4060;
	sub_831239C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x831239c8
	ctx.lr = 0x82DB4070;
	sub_831239C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x839e07e8
	ctx.lr = 0x82DB407C;
	sub_839E07E8(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x831237d0
	ctx.lr = 0x82DB4090;
	sub_831237D0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83123838
	ctx.lr = 0x82DB409C;
	sub_83123838(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83123860
	ctx.lr = 0x82DB40A8;
	sub_83123860(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,23
	ctx.r4.s64 = 23;
	// bl 0x83123880
	ctx.lr = 0x82DB40B4;
	sub_83123880(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x83123870
	ctx.lr = 0x82DB40C0;
	sub_83123870(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83123800
	ctx.lr = 0x82DB40D4;
	sub_83123800(ctx, base);
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r31.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x83129790
	ctx.lr = 0x82DB40E4;
	sub_83129790(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x831241f8
	ctx.lr = 0x82DB40F0;
	sub_831241F8(ctx, base);
	// bl 0x82db3bb0
	ctx.lr = 0x82DB40F4;
	sub_82DB3BB0(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x8335b060
	ctx.lr = 0x82DB4104;
	sub_8335B060(ctx, base);
	// bl 0x82db3fa0
	ctx.lr = 0x82DB4108;
	sub_82DB3FA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83123898
	ctx.lr = 0x82DB4114;
	sub_83123898(ctx, base);
	// li r4,253
	ctx.r4.s64 = 253;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83123890
	ctx.lr = 0x82DB4120;
	sub_83123890(ctx, base);
	// bl 0x82db3a68
	ctx.lr = 0x82DB4124;
	sub_82DB3A68(ctx, base);
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

__attribute__((alias("__imp__sub_82DB4140"))) PPC_WEAK_FUNC(sub_82DB4140);
PPC_FUNC_IMPL(__imp__sub_82DB4140) {
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
	// bl 0x831156e8
	ctx.lr = 0x82DB4158;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r4,5
	ctx.r4.s64 = 5;
	// addis r31,r11,5
	ctx.r31.s64 = ctx.r11.s64 + 327680;
	// addi r31,r31,14904
	ctx.r31.s64 = ctx.r31.s64 + 14904;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82583338
	ctx.lr = 0x82DB4170;
	sub_82583338(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831239c8
	ctx.lr = 0x82DB4180;
	sub_831239C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x831239c8
	ctx.lr = 0x82DB4190;
	sub_831239C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x839e07e8
	ctx.lr = 0x82DB419C;
	sub_839E07E8(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x831237d0
	ctx.lr = 0x82DB41B0;
	sub_831237D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83123838
	ctx.lr = 0x82DB41BC;
	sub_83123838(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83123860
	ctx.lr = 0x82DB41C8;
	sub_83123860(ctx, base);
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83123880
	ctx.lr = 0x82DB41D4;
	sub_83123880(ctx, base);
	// bl 0x82d8a698
	ctx.lr = 0x82DB41D8;
	sub_82D8A698(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82db41f0
	if (cr6.eq) goto loc_82DB41F0;
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83123880
	ctx.lr = 0x82DB41F0;
	sub_83123880(ctx, base);
loc_82DB41F0:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83123870
	ctx.lr = 0x82DB41FC;
	sub_83123870(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83123800
	ctx.lr = 0x82DB4210;
	sub_83123800(ctx, base);
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83129790
	ctx.lr = 0x82DB4220;
	sub_83129790(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831241f8
	ctx.lr = 0x82DB422C;
	sub_831241F8(ctx, base);
	// bl 0x82db3bb0
	ctx.lr = 0x82DB4230;
	sub_82DB3BB0(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335b060
	ctx.lr = 0x82DB4240;
	sub_8335B060(ctx, base);
	// bl 0x82db3fa0
	ctx.lr = 0x82DB4244;
	sub_82DB3FA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83123898
	ctx.lr = 0x82DB4250;
	sub_83123898(ctx, base);
	// li r4,253
	ctx.r4.s64 = 253;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83123890
	ctx.lr = 0x82DB425C;
	sub_83123890(ctx, base);
	// bl 0x82db3a68
	ctx.lr = 0x82DB4260;
	sub_82DB3A68(ctx, base);
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

__attribute__((alias("__imp__sub_82DB427C"))) PPC_WEAK_FUNC(sub_82DB427C);
PPC_FUNC_IMPL(__imp__sub_82DB427C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB4280"))) PPC_WEAK_FUNC(sub_82DB4280);
PPC_FUNC_IMPL(__imp__sub_82DB4280) {
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
	// bl 0x82d86078
	ctx.lr = 0x82DB4294;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82db42b4
	if (!cr6.eq) goto loc_82DB42B4;
loc_82DB429C:
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
loc_82DB42B4:
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x83815cb0
	ctx.lr = 0x82DB42BC;
	sub_83815CB0(ctx, base);
	// bl 0x825832d8
	ctx.lr = 0x82DB42C0;
	sub_825832D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82db4140
	ctx.lr = 0x82DB42C8;
	sub_82DB4140(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82db429c
	if (cr6.eq) goto loc_82DB429C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8353c978
	ctx.lr = 0x82DB42DC;
	sub_8353C978(ctx, base);
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// beq cr6,0x82db4320
	if (cr6.eq) goto loc_82DB4320;
	// lhz r31,204(r31)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r31.u32 + 204);
	// bl 0x831156e8
	ctx.lr = 0x82DB42EC;
	sub_831156E8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311c4e0
	ctx.lr = 0x82DB42F8;
	sub_8311C4E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82db4308
	if (!cr6.eq) goto loc_82DB4308;
	// bl 0x82db3fa0
	ctx.lr = 0x82DB4304;
	sub_82DB3FA0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82DB4308:
	// bl 0x831156e8
	ctx.lr = 0x82DB430C;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addis r3,r11,5
	ctx.r3.s64 = ctx.r11.s64 + 327680;
	// addi r3,r3,14904
	ctx.r3.s64 = ctx.r3.s64 + 14904;
	// bl 0x83123898
	ctx.lr = 0x82DB4320;
	sub_83123898(ctx, base);
loc_82DB4320:
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

__attribute__((alias("__imp__sub_82DB4338"))) PPC_WEAK_FUNC(sub_82DB4338);
PPC_FUNC_IMPL(__imp__sub_82DB4338) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82DB4340;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82d86078
	ctx.lr = 0x82DB4348;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82db4358
	if (!cr6.eq) goto loc_82DB4358;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
loc_82DB4358:
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x83815cb0
	ctx.lr = 0x82DB4360;
	sub_83815CB0(ctx, base);
	// bl 0x825832d8
	ctx.lr = 0x82DB4364;
	sub_825832D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,253
	ctx.r28.s64 = 253;
	// bl 0x8353c978
	ctx.lr = 0x82DB4370;
	sub_8353C978(ctx, base);
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// beq cr6,0x82db437c
	if (cr6.eq) goto loc_82DB437C;
	// li r28,254
	ctx.r28.s64 = 254;
loc_82DB437C:
	// lhz r29,204(r31)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r31.u32 + 204);
	// bl 0x831156e8
	ctx.lr = 0x82DB4384;
	sub_831156E8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311c4e0
	ctx.lr = 0x82DB4390;
	sub_8311C4E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82db43a0
	if (!cr6.eq) goto loc_82DB43A0;
	// bl 0x82db3fa0
	ctx.lr = 0x82DB439C;
	sub_82DB3FA0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82DB43A0:
	// bl 0x831156e8
	ctx.lr = 0x82DB43A4;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r4,5
	ctx.r4.s64 = 5;
	// addis r31,r11,5
	ctx.r31.s64 = ctx.r11.s64 + 327680;
	// addi r31,r31,14904
	ctx.r31.s64 = ctx.r31.s64 + 14904;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82583338
	ctx.lr = 0x82DB43BC;
	sub_82583338(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831239c8
	ctx.lr = 0x82DB43CC;
	sub_831239C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x831239c8
	ctx.lr = 0x82DB43DC;
	sub_831239C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x839e07e8
	ctx.lr = 0x82DB43E8;
	sub_839E07E8(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x831237d0
	ctx.lr = 0x82DB43FC;
	sub_831237D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83123838
	ctx.lr = 0x82DB4408;
	sub_83123838(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83123860
	ctx.lr = 0x82DB4414;
	sub_83123860(ctx, base);
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83123880
	ctx.lr = 0x82DB4420;
	sub_83123880(ctx, base);
	// bl 0x82d8a698
	ctx.lr = 0x82DB4424;
	sub_82D8A698(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82db443c
	if (cr6.eq) goto loc_82DB443C;
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83123880
	ctx.lr = 0x82DB443C;
	sub_83123880(ctx, base);
loc_82DB443C:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83123870
	ctx.lr = 0x82DB4448;
	sub_83123870(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83123800
	ctx.lr = 0x82DB445C;
	sub_83123800(ctx, base);
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83129790
	ctx.lr = 0x82DB446C;
	sub_83129790(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831241f8
	ctx.lr = 0x82DB4478;
	sub_831241F8(ctx, base);
	// bl 0x82db3bb0
	ctx.lr = 0x82DB447C;
	sub_82DB3BB0(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335b060
	ctx.lr = 0x82DB448C;
	sub_8335B060(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83123898
	ctx.lr = 0x82DB4498;
	sub_83123898(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83123890
	ctx.lr = 0x82DB44A4;
	sub_83123890(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a47360
	ctx.lr = 0x82DB44B0;
	sub_82A47360(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831340b8
	ctx.lr = 0x82DB44BC;
	sub_831340B8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831238a8
	ctx.lr = 0x82DB44C8;
	sub_831238A8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82583318
	ctx.lr = 0x82DB44D4;
	sub_82583318(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82583320
	ctx.lr = 0x82DB44E0;
	sub_82583320(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB44EC"))) PPC_WEAK_FUNC(sub_82DB44EC);
PPC_FUNC_IMPL(__imp__sub_82DB44EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB44F0"))) PPC_WEAK_FUNC(sub_82DB44F0);
PPC_FUNC_IMPL(__imp__sub_82DB44F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82DB44F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82db3fa0
	ctx.lr = 0x82DB4500;
	sub_82DB3FA0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82DB4508;
	sub_82D86078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82db45cc
	if (cr6.eq) goto loc_82DB45CC;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// bl 0x82da2580
	ctx.lr = 0x82DB451C;
	sub_82DA2580(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82d960c0
	ctx.lr = 0x82DB4524;
	sub_82D960C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82db4538
	if (cr6.eq) goto loc_82DB4538;
	// li r28,2
	ctx.r28.s64 = 2;
	// b 0x82db4548
	goto loc_82DB4548;
loc_82DB4538:
	// bl 0x82d96060
	ctx.lr = 0x82DB453C;
	sub_82D96060(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r28,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r28.u64 = ~ctx.r10.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_82DB4548:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e59dd8
	ctx.lr = 0x82DB4554;
	sub_82E59DD8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82db45ac
	if (cr6.eq) goto loc_82DB45AC;
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82db4570
	if (!cr6.eq) goto loc_82DB4570;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82db459c
	goto loc_82DB459C;
loc_82DB4570:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,76(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// bl 0x82dd9520
	ctx.lr = 0x82DB457C;
	sub_82DD9520(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x82db4598
	if (!cr6.lt) goto loc_82DB4598;
loc_82DB4584:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,76(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// bl 0x82dd9520
	ctx.lr = 0x82DB4590;
	sub_82DD9520(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82db4584
	if (cr6.lt) goto loc_82DB4584;
loc_82DB4598:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_82DB459C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e59e58
	ctx.lr = 0x82DB45A8;
	sub_82E59E58(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82DB45AC:
	// bl 0x831156e8
	ctx.lr = 0x82DB45B0;
	sub_831156E8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// bl 0x8311c4e0
	ctx.lr = 0x82DB45BC;
	sub_8311C4E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82db45cc
	if (!cr6.eq) goto loc_82DB45CC;
	// bl 0x82db3fa0
	ctx.lr = 0x82DB45C8;
	sub_82DB3FA0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82DB45CC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB45D8"))) PPC_WEAK_FUNC(sub_82DB45D8);
PPC_FUNC_IMPL(__imp__sub_82DB45D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82DB45E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82d86078
	ctx.lr = 0x82DB45E8;
	sub_82D86078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82db45fc
	if (!cr6.eq) goto loc_82DB45FC;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82DB45FC:
	// bl 0x831156e8
	ctx.lr = 0x82DB4600;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r4,5
	ctx.r4.s64 = 5;
	// addis r31,r11,5
	ctx.r31.s64 = ctx.r11.s64 + 327680;
	// addi r31,r31,14904
	ctx.r31.s64 = ctx.r31.s64 + 14904;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82583338
	ctx.lr = 0x82DB4618;
	sub_82583338(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831239c8
	ctx.lr = 0x82DB4628;
	sub_831239C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x831239c8
	ctx.lr = 0x82DB4638;
	sub_831239C8(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x831237d0
	ctx.lr = 0x82DB464C;
	sub_831237D0(ctx, base);
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83123880
	ctx.lr = 0x82DB4658;
	sub_83123880(ctx, base);
	// bl 0x82d8a698
	ctx.lr = 0x82DB465C;
	sub_82D8A698(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82db4674
	if (cr6.eq) goto loc_82DB4674;
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83123880
	ctx.lr = 0x82DB4674;
	sub_83123880(ctx, base);
loc_82DB4674:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83123870
	ctx.lr = 0x82DB4680;
	sub_83123870(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83123800
	ctx.lr = 0x82DB4694;
	sub_83123800(ctx, base);
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83129790
	ctx.lr = 0x82DB46A4;
	sub_83129790(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831241f8
	ctx.lr = 0x82DB46B0;
	sub_831241F8(ctx, base);
	// bl 0x82db3bb0
	ctx.lr = 0x82DB46B4;
	sub_82DB3BB0(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8335b060
	ctx.lr = 0x82DB46C4;
	sub_8335B060(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a47360
	ctx.lr = 0x82DB46D0;
	sub_82A47360(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831340b8
	ctx.lr = 0x82DB46DC;
	sub_831340B8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831238a8
	ctx.lr = 0x82DB46E8;
	sub_831238A8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82583318
	ctx.lr = 0x82DB46F4;
	sub_82583318(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82583320
	ctx.lr = 0x82DB4700;
	sub_82583320(ctx, base);
	// bl 0x82db44f0
	ctx.lr = 0x82DB4704;
	sub_82DB44F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83123898
	ctx.lr = 0x82DB4710;
	sub_83123898(ctx, base);
	// bl 0x82db3af8
	ctx.lr = 0x82DB4714;
	sub_82DB3AF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83123890
	ctx.lr = 0x82DB4720;
	sub_83123890(ctx, base);
	// bl 0x82d960c0
	ctx.lr = 0x82DB4724;
	sub_82D960C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82db4758
	if (cr6.eq) goto loc_82DB4758;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83123838
	ctx.lr = 0x82DB473C;
	sub_83123838(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83123860
	ctx.lr = 0x82DB4748;
	sub_83123860(ctx, base);
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// bl 0x82da24b0
	ctx.lr = 0x82DB4750;
	sub_82DA24B0(ctx, base);
	// bl 0x835d3138
	ctx.lr = 0x82DB4754;
	sub_835D3138(ctx, base);
	// b 0x82db47ac
	goto loc_82DB47AC;
loc_82DB4758:
	// bl 0x82d96060
	ctx.lr = 0x82DB475C;
	sub_82D96060(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82db4790
	if (cr6.eq) goto loc_82DB4790;
	// bl 0x83123838
	ctx.lr = 0x82DB4774;
	sub_83123838(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83123860
	ctx.lr = 0x82DB4780;
	sub_83123860(ctx, base);
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// bl 0x82da24b0
	ctx.lr = 0x82DB4788;
	sub_82DA24B0(ctx, base);
	// bl 0x835d3130
	ctx.lr = 0x82DB478C;
	sub_835D3130(ctx, base);
	// b 0x82db47ac
	goto loc_82DB47AC;
loc_82DB4790:
	// bl 0x83123838
	ctx.lr = 0x82DB4794;
	sub_83123838(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83123860
	ctx.lr = 0x82DB47A0;
	sub_83123860(ctx, base);
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// bl 0x82da24b0
	ctx.lr = 0x82DB47A8;
	sub_82DA24B0(ctx, base);
	// bl 0x835d31a8
	ctx.lr = 0x82DB47AC;
	sub_835D31A8(ctx, base);
loc_82DB47AC:
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x82db47cc
	if (!cr6.eq) goto loc_82DB47CC;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e07e8
	ctx.lr = 0x82DB47C0;
	sub_839E07E8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82DB47CC:
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// li r4,10
	ctx.r4.s64 = 10;
	// beq cr6,0x82db47dc
	if (cr6.eq) goto loc_82DB47DC;
	// li r4,5
	ctx.r4.s64 = 5;
loc_82DB47DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x839e07e8
	ctx.lr = 0x82DB47E4;
	sub_839E07E8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB47F0"))) PPC_WEAK_FUNC(sub_82DB47F0);
PPC_FUNC_IMPL(__imp__sub_82DB47F0) {
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
	ctx.lr = 0x82DB4808;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82db4824
	if (!cr6.eq) goto loc_82DB4824;
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
loc_82DB4824:
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x83815cb0
	ctx.lr = 0x82DB482C;
	sub_83815CB0(ctx, base);
	// bl 0x825832d8
	ctx.lr = 0x82DB4830;
	sub_825832D8(ctx, base);
	// bl 0x831238b0
	ctx.lr = 0x82DB4834;
	sub_831238B0(ctx, base);
	// cmplwi cr6,r3,2
	cr6.compare<uint32_t>(ctx.r3.u32, 2, xer);
	// blt cr6,0x82db4848
	if (cr6.lt) goto loc_82DB4848;
	// bne cr6,0x82db4850
	if (!cr6.eq) goto loc_82DB4850;
	// bl 0x82db4280
	ctx.lr = 0x82DB4844;
	sub_82DB4280(ctx, base);
	// b 0x82db484c
	goto loc_82DB484C;
loc_82DB4848:
	// bl 0x82db4338
	ctx.lr = 0x82DB484C;
	sub_82DB4338(ctx, base);
loc_82DB484C:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82DB4850:
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

__attribute__((alias("__imp__sub_82DB4868"))) PPC_WEAK_FUNC(sub_82DB4868);
PPC_FUNC_IMPL(__imp__sub_82DB4868) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad4
	ctx.lr = 0x82DB4870;
	__savegprlr_23(ctx, base);
	// stwu r1,-576(r1)
	ea = -576 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x831156e8
	ctx.lr = 0x82DB4878;
	sub_831156E8(ctx, base);
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addis r26,r11,5
	ctx.r26.s64 = ctx.r11.s64 + 327680;
	// addi r26,r26,14904
	ctx.r26.s64 = ctx.r26.s64 + 14904;
	// bl 0x82d86078
	ctx.lr = 0x82DB4888;
	sub_82D86078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82dad2e0
	ctx.lr = 0x82DB4890;
	sub_82DAD2E0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82db4a84
	if (cr6.eq) goto loc_82DB4A84;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82db4a84
	if (cr6.eq) goto loc_82DB4A84;
	// lwz r11,228(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r24,140(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// li r25,2
	ctx.r25.s64 = 2;
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// subfic r10,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r23,r8,r11
	ctx.r23.u64 = ctx.r8.u64 & ctx.r11.u64;
loc_82DB48C4:
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// cmpw cr6,r27,r23
	cr6.compare<int32_t>(ctx.r27.s32, ctx.r23.s32, xer);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// bne cr6,0x82db48ec
	if (!cr6.eq) goto loc_82DB48EC;
	// bl 0x82dacfb0
	ctx.lr = 0x82DB48E8;
	sub_82DACFB0(ctx, base);
	// b 0x82db48f0
	goto loc_82DB48F0;
loc_82DB48EC:
	// bl 0x82dacf60
	ctx.lr = 0x82DB48F0;
	sub_82DACF60(ctx, base);
loc_82DB48F0:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82db4914
	if (!cr6.eq) goto loc_82DB4914;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82db4a6c
	if (cr6.eq) goto loc_82DB4A6C;
	// stw r25,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r25.u32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// b 0x82db4a68
	goto loc_82DB4A68;
loc_82DB4914:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82b7cb68
	ctx.lr = 0x82DB491C;
	sub_82B7CB68(ctx, base);
	// bl 0x82d8a698
	ctx.lr = 0x82DB4920;
	sub_82D8A698(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x82db493c
	if (!cr6.eq) goto loc_82DB493C;
	// li r3,2
	ctx.r3.s64 = 2;
loc_82DB493C:
	// bl 0x831c3b88
	ctx.lr = 0x82DB4940;
	sub_831C3B88(ctx, base);
	// bl 0x82d8a698
	ctx.lr = 0x82DB4944;
	sub_82D8A698(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82db4a44
	if (cr6.eq) goto loc_82DB4A44;
	// lbz r10,166(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 166);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// beq cr6,0x82db49d0
	if (cr6.eq) goto loc_82DB49D0;
	// addi r30,r1,168
	ctx.r30.s64 = ctx.r1.s64 + 168;
loc_82DB4974:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// bl 0x83123c88
	ctx.lr = 0x82DB498C;
	sub_83123C88(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// li r5,224
	ctx.r5.s64 = 224;
	// bl 0x831ce980
	ctx.lr = 0x82DB499C;
	sub_831CE980(ctx, base);
	// lwz r11,320(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, xer);
	// bne cr6,0x82db49b4
	if (!cr6.eq) goto loc_82DB49B4;
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x835977d8
	ctx.lr = 0x82DB49B4;
	sub_835977D8(ctx, base);
loc_82DB49B4:
	// lbz r11,166(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 166);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, xer);
	// blt cr6,0x82db4974
	if (cr6.lt) goto loc_82DB4974;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_82DB49D0:
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r8,r1,168
	ctx.r8.s64 = ctx.r1.s64 + 168;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// subf r7,r4,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r4.s64;
	// addi r10,r1,168
	ctx.r10.s64 = ctx.r1.s64 + 168;
	// srawi r9,r7,2
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 2;
	// subf r8,r8,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r8.s64;
	// stb r9,166(r1)
	PPC_STORE_U8(ctx.r1.u32 + 166, ctx.r9.u8);
loc_82DB49F0:
	// lbz r6,166(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 166);
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, xer);
	// bge cr6,0x82db4a10
	if (!cr6.lt) goto loc_82DB4A10;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// ble cr6,0x82db4a8c
	if (!cr6.gt) goto loc_82DB4A8C;
	// lwzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// b 0x82db4a14
	goto loc_82DB4A14;
loc_82DB4A10:
	// stw r28,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r28.u32);
loc_82DB4A14:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(ctx.r11.u32, 10, xer);
	// blt cr6,0x82db49f0
	if (cr6.lt) goto loc_82DB49F0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82db4a38
	if (cr6.eq) goto loc_82DB4A38;
	// stw r25,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r25.u32);
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x825952b8
	ctx.lr = 0x82DB4A38;
	sub_825952B8(ctx, base);
loc_82DB4A38:
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
loc_82DB4A44:
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83124290
	ctx.lr = 0x82DB4A54;
	sub_83124290(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82db4a6c
	if (cr6.eq) goto loc_82DB4A6C;
	// stw r25,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r25.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
loc_82DB4A68:
	// bl 0x825952b8
	ctx.lr = 0x82DB4A6C;
	sub_825952B8(ctx, base);
loc_82DB4A6C:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// cmplwi cr6,r27,2
	cr6.compare<uint32_t>(ctx.r27.u32, 2, xer);
	// blt cr6,0x82db48c4
	if (cr6.lt) goto loc_82DB48C4;
loc_82DB4A84:
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// b 0x831cdb24
	__restgprlr_23(ctx, base);
	return;
loc_82DB4A8C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-10804
	ctx.r3.s64 = ctx.r11.s64 + -10804;
	// bl 0x831cc188
	ctx.lr = 0x82DB4A98;
	sub_831CC188(ctx, base);
}

__attribute__((alias("__imp__sub_82DB4A98"))) PPC_WEAK_FUNC(sub_82DB4A98);
PPC_FUNC_IMPL(__imp__sub_82DB4A98) {
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
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82d86078
	ctx.lr = 0x82DB4AAC;
	sub_82D86078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82db4af8
	if (cr6.eq) goto loc_82DB4AF8;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x838257e0
	ctx.lr = 0x82DB4AC0;
	sub_838257E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82db4af8
	if (cr6.eq) goto loc_82DB4AF8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b75c90
	ctx.lr = 0x82DB4AD4;
	sub_82B75C90(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8307e040
	ctx.lr = 0x82DB4ADC;
	sub_8307E040(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82dba220
	ctx.lr = 0x82DB4AE4;
	sub_82DBA220(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82db4b10
	if (!cr6.eq) goto loc_82DB4B10;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b75b00
	ctx.lr = 0x82DB4AF8;
	sub_82B75B00(ctx, base);
loc_82DB4AF8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82DB4B10:
	// addi r3,r1,260
	ctx.r3.s64 = ctx.r1.s64 + 260;
	// bl 0x82db3c40
	ctx.lr = 0x82DB4B18;
	sub_82DB3C40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b75b00
	ctx.lr = 0x82DB4B24;
	sub_82B75B00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB4B3C"))) PPC_WEAK_FUNC(sub_82DB4B3C);
PPC_FUNC_IMPL(__imp__sub_82DB4B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB4B40"))) PPC_WEAK_FUNC(sub_82DB4B40);
PPC_FUNC_IMPL(__imp__sub_82DB4B40) {
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
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82d86078
	ctx.lr = 0x82DB4B54;
	sub_82D86078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82db4b78
	if (!cr6.eq) goto loc_82DB4B78;
loc_82DB4B60:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82DB4B78:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82dbb5c0
	ctx.lr = 0x82DB4B80;
	sub_82DBB5C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82db4b60
	if (cr6.eq) goto loc_82DB4B60;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b73340
	ctx.lr = 0x82DB4B94;
	sub_82B73340(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x831f81f8
	ctx.lr = 0x82DB4B9C;
	sub_831F81F8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82dbbf30
	ctx.lr = 0x82DB4BA4;
	sub_82DBBF30(ctx, base);
	// addi r3,r1,300
	ctx.r3.s64 = ctx.r1.s64 + 300;
	// bl 0x82db3c40
	ctx.lr = 0x82DB4BAC;
	sub_82DB3C40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b73218
	ctx.lr = 0x82DB4BB8;
	sub_82B73218(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB4BD0"))) PPC_WEAK_FUNC(sub_82DB4BD0);
PPC_FUNC_IMPL(__imp__sub_82DB4BD0) {
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
	// bl 0x831156e8
	ctx.lr = 0x82DB4BE8;
	sub_831156E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82db4c04
	if (!cr6.eq) goto loc_82DB4C04;
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
loc_82DB4C04:
	// bl 0x831156e8
	ctx.lr = 0x82DB4C08;
	sub_831156E8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,52(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// bl 0x8312adb0
	ctx.lr = 0x82DB4C14;
	sub_8312ADB0(ctx, base);
	// bl 0x830ff290
	ctx.lr = 0x82DB4C18;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r11,r11,-44
	ctx.r11.s64 = ctx.r11.s64 + -44;
	// cmplwi cr6,r11,17
	cr6.compare<uint32_t>(ctx.r11.u32, 17, xer);
	// bgt cr6,0x82db4cb8
	if (cr6.gt) goto loc_82DB4CB8;
	// lis r12,-32037
	ctx.r12.s64 = -2099576832;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,19520
	ctx.r12.s64 = ctx.r12.s64 + 19520;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82DB4C90;
	case 1:
		goto loc_82DB4C88;
	case 2:
		goto loc_82DB4CB0;
	case 3:
		goto loc_82DB4C98;
	case 4:
		goto loc_82DB4CB8;
	case 5:
		goto loc_82DB4CA0;
	case 6:
		goto loc_82DB4CA0;
	case 7:
		goto loc_82DB4C88;
	case 8:
		goto loc_82DB4CB8;
	case 9:
		goto loc_82DB4C90;
	case 10:
		goto loc_82DB4CB8;
	case 11:
		goto loc_82DB4CA0;
	case 12:
		goto loc_82DB4CA0;
	case 13:
		goto loc_82DB4CB8;
	case 14:
		goto loc_82DB4CB8;
	case 15:
		goto loc_82DB4CB8;
	case 16:
		goto loc_82DB4CB0;
	case 17:
		goto loc_82DB4CA8;
	default:
		return;
	}
	// lwz r22,19600(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 19600);
	// lwz r22,19592(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 19592);
	// lwz r22,19632(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 19632);
	// lwz r22,19608(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 19608);
	// lwz r22,19640(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 19640);
	// lwz r22,19616(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 19616);
	// lwz r22,19616(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 19616);
	// lwz r22,19592(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 19592);
	// lwz r22,19640(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 19640);
	// lwz r22,19600(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 19600);
	// lwz r22,19640(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 19640);
	// lwz r22,19616(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 19616);
	// lwz r22,19616(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 19616);
	// lwz r22,19640(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 19640);
	// lwz r22,19640(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 19640);
	// lwz r22,19640(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 19640);
	// lwz r22,19632(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 19632);
	// lwz r22,19624(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 19624);
loc_82DB4C88:
	// bl 0x82db4020
	ctx.lr = 0x82DB4C8C;
	sub_82DB4020(ctx, base);
	// b 0x82db4cb4
	goto loc_82DB4CB4;
loc_82DB4C90:
	// bl 0x82db4140
	ctx.lr = 0x82DB4C94;
	sub_82DB4140(ctx, base);
	// b 0x82db4cb4
	goto loc_82DB4CB4;
loc_82DB4C98:
	// bl 0x82db4b40
	ctx.lr = 0x82DB4C9C;
	sub_82DB4B40(ctx, base);
	// b 0x82db4cb4
	goto loc_82DB4CB4;
loc_82DB4CA0:
	// bl 0x82db45d8
	ctx.lr = 0x82DB4CA4;
	sub_82DB45D8(ctx, base);
	// b 0x82db4cb4
	goto loc_82DB4CB4;
loc_82DB4CA8:
	// bl 0x82db47f0
	ctx.lr = 0x82DB4CAC;
	sub_82DB47F0(ctx, base);
	// b 0x82db4cb4
	goto loc_82DB4CB4;
loc_82DB4CB0:
	// bl 0x82db4a98
	ctx.lr = 0x82DB4CB4;
	sub_82DB4A98(ctx, base);
loc_82DB4CB4:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82DB4CB8:
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

__attribute__((alias("__imp__sub_82DB4CD0"))) PPC_WEAK_FUNC(sub_82DB4CD0);
PPC_FUNC_IMPL(__imp__sub_82DB4CD0) {
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
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82db4d20
	if (!cr6.eq) goto loc_82DB4D20;
	// li r11,29
	ctx.r11.s64 = 29;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,184
	ctx.r4.s64 = 184;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82DB4D08;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82db4d18
	if (cr6.eq) goto loc_82DB4D18;
	// bl 0x82dc5ab0
	ctx.lr = 0x82DB4D14;
	sub_82DC5AB0(ctx, base);
	// b 0x82db4d1c
	goto loc_82DB4D1C;
loc_82DB4D18:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DB4D1C:
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
loc_82DB4D20:
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

__attribute__((alias("__imp__sub_82DB4D34"))) PPC_WEAK_FUNC(sub_82DB4D34);
PPC_FUNC_IMPL(__imp__sub_82DB4D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB4D38"))) PPC_WEAK_FUNC(sub_82DB4D38);
PPC_FUNC_IMPL(__imp__sub_82DB4D38) {
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
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82db4d94
	if (!cr6.eq) goto loc_82DB4D94;
	// li r11,29
	ctx.r11.s64 = 29;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82DB4D70;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82db4d8c
	if (cr6.eq) goto loc_82DB4D8C;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r10,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// b 0x82db4d90
	goto loc_82DB4D90;
loc_82DB4D8C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82DB4D90:
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_82DB4D94:
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

__attribute__((alias("__imp__sub_82DB4DA8"))) PPC_WEAK_FUNC(sub_82DB4DA8);
PPC_FUNC_IMPL(__imp__sub_82DB4DA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
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

__attribute__((alias("__imp__sub_82DB4DB8"))) PPC_WEAK_FUNC(sub_82DB4DB8);
PPC_FUNC_IMPL(__imp__sub_82DB4DB8) {
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
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82db4e08
	if (!cr6.eq) goto loc_82DB4E08;
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
	ctx.lr = 0x82DB4DF0;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82db4e00
	if (cr6.eq) goto loc_82DB4E00;
	// bl 0x82db6c78
	ctx.lr = 0x82DB4DFC;
	sub_82DB6C78(ctx, base);
	// b 0x82db4e04
	goto loc_82DB4E04;
loc_82DB4E00:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DB4E04:
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
loc_82DB4E08:
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

__attribute__((alias("__imp__sub_82DB4E1C"))) PPC_WEAK_FUNC(sub_82DB4E1C);
PPC_FUNC_IMPL(__imp__sub_82DB4E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB4E20"))) PPC_WEAK_FUNC(sub_82DB4E20);
PPC_FUNC_IMPL(__imp__sub_82DB4E20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
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

__attribute__((alias("__imp__sub_82DB4E30"))) PPC_WEAK_FUNC(sub_82DB4E30);
PPC_FUNC_IMPL(__imp__sub_82DB4E30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,177(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 177);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,177(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 177);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82db4e7c
	if (!cr6.eq) goto loc_82DB4E7C;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r9,177(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 177);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82db4e74
	if (!cr6.eq) goto loc_82DB4E74;
loc_82DB4E60:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,177(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 177);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82db4e60
	if (cr6.eq) goto loc_82DB4E60;
loc_82DB4E74:
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_82DB4E7C:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,177(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 177);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82db4eb4
	if (!cr6.eq) goto loc_82DB4EB4;
loc_82DB4E8C:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82db4eb4
	if (!cr6.eq) goto loc_82DB4EB4;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,177(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 177);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82db4e8c
	if (cr6.eq) goto loc_82DB4E8C;
loc_82DB4EB4:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB4EBC"))) PPC_WEAK_FUNC(sub_82DB4EBC);
PPC_FUNC_IMPL(__imp__sub_82DB4EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB4EC0"))) PPC_WEAK_FUNC(sub_82DB4EC0);
PPC_FUNC_IMPL(__imp__sub_82DB4EC0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82db4f24
	if (cr6.eq) goto loc_82DB4F24;
	// li r11,29
	ctx.r11.s64 = 29;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x82DB4EF4;
	sub_82595150(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82db4f14
	if (cr6.eq) goto loc_82DB4F14;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DB4F14;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82DB4F14:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x82DB4F1C;
	sub_82595170(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82DB4F24:
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

__attribute__((alias("__imp__sub_82DB4F38"))) PPC_WEAK_FUNC(sub_82DB4F38);
PPC_FUNC_IMPL(__imp__sub_82DB4F38) {
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
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82db4f9c
	if (cr6.eq) goto loc_82DB4F9C;
	// li r11,29
	ctx.r11.s64 = 29;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x82DB4F6C;
	sub_82595150(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82db4f8c
	if (cr6.eq) goto loc_82DB4F8C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DB4F8C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82DB4F8C:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x82DB4F94;
	sub_82595170(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_82DB4F9C:
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

__attribute__((alias("__imp__sub_82DB4FB0"))) PPC_WEAK_FUNC(sub_82DB4FB0);
PPC_FUNC_IMPL(__imp__sub_82DB4FB0) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82db5014
	if (cr6.eq) goto loc_82DB5014;
	// li r11,29
	ctx.r11.s64 = 29;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x82DB4FE8;
	sub_82595150(ctx, base);
	// lwz r31,16(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(ctx.r31.u32, 0, xer);
	// beq cr6,0x82db5004
	if (cr6.eq) goto loc_82DB5004;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dc56b0
	ctx.lr = 0x82DB4FFC;
	sub_82DC56B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82416268
	ctx.lr = 0x82DB5004;
	sub_82416268(ctx, base);
loc_82DB5004:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x82DB500C;
	sub_82595170(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
loc_82DB5014:
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

__attribute__((alias("__imp__sub_82DB502C"))) PPC_WEAK_FUNC(sub_82DB502C);
PPC_FUNC_IMPL(__imp__sub_82DB502C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB5030"))) PPC_WEAK_FUNC(sub_82DB5030);
PPC_FUNC_IMPL(__imp__sub_82DB5030) {
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
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82db5094
	if (cr6.eq) goto loc_82DB5094;
	// li r11,29
	ctx.r11.s64 = 29;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x82DB5064;
	sub_82595150(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82db5084
	if (cr6.eq) goto loc_82DB5084;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DB5084;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82DB5084:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x82DB508C;
	sub_82595170(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_82DB5094:
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

__attribute__((alias("__imp__sub_82DB50A8"))) PPC_WEAK_FUNC(sub_82DB50A8);
PPC_FUNC_IMPL(__imp__sub_82DB50A8) {
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
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82db510c
	if (cr6.eq) goto loc_82DB510C;
	// li r11,29
	ctx.r11.s64 = 29;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x82DB50DC;
	sub_82595150(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82db50fc
	if (cr6.eq) goto loc_82DB50FC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DB50FC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82DB50FC:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x82DB5104;
	sub_82595170(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_82DB510C:
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

__attribute__((alias("__imp__sub_82DB5120"))) PPC_WEAK_FUNC(sub_82DB5120);
PPC_FUNC_IMPL(__imp__sub_82DB5120) {
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
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82db516c
	if (cr6.eq) goto loc_82DB516C;
	// li r11,29
	ctx.r11.s64 = 29;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x82DB5154;
	sub_82595150(ctx, base);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82416268
	ctx.lr = 0x82DB515C;
	sub_82416268(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x82DB5164;
	sub_82595170(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
loc_82DB516C:
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

__attribute__((alias("__imp__sub_82DB5180"))) PPC_WEAK_FUNC(sub_82DB5180);
PPC_FUNC_IMPL(__imp__sub_82DB5180) {
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
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82db51e4
	if (cr6.eq) goto loc_82DB51E4;
	// li r11,29
	ctx.r11.s64 = 29;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x82DB51B4;
	sub_82595150(ctx, base);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82db51d4
	if (cr6.eq) goto loc_82DB51D4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DB51D4;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82DB51D4:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x82DB51DC;
	sub_82595170(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_82DB51E4:
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

__attribute__((alias("__imp__sub_82DB51F8"))) PPC_WEAK_FUNC(sub_82DB51F8);
PPC_FUNC_IMPL(__imp__sub_82DB51F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,177(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 177);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82db5218
	if (!cr6.eq) goto loc_82DB5218;
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_82DB5218:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x82db5240
	if (!cr6.eq) goto loc_82DB5240;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_82DB5240:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x82db5260
	if (!cr6.eq) goto loc_82DB5260;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_82DB5260:
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB5270"))) PPC_WEAK_FUNC(sub_82DB5270);
PPC_FUNC_IMPL(__imp__sub_82DB5270) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,177(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 177);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82db5290
	if (!cr6.eq) goto loc_82DB5290;
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_82DB5290:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x82db52b8
	if (!cr6.eq) goto loc_82DB52B8;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_82DB52B8:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x82db52d8
	if (!cr6.eq) goto loc_82DB52D8;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_82DB52D8:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB52E8"))) PPC_WEAK_FUNC(sub_82DB52E8);
PPC_FUNC_IMPL(__imp__sub_82DB52E8) {
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
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,184
	ctx.r4.s64 = 184;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82DB531C;
	sub_82595718(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r8,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r8.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r11,176(r7)
	PPC_STORE_U8(ctx.r7.u32 + 176, ctx.r11.u8);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r11,177(r6)
	PPC_STORE_U8(ctx.r6.u32 + 177, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82DB5360"))) PPC_WEAK_FUNC(sub_82DB5360);
PPC_FUNC_IMPL(__imp__sub_82DB5360) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82DB5368;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,177(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 177);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82db53cc
	if (!cr6.eq) goto loc_82DB53CC;
	// li r27,2
	ctx.r27.s64 = 2;
loc_82DB5388:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82db5360
	ctx.lr = 0x82DB5394;
	sub_82DB5360(ctx, base);
	// addi r29,r30,24
	ctx.r29.s64 = ctx.r30.s64 + 24;
	// addi r3,r29,96
	ctx.r3.s64 = ctx.r29.s64 + 96;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82da8c38
	ctx.lr = 0x82DB53A4;
	sub_82DA8C38(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82da8c38
	ctx.lr = 0x82DB53AC;
	sub_82DA8C38(ctx, base);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x82DB53BC;
	sub_825952B8(ctx, base);
	// lbz r11,177(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 177);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82db5388
	if (cr6.eq) goto loc_82DB5388;
loc_82DB53CC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB53D4"))) PPC_WEAK_FUNC(sub_82DB53D4);
PPC_FUNC_IMPL(__imp__sub_82DB53D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB53D8"))) PPC_WEAK_FUNC(sub_82DB53D8);
PPC_FUNC_IMPL(__imp__sub_82DB53D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82DB53E0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,177(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 177);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r5,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r5.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82db5408
	if (cr6.eq) goto loc_82DB5408;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,11564
	ctx.r3.s64 = ctx.r11.s64 + 11564;
	// bl 0x831cc188
	ctx.lr = 0x82DB5408;
	sub_831CC188(ctx, base);
loc_82DB5408:
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x82db4e30
	ctx.lr = 0x82DB5414;
	sub_82DB4E30(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lbz r10,177(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 177);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r25,196(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// beq cr6,0x82db5430
	if (cr6.eq) goto loc_82DB5430;
	// lwz r28,8(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// b 0x82db5454
	goto loc_82DB5454;
loc_82DB5430:
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lbz r9,177(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 177);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82db5448
	if (cr6.eq) goto loc_82DB5448;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// b 0x82db5454
	goto loc_82DB5454;
loc_82DB5448:
	// lwz r28,8(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmplw cr6,r25,r26
	cr6.compare<uint32_t>(ctx.r25.u32, ctx.r26.u32, xer);
	// bne cr6,0x82db5540
	if (!cr6.eq) goto loc_82DB5540;
loc_82DB5454:
	// lbz r11,177(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 177);
	// lwz r31,4(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82db5468
	if (!cr6.eq) goto loc_82DB5468;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_82DB5468:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, xer);
	// bne cr6,0x82db5480
	if (!cr6.eq) goto loc_82DB5480;
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// b 0x82db5498
	goto loc_82DB5498;
loc_82DB5480:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x82db5494
	if (!cr6.eq) goto loc_82DB5494;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// b 0x82db5498
	goto loc_82DB5498;
loc_82DB5494:
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
loc_82DB5498:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x82db54e8
	if (!cr6.eq) goto loc_82DB54E8;
	// lbz r11,177(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 177);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82db54bc
	if (cr6.eq) goto loc_82DB54BC;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x82db54e4
	goto loc_82DB54E4;
loc_82DB54BC:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lbz r8,177(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 177);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82db54e4
	if (!cr6.eq) goto loc_82DB54E4;
loc_82DB54D0:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,177(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 177);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82db54d0
	if (cr6.eq) goto loc_82DB54D0;
loc_82DB54E4:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_82DB54E8:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, xer);
	// bne cr6,0x82db55d4
	if (!cr6.eq) goto loc_82DB55D4;
	// lbz r11,177(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 177);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82db5510
	if (cr6.eq) goto loc_82DB5510;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r31,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r31.u32);
	// b 0x82db55d4
	goto loc_82DB55D4;
loc_82DB5510:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lbz r8,177(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 177);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82db5538
	if (!cr6.eq) goto loc_82DB5538;
loc_82DB5524:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,177(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 177);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82db5524
	if (cr6.eq) goto loc_82DB5524;
loc_82DB5538:
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// b 0x82db55d4
	goto loc_82DB55D4;
loc_82DB5540:
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
	// bne cr6,0x82db5560
	if (!cr6.eq) goto loc_82DB5560;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// b 0x82db5588
	goto loc_82DB5588;
loc_82DB5560:
	// lbz r11,177(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 177);
	// lwz r31,4(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82db5574
	if (!cr6.eq) goto loc_82DB5574;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_82DB5574:
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
loc_82DB5588:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, xer);
	// bne cr6,0x82db55a0
	if (!cr6.eq) goto loc_82DB55A0;
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// b 0x82db55bc
	goto loc_82DB55BC;
loc_82DB55A0:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, xer);
	// bne cr6,0x82db55b8
	if (!cr6.eq) goto loc_82DB55B8;
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// b 0x82db55bc
	goto loc_82DB55BC;
loc_82DB55B8:
	// stw r25,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r25.u32);
loc_82DB55BC:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// lbz r9,176(r26)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r26.u32 + 176);
	// lbz r10,176(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + 176);
	// stb r9,176(r25)
	PPC_STORE_U8(ctx.r25.u32 + 176, ctx.r9.u8);
	// stb r10,176(r26)
	PPC_STORE_U8(ctx.r26.u32 + 176, ctx.r10.u8);
loc_82DB55D4:
	// lbz r11,176(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 176);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82db576c
	if (!cr6.eq) goto loc_82DB576C;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, xer);
	// beq cr6,0x82db5768
	if (cr6.eq) goto loc_82DB5768;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82DB55F8:
	// lbz r11,176(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 176);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82db5768
	if (!cr6.eq) goto loc_82DB5768;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, xer);
	// bne cr6,0x82db56b0
	if (!cr6.eq) goto loc_82DB56B0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lbz r10,176(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 176);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82db5638
	if (!cr6.eq) goto loc_82DB5638;
	// stb r29,176(r11)
	PPC_STORE_U8(ctx.r11.u32 + 176, ctx.r29.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r30,176(r31)
	PPC_STORE_U8(ctx.r31.u32 + 176, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82db51f8
	ctx.lr = 0x82DB5634;
	sub_82DB51F8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_82DB5638:
	// lbz r10,177(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 177);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82db5704
	if (!cr6.eq) goto loc_82DB5704;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,176(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 176);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x82db5664
	if (!cr6.eq) goto loc_82DB5664;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,176(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 176);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// beq cr6,0x82db5700
	if (cr6.eq) goto loc_82DB5700;
loc_82DB5664:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,176(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 176);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x82db568c
	if (!cr6.eq) goto loc_82DB568C;
	// stb r29,176(r10)
	PPC_STORE_U8(ctx.r10.u32 + 176, ctx.r29.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r30,176(r11)
	PPC_STORE_U8(ctx.r11.u32 + 176, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82db5270
	ctx.lr = 0x82DB5688;
	sub_82DB5270(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_82DB568C:
	// lbz r10,176(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 176);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r10,176(r11)
	PPC_STORE_U8(ctx.r11.u32 + 176, ctx.r10.u8);
	// stb r29,176(r31)
	PPC_STORE_U8(ctx.r31.u32 + 176, ctx.r29.u8);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stb r29,176(r9)
	PPC_STORE_U8(ctx.r9.u32 + 176, ctx.r29.u8);
	// bl 0x82db51f8
	ctx.lr = 0x82DB56AC;
	sub_82DB51F8(ctx, base);
	// b 0x82db5768
	goto loc_82DB5768;
loc_82DB56B0:
	// lbz r10,176(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 176);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82db56d4
	if (!cr6.eq) goto loc_82DB56D4;
	// stb r29,176(r11)
	PPC_STORE_U8(ctx.r11.u32 + 176, ctx.r29.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r30,176(r31)
	PPC_STORE_U8(ctx.r31.u32 + 176, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82db5270
	ctx.lr = 0x82DB56D0;
	sub_82DB5270(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82DB56D4:
	// lbz r10,177(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 177);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82db5704
	if (!cr6.eq) goto loc_82DB5704;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,176(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 176);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x82db5720
	if (!cr6.eq) goto loc_82DB5720;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,176(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 176);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x82db5720
	if (!cr6.eq) goto loc_82DB5720;
loc_82DB5700:
	// stb r30,176(r11)
	PPC_STORE_U8(ctx.r11.u32 + 176, ctx.r30.u8);
loc_82DB5704:
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
	// bne cr6,0x82db55f8
	if (!cr6.eq) goto loc_82DB55F8;
	// b 0x82db5768
	goto loc_82DB5768;
loc_82DB5720:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,176(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 176);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x82db5748
	if (!cr6.eq) goto loc_82DB5748;
	// stb r29,176(r10)
	PPC_STORE_U8(ctx.r10.u32 + 176, ctx.r29.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r30,176(r11)
	PPC_STORE_U8(ctx.r11.u32 + 176, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82db51f8
	ctx.lr = 0x82DB5744;
	sub_82DB51F8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82DB5748:
	// lbz r10,176(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 176);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r10,176(r11)
	PPC_STORE_U8(ctx.r11.u32 + 176, ctx.r10.u8);
	// stb r29,176(r31)
	PPC_STORE_U8(ctx.r31.u32 + 176, ctx.r29.u8);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r29,176(r9)
	PPC_STORE_U8(ctx.r9.u32 + 176, ctx.r29.u8);
	// bl 0x82db5270
	ctx.lr = 0x82DB5768;
	sub_82DB5270(ctx, base);
loc_82DB5768:
	// stb r29,176(r28)
	PPC_STORE_U8(ctx.r28.u32 + 176, ctx.r29.u8);
loc_82DB576C:
	// addi r31,r26,24
	ctx.r31.s64 = ctx.r26.s64 + 24;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82da8c38
	ctx.lr = 0x82DB5778;
	sub_82DA8C38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da8c38
	ctx.lr = 0x82DB5780;
	sub_82DA8C38(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x82DB5794;
	sub_825952B8(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82db57a8
	if (cr6.eq) goto loc_82DB57A8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
loc_82DB57A8:
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

__attribute__((alias("__imp__sub_82DB57B8"))) PPC_WEAK_FUNC(sub_82DB57B8);
PPC_FUNC_IMPL(__imp__sub_82DB57B8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// stb r11,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r11.u8);
	// bl 0x82e61338
	ctx.lr = 0x82DB57E8;
	sub_82E61338(ctx, base);
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r9,492
	ctx.r8.s64 = ctx.r9.s64 + 492;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_82DB580C"))) PPC_WEAK_FUNC(sub_82DB580C);
PPC_FUNC_IMPL(__imp__sub_82DB580C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB5810"))) PPC_WEAK_FUNC(sub_82DB5810);
PPC_FUNC_IMPL(__imp__sub_82DB5810) {
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
	// lbz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 76);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82db5868
	if (!cr6.eq) goto loc_82DB5868;
	// li r11,29
	ctx.r11.s64 = 29;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,60
	ctx.r4.s64 = 60;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82DB5848;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82db5858
	if (cr6.eq) goto loc_82DB5858;
	// bl 0x82db57b8
	ctx.lr = 0x82DB5854;
	sub_82DB57B8(ctx, base);
	// b 0x82db585c
	goto loc_82DB585C;
loc_82DB5858:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DB585C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// stb r11,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r11.u8);
loc_82DB5868:
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

__attribute__((alias("__imp__sub_82DB587C"))) PPC_WEAK_FUNC(sub_82DB587C);
PPC_FUNC_IMPL(__imp__sub_82DB587C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB5880"))) PPC_WEAK_FUNC(sub_82DB5880);
PPC_FUNC_IMPL(__imp__sub_82DB5880) {
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
	// bl 0x82db5360
	ctx.lr = 0x82DB58A0;
	sub_82DB5360(ctx, base);
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

__attribute__((alias("__imp__sub_82DB58D4"))) PPC_WEAK_FUNC(sub_82DB58D4);
PPC_FUNC_IMPL(__imp__sub_82DB58D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB58D8"))) PPC_WEAK_FUNC(sub_82DB58D8);
PPC_FUNC_IMPL(__imp__sub_82DB58D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82DB58E0;
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
	// bne cr6,0x82db592c
	if (!cr6.eq) goto loc_82DB592C;
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, xer);
	// bne cr6,0x82db592c
	if (!cr6.eq) goto loc_82DB592C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82db5880
	ctx.lr = 0x82DB5914;
	sub_82DB5880(ctx, base);
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
loc_82DB592C:
	// cmplw cr6,r5,r30
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r30.u32, xer);
	// beq cr6,0x82db595c
	if (cr6.eq) goto loc_82DB595C;
loc_82DB5934:
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82db4e30
	ctx.lr = 0x82DB5940;
	sub_82DB4E30(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82db53d8
	ctx.lr = 0x82DB5950;
	sub_82DB53D8(ctx, base);
	// lwz r5,164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplw cr6,r5,r30
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r30.u32, xer);
	// bne cr6,0x82db5934
	if (!cr6.eq) goto loc_82DB5934;
loc_82DB595C:
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

__attribute__((alias("__imp__sub_82DB596C"))) PPC_WEAK_FUNC(sub_82DB596C);
PPC_FUNC_IMPL(__imp__sub_82DB596C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB5970"))) PPC_WEAK_FUNC(sub_82DB5970);
PPC_FUNC_IMPL(__imp__sub_82DB5970) {
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
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82db5360
	ctx.lr = 0x82DB5994;
	sub_82DB5360(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r9,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r9.u32);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r8,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r8.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// std r11,184(r31)
	PPC_STORE_U64(ctx.r31.u32 + 184, ctx.r11.u64);
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

__attribute__((alias("__imp__sub_82DB59CC"))) PPC_WEAK_FUNC(sub_82DB59CC);
PPC_FUNC_IMPL(__imp__sub_82DB59CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB59D0"))) PPC_WEAK_FUNC(sub_82DB59D0);
PPC_FUNC_IMPL(__imp__sub_82DB59D0) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82db5360
	ctx.lr = 0x82DB59F4;
	sub_82DB5360(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r9,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r8,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r8.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r4,4(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// bl 0x82c37588
	ctx.lr = 0x82DB5A24;
	sub_82C37588(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lis r6,-32203
	ctx.r6.s64 = -2110455808;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r10.u32);
	// addi r4,r6,-22544
	ctx.r4.s64 = ctx.r6.s64 + -22544;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// stw r9,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r9.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// bl 0x8259cc28
	ctx.lr = 0x82DB5A5C;
	sub_8259CC28(ctx, base);
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

__attribute__((alias("__imp__sub_82DB5A74"))) PPC_WEAK_FUNC(sub_82DB5A74);
PPC_FUNC_IMPL(__imp__sub_82DB5A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB5A78"))) PPC_WEAK_FUNC(sub_82DB5A78);
PPC_FUNC_IMPL(__imp__sub_82DB5A78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82DB5A80;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-9284
	ctx.r10.s64 = ctx.r11.s64 + -9284;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lis r9,-32203
	ctx.r9.s64 = -2110455808;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// addi r28,r9,-22544
	ctx.r28.s64 = ctx.r9.s64 + -22544;
	// stb r30,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r30.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r29,r3,32
	ctx.r29.s64 = ctx.r3.s64 + 32;
	// stb r30,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r30.u8);
	// bl 0x82472fc0
	ctx.lr = 0x82DB5AD0;
	sub_82472FC0(ctx, base);
	// stb r30,32(r31)
	PPC_STORE_U8(ctx.r31.u32 + 32, ctx.r30.u8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82472fc0
	ctx.lr = 0x82DB5AE4;
	sub_82472FC0(ctx, base);
	// li r27,2
	ctx.r27.s64 = 2;
	// li r28,10
	ctx.r28.s64 = 10;
	// stb r30,64(r31)
	PPC_STORE_U8(ctx.r31.u32 + 64, ctx.r30.u8);
	// stw r27,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r27.u32);
	// addi r29,r31,68
	ctx.r29.s64 = ctx.r31.s64 + 68;
	// stw r28,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r28.u32);
	// bl 0x830ff290
	ctx.lr = 0x82DB5B00;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82DB5B04;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,19
	cr6.compare<uint32_t>(ctx.r3.u32, 19, xer);
	// bne cr6,0x82db5b10
	if (!cr6.eq) goto loc_82DB5B10;
	// stw r28,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r28.u32);
loc_82DB5B10:
	// lis r11,0
	ctx.r11.s64 = 0;
	// stb r30,16(r29)
	PPC_STORE_U8(ctx.r29.u32 + 16, ctx.r30.u8);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r30,17(r29)
	PPC_STORE_U8(ctx.r29.u32 + 17, ctx.r30.u8);
	// ori r9,r11,65534
	ctx.r9.u64 = ctx.r11.u64 | 65534;
	// stw r27,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r27.u32);
	// li r8,3
	ctx.r8.s64 = 3;
	// stb r10,8(r29)
	PPC_STORE_U8(ctx.r29.u32 + 8, ctx.r10.u8);
	// stw r9,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r8.u32);
	// bl 0x82dbe9b0
	ctx.lr = 0x82DB5B40;
	sub_82DBE9B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB5B4C"))) PPC_WEAK_FUNC(sub_82DB5B4C);
PPC_FUNC_IMPL(__imp__sub_82DB5B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB5B50"))) PPC_WEAK_FUNC(sub_82DB5B50);
PPC_FUNC_IMPL(__imp__sub_82DB5B50) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82db5bb8
	if (cr6.eq) goto loc_82DB5BB8;
	// li r11,29
	ctx.r11.s64 = 29;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x82DB5B8C;
	sub_82595150(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82db5bac
	if (cr6.eq) goto loc_82DB5BAC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DB5BAC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82DB5BAC:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x82DB5BB4;
	sub_82595170(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_82DB5BB8:
	// stb r30,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r30.u8);
	// addi r11,r31,36
	ctx.r11.s64 = ctx.r31.s64 + 36;
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// lis r10,-32203
	ctx.r10.s64 = -2110455808;
	// stb r30,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r30.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,-22544
	ctx.r4.s64 = ctx.r10.s64 + -22544;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x8259cc28
	ctx.lr = 0x82DB5BDC;
	sub_8259CC28(ctx, base);
	// stb r30,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r30.u8);
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

__attribute__((alias("__imp__sub_82DB5BF8"))) PPC_WEAK_FUNC(sub_82DB5BF8);
PPC_FUNC_IMPL(__imp__sub_82DB5BF8) {
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
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82db5c48
	if (!cr6.eq) goto loc_82DB5C48;
	// li r11,29
	ctx.r11.s64 = 29;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,96
	ctx.r4.s64 = 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82DB5C30;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82db5c40
	if (cr6.eq) goto loc_82DB5C40;
	// bl 0x82db5a78
	ctx.lr = 0x82DB5C3C;
	sub_82DB5A78(ctx, base);
	// b 0x82db5c44
	goto loc_82DB5C44;
loc_82DB5C40:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DB5C44:
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
loc_82DB5C48:
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

__attribute__((alias("__imp__sub_82DB5C5C"))) PPC_WEAK_FUNC(sub_82DB5C5C);
PPC_FUNC_IMPL(__imp__sub_82DB5C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB5C60"))) PPC_WEAK_FUNC(sub_82DB5C60);
PPC_FUNC_IMPL(__imp__sub_82DB5C60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82DB5C68;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,8
	ctx.r28.s64 = ctx.r3.s64 + 8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82db59d0
	ctx.lr = 0x82DB5C7C;
	sub_82DB59D0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r27,2
	ctx.r27.s64 = 2;
	// li r26,10
	ctx.r26.s64 = 10;
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// addi r29,r31,132
	ctx.r29.s64 = ctx.r31.s64 + 132;
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r27,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r27.u32);
	// stw r26,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r26.u32);
	// bl 0x830ff290
	ctx.lr = 0x82DB5CA4;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82DB5CA8;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,19
	cr6.compare<uint32_t>(ctx.r3.u32, 19, xer);
	// bne cr6,0x82db5cb4
	if (!cr6.eq) goto loc_82DB5CB4;
	// stw r26,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r26.u32);
loc_82DB5CB4:
	// lis r11,0
	ctx.r11.s64 = 0;
	// stb r30,16(r29)
	PPC_STORE_U8(ctx.r29.u32 + 16, ctx.r30.u8);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r30,17(r29)
	PPC_STORE_U8(ctx.r29.u32 + 17, ctx.r30.u8);
	// ori r9,r11,65534
	ctx.r9.u64 = ctx.r11.u64 | 65534;
	// stw r27,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r27.u32);
	// li r8,3
	ctx.r8.s64 = 3;
	// stb r10,8(r29)
	PPC_STORE_U8(ctx.r29.u32 + 8, ctx.r10.u8);
	// stw r9,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r8.u32);
	// bl 0x82dbaca8
	ctx.lr = 0x82DB5CE4;
	sub_82DBACA8(ctx, base);
	// lwz r7,4(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,4(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// bl 0x82db5360
	ctx.lr = 0x82DB5CF4;
	sub_82DB5360(ctx, base);
	// lwz r6,4(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r6,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r6.u32);
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r5,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r5.u32);
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r4,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r4.u32);
	// stw r30,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r30.u32);
	// std r30,184(r31)
	PPC_STORE_U64(ctx.r31.u32 + 184, ctx.r30.u64);
	// bl 0x82dba280
	ctx.lr = 0x82DB5D1C;
	sub_82DBA280(ctx, base);
	// stb r30,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r30.u8);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// lis r3,-32203
	ctx.r3.s64 = -2110455808;
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// addi r11,r31,88
	ctx.r11.s64 = ctx.r31.s64 + 88;
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// addi r4,r3,-22544
	ctx.r4.s64 = ctx.r3.s64 + -22544;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x8259cc28
	ctx.lr = 0x82DB5D44;
	sub_8259CC28(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB5D4C"))) PPC_WEAK_FUNC(sub_82DB5D4C);
PPC_FUNC_IMPL(__imp__sub_82DB5D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB5D50"))) PPC_WEAK_FUNC(sub_82DB5D50);
PPC_FUNC_IMPL(__imp__sub_82DB5D50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82DB5D58;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r3,40
	ctx.r30.s64 = ctx.r3.s64 + 40;
	// li r29,2
	ctx.r29.s64 = 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82db5d84
	if (cr6.lt) goto loc_82DB5D84;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82DB5D84;
	sub_825952B8(ctx, base);
loc_82DB5D84:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// stw r10,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r10.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82c5a180
	ctx.lr = 0x82DB5DAC;
	sub_82C5A180(ctx, base);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x825952b8
	ctx.lr = 0x82DB5DBC;
	sub_825952B8(ctx, base);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82db58d8
	ctx.lr = 0x82DB5DD0;
	sub_82DB58D8(ctx, base);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x825952b8
	ctx.lr = 0x82DB5DE0;
	sub_825952B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB5DE8"))) PPC_WEAK_FUNC(sub_82DB5DE8);
PPC_FUNC_IMPL(__imp__sub_82DB5DE8) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,-25184
	ctx.r10.s64 = ctx.r11.s64 + -25184;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// lis r8,-32203
	ctx.r8.s64 = -2110455808;
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// addi r4,r8,-22544
	ctx.r4.s64 = ctx.r8.s64 + -22544;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r9,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r9.u32);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// stb r30,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r30.u8);
	// stb r30,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r30.u8);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stb r30,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r30.u8);
	// bl 0x8259cc28
	ctx.lr = 0x82DB5E64;
	sub_8259CC28(ctx, base);
	// stb r30,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r30.u8);
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

__attribute__((alias("__imp__sub_82DB5E84"))) PPC_WEAK_FUNC(sub_82DB5E84);
PPC_FUNC_IMPL(__imp__sub_82DB5E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB5E88"))) PPC_WEAK_FUNC(sub_82DB5E88);
PPC_FUNC_IMPL(__imp__sub_82DB5E88) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-25184
	ctx.r10.s64 = ctx.r11.s64 + -25184;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82db5b50
	ctx.lr = 0x82DB5EB0;
	sub_82DB5B50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82db4ec0
	ctx.lr = 0x82DB5EB8;
	sub_82DB4EC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82db4f38
	ctx.lr = 0x82DB5EC0;
	sub_82DB4F38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82db4fb0
	ctx.lr = 0x82DB5EC8;
	sub_82DB4FB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82db5030
	ctx.lr = 0x82DB5ED0;
	sub_82DB5030(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82db50a8
	ctx.lr = 0x82DB5ED8;
	sub_82DB50A8(ctx, base);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82db5f10
	if (cr6.eq) goto loc_82DB5F10;
	// li r11,29
	ctx.r11.s64 = 29;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595150
	ctx.lr = 0x82DB5EFC;
	sub_82595150(ctx, base);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82416268
	ctx.lr = 0x82DB5F04;
	sub_82416268(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595170
	ctx.lr = 0x82DB5F0C;
	sub_82595170(ctx, base);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
loc_82DB5F10:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82db5180
	ctx.lr = 0x82DB5F18;
	sub_82DB5180(ctx, base);
	// addi r31,r31,48
	ctx.r31.s64 = ctx.r31.s64 + 48;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82db5f3c
	if (cr6.lt) goto loc_82DB5F3C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82DB5F3C;
	sub_825952B8(ctx, base);
loc_82DB5F3C:
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
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB5F64"))) PPC_WEAK_FUNC(sub_82DB5F64);
PPC_FUNC_IMPL(__imp__sub_82DB5F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB5F68"))) PPC_WEAK_FUNC(sub_82DB5F68);
PPC_FUNC_IMPL(__imp__sub_82DB5F68) {
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
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82db5f94
	if (cr6.eq) goto loc_82DB5F94;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82e61338
	ctx.lr = 0x82DB5F94;
	sub_82E61338(ctx, base);
loc_82DB5F94:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82db5fa4
	if (cr6.eq) goto loc_82DB5FA4;
	// bl 0x82dcaeb8
	ctx.lr = 0x82DB5FA4;
	sub_82DCAEB8(ctx, base);
loc_82DB5FA4:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82db5fb4
	if (cr6.eq) goto loc_82DB5FB4;
	// bl 0x82dcaeb8
	ctx.lr = 0x82DB5FB4;
	sub_82DCAEB8(ctx, base);
loc_82DB5FB4:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82db5fc4
	if (cr6.eq) goto loc_82DB5FC4;
	// bl 0x82dc4fc0
	ctx.lr = 0x82DB5FC4;
	sub_82DC4FC0(ctx, base);
loc_82DB5FC4:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82db5fd4
	if (cr6.eq) goto loc_82DB5FD4;
	// bl 0x82dbe9b0
	ctx.lr = 0x82DB5FD4;
	sub_82DBE9B0(ctx, base);
loc_82DB5FD4:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82db5fe4
	if (cr6.eq) goto loc_82DB5FE4;
	// bl 0x82db5c60
	ctx.lr = 0x82DB5FE4;
	sub_82DB5C60(ctx, base);
loc_82DB5FE4:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82db5ffc
	if (cr6.eq) goto loc_82DB5FFC;
	// stb r30,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r30.u8);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
loc_82DB5FFC:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82db600c
	if (cr6.eq) goto loc_82DB600C;
	// bl 0x82db6b10
	ctx.lr = 0x82DB600C;
	sub_82DB6B10(ctx, base);
loc_82DB600C:
	// stb r30,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r30.u8);
	// addi r11,r31,36
	ctx.r11.s64 = ctx.r31.s64 + 36;
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// lis r10,-32203
	ctx.r10.s64 = -2110455808;
	// stb r30,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r30.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,-22544
	ctx.r4.s64 = ctx.r10.s64 + -22544;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x8259cc28
	ctx.lr = 0x82DB6030;
	sub_8259CC28(ctx, base);
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

__attribute__((alias("__imp__sub_82DB6048"))) PPC_WEAK_FUNC(sub_82DB6048);
PPC_FUNC_IMPL(__imp__sub_82DB6048) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// stb r4,44(r3)
	PPC_STORE_U8(ctx.r3.u32 + 44, ctx.r4.u8);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// b 0x8259cb28
	sub_8259CB28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB6064"))) PPC_WEAK_FUNC(sub_82DB6064);
PPC_FUNC_IMPL(__imp__sub_82DB6064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB6068"))) PPC_WEAK_FUNC(sub_82DB6068);
PPC_FUNC_IMPL(__imp__sub_82DB6068) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,48
	ctx.r4.s64 = ctx.r11.s64 + 48;
	// b 0x8259cb28
	sub_8259CB28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB6080"))) PPC_WEAK_FUNC(sub_82DB6080);
PPC_FUNC_IMPL(__imp__sub_82DB6080) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82DB6088;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r29,r3,8
	ctx.r29.s64 = ctx.r3.s64 + 8;
	// addi r10,r11,-25180
	ctx.r10.s64 = ctx.r11.s64 + -25180;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82db52e8
	ctx.lr = 0x82DB60B0;
	sub_82DB52E8(ctx, base);
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8387b310
	ctx.lr = 0x82DB60C0;
	sub_8387B310(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,15
	ctx.r28.s64 = 15;
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r28,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r28.u32);
	// stb r30,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r30.u8);
	// bl 0x82db59d0
	ctx.lr = 0x82DB60DC;
	sub_82DB59D0(ctx, base);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// addi r11,r31,88
	ctx.r11.s64 = ctx.r31.s64 + 88;
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// lis r9,-32203
	ctx.r9.s64 = -2110455808;
	// stw r28,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r28.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r30,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// addi r4,r9,-22544
	ctx.r4.s64 = ctx.r9.s64 + -22544;
	// stb r30,104(r31)
	PPC_STORE_U8(ctx.r31.u32 + 104, ctx.r30.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r30,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r30.u8);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// bl 0x8259cc28
	ctx.lr = 0x82DB611C;
	sub_8259CC28(ctx, base);
	// li r27,2
	ctx.r27.s64 = 2;
	// li r28,10
	ctx.r28.s64 = 10;
	// stw r27,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r27.u32);
	// addi r29,r31,132
	ctx.r29.s64 = ctx.r31.s64 + 132;
	// stw r28,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r28.u32);
	// bl 0x830ff290
	ctx.lr = 0x82DB6134;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82DB6138;
	sub_830FFAA8(ctx, base);
	// cmplwi cr6,r3,19
	cr6.compare<uint32_t>(ctx.r3.u32, 19, xer);
	// bne cr6,0x82db6144
	if (!cr6.eq) goto loc_82DB6144;
	// stw r28,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r28.u32);
loc_82DB6144:
	// lis r11,0
	ctx.r11.s64 = 0;
	// stb r30,16(r29)
	PPC_STORE_U8(ctx.r29.u32 + 16, ctx.r30.u8);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r30,17(r29)
	PPC_STORE_U8(ctx.r29.u32 + 17, ctx.r30.u8);
	// ori r9,r11,65534
	ctx.r9.u64 = ctx.r11.u64 | 65534;
	// stw r27,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r27.u32);
	// li r8,3
	ctx.r8.s64 = 3;
	// stb r10,8(r29)
	PPC_STORE_U8(ctx.r29.u32 + 8, ctx.r10.u8);
	// stw r9,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r9.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r8,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r8.u32);
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x838a2b30
	ctx.lr = 0x82DB6178;
	sub_838A2B30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82db5c60
	ctx.lr = 0x82DB6180;
	sub_82DB5C60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB618C"))) PPC_WEAK_FUNC(sub_82DB618C);
PPC_FUNC_IMPL(__imp__sub_82DB618C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB6190"))) PPC_WEAK_FUNC(sub_82DB6190);
PPC_FUNC_IMPL(__imp__sub_82DB6190) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82DB6198;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r3,160
	ctx.r3.s64 = ctx.r3.s64 + 160;
	// addi r10,r11,-25180
	ctx.r10.s64 = ctx.r11.s64 + -25180;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x8344cfa0
	ctx.lr = 0x82DB61B4;
	sub_8344CFA0(ctx, base);
	// li r28,2
	ctx.r28.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,160(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// bl 0x825952b8
	ctx.lr = 0x82DB61C8;
	sub_825952B8(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r31,104
	ctx.r30.s64 = ctx.r31.s64 + 104;
	// stw r29,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r29.u32);
	// lwz r9,124(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82db61f0
	if (cr6.lt) goto loc_82DB61F0;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82DB61F0;
	sub_825952B8(ctx, base);
loc_82DB61F0:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// stb r29,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r29.u8);
	// bl 0x82db5d50
	ctx.lr = 0x82DB6208;
	sub_82DB5D50(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB6210"))) PPC_WEAK_FUNC(sub_82DB6210);
PPC_FUNC_IMPL(__imp__sub_82DB6210) {
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
	// bl 0x82db6190
	ctx.lr = 0x82DB6230;
	sub_82DB6190(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82db6248
	if (cr6.eq) goto loc_82DB6248;
	// bl 0x82416268
	ctx.lr = 0x82DB6244;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82DB6248:
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

__attribute__((alias("__imp__sub_82DB6260"))) PPC_WEAK_FUNC(sub_82DB6260);
PPC_FUNC_IMPL(__imp__sub_82DB6260) {
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
	// bl 0x82db5e88
	ctx.lr = 0x82DB6280;
	sub_82DB5E88(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82db6298
	if (cr6.eq) goto loc_82DB6298;
	// bl 0x82416268
	ctx.lr = 0x82DB6294;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82DB6298:
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

__attribute__((alias("__imp__sub_82DB62B0"))) PPC_WEAK_FUNC(sub_82DB62B0);
PPC_FUNC_IMPL(__imp__sub_82DB62B0) {
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
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82db6300
	if (!cr6.eq) goto loc_82DB6300;
	// li r11,29
	ctx.r11.s64 = 29;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,208
	ctx.r4.s64 = 208;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82DB62E8;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82db62f8
	if (cr6.eq) goto loc_82DB62F8;
	// bl 0x82db6080
	ctx.lr = 0x82DB62F4;
	sub_82DB6080(ctx, base);
	// b 0x82db62fc
	goto loc_82DB62FC;
loc_82DB62F8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DB62FC:
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
loc_82DB6300:
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

__attribute__((alias("__imp__sub_82DB6314"))) PPC_WEAK_FUNC(sub_82DB6314);
PPC_FUNC_IMPL(__imp__sub_82DB6314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB6318"))) PPC_WEAK_FUNC(sub_82DB6318);
PPC_FUNC_IMPL(__imp__sub_82DB6318) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// addi r10,r11,-25176
	ctx.r10.s64 = ctx.r11.s64 + -25176;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82db6368
	if (cr6.eq) goto loc_82DB6368;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82a6a4a0
	ctx.lr = 0x82DB6354;
	sub_82A6A4A0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82DB6368;
	sub_825952B8(ctx, base);
loc_82DB6368:
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

__attribute__((alias("__imp__sub_82DB638C"))) PPC_WEAK_FUNC(sub_82DB638C);
PPC_FUNC_IMPL(__imp__sub_82DB638C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB6390"))) PPC_WEAK_FUNC(sub_82DB6390);
PPC_FUNC_IMPL(__imp__sub_82DB6390) {
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
	// bl 0x82db6318
	ctx.lr = 0x82DB63B0;
	sub_82DB6318(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82db63c8
	if (cr6.eq) goto loc_82DB63C8;
	// bl 0x82416268
	ctx.lr = 0x82DB63C4;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82DB63C8:
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

__attribute__((alias("__imp__sub_82DB63E0"))) PPC_WEAK_FUNC(sub_82DB63E0);
PPC_FUNC_IMPL(__imp__sub_82DB63E0) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82db6430
	if (!cr6.eq) goto loc_82DB6430;
	// li r11,29
	ctx.r11.s64 = 29;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82DB6418;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82db6428
	if (cr6.eq) goto loc_82DB6428;
	// bl 0x82dbbd38
	ctx.lr = 0x82DB6424;
	sub_82DBBD38(ctx, base);
	// b 0x82db642c
	goto loc_82DB642C;
loc_82DB6428:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DB642C:
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
loc_82DB6430:
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

__attribute__((alias("__imp__sub_82DB6444"))) PPC_WEAK_FUNC(sub_82DB6444);
PPC_FUNC_IMPL(__imp__sub_82DB6444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB6448"))) PPC_WEAK_FUNC(sub_82DB6448);
PPC_FUNC_IMPL(__imp__sub_82DB6448) {
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
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82db6498
	if (!cr6.eq) goto loc_82DB6498;
	// li r11,29
	ctx.r11.s64 = 29;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82DB6480;
	sub_82595718(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82db6490
	if (cr6.eq) goto loc_82DB6490;
	// bl 0x82dbbd38
	ctx.lr = 0x82DB648C;
	sub_82DBBD38(ctx, base);
	// b 0x82db6494
	goto loc_82DB6494;
loc_82DB6490:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82DB6494:
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
loc_82DB6498:
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

__attribute__((alias("__imp__sub_82DB64AC"))) PPC_WEAK_FUNC(sub_82DB64AC);
PPC_FUNC_IMPL(__imp__sub_82DB64AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB64B0"))) PPC_WEAK_FUNC(sub_82DB64B0);
PPC_FUNC_IMPL(__imp__sub_82DB64B0) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82da8d18
	ctx.lr = 0x82DB64D0;
	sub_82DA8D18(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82DB64EC;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r8,-31775
	ctx.r8.s64 = -2082406400;
	// lwz r7,48(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,-9516(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9516);
	// rlwimi r11,r7,0,14,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFC0000);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// lwz r11,-9516(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -9516);
	// rlwimi r6,r11,0,14,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0000);
	// stw r6,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r6.u32);
	// bl 0x82da8e68
	ctx.lr = 0x82DB651C;
	sub_82DA8E68(ctx, base);
	// lwz r5,48(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r4,48(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// rlwimi r4,r5,0,14,31
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3FFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFC0000);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r4,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r4.u32);
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// rlwimi r3,r11,0,14,31
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r3.u64 & 0xFFFFFFFFFFFC0000);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_82DB6558"))) PPC_WEAK_FUNC(sub_82DB6558);
PPC_FUNC_IMPL(__imp__sub_82DB6558) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r10,200
	ctx.r10.s64 = 200;
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw r3,r8,r10
	ctx.r3.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB6570"))) PPC_WEAK_FUNC(sub_82DB6570);
PPC_FUNC_IMPL(__imp__sub_82DB6570) {
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
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stb r11,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r11.u8);
	// bl 0x8259cb28
	ctx.lr = 0x82DB65C4;
	sub_8259CB28(ctx, base);
	// lwz r7,36(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r10,r31,44
	ctx.r10.s64 = ctx.r31.s64 + 44;
	// addi r9,r30,40
	ctx.r9.s64 = ctx.r30.s64 + 40;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// stw r7,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r7.u32);
	// lbz r6,40(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 40);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// stb r6,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r6.u8);
loc_82DB65E8:
	// lwzu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82db65e8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82DB65E8;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r10,r31,64
	ctx.r10.s64 = ctx.r31.s64 + 64;
	// addi r11,r30,60
	ctx.r11.s64 = ctx.r30.s64 + 60;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82DB6608:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82db6608
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82DB6608;
	// addi r4,r30,88
	ctx.r4.s64 = ctx.r30.s64 + 88;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x82db64b0
	ctx.lr = 0x82DB6620;
	sub_82DB64B0(ctx, base);
	// addi r4,r30,144
	ctx.r4.s64 = ctx.r30.s64 + 144;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x82db64b0
	ctx.lr = 0x82DB662C;
	sub_82DB64B0(ctx, base);
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

__attribute__((alias("__imp__sub_82DB6648"))) PPC_WEAK_FUNC(sub_82DB6648);
PPC_FUNC_IMPL(__imp__sub_82DB6648) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r9,28(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82db6688
	if (cr6.lt) goto loc_82DB6688;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82DB6688:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82DB668C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82db668c
	if (!cr6.eq) goto loc_82DB668C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82DB66B0;
	sub_8259CC28(ctx, base);
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// addi r4,r30,88
	ctx.r4.s64 = ctx.r30.s64 + 88;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// lbz r9,40(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 40);
	// stb r9,40(r31)
	PPC_STORE_U8(ctx.r31.u32 + 40, ctx.r9.u8);
	// lwz r8,44(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// stw r8,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r8.u32);
	// lwz r7,48(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// stw r7,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r7.u32);
	// lwz r6,52(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// stw r6,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r6.u32);
	// lwz r5,56(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// stw r5,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r5.u32);
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// lwz r10,64(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// lwz r9,68(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// stw r9,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r9.u32);
	// lwz r8,72(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// stw r8,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r8.u32);
	// lwz r7,76(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// stw r7,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r7.u32);
	// lwz r6,80(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// stw r6,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r6.u32);
	// bl 0x82da8e68
	ctx.lr = 0x82DB671C;
	sub_82DA8E68(ctx, base);
	// lwz r5,136(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// addi r4,r30,144
	ctx.r4.s64 = ctx.r30.s64 + 144;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// rlwimi r5,r11,0,14,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x3FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r9,r5,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r5,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r5.u32);
	// lwz r10,136(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// rlwimi r10,r9,0,0,13
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFC0000) | (ctx.r10.u64 & 0xFFFFFFFF0003FFFF);
	// stw r10,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r10.u32);
	// bl 0x82da8e68
	ctx.lr = 0x82DB6748;
	sub_82DA8E68(ctx, base);
	// lwz r8,192(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 192);
	// lwz r7,192(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwimi r8,r7,0,14,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFC0000);
	// rotlwi r5,r8,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r8.u32);
	// lwz r6,192(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 192);
	// rlwimi r6,r5,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// stw r6,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r6.u32);
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

__attribute__((alias("__imp__sub_82DB6784"))) PPC_WEAK_FUNC(sub_82DB6784);
PPC_FUNC_IMPL(__imp__sub_82DB6784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB6788"))) PPC_WEAK_FUNC(sub_82DB6788);
PPC_FUNC_IMPL(__imp__sub_82DB6788) {
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
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r10,200
	ctx.r10.s64 = 200;
	// lwz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r7,r8,r10
	ctx.r7.s32 = PPCDivide(ctx.r8.s32, ctx.r10.s32);
	// cmplw cr6,r7,r4
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, xer);
	// ble cr6,0x82db67d4
	if (!cr6.gt) goto loc_82DB67D4;
	// mulli r10,r4,200
	ctx.r10.s64 = ctx.r4.s64 * 200;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82db6648
	ctx.lr = 0x82DB67C0;
	sub_82DB6648(ctx, base);
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
loc_82DB67D4:
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

__attribute__((alias("__imp__sub_82DB67E8"))) PPC_WEAK_FUNC(sub_82DB67E8);
PPC_FUNC_IMPL(__imp__sub_82DB67E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae8
	ctx.lr = 0x82DB67F0;
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
	// beq cr6,0x82db692c
	if (cr6.eq) goto loc_82DB692C;
	// addi r31,r5,192
	ctx.r31.s64 = ctx.r5.s64 + 192;
	// addi r30,r3,136
	ctx.r30.s64 = ctx.r3.s64 + 136;
loc_82DB680C:
	// lwz r11,-136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -136);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r10,-132(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -132);
	// stw r10,-188(r31)
	PPC_STORE_U32(ctx.r31.u32 + -188, ctx.r10.u32);
	// lwz r9,-108(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + -108);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82db6830
	if (cr6.lt) goto loc_82DB6830;
	// lwz r4,-128(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -128);
	// b 0x82db6834
	goto loc_82DB6834;
loc_82DB6830:
	// addi r4,r30,-128
	ctx.r4.s64 = ctx.r30.s64 + -128;
loc_82DB6834:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82DB6838:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82db6838
	if (!cr6.eq) goto loc_82DB6838;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r31,-184
	ctx.r3.s64 = ctx.r31.s64 + -184;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8259cc28
	ctx.lr = 0x82DB685C;
	sub_8259CC28(ctx, base);
	// lwz r10,-100(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -100);
	// addi r4,r30,-48
	ctx.r4.s64 = ctx.r30.s64 + -48;
	// addi r3,r31,-104
	ctx.r3.s64 = ctx.r31.s64 + -104;
	// stw r10,-156(r31)
	PPC_STORE_U32(ctx.r31.u32 + -156, ctx.r10.u32);
	// lbz r9,-96(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + -96);
	// stb r9,-152(r31)
	PPC_STORE_U8(ctx.r31.u32 + -152, ctx.r9.u8);
	// lwz r8,-92(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + -92);
	// stw r8,-148(r31)
	PPC_STORE_U32(ctx.r31.u32 + -148, ctx.r8.u32);
	// lwz r7,-88(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + -88);
	// stw r7,-144(r31)
	PPC_STORE_U32(ctx.r31.u32 + -144, ctx.r7.u32);
	// lwz r6,-84(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + -84);
	// stw r6,-140(r31)
	PPC_STORE_U32(ctx.r31.u32 + -140, ctx.r6.u32);
	// lwz r5,-80(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -80);
	// stw r5,-136(r31)
	PPC_STORE_U32(ctx.r31.u32 + -136, ctx.r5.u32);
	// lwz r11,-76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -76);
	// stw r11,-132(r31)
	PPC_STORE_U32(ctx.r31.u32 + -132, ctx.r11.u32);
	// lwz r10,-72(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -72);
	// stw r10,-128(r31)
	PPC_STORE_U32(ctx.r31.u32 + -128, ctx.r10.u32);
	// lwz r9,-68(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + -68);
	// stw r9,-124(r31)
	PPC_STORE_U32(ctx.r31.u32 + -124, ctx.r9.u32);
	// lwz r8,-64(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + -64);
	// stw r8,-120(r31)
	PPC_STORE_U32(ctx.r31.u32 + -120, ctx.r8.u32);
	// lwz r7,-60(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + -60);
	// stw r7,-116(r31)
	PPC_STORE_U32(ctx.r31.u32 + -116, ctx.r7.u32);
	// lwz r6,-56(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + -56);
	// stw r6,-112(r31)
	PPC_STORE_U32(ctx.r31.u32 + -112, ctx.r6.u32);
	// bl 0x82da8e68
	ctx.lr = 0x82DB68C8;
	sub_82DA8E68(ctx, base);
	// lwz r5,-56(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -56);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// addi r3,r31,-48
	ctx.r3.s64 = ctx.r31.s64 + -48;
	// rlwimi r5,r11,0,0,13
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFC0000) | (ctx.r5.u64 & 0xFFFFFFFF0003FFFF);
	// rotlwi r10,r5,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r5,-56(r31)
	PPC_STORE_U32(ctx.r31.u32 + -56, ctx.r5.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwimi r10,r9,0,14,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFC0000);
	// stw r10,-56(r31)
	PPC_STORE_U32(ctx.r31.u32 + -56, ctx.r10.u32);
	// bl 0x82da8e68
	ctx.lr = 0x82DB68F4;
	sub_82DA8E68(ctx, base);
	// lwz r8,56(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r29,r29,200
	ctx.r29.s64 = ctx.r29.s64 + 200;
	// rlwimi r8,r7,0,14,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0x3FFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFC0000);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// rotlwi r5,r8,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r6,56(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// addi r30,r30,200
	ctx.r30.s64 = ctx.r30.s64 + 200;
	// rlwimi r6,r5,0,0,13
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0xFFFC0000) | (ctx.r6.u64 & 0xFFFFFFFF0003FFFF);
	// addi r4,r30,-136
	ctx.r4.s64 = ctx.r30.s64 + -136;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// addi r31,r31,200
	ctx.r31.s64 = ctx.r31.s64 + 200;
	// cmplw cr6,r4,r28
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r28.u32, xer);
	// bne cr6,0x82db680c
	if (!cr6.eq) goto loc_82DB680C;
loc_82DB692C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb38
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB6938"))) PPC_WEAK_FUNC(sub_82DB6938);
PPC_FUNC_IMPL(__imp__sub_82DB6938) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82DB6940;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x82db69a8
	if (cr6.eq) goto loc_82DB69A8;
	// addi r31,r3,28
	ctx.r31.s64 = ctx.r3.s64 + 28;
	// li r27,2
	ctx.r27.s64 = 2;
	// li r29,15
	ctx.r29.s64 = 15;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82DB6960:
	// addi r3,r31,116
	ctx.r3.s64 = ctx.r31.s64 + 116;
	// bl 0x82da8c38
	ctx.lr = 0x82DB6968;
	sub_82DA8C38(ctx, base);
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x82da8c38
	ctx.lr = 0x82DB6970;
	sub_82DA8C38(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82db698c
	if (cr6.lt) goto loc_82DB698C;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// bl 0x825952b8
	ctx.lr = 0x82DB698C;
	sub_825952B8(ctx, base);
loc_82DB698C:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r30,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r30.u32);
	// stb r30,-20(r31)
	PPC_STORE_U8(ctx.r31.u32 + -20, ctx.r30.u8);
	// addi r31,r31,200
	ctx.r31.s64 = ctx.r31.s64 + 200;
	// addi r11,r31,-28
	ctx.r11.s64 = ctx.r31.s64 + -28;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, xer);
	// bne cr6,0x82db6960
	if (!cr6.eq) goto loc_82DB6960;
loc_82DB69A8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB69B0"))) PPC_WEAK_FUNC(sub_82DB69B0);
PPC_FUNC_IMPL(__imp__sub_82DB69B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdad8
	ctx.lr = 0x82DB69B8;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,327
	ctx.r11.s64 = 21430272;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,44564
	ctx.r10.u64 = ctx.r11.u64 | 44564;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82db69dc
	if (!cr6.gt) goto loc_82DB69DC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x82DB69DC;
	sub_831CC150(ctx, base);
loc_82DB69DC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r24,200
	ctx.r24.s64 = 200;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r24
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r24.s32);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// bge cr6,0x82db6a9c
	if (!cr6.lt) goto loc_82DB6A9C;
	// li r25,2
	ctx.r25.s64 = 2;
	// mulli r26,r4,200
	ctx.r26.s64 = ctx.r4.s64 * 200;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x82DB6A14;
	sub_82595718(ctx, base);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r28,4(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, xer);
	// beq cr6,0x82db6a50
	if (cr6.eq) goto loc_82DB6A50;
loc_82DB6A2C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(ctx.r29.u32, 0, xer);
	// beq cr6,0x82db6a40
	if (cr6.eq) goto loc_82DB6A40;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82db6570
	ctx.lr = 0x82DB6A40;
	sub_82DB6570(ctx, base);
loc_82DB6A40:
	// addi r30,r30,200
	ctx.r30.s64 = ctx.r30.s64 + 200;
	// addi r29,r29,200
	ctx.r29.s64 = ctx.r29.s64 + 200;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, xer);
	// bne cr6,0x82db6a2c
	if (!cr6.eq) goto loc_82DB6A2C;
loc_82DB6A50:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// divw r30,r11,r24
	ctx.r30.s32 = PPCDivide(ctx.r11.s32, ctx.r24.s32);
	// beq cr6,0x82db6a84
	if (cr6.eq) goto loc_82DB6A84;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82db6938
	ctx.lr = 0x82DB6A74;
	sub_82DB6938(ctx, base);
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82DB6A84;
	sub_825952B8(ctx, base);
loc_82DB6A84:
	// mulli r11,r30,200
	ctx.r11.s64 = ctx.r30.s64 * 200;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// add r10,r26,r27
	ctx.r10.u64 = ctx.r26.u64 + ctx.r27.u64;
	// add r9,r11,r27
	ctx.r9.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
loc_82DB6A9C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831cdb28
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB6AA4"))) PPC_WEAK_FUNC(sub_82DB6AA4);
PPC_FUNC_IMPL(__imp__sub_82DB6AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB6AA8"))) PPC_WEAK_FUNC(sub_82DB6AA8);
PPC_FUNC_IMPL(__imp__sub_82DB6AA8) {
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
	// lwz r5,24(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r31,r3,24
	ctx.r31.s64 = ctx.r3.s64 + 24;
	// lwz r4,28(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x82db6af4
	if (cr6.eq) goto loc_82DB6AF4;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82db67e8
	ctx.lr = 0x82DB6ADC;
	sub_82DB67E8(ctx, base);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82db6938
	ctx.lr = 0x82DB6AF0;
	sub_82DB6938(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_82DB6AF4:
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

__attribute__((alias("__imp__sub_82DB6B0C"))) PPC_WEAK_FUNC(sub_82DB6B0C);
PPC_FUNC_IMPL(__imp__sub_82DB6B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB6B10"))) PPC_WEAK_FUNC(sub_82DB6B10);
PPC_FUNC_IMPL(__imp__sub_82DB6B10) {
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
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// addi r31,r3,24
	ctx.r31.s64 = ctx.r3.s64 + 24;
	// std r10,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r10.u64);
	// lwz r5,24(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r4,28(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplw cr6,r5,r4
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, xer);
	// beq cr6,0x82db6b6c
	if (cr6.eq) goto loc_82DB6B6C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82db67e8
	ctx.lr = 0x82DB6B54;
	sub_82DB67E8(ctx, base);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82db6938
	ctx.lr = 0x82DB6B68;
	sub_82DB6938(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_82DB6B6C:
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

__attribute__((alias("__imp__sub_82DB6B84"))) PPC_WEAK_FUNC(sub_82DB6B84);
PPC_FUNC_IMPL(__imp__sub_82DB6B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB6B88"))) PPC_WEAK_FUNC(sub_82DB6B88);
PPC_FUNC_IMPL(__imp__sub_82DB6B88) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r31,r3,24
	ctx.r31.s64 = ctx.r3.s64 + 24;
	// addi r10,r11,-25036
	ctx.r10.s64 = ctx.r11.s64 + -25036;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82db6bd8
	if (cr6.eq) goto loc_82DB6BD8;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82db6938
	ctx.lr = 0x82DB6BC4;
	sub_82DB6938(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82DB6BD8;
	sub_825952B8(ctx, base);
loc_82DB6BD8:
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

__attribute__((alias("__imp__sub_82DB6BFC"))) PPC_WEAK_FUNC(sub_82DB6BFC);
PPC_FUNC_IMPL(__imp__sub_82DB6BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB6C00"))) PPC_WEAK_FUNC(sub_82DB6C00);
PPC_FUNC_IMPL(__imp__sub_82DB6C00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,327
	ctx.r10.s64 = 21430272;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,200
	ctx.r9.s64 = 200;
	// ori r8,r10,44564
	ctx.r8.u64 = ctx.r10.u64 | 44564;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// subf r5,r4,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r4.s64;
	// divw r10,r6,r9
	ctx.r10.s32 = PPCDivide(ctx.r6.s32, ctx.r9.s32);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bge cr6,0x82db6c34
	if (!cr6.lt) goto loc_82DB6C34;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// b 0x831cc150
	sub_831CC150(ctx, base);
	return;
loc_82DB6C34:
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
	// blt cr6,0x82db6c64
	if (cr6.lt) goto loc_82DB6C64;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_82DB6C64:
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x82db6c70
	if (!cr6.lt) goto loc_82DB6C70;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_82DB6C70:
	// b 0x82db69b0
	sub_82DB69B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB6C74"))) PPC_WEAK_FUNC(sub_82DB6C74);
PPC_FUNC_IMPL(__imp__sub_82DB6C74) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB6C78"))) PPC_WEAK_FUNC(sub_82DB6C78);
PPC_FUNC_IMPL(__imp__sub_82DB6C78) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r11,-25036
	ctx.r10.s64 = ctx.r11.s64 + -25036;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r31,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r31.u32);
	// stw r31,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r31.u32);
	// stw r31,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r31.u32);
	// bl 0x82db6b10
	ctx.lr = 0x82DB6CB0;
	sub_82DB6B10(ctx, base);
	// stw r31,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_82DB6CD0"))) PPC_WEAK_FUNC(sub_82DB6CD0);
PPC_FUNC_IMPL(__imp__sub_82DB6CD0) {
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
	// bl 0x82db6b88
	ctx.lr = 0x82DB6CF0;
	sub_82DB6B88(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82db6d08
	if (cr6.eq) goto loc_82DB6D08;
	// bl 0x82416268
	ctx.lr = 0x82DB6D04;
	sub_82416268(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82DB6D08:
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

__attribute__((alias("__imp__sub_82DB6D20"))) PPC_WEAK_FUNC(sub_82DB6D20);
PPC_FUNC_IMPL(__imp__sub_82DB6D20) {
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
	// bge cr6,0x82db6d58
	if (!cr6.lt) goto loc_82DB6D58;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x82db6d5c
	if (!cr6.gt) goto loc_82DB6D5C;
loc_82DB6D58:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82DB6D5C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82db6dac
	if (cr6.eq) goto loc_82DB6DAC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,200
	ctx.r9.s64 = 200;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r7,r10,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// divw r30,r7,r9
	ctx.r30.s32 = PPCDivide(ctx.r7.s32, ctx.r9.s32);
	// bne cr6,0x82db6d90
	if (!cr6.eq) goto loc_82DB6D90;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82db6c00
	ctx.lr = 0x82DB6D90;
	sub_82DB6C00(ctx, base);
loc_82DB6D90:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82db6dd8
	if (cr6.eq) goto loc_82DB6DD8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r11,r30,200
	ctx.r11.s64 = ctx.r30.s64 * 200;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82db6dd4
	goto loc_82DB6DD4;
loc_82DB6DAC:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82db6dc4
	if (!cr6.eq) goto loc_82DB6DC4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82db6c00
	ctx.lr = 0x82DB6DC4;
	sub_82DB6C00(ctx, base);
loc_82DB6DC4:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82db6dd8
	if (cr6.eq) goto loc_82DB6DD8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82DB6DD4:
	// bl 0x82db6570
	ctx.lr = 0x82DB6DD8;
	sub_82DB6570(ctx, base);
loc_82DB6DD8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,200
	ctx.r11.s64 = ctx.r11.s64 + 200;
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

__attribute__((alias("__imp__sub_82DB6DFC"))) PPC_WEAK_FUNC(sub_82DB6DFC);
PPC_FUNC_IMPL(__imp__sub_82DB6DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB6E00"))) PPC_WEAK_FUNC(sub_82DB6E00);
PPC_FUNC_IMPL(__imp__sub_82DB6E00) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// b 0x82db6d20
	sub_82DB6D20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB6E08"))) PPC_WEAK_FUNC(sub_82DB6E08);
PPC_FUNC_IMPL(__imp__sub_82DB6E08) {
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
	// lwz r3,11128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11128);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82db6e74
	if (cr6.eq) goto loc_82DB6E74;
	// bl 0x82e61b68
	ctx.lr = 0x82DB6E2C;
	sub_82E61B68(ctx, base);
	// lwz r3,11128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11128);
	// bl 0x82e61bb8
	ctx.lr = 0x82DB6E34;
	sub_82E61BB8(ctx, base);
	// lwz r3,11128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11128);
	// bl 0x82e61c08
	ctx.lr = 0x82DB6E3C;
	sub_82E61C08(ctx, base);
	// lwz r3,11128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11128);
	// bl 0x82e65d08
	ctx.lr = 0x82DB6E44;
	sub_82E65D08(ctx, base);
	// lwz r3,11128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11128);
	// bl 0x82e65d58
	ctx.lr = 0x82DB6E4C;
	sub_82E65D58(ctx, base);
	// lwz r3,11128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11128);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82db6e74
	if (cr6.eq) goto loc_82DB6E74;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DB6E6C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,11128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11128, ctx.r11.u32);
loc_82DB6E74:
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

__attribute__((alias("__imp__sub_82DB6E88"))) PPC_WEAK_FUNC(sub_82DB6E88);
PPC_FUNC_IMPL(__imp__sub_82DB6E88) {
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
	// bl 0x82d86078
	ctx.lr = 0x82DB6E98;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82db6eb0
	if (!cr6.eq) goto loc_82DB6EB0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82DB6EB0:
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x825832f0
	ctx.lr = 0x82DB6EB8;
	sub_825832F0(ctx, base);
	// ld r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB6ECC"))) PPC_WEAK_FUNC(sub_82DB6ECC);
PPC_FUNC_IMPL(__imp__sub_82DB6ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB6ED0"))) PPC_WEAK_FUNC(sub_82DB6ED0);
PPC_FUNC_IMPL(__imp__sub_82DB6ED0) {
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
	ctx.lr = 0x82DB6EEC;
	sub_82D86078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82db6f00
	if (!cr6.eq) goto loc_82DB6F00;
loc_82DB6EF8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82db6f24
	goto loc_82DB6F24;
loc_82DB6F00:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x825832f0
	ctx.lr = 0x82DB6F08;
	sub_825832F0(ctx, base);
	// lwz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82db6ef8
	if (cr6.eq) goto loc_82DB6EF8;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x825832f0
	ctx.lr = 0x82DB6F1C;
	sub_825832F0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82dc3be8
	ctx.lr = 0x82DB6F24;
	sub_82DC3BE8(ctx, base);
loc_82DB6F24:
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

__attribute__((alias("__imp__sub_82DB6F3C"))) PPC_WEAK_FUNC(sub_82DB6F3C);
PPC_FUNC_IMPL(__imp__sub_82DB6F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB6F40"))) PPC_WEAK_FUNC(sub_82DB6F40);
PPC_FUNC_IMPL(__imp__sub_82DB6F40) {
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
	// bl 0x82d86078
	ctx.lr = 0x82DB6F58;
	sub_82D86078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82db6f6c
	if (!cr6.eq) goto loc_82DB6F6C;
loc_82DB6F64:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82db6fd4
	goto loc_82DB6FD4;
loc_82DB6F6C:
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x838257e0
	ctx.lr = 0x82DB6F74;
	sub_838257E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82db6f64
	if (cr6.eq) goto loc_82DB6F64;
	// bl 0x82d86078
	ctx.lr = 0x82DB6F84;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82db6f94
	if (!cr6.eq) goto loc_82DB6F94;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x82db6fa0
	goto loc_82DB6FA0;
loc_82DB6F94:
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x825832f0
	ctx.lr = 0x82DB6F9C;
	sub_825832F0(ctx, base);
	// ld r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
loc_82DB6FA0:
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x8307e040
	ctx.lr = 0x82DB6FA8;
	sub_8307E040(ctx, base);
	// lwz r9,40(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// ld r10,184(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 184);
	// cmpld cr6,r31,r10
	cr6.compare<uint64_t>(ctx.r31.u64, ctx.r10.u64, xer);
	// ld r9,72(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 72);
	// bge cr6,0x82db6fc4
	if (!cr6.lt) goto loc_82DB6FC4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82DB6FC4:
	// cmpld cr6,r11,r9
	cr6.compare<uint64_t>(ctx.r11.u64, ctx.r9.u64, xer);
	// bge cr6,0x82db6fd0
	if (!cr6.lt) goto loc_82DB6FD0;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82DB6FD0:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_82DB6FD4:
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

__attribute__((alias("__imp__sub_82DB6FEC"))) PPC_WEAK_FUNC(sub_82DB6FEC);
PPC_FUNC_IMPL(__imp__sub_82DB6FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB6FF0"))) PPC_WEAK_FUNC(sub_82DB6FF0);
PPC_FUNC_IMPL(__imp__sub_82DB6FF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82DB6FF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x830ff290
	ctx.lr = 0x82DB7008;
	sub_830FF290(ctx, base);
	// bl 0x830ffaa8
	ctx.lr = 0x82DB700C;
	sub_830FFAA8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x830ff290
	ctx.lr = 0x82DB7014;
	sub_830FF290(ctx, base);
	// cmplwi cr6,r31,18
	cr6.compare<uint32_t>(ctx.r31.u32, 18, xer);
	// beq cr6,0x82db7028
	if (cr6.eq) goto loc_82DB7028;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,60
	cr6.compare<uint32_t>(ctx.r11.u32, 60, xer);
	// bne cr6,0x82db70bc
	if (!cr6.eq) goto loc_82DB70BC;
loc_82DB7028:
	// bl 0x82d86078
	ctx.lr = 0x82DB702C;
	sub_82D86078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82db70bc
	if (cr6.eq) goto loc_82DB70BC;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x838257e0
	ctx.lr = 0x82DB7040;
	sub_838257E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82db70bc
	if (cr6.eq) goto loc_82DB70BC;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82db7074
	if (cr6.eq) goto loc_82DB7074;
	// bl 0x8307e040
	ctx.lr = 0x82DB7060;
	sub_8307E040(ctx, base);
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82DB7074:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(ctx.r29.s32, 0, xer);
	// bne cr6,0x82db70a0
	if (!cr6.eq) goto loc_82DB70A0;
	// bl 0x8307e040
	ctx.lr = 0x82DB7080;
	sub_8307E040(ctx, base);
	// lwz r10,80(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r10.u32);
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82DB70A0:
	// bl 0x8307e040
	ctx.lr = 0x82DB70A4;
	sub_8307E040(ctx, base);
	// lwz r10,84(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r10.u32);
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
loc_82DB70BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB70C4"))) PPC_WEAK_FUNC(sub_82DB70C4);
PPC_FUNC_IMPL(__imp__sub_82DB70C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB70C8"))) PPC_WEAK_FUNC(sub_82DB70C8);
PPC_FUNC_IMPL(__imp__sub_82DB70C8) {
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
	// bl 0x82d86078
	ctx.lr = 0x82DB70E0;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82db70fc
	if (!cr6.eq) goto loc_82DB70FC;
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
loc_82DB70FC:
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x825832f0
	ctx.lr = 0x82DB7104;
	sub_825832F0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82dc2f28
	ctx.lr = 0x82DB710C;
	sub_82DC2F28(ctx, base);
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

__attribute__((alias("__imp__sub_82DB7120"))) PPC_WEAK_FUNC(sub_82DB7120);
PPC_FUNC_IMPL(__imp__sub_82DB7120) {
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
	// bl 0x82e6e978
	ctx.lr = 0x82DB7138;
	sub_82E6E978(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82db7178
	if (cr6.eq) goto loc_82DB7178;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,176(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, xer);
	// bge cr6,0x82db7168
	if (!cr6.lt) goto loc_82DB7168;
	// li r3,3
	ctx.r3.s64 = 3;
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
loc_82DB7168:
	// lwz r11,180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 180);
	// li r3,2
	ctx.r3.s64 = 2;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// blt cr6,0x82db717c
	if (cr6.lt) goto loc_82DB717C;
loc_82DB7178:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82DB717C:
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

__attribute__((alias("__imp__sub_82DB7190"))) PPC_WEAK_FUNC(sub_82DB7190);
PPC_FUNC_IMPL(__imp__sub_82DB7190) {
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
	// bl 0x82e6e978
	ctx.lr = 0x82DB71A0;
	sub_82E6E978(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82db71b8
	if (!cr6.eq) goto loc_82DB71B8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82DB71B8:
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x82e877c8
	ctx.lr = 0x82DB71C0;
	sub_82E877C8(ctx, base);
	// not r11,r3
	ctx.r11.u64 = ~ctx.r3.u64;
	// rlwinm r3,r11,26,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB71D8"))) PPC_WEAK_FUNC(sub_82DB71D8);
PPC_FUNC_IMPL(__imp__sub_82DB71D8) {
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
	// bl 0x82d86078
	ctx.lr = 0x82DB71EC;
	sub_82D86078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82db7210
	if (cr6.eq) goto loc_82DB7210;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x82db50a8
	ctx.lr = 0x82DB7200;
	sub_82DB50A8(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82db5120
	ctx.lr = 0x82DB7208;
	sub_82DB5120(ctx, base);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x82df94b8
	ctx.lr = 0x82DB7210;
	sub_82DF94B8(ctx, base);
loc_82DB7210:
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

__attribute__((alias("__imp__sub_82DB7224"))) PPC_WEAK_FUNC(sub_82DB7224);
PPC_FUNC_IMPL(__imp__sub_82DB7224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB7228"))) PPC_WEAK_FUNC(sub_82DB7228);
PPC_FUNC_IMPL(__imp__sub_82DB7228) {
	PPC_FUNC_PROLOGUE();
	// b 0x82dcdfe0
	sub_82DCDFE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB722C"))) PPC_WEAK_FUNC(sub_82DB722C);
PPC_FUNC_IMPL(__imp__sub_82DB722C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB7230"))) PPC_WEAK_FUNC(sub_82DB7230);
PPC_FUNC_IMPL(__imp__sub_82DB7230) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x82db7260
	if (cr6.gt) goto loc_82DB7260;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82db7250
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82DB7250;
	// bdzf 4*cr6+eq,0x82db7258
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82DB7258;
	// bne cr6,0x82db7258
	if (!cr6.eq) goto loc_82DB7258;
loc_82DB7250:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x82db7260
	if (cr6.eq) goto loc_82DB7260;
loc_82DB7258:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82DB7260:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB7268"))) PPC_WEAK_FUNC(sub_82DB7268);
PPC_FUNC_IMPL(__imp__sub_82DB7268) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82DB7270;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82d86078
	ctx.lr = 0x82DB7280;
	sub_82D86078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82db7298
	if (!cr6.eq) goto loc_82DB7298;
loc_82DB728C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82DB7298:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x838257e0
	ctx.lr = 0x82DB72A0;
	sub_838257E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82db728c
	if (cr6.eq) goto loc_82DB728C;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8307e040
	ctx.lr = 0x82DB72B4;
	sub_8307E040(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// bl 0x82dba2a8
	ctx.lr = 0x82DB72D4;
	sub_82DBA2A8(ctx, base);
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// beq cr6,0x82db728c
	if (cr6.eq) goto loc_82DB728C;
	// bl 0x83a7d958
	ctx.lr = 0x82DB72E4;
	sub_83A7D958(ctx, base);
	// bl 0x83524138
	ctx.lr = 0x82DB72E8;
	sub_83524138(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ori r9,r11,60000
	ctx.r9.u64 = ctx.r11.u64 | 60000;
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpld cr6,r3,r8
	cr6.compare<uint64_t>(ctx.r3.u64, ctx.r8.u64, xer);
	// bgt cr6,0x82db728c
	if (cr6.gt) goto loc_82DB728C;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB731C"))) PPC_WEAK_FUNC(sub_82DB731C);
PPC_FUNC_IMPL(__imp__sub_82DB731C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB7320"))) PPC_WEAK_FUNC(sub_82DB7320);
PPC_FUNC_IMPL(__imp__sub_82DB7320) {
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
	// bl 0x830ff290
	ctx.lr = 0x82DB7330;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r11,r11,-60
	ctx.r11.s64 = ctx.r11.s64 + -60;
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
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB7350"))) PPC_WEAK_FUNC(sub_82DB7350);
PPC_FUNC_IMPL(__imp__sub_82DB7350) {
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
	// bl 0x830ff290
	ctx.lr = 0x82DB7360;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,46
	cr6.compare<uint32_t>(ctx.r11.u32, 46, xer);
	// beq cr6,0x82db7378
	if (cr6.eq) goto loc_82DB7378;
	// cmplwi cr6,r11,60
	cr6.compare<uint32_t>(ctx.r11.u32, 60, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne cr6,0x82db737c
	if (!cr6.eq) goto loc_82DB737C;
loc_82DB7378:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82DB737C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB738C"))) PPC_WEAK_FUNC(sub_82DB738C);
PPC_FUNC_IMPL(__imp__sub_82DB738C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB7390"))) PPC_WEAK_FUNC(sub_82DB7390);
PPC_FUNC_IMPL(__imp__sub_82DB7390) {
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
	// bl 0x830ff290
	ctx.lr = 0x82DB73A0;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r11,r11,-60
	ctx.r11.s64 = ctx.r11.s64 + -60;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82db73cc
	if (!cr6.eq) goto loc_82DB73CC;
loc_82DB73B8:
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
loc_82DB73CC:
	// bl 0x82d86078
	ctx.lr = 0x82DB73D0;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82db73b8
	if (cr6.eq) goto loc_82DB73B8;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x82DB73E0;
	sub_825832D8(ctx, base);
	// bl 0x82d99c10
	ctx.lr = 0x82DB73E4;
	sub_82D99C10(ctx, base);
	// bl 0x825832f0
	ctx.lr = 0x82DB73E8;
	sub_825832F0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82db73b8
	if (cr6.eq) goto loc_82DB73B8;
	// bl 0x82d986b8
	ctx.lr = 0x82DB73F4;
	sub_82D986B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB7404"))) PPC_WEAK_FUNC(sub_82DB7404);
PPC_FUNC_IMPL(__imp__sub_82DB7404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB7408"))) PPC_WEAK_FUNC(sub_82DB7408);
PPC_FUNC_IMPL(__imp__sub_82DB7408) {
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
	// bl 0x830ff290
	ctx.lr = 0x82DB7418;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r11,r11,-60
	ctx.r11.s64 = ctx.r11.s64 + -60;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82db7444
	if (!cr6.eq) goto loc_82DB7444;
loc_82DB7430:
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
loc_82DB7444:
	// bl 0x82d86078
	ctx.lr = 0x82DB7448;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82db7430
	if (cr6.eq) goto loc_82DB7430;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x82DB7458;
	sub_825832D8(ctx, base);
	// bl 0x82d99c10
	ctx.lr = 0x82DB745C;
	sub_82D99C10(ctx, base);
	// bl 0x825832f0
	ctx.lr = 0x82DB7460;
	sub_825832F0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82db7430
	if (cr6.eq) goto loc_82DB7430;
	// bl 0x82d986e8
	ctx.lr = 0x82DB746C;
	sub_82D986E8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB747C"))) PPC_WEAK_FUNC(sub_82DB747C);
PPC_FUNC_IMPL(__imp__sub_82DB747C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB7480"))) PPC_WEAK_FUNC(sub_82DB7480);
PPC_FUNC_IMPL(__imp__sub_82DB7480) {
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
	// bl 0x830ff290
	ctx.lr = 0x82DB7490;
	sub_830FF290(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r11,r11,-60
	ctx.r11.s64 = ctx.r11.s64 + -60;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82db74bc
	if (!cr6.eq) goto loc_82DB74BC;
loc_82DB74A8:
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
loc_82DB74BC:
	// bl 0x82d86078
	ctx.lr = 0x82DB74C0;
	sub_82D86078(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82db74a8
	if (cr6.eq) goto loc_82DB74A8;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// bl 0x825832d8
	ctx.lr = 0x82DB74D0;
	sub_825832D8(ctx, base);
	// bl 0x82d99c10
	ctx.lr = 0x82DB74D4;
	sub_82D99C10(ctx, base);
	// bl 0x825832f0
	ctx.lr = 0x82DB74D8;
	sub_825832F0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82db74a8
	if (cr6.eq) goto loc_82DB74A8;
	// bl 0x82d98d38
	ctx.lr = 0x82DB74E4;
	sub_82D98D38(ctx, base);
	// li r11,11
	ctx.r11.s64 = 11;
	// li r10,-1
	ctx.r10.s64 = -1;
	// subfc r11,r11,r3
	xer.ca = ctx.r3.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// subfze r3,r10
	temp.u8 = ~ctx.r10.u32 + xer.ca < xer.ca;
	ctx.r3.u64 = ~ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB7504"))) PPC_WEAK_FUNC(sub_82DB7504);
PPC_FUNC_IMPL(__imp__sub_82DB7504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB7508"))) PPC_WEAK_FUNC(sub_82DB7508);
PPC_FUNC_IMPL(__imp__sub_82DB7508) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82DB7510;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82da8d18
	ctx.lr = 0x82DB751C;
	sub_82DA8D18(ctx, base);
	// addi r30,r31,56
	ctx.r30.s64 = ctx.r31.s64 + 56;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da8d18
	ctx.lr = 0x82DB7528;
	sub_82DA8D18(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DB753C;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da87d0
	ctx.lr = 0x82DB7544;
	sub_82DA87D0(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r29,104(r31)
	PPC_STORE_U8(ctx.r31.u32 + 104, ctx.r29.u8);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82DB7560;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stb r29,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r29.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,56(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82DB7578;
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82da87d0
	ctx.lr = 0x82DB7580;
	sub_82DA87D0(ctx, base);
	// stb r29,104(r31)
	PPC_STORE_U8(ctx.r31.u32 + 104, ctx.r29.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB7590"))) PPC_WEAK_FUNC(sub_82DB7590);
PPC_FUNC_IMPL(__imp__sub_82DB7590) {
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
	// bl 0x82d86078
	ctx.lr = 0x82DB75A4;
	sub_82D86078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82db75c8
	if (!cr6.eq) goto loc_82DB75C8;
loc_82DB75B0:
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
loc_82DB75C8:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x838257e0
	ctx.lr = 0x82DB75D0;
	sub_838257E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82db75b0
	if (cr6.eq) goto loc_82DB75B0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8307e040
	ctx.lr = 0x82DB75E4;
	sub_8307E040(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
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

__attribute__((alias("__imp__sub_82DB75FC"))) PPC_WEAK_FUNC(sub_82DB75FC);
PPC_FUNC_IMPL(__imp__sub_82DB75FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB7600"))) PPC_WEAK_FUNC(sub_82DB7600);
PPC_FUNC_IMPL(__imp__sub_82DB7600) {
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
	// bl 0x82da8fd0
	ctx.lr = 0x82DB7620;
	sub_82DA8FD0(ctx, base);
	// lbz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 48);
	// addi r3,r31,57
	ctx.r3.s64 = ctx.r31.s64 + 57;
	// addi r4,r30,57
	ctx.r4.s64 = ctx.r30.s64 + 57;
	// li r5,36
	ctx.r5.s64 = 36;
	// stb r11,48(r31)
	PPC_STORE_U8(ctx.r31.u32 + 48, ctx.r11.u8);
	// lwz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// lbz r9,56(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 56);
	// stb r9,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r9.u8);
	// bl 0x831ce980
	ctx.lr = 0x82DB7648;
	sub_831CE980(ctx, base);
	// lwz r8,96(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// addi r4,r30,104
	ctx.r4.s64 = ctx.r30.s64 + 104;
	// stw r8,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
	// lbz r7,100(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 100);
	// stb r7,100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 100, ctx.r7.u8);
	// bl 0x82b744e0
	ctx.lr = 0x82DB7664;
	sub_82B744E0(ctx, base);
	// lbz r6,160(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 160);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r6,160(r31)
	PPC_STORE_U8(ctx.r31.u32 + 160, ctx.r6.u8);
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

__attribute__((alias("__imp__sub_82DB7688"))) PPC_WEAK_FUNC(sub_82DB7688);
PPC_FUNC_IMPL(__imp__sub_82DB7688) {
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
	// bl 0x82dcdfe0
	ctx.lr = 0x82DB769C;
	sub_82DCDFE0(ctx, base);
	// bl 0x82e61fc0
	ctx.lr = 0x82DB76A0;
	sub_82E61FC0(ctx, base);
	// bl 0x82dc60a8
	ctx.lr = 0x82DB76A4;
	sub_82DC60A8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82db76b0
	if (cr6.eq) goto loc_82DB76B0;
	// bl 0x82dc60b8
	ctx.lr = 0x82DB76B0;
	sub_82DC60B8(ctx, base);
loc_82DB76B0:
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// lwz r11,11128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82db76c4
	if (cr6.eq) goto loc_82DB76C4;
	// bl 0x82db6e08
	ctx.lr = 0x82DB76C4;
	sub_82DB6E08(ctx, base);
loc_82DB76C4:
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// lwz r11,10752(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10752);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82db76d8
	if (cr6.eq) goto loc_82DB76D8;
	// bl 0x82e613e0
	ctx.lr = 0x82DB76D8;
	sub_82E613E0(ctx, base);
loc_82DB76D8:
	// bl 0x82d86078
	ctx.lr = 0x82DB76DC;
	sub_82D86078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82db76f8
	if (cr6.eq) goto loc_82DB76F8;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x82db5b50
	ctx.lr = 0x82DB76F0;
	sub_82DB5B50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82d86410
	ctx.lr = 0x82DB76F8;
	sub_82D86410(ctx, base);
loc_82DB76F8:
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

__attribute__((alias("__imp__sub_82DB770C"))) PPC_WEAK_FUNC(sub_82DB770C);
PPC_FUNC_IMPL(__imp__sub_82DB770C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB7710"))) PPC_WEAK_FUNC(sub_82DB7710);
PPC_FUNC_IMPL(__imp__sub_82DB7710) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82DB7718;
	__savegprlr_29(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82DB7724;
	sub_82D86078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82db77fc
	if (cr6.eq) goto loc_82DB77FC;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x838257e0
	ctx.lr = 0x82DB7738;
	sub_838257E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82db77fc
	if (cr6.eq) goto loc_82DB77FC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b745c8
	ctx.lr = 0x82DB774C;
	sub_82B745C8(ctx, base);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r29,32(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x8307e040
	ctx.lr = 0x82DB7758;
	sub_8307E040(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82dbaa48
	ctx.lr = 0x82DB7764;
	sub_82DBAA48(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82db77ec
	if (cr6.eq) goto loc_82DB77EC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da8e68
	ctx.lr = 0x82DB777C;
	sub_82DA8E68(ctx, base);
	// lbz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// addi r3,r31,57
	ctx.r3.s64 = ctx.r31.s64 + 57;
	// addi r4,r1,129
	ctx.r4.s64 = ctx.r1.s64 + 129;
	// li r5,36
	ctx.r5.s64 = 36;
	// stb r11,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r11.u8);
	// bl 0x831ce980
	ctx.lr = 0x82DB7794;
	sub_831CE980(ctx, base);
	// lwz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// lbz r9,172(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 172);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// stw r10,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// stb r9,100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 100, ctx.r9.u8);
	// bl 0x82da8e68
	ctx.lr = 0x82DB77B0;
	sub_82DA8E68(ctx, base);
	// lbz r8,224(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 224);
	// stb r8,152(r31)
	PPC_STORE_U8(ctx.r31.u32 + 152, ctx.r8.u8);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r30,32(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x8307e040
	ctx.lr = 0x82DB77C4;
	sub_8307E040(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82dbb0a0
	ctx.lr = 0x82DB77CC;
	sub_82DBB0A0(ctx, base);
	// stb r3,160(r31)
	PPC_STORE_U8(ctx.r31.u32 + 160, ctx.r3.u8);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82da8c38
	ctx.lr = 0x82DB77D8;
	sub_82DA8C38(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82da8c38
	ctx.lr = 0x82DB77E0;
	sub_82DA8C38(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82DB77EC:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82da8c38
	ctx.lr = 0x82DB77F4;
	sub_82DA8C38(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82da8c38
	ctx.lr = 0x82DB77FC;
	sub_82DA8C38(ctx, base);
loc_82DB77FC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB7808"))) PPC_WEAK_FUNC(sub_82DB7808);
PPC_FUNC_IMPL(__imp__sub_82DB7808) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,137(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 137);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,137(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 137);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82db7854
	if (!cr6.eq) goto loc_82DB7854;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r9,137(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 137);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82db784c
	if (!cr6.eq) goto loc_82DB784C;
loc_82DB7838:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,137(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 137);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82db7838
	if (cr6.eq) goto loc_82DB7838;
loc_82DB784C:
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_82DB7854:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,137(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 137);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82db788c
	if (!cr6.eq) goto loc_82DB788C;
loc_82DB7864:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82db788c
	if (!cr6.eq) goto loc_82DB788C;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,137(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 137);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82db7864
	if (cr6.eq) goto loc_82DB7864;
loc_82DB788C:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB7894"))) PPC_WEAK_FUNC(sub_82DB7894);
PPC_FUNC_IMPL(__imp__sub_82DB7894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB7898"))) PPC_WEAK_FUNC(sub_82DB7898);
PPC_FUNC_IMPL(__imp__sub_82DB7898) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,137(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 137);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82db78b8
	if (!cr6.eq) goto loc_82DB78B8;
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_82DB78B8:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x82db78e0
	if (!cr6.eq) goto loc_82DB78E0;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_82DB78E0:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x82db7900
	if (!cr6.eq) goto loc_82DB7900;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_82DB7900:
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB7910"))) PPC_WEAK_FUNC(sub_82DB7910);
PPC_FUNC_IMPL(__imp__sub_82DB7910) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,137(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 137);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82db7930
	if (!cr6.eq) goto loc_82DB7930;
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_82DB7930:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x82db7958
	if (!cr6.eq) goto loc_82DB7958;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_82DB7958:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x82db7978
	if (!cr6.eq) goto loc_82DB7978;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_82DB7978:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB7988"))) PPC_WEAK_FUNC(sub_82DB7988);
PPC_FUNC_IMPL(__imp__sub_82DB7988) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,137(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 137);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82db79a4
	if (cr6.eq) goto loc_82DB79A4;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82DB79A4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,137(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 137);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82db79e0
	if (!cr6.eq) goto loc_82DB79E0;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lbz r9,137(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 137);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82db79d8
	if (!cr6.eq) goto loc_82DB79D8;
loc_82DB79C4:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,137(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 137);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82db79c4
	if (cr6.eq) goto loc_82DB79C4;
loc_82DB79D8:
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_82DB79E0:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,137(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 137);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82db7a18
	if (!cr6.eq) goto loc_82DB7A18;
loc_82DB79F0:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82db7a18
	if (!cr6.eq) goto loc_82DB7A18;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,137(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 137);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82db79f0
	if (cr6.eq) goto loc_82DB79F0;
loc_82DB7A18:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r9,137(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 137);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB7A30"))) PPC_WEAK_FUNC(sub_82DB7A30);
PPC_FUNC_IMPL(__imp__sub_82DB7A30) {
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
	// lwz r3,564(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 564);
	// li r11,24
	ctx.r11.s64 = 24;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// beq cr6,0x82db7a5c
	if (cr6.eq) goto loc_82DB7A5C;
	// bl 0x82e744c8
	ctx.lr = 0x82DB7A5C;
	sub_82E744C8(ctx, base);
loc_82DB7A5C:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82db7a74
	if (cr6.eq) goto loc_82DB7A74;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,564(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 564);
	// bl 0x82e74450
	ctx.lr = 0x82DB7A74;
	sub_82E74450(ctx, base);
loc_82DB7A74:
	// lbz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
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

__attribute__((alias("__imp__sub_82DB7A8C"))) PPC_WEAK_FUNC(sub_82DB7A8C);
PPC_FUNC_IMPL(__imp__sub_82DB7A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB7A90"))) PPC_WEAK_FUNC(sub_82DB7A90);
PPC_FUNC_IMPL(__imp__sub_82DB7A90) {
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
	// bl 0x82dad2e0
	ctx.lr = 0x82DB7AA0;
	sub_82DAD2E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82db7ad8
	if (cr6.eq) goto loc_82DB7AD8;
	// lwz r3,564(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 564);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82db7ab8
	if (cr6.eq) goto loc_82DB7AB8;
	// bl 0x82e744c8
	ctx.lr = 0x82DB7AB8;
	sub_82E744C8(ctx, base);
loc_82DB7AB8:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82db7ad8
	if (cr6.eq) goto loc_82DB7AD8;
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
loc_82DB7AD8:
	// lis r11,-31757
	ctx.r11.s64 = -2081226752;
	// lwz r11,-31456(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31456);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82db7afc
	if (cr6.eq) goto loc_82DB7AFC;
	// lbz r3,446(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 446);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82DB7AFC:
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

__attribute__((alias("__imp__sub_82DB7B10"))) PPC_WEAK_FUNC(sub_82DB7B10);
PPC_FUNC_IMPL(__imp__sub_82DB7B10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82DB7B18;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,546
	ctx.r10.s64 = 35782656;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// ori r9,r10,8737
	ctx.r9.u64 = ctx.r10.u64 | 8737;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x82db7b70
	if (cr6.lt) goto loc_82DB7B70;
	// addi r31,r7,24
	ctx.r31.s64 = ctx.r7.s64 + 24;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x82da8c38
	ctx.lr = 0x82DB7B48;
	sub_82DA8C38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da8c38
	ctx.lr = 0x82DB7B50;
	sub_82DA8C38(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825952b8
	ctx.lr = 0x82DB7B64;
	sub_825952B8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r10,12808
	ctx.r3.s64 = ctx.r10.s64 + 12808;
	// bl 0x831cc150
	ctx.lr = 0x82DB7B70;
	sub_831CC150(ctx, base);
loc_82DB7B70:
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
	// bne cr6,0x82db7ba0
	if (!cr6.eq) goto loc_82DB7BA0;
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
	// b 0x82db7be0
	goto loc_82DB7BE0;
loc_82DB7BA0:
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82db7bc8
	if (cr6.eq) goto loc_82DB7BC8;
	// stw r27,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r27.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// bne cr6,0x82db7be0
	if (!cr6.eq) goto loc_82DB7BE0;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// b 0x82db7be0
	goto loc_82DB7BE0;
loc_82DB7BC8:
	// stw r27,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r27.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// bne cr6,0x82db7be0
	if (!cr6.eq) goto loc_82DB7BE0;
	// stw r27,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r27.u32);
loc_82DB7BE0:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// lbz r10,136(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 136);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82db7d04
	if (!cr6.eq) goto loc_82DB7D04;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82DB7BFC:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bne cr6,0x82db7c84
	if (!cr6.eq) goto loc_82DB7C84;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r10,136(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 136);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82db7c44
	if (!cr6.eq) goto loc_82DB7C44;
	// rotlwi r10,r4,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stb r29,136(r10)
	PPC_STORE_U8(ctx.r10.u32 + 136, ctx.r29.u8);
	// stb r29,136(r11)
	PPC_STORE_U8(ctx.r11.u32 + 136, ctx.r29.u8);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r28,136(r8)
	PPC_STORE_U8(ctx.r8.u32 + 136, ctx.r28.u8);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r31,4(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// b 0x82db7cf4
	goto loc_82DB7CF4;
loc_82DB7C44:
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x82db7c5c
	if (!cr6.eq) goto loc_82DB7C5C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82db7898
	ctx.lr = 0x82DB7C5C;
	sub_82DB7898(ctx, base);
loc_82DB7C5C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r29,136(r11)
	PPC_STORE_U8(ctx.r11.u32 + 136, ctx.r29.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r28,136(r9)
	PPC_STORE_U8(ctx.r9.u32 + 136, ctx.r28.u8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x82db7910
	ctx.lr = 0x82DB7C80;
	sub_82DB7910(ctx, base);
	// b 0x82db7cf4
	goto loc_82DB7CF4;
loc_82DB7C84:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,136(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 136);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82db7cb8
	if (!cr6.eq) goto loc_82DB7CB8;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r29,136(r10)
	PPC_STORE_U8(ctx.r10.u32 + 136, ctx.r29.u8);
	// stb r29,136(r11)
	PPC_STORE_U8(ctx.r11.u32 + 136, ctx.r29.u8);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r28,136(r8)
	PPC_STORE_U8(ctx.r8.u32 + 136, ctx.r28.u8);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r31,4(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// b 0x82db7cf4
	goto loc_82DB7CF4;
loc_82DB7CB8:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// bne cr6,0x82db7cd0
	if (!cr6.eq) goto loc_82DB7CD0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82db7910
	ctx.lr = 0x82DB7CD0;
	sub_82DB7910(ctx, base);
loc_82DB7CD0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r29,136(r11)
	PPC_STORE_U8(ctx.r11.u32 + 136, ctx.r29.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r28,136(r9)
	PPC_STORE_U8(ctx.r9.u32 + 136, ctx.r28.u8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x82db7898
	ctx.lr = 0x82DB7CF4;
	sub_82DB7898(ctx, base);
loc_82DB7CF4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r10,136(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 136);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82db7bfc
	if (cr6.eq) goto loc_82DB7BFC;
loc_82DB7D04:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r27,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r27.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stb r29,136(r10)
	PPC_STORE_U8(ctx.r10.u32 + 136, ctx.r29.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB7D20"))) PPC_WEAK_FUNC(sub_82DB7D20);
PPC_FUNC_IMPL(__imp__sub_82DB7D20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lbz r9,137(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 137);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82db7d60
	if (!cr6.eq) goto loc_82DB7D60;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
loc_82DB7D38:
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bge cr6,0x82db7d4c
	if (!cr6.lt) goto loc_82DB7D4C;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82db7d54
	goto loc_82DB7D54;
loc_82DB7D4C:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82DB7D54:
	// lbz r8,137(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 137);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82db7d38
	if (cr6.eq) goto loc_82DB7D38;
loc_82DB7D60:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// beq cr6,0x82db7d90
	if (cr6.eq) goto loc_82DB7D90;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// blt cr6,0x82db7d90
	if (cr6.lt) goto loc_82DB7D90;
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82DB7D90:
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// addi r11,r1,-12
	ctx.r11.s64 = ctx.r1.s64 + -12;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB7DA4"))) PPC_WEAK_FUNC(sub_82DB7DA4);
PPC_FUNC_IMPL(__imp__sub_82DB7DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB7DA8"))) PPC_WEAK_FUNC(sub_82DB7DA8);
PPC_FUNC_IMPL(__imp__sub_82DB7DA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82DB7DB0;
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
	// bne cr6,0x82db7dec
	if (!cr6.eq) goto loc_82DB7DEC;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// lwz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x83587190
	ctx.lr = 0x82DB7DE0;
	sub_83587190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82DB7DEC:
	// lwz r25,4(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bne cr6,0x82db7e30
	if (!cr6.eq) goto loc_82DB7E30;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82db7f2c
	if (!cr6.lt) goto loc_82DB7F2C;
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
	// bl 0x83587190
	ctx.lr = 0x82DB7E24;
	sub_83587190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82DB7E30:
	// cmplw cr6,r30,r25
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, xer);
	// bne cr6,0x82db7e6c
	if (!cr6.eq) goto loc_82DB7E6C;
	// lwz r6,8(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bge cr6,0x82db7f2c
	if (!cr6.lt) goto loc_82DB7F2C;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83587190
	ctx.lr = 0x82DB7E60;
	sub_83587190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82DB7E6C:
	// lwz r27,12(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r26,12(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplw cr6,r26,r27
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r27.u32, xer);
	// ble cr6,0x82db7ed0
	if (!cr6.gt) goto loc_82DB7ED0;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x833e7410
	ctx.lr = 0x82DB7E88;
	sub_833E7410(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, xer);
	// bge cr6,0x82db7ecc
	if (!cr6.lt) goto loc_82DB7ECC;
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82db7f18
	if (!cr6.eq) goto loc_82DB7F18;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
loc_82DB7EB8:
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x83587190
	ctx.lr = 0x82DB7EC0;
	sub_83587190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82DB7ECC:
	// cmplw cr6,r26,r27
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r27.u32, xer);
loc_82DB7ED0:
	// bge cr6,0x82db7f2c
	if (!cr6.lt) goto loc_82DB7F2C;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8330ee50
	ctx.lr = 0x82DB7EE0;
	sub_8330EE50(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r6,r25
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r25.u32, xer);
	// beq cr6,0x82db7ef8
	if (cr6.eq) goto loc_82DB7EF8;
	// lwz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, xer);
	// bge cr6,0x82db7f2c
	if (!cr6.lt) goto loc_82DB7F2C;
loc_82DB7EF8:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82db7eb8
	if (cr6.eq) goto loc_82DB7EB8;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
loc_82DB7F18:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x83587190
	ctx.lr = 0x82DB7F20;
	sub_83587190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82DB7F2C:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x837ba1c0
	ctx.lr = 0x82DB7F40;
	sub_837BA1C0(ctx, base);
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

__attribute__((alias("__imp__sub_82DB7F58"))) PPC_WEAK_FUNC(sub_82DB7F58);
PPC_FUNC_IMPL(__imp__sub_82DB7F58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82DB7F60;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,4(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r25,1
	ctx.r25.s64 = 1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lbz r10,137(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 137);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82db7fe4
	if (!cr6.eq) goto loc_82DB7FE4;
	// lwz r9,16(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// clrlwi r7,r6,24
	ctx.r7.u64 = ctx.r6.u32 & 0xFF;
	// li r8,-1
	ctx.r8.s64 = -1;
loc_82DB7F98:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82db7fb4
	if (cr6.eq) goto loc_82DB7FB4;
	// subfc r10,r9,r10
	xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subfze r31,r8
	temp.u8 = ~ctx.r8.u32 + xer.ca < xer.ca;
	ctx.r31.u64 = ~ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x82db7fc0
	goto loc_82DB7FC0;
loc_82DB7FB4:
	// subfc r6,r10,r9
	xer.ca = ctx.r9.u32 >= ctx.r10.u32;
	ctx.r6.s64 = ctx.r9.s64 - ctx.r10.s64;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r31,r4,31
	ctx.r31.u64 = ctx.r4.u32 & 0x1;
loc_82DB7FC0:
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82db7fd4
	if (cr6.eq) goto loc_82DB7FD4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82db7fd8
	goto loc_82DB7FD8;
loc_82DB7FD4:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_82DB7FD8:
	// lbz r10,137(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 137);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82db7f98
	if (cr6.eq) goto loc_82DB7F98;
loc_82DB7FE4:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82db8044
	if (cr6.eq) goto loc_82DB8044;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, xer);
	// bne cr6,0x82db803c
	if (!cr6.eq) goto loc_82DB803C;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82db7b10
	ctx.lr = 0x82DB8020;
	sub_82DB7B10(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r25,4(r29)
	PPC_STORE_U8(ctx.r29.u32 + 4, ctx.r25.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82DB803C:
	// bl 0x82db7988
	ctx.lr = 0x82DB8040;
	sub_82DB7988(ctx, base);
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82DB8044:
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r10,16(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82db8088
	if (!cr6.lt) goto loc_82DB8088;
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
	// bl 0x82db7b10
	ctx.lr = 0x82DB806C;
	sub_82DB7B10(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r25,4(r29)
	PPC_STORE_U8(ctx.r29.u32 + 4, ctx.r25.u8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82DB8088:
	// addi r31,r27,24
	ctx.r31.s64 = ctx.r27.s64 + 24;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x82da8c38
	ctx.lr = 0x82DB8094;
	sub_82DA8C38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82da8c38
	ctx.lr = 0x82DB809C;
	sub_82DA8C38(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825952b8
	ctx.lr = 0x82DB80B0;
	sub_825952B8(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r28,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r10,4(r29)
	PPC_STORE_U8(ctx.r29.u32 + 4, ctx.r10.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB80C8"))) PPC_WEAK_FUNC(sub_82DB80C8);
PPC_FUNC_IMPL(__imp__sub_82DB80C8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82d86078
	ctx.lr = 0x82DB80E4;
	sub_82D86078(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82db8168
	if (cr6.eq) goto loc_82DB8168;
	// bl 0x82dcb878
	ctx.lr = 0x82DB80F4;
	sub_82DCB878(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82db8168
	if (cr6.eq) goto loc_82DB8168;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stb r11,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r11.u8);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82da90b8
	ctx.lr = 0x82DB8124;
	sub_82DA90B8(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82db8160
	if (cr6.eq) goto loc_82DB8160;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// bge cr6,0x82db8144
	if (!cr6.lt) goto loc_82DB8144;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
loc_82DB8144:
	// lis r4,81
	ctx.r4.s64 = 5308416;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,350
	ctx.r4.u64 = ctx.r4.u64 | 350;
	// bl 0x82d042a8
	ctx.lr = 0x82DB8154;
	sub_82D042A8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x838760e0
	ctx.lr = 0x82DB815C;
	sub_838760E0(ctx, base);
	// b 0x82db8178
	goto loc_82DB8178;
loc_82DB8160:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x838760e0
	ctx.lr = 0x82DB8168;
	sub_838760E0(ctx, base);
loc_82DB8168:
	// lis r4,508
	ctx.r4.s64 = 33292288;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,41
	ctx.r4.u64 = ctx.r4.u64 | 41;
	// bl 0x82d042a8
	ctx.lr = 0x82DB8178;
	sub_82D042A8(ctx, base);
loc_82DB8178:
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

__attribute__((alias("__imp__sub_82DB8190"))) PPC_WEAK_FUNC(sub_82DB8190);
PPC_FUNC_IMPL(__imp__sub_82DB8190) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdadc
	ctx.lr = 0x82DB8198;
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
	// bne cr6,0x82db81d4
	if (!cr6.eq) goto loc_82DB81D4;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// lwz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82db7b10
	ctx.lr = 0x82DB81C8;
	sub_82DB7B10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82DB81D4:
	// lwz r25,4(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// bne cr6,0x82db8218
	if (!cr6.eq) goto loc_82DB8218;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82db8314
	if (!cr6.lt) goto loc_82DB8314;
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
	// bl 0x82db7b10
	ctx.lr = 0x82DB820C;
	sub_82DB7B10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82DB8218:
	// cmplw cr6,r30,r25
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, xer);
	// bne cr6,0x82db8254
	if (!cr6.eq) goto loc_82DB8254;
	// lwz r6,8(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r10,16(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bge cr6,0x82db8314
	if (!cr6.lt) goto loc_82DB8314;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82db7b10
	ctx.lr = 0x82DB8248;
	sub_82DB7B10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82DB8254:
	// lwz r27,16(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r26,16(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplw cr6,r26,r27
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r27.u32, xer);
	// ble cr6,0x82db82b8
	if (!cr6.gt) goto loc_82DB82B8;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82db7988
	ctx.lr = 0x82DB8270;
	sub_82DB7988(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,16(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, xer);
	// bge cr6,0x82db82b4
	if (!cr6.lt) goto loc_82DB82B4;
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r10,137(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 137);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82db8300
	if (!cr6.eq) goto loc_82DB8300;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
loc_82DB82A0:
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82db7b10
	ctx.lr = 0x82DB82A8;
	sub_82DB7B10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82DB82B4:
	// cmplw cr6,r26,r27
	cr6.compare<uint32_t>(ctx.r26.u32, ctx.r27.u32, xer);
loc_82DB82B8:
	// bge cr6,0x82db8314
	if (!cr6.lt) goto loc_82DB8314;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82db7808
	ctx.lr = 0x82DB82C8;
	sub_82DB7808(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r6,r25
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r25.u32, xer);
	// beq cr6,0x82db82e0
	if (cr6.eq) goto loc_82DB82E0;
	// lwz r11,16(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, xer);
	// bge cr6,0x82db8314
	if (!cr6.lt) goto loc_82DB8314;
loc_82DB82E0:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r10,137(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 137);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82db82a0
	if (cr6.eq) goto loc_82DB82A0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
loc_82DB8300:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82db7b10
	ctx.lr = 0x82DB8308;
	sub_82DB7B10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb2c
	__restgprlr_25(ctx, base);
	return;
loc_82DB8314:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82db7f58
	ctx.lr = 0x82DB8328;
	sub_82DB7F58(ctx, base);
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

__attribute__((alias("__imp__sub_82DB8340"))) PPC_WEAK_FUNC(sub_82DB8340);
PPC_FUNC_IMPL(__imp__sub_82DB8340) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae4
	ctx.lr = 0x82DB8348;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,144
	ctx.r4.s64 = 144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82595718
	ctx.lr = 0x82DB836C;
	sub_82595718(ctx, base);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addic. r30,r3,16
	xer.ca = ctx.r3.u32 > 4294967279;
	ctx.r30.s64 = ctx.r3.s64 + 16;
	cr0.compare<int32_t>(ctx.r30.s32, 0, xer);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lwz r8,4(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// stb r11,136(r3)
	PPC_STORE_U8(ctx.r3.u32 + 136, ctx.r11.u8);
	// stb r11,137(r3)
	PPC_STORE_U8(ctx.r3.u32 + 137, ctx.r11.u8);
	// beq 0x82db83cc
	if (cr0.eq) goto loc_82DB83CC;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r28,r29,8
	ctx.r28.s64 = ctx.r29.s64 + 8;
	// addi r27,r30,8
	ctx.r27.s64 = ctx.r30.s64 + 8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82da8fd0
	ctx.lr = 0x82DB83B8;
	sub_82DA8FD0(ctx, base);
	// lbz r10,56(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 56);
	// addi r4,r28,56
	ctx.r4.s64 = ctx.r28.s64 + 56;
	// addi r3,r27,56
	ctx.r3.s64 = ctx.r27.s64 + 56;
	// stb r10,56(r30)
	PPC_STORE_U8(ctx.r30.u32 + 56, ctx.r10.u8);
	// bl 0x82b744e0
	ctx.lr = 0x82DB83CC;
	sub_82B744E0(ctx, base);
loc_82DB83CC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831cdb34
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB83D8"))) PPC_WEAK_FUNC(sub_82DB83D8);
PPC_FUNC_IMPL(__imp__sub_82DB83D8) {
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
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82db8430
	if (!cr6.eq) goto loc_82DB8430;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82DB8408:
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x82db841c
	if (!cr6.lt) goto loc_82DB841C;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82db8424
	goto loc_82DB8424;
loc_82DB841C:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82DB8424:
	// lbz r9,21(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82db8408
	if (cr6.eq) goto loc_82DB8408;
loc_82DB8430:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, xer);
	// beq cr6,0x82db844c
	if (cr6.eq) goto loc_82DB844C;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82db8488
	if (!cr6.lt) goto loc_82DB8488;
loc_82DB844C:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r10,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r10.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82bea3a0
	ctx.lr = 0x82DB8468;
	sub_82BEA3A0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82db7da8
	ctx.lr = 0x82DB847C;
	sub_82DB7DA8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// b 0x82db848c
	goto loc_82DB848C;
loc_82DB8488:
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
loc_82DB848C:
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

__attribute__((alias("__imp__sub_82DB84A4"))) PPC_WEAK_FUNC(sub_82DB84A4);
PPC_FUNC_IMPL(__imp__sub_82DB84A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB84A8"))) PPC_WEAK_FUNC(sub_82DB84A8);
PPC_FUNC_IMPL(__imp__sub_82DB84A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdae0
	ctx.lr = 0x82DB84B0;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,390
	ctx.r11.s64 = 25559040;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,6241
	ctx.r10.u64 = ctx.r11.u64 | 6241;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82db84d4
	if (!cr6.gt) goto loc_82DB84D4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// bl 0x831cc150
	ctx.lr = 0x82DB84D4;
	sub_831CC150(ctx, base);
loc_82DB84D4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r26,168
	ctx.r26.s64 = 168;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r8,r9,r26
	ctx.r8.s32 = PPCDivide(ctx.r9.s32, ctx.r26.s32);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// bge cr6,0x82db857c
	if (!cr6.lt) goto loc_82DB857C;
	// li r27,2
	ctx.r27.s64 = 2;
	// mulli r28,r4,168
	ctx.r28.s64 = ctx.r4.s64 * 168;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82595718
	ctx.lr = 0x82DB850C;
	sub_82595718(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r31,12
	ctx.r29.s64 = ctx.r31.s64 + 12;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82dc2318
	ctx.lr = 0x82DB8530;
	sub_82DC2318(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// divw r26,r11,r26
	ctx.r26.s32 = PPCDivide(ctx.r11.s32, ctx.r26.s32);
	// beq cr6,0x82db8564
	if (cr6.eq) goto loc_82DB8564;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82b76760
	ctx.lr = 0x82DB8554;
	sub_82B76760(ctx, base);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x825952b8
	ctx.lr = 0x82DB8564;
	sub_825952B8(ctx, base);
loc_82DB8564:
	// mulli r11,r26,168
	ctx.r11.s64 = ctx.r26.s64 * 168;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// add r10,r28,r30
	ctx.r10.u64 = ctx.r28.u64 + ctx.r30.u64;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
loc_82DB857C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831cdb30
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB8584"))) PPC_WEAK_FUNC(sub_82DB8584);
PPC_FUNC_IMPL(__imp__sub_82DB8584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB8588"))) PPC_WEAK_FUNC(sub_82DB8588);
PPC_FUNC_IMPL(__imp__sub_82DB8588) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x831cdaec
	ctx.lr = 0x82DB8590;
	__savegprlr_29(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lbz r10,137(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 137);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82db85dc
	if (!cr6.eq) goto loc_82DB85DC;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_82DB85B4:
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x82db85c8
	if (!cr6.lt) goto loc_82DB85C8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82db85d0
	goto loc_82DB85D0;
loc_82DB85C8:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82DB85D0:
	// lbz r9,137(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 137);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82db85b4
	if (cr6.eq) goto loc_82DB85B4;
loc_82DB85DC:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, xer);
	// beq cr6,0x82db85f8
	if (cr6.eq) goto loc_82DB85F8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82db867c
	if (!cr6.lt) goto loc_82DB867C;
loc_82DB85F8:
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82db7508
	ctx.lr = 0x82DB8600;
	sub_82DB7508(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x82da8fd0
	ctx.lr = 0x82DB8618;
	sub_82DA8FD0(ctx, base);
	// lbz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 48);
	// addi r4,r31,56
	ctx.r4.s64 = ctx.r31.s64 + 56;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stb r10,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r10.u8);
	// bl 0x82b744e0
	ctx.lr = 0x82DB862C;
	sub_82B744E0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82db8340
	ctx.lr = 0x82DB8638;
	sub_82DB8340(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82db8190
	ctx.lr = 0x82DB864C;
	sub_82DB8190(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82da8c38
	ctx.lr = 0x82DB8658;
	sub_82DA8C38(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82da8c38
	ctx.lr = 0x82DB8660;
	sub_82DA8C38(ctx, base);
	// addi r3,r1,280
	ctx.r3.s64 = ctx.r1.s64 + 280;
	// bl 0x82da8c38
	ctx.lr = 0x82DB8668;
	sub_82DA8C38(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82da8c38
	ctx.lr = 0x82DB8670;
	sub_82DA8C38(ctx, base);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
loc_82DB867C:
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x831cdb3c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB8688"))) PPC_WEAK_FUNC(sub_82DB8688);
PPC_FUNC_IMPL(__imp__sub_82DB8688) {
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
	// beq cr6,0x82db86d4
	if (cr6.eq) goto loc_82DB86D4;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x82dc1760
	ctx.lr = 0x82DB86BC;
	sub_82DC1760(ctx, base);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82b76760
	ctx.lr = 0x82DB86D0;
	sub_82B76760(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_82DB86D4:
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

__attribute__((alias("__imp__sub_82DB86EC"))) PPC_WEAK_FUNC(sub_82DB86EC);
PPC_FUNC_IMPL(__imp__sub_82DB86EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DB86F0"))) PPC_WEAK_FUNC(sub_82DB86F0);
PPC_FUNC_IMPL(__imp__sub_82DB86F0) {
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
	// bge cr6,0x82db8728
	if (!cr6.lt) goto loc_82DB8728;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x82db872c
	if (!cr6.gt) goto loc_82DB872C;
loc_82DB8728:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82DB872C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82db877c
	if (cr6.eq) goto loc_82DB877C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,44
	ctx.r9.s64 = 44;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r7,r10,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// divw r30,r7,r9
	ctx.r30.s32 = PPCDivide(ctx.r7.s32, ctx.r9.s32);
	// bne cr6,0x82db8760
	if (!cr6.eq) goto loc_82DB8760;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835dc100
	ctx.lr = 0x82DB8760;
	sub_835DC100(ctx, base);
loc_82DB8760:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r11,r30,44
	ctx.r11.s64 = ctx.r30.s64 * 44;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82db87ac
	if (cr6.eq) goto loc_82DB87AC;
	// b 0x82db87a4
	goto loc_82DB87A4;
loc_82DB877C:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82db8794
	if (!cr6.eq) goto loc_82DB8794;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x835dc100
	ctx.lr = 0x82DB8794;
	sub_835DC100(ctx, base);
loc_82DB8794:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82db87ac
	if (cr6.eq) goto loc_82DB87AC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82DB87A4:
	// li r5,44
	ctx.r5.s64 = 44;
	// bl 0x831ce980
	ctx.lr = 0x82DB87AC;
	sub_831CE980(ctx, base);
loc_82DB87AC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
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

__attribute__((alias("__imp__sub_82DB87D0"))) PPC_WEAK_FUNC(sub_82DB87D0);
PPC_FUNC_IMPL(__imp__sub_82DB87D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,390
	ctx.r10.s64 = 25559040;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,168
	ctx.r9.s64 = 168;
	// ori r8,r10,6241
	ctx.r8.u64 = ctx.r10.u64 | 6241;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// subf r5,r4,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r4.s64;
	// divw r10,r6,r9
	ctx.r10.s32 = PPCDivide(ctx.r6.s32, ctx.r9.s32);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bge cr6,0x82db8804
	if (!cr6.lt) goto loc_82DB8804;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12056
	ctx.r3.s64 = ctx.r11.s64 + 12056;
	// b 0x831cc150
	sub_831CC150(ctx, base);
	return;
loc_82DB8804:
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
	// blt cr6,0x82db8834
	if (cr6.lt) goto loc_82DB8834;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_82DB8834:
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x82db8840
	if (!cr6.lt) goto loc_82DB8840;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_82DB8840:
	// b 0x82db84a8
	sub_82DB84A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DB8844"))) PPC_WEAK_FUNC(sub_82DB8844);
PPC_FUNC_IMPL(__imp__sub_82DB8844) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DB8848"))) PPC_WEAK_FUNC(sub_82DB8848);
PPC_FUNC_IMPL(__imp__sub_82DB8848) {
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
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r3,88
	ctx.r3.s64 = ctx.r3.s64 + 88;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8259cb28
	ctx.lr = 0x82DB886C;
	sub_8259CB28(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(ctx.r11.u32, 16, xer);
	// blt cr6,0x82db888c
	if (cr6.lt) goto loc_82DB888C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x825952b8
	ctx.lr = 0x82DB888C;
	sub_825952B8(ctx, base);
loc_82DB888C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
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

